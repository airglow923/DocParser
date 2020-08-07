#include "read_Fib.h"

static void read_FibRgFcLcb(
    void *restrict buffer, const int nFib, FILE *restrict fp)
{
    switch (nFib) {
    case 0x00C1: fread(buffer, sizeof(FibRgFcLcb97), 1, fp);   break;
    case 0x00D9: fread(buffer, sizeof(FibRgFcLcb2000), 1, fp); break;
    case 0x0101: fread(buffer, sizeof(FibRgFcLcb2002), 1, fp); break;
    case 0x010C: fread(buffer, sizeof(FibRgFcLcb2003), 1, fp); break;
    case 0x0112: fread(buffer, sizeof(FibRgFcLcb2007), 1, fp); break;
    }
}

static void read_FibRgCswNew(void *restrict buffer, FILE *restrict fp)
{
}

void read_fib(void *restrict buffer, FILE *restrict fp)
{
    Fib *fib = buffer;

    fread(&fib->base, sizeof(FibBase), 1, fp);
    fread(&fib->csw, 2, 1, fp);
    fread(&fib->fibRgW, sizeof(FibRgW97), 1, fp);
    fread(&fib->cslw, 2, 1, fp);
    fread(&fib->fibRgLw, sizeof(FibRgLw97), 1, fp);
    fread(&fib->cbRgFcLcb, 2, 1, fp);
    read_FibRgFcLcb(&fib->fibRgFcLcbBlob, fib->base.nFib, fp);
    fread(&fib->cswNew, 2, 1, fp);
    read_FibRgCswNew(&fib->fibRgCswNew, fp);
}