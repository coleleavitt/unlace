unsigned __int64 __fastcall sub_1E98B0(__m128i *a1, unsigned __int64 *a2, char a3, const __m128i **a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  const __m128i *v11; // rsi
  unsigned __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v15; // rdx
  _QWORD *exception; // rax

  v7 = qalloc();
  if ( !v7 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v7 + 64) = 0;
  v10 = v7;
  *(_OWORD *)(v7 + 16) = 0;
  *(_OWORD *)(v7 + 32) = 0;
  *(_OWORD *)v7 = 0;
  *(_OWORD *)(v7 + 48) = 0;
  v11 = *a4 + 1;
  *(__m128i *)(v7 + 24) = _mm_loadu_si128(*a4);
  sub_312C40(v7 + 40, (__int64)v11, v8, v9);
  v12 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v10 & 1LL;
  *(_QWORD *)v10 = v12;
  v13 = _mm_loadl_epi64(a1);
  *(_QWORD *)v10 = v12 | 1;
  *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v13, v13);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v10 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v10;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v10;
    v15 = *(_QWORD *)v10 & 2LL;
    *(_QWORD *)v10 &= ~1uLL;
    *(_QWORD *)v10 = v15 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      a2[1] = v10;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v10;
    }
    else
    {
      a2[2] = v10;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v10;
    }
    sub_8B1C0(a1, (__int64 *)v10);
  }
  ++a1->m128i_i64[1];
  return v10;
}

