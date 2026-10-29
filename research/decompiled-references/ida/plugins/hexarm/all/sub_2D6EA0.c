__int64 __fastcall sub_2D6EA0(__m128i *a1, __int64 a2, const __m128i **a3)
{
  unsigned __int64 *v5; // rsi
  const __m128i **v6; // rcx
  char v7; // dl
  char v9; // r14
  unsigned __int64 v10; // r12
  int v11; // eax
  _BYTE *v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm0
  int v15; // eax
  _QWORD *exception; // rax

  v5 = (unsigned __int64 *)a1->m128i_i64[0];
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
    memset((void *)v13, 0, 0x98u);
    *(__m128i *)(v13 + 8) = v14;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v13;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v13 & 3LL;
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
    return sub_2D6D00(a1, v5, v7, v6);
  }
  v9 = 1;
  v10 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v10 & 2) != 0 )
  {
    v7 = 1;
LABEL_7:
    v6 = a3;
    return sub_2D6D00(a1, v5, v7, v6);
  }
  while ( 1 )
  {
    v11 = *(_DWORD *)(v10 + 136);
    if ( *(_DWORD *)(a2 + 112) < v11 )
    {
LABEL_12:
      v12 = *(_BYTE **)(v10 + 8);
      v9 = 1;
      goto LABEL_13;
    }
    if ( *(_DWORD *)(a2 + 112) <= v11 )
    {
      if ( (int)sub_1371E0(a2, v10 + 24) < 0 )
        goto LABEL_12;
      v15 = *(_DWORD *)(a2 + 112);
      if ( *(_DWORD *)(v10 + 136) >= v15 && (*(_DWORD *)(v10 + 136) > v15 || (int)sub_1371E0(v10 + 24, a2) >= 0) )
        break;
    }
    v12 = *(_BYTE **)(v10 + 16);
    v9 = 0;
LABEL_13:
    if ( (*v12 & 2) != 0 )
      goto LABEL_14;
    v10 = (unsigned __int64)v12;
  }
  if ( !v10 )
  {
LABEL_14:
    v7 = v9;
    v5 = (unsigned __int64 *)v10;
    goto LABEL_7;
  }
  return v10;
}

