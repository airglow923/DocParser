#include "hyundeok/docparser/read_Fib.h"

#include "hyundeok/macro.h"

#include <string.h> // memset

int read_FibBase(FibBase* restrict fibBase, FILE* restrict fp) {
  fread(fibBase, sizeof(FibBase), 1, fp);

  HYUNDEOK_ASSERT(fibBase->wident, 0xA5EC, -1,);

  // TODO: handle lid
  // TODO: handle pnNext

  HYUNDEOK_ASSERT(fibBase->envr, 0, -1,);
  HYUNDEOK_ASSERT(fibBase->fMac, 0, -1,);
  HYUNDEOK_ASSERT(fibBase->fEmptySpecial, 0, -1,);

  return 0;
}

int read_FibRgCswNew(FibRgCswNew* restrict fibRgCswNew, FILE* restrict fp) {
  fread(&fibRgCswNew->nFibNew, sizeof(fibRgCswNew->nFibNew), 1, fp);

  switch (fibRgCswNew->nFibNew) {
  case 0x00D9:
  case 0x0101:
  case 0x010C:
    fread(&fibRgCswNew->rgCswNewData, sizeof(FibRgCswNewData2000), 1, fp);
    break;
  case 0x0112:
    fread(&fibRgCswNew->rgCswNewData, sizeof(FibRgCswNewData2007), 1, fp);
    break;
  default:
    HYUNDEOK_PRTN_ERR("Invalid FibRgCswNew.nFibNew\n");
    return -1;
  }

  return 0;
}

int read_Fib(Fib* restrict fib, FILE* restrict fp) {
  // set fib to 0
  memset(fib, 0, sizeof(Fib));

  HYUNDEOK_ASSERT(read_FibBase(&fib->base, fp), 0, -1,);

  fread(&fib->csw, sizeof(fib->csw), 1, fp);
  HYUNDEOK_ASSERT(fib->csw, 0x000E, -1,);

  // TODO: read minimum of Fib.csw * 2 bytes
  fread(&fib->fibRgW, sizeof(FibRgW97), 1, fp);

  fread(&fib->cslw, sizeof(fib->cslw), 1, fp);
  HYUNDEOK_ASSERT(fib->cslw, 0x0016, -1,);

  // TODO: read minimum of Fib.cslw * 4 bytes
  fread(&fib->fibRgLw, sizeof(FibRgLw97), 1, fp);

  size_t sizeof_FibRgFcLcb;

  // NOLINTNEXTLINE(bugprone-narrowing-conversions)
  switch (fib->base.nFib) {
  case 0x00C1:
    fib->cbRgFcLcb = 0x005D;
    sizeof_FibRgFcLcb = sizeof(FibRgFcLcb97);
    fib->cswNew = 0;
    break;
  case 0x00D9:
    fib->cbRgFcLcb = 0x006C;
    sizeof_FibRgFcLcb = sizeof(FibRgFcLcb2000);
    fib->cswNew = 0x0002;
    break;
  case 0x0101:
    fib->cbRgFcLcb = 0x0088;
    sizeof_FibRgFcLcb = sizeof(FibRgFcLcb2002);
    fib->cswNew = 0x0002;
    break;
  case 0x010C:
    fib->cbRgFcLcb = 0x00A4;
    sizeof_FibRgFcLcb = sizeof(FibRgFcLcb2003);
    fib->cswNew = 0x0002;
    break;
  case 0x0112:
    fib->cbRgFcLcb = 0x00B7;
    sizeof_FibRgFcLcb = sizeof(FibRgFcLcb2007);
    fib->cswNew = 0x0005;
    break;
  }

  // TODO: read minimum of Fib.cbRgFcLcb * 8 bytes
  fread(&fib->fibRgFcLcbBlob, sizeof_FibRgFcLcb, 1, fp);
  // NOLINTNEXTLINE(bugprone-narrowing-conversions)
  fseek(fp, sizeof(fib->fibRgFcLcbBlob) - sizeof_FibRgFcLcb, SEEK_CUR);

  // TODO: read minimum of Fib.cbRgFcLcb * 8 bytes
  HYUNDEOK_ASSERT(read_FibRgCswNew(&fib->fibRgCswNew, fp), 0, -1,);

  return 0;
}
