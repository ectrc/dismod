#include "filesystem.h"

#include <fstream>
#include <filesystem>

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

int FileSystem::ReadFile(const wchar_t* Filename, void** OutData) {
    if (!Filename || !OutData) return -1;

    try
    {
        std::filesystem::path path(Filename);
        std::ifstream file(path, std::ios::binary | std::ios::ate);

        if (!file.is_open()) return -1;

        std::streamsize size = file.tellg();
        file.seekg(0, std::ios::beg);

        if (size <= 0) return -1;
        char* buffer = new char[size];

        if (!file.read(buffer, size))
        {
            delete[] buffer;
            return -1;
        }

        *OutData = buffer;
        return static_cast<int>(size);
    }
    catch (...)
    {
        return -1;
    }
}