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
    FibRgFcLcb fibRgFcLcbBlob;
    unsigned int cswNew: 16;
    FibRgCswNew fibRgCswNew;
} Fib;

#endif