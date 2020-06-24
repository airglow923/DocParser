#pragma once

#ifndef __FIBBASE_H__
#define __FIBBASE_H__

typedef struct FibBase {
    unsigned int wident   : 16;
    unsigned int nFib     : 16;
    unsigned int          : 16;
    unsigned int lid      : 16;
    unsigned int pnNext   : 16;
    unsigned int A        :  1;
    unsigned int B        :  1;
    unsigned int C        :  1;
    unsigned int D        :  1;
    unsigned int E        :  4;
    unsigned int F        :  1;
    unsigned int G        :  1;
    unsigned int H        :  1;
    unsigned int I        :  1;
    unsigned int J        :  1;
    unsigned int K        :  1;
    unsigned int L        :  1;
    unsigned int M        :  1;
    unsigned int nFibBack : 16;
    unsigned int lKey     : 32;
    unsigned int envr     :  8;
    unsigned int N        :  1;
    unsigned int O        :  1;
    unsigned int P        :  1;
    unsigned int Q        :  1;
    unsigned int R        :  1;
    unsigned int S        :  3;
    unsigned int reserved3: 16;
    unsigned int reserved4: 16;
    unsigned int reserved5: 32;
    unsigned int reserved6: 32;
} FibBase;

#endif