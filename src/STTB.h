#pragma once

#ifndef __STTB_H__
#define __STTB_H__

typedef struct STTB {
    unsigned int fExtend: 16;
    union {
        unsigned int fExtendNotExists: 8;
        unsigned int fExtendExists: 16;
    } cData;
    unsigned int cbExtra: 16;
    union {
        unsigned int fExtendNotExists: 8;
        unsigned int fExtendExists: 16;
    } cchData;
    union {
        unsigned int fExtendNotExists: 8;
        unsigned int fExtendExists: 32;
    } cchData;
    unsigned int extraData: 16;
} STTB;

#endif