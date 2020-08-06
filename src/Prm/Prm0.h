#pragma once

#ifndef __PRM0_H__
#define __PRM0_H__

typedef struct Prm0 {
    unsigned int fComplex: 1;
    unsigned int isprm: 7;
    unsigned int val: 8;
} Prm0;

#endif