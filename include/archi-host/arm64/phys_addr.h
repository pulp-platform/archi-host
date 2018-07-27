/**
 * ARM64-Specific Handling of Physical Addresses
 */

#ifndef __ARCHI_HOST_ARM64_PHYS_ADDR_H__
#define __ARCHI_HOST_ARM64_PHYS_ADDR_H__

#include <stdint.h>     // uint8_t, uint32_t

typedef struct {
    uint32_t        lower;
    uint8_t         upper;
    const uint8_t   empty[3];
} phys_addr_t;

typedef uint32_t phys_pfn_t;

static inline int copy_phys_addr(volatile phys_addr_t* const dst,
        const volatile phys_addr_t* const src)
{
    dst->lower = *((uint32_t*)src);
    dst->upper = (uint8_t)(*((uint32_t*)src + 1) & 0xFF);

    return 0;
}

#endif
