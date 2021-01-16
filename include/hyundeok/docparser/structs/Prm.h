#ifndef HYUNDEOK_DOCPARSER_STRUCTS_PRM_H
#define HYUNDEOK_DOCPARSER_STRUCTS_PRM_H

typedef struct Prm {
  unsigned int fComplex : 1;
  union {
    struct {
      unsigned int isprm : 7;
      unsigned int val : 8;
    } Prm0;
    struct {
      unsigned int igrppral : 15;
    } Prm1;
  } data;
} Prm;

#endif
