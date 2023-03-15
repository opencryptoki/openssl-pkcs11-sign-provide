/*
 * Copyright (C) IBM Corp. 2022, 2023
 * SPDX-License-Identifier: Apache-2.0
 */

void info(void);
EVP_PKEY *uri_pkey_get1(const char *uri);
void fdump(FILE *restrict stream, const unsigned char *p, size_t len);
