#include "archi-host/virt_addr.h"

#include <inttypes.h>   // printf() identifiers

#include "stdio.h"      // printf()

void print_virt_addr(const virt_addr_t* const addr)
{
    printf("0x%08" PRIx32, *addr);
}
