#pragma once

#ifndef __PCD_H__
#define __PCD_H__

#include "FcCompressed.h"
#include "Prm/Prm.h"

typedef struct Pcd {
    unsigned int fNoParaLast: 1;
    unsigned int fR1: 1;
    unsigned int fDirty: 1;
    unsigned int fR2: 13;
    FcCompressed fc;
    Prm prm;
} Pcd;

#endif