#ifndef HYUNDEOK_DOCPARSER_MSDOC_FIB_FIBRGLW97_H
#define HYUNDEOK_DOCPARSER_MSDOC_FIB_FIBRGLW97_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FibRgLw97 {
  unsigned int cbMac : 32;
  unsigned int reserved1 : 32;
  unsigned int reserved2 : 32;
  unsigned int ccpText : 32;
  unsigned int ccpFtn : 32;
  unsigned int ccpHdd : 32;
  unsigned int reserved3 : 32;
  unsigned int ccpAtn : 32;
  unsigned int ccpEdn : 32;
  unsigned int ccpTxbx : 32;
  unsigned int ccpHdrTxbx : 32;
  unsigned int reserved4 : 32;
  unsigned int reserved5 : 32;
  unsigned int reserved6 : 32;
  unsigned int reserved7 : 32;
  unsigned int reserved8 : 32;
  unsigned int reserved9 : 32;
  unsigned int reserved10 : 32;
  unsigned int reserved11 : 32;
  unsigned int reserved12 : 32;
  unsigned int reserved13 : 32;
  unsigned int reserved14 : 32;
} FibRgLw97;

#ifdef __cplusplus
}
#endif

#endif
