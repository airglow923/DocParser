#pragma once

#ifndef __FIBRGFCLCB2003_H__
#define __FIBRGFCLCB2003_H__

#include "FibRgFcLcb2002.h"

#define SZ_FIBRGFCLCB2003 1312

typedef struct FibRgFcLcb2003 {
    FibRgFcLcb2002 rgFcLcb2002;
    unsigned int fcHplxsdr: 32;
    unsigned int lcbHplxsdr: 32;
    unsigned int fcSttbfBkmkSdt: 32;
    unsigned int lcbSttbfBkmkSdt: 32;
    unsigned int fcPlcfBkfSdt: 32;
    unsigned int lcbPlcfBkfSdt: 32;
    unsigned int fcPlcfBklSdt: 32;
    unsigned int lcbPlcfBklSdt: 32;
    unsigned int fcCustomXForm: 32;
    unsigned int lcbCustomXForm: 32;
    unsigned int fcSttbfBkmkProt: 32;
    unsigned int lcbSttbfBkmkProt: 32;
    unsigned int fcPlcfBkfProt: 32;
    unsigned int lcbPlcfBkfProt: 32;
    unsigned int fcPlcfBklProt: 32;
    unsigned int lcbPlcfBklProt: 32;
    unsigned int fcSttbProtUser: 32;
    unsigned int lcbSttbProtUser: 32;
    unsigned int fcUnused: 32;
    unsigned int lcbUnused: 32;
    unsigned int fcPlcfpmiOld: 32;
    unsigned int lcbPlcfpmiOld: 32;
    unsigned int fcPlcfpmiOldInline: 32;
    unsigned int lcbPlcfpmiOldInline: 32;
    unsigned int fcPlcfpmiNew: 32;
    unsigned int lcbPlcfpmiNew: 32;
    unsigned int fcPlcfpmiNewInline: 32;
    unsigned int lcbPlcfpmiNewInline: 32;
    unsigned int fcPlcflvcOld: 32;
    unsigned int lcbPlcflvcOld: 32;
    unsigned int fcPlcflvcOldInline: 32;
    unsigned int lcbPlcflvcOldInline: 32;
    unsigned int fcPlcflvcNew: 32;
    unsigned int lcbPlcflvcNew: 32;
    unsigned int fcPlcflvcNewInline: 32;
    unsigned int lcbPlcflvcNewInline: 32;
    unsigned int fcPgdMother: 32;
    unsigned int lcbPgdMother: 32;
    unsigned int fcBkdMother: 32;
    unsigned int lcbBkdMother: 32;
    unsigned int fcAfdMother: 32;
    unsigned int lcbAfdMother: 32;
    unsigned int fcPgdFtn: 32;
    unsigned int lcbPgdFtn: 32;
    unsigned int fcBkdFtn: 32;
    unsigned int lcbBkdFtn: 32;
    unsigned int fcAfdFtn: 32;
    unsigned int lcbAfdFtn: 32;
    unsigned int fcPgdEdn: 32;
    unsigned int lcbPgdEdn: 32;
    unsigned int fcBkdEdn: 32;
    unsigned int lcbBkdEdn: 32;
    unsigned int fcAfdEdn: 32;
    unsigned int lcbAfdEdn: 32;
    unsigned int fcAfd: 32;
    unsigned int lcbAfd: 32;
} FibRgFcLcb2003;

#endif