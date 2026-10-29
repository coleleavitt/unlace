__int64 __fastcall sub_1DB00(__int64 *a1, const __m128i *a2)
{
  _QWORD *v3; // r12
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 result; // rax
  __m128i v9; // xmm1
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r14
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  bool v21; // cf
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r14
  _QWORD *v25; // rdi
  __int64 v26; // xmm1_8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rsi
  __m128i v31[3]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (_QWORD *)*a1;
  v4 = a1[2];
  if ( (unsigned __int64)a2 >= *a1 && a2 < (const __m128i *)&v3[2 * v4] )
  {
    v9 = _mm_loadl_epi64(a2);
    v10 = a2->m128i_i64[1];
    *a2 = 0;
    v11 = a1[1];
    v12 = a1[2];
    result = v11 + 1;
    if ( v12 < v11 + 1 )
    {
      v31[0].m128i_i64[0] = v9.m128i_i64[0];
      v22 = qvector_reserve(a1, 0, v11 + 1, 16);
      v23 = a1[1];
      v24 = a1[2];
      v13 = v22;
      a1[2] = v12;
      v25 = (_QWORD *)*a1;
      v26 = v31[0].m128i_i64[0];
      v27 = v23 - 1;
      if ( v27 >= 0 )
      {
        v28 = v22;
        do
        {
          v29 = *v25;
          v25 += 2;
          v28 += 16;
          *(_QWORD *)(v28 - 8) = 0;
          *(_QWORD *)(v28 - 16) = v29;
          v30 = *(v25 - 1);
          *((_OWORD *)v25 - 1) = 0;
          *(_QWORD *)(v28 - 8) = v30;
          v21 = v27-- == 0;
        }
        while ( !v21 );
        v25 = (_QWORD *)*a1;
      }
      v31[0].m128i_i64[0] = v26;
      result = qfree(v25);
      v11 = a1[1];
      *a1 = v13;
      a1[2] = v24;
      v9 = _mm_loadl_epi64(v31);
    }
    else
    {
      v13 = *a1;
    }
    *(__m128i *)(v13 + 16 * v11) = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)v10);
  }
  else
  {
    v5 = a1[1];
    if ( v4 < v5 + 1 )
    {
      v14 = qvector_reserve(a1, 0, v5 + 1, 16);
      v15 = a1[1];
      v16 = a1[2];
      a1[2] = v4;
      v17 = (_QWORD *)*a1;
      v3 = (_QWORD *)v14;
      v18 = v15 - 1;
      if ( v18 >= 0 )
      {
        do
        {
          v19 = *v17;
          v17 += 2;
          v14 += 16;
          *(_QWORD *)(v14 - 8) = 0;
          *(_QWORD *)(v14 - 16) = v19;
          v20 = *(v17 - 1);
          *((_OWORD *)v17 - 1) = 0;
          *(_QWORD *)(v14 - 8) = v20;
          v21 = v18-- == 0;
        }
        while ( !v21 );
        v17 = (_QWORD *)*a1;
      }
      qfree(v17);
      *a1 = (__int64)v3;
      v5 = a1[1];
      a1[2] = v16;
    }
    v6 = &v3[2 * v5];
    v7 = a2->m128i_i64[0];
    v6[1] = 0;
    *v6 = v7;
    result = a2->m128i_i64[1];
    *a2 = 0;
    v6[1] = result;
  }
  ++a1[1];
  return result;
}
