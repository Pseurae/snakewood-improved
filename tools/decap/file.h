#pragma once

#include <string>

class File
{
public:
    File(const std::string &filename);
    ~File() = default;

    void Save(const std::string &filename);

    void ProcessString(int location, int max_size);
    void ProcessStringArray(int location, int size, int count);
    void ProcessStringPointerArray(int location, int count, int stride = 4);
private:
    unsigned char *m_Buffer;
    long m_Pos, m_Size;
};