__int64 __fastcall sub_275850(__m128i *a1, __int64 a2, const __m128i **a3)
{
  const __m128i **v3; // rcx
  unsigned __int64 *v5; // rsi
  char v6; // dl
  char v8; // r13
  unsigned __int64 v9; // rbp
  int v10; // eax
  unsigned __int64 v11; // r14
  bool v12; // cc
  int v13; // eax
  unsigned __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __m128i v17; // xmm1
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _QWORD *exception; // rax
  const __m128i **v24; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v5 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v16 = qalloc();
    v3 = a3;
    v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
    if ( !v16 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v16 + 16) = 0;
    *(_OWORD *)(v16 + 32) = 0;
    *(_OWORD *)(v16 + 48) = 0;
    *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v16 + 8) = v17;
    a1->m128i_i64[0] = v16;
    *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v16 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v5 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] || (v8 = 1, v9 = *v5 & 0xFFFFFFFFFFFFFFFCLL, (*(_BYTE *)v9 & 2) != 0) )
  {
LABEL_3:
    v6 = 1;
    return sub_2756B0(a1, v5, v6, v3);
  }
  v10 = *(_DWORD *)(v9 + 44);
  v11 = v9 + 24;
  v12 = *(_DWORD *)(a2 + 20) <= v10;
  if ( *(_DWORD *)(a2 + 20) < v10 )
    goto LABEL_11;
LABEL_7:
  if ( !v12 )
  {
LABEL_10:
    v14 = *(_QWORD *)(v9 + 16);
    v8 = 0;
    goto LABEL_12;
  }
  v13 = *(_DWORD *)(v11 + 16);
  if ( *(_DWORD *)(a2 + 16) < v13 )
  {
LABEL_11:
    while ( 1 )
    {
      v14 = *(_QWORD *)(v9 + 8);
      v8 = 1;
LABEL_12:
      if ( (*(_BYTE *)v14 & 2) != 0 )
        break;
      v9 = v14;
      v15 = *(_DWORD *)(v14 + 44);
      v11 = v9 + 24;
      v12 = *(_DWORD *)(a2 + 20) <= v15;
      if ( *(_DWORD *)(a2 + 20) >= v15 )
        goto LABEL_7;
    }
LABEL_13:
    v6 = v8;
    v5 = (unsigned __int64 *)v9;
    return sub_2756B0(a1, v5, v6, v3);
  }
  if ( *(_DWORD *)(a2 + 16) > v13 )
    goto LABEL_10;
  v24 = v3;
  v18 = lexcompare_tinfo();
  v3 = v24;
  if ( v18 < 0 )
    goto LABEL_11;
  v19 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(v11 + 20) < v19 )
    goto LABEL_10;
  if ( *(_DWORD *)(v11 + 20) <= v19 )
  {
    v20 = *(_DWORD *)(a2 + 16);
    if ( *(_DWORD *)(v11 + 16) < v20 )
      goto LABEL_10;
    if ( *(_DWORD *)(v11 + 16) <= v20 )
    {
      v21 = lexcompare_tinfo();
      v3 = v24;
      if ( v21 < 0 )
        goto LABEL_10;
    }
  }
  if ( !v9 )
    goto LABEL_13;
  return v9;
}

