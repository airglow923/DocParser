#pragma once

#ifndef __FIBRGFCLCB_H__
#define __FIBRGFCLCB_H__

#include "FibRgFcLcb97.h"
#include "FibRgFcLcb2000.h"
#include "FibRgFcLcb2002.h"
#include "FibRgFcLcb2003.h"
#include "FibRgFcLcb2007.h"

#ifdef NFIB

#if NFIB == 0x00C1
    typedef FibRgFcLcb97 FibRgFcLcb
#elif NFIB == 0x00D9
    typedef FibRgFcLcb2000 FibRgFcLcb
#elif NFIB == 0x0101
    typedef FibRgFcLcb2002 FibRgFcLcb
#elif NFIB == 0x010C
    typedef FibRgFcLcb2003 FibRgFcLcb
#elif NFIB == 0x0112
    typedef FibRgFcLcb2007 FibRgFcLcb
#endif

#endif

#endif