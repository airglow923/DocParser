#ifndef HYUNDEOK_DOCPARSER_READ_FIB_H
#define HYUNDEOK_DOCPARSER_READ_FIB_H

#include "hyundeok/docparser/msdoc/Fib/Fib.h"
#include "hyundeok/docparser/msdoc/Fib/FibBase.h"
#include "hyundeok/docparser/msdoc/Fib/FibRgCswNew/FibRgCswNew.h"

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

int read_FibBase(FibBase* restrict fibBase, FILE* restrict fp);
int read_FibRgCswNew(FibRgCswNew* restrict fibRgCswNew, FILE* restrict fp);
int read_Fib(Fib* restrict fib, FILE* restrict fp);

#ifdef __cplusplus
}
#endif

#endif
