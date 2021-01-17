#ifndef HYUNDEOK_DOCPARSER_MSDOC_PLCPCD_H
#define HYUNDEOK_DOCPARSER_MSDOC_PLCPCD_H

#include "hyundeok/docparser/msdoc/Pcd.h"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PlcPcd {
  uint32_t* aCP;
  Pcd* aPcd;
} PlcPcd;

#ifdef __cplusplus
}
#endif

#endif
