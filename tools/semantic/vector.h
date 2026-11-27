/* Intel vector types the emitted C names (`__m128i`, `__m256d`, ...), declared before orig.h,
   which uses some of them in its prototypes, and the ZEXT widths for 16-, 32- and 64-byte values. */
#ifndef SEMANTIC_VECTOR_H
#define SEMANTIC_VECTOR_H
typedef float __m128 __attribute__((vector_size(16), aligned(16)));
typedef double __m128d __attribute__((vector_size(16), aligned(16)));
typedef long long __m128i __attribute__((vector_size(16), aligned(16)));
typedef float __m256 __attribute__((vector_size(32), aligned(32)));
typedef double __m256d __attribute__((vector_size(32), aligned(32)));
typedef long long __m256i __attribute__((vector_size(32), aligned(32)));
typedef float __m512 __attribute__((vector_size(64), aligned(64)));
typedef double __m512d __attribute__((vector_size(64), aligned(64)));
typedef long long __m512i __attribute__((vector_size(64), aligned(64)));
#define ZEXT1632(x) ({ __m256i sem_z = {0}; __builtin_memcpy(&sem_z, &(x), 16); sem_z; })
#define ZEXT1664(x) ({ __m512i sem_z = {0}; __builtin_memcpy(&sem_z, &(x), 16); sem_z; })
#define ZEXT3264(x) ({ __m512i sem_z = {0}; __builtin_memcpy(&sem_z, &(x), 32); sem_z; })
#endif
