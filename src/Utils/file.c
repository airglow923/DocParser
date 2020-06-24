#include "file.h"

#if defined(_WIN32) || defined(WIN32) || defined(_WIN64) || defined(WIN64)

LONGLONG get_file_size(const WINCHAR *filename)
{
    HANDLE hFile = CreateFile(filename, GENERIC_READ,
        FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL, NULL);

    if (hFile == INVALID_HANDLE_VALUE)
        return -1;

    LARGE_INTEGER size;

    if (!GetFileSizeEx(hFile, &size)) {
        CloseHandle(hFile);
        return -1;
    }

    CloseHandle(hFile);
    return size.QuadPart;
}

#elif defined(__unix__) || defined(__linux__)

off_t get_file_size(const char *filename)
{
    struct stat st;
    stat(filename, &st);
    return st.st_size;
}

#endif