#pragma once

#ifndef __PRC_H__
#define __PRC_H__

#include "PrcData.h"

typedef struct Prc {
    unsigned int clxt: 8;
    PrcData data;
} Prc;

#endif