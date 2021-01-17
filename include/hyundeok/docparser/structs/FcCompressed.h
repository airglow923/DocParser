#ifndef HYUNDEOK_DOCPARSER_STRUCTS_FCCOMPRESSED_H
#define HYUNDEOK_DOCPARSER_STRUCTS_FCCOMPRESSED_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FcCompressed {
  unsigned int fc : 30;
  unsigned int fCompressed : 1;
  unsigned int r1 : 1;
} FcCompressed;

#ifdef __cplusplus
}
#endif

#endif
