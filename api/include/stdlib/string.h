#pragma once
#include <stddef.h>

extern size_t strlen(const char* str);
extern void* memset(void* ptr, int value, size_t num);
extern void* memcpy(void* destination, const void* source, size_t num);