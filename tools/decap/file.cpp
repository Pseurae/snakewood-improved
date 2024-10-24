#include "file.h"
#include "decap.h"

File::File(const std::string &filename)
{
    FILE *fp = fopen(filename.c_str(), "r");
    if (fp == NULL) FATAL_ERROR("Failed to open \"%s\" for reading.\n", filename.c_str());

    fseek(fp, 0, SEEK_END);

    m_Size = ftell(fp);
    if (m_Size < 0)
        FATAL_ERROR("File size of \"%s\" is less than zero.\n", filename.c_str());
    else if (m_Size == 0)
        return; // Empty file

    m_Buffer = new unsigned char[m_Size];
    rewind(fp);

    if (fread(m_Buffer, m_Size, 1, fp) != 1)
        FATAL_ERROR("Failed to read \"%s\".\n", filename.c_str());

    m_Pos = 0;

    fclose(fp);
}

void File::Save(const std::string &filename)
{
    FILE *fp = fopen(filename.c_str(), "w");
    if (fp == NULL) FATAL_ERROR("Failed to open \"%s\" for writing.\n", filename.c_str());
    
    fwrite(m_Buffer, m_Size, 1, fp);

    fclose(fp);
}

// 0x0 is space
// 0xBB - 0xD4 -> A - Z
// 0xD5 - 0xEE -> a - z
void File::ProcessString(int location, int max_size)
{
    bool shouldCapLetter = true;

    for (int j = 0; j < max_size; ++j)
    {
        int idx = location + j;
        if (idx > m_Size) FATAL_ERROR("Index %d is greater than file size (%ld)\n", idx, m_Size);

        unsigned char c = m_Buffer[idx];

        if (c == 0x0) 
        {
            shouldCapLetter = true;
        }
        else if ((c >= 0xBB && c <= 0xD4) && !shouldCapLetter) 
        {
            m_Buffer[idx] = c - 0xBB + 0xD5;
        }
        else if ((c >= 0x01 && c <= 0x14) && !shouldCapLetter)
        {
            m_Buffer[idx] = c - 0x01 + 0x16;
        }
        else if (c == 0xFF)
        {
            break;
        }
        else
        {
            shouldCapLetter = false;
        }
    }    
}

void File::ProcessStringArray(int location, int size, int count)
{
    for (int i = 0; i < count; ++i) ProcessString(location + i * size, size);
}

void File::ProcessStringPointerArray(int location, int count, int stride)
{
    if (location + 4 * count > m_Size) FATAL_ERROR("Pointer array end %d greater than file size (%ld)\n", location + 4 * count, m_Size);

    for (int i = 0; i < count; ++i)
    {
        unsigned int ptr = (m_Buffer[location] | m_Buffer[location + 1] << 8 | m_Buffer[location + 2] << 16 | m_Buffer[location + 3] << 24);
        ptr -= 0x8000000;

        if (ptr > m_Size) FATAL_ERROR("Pointer %d greater than file size (%ld)\n", ptr, m_Size);
        ProcessString(ptr, __INT32_MAX__);
        location += stride;
    }
}
