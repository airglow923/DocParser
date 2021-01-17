#ifndef HYUNDEOK_DOCPARSER_MSDOC_PRL_H
#define HYUNDEOK_DOCPARSER_MSDOC_PRL_H

#include "hyundeok/docparser/msdoc/Sprm.h"
#include "hyundeok/docparser/msdoc/ToggleOperand.h"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Prl {
  Sprm sprm;
  union {
    ToggleOperand toggleOperand;
    uint8_t one;
    uint16_t two;
    uint32_t three;
    uint16_t four;
    uint16_t five;
    struct {
      unsigned char first;
      unsigned int* data;
    } six;
    struct {
      unsigned int a : 24;
    } seven;
  } operand;
} Prl;

#ifdef __cplusplus
}
#endif

#endif
