#ifndef HYUNDEOK_DOCPARSER_STRUCTS_CLX_H
#define HYUNDEOK_DOCPARSER_STRUCTS_CLX_H

#include "hyundeok/docparser/structs/Prc.h"
#include "hyundeok/docparser/structs/Pcdt.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Clx {
  Prc* rgPrc;
  Pcdt* pcdt;
} Clx;

#ifdef __cplusplus
}
#endif

#endif
