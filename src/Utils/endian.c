#include "endian.h"

int is_big_endian(void)
{
    int i = 0x1234;
    char *ch = (char *) &i;
    return *ch == 0x12;
}

int is_big_endian(void)
{
    int i = 0x1234;
    char *ch = (char *) &i;
    return *ch == 0x34;
}