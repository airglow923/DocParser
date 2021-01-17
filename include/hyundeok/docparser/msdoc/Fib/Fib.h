#ifndef HYUNDEOK_DOCPARSER_MSDOC_FIB_FIB_H
#define HYUNDEOK_DOCPARSER_MSDOC_FIB_FIB_H

#include "hyundeok/docparser/msdoc/Fib/FibBase.h"
#include "hyundeok/docparser/msdoc/Fib/FibRgW97.h"
#include "hyundeok/docparser/msdoc/Fib/FibRgLw97.h"
#include "hyundeok/docparser/msdoc/Fib/FibRgFcLcb/FibRgFcLcb.h"
#include "hyundeok/docparser/msdoc/Fib/FibRgCswNew/FibRgCswNew.h"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Fib {
  FibBase base;
  uint16_t csw;
  FibRgW97 fibRgW;
  uint16_t cslw;
  FibRgLw97 fibRgLw;
  uint16_t cbRgFcLcb;
  union {
    FibRgFcLcb97 frfl97;
    FibRgFcLcb2000 frfl2000;
    FibRgFcLcb2002 frfl2002;
    FibRgFcLcb2003 frfl2003;
    FibRgFcLcb2007 frfl2007;
  } fibRgFcLcbBlob;
  uint16_t cswNew;
  FibRgCswNew fibRgCswNew;
} Fib;

#ifdef __cplusplus
}
#endif

#endif
