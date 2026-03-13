#ifndef DISMOD_FILESYSTEM_H
#define DISMOD_FILESYSTEM_H

#include <cstddef>

class FileSystem
{
public:
    static bool WriteFile(
        const wchar_t* Filename,
        const void* Data,
        int Len
    );

    static int ReadFile(
        const wchar_t* Filename,
        void** OutData
    );
};

#endif