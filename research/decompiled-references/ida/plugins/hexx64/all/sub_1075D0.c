_BYTE *__fastcall sub_1075D0(__m128i *a1, __int64 a2, __int64 *a3)
{
  __int64 *v4; // rcx
  _QWORD *v5; // rdi
  char v6; // dl
  _BYTE *result; // rax
  unsigned __int8 v8; // r9
  char v9; // r8
  unsigned __int8 v10; // dl
  __int64 v11; // rdx
  _BYTE *v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm1
  _QWORD *exception; // rax

  v4 = a3;
  v5 = (_QWORD *)a1->m128i_i64[0];
  if ( !v5 )
  {
    v13 = qalloc();
    v4 = a3;
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
    *(_OWORD *)(v13 + 16) = 0;
    *(_OWORD *)(v13 + 32) = 0;
    *(_OWORD *)(v13 + 48) = 0;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_OWORD *)(v13 + 64) = 0;
    *(__m128i *)(v13 + 8) = v14;
    a1->m128i_i64[0] = v13;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v13 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v5 = (_QWORD *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] || (result = (_BYTE *)(*v5 & 0xFFFFFFFFFFFFFFFCLL), (*result & 2) != 0) )
  {
LABEL_3:
    v6 = 1;
    return (_BYTE *)sub_1073D0(a1, (__int64)v5, v6, v4);
  }
  v8 = *(_BYTE *)(a2 + 32);
  v9 = 1;
  while ( 1 )
  {
    v10 = result[56];
    if ( v8 >= v10 )
    {
      if ( v10 < v8 )
        goto LABEL_13;
      v11 = *((_QWORD *)result + 6);
      if ( *(_QWORD *)(a2 + 24) >= v11 )
        break;
    }
    v12 = *((_BYTE **)result + 1);
    v9 = 1;
    if ( (*v12 & 2) != 0 )
      goto LABEL_14;
LABEL_16:
    result = v12;
  }
  if ( *(_QWORD *)(a2 + 24) > v11 )
  {
LABEL_13:
    v12 = *((_BYTE **)result + 2);
    v9 = 0;
    if ( (*v12 & 2) != 0 )
      goto LABEL_14;
    goto LABEL_16;
  }
  if ( result )
    return result;
LABEL_14:
  v6 = v9;
  v5 = result;
  return (_BYTE *)sub_1073D0(a1, (__int64)v5, v6, v4);
}

