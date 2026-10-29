__int64 __fastcall sub_38A40(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v4; // r12
  __int32 v5; // r8d
  _QWORD *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r13
  __int32 v9; // r14d
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i *v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r12
  const __m128i *v21; // rdi
  __int64 v22; // rdx
  __m128i v23; // xmm0
  bool v24; // cf
  __int64 v25; // rax
  __int64 v26; // rsi
  const __m128i *v27; // rdi
  __int64 v28; // rdx
  __m128i v29; // xmm0
  unsigned __int64 v30; // [rsp+0h] [rbp-88h]
  __int32 v31; // [rsp+0h] [rbp-88h]
  unsigned __int64 v32; // [rsp+8h] [rbp-80h]
  __int32 v33; // [rsp+14h] [rbp-74h] BYREF
  __int64 v34; // [rsp+18h] [rbp-70h] BYREF
  __m128i v35; // [rsp+20h] [rbp-68h] BYREF
  __m128i v36; // [rsp+30h] [rbp-58h] BYREF
  __int64 v37; // [rsp+40h] [rbp-48h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v2 = a1[3];
  v33 = -2;
  v34 = -1;
  if ( (unsigned __int8)sub_57F60(v2, &v33, &v34) )
  {
    v4 = a1[2];
    v5 = v33;
    v6 = a1 + 6;
    v7 = v34;
    v8 = a1[3];
    v9 = *(_DWORD *)(v4 + 72);
    v10 = a1[7];
    v35.m128i_i32[0] = v33;
    v11 = a1[6];
    v12 = a1[8];
    v35.m128i_i64[1] = v34;
    v36.m128i_i64[0] = v4;
    v13 = v10 + 1;
    v36.m128i_i32[2] = v9;
    v37 = v8;
    if ( (unsigned __int64)&v35 < v11 || (unsigned __int64)&v35 >= v11 + 40 * v12 )
    {
      if ( v12 < v13 )
      {
        v30 = v12;
        v18 = qvector_reserve(v6, 0, v10 + 1, 40);
        v19 = a1[7];
        v20 = a1[8];
        v21 = (const __m128i *)a1[6];
        v11 = v18;
        a1[8] = v30;
        v22 = v19 - 1;
        if ( v22 >= 0 )
        {
          do
          {
            v23 = _mm_loadu_si128(v21);
            v18 += 40;
            v21 = (const __m128i *)((char *)v21 + 40);
            *(__m128i *)(v18 - 40) = v23;
            *(__m128i *)(v18 - 24) = _mm_loadu_si128((const __m128i *)((char *)v21 - 24));
            *(_QWORD *)(v18 - 8) = v21[-1].m128i_i64[1];
            v24 = v22-- == 0;
          }
          while ( !v24 );
          v21 = (const __m128i *)a1[6];
        }
        qfree(v21);
        a1[6] = v11;
        v10 = a1[7];
        a1[8] = v20;
      }
      v15 = v37;
      v16 = (__m128i *)(v11 + 40 * v10);
      *v16 = _mm_load_si128(&v35);
      v17 = _mm_load_si128(&v36);
      v16[2].m128i_i64[0] = v15;
      v16[1] = v17;
    }
    else
    {
      if ( v12 < v13 )
      {
        v32 = v12;
        v31 = v33;
        v25 = qvector_reserve(v6, 0, v10 + 1, 40);
        v26 = a1[8];
        v27 = (const __m128i *)a1[6];
        v11 = v25;
        v28 = a1[7] - 1LL;
        a1[8] = v32;
        if ( v28 >= 0 )
        {
          do
          {
            v29 = _mm_loadu_si128(v27);
            v25 += 40;
            v27 = (const __m128i *)((char *)v27 + 40);
            *(__m128i *)(v25 - 40) = v29;
            *(__m128i *)(v25 - 24) = _mm_loadu_si128((const __m128i *)((char *)v27 - 24));
            *(_QWORD *)(v25 - 8) = v27[-1].m128i_i64[1];
            v24 = v28-- == 0;
          }
          while ( !v24 );
          v27 = (const __m128i *)a1[6];
        }
        qfree(v27);
        a1[6] = v11;
        v10 = a1[7];
        v5 = v31;
        a1[8] = v26;
      }
      v14 = v11 + 40 * v10;
      *(_DWORD *)v14 = v5;
      *(_QWORD *)(v14 + 8) = v7;
      *(_QWORD *)(v14 + 16) = v4;
      *(_DWORD *)(v14 + 24) = v9;
      *(_QWORD *)(v14 + 32) = v8;
    }
    ++a1[7];
  }
  return 0;
}

