#include "archi-host/arm/phys_addr.h"

#include <inttypes.h>   // printf() identifiers

#include "stdio.h"      // printf()

void print_phys_addr(const phys_addr_t* const addr)
{
    printf("0x%08" PRIx32, *addr);
}
