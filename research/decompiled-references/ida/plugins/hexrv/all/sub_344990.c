__int64 __fastcall sub_344990(__m128i *a1, unsigned __int64 *a2, char a3, __int64 **a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 *v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  __m128i v12; // xmm0
  void *v14; // rax
  __int64 v15; // rdx
  _QWORD *exception; // rax

  v6 = qalloc();
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v6 + 64) = 0;
  v7 = v6;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  v8 = *a4;
  v9 = **a4;
  *(_QWORD *)(v7 + 32) = 0;
  *(_OWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 24) = v9;
  v10 = v8[2];
  if ( v10 )
  {
    v14 = (void *)qalloc_or_throw();
    *(_QWORD *)(v7 + 48) = v10;
    *(_QWORD *)(v7 + 32) = v14;
    memcpy(v14, (const void *)v8[1], 16 * v10);
    *(_QWORD *)(v7 + 40) = v10;
    v10 = *(_QWORD *)v7 & 1LL;
  }
  *(_QWORD *)(v7 + 56) = 0;
  *(_DWORD *)(v7 + 64) = -1;
  v11 = v10 | (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL;
  *(_QWORD *)v7 = v11;
  v12 = _mm_loadl_epi64(a1);
  *(_QWORD *)v7 = v11 | 1;
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v12, v12);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v7 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
    v15 = *(_QWORD *)v7 & 2LL;
    *(_QWORD *)v7 &= ~1uLL;
    *(_QWORD *)v7 = v15 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      a2[1] = v7;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
    }
    else
    {
      a2[2] = v7;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
    }
    sub_344750(a1, (__int64 *)v7);
  }
  ++a1->m128i_i64[1];
  return v7;
}

