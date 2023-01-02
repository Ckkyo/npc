#include <stdarg.h>
#include <stdio.h>
#define ASSERT(expr,...) if((expr)==0){printf(__VA_ARGS__);} 