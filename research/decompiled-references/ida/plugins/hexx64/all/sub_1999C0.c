__int64 __fastcall sub_1999C0(const __m128i **a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, double a5)
{
  __int64 v9; // r15
  __int64 v10; // rax
  const __m128i *v11; // rax
  const __m128i *v12; // r13
  unsigned __int64 v13; // r8
  __int8 *v14; // rsi
  __int64 v15; // rdx
  __m128i *v16; // rax
  __m128i v17; // xmm0
  const __m128i *v18; // rax
  __int8 *v20; // rax
  __int64 v21; // rax
  const __m128i *v22; // rdx
  const __m128i *v23; // rbp
  const __m128i *v24; // rdi
  __int64 v25; // rdx
  __m128i v26; // xmm0
  bool v27; // cf
  __int64 v28; // rax
  const __m128i *v29; // rdx
  const __m128i *v30; // rsi
  const __m128i *v31; // rdi
  __int64 v32; // rdx
  __m128i v33; // xmm0
  const __m128i *v34; // [rsp+8h] [rbp-70h]
  const __m128i *v35; // [rsp+8h] [rbp-70h]
  unsigned __int128 v36; // [rsp+10h] [rbp-68h] BYREF
  __m128i v37; // [rsp+20h] [rbp-58h] BYREF
  __int64 v38; // [rsp+30h] [rbp-48h]
  unsigned __int64 v39; // [rsp+38h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v36 = __PAIR128__(a4, a3);
  v37.m128i_i64[1] = a2;
  LOBYTE(v38) = 0;
  if ( (a4 == 0) != (a3 == 0) )
  {
    if ( !under_debugger )
      sub_383060(0xCD47u, a5);
    BUG();
  }
  v9 = -1;
  if ( a4 )
  {
    v10 = *(_QWORD *)(a4 + 24);
    v9 = v10 + 2;
    if ( v10 != *(_QWORD *)(*(_QWORD *)(a3 + 64) + 40LL) )
      v9 = v10 + 1;
  }
  v11 = a1[1];
  v12 = *a1;
  v37.m128i_i64[0] = v9;
  v13 = (unsigned __int64)a1[2];
  v14 = &v11->m128i_i8[1];
  if ( &v36 >= (unsigned __int128 *)v12 && &v36 < (unsigned __int128 *)((char *)v12 + 40 * v13) )
  {
    if ( v13 < (unsigned __int64)v14 )
    {
      v35 = a1[2];
      v28 = qvector_reserve((__int64)a1, 0, (__int64)v11->m128i_i64 + 1, 40);
      v29 = a1[1];
      v30 = a1[2];
      v31 = *a1;
      v12 = (const __m128i *)v28;
      a1[2] = v35;
      v32 = (__int64)&v29[-1].m128i_i64[1] + 7;
      if ( v32 >= 0 )
      {
        do
        {
          v33 = _mm_loadu_si128(v31);
          v28 += 40;
          v31 = (const __m128i *)((char *)v31 + 40);
          *(__m128i *)(v28 - 40) = v33;
          *(__m128i *)(v28 - 24) = _mm_loadu_si128((const __m128i *)((char *)v31 - 24));
          *(_QWORD *)(v28 - 8) = v31[-1].m128i_i64[1];
          v27 = v32-- == 0;
        }
        while ( !v27 );
        v31 = *a1;
      }
      qfree((__int64)v31);
      v11 = a1[1];
      *a1 = v12;
      a1[2] = v30;
    }
    v20 = &v12->m128i_i8[40 * (_QWORD)v11];
    *(_QWORD *)v20 = a3;
    *((_QWORD *)v20 + 1) = a4;
    *((_QWORD *)v20 + 2) = v9;
    *((_QWORD *)v20 + 3) = a2;
    v20[32] = 0;
  }
  else
  {
    if ( v13 < (unsigned __int64)v14 )
    {
      v34 = a1[2];
      v21 = qvector_reserve((__int64)a1, 0, (__int64)v11->m128i_i64 + 1, 40);
      v22 = a1[1];
      v23 = a1[2];
      v24 = *a1;
      v12 = (const __m128i *)v21;
      a1[2] = v34;
      v25 = (__int64)&v22[-1].m128i_i64[1] + 7;
      if ( v25 >= 0 )
      {
        do
        {
          v26 = _mm_loadu_si128(v24);
          v21 += 40;
          v24 = (const __m128i *)((char *)v24 + 40);
          *(__m128i *)(v21 - 40) = v26;
          *(__m128i *)(v21 - 24) = _mm_loadu_si128((const __m128i *)((char *)v24 - 24));
          *(_QWORD *)(v21 - 8) = v24[-1].m128i_i64[1];
          v27 = v25-- == 0;
        }
        while ( !v27 );
        v24 = *a1;
      }
      qfree((__int64)v24);
      *a1 = v12;
      v11 = a1[1];
      a1[2] = v23;
    }
    v15 = v38;
    v16 = (__m128i *)((char *)v12 + 40 * (_QWORD)v11);
    *v16 = _mm_load_si128((const __m128i *)&v36);
    v17 = _mm_load_si128(&v37);
    v16[2].m128i_i64[0] = v15;
    v16[1] = v17;
  }
  v18 = (const __m128i *)&a1[1]->m128i_i8[1];
  a1[1] = v18;
  return (__int64)&(*a1)[-2] + 40 * (_QWORD)v18 - 8;
}

