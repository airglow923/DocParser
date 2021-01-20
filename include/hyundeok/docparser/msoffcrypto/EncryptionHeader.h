#ifndef HYUNDEOK_DOCPARSER_ENCRYPTIONHEADER_H
#define HYUNDEOK_DOCPARSER_ENCRYPTIONHEADER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EncryptionHeader {
  unsigned int EncryptionVersionInfo: 32;
  struct {
    unsigned int: 32;
    unsigned int: 32;
    unsigned int: 32;
    unsigned int: 32;
  } Salt;
  struct {
    unsigned int: 32;
    unsigned int: 32;
    unsigned int: 32;
    unsigned int: 32;
  } EncryptedVerifier;
  struct {
    unsigned int: 32;
    unsigned int: 32;
    unsigned int: 32;
    unsigned int: 32;
  } EncryptedVerifierHash;
} EncryptionHeader;

#ifdef __cplusplus
}
#endif

#endif
