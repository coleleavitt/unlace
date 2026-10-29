__int64 __fastcall sub_3E4D40(_QWORD *a1)
{
  __int64 v2; // r12
  __int64 v4; // rbx
  __m128i v5; // xmm0
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  __m128i *v11; // r13
  __m128i *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  const __m128i *v16; // rdi
  __m128i v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __m128i v21; // xmm1
  bool v22; // cf
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // r14
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rcx
  const __m128i *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rsi
  __m128i v33; // xmm1
  __m128i v34; // [rsp+0h] [rbp-88h] BYREF
  __int64 v35; // [rsp+10h] [rbp-78h] BYREF
  __m128i v36; // [rsp+18h] [rbp-70h] BYREF
  __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38; // [rsp+38h] [rbp-50h]
  __m128i v39; // [rsp+40h] [rbp-48h]
  unsigned __int64 v40; // [rsp+58h] [rbp-30h]

  v40 = __readfsqword(0x28u);
  v36 = 0;
  v35 = 0;
  if ( (unsigned __int8)sub_382A60(
                          (__int64)&v35,
                          1023,
                          (__int64)&unk_418793,
                          (__int64)"Please enter the new stock comment")
    && (sub_3E37F0(&v35, 32), v36.m128i_i64[0] > 1uLL) )
  {
    if ( netnode_suplast() != -1 )
      netnode_supshift();
    netnode_supset();
    v4 = v35;
    v5 = _mm_loadu_si128(&v36);
    v6 = a1[32];
    v36 = 0;
    v7 = a1[31];
    v8 = a1 + 31;
    v38 = v35;
    v9 = a1[33];
    v37 = 0;
    v10 = v6 + 1;
    v35 = 0;
    v39 = v5;
    if ( (unsigned __int64)&v37 >= v7 && (unsigned __int64)&v37 < v7 + 32 * v9 )
    {
      v38 = 0;
      v39 = 0;
      if ( v9 < v10 )
      {
        v34 = v5;
        v23 = qvector_reserve((__int64)v8, 0, v6 + 1, 32);
        v24 = a1[32];
        v7 = v23;
        v25 = a1[31];
        v26 = a1[33];
        v27 = _mm_load_si128(&v34);
        a1[33] = v9;
        v28 = v23;
        v29 = v24 - 1;
        v30 = (const __m128i *)v25;
        if ( v29 >= 0 )
        {
          do
          {
            v31 = v30->m128i_i64[0];
            v28 += 32;
            v30 += 2;
            *(_QWORD *)(v28 - 32) = v31;
            v32 = v30[-2].m128i_i64[1];
            v33 = _mm_loadu_si128(v30 - 1);
            v30[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v28 - 24) = v32;
            *(__m128i *)(v28 - 16) = v33;
            v30[-1].m128i_i64[1] = 0;
            v22 = v29-- == 0;
          }
          while ( !v22 );
          v25 = a1[31];
        }
        v34 = v27;
        qfree(v25);
        a1[31] = v7;
        v5 = _mm_load_si128(&v34);
        a1[33] = v26;
        v6 = a1[32];
      }
      v12 = (__m128i *)(v7 + 32 * v6);
      v12->m128i_i64[0] = 0;
      v12->m128i_i64[1] = v4;
      v12[1] = v5;
    }
    else
    {
      if ( v9 < v10 )
      {
        v34 = v5;
        v13 = qvector_reserve((__int64)v8, 0, v6 + 1, 32);
        v14 = a1[32];
        v15 = a1[33];
        v7 = v13;
        a1[33] = v9;
        v16 = (const __m128i *)a1[31];
        v17 = _mm_load_si128(&v34);
        v18 = v14 - 1;
        if ( v18 >= 0 )
        {
          do
          {
            v19 = v16->m128i_i64[0];
            v13 += 32;
            v16 += 2;
            *(_QWORD *)(v13 - 32) = v19;
            v20 = v16[-2].m128i_i64[1];
            v21 = _mm_loadu_si128(v16 - 1);
            v16[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v13 - 24) = v20;
            *(__m128i *)(v13 - 16) = v21;
            v16[-1].m128i_i64[1] = 0;
            v22 = v18-- == 0;
          }
          while ( !v22 );
          v16 = (const __m128i *)a1[31];
        }
        v34 = v17;
        qfree((__int64)v16);
        a1[31] = v7;
        v6 = a1[32];
        a1[33] = v15;
        v5 = _mm_load_si128(&v34);
      }
      v11 = (__m128i *)(32 * v6 + v7);
      v11->m128i_i64[0] = 0;
      v11->m128i_i64[1] = v4;
      v11[1] = v5;
    }
    ++a1[32];
    v2 = 0;
  }
  else
  {
    v2 = -1;
  }
  if ( v35 )
  {
    v36.m128i_i64[0] = 0;
    qfree(v35);
  }
  return v2;
}

