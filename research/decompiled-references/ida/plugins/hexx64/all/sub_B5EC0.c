unsigned __int64 __fastcall sub_B5EC0(__m128i *a1, unsigned __int64 *a2, char a3, unsigned __int8 **a4, double a5)
{
  void *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int8 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v21; // rdx
  _QWORD *exception; // rax

  v8 = (void *)qalloc();
  if ( !v8 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v10 = (unsigned __int64)v8;
  memset(v8, 0, 0x88u);
  v11 = *a4;
  sub_123A40((__int64)v8 + 24, *a4, v9, 0);
  sub_123A40(v10 + 40, v11 + 16, v12, v13);
  sub_64000((__int64 *)(v10 + 56), (__int64)(v11 + 32), a5);
  v14 = *((_QWORD *)v11 + 6);
  v15 = _mm_loadu_si128((const __m128i *)(v11 + 56));
  *((_QWORD *)v11 + 6) = 0;
  *(_QWORD *)(v10 + 72) = v14;
  *(__m128i *)(v10 + 80) = v15;
  *(_OWORD *)(v11 + 56) = 0;
  sub_64000((__int64 *)(v10 + 96), (__int64)(v11 + 72), 0.0);
  v16 = _mm_loadu_si128((const __m128i *)v11 + 6);
  v17 = *((_QWORD *)v11 + 11);
  *((_QWORD *)v11 + 11) = 0;
  *(__m128i *)(v10 + 120) = v16;
  *((_OWORD *)v11 + 6) = 0;
  *(_QWORD *)(v10 + 112) = v17;
  v18 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v10 & 1LL;
  *(_QWORD *)v10 = v18;
  v19 = _mm_loadl_epi64(a1);
  *(_QWORD *)v10 = v18 | 1;
  *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v19, v19);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v10 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v10;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v10;
    v21 = *(_QWORD *)v10 & 2LL;
    *(_QWORD *)v10 &= ~1uLL;
    *(_QWORD *)v10 = v21 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_B5AE0(a1, (__int64 *)v10);
  }
  ++a1->m128i_i64[1];
  return v10;
}

