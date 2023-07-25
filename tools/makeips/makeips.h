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

#ifndef MAKEIPS_H
#define MAKEIPS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <list>

#define THROW_ERROR(...) \
    (std::fprintf(stderr, __VA_ARGS__), std::fprintf(stderr, "\n"), std::exit(1))

class Record final
{
public:
    using Bytes = std::vector<unsigned char>;
    Record(size_t offset, const Bytes &input, const Bytes &base) noexcept : m_Offset(offset) 
    {
        CopyBuffer(base, m_Base);
        CopyBuffer(input, m_Input);
    }
    ~Record() = default;
    Record(const Record&) = delete;
    Record(Record&&) noexcept = delete;
    Record& operator=(const Record&) = delete;
    Record& operator=(Record&&) noexcept = delete;

    const auto &GetInput() const noexcept { return m_Input; }
    const auto &GetBase() const noexcept { return m_Base; }
    const inline auto GetOffset() const noexcept { return m_Offset; }

private:
    void CopyBuffer(const Bytes &src, Bytes &dst)
    {
        dst.resize(src.size());
        memcpy(dst.data(), src.data(), src.size());
    }

    Bytes m_Input;
    Bytes m_Base;
    size_t m_Offset;
};

struct Context final 
{
    char **const argv;
    size_t inputsize, basesize;
    std::list<Record> records;
};

#endif // MAKEIPS_H