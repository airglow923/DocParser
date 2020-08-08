#pragma once

#ifndef __PCD_H__
#define __PCD_H__

#include "FcCompressed.h"
#include "Prm.h"

typedef struct Pcd {
    struct {
        unsigned int fNoParaLast: 1;
        unsigned int fR1: 1;
        unsigned int fDirty: 1;
        unsigned int fR2: 13;
    } PcdFlags;
    FcCompressed fc;
    Prm prm;
} Pcd;

#endif