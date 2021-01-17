#ifndef HYUNDEOK_DOCPARSER_READ_FIB_H
#define HYUNDEOK_DOCPARSER_READ_FIB_H

#include "hyundeok/docparser/msdoc/Fib/Fib.h"

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

int read_Fib(Fib* restrict fib, FILE* restrict fp);

#ifdef __cplusplus
}
#endif

#endif
