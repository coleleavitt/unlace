unsigned __int64 __fastcall sub_1B9560(__m128i *a1, unsigned __int64 *a2, char a3, const __m128i **a4)
{
  void *v6; // rax
  unsigned __int64 v7; // rbx
  const __m128i *v8; // rax
  __m128i v9; // xmm0
  __int32 v10; // edx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v18; // rdx
  _QWORD *exception; // rax

  v6 = (void *)qalloc();
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v7 = (unsigned __int64)v6;
  memset(v6, 0, 0xB8u);
  v8 = *a4;
  *(_QWORD *)(v7 + 24) = (*a4)->m128i_i64[0];
  v9 = _mm_loadu_si128(v8 + 1);
  *(_DWORD *)(v7 + 32) = v8->m128i_i32[2];
  v10 = v8[2].m128i_i32[0];
  *(__m128i *)(v7 + 40) = v9;
  *(_DWORD *)(v7 + 56) = v10;
  v11 = _mm_loadu_si128(v8 + 4);
  *(_DWORD *)(v7 + 64) = v8[2].m128i_i32[2];
  LOWORD(v10) = v8[2].m128i_i16[6];
  *(__m128i *)(v7 + 88) = v11;
  *(_WORD *)(v7 + 68) = v10;
  *(_QWORD *)(v7 + 72) = v8[3].m128i_i64[0];
  *(_QWORD *)(v7 + 80) = v8[3].m128i_i64[1];
  *(_DWORD *)(v7 + 104) = v8[5].m128i_i32[0];
  *(_QWORD *)(v7 + 112) = v8[5].m128i_i64[1];
  *(_QWORD *)(v7 + 120) = v8[6].m128i_i64[0];
  *(_DWORD *)(v7 + 128) = v8[6].m128i_i32[2];
  *(_BYTE *)(v7 + 132) = v8[6].m128i_i8[12];
  *(_QWORD *)(v7 + 136) = v8[7].m128i_i64[0];
  *(_DWORD *)(v7 + 144) = v8[7].m128i_i32[2];
  *(_QWORD *)(v7 + 152) = v8[8].m128i_i64[0];
  v12 = _mm_loadu_si128(v8 + 9);
  v13 = v8[8].m128i_i64[1];
  v8[8].m128i_i64[1] = 0;
  *(__m128i *)(v7 + 168) = v12;
  v8[9] = 0;
  v14 = *(_QWORD *)v7;
  *(_QWORD *)(v7 + 160) = v13;
  v15 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | v14 & 1;
  *(_QWORD *)v7 = v15;
  v16 = _mm_loadl_epi64(a1);
  *(_QWORD *)v7 = v15 | 1;
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v16, v16);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v7 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
    v18 = *(_QWORD *)v7 & 2LL;
    *(_QWORD *)v7 &= ~1uLL;
    *(_QWORD *)v7 = v18 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_1B9180(a1, (__int64 *)v7);
  }
  ++a1->m128i_i64[1];
  return v7;
}

