/**
 * ARM64-Specific Definitions for Debugging the Page Table
 */

#ifndef __ARCHI_HOST_ARM64_PGTABLE_DBG_H__
#define __ARCHI_HOST_ARM64_PGTABLE_DBG_H__

#include "archi-host/arm64/phys_addr.h"

/**
 * Print the values of a PGD to standard output.
 *
 * @param   pgd_bptr    Pointer to the begin of the PGD.
 *
 * @return  The number of printed values (non-negative); negative value with an errno on errors.
 */
int print_pgd_values(const phys_addr_t* const pgd_bptr);

#endif
