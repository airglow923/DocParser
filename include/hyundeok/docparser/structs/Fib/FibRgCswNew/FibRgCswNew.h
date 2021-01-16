#ifndef HYUNDEOK_DOCPARSER_STRUCTS_FIB_FIBRGCSWNEW_FIBRGCSWNEW_H
#define HYUNDEOK_DOCPARSER_STRUCTS_FIB_FIBRGCSWNEW_FIBRGCSWNEW_H

#include "hyundeok/docparser/structs/Fib/FibRgCswNew/FibRgCswNewData.h"

#include <stdint.h>

typedef struct FibRgCswNew {
  uint16_t nFibNew;
  union {
    FibRgCswNewData2000 frcnd2000;
    FibRgCswNewData2007 frcnd2007;
  } rgCswNewData;
} FibRgCswNew;

#endif
