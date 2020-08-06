#pragma once

#ifndef __PRCDATA_H__
#define __PRCDATA_H__

#include "Prl.h"

typedef struct PrcData {
    signed int cbGrpprl: 16;
    Prl *GrpPrl;
} PrcData;

#endif