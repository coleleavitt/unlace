unsigned __int64 __fastcall sub_1A4270(__m128i *a1, __int64 *a2, __int64 **a3)
{
  unsigned __int64 *v5; // rsi
  unsigned __int64 result; // rax
  __int64 v7; // rdi
  char v8; // si
  _BYTE *v9; // rcx
  char v10; // di
  __int64 v11; // rax
  __m128i v12; // xmm0
  _QWORD *exception; // rax
  __int64 **v14; // [rsp+8h] [rbp-10h]

  v5 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v14 = a3;
    v11 = qalloc();
    a3 = v14;
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
    memset((void *)v11, 0, 0x68u);
    *(__m128i *)(v11 + 8) = v12;
    *(_QWORD *)v11 = v11 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v11;
    *(_QWORD *)v11 = v11 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v11 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v5 = (unsigned __int64 *)a1->m128i_i64[0];
    return sub_1A4100(a1, v5, 1, a3);
  }
  if ( !a1->m128i_i64[1] )
    return sub_1A4100(a1, v5, 1, a3);
  result = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)result & 2) != 0 )
  {
    v10 = 1;
    return sub_1A4100(a1, v5, v10, a3);
  }
  v7 = *a2;
  v8 = 1;
  while ( 1 )
  {
    if ( v7 < *(_QWORD *)(result + 24) )
    {
      v9 = *(_BYTE **)(result + 8);
      v8 = 1;
      if ( (*v9 & 2) != 0 )
        goto LABEL_8;
      goto LABEL_13;
    }
    if ( v7 <= *(_QWORD *)(result + 24) )
      break;
    v9 = *(_BYTE **)(result + 16);
    v8 = 0;
    if ( (*v9 & 2) != 0 )
      goto LABEL_8;
LABEL_13:
    result = (unsigned __int64)v9;
  }
  if ( !result )
  {
LABEL_8:
    v10 = v8;
    v5 = (unsigned __int64 *)result;
    return sub_1A4100(a1, v5, v10, a3);
  }
  return result;
}

