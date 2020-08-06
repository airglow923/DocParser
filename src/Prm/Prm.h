#pragma once

#ifndef __PRM_H__
#define __PRM_H__

#include "Prm0.h"
#include "Prm1.h"

typedef struct Prm {
    unsigned int fComplex: 1;
    unsigned int data: 15;
} Prm;

#endif