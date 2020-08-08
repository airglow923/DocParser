#pragma once

#ifndef __READ_FIB_H__
#define __READ_FIB_H__

#include "structs/Fib/Fib.h"
#include "structs/Fib/FibBase.h"
#include "structs/Fib/FibRgFcLcb/FibRgFcLcb.h"

#include <stdlib.h>

void read_Fib(Fib *restrict buffer, FILE *restrict fp);

#endif