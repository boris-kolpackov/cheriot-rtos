// Copyright Microsoft and CHERIoT Contributors.
// SPDX-License-Identifier: MIT

#pragma once
#include <cdefs.h>
#include <stddef.h>
#include <stdint.h>

int __cheri_libcall    memcmp(const void *str1, const void *str2, size_t count);
void *__cheri_libcall  memcpy(void *dest, const void *src, size_t n);
void *__cheri_libcall  memset(void *, int, size_t);
void *__cheri_libcall  memmove(void *dest, const void *src, size_t n);
size_t __cheri_libcall strlen(const char *str);
int __cheri_libcall    strncmp(const char *s1, const char *s2, size_t n);
char *__cheri_libcall  strncpy(char *dest, const char *src, size_t n);
int __cheri_libcall    strcmp(const char *s1, const char *s2);
char *__cheri_libcall  strstr(const char *haystack, const char *needle);
char *__cheri_libcall  strchr(const char *s, int c);

__always_inline static inline char *strcpy(char *dst, const char *src)
{
	return strncpy(dst, src, SIZE_MAX);
}
