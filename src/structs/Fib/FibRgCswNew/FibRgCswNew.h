#pragma once

#ifndef __FIBRGCSWNEW_H__
#define __FIBRGCSWNEW_H__

#include "FibRgCswNewData.h"

#include <stdint.h>

typedef struct FibRgCswNew {
    uint16_t nFibNew;
    union {
        FibRgCswNewData2000 frcnd2000;
        FibRgCswNewData2007 frcnd2007;
    } rgCswNewData;
} FibRgCswNew;

#endif