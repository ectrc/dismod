#include "filesystem.h"

#include <fstream>
#include <filesystem>

#include "logger.h"

bool FileSystem::WriteFile(const wchar_t* Filename, const void* Data, int Len) {
    if (!Filename || !Data || Len <= 0) return false;

    try
    {
        std::filesystem::path path(Filename);
        if (path.has_parent_path()) std::filesystem::create_directories(path.parent_path());

        std::ofstream file(path, std::ios::binary);
        if (!file.is_open()) return false;

        file.write(reinterpret_cast<const char*>(Data), Len);
        return file.good();
    }
    catch (...)
    {
        return false;
    }
}

std::vector<std::byte> FileSystem::ReadFile(const wchar_t* Filename) {
    std::vector<std::byte> buffer;
    if (!Filename) return buffer;

    try
    {
        std::filesystem::path path(Filename);
        std::ifstream file(path, std::ios::binary | std::ios::ate);
        if (!file.is_open()) {
            LOG("file is not open");
            return buffer;
        }

        auto size = file.tellg();
        if (size <= 0) return buffer;

        buffer.resize(static_cast<size_t>(size));
        file.seekg(0, std::ios::beg);
        file.read(reinterpret_cast<char*>(buffer.data()), size);
    }
    catch (...)
    {
        LOG("failed to read bugger");
        buffer.clear();
    }

    return buffer;
}

std::vector<std::wstring> FileSystem::EnumerateFiles(const wchar_t* FolderPath) {
    std::vector<std::wstring> files;
    if (!FolderPath) return files;

    try
    {
        const std::filesystem::path folder(FolderPath);
        if (!std::filesystem::exists(folder) || !std::filesystem::is_directory(folder)) return files;

        for (auto& entry : std::filesystem::directory_iterator(folder))
        {
            if (entry.is_regular_file())
            {
                files.push_back(entry.path().filename().wstring());
            }
        }
    }
    catch (...)
    {}

    return files;
}

int64_t FileSystem::GetFileTimestamp(const wchar_t* Filename)
{
    if (!Filename) return -1;

    try
    {
        std::filesystem::path path(Filename);
        if (!std::filesystem::exists(path)) return -1;

        auto ftime = std::filesystem::last_write_time(path);

        auto sctp = std::chrono::time_point_cast<std::chrono::system_clock::duration>(
            ftime - std::filesystem::file_time_type::clock::now()
            + std::chrono::system_clock::now()
        );

        return std::chrono::duration_cast<std::chrono::seconds>(sctp.time_since_epoch()).count();
    }
    catch (...)
    {
        return -1;
    }
}