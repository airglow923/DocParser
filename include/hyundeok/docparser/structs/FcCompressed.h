#ifndef HYUNDEOK_DOCPARSER_STRUCTS_FCCOMPRESSED_H
#define HYUNDEOK_DOCPARSER_STRUCTS_FCCOMPRESSED_H

typedef struct FcCompressed {
  unsigned int fc : 30;
  unsigned int fCompressed : 1;
  unsigned int r1 : 1;
} FcCompressed;

#endif
