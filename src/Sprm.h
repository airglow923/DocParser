#pragma once

#ifndef __SPRM_H__
#define __SPRM_H__

typedef struct Sprm {
    unsigned int ispmd: 9;
    unsigned int A: 1;
    unsigned int sgc: 3;
    unsigned int spra: 3;
} Sprm;

#endif