#pragma once

#ifndef __FIBRGCSWNEW_H__
#define __FIBRGCSWNEW_H__

#include "FibRgCswNewData.h"

typedef struct FibRgCswNew {
    unsigned int nFibNew: 16;
    union {
        FibRgCswNewData2000 frcnd2000;
        FibRgCswNewData2007 frcnd2007;
    } rgCswNewData;
} FibRgCswNew;

#endif