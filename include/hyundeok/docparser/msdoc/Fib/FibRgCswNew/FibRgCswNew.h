#ifndef HYUNDEOK_DOCPARSER_MSDOC_FIB_FIBRGCSWNEW_FIBRGCSWNEW_H
#define HYUNDEOK_DOCPARSER_MSDOC_FIB_FIBRGCSWNEW_FIBRGCSWNEW_H

#include "hyundeok/docparser/msdoc/Fib/FibRgCswNew/FibRgCswNewData.h"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FibRgCswNew {
  uint16_t nFibNew;
  union {
    FibRgCswNewData2000 frcnd2000;
    FibRgCswNewData2007 frcnd2007;
  } rgCswNewData;
} FibRgCswNew;

#ifdef __cplusplus
}
#endif

#endif
