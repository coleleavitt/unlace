unsigned __int64 __fastcall sub_B60F0(__m128i *a1, unsigned __int8 *a2, __m128 a3)
{
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rbx
  char v7; // r14
  char v8; // dl
  _BYTE *v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm0
  _QWORD *exception; // rdi
  unsigned __int8 *v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v13[1] = (unsigned __int8 *)__readfsqword(0x28u);
  v13[0] = a2;
  v4 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v10 = qalloc();
    v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
    if ( !v10 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    memset((void *)v10, 0, 0x88u);
    *(__m128i *)(v10 + 8) = v11;
    *(_QWORD *)v10 = v10 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v10;
    *(_QWORD *)v10 = v10 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v10 & 3LL;
    a3 = (__m128)_mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(__m128 *)(a1->m128i_i64[0] + 8) = a3;
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v4 = (unsigned __int64 *)a1->m128i_i64[0];
    return sub_B5EC0(a1, v4, 1, v13, *(double *)a3.m128_u64);
  }
  if ( !a1->m128i_i64[1] )
    return sub_B5EC0(a1, v4, 1, v13, *(double *)a3.m128_u64);
  v7 = 1;
  v5 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v5 & 2) != 0 )
  {
    v8 = 1;
    return sub_B5EC0(a1, v4, v8, v13, *(double *)a3.m128_u64);
  }
  while ( 1 )
  {
    if ( sub_11DA40(a2, (unsigned __int8 *)(v5 + 24)) < 0 )
    {
      v9 = *(_BYTE **)(v5 + 8);
      v7 = 1;
      goto LABEL_11;
    }
    if ( sub_11DA40((unsigned __int8 *)(v5 + 24), a2) >= 0 )
      break;
    v9 = *(_BYTE **)(v5 + 16);
    v7 = 0;
LABEL_11:
    if ( (*v9 & 2) != 0 )
      goto LABEL_12;
    v5 = (unsigned __int64)v9;
  }
  if ( !v5 )
  {
LABEL_12:
    v8 = v7;
    v4 = (unsigned __int64 *)v5;
    return sub_B5EC0(a1, v4, v8, v13, *(double *)a3.m128_u64);
  }
  return v5;
}

