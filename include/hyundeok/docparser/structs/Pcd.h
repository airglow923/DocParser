#ifndef HYUNDEOK_DOCPARSER_STRUCTS_PCD_H
#define HYUNDEOK_DOCPARSER_STRUCTS_PCD_H

#include "hyundeok/docparser/structs/FcCompressed.h"
#include "hyundeok/docparser/structs/Prm.h"

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

#endif
