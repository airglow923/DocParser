#ifndef HYUNDEOK_DOCPARSER_STRUCTS_PLCPCD_H
#define HYUNDEOK_DOCPARSER_STRUCTS_PLCPCD_H

#include "hyundeok/docparser/structs/Pcd.h"

#include <stdint.h>

typedef struct PlcPcd {
  uint32_t* aCP;
  Pcd* aPcd;
} PlcPcd;

#endif
