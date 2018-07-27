/**
 * Definitions for Handling Virtual Addresses
 */

#ifndef __ARCHI_HOST_VIRT_ADDR_H__
#define __ARCHI_HOST_VIRT_ADDR_H__

#include <stdint.h>     // uint32_t

typedef uint32_t virt_addr_t;
typedef uint32_t virt_pfn_t;

/**
 * Print a virtual address to standard output.
 *
 * @param   addr    Pointer to the virtual address to be printed.
 */
void print_virt_addr(const virt_addr_t* const addr);

#endif
