#pragma once

#ifndef __PCDT_H__
#define __PCDT_H__

#include "PlcPcd.h"

typedef struct Pcdt {
    unsigned int clxt: 8;
    unsigned int lcb: 32;
    PlcPcd *plcPcd;
} Pcdt;

#endif