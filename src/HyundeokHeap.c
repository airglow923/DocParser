#include "hyundeok/HyundeokHeap.h"

#include "hyundeok/macro.h"

#include <stdlib.h>
#include <string.h>

HyundeokHeap* create_file(FILE* fp, size_t size) {
  HyundeokHeap* heap = malloc(sizeof(HyundeokHeap));
  HYUNDEOK_MEMORY_ASSERT(heap,);

  heap->data = malloc(size);

  // if allocation of heap->data fails, deallocate heap
  HYUNDEOK_MEMORY_ASSERT(heap->data, free(heap));
  // set memeory to 0
  memset(heap->data, 0, size);

  heap->size = size;

  const size_t res = fread(heap->data, size, 1, fp);

  // if fread fails, deallocate heap->data and heap
  HYUNDEOK_ASSERT(res, 1, NULL, free(heap->data); free(heap));

  return heap;
}

void destroy_heap(HyundeokHeap* heap) {
  free(heap->data);
  heap->data = NULL;
  heap->size = 0;
  free(heap);
}

