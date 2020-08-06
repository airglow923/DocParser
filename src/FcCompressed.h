#pragma once

#ifndef __FCCOMPRESSED_H__
#define __FCCOMPRESSED_H__

typedef struct FcCompressed {
    unsigned int fc: 30;
    unsigned int fCompressed: 1;
    unsigned int r1: 1;
} FcCompressed;

#endif