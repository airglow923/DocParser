#include "hyundeok/docparser/utils/file.h"

#include "hyundeok/macro.h"

#include <stdlib.h>

int is_big_endian(void) {
  int i = 0x1234;
  char* ch = (char*)&i;
  return *ch == 0x12;
}

int is_small_endian(void) {
  int i = 0x1234;
  char* ch = (char*)&i;
  return *ch == 0x34;
}

HyundeokHeap* copy_struct_from_file(FILE* fp, size_t size) {
  HyundeokHeap* heap = malloc(sizeof(HyundeokHeap));
  HYUNDEOK_MEMORY_ASSERT(heap,);

  heap->data = malloc(size);

  // if allocation of heap->data fails, deallocate heap
  HYUNDEOK_MEMORY_ASSERT(heap, free(heap));

  heap->size = size;

  const size_t res = fread(heap->data, size, 1, fp);

  // if fread fails, deallocate heap->data and heap
  HYUNDEOK_ASSERT(res, 1, NULL, free(heap->data); free(heap));

  return heap;
}

#if defined(_WIN32) || defined(WIN32) || defined(_WIN64) || defined(WIN64)

LONGLONG get_file_size(const WINCHAR* filename) {
  HANDLE hFile =
      CreateFile(filename, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE,
                 NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

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

off_t get_file_size(const char* filename) {
  struct stat st;
  stat(filename, &st);
  return st.st_size;
}

#endif
