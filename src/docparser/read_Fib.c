#include "hyundeok/docparser/read_Fib.h"

#include "hyundeok/macro.h"
#include "hyundeok/docparser/msdoc/Fib/FibBase.h"
#include "hyundeok/docparser/msdoc/Fib/FibRgCswNew/FibRgCswNew.h"

#include <string.h>   // memcpy

static int read_FibBase(FibBase* restrict dest, void* restrict src) {
  *dest = *((FibBase*) src);

  HYUNDEOK_ASSERT(dest->wident, 0xA5EC, -1, );

  // TODO: handle lid
  // TODO: handle pnNext

  HYUNDEOK_ASSERT(dest->envr, 0, -1, );
  HYUNDEOK_ASSERT(dest->fMac, 0, -1, );
  HYUNDEOK_ASSERT(dest->fEmptySpecial, 0, -1, );

  return 0;
}

static int read_FibRgCswNew(FibRgCswNew* restrict dest, void* restrict src) {
  FibRgCswNew* copy = src;

  dest->nFibNew = copy->nFibNew;

  switch (copy->nFibNew) {
  case 0x00D9:
  case 0x0101:
  case 0x010C:
    memcpy(&dest->rgCswNewData, &copy->rgCswNewData, sizeof(FibRgCswNewData2000));
    break;
  case 0x0112:
    memcpy(&dest->rgCswNewData, &copy->rgCswNewData, sizeof(FibRgCswNewData2007));
    break;
    break;
  default:
    HYUNDEOK_PRTN_ERR("Invalid FibRgCswNew.nFibNew\n");
    return -1;
  }

  return 0;
}

int read_Fib(Fib* restrict dest, HyundeokHeap* restrict src) {
  // check whether the size of heap equals that of Fib
  HYUNDEOK_ASSERT(src->size, sizeof(Fib), -1, );

  Fib* copy = src->data;

  HYUNDEOK_ASSERT(read_FibBase(&dest->base, &copy->base), 0, -1, );

  HYUNDEOK_ASSERT(copy->csw, 0x000E, -1, );
  dest->csw = copy->csw;

  // TODO: read minimum of Fib.csw * 2 bytes
  dest->fibRgW = copy->fibRgW;

  HYUNDEOK_ASSERT(copy->cslw, 0x0016, -1, );
  dest->cslw = copy->cslw;

  // TODO: read minimum of Fib.cslw * 4 bytes
  dest->fibRgLw = copy->fibRgLw;

  // NOLINTNEXTLINE(bugprone-narrowing-conversions)
  switch (copy->base.nFib) {
  case 0x00C1:
    dest->cbRgFcLcb = 0x005D;
    dest->cswNew = 0;
    break;
  case 0x00D9:
    dest->cbRgFcLcb = 0x006C;
    dest->cswNew = 0x0002;
    break;
  case 0x0101:
    dest->cbRgFcLcb = 0x0088;
    dest->cswNew = 0x0002;
    break;
  case 0x010C:
    dest->cbRgFcLcb = 0x00A4;
    dest->cswNew = 0x0002;
    break;
  case 0x0112:
    dest->cbRgFcLcb = 0x00B7;
    dest->cswNew = 0x0005;
    break;
  }

  // TODO: read minimum of Fib.cbRgFcLcb * 8 bytes
  dest->fibRgFcLcbBlob = copy->fibRgFcLcbBlob;

  // TODO: read minimum of Fib.cbRgFcLcb * 8 bytes
  HYUNDEOK_ASSERT(read_FibRgCswNew(&dest->fibRgCswNew, &copy->fibRgCswNew), 0,
                  -1, );

  return 0;
}
