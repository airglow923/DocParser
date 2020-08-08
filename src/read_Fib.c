#include "read_Fib.h"

static void read_FibRgCswNew(
    FibRgCswNew *restrict fibRgCswNew, FILE *restrict fp)
{
    fread(&fibRgCswNew->nFibNew, 2, 1, fp);

    switch (fibRgCswNew.nFibNew) {
    case 0x00D9:
    case 0x0101:
    case 0x010C:
        fread(&fibRgCswNew->rgCswNewData, sizeof(FibRgCswNewData2000), 1, fp);
        break;
    case 0x0112:
        fread(&fibRgCswNew->rgCswNewData, sizeof(FibRgCswNewData2007), 1, fp);
        break;
    default:
        fprintf(stderr, "Invalid FibRgCswNew.nFibNew\n");
        exit(EXIT_FAILURE);
    }
}

void read_Fib(Fib *restrict fib, FILE *restrict fp)
{
    fread(&fib->base, sizeof(FibBase), 1, fp);
    fread(&fib->csw, sizeof(fib->csw), 1, fp);
    fread(&fib->fibRgW, sizeof(FibRgW97), 1, fp);
    fread(&fib->cslw, sizeof(fib->cslw), 1, fp);
    fread(&fib->fibRgLw, sizeof(FibRgLw97), 1, fp);

    size_t sizeof_FibRgFcLcb;

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

    fread(&fib->fibRgFcLcbBlob, sizeof_FibRgFcLcb, 1, fp);

    if (fib->cswNew != 0)
        read_FibRgCswNew(&fib->fibRgCswNew, fp);
}