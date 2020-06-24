#pragma once

#ifndef __FIBRGFCLCB2007_H__
#define __FIBRGFCLCB2007_H__

#include "FibRgFcLcb2003.h"

typedef struct FibRgFcLcb2007 {
    FibRgFcLcb2003 rgFcLcb2003;
    unsigned int fcPlcfmthd: 32;
    unsigned int lcbPlcfmthd: 32;
    unsigned int fcSttbfBkmkMoveFrom: 32;
    unsigned int lcbSttbfBkmkMoveFrom: 32;
    unsigned int fcPlcfBkfMoveFrom: 32;
    unsigned int lcbPlcfBkfMoveFrom: 32;
    unsigned int fcPlcfBklMoveFrom: 32;
    unsigned int lcbPlcfBklMoveFrom: 32;
    unsigned int fcSttbfBkmkMoveTo: 32;
    unsigned int lcbSttbfBkmkMoveTo: 32;
    unsigned int fcPlcfBkfMoveTo: 32;
    unsigned int lcbPlcfBkfMoveTo: 32;
    unsigned int fcPlcfBklMoveTo: 32;
    unsigned int lcbPlcfBklMoveTo: 32;
    unsigned int fcUnused1: 32;
    unsigned int lcbUnused1: 32;
    unsigned int fcUnused2: 32;
    unsigned int lcbUnused2: 32;
    unsigned int fcUnused3: 32;
    unsigned int lcbUnused3: 32;
    unsigned int fcSttbfBkmkArto: 32;
    unsigned int lcbSttbfBkmkArto: 32;
    unsigned int fcPlcfBkfArto: 32;
    unsigned int lcbPlcfBkfArto: 32;
    unsigned int fcPlcfBklArto: 32;
    unsigned int lcbPlcfBklArto: 32;
    unsigned int fcArtoData: 32;
    unsigned int lcbArtoData: 32;
    unsigned int fcUnused4: 32;
    unsigned int lcbUnused4: 32;
    unsigned int fcUnused5: 32;
    unsigned int lcbUnused5: 32;
    unsigned int fcUnused6: 32;
    unsigned int lcbUnused6: 32;
    unsigned int fcOssTheme: 32;
    unsigned int lcbOssTheme: 32;
    unsigned int fcColorSchemeMapping: 32;
    unsigned int lcbColorSchemeMapping: 32;
} FibRgFcLcb2007;

#endif