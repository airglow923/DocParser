#pragma once

#ifndef __PRM_H__
#define __PRM_H__

typedef struct Prm {
    unsigned int fComplex: 1;
    union {
        struct {
            unsigned int isprm: 7;
            unsigned int val: 8;
        } Prm0;
        struct {
            unsigned int igrppral: 15;
        } Prm1;
    } data;
} Prm;

#endif