unsigned __int64 __fastcall sub_340430(__m128i *a1, const __m128i *a2)
{
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // rbx
  char v6; // r14
  char v7; // dl
  _BYTE *v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm1
  _QWORD *exception; // rdi
  const __m128i *v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v12[1] = (const __m128i *)__readfsqword(0x28u);
  v12[0] = a2;
  v3 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v9 = qalloc();
    v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v9);
    if ( !v9 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v9 + 16) = 0;
    *(_OWORD *)(v9 + 32) = 0;
    *(_OWORD *)(v9 + 48) = 0;
    *(_QWORD *)v9 = v9 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_OWORD *)(v9 + 64) = 0;
    *(__m128i *)(v9 + 8) = v10;
    a1->m128i_i64[0] = v9;
    *(_QWORD *)v9 = v9 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v9 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v3 = (unsigned __int64 *)a1->m128i_i64[0];
    return sub_2CD940(a1, v3, 1, v12);
  }
  if ( !a1->m128i_i64[1] )
    return sub_2CD940(a1, v3, 1, v12);
  v6 = 1;
  v4 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v4 & 2) != 0 )
  {
    v7 = 1;
    return sub_2CD940(a1, v3, v7, v12);
  }
  while ( 1 )
  {
    if ( (int)sub_253040((__int64)a2, v4 + 24) < 0 )
    {
      v8 = *(_BYTE **)(v4 + 8);
      v6 = 1;
      goto LABEL_11;
    }
    if ( (int)sub_253040(v4 + 24, (__int64)a2) >= 0 )
      break;
    v8 = *(_BYTE **)(v4 + 16);
    v6 = 0;
LABEL_11:
    if ( (*v8 & 2) != 0 )
      goto LABEL_12;
    v4 = (unsigned __int64)v8;
  }
  if ( !v4 )
  {
LABEL_12:
    v7 = v6;
    v3 = (unsigned __int64 *)v4;
    return sub_2CD940(a1, v3, v7, v12);
  }
  return v4;
}

