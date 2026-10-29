__int64 __fastcall sub_2158C0(__m128i *a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 *v5; // rsi
  __int64 *v6; // rcx
  char v7; // dl
  char v9; // r14
  unsigned __int64 v10; // r12
  _BYTE *v11; // rax
  __int64 v12; // rax
  __m128i v13; // xmm1
  _QWORD *exception; // rax

  v5 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v12 = qalloc();
    v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
    if ( !v12 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v12 + 64) = 0;
    *(_OWORD *)(v12 + 16) = 0;
    *(_OWORD *)(v12 + 32) = 0;
    *(_OWORD *)(v12 + 48) = 0;
    *(_QWORD *)v12 = v12 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v12 + 8) = v13;
    a1->m128i_i64[0] = v12;
    *(_QWORD *)v12 = v12 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v12 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v5 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v6 = a3;
    v7 = 1;
    return sub_215670(a1, v5, v7, v6);
  }
  v9 = 1;
  v10 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v10 & 2) != 0 )
  {
    v7 = 1;
LABEL_7:
    v6 = a3;
    return sub_215670(a1, v5, v7, v6);
  }
  while ( 1 )
  {
    if ( (int)sub_32C390(a2, v10 + 24) < 0 )
    {
      v11 = *(_BYTE **)(v10 + 8);
      v9 = 1;
      goto LABEL_11;
    }
    if ( (int)sub_32C390(v10 + 24, a2) >= 0 )
      break;
    v11 = *(_BYTE **)(v10 + 16);
    v9 = 0;
LABEL_11:
    if ( (*v11 & 2) != 0 )
      goto LABEL_12;
    v10 = (unsigned __int64)v11;
  }
  if ( !v10 )
  {
LABEL_12:
    v7 = v9;
    v5 = (unsigned __int64 *)v10;
    goto LABEL_7;
  }
  return v10;
}

