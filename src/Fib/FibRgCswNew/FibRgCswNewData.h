#pragma once

#ifndef __FIBRGCSWNEWDATA_H__
#define __FIBRGCSWNEWDATA_H__

#if defined(NFIBNEW)

#if NFIBNEW == 0x00D9 || NFIBNEW == 0x0101 || NFIBNEW == 0x010C || NFIBNEW 0x0112
    typedef FibRgCswNewData FibRgCswNewData2000;
    #define SZ_FIBRGCSWNEWDATA SZ_FIBRGCSWNEWDATA2000
#elif NFIBNEW == 0x0112
    typedef FibRgCswNewData FibRgCswNewData2007;
    #define SZ_FIBRGCSWNEWDATA SZ_FIBRGCSWNEWDATA2007
#endif

#endif

#endif