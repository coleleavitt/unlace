unsigned __int64 __fastcall sub_20B9A0(__m128i *a1, int *a2, double a3)
{
  unsigned __int64 *v4; // rsi
  char v5; // dl
  char v7; // r14
  unsigned __int64 v8; // r12
  _BYTE *v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm1
  _QWORD *exception; // rax

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
    *(_OWORD *)(v10 + 16) = 0;
    *(_OWORD *)(v10 + 32) = 0;
    *(_OWORD *)(v10 + 48) = 0;
    *(_QWORD *)v10 = v10 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v10 + 8) = v11;
    a1->m128i_i64[0] = v10;
    *(_QWORD *)v10 = v10 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v10 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v4 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v5 = 1;
    return sub_20B810(a1, v4, v5);
  }
  v7 = 1;
  v8 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v8 & 2) != 0 )
  {
    v5 = 1;
    return sub_20B810(a1, v4, v5);
  }
  while ( 1 )
  {
    if ( (int)sub_1C2AD0(a2, (int *)(v8 + 24), a3) < 0 )
    {
      v9 = *(_BYTE **)(v8 + 8);
      v7 = 1;
      goto LABEL_11;
    }
    if ( (int)sub_1C2AD0((int *)(v8 + 24), a2, a3) >= 0 )
      break;
    v9 = *(_BYTE **)(v8 + 16);
    v7 = 0;
LABEL_11:
    if ( (*v9 & 2) != 0 )
      goto LABEL_12;
    v8 = (unsigned __int64)v9;
  }
  if ( !v8 )
  {
LABEL_12:
    v5 = v7;
    v4 = (unsigned __int64 *)v8;
    return sub_20B810(a1, v4, v5);
  }
  return v8;
}

