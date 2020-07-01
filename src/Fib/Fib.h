#pragma once

#ifndef __FIB_H__
#define __FIB_H__

#include "FibBase.h"
#include "FibRgW97.h"
#include "FibRgLw97.h"
#include "FibRgFcLcb/FibRgFcLcb.h"
#include "FibRgCswNew/FibRgCswNew.h"

typedef struct {
    unsigned int base: SZ_FIBBASE * 8;
    unsigned int csw: 16;
    unsigned int fibRgW: SZ_FIBRGW97 * 8;
    unsigned int cslw: 16;
    unsigned int fibRgLw: SZ_FIBRGLW97 * 8;
    unsigned int cbRgFcLcb: 16;
    union {
        FibRgFcLcb97    frfl97;
        FibRgFcLcb2000  frfl2000;
        FibRgFcLcb2002  frfl2002;
        FibRgFcLcb2003  frfl2003;
        FibRgFcLcb2007  frfl2007;
    } fibRgFcLcbBlob;
    unsigned int cswNew: 16;
    FibRgCswNew fibRgCswNew;
} Fib;

#endif