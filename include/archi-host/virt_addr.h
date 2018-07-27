/*
 * Copyright (C) 2017 ETH Zurich and University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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
