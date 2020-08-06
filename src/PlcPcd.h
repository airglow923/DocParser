#pragma once

#ifndef __PLCPCD_H__
#define __PLCPCD_H__

#include "Pcdt.h"

#include <stdint.h>

typedef struct PlcPcd {
    uint32_t *aCP;
    Pcd *aPcd;
} PlcPcd;

#endif