unsigned __int64 __fastcall sub_C21D0(__m128i *a1, unsigned __int64 *a2, char a3, __int64 **a4)
{
  void *v7; // rax
  unsigned __int64 v8; // rbx
  __int64 *v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v14; // rdx
  _QWORD *exception; // rax

  v7 = (void *)qalloc();
  if ( !v7 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v8 = (unsigned __int64)v7;
  memset(v7, 0, 0x70u);
  v9 = *a4;
  v10 = **a4;
  *(_QWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 88) = 0;
  *(_QWORD *)(v8 + 24) = v10;
  *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 80) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 96) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 104) = 0;
  *(_OWORD *)(v8 + 40) = 0;
  sub_121960(v8 + 32, v9 + 1);
  v11 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 1LL;
  *(_QWORD *)v8 = v11;
  v12 = _mm_loadl_epi64(a1);
  *(_QWORD *)v8 = v11 | 1;
  *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v12, v12);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v8 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
    v14 = *(_QWORD *)v8 & 2LL;
    *(_QWORD *)v8 &= ~1uLL;
    *(_QWORD *)v8 = v14 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      a2[1] = v8;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
    }
    else
    {
      a2[2] = v8;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
    }
    sub_C1DF0(a1, (__int64 *)v8);
  }
  ++a1->m128i_i64[1];
  return v8;
}

