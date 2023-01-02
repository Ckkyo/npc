#include "tools.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
__uint64_t read_mem_with_len(const __uint64_t vaddr,__uint64_t *value,const int len);
__uint64_t write_mem_with_len(const __uint64_t vaddr,const __uint64_t value,const int len);
int mem_init(char *file);
//extern "C" void dut_read_mem_with_len(const __uint64_t *vaddr,__uint64_t *value,const int len);
//extern "C" __uint64_t dut_write_mem_with_len(const __uint64_t *vaddr,const __uint64_t value,const int len);