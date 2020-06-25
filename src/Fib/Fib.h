#pragma once

#ifndef __FIB_H__
#define __FIB_H__

#include "FibBase.h"
#include "FibRgW97.h"
#include "FibRgLw97.h"
#include "FibRgFcLcb/FibRgFcLcb.h"
#include "FibRgCswNew/FibRgCswNew.h"

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

typedef struct {
    unsigned int base: SZ_FIBBASE * 8;
    unsigned int csw:  16;
    unsigned int fibRgW: SZ_FIBRGW97 * 8;
    unsigned int cslw:  16;
    unsigned int fibRgLw: SZ_FIBRGLW97 * 8;
    unsigned int cbRgFcLcb:  16;
    FibRgFcLcb fibRgFcLcbBlob;
    unsigned int cswNew:  16;
    FibRgCswNew fibRgCswNew;
} Fib;

#endif