/*
 * Copyright (c) 2023 Cisco and/or its affiliates. All rights reserved.
 *
 * SPDX-License-Identifier: MIT OR GPL-2.0-only
 *
 * Licensed under the MIT license <LICENSE.MIT or https://opensource.org/licenses/MIT> or the GPLv2 license
 * <LICENSE.GPL or https://opensource.org/license/gpl-2-0>, at your option. This file may not be copied,
 * modified, or distributed except according to those terms.
 */

#include "runtime.h"

#define CSR_MODULE "csr"

typedef struct csr_module csr_module;

csr_module *this_cpu_csr(void);

wasm_vm_result init_csr_for(wasm_vm *vm, wasm_vm_module *module);
wasm_vm_result csr_gen(csr_module *csr, i32 priv_key_buff_ptr, i32 priv_key_buff_len);
wasm_vm_result csr_malloc(csr_module *csr, i32 size);
wasm_vm_result csr_free(csr_module *csr, i32 ptr);
wasm_vm_module *get_csr_module(csr_module *csr);
void csr_lock(csr_module *csr);
void csr_unlock(csr_module *csr);