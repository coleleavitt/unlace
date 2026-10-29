unsigned __int64 __fastcall sub_2D9070(__m128i *a1, __int64 a2, __int64 *a3, double a4)
{
  unsigned __int64 *v6; // rsi
  __int64 *v7; // rcx
  char v8; // dl
  char v10; // r14
  unsigned __int64 v11; // r12
  _BYTE *v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm0
  _QWORD *exception; // rax

  v6 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v13 = qalloc();
    v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v13);
    if ( !v13 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    memset((void *)v13, 0, 0xA0u);
    *(__m128i *)(v13 + 8) = v14;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v13;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v13 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v6 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v7 = a3;
    v8 = 1;
    return sub_2D8DF0(a1, v6, v8, v7);
  }
  v10 = 1;
  v11 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v11 & 2) != 0 )
  {
    v8 = 1;
LABEL_7:
    v7 = a3;
    return sub_2D8DF0(a1, v6, v8, v7);
  }
  while ( 1 )
  {
    if ( (int)sub_2B9450(a2, v11 + 24, a4) < 0 )
    {
      v12 = *(_BYTE **)(v11 + 8);
      v10 = 1;
      goto LABEL_11;
    }
    if ( (int)sub_2B9450(v11 + 24, a2, a4) >= 0 )
      break;
    v12 = *(_BYTE **)(v11 + 16);
    v10 = 0;
LABEL_11:
    if ( (*v12 & 2) != 0 )
      goto LABEL_12;
    v11 = (unsigned __int64)v12;
  }
  if ( !v11 )
  {
LABEL_12:
    v8 = v10;
    v6 = (unsigned __int64 *)v11;
    goto LABEL_7;
  }
  return v11;
}

