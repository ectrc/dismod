#ifndef DISMOD_FILESYSTEM_H
#define DISMOD_FILESYSTEM_H

#include <cstddef>
#include <string>
#include <vector>

class FileSystem
{
public:
    static bool WriteFile(
        const wchar_t* Filename,
        const void* Data,
        int Len
    );

    static std::vector<std::byte> ReadFile(const wchar_t* Filename);
    static int64_t GetFileTimestamp(const wchar_t* Filename);

    static std::vector<std::wstring> EnumerateFiles(const wchar_t* FolderPath);
};

#endif