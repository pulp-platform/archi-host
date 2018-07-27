/**
 * Unified Interface to Architecture-Dependent Definitions Involving the Page Table Hardware
 */

#ifndef __ARCHI_HOST_PGTABLE_HWDEF_H__
#define __ARCHI_HOST_PGTABLE_HWDEF_H__

#ifndef HOST_ARCH
    #error "Define HOST_ARCH!"
#endif
#if HOST_ARCH == ARM64
    #include "archi-host/arm64/pgtable_hwdef.h"
#elif HOST_ARCH == ARM
    #include "archi-host/arm/pgtable_hwdef.h"
#else
    #error "Unknown host architecture!"
#endif

/**
 * Extract the address of the page for a given memory address.
 *
 * @param   addr    Virtual or physical memory address.
 *
 * @return  Page address corresponding to `addr`.
 *
 * This inline function is directly defined in the architecture-specific header file.
 *
 * inline unsigned page_addr(const unsigned addr)
 */

static inline virt_pfn_t virt_addr2pfn(const virt_addr_t addr)
{
    return (virt_pfn_t)(addr >> PAGE_SHIFT);
}

static inline virt_addr_t virt_pfn2addr(const virt_pfn_t pfn)
{
    return (virt_addr_t)(pfn << PAGE_SHIFT);
}

#endif
