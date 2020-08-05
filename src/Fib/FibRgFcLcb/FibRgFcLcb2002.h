#pragma once

#ifndef __FIBRGFCLCB2002_H__
#define __FIBRGFCLCB2002_H__

#include "FibRgFcLcb2000.h"

#define SZ_FIBRGFCLCB2002 1088

typedef struct FibRgFcLcb2002 {
    FibRgFcLcb2000 rgFcLcb2000;
    unsigned int fcUnused1: 32;
    unsigned int lcbUnused1: 32;
    unsigned int fcPlcfPgp: 32;
    unsigned int lcbPlcfPgp: 32;
    unsigned int fcPlcfuim: 32;
    unsigned int lcbPlcfuim: 32;
    unsigned int fcPlfguidUim: 32;
    unsigned int lcbPlfguidUim: 32;
    unsigned int fcAtrdExtra: 32;
    unsigned int lcbAtrdExtra: 32;
    unsigned int fcPlrsid: 32;
    unsigned int lcbPlrsid: 32;
    unsigned int fcSttbfBkmkFactoid: 32;
    unsigned int lcbSttbfBkmkFactoid: 32;
    unsigned int fcPlcfBkfFactoid: 32;
    unsigned int lcbPlcfBkfFactoid: 32;
    unsigned int fcPlcfcookie: 32;
    unsigned int lcbPlcfcookie: 32;
    unsigned int fcPlcfBklFactoid: 32;
    unsigned int lcbPlcfBklFactoid: 32;
    unsigned int fcFactoidData: 32;
    unsigned int lcbFactoidData: 32;
    unsigned int fcDocUndo: 32;
    unsigned int lcbDocUndo: 32;
    unsigned int fcSttbfBkmkFcc: 32;
    unsigned int lcbSttbfBkmkFcc: 32;
    unsigned int fcPlcfBkfFcc: 32;
    unsigned int lcbPlcfBkfFcc: 32;
    unsigned int fcPlcfBklFcc: 32;
    unsigned int lcbPlcfBklFcc: 32;
    unsigned int fcSttbfbkmkBPRepairs: 32;
    unsigned int lcbSttbfbkmkBPRepairs: 32;
    unsigned int fcPlcfbkfBPRepairs: 32;
    unsigned int lcbPlcfbkfBPRepairs: 32;
    unsigned int fcPlcfbklBPRepairs: 32;
    unsigned int lcbPlcfbklBPRepairs: 32;
    unsigned int fcPmsNew: 32;
    unsigned int lcbPmsNew: 32;
    unsigned int fcODSO: 32;
    unsigned int lcbODSO: 32;
    unsigned int fcPlcfpmiOldXP: 32;
    unsigned int lcbPlcfpmiOldXP: 32;
    unsigned int fcPlcfpmiNewXP: 32;
    unsigned int lcbPlcfpmiNewXP: 32;
    unsigned int fcPlcfpmiMixedXP: 32;
    unsigned int lcbPlcfpmiMixedXP: 32;
    unsigned int fcUnused2: 32;
    unsigned int lcbUnused2: 32;
    unsigned int fcPlcffactoid: 32;
    unsigned int lcbPlcffactoid: 32;
    unsigned int fcPlcflvcOldXP: 32;
    unsigned int lcbPlcflvcOldXP: 32;
    unsigned int fcPlcflvcNewXP: 32;
    unsigned int lcbPlcflvcNewXP: 32;
    unsigned int fcPlcflvcMixedXP: 32;
    unsigned int lcbPlcflvcMixedXP: 32;
} FibRgFcLcb2002;

#endif