/**
 * ARM-Specific Handling of Physical Addresses
 */

#ifndef __ARCHI_HOST_ARM_PHYS_ADDR_H__
#define __ARCHI_HOST_ARM_PHYS_ADDR_H__

#include <stdint.h>     // uint32_t

typedef uint32_t phys_addr_t;
typedef uint32_t phys_pfn_t;

static inline int copy_phys_addr(volatile phys_addr_t* const dst,
        const volatile phys_addr_t* const src)
{
    *dst = *src;
    return 0;
}

#endif
