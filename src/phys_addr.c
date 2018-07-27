#include "archi-host/phys_addr.h"

#include "stddef.h"
#include "stdio.h"

int print_phys_addr_list(const phys_addr_t* const begin, const phys_addr_t* const end,
        int (*filter_fn)(const phys_addr_t* const), char* label)
{
    unsigned i = 0, n_printed = 0;
    for (const phys_addr_t* rptr = begin; rptr < end; ++rptr, ++i) {

        phys_addr_t value;
        int ret = copy_phys_addr(&value, rptr);
        if (ret < 0)
            return ret;

        if (filter_fn != NULL && (*filter_fn)(&value) != 1)
            continue;

        printf("%s[%04u]: ", label, i);
        print_phys_addr(&value);
        printf("\n");

        ++n_printed;

    }

    return n_printed;
}
