#ifndef HYUNDEOK_HYUNDEOKHEAP_H
#define HYUNDEOK_HYUNDEOKHEAP_H

#include <stdio.h>

typedef struct HyundeokHeap {
  void* data;
  size_t size;
} HyundeokHeap;

HyundeokHeap* create_heap(FILE* fp, size_t size);
void destroy_heap(HyundeokHeap* heap);

#endif
