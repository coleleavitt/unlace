unsigned __int64 *__fastcall sub_2D3890(__m128i *a1, unsigned __int64 *a2, __int64 **a3)
{
  unsigned __int64 *v5; // rsi
  unsigned __int64 *result; // rax
  unsigned __int64 v7; // rdi
  char v8; // si
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // rcx
  char v11; // di
  __int64 v12; // rax
  __m128i v13; // xmm1
  _QWORD *exception; // rax
  __int64 **v15; // [rsp+8h] [rbp-10h]

  v5 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v15 = a3;
    v12 = qalloc();
    a3 = v15;
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
    *(_QWORD *)(v12 + 48) = 0;
    *(_OWORD *)(v12 + 16) = 0;
    *(_OWORD *)(v12 + 32) = 0;
    *(__m128i *)(v12 + 8) = v13;
    *(_QWORD *)v12 = v12 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v12;
    *(_QWORD *)v12 = v12 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v12 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v5 = (unsigned __int64 *)a1->m128i_i64[0];
    return (unsigned __int64 *)sub_25E800(a1, v5, 1, a3);
  }
  if ( !a1->m128i_i64[1] )
    return (unsigned __int64 *)sub_25E800(a1, v5, 1, a3);
  result = (unsigned __int64 *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)result & 2) != 0 )
  {
    v11 = 1;
    return (unsigned __int64 *)sub_25E800(a1, v5, v11, a3);
  }
  v7 = *a2;
  v8 = 1;
  while ( 1 )
  {
    v9 = result[3];
    if ( v7 < v9 )
    {
      v10 = (unsigned __int64 *)result[1];
      v8 = 1;
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_8;
      goto LABEL_13;
    }
    if ( v9 >= v7 )
      break;
    v10 = (unsigned __int64 *)result[2];
    v8 = 0;
    if ( (*(_BYTE *)v10 & 2) != 0 )
      goto LABEL_8;
LABEL_13:
    result = v10;
  }
  if ( !result )
  {
LABEL_8:
    v11 = v8;
    v5 = result;
    return (unsigned __int64 *)sub_25E800(a1, v5, v11, a3);
  }
  return result;
}

