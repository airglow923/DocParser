#ifndef HYUNDEOK_DOCPARSER_STRUCTS_SPRM_H
#define HYUNDEOK_DOCPARSER_STRUCTS_SPRM_H

typedef struct Sprm {
  unsigned int ispmd : 9;
  unsigned int fSpec : 1;
  unsigned int sgc : 3;
  unsigned int spra : 3;
} Sprm;

#endif
