#include "filesystem.h"

#include <fstream>
#include <chrono>

#include "logger.h"

bool FileSystem::WriteFile(const std::filesystem::path& path, const void* data, size_t len) {
    if (!data || len == 0) return false;

    try {
        if (path.has_parent_path())
            std::filesystem::create_directories(path.parent_path());

        std::ofstream file(path, std::ios::binary);
        if (!file.is_open()) return false;

        file.write(reinterpret_cast<const char*>(data), static_cast<std::streamsize>(len));
        return file.good();
    }
    catch (...) {
        return false;
    }
}

std::vector<std::byte> FileSystem::ReadFile(const std::filesystem::path& path) {
    std::vector<std::byte> buffer;

    try {
        std::ifstream file(path, std::ios::binary | std::ios::ate);
        if (!file.is_open())
        {
            LOG("file is not open");
            return buffer;
        }

        std::streamsize size = file.tellg();
        if (size <= 0) return buffer;

        buffer.resize(static_cast<size_t>(size));

        file.seekg(0, std::ios::beg);
        if (!file.read(reinterpret_cast<char*>(buffer.data()), size))
        {
            buffer.clear();
        }
    }
    catch (...) {
        LOG("failed to read buffer");
        buffer.clear();
    }

    return buffer;
}

int64_t FileSystem::GetFileTimestamp(const std::filesystem::path& path) {
    try {
        if (!std::filesystem::exists(path)) return -1;

        auto ftime = std::filesystem::last_write_time(path);

        auto sctp = std::chrono::time_point_cast<std::chrono::system_clock::duration>(
            ftime - std::filesystem::file_time_type::clock::now()
            + std::chrono::system_clock::now()
        );

        return std::chrono::duration_cast<std::chrono::seconds>(
            sctp.time_since_epoch()
        ).count();
    }
    catch (...) {
        return -1;
    }
}

std::vector<std::filesystem::path> FileSystem::EnumerateFiles(const std::filesystem::path& folder) {
    std::vector<std::filesystem::path> files;

    try {
        if (!std::filesystem::exists(folder) || !std::filesystem::is_directory(folder)) return files;

        for (const auto& entry : std::filesystem::directory_iterator(folder)) {
            if (entry.is_regular_file()) {
                files.push_back(entry.path().filename());
            }
        }
    }
    catch (...)
    {}

    return files;
}

bool FileSystem::Exists(const std::filesystem::path& path) {
    try {
        return std::filesystem::exists(path);
    }
    catch (...) {
        return false;
    }
}