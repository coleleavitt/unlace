void __fastcall std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>(
        __int64 a1,
        const __m128i *a2)
{
  const __m128i *v2; // rbx
  __m128i *v3; // r12
  __int64 v4; // r14
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __m128i v10; // xmm1
  __m128i *v11; // rcx
  __m128i v12; // xmm0
  const __m128i *v13; // rax
  __m128i *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __m128i v17; // xmm0
  __int64 m128i_i64; // rbx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __m128i *v22; // [rsp+8h] [rbp-40h]

  v2 = *(const __m128i **)(a1 + 8);
  v3 = *(__m128i **)a1;
  v4 = (__int64)v2->m128i_i64 - *(_QWORD *)a1;
  v5 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 4);
  if ( v5 == 0x2AAAAAAAAAAAAAALL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  v7 = v5 + v6;
  if ( v7 > 0x2AAAAAAAAAAAAAALL )
    v7 = 0x2AAAAAAAAAAAAAALL;
  v8 = 3 * v7;
  v9 = operator new(48 * v7);
  v10 = _mm_loadu_si128(a2 + 2);
  v11 = (__m128i *)v9;
  *(__m128i *)(v9 + v4) = _mm_loadu_si128(a2);
  v12 = _mm_loadu_si128(a2 + 1);
  *(__m128i *)(v9 + v4 + 32) = v10;
  *(__m128i *)(v9 + v4 + 16) = v12;
  if ( a2->m128i_i32[0] == 11
    && (v20 = a2[2].m128i_i64[1],
        *(_QWORD *)(v9 + v4 + 32) = 0,
        *(_OWORD *)(v9 + v4 + 16) = 0,
        *(_QWORD *)(v9 + v4 + 40) = v20,
        (v21 = a2[2].m128i_i64[0]) != 0) )
  {
    *(__m128i *)(v9 + v4 + 16) = v12;
    *(_QWORD *)(v9 + v4 + 32) = v21;
    a2[2] = 0;
    if ( v2 == v3 )
      goto LABEL_19;
  }
  else if ( v2 == v3 )
  {
LABEL_19:
    m128i_i64 = v9;
    goto LABEL_14;
  }
  v13 = v3;
  v14 = v11;
  do
  {
    while ( 1 )
    {
      *v14 = _mm_loadu_si128(v13);
      v14[1] = _mm_loadu_si128(v13 + 1);
      v14[2] = _mm_loadu_si128(v13 + 2);
      if ( v13->m128i_i32[0] == 11 )
      {
        v15 = v13[2].m128i_i64[1];
        v14[2].m128i_i64[0] = 0;
        v14[1] = 0;
        v14[2].m128i_i64[1] = v15;
        v16 = v13[2].m128i_i64[0];
        if ( v16 )
          break;
      }
      v13 += 3;
      v14 += 3;
      if ( v2 == v13 )
        goto LABEL_13;
    }
    v17 = _mm_loadu_si128(v13 + 1);
    v13 += 3;
    v14[2].m128i_i64[0] = v16;
    v14 += 3;
    v14[-2] = v17;
  }
  while ( v2 != v13 );
LABEL_13:
  m128i_i64 = (__int64)v11[3
                         * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)&v2[-3] - (char *)v3) >> 4))
                          & 0xFFFFFFFFFFFFFFFLL)
                         + 3].m128i_i64;
LABEL_14:
  v19 = m128i_i64 + 48;
  if ( v3 )
  {
    v22 = v11;
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
    v11 = v22;
  }
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = v19;
  *(_QWORD *)(a1 + 16) = &v11[v8];
}

