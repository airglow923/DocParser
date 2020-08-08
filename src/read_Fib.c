#include "read_Fib.h"

static void read_FibRgCswNew(void *restrict buffer, FILE *restrict fp)
{
}

void read_fib(Fib *restrict buffer, FILE *restrict fp)
{
    fread(&fib->base, sizeof(FibBase), 1, fp);
    fread(&fib->csw, 2, 1, fp);
    fread(&fib->fibRgW, sizeof(FibRgW97), 1, fp);
    fread(&fib->cslw, 2, 1, fp);
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