#ifndef HYUNDEOK_HYUNDEOKHEAP_H
#define HYUNDEOK_HYUNDEOKHEAP_H

#include <stdio.h>

typedef struct HyundeokHeap {
  void* data;
  size_t size;
} HyundeokHeap;

HyundeokHeap* copy_struct_from_file(FILE* fp, size_t size);

#endif
