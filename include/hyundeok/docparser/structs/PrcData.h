#ifndef HYUNDEOK_DOCPARSER_STRUCTS_PRCDATA_H
#define HYUNDEOK_DOCPARSER_STRUCTS_PRCDATA_H

#include "hyundeok/docparser/structs/Prl.h"

#include <stdint.h>

typedef struct PrcData {
  int16_t cbGrpprl;
  Prl* GrpPrl;
} PrcData;

#endif
