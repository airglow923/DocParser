#pragma once

#ifndef __PCDT_H__
#define __PCDT_H__

#include "PlcPcd.h"

#include <stdint.h>

typedef struct Pcdt {
    uint8_t clxt;
    uint32_t lcb;
    PlcPcd *plcPcd;
} Pcdt;

#endif