#pragma once

#ifndef __FIB_H__
#define __FIB_H__

#include "FibBase.h"
#include "FibRgW97.h"
#include "FibRgLw97.h"
#include "FibRgFcLcb/FibRgFcLcb.h"
#include "FibRgCswNew/FibRgCswNew.h"

#include <stdint.h>

typedef struct Fib {
    FibBase base;
    uint16_t csw;
    FibRgW97 fibRgW;
    uint16_t cslw;
    FibRgLw97 fibRgLw;
    uint16_t cbRgFcLcb;
    union {
        FibRgFcLcb97    frfl97;
        FibRgFcLcb2000  frfl2000;
        FibRgFcLcb2002  frfl2002;
        FibRgFcLcb2003  frfl2003;
        FibRgFcLcb2007  frfl2007;
    } fibRgFcLcbBlob;
    uint16_t cswNew;
    FibRgCswNew fibRgCswNew;
} Fib;

#endif