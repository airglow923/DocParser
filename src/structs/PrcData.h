#pragma once

#ifndef __PRCDATA_H__
#define __PRCDATA_H__

#include "Prl.h"

#include <stdint.h>

typedef struct PrcData {
    int16_t cbGrpprl;
    Prl *GrpPrl;
} PrcData;

#endif