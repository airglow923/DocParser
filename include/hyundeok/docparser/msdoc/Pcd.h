#ifndef HYUNDEOK_DOCPARSER_MSDOC_PCD_H
#define HYUNDEOK_DOCPARSER_MSDOC_PCD_H

#include "hyundeok/docparser/msdoc/FcCompressed.h"
#include "hyundeok/docparser/msdoc/Prm.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Pcd {
  struct {
    unsigned int fNoParaLast : 1;
    unsigned int fR1 : 1;
    unsigned int fDirty : 1;
    unsigned int fR2 : 13;
  } PcdFlags;
  FcCompressed fc;
  Prm prm;
} Pcd;

#ifdef __cplusplus
}
#endif

#endif
