#ifndef HYUNDEOK_DOCPARSER_READ_FIB_H
#define HYUNDEOK_DOCPARSER_READ_FIB_H

#include "hyundeok/docparser/structs/Fib/Fib.h"
#include "hyundeok/docparser/structs/Fib/FibBase.h"
#include "hyundeok/docparser/structs/Fib/FibRgFcLcb/FibRgFcLcb.h"

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

void read_Fib(Fib* restrict fib, FILE* restrict fp);

#ifdef __cplusplus
}
#endif

#endif
