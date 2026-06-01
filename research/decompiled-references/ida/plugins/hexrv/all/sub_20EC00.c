void __fastcall sub_20EC00(__m128i *a1, __int64 a2, __int64 *a3)
{
  _QWORD *exception; // rax
  unsigned __int64 *v6; // rsi
  __int64 *v7; // rcx
  char v8; // dl
  unsigned __int64 v9; // rbp
  __int64 v10; // r15
  char v11; // r14
  const char *v12; // rdx
  _BYTE *v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm1
  char *s2; // [rsp+0h] [rbp-48h]
  char *s1; // [rsp+8h] [rbp-40h]

  v6 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v14 = qalloc();
    v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
    if ( !v14 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v14 + 16) = 0;
    *(_OWORD *)(v14 + 32) = 0;
    *(__m128i *)(v14 + 8) = v15;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v14;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v14 & 3LL;
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
LABEL_4:
    sub_1F1790(a1, v6, v8, v7);
    return;
  }
  v9 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v9 & 2) != 0 )
  {
    v8 = 1;
LABEL_13:
    v7 = a3;
    goto LABEL_4;
  }
  v10 = *(_QWORD *)(a2 + 8);
  v11 = 1;
  while ( 1 )
  {
    if ( *(_QWORD *)(v9 + 32) )
    {
      v12 = *(const char **)(v9 + 24);
      if ( !v10 )
      {
        if ( !*v12 )
          break;
LABEL_10:
        v13 = *(_BYTE **)(v9 + 8);
        v11 = 1;
        if ( (*v13 & 2) != 0 )
          goto LABEL_11;
        goto LABEL_19;
      }
    }
    else
    {
      if ( !v10 )
        break;
      v12 = ::s1;
    }
    s1 = (char *)v12;
    s2 = *(char **)a2;
    if ( strcmp(*(const char **)a2, v12) < 0 )
      goto LABEL_10;
    if ( strcmp(s1, s2) >= 0 )
      break;
    v13 = *(_BYTE **)(v9 + 16);
    v11 = 0;
    if ( (*v13 & 2) != 0 )
      goto LABEL_11;
LABEL_19:
    v9 = (unsigned __int64)v13;
  }
  if ( !v9 )
  {
LABEL_11:
    v8 = v11;
    v6 = (unsigned __int64 *)v9;
    goto LABEL_13;
  }
}

