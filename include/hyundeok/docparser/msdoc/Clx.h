#ifndef HYUNDEOK_DOCPARSER_MSDOC_CLX_H
#define HYUNDEOK_DOCPARSER_MSDOC_CLX_H

#include "hyundeok/docparser/msdoc/Prc.h"
#include "hyundeok/docparser/msdoc/Pcdt.h"

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
