#ifndef HYUNDEOK_DOCPARSER_MSDOC_PCDT_H
#define HYUNDEOK_DOCPARSER_MSDOC_PCDT_H

#include "hyundeok/docparser/msdoc/PlcPcd.h"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Pcdt {
  uint8_t clxt;
  uint32_t lcb;
  PlcPcd* plcPcd;
} Pcdt;

#ifdef __cplusplus
}
#endif

#endif
