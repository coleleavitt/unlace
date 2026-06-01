__int64 __fastcall sub_1F6390(__m128i *a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r15
  size_t v11; // r14
  unsigned __int64 v12; // rax
  __m128i v13; // xmm0
  void *v15; // rax
  __int64 v16; // rdx
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
  v9 = v6;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)v6 = 0;
  v10 = *a4;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  v11 = *(_QWORD *)(v10 + 8);
  if ( v11 )
  {
    v15 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 8), a2, v7, v8);
    *(_QWORD *)(v9 + 40) = v11;
    *(_QWORD *)(v9 + 24) = v15;
    memcpy(v15, *(const void **)v10, v11);
    *(_QWORD *)(v9 + 32) = v11;
    v11 = *(_QWORD *)v9 & 1LL;
  }
  v12 = v11 | a2 & 0xFFFFFFFFFFFFFFFCLL;
  *(_QWORD *)v9 = v12;
  v13 = _mm_loadl_epi64(a1);
  *(_QWORD *)v9 = v12 | 1;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v13, v13);
  if ( a1->m128i_i64[0] == a2 )
  {
    *(_QWORD *)a2 = v9 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)a2 & 3LL;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v9;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v9;
    v16 = *(_QWORD *)v9 & 2LL;
    *(_QWORD *)v9 &= ~1uLL;
    *(_QWORD *)v9 = v16 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_892B0(a1, (__int64 *)v9);
  }
  ++a1->m128i_i64[1];
  return v9;
}

