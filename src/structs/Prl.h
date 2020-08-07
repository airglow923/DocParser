#pragma once

#ifndef __PRL_H__
#define __PRL_H__

#include "Sprm.h"
#include "ToggleOperand.h"

typedef struct Prl {
    Sprm sprm;
    union {
        ToggleOperand toggleOperand;
        unsigned int one: 8;
        unsigned int two: 16;
        unsigned int three: 32;
        unsigned int four: 16;
        unsigned int five: 16;
        struct {
            unsigned char first;
            unsigned int *data;
        } six;
        unsigned int seven: 24;
    } operand;
} Prl;

#endif