__int64 __fastcall sub_206DA0(__m128i *a1, int *a2)
{
  unsigned __int64 *v3; // rsi
  char v4; // dl
  char v6; // r14
  unsigned __int64 v7; // r12
  _BYTE *v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm1
  _QWORD *exception; // rax

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
    *(__m128i *)(v9 + 8) = v10;
    a1->m128i_i64[0] = v9;
    *(_QWORD *)v9 = v9 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v9 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v3 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v4 = 1;
    return sub_206C10(a1, v3, v4);
  }
  v6 = 1;
  v7 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v7 & 2) != 0 )
  {
    v4 = 1;
    return sub_206C10(a1, v3, v4);
  }
  while ( 1 )
  {
    if ( (int)sub_1BE450(a2, (int *)(v7 + 24)) < 0 )
    {
      v8 = *(_BYTE **)(v7 + 8);
      v6 = 1;
      goto LABEL_11;
    }
    if ( (int)sub_1BE450((int *)(v7 + 24), a2) >= 0 )
      break;
    v8 = *(_BYTE **)(v7 + 16);
    v6 = 0;
LABEL_11:
    if ( (*v8 & 2) != 0 )
      goto LABEL_12;
    v7 = (unsigned __int64)v8;
  }
  if ( !v7 )
  {
LABEL_12:
    v4 = v6;
    v3 = (unsigned __int64 *)v7;
    return sub_206C10(a1, v3, v4);
  }
  return v7;
}

