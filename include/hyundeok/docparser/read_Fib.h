#ifndef HYUNDEOK_DOCPARSER_READ_FIB_H
#define HYUNDEOK_DOCPARSER_READ_FIB_H

#include "hyundeok/HyundeokHeap.h"
#include "hyundeok/docparser/msdoc/Fib/Fib.h"

#ifdef __cplusplus
extern "C" {
#endif

int read_Fib(Fib* restrict dest, HyundeokHeap* restrict src);

#ifdef __cplusplus
}
#endif

#endif
