#ifndef HYUNDEOK_DOCPARSER_MSDOC_FIB_FIBRGCSWNEW_FIBRGCSWNEWDATA2007_H
#define HYUNDEOK_DOCPARSER_MSDOC_FIB_FIBRGCSWNEW_FIBRGCSWNEWDATA2007_H

#include "hyundeok/docparser/msdoc/Fib/FibRgCswNew/FibRgCswNewData2000.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FibRgCswNewData2007 {
  FibRgCswNewData2000 rgCswNewData2000;
  unsigned int lidThemeOther : 16;
  unsigned int lidThemeFE : 16;
  unsigned int lidThemeCS : 16;
} FibRgCswNewData2007;

#ifdef __cplusplus
}
#endif

#endif
