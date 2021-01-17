#ifndef HYUNDEOK_DOCPARSER_MSDOC_PRC_H
#define HYUNDEOK_DOCPARSER_MSDOC_PRC_H

#include "hyundeok/docparser/msdoc/PrcData.h"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Prc {
  uint8_t clxt;
  PrcData data;
} Prc;

#ifdef __cplusplus
}
#endif

#endif
