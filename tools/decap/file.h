#pragma once

#include <string>
#include <vector>

struct Word
{
    unsigned char text[10];
    unsigned int len;
};

extern const std::vector<Word> WhitelistEntries;

class File
{
public:
    File(const std::string &filename);
    ~File() = default;

    void Save(const std::string &filename);

    void ProcessString(int location, int max_size);
    void ProcessStringArray(int location, int size, int count);
    void ProcessStringArray(int location, int size, int count, int stride);
    void ProcessStringPointerArray(int location, int count, int stride = 4);
    inline void SetWhitelist(const std::vector<Word> *whitelist) { m_Whitelist = whitelist; }
private:
    unsigned char *m_Buffer;
    long m_Pos, m_Size;
    const std::vector<Word> *m_Whitelist;
};