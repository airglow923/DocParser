#ifndef HYUNDEOK_DOCPARSER_UTILS_FILE_H
#define HYUNDEOK_DOCPARSER_UTILS_FILE_H

/* header inclusion and macro definition */

#if defined(_WIN32) || defined(WIN32) || defined(_WIN64) || defined(WIN64)

#define UNICODE

#include <fileapi.h>
#include <handleapi.h>
#include <inttypes.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef UNICODE
typedef wchar_t WINCHAR
#else
typedef char WINCHAR
#endif

#elif defined(unix) || defined(__unix) || defined(__unix__) ||                 \
    defined(__linux__)

#include <sys/types.h>
#include <sys/stat.h>

#endif

    /* function declaration */

    int
    is_big_endian(void);
int is_little_endian(void);

#if defined(_WIN32) || defined(WIN32) || defined(_WIN64) || defined(WIN64)

LONGLONG get_file_size(const WINCHAR* filename);

#elif defined(unix) || defined(__unix) || defined(__unix__) ||                 \
    defined(__linux__)

off_t get_file_size(const char* filename);

#endif

#ifdef __cplusplus
}
#endif

#endif
