#ifndef HYUNDEOK_DOCPARSER_UTILS_FILE_H
#define HYUNDEOK_DOCPARSER_UTILS_FILE_H

/* header inclusion and macro definition */

#if defined(_WIN32) || defined(WIN32) || defined(_WIN64) || defined(WIN64)

#define UNICODE

#include <fileapi.h>
#include <handleapi.h>
#include <inttypes.h>

#elif defined(unix) || defined(__unix) || defined(__unix__) ||                 \
    defined(__linux__)

#include <sys/types.h>
#include <sys/stat.h>

#endif

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef UNICODE
typedef wchar_t WINCHAR;
#else
typedef char WINCHAR;
#endif

typedef struct HyundeokHeap {
  void* data;
  size_t size;
} HyundeokHeap;

/* function declaration */

int is_big_endian(void);
int is_little_endian(void);
HyundeokHeap* copy_struct_from_file(FILE* fp, size_t size);

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
