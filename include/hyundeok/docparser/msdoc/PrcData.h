#ifndef HYUNDEOK_DOCPARSER_MSDOC_PRCDATA_H
#define HYUNDEOK_DOCPARSER_MSDOC_PRCDATA_H

#include "hyundeok/docparser/msdoc/Prl.h"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PrcData {
  int16_t cbGrpprl;
  Prl* GrpPrl;
} PrcData;

#ifdef __cplusplus
}
#endif

#endif
