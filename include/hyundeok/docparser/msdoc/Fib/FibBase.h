#ifndef HYUNDEOK_DOCPARSER_MSDOC_FIB_FIBBASE_H
#define HYUNDEOK_DOCPARSER_MSDOC_FIB_FIBBASE_H

#include "hyundeok/docparser/msdoc/LID.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FibBase {
  unsigned int wident : 16;
  unsigned int nFib : 16;
  unsigned int unused : 16;
  LID lid;
  unsigned int pnNext : 16;
  unsigned int fDot : 1;
  unsigned int fGlay : 1;
  unsigned int fComplex : 1;
  unsigned int fHasPlc : 1;
  unsigned int cQuickSaves : 4;
  unsigned int fEncrypted : 1;
  unsigned int fWhichTblStm : 1;
  unsigned int fReadOnlyRecommended : 1;
  unsigned int fWriteReservation : 1;
  unsigned int fExtChar : 1;
  unsigned int fLoadOverride : 1;
  unsigned int fFarEast : 1;
  unsigned int fObfuscated : 1;
  unsigned int nFibBack : 16;
  unsigned int lKey : 32;
  unsigned int envr : 8;
  unsigned int fMac : 1;
  unsigned int fEmptySpecial : 1;
  unsigned int fLoadOverridePage : 1;
  unsigned int reserved1 : 1;
  unsigned int reserved2 : 1;
  unsigned int fSpare0 : 3;
  unsigned int reserved3 : 16;
  unsigned int reserved4 : 16;
  unsigned int reserved5 : 32;
  unsigned int reserved6 : 32;
} FibBase;

#ifdef __cplusplus
}
#endif

#endif
