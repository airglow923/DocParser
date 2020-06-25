#pragma once

#ifndef __FIBRGW97_H__
#define __FIBRGW97_H__

#define SZ_FIBRGW97 28

typedef struct {
    unsigned int reserved1: 16;
    unsigned int reserved2: 16;
    unsigned int reserved3: 16;
    unsigned int reserved4: 16;
    unsigned int reserved5: 16;
    unsigned int reserved6: 16;
    unsigned int reserved7: 16;
    unsigned int reserved8: 16;
    unsigned int reserved9: 16;
    unsigned int reserved10: 16;
    unsigned int reserved11: 16;
    unsigned int reserved12: 16;
    unsigned int reserved13: 16;
    unsigned int lidFE: 16;
} FibRgW97;

#endif