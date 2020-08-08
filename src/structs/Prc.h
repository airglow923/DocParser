#pragma once

#ifndef __PRC_H__
#define __PRC_H__

#include "PrcData.h"

#include <stdint.h>

typedef struct Prc {
    uint8_t clxt;
    PrcData data;
} Prc;

#endif