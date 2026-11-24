/* Shared by every case: T marks a function under test (weak, so a decompiled
   definition linked beside the object replaces it, and so the compiler neither
   inlines it nor specialises its callers to it); P prints one observed value. */
#ifndef SEMANTIC_CASE_H
#define SEMANTIC_CASE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define T __attribute__((weak, noinline))
#define P(fmt, ...) printf("%s:%d " fmt "\n", __func__, __LINE__, __VA_ARGS__)
#endif
