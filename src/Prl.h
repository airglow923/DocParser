#pragma once

#ifndef __PRL_H__
#define __PRL_H__

#include "Sprm.h"

typedef struct Prl {
    unsigned int sprm: 16;
    union {
        unsigned int toggleOperand: 8;
        unsigned int one: 8;
        unsigned int two: 16;
        unsigned int three: 32;
        unsigned int four: 16;
        unsigned int five: 16;
        unsigned int six: 1;
        unsigned int seven: 24;
    } operand;
} Prl;

#endif