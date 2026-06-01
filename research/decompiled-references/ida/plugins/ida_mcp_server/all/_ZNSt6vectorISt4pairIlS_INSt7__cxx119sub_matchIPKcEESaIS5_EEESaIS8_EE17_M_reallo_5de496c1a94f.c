void __fastcall std::vector<std::pair<long,std::vector<std::sub_match<char const*>>>>::_M_realloc_append<long &,std::vector<std::sub_match<char const*>> const&>(
        __int64 a1,
        __int64 *a2,
        const __m128i **a3)
{
  _BYTE *v4; // r14
  char *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rax
  const __m128i *v15; // rcx
  const __m128i *v16; // r15
  signed __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  const __m128i *v20; // rax
  __int64 v21; // rdx
  __m128i v22; // xmm0
  char *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rcx
  __m128i v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // r14
  signed __int64 v30; // [rsp+8h] [rbp-50h]
  const __m128i *v32; // [rsp+18h] [rbp-40h]

  v4 = *(_BYTE **)(a1 + 8);
  v5 = *(char **)a1;
  v7 = (__int64)&v4[-*(_QWORD *)a1] >> 5;
  if ( v7 == 0x3FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v8 = 1;
  if ( v7 )
    v8 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  v6 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v10 = v7 + v8;
  if ( v10 > 0x3FFFFFFFFFFFFFFLL )
    v10 = 0x3FFFFFFFFFFFFFFLL;
  v11 = 32 * v10;
  v12 = operator new(v11);
  v13 = v12 + v6;
  v14 = *a2;
  v15 = a3[1];
  v16 = *a3;
  *(_QWORD *)(v13 + 24) = 0;
  *(_QWORD *)v13 = v14;
  *(_OWORD *)(v13 + 8) = 0;
  v17 = (char *)v15 - (char *)v16;
  if ( v15 == v16 )
  {
    v19 = 0;
  }
  else
  {
    v32 = v15;
    v30 = (char *)v15 - (char *)v16;
    v18 = operator new((char *)v15 - (char *)v16);
    v17 = v30;
    v19 = v18;
    v15 = v32;
  }
  *(_QWORD *)(v13 + 8) = v19;
  *(_QWORD *)(v13 + 24) = v19 + v17;
  if ( v15 != v16 )
  {
    v20 = v16;
    v21 = v19;
    do
    {
      v22 = _mm_loadu_si128(v20);
      v20 = (const __m128i *)((char *)v20 + 24);
      v21 += 24;
      *(__m128i *)(v21 - 24) = v22;
      *(_QWORD *)(v21 - 8) = v20[-1].m128i_i64[1];
    }
    while ( v15 != v20 );
    v19 += 8
         * (3
          * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)&v15[-2].m128i_u64[1] - (char *)v16) >> 3))
           & 0x1FFFFFFFFFFFFFFFLL)
          + 3);
  }
  *(_QWORD *)(v13 + 16) = v19;
  if ( v4 == v5 )
  {
    v24 = v12;
  }
  else
  {
    v23 = v5;
    v24 = v12;
    v25 = v12 + v4 - v5;
    do
    {
      v26 = *(_QWORD *)v23;
      v27 = _mm_loadu_si128((const __m128i *)(v23 + 8));
      v24 += 32;
      v23 += 32;
      *(_QWORD *)(v24 - 32) = v26;
      v28 = *((_QWORD *)v23 - 1);
      *(__m128i *)(v24 - 24) = v27;
      *(_QWORD *)(v24 - 8) = v28;
    }
    while ( v24 != v25 );
  }
  v29 = v24 + 32;
  if ( v5 )
    operator delete(v5, *(_QWORD *)(a1 + 16) - (_QWORD)v5);
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = v29;
  *(_QWORD *)(a1 + 16) = v11 + v12;
}

