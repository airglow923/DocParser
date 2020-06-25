#pragma once

#ifndef __FIBRGCSWNEW_H__
#define __FIBRGCSWNEW_H__

#include "FibRgCswNewData.h"

typedef struct {
    unsigned int nFibNew:      16;
    FibRgCswNewData rgCswNewData; 
} FibRgCswNew;

#endif