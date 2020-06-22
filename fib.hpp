#pragma once

#if !defined(__FIB_HPP__)
#define __FIB_HPP__

#include <cstdint>

/*
 * The Fib structure contains information about the document and specifies the
 * file pointers to various portions that make up the document.
 * 
 * The Fib is a variable length structure. With the exception of the base
 * portion which is fixed in size, every section is preceded with a count field
 * that specifies the size of the next section.
 * 
 * References from Microsoft:
 * Fib: https://docs.microsoft.com/en-us/openspecs/office_file_formats/ms-doc/9aeaa2e7-4a45-468e-ab13-3f6193eb9394
 * FibBase: https://docs.microsoft.com/en-us/openspecs/office_file_formats/ms-doc/26fb6c06-4e5c-4778-ab4e-edbf26a545bb
 */

struct FibBase {
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
};

struct FibRgW97 {
    unsigned int reserved1 : 16;
    unsigned int reserved2 : 16;
    unsigned int reserved3 : 16;
    unsigned int reserved4 : 16;
    unsigned int reserved5 : 16;
    unsigned int reserved6 : 16;
    unsigned int reserved7 : 16;
    unsigned int reserved8 : 16;
    unsigned int reserved9 : 16;
    unsigned int reserved10: 16;
    unsigned int reserved11: 16;
    unsigned int reserved12: 16;
    unsigned int reserved13: 16;
    unsigned int lidFE     : 16;
}

struct FibRgLw97 {
    unsigned int cbMac     : 32;
    unsigned int reserved1 : 32;
    unsigned int reserved2 : 32;
    unsigned int ccpText   : 32;
    unsigned int ccpFtn    : 32;
    unsigned int ccpHdd    : 32;
    unsigned int reserved3 : 32;
    unsigned int ccpAtn    : 32;
    unsigned int ccpEdn    : 32;
    unsigned int ccpTxbx   : 32;
    unsigned int ccpHdrTxbx: 32;
    unsigned int reserved4 : 32;
    unsigned int reserved5 : 32;
    unsigned int reserved6 : 32;
    unsigned int reserved7 : 32;
    unsigned int reserved8 : 32;
    unsigned int reserved9 : 32;
    unsigned int reserved10: 32;
    unsigned int reserved11: 32;
    unsigned int reserved12: 32;
    unsigned int reserved13: 32;
    unsigned int reserved14: 32;
}

typedef struct FibRgFcLcb97 {
} FibRgFcLcb97;

typedef struct FibRgFcLcb2000 {
} FibRgFcLcb2000;

typedef struct FibRgFcLcb2002 {
} FibRgFcLcb2002;

typedef struct FibRgFcLcb2003 {
} FibRgFcLcb2003;

typedef struct FibRgFcLcb92007 {
} FibRgFcLcb2007;

#if nFib == 0x00C1
    #define FibRgFcLcb FibRgFcLcb97
#elif nFib == 0x00D9
    #define FibRgFcLcb FibRgFcLcb2000
#elif nFib == 0x0101
    #define FibRgFcLcb FibRgFcLcb2002
#elif nFib == 0x010C
    #define FibRgFcLcb FibRgFcLcb2003
#elif nFib == 0x0112
    #define FibRgFcLcb FibRgFcLcb2007
#endif

#if nFibNew == 0x00D9
    #define FibRgCswNewData2000
#elif nFibNew == 0x0101
    #define FibRgCswNewData2000
#elif nFibNew == 0x010C
    #define FibRgCswNewData2000
#elif nFibNew == 0x0112
    #define FibRgCswNewData2000
#endif

struct FibRgCswNew {
    unsigned int nFibNew:      16;
    unsigned int rgCswNewData: 16; 
};

struct Fib {
    unsigned int base     : 256;
    unsigned int FibVar1  : 256;
    unsigned int FibVar2  : 256;
    unsigned int csw      :  16;
    unsigned int fibRgW   : 224;
    unsigned int FibVar3  : 256;
    unsigned int FibVar4  : 256;
    unsigned int FibVar5  : 128;
    unsigned int cslw     :  16;
    unsigned int FibVar6  : 256;
    unsigned int FibVar7  : 256;
    unsigned int fibRgLw  : 704;
    unsigned int FibVar8  : 256;
    unsigned int FibVar9  : 256;
    unsigned int cbRgFcLcb:  16;
    FibRgFcLcb fibRgFcLcbBlob;
    unsigned int FibVar10 : 256;
    unsigned int cswNew   :  16;
    struct FibRgCswNew fibRgCswNew;
    unsigned int FibVar11 : 256;
};

#endif