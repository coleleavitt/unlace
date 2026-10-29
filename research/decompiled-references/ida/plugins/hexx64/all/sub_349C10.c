__int64 __fastcall sub_349C10(__m128i *a1, __int64 a2, char a3, __int64 **a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  __m128i v14; // xmm0
  void *v16; // rax
  __int64 v17; // rdx
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
  v9 = v6;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  v10 = *a4;
  v11 = **a4;
  *(_QWORD *)(v9 + 32) = 0;
  *(_OWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 24) = v11;
  v12 = v10[2];
  if ( v12 )
  {
    v16 = (void *)qalloc_or_throw(16 * v12, a2, v7, v8);
    *(_QWORD *)(v9 + 48) = v12;
    *(_QWORD *)(v9 + 32) = v16;
    memcpy(v16, (const void *)v10[1], 16 * v12);
    *(_QWORD *)(v9 + 40) = v12;
    v12 = *(_QWORD *)v9 & 1LL;
  }
  *(_QWORD *)(v9 + 56) = 0;
  *(_DWORD *)(v9 + 64) = -1;
  v13 = v12 | a2 & 0xFFFFFFFFFFFFFFFCLL;
  *(_QWORD *)v9 = v13;
  v14 = _mm_loadl_epi64(a1);
  *(_QWORD *)v9 = v13 | 1;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v14, v14);
  if ( a1->m128i_i64[0] == a2 )
  {
    *(_QWORD *)a2 = v9 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)a2 & 3LL;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v9;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v9;
    v17 = *(_QWORD *)v9 & 2LL;
    *(_QWORD *)v9 &= ~1uLL;
    *(_QWORD *)v9 = v17 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      *(_QWORD *)(a2 + 8) = v9;
      if ( a2 == *(_QWORD *)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v9;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = v9;
      if ( a2 == *(_QWORD *)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v9;
    }
    sub_3499D0(a1, (__int64 *)v9);
  }
  ++a1->m128i_i64[1];
  return v9;
}

