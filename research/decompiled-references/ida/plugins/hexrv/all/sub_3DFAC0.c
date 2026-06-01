__int64 __fastcall sub_3DFAC0(_QWORD *a1)
{
  __int64 v2; // r12
  __int64 v4; // rbx
  __m128i v5; // xmm0
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  __m128i *v10; // r13
  __m128i *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  const __m128i *v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __m128i v20; // xmm1
  bool v21; // cf
  __int64 v22; // rax
  __int64 v23; // rcx
  const __m128i *v24; // rdi
  __int64 v25; // r14
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __int64 v28; // rcx
  const __m128i *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rsi
  __m128i v32; // xmm1
  __m128i v33; // [rsp+0h] [rbp-88h] BYREF
  __int64 v34; // [rsp+10h] [rbp-78h] BYREF
  __m128i v35; // [rsp+18h] [rbp-70h] BYREF
  __int64 v36; // [rsp+30h] [rbp-58h] BYREF
  __int64 v37; // [rsp+38h] [rbp-50h]
  __m128i v38; // [rsp+40h] [rbp-48h]
  unsigned __int64 v39; // [rsp+58h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  v35 = 0;
  v34 = 0;
  if ( (unsigned __int8)sub_37D7E0(
                          (__int64)&v34,
                          1023,
                          (__int64)&unk_3F3793,
                          (__int64)"Please enter the new stock comment")
    && (sub_3DE570((__int64)&v34, 32), v35.m128i_i64[0] > 1uLL) )
  {
    if ( netnode_suplast() != -1 )
      netnode_supshift();
    netnode_supset();
    v4 = v34;
    v5 = _mm_loadu_si128(&v35);
    v6 = a1[32];
    v35 = 0;
    v7 = a1[31];
    v37 = v34;
    v8 = a1[33];
    v36 = 0;
    v9 = v6 + 1;
    v34 = 0;
    v38 = v5;
    if ( (unsigned __int64)&v36 >= v7 && (unsigned __int64)&v36 < v7 + 32 * v8 )
    {
      v37 = 0;
      v38 = 0;
      if ( v8 < v9 )
      {
        v33 = v5;
        v22 = qvector_reserve();
        v23 = a1[32];
        v7 = v22;
        v24 = (const __m128i *)a1[31];
        v25 = a1[33];
        v26 = _mm_load_si128(&v33);
        a1[33] = v8;
        v27 = v22;
        v28 = v23 - 1;
        v29 = v24;
        if ( v28 >= 0 )
        {
          do
          {
            v30 = v29->m128i_i64[0];
            v27 += 32;
            v29 += 2;
            *(_QWORD *)(v27 - 32) = v30;
            v31 = v29[-2].m128i_i64[1];
            v32 = _mm_loadu_si128(v29 - 1);
            v29[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v27 - 24) = v31;
            *(__m128i *)(v27 - 16) = v32;
            v29[-1].m128i_i64[1] = 0;
            v21 = v28-- == 0;
          }
          while ( !v21 );
        }
        v33 = v26;
        qfree();
        a1[31] = v7;
        v5 = _mm_load_si128(&v33);
        a1[33] = v25;
        v6 = a1[32];
      }
      v11 = (__m128i *)(v7 + 32 * v6);
      v11->m128i_i64[0] = 0;
      v11->m128i_i64[1] = v4;
      v11[1] = v5;
    }
    else
    {
      if ( v8 < v9 )
      {
        v33 = v5;
        v12 = qvector_reserve();
        v13 = a1[32];
        v14 = a1[33];
        v7 = v12;
        a1[33] = v8;
        v15 = (const __m128i *)a1[31];
        v16 = _mm_load_si128(&v33);
        v17 = v13 - 1;
        if ( v17 >= 0 )
        {
          do
          {
            v18 = v15->m128i_i64[0];
            v12 += 32;
            v15 += 2;
            *(_QWORD *)(v12 - 32) = v18;
            v19 = v15[-2].m128i_i64[1];
            v20 = _mm_loadu_si128(v15 - 1);
            v15[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v12 - 24) = v19;
            *(__m128i *)(v12 - 16) = v20;
            v15[-1].m128i_i64[1] = 0;
            v21 = v17-- == 0;
          }
          while ( !v21 );
        }
        v33 = v16;
        qfree();
        a1[31] = v7;
        v6 = a1[32];
        a1[33] = v14;
        v5 = _mm_load_si128(&v33);
      }
      v10 = (__m128i *)(32 * v6 + v7);
      v10->m128i_i64[0] = 0;
      v10->m128i_i64[1] = v4;
      v10[1] = v5;
    }
    ++a1[32];
    v2 = 0;
  }
  else
  {
    v2 = -1;
  }
  if ( v34 )
  {
    v35.m128i_i64[0] = 0;
    qfree();
  }
  return v2;
}

