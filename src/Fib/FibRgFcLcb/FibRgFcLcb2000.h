#pragma once

#ifndef __FIBRGFCLCB2000_H__
#define __FIBRGFCLCB2000_H__

#include "FibRgFcLcb97.h"

#define SZ_FIBRGFCLCB2000 864

typedef struct FibRgFcLcb2000 {
    unsigned int rgFcLcb97: SZ_FIBRGFCLCB97 * 8;
    unsigned int fcPlcfTch: 32;
    unsigned int lcbPlcfTch: 32;
    unsigned int fcRmdThreading: 32;
    unsigned int lcbRmdThreading: 32;
    unsigned int fcMid: 32;
    unsigned int lcbMid: 32;
    unsigned int fcSttbRgtplc: 32;
    unsigned int lcbSttbRgtplc: 32;
    unsigned int fcMsoEnvelope: 32;
    unsigned int lcbMsoEnvelope: 32;
    unsigned int fcPlcfLad: 32;
    unsigned int lcbPlcfLad: 32;
    unsigned int fcRgDofr: 32;
    unsigned int lcbRgDofr: 32;
    unsigned int fcPlcosl: 32;
    unsigned int lcbPlcosl: 32;
    unsigned int fcPlcfCookieOld: 32;
    unsigned int lcbPlcfCookieOld: 32;
    unsigned int fcPgdMotherOld: 32;
    unsigned int lcbPgdMotherOld: 32;
    unsigned int fcBkdMotherOld: 32;
    unsigned int lcbBkdMotherOld: 32;
    unsigned int fcPgdFtnOld: 32;
    unsigned int lcbPgdFtnOld: 32;
    unsigned int fcBkdFtnOld: 32;
    unsigned int lcbBkdFtnOld: 32;
    unsigned int fcPgdEdnOld: 32;
    unsigned int lcbPgdEdnOld: 32;
    unsigned int fcBkdEdnOld: 32;
    unsigned int lcbBkdEdnOld: 32;
} FibRgFcLcb2000;

#endif