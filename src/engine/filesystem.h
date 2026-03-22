#ifndef DISMOD_FILESYSTEM_H
#define DISMOD_FILESYSTEM_H

#include <cstddef>
#include <string>
#include <vector>
#include <filesystem>

class FileSystem
{
public:
    static bool WriteFile(
        const std::filesystem::path& path,
        const void* data,
        size_t len
    );

    static std::vector<std::byte> ReadFile(const std::filesystem::path& path);

    static int64_t GetFileTimestamp(const std::filesystem::path& path);

    static std::vector<std::filesystem::path> EnumerateFiles(
        const std::filesystem::path& folder
    );

    static bool Exists(const std::filesystem::path& path);
};

#endif