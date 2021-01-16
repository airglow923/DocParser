#ifndef HYUNDEOK_DOCPARSER_STRUCTS_FIB_FIBRGCSWNEW_FIBRGCSWNEWDATA2007_H
#define HYUNDEOK_DOCPARSER_STRUCTS_FIB_FIBRGCSWNEW_FIBRGCSWNEWDATA2007_H

#include "hyundeok/docparser/structs/Fib/FibRgCswNew/FibRgCswNewData2000.h"

#define SZ_FIBRGCSWNEWDATA2007 8

typedef struct FibRgCswNewData2007 {
  FibRgCswNewData2000 rgCswNewData2000;
  unsigned int lidThemeOther : 16;
  unsigned int lidThemeFE : 16;
  unsigned int lidThemeCS : 16;
} FibRgCswNewData2007;

#endif
