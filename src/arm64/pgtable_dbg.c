#include "archi-host/arm64/pgtable_dbg.h"

#include "archi-host/arm64/pgtable_hwdef.h"
#include "archi-host/phys_addr.h"

#include "stdio.h"

int print_pgd_values(const phys_addr_t* const pgd_bptr)
{
    return print_phys_addr_list(pgd_bptr, pgd_bptr + PTRS_PER_PGD, &pgd_val_is_pmd_addr, "PGD");
}
