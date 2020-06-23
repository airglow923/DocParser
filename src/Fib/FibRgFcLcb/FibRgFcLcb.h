#pragma once

#if !defined(__FIBRGFCLCB_H__)
#define __FIBRGFCLCB_H__

#include "FibRgFcLcb97.h"
#include "FibRgFcLcb2000.h"
#include "FibRgFcLcb2002.h"
#include "FibRgFcLcb2003.h"
#include "FibRgFcLcb2007.h"

#if defined(NFIB)
    #if NFIB == 0x00C1
        #define FibRgFcLcb FibRgFcLcb97
    #elif NFIB == 0x00D9
        #define FibRgFcLcb FibRgFcLcb2000
    #elif NFIB == 0x0101
        #define FibRgFcLcb FibRgFcLcb2002
    #elif NFIB == 0x010C
        #define FibRgFcLcb FibRgFcLcb2003
    #elif NFIB == 0x0112
        #define FibRgFcLcb FibRgFcLcb2007
    #endif
#endif

#endif