#pragma once

#ifndef __FIBRGCSWNEWDATA2007_H__
#define __FIBRGCSWNEWDATA2007_H__

#include "FibRgCswNewData2000.h"

#define SZ_FIBRGCSWNEWDATA2007 8

typedef struct FibRgCswNewData2007 {
    unsigned int rgCswNewData2000: SZ_FIBRGCSWNEWDATA2000 * 8;
    unsigned int lidThemeOther: 16;
    unsigned int lidThemeFE: 16;
    unsigned int lidThemeCS: 16;
} FibRgCswNewData2007;

#endif