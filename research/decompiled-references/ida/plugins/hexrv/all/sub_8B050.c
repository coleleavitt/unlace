__int64 __fastcall sub_8B050(__m128i *a1, unsigned __int64 *a2, char a3, const __m128i **a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  const __m128i *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __m128i v13; // xmm0
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
  *(_QWORD *)(v6 + 48) = 0;
  v7 = v6;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  v8 = *a4;
  *(_DWORD *)(v7 + 24) = (*a4)->m128i_i32[0];
  v9 = _mm_loadu_si128(v8 + 1);
  v10 = v8->m128i_i64[1];
  v8->m128i_i64[1] = 0;
  *(__m128i *)(v7 + 40) = v9;
  v8[1] = 0;
  v11 = *(_QWORD *)v7;
  *(_QWORD *)(v7 + 32) = v10;
  v12 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | v11 & 1;
  *(_QWORD *)v7 = v12;
  v13 = _mm_loadl_epi64(a1);
  *(_QWORD *)v7 = v12 | 1;
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v13, v13);
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
    sub_8AD80(a1, (__int64 *)v7);
  }
  ++a1->m128i_i64[1];
  return v7;
}

