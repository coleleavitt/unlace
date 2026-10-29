__int64 __fastcall sub_2D0600(__m128i *a1, unsigned __int64 *a2, char a3, const __m128i **a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  const __m128i *v8; // roff
  __m128i v9; // xmm0
  __int64 v11; // rdx
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
  v7 = v6;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 32) = 0;
  v8 = *a4;
  *(__m128i *)(v6 + 24) = _mm_loadu_si128(*a4);
  *(_QWORD *)(v6 + 40) = v8[1].m128i_i64[0];
  *(_QWORD *)v6 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL;
  v9 = _mm_loadl_epi64(a1);
  *(_QWORD *)v6 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v9, v9);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v6 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v6;
    v11 = *(_QWORD *)v6 & 2LL;
    *(_QWORD *)v6 &= ~1uLL;
    *(_QWORD *)v6 = v11 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      a2[1] = v6;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
    }
    else
    {
      a2[2] = v6;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v6;
    }
    sub_13CC20(a1, (__int64 *)v6);
  }
  ++a1->m128i_i64[1];
  return v7;
}

