/*
 * Copyright (c) 2023 Cisco and/or its affiliates. All rights reserved.
 *
 * SPDX-License-Identifier: MIT OR GPL-2.0-only
 *
 * Licensed under the MIT license <LICENSE.MIT or https://opensource.org/licenses/MIT> or the GPLv2 license
 * <LICENSE.GPL or https://opensource.org/license/gpl-2-0>, at your option. This file may not be copied,
 * modified, or distributed except according to those terms.
 */

#ifndef BUFFER_H
#define BUFFER_H

typedef struct buffer_t {
  char *data;
  int size;
  int capacity;
} buffer_t;


buffer_t *buffer_new(int capacity);
void buffer_free(buffer_t *buffer);
char *buffer_access(buffer_t *buffer, int len);

#endif