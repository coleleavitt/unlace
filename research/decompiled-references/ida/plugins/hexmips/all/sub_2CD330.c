unsigned __int64 __fastcall sub_2CD330(__m128i *a1, unsigned __int64 *a2, const __m128i **a3)
{
  unsigned __int64 *v5; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r8
  char v8; // si
  _BYTE *v9; // rdi
  char v10; // di
  __int64 v11; // rax
  __m128i v12; // xmm1
  int v13; // edi
  _QWORD *exception; // rax
  const __m128i **v15; // [rsp+8h] [rbp-10h]

  v5 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v15 = a3;
    v11 = qalloc();
    a3 = v15;
    v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
    if ( !v11 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v11 + 64) = 0;
    *(_OWORD *)(v11 + 16) = 0;
    *(_OWORD *)(v11 + 32) = 0;
    *(_OWORD *)(v11 + 48) = 0;
    *(_QWORD *)v11 = v11 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v11 + 8) = v12;
    a1->m128i_i64[0] = v11;
    *(_QWORD *)v11 = v11 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v11 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v5 = (unsigned __int64 *)a1->m128i_i64[0];
    return sub_257D50(a1, v5, 1, a3);
  }
  if ( !a1->m128i_i64[1] )
    return sub_257D50(a1, v5, 1, a3);
  result = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)result & 2) != 0 )
  {
    v10 = 1;
    return sub_257D50(a1, v5, v10, a3);
  }
  v7 = *a2;
  v8 = 1;
  while ( 1 )
  {
    if ( v7 >= *(_QWORD *)(result + 24) )
    {
      if ( v7 != *(_QWORD *)(result + 24) )
        goto LABEL_8;
      v13 = *(_DWORD *)(result + 32);
      if ( *((_DWORD *)a2 + 2) >= v13 )
        break;
    }
    v9 = *(_BYTE **)(result + 8);
    v8 = 1;
    if ( (*v9 & 2) != 0 )
      goto LABEL_9;
LABEL_13:
    result = (unsigned __int64)v9;
  }
  if ( *((_DWORD *)a2 + 2) > v13 )
  {
LABEL_8:
    v9 = *(_BYTE **)(result + 16);
    v8 = 0;
    if ( (*v9 & 2) != 0 )
      goto LABEL_9;
    goto LABEL_13;
  }
  if ( !result )
  {
LABEL_9:
    v10 = v8;
    v5 = (unsigned __int64 *)result;
    return sub_257D50(a1, v5, v10, a3);
  }
  return result;
}

