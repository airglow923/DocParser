#ifndef HYUNDEOK_DOCPARSER_STRUCTS_PRL_H
#define HYUNDEOK_DOCPARSER_STRUCTS_PRL_H

#include "hyundeok/docparser/structs/Sprm.h"
#include "hyundeok/docparser/structs/ToggleOperand.h"

#include <stdint.h>

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

#endif
