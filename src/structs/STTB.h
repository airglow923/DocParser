#pragma once

#ifndef __STTB_H__
#define __STTB_H__

#include <stdint.h>

typedef struct STTB {
    unsigned int fExtend: 16;
    union {
        unsigned int fExtendNotExists: 8;
        unsigned int fExtendExists: 16;
    } cData;
    unsigned int cbExtra: 16;
    struct {
        union {
            unsigned int fExtendNotExists: 8;
            unsigned int fExtendExists: 16;
        } cchData;
        union {
            unsigned int fExtendNotExists: 8;
            unsigned int fExtendExists: 32;
        } data;
        uint8_t *extraData;
    } *sttb_array;
} STTB;

#endif