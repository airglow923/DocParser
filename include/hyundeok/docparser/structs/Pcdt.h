#ifndef HYUNDEOK_DOCPARSER_STRUCTS_PCDT_H
#define HYUNDEOK_DOCPARSER_STRUCTS_PCDT_H

#include "hyundeok/docparser/structs/PlcPcd.h"

#include <stdint.h>

typedef struct Pcdt {
  uint8_t clxt;
  uint32_t lcb;
  PlcPcd* plcPcd;
} Pcdt;

#endif
