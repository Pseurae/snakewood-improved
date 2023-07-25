/*
    Copyright 2023 Pseurae

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the “Software”), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
    copies of the Software, and to permit persons to whom the Software is 
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
    THE SOFTWARE.
*/

#include "makeips.h"

void fill_records(Context &ctx)
{
    std::ifstream input(ctx.argv[1], std::ios::binary | std::ios::ate), base(ctx.argv[2], std::ios::binary | std::ios::ate);
    if (input.fail())
        throw std::runtime_error("cannot open input file");
    if (base.fail())
        throw std::runtime_error("cannot open base file");

    size_t inputsize = input.tellg(), basesize = base.tellg();

    input.seekg(0), base.seekg(0);

    bool changed = false;

    size_t offset = 0;
    Record::Bytes bufferInput = {}, bufferBase = {};

    while (!input.eof() || !base.eof())
    {
        char i, b;
        input.read(&i, 1);
        base.read(&b, 1);

        if (!changed)
        {
            if (i != b)
            {
                offset = (size_t)base.tellg() - 1;
                bufferInput.push_back(i);
                bufferBase.push_back(b);
                changed = true;
            }
        }
        else
        {
            if (i == b)
            {
                ctx.records.emplace_back(offset, bufferInput, bufferBase);
                bufferInput.clear();
                bufferBase.clear();
                changed = false;
            }
            else
            {
                bufferInput.push_back(i);
                bufferBase.push_back(b);
            }
        }
    }

    if (changed)
    {
        ctx.records.emplace_back(offset, bufferInput, bufferBase);
        bufferInput.clear();
        bufferBase.clear();
    }

    if (inputsize > basesize)
    {
        bufferInput.resize(inputsize - basesize);
        input.read((char *)bufferInput.data(), inputsize - basesize);

        bufferBase.resize(inputsize - basesize);
        std::memset((char *)bufferBase.data(), 0, inputsize - basesize);   

        ctx.records.emplace_back(basesize, bufferInput, bufferBase);
        bufferInput.clear();
        bufferBase.clear();
    }

    ctx.inputsize = inputsize;
    ctx.basesize = basesize;

    input.close();
    base.close();
}

void generate_ips_patch(Context &ctx)
{
    std::ofstream patch(ctx.argv[3], std::ios::binary);
    patch.write("PATCH", 5);

    for (auto &r : ctx.records)
    {
        unsigned int address = r.GetOffset();

        if (address >= 0x1000000)
            throw std::runtime_error("address too big");

        auto data = r.GetInput();
        unsigned short size = data.size();
        unsigned int offset = 0;

        if (size == 0)
            throw std::runtime_error("size is 0");

        while (size)
        {
            unsigned char block[5] = { 0 };
            unsigned char rle_block[3] = { 0 };
            unsigned int localAddress = address + offset;
            unsigned short localSize = size % __UINT16_MAX__;
            size -= localSize;

            auto addressBytes = reinterpret_cast<unsigned char *>(&localAddress);
            auto sizeBytes = reinterpret_cast<unsigned char *>(&localSize);

            if (std::adjacent_find(data.begin(), data.end(), std::not_equal_to<unsigned char>()) == data.end() && size > 2)
            {

                block[0] = addressBytes[2];
                block[1] = addressBytes[1];
                block[2] = addressBytes[0];

                block[3] = 0;
                block[4] = 0;

                patch.write((char *)block, 5);

                rle_block[0] = sizeBytes[1];
                rle_block[1] = sizeBytes[0];
                rle_block[2] = data[0];

                patch.write((char *)rle_block, 3);
            }
            else
            {
                block[0] = addressBytes[2];
                block[1] = addressBytes[1];
                block[2] = addressBytes[0];

                block[3] = sizeBytes[1];
                block[4] = sizeBytes[0];

                patch.write((char *)block, 5);
                patch.write((char *)data.data(), localSize);
            }

            offset += localSize;
        }
    }

    patch.write("EOF", 3);
    patch.close();
}

void generate_patch(Context &ctx)
{
    if (ctx.records.empty())
        throw std::runtime_error("no file diff");

    generate_ips_patch(ctx);
}

void create_patch(Context &ctx)
{
    fill_records(ctx);
    generate_patch(ctx);
}

int main(int argc, char *argv[])
{
    if (argc < 4)
        THROW_ERROR("error: patch [INPUT] [BASE] [OUTPUT]");

    Context ctx { argv };

    try 
    {
        create_patch(ctx);
    }
    catch (std::runtime_error &err)
    {
        THROW_ERROR("error: %s", err.what());
    }

    return 0;
}