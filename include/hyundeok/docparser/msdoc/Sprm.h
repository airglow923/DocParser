#ifndef HYUNDEOK_DOCPARSER_MSDOC_SPRM_H
#define HYUNDEOK_DOCPARSER_MSDOC_SPRM_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Sprm {
  unsigned int ispmd : 9;
  unsigned int fSpec : 1;
  unsigned int sgc : 3;
  unsigned int spra : 3;
} Sprm;

#ifdef __cplusplus
}
#endif

#endif
