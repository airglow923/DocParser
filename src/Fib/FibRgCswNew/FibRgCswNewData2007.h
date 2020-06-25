#pragma once

#ifndef __FIBRGCSWNEWDATA2007_H__
#define __FIBRGCSWNEWDATA2007_H__

#define SZ_FIBRGCSWNEWDATA2007 8

typedef struct {
    unsigned int rgCswNewData2000: 16;
    unsigned int lidThemeOther: 16;
    unsigned int lidThemeFE: 16;
    unsigned int lidThemeCS: 16;
} FibRgCswNewData2007;

#endif