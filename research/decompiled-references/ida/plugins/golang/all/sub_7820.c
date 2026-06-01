__int64 __fastcall sub_7820(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r13
  __int64 v10; // rdx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  __int64 *v13; // rax
  __m128i v14; // xmm0
  __m128i *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  const __m128i *v22; // rdi
  __int64 v23; // rdx
  __m128i v24; // xmm0
  bool v25; // cf
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  const __m128i *v29; // rdi
  __int64 v30; // rdx
  __m128i v31; // xmm0
  __m128i v32; // [rsp+10h] [rbp-58h] BYREF
  __int64 v33; // [rsp+20h] [rbp-48h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v5 = a3 * a4 + a2;
  v7 = a1[1];
  v8 = *a1;
  v34 = __readfsqword(0x28u);
  if ( v7 && (v10 = v8 + 24 * v7 - 24, *(_QWORD *)(v10 + 16) == a3) && *(_QWORD *)(v10 + 8) == a2 )
  {
    *(_QWORD *)(v10 + 8) = v5;
  }
  else
  {
    v32.m128i_i64[0] = a2;
    v11 = a1[2];
    v12 = v7 + 1;
    v32.m128i_i64[1] = v5;
    v33 = a3;
    if ( (unsigned __int64)&v32 < v8 || (unsigned __int64)&v32 >= v8 + 24 * v11 )
    {
      if ( v11 < v12 )
      {
        v19 = qvector_reserve();
        v20 = a1[1];
        v21 = a1[2];
        a1[2] = v11;
        v22 = (const __m128i *)*a1;
        v8 = v19;
        v23 = v20 - 1;
        if ( v23 >= 0 )
        {
          do
          {
            v24 = _mm_loadu_si128(v22);
            v19 += 24;
            v22 = (const __m128i *)((char *)v22 + 24);
            *(__m128i *)(v19 - 24) = v24;
            *(_QWORD *)(v19 - 8) = v22[-1].m128i_i64[1];
            v25 = v23-- == 0;
          }
          while ( !v25 );
        }
        qfree();
        *a1 = v8;
        v7 = a1[1];
        a1[2] = v21;
      }
      v14 = _mm_load_si128(&v32);
      v15 = (__m128i *)(v8 + 24 * v7);
      v15[1].m128i_i64[0] = v33;
      *v15 = v14;
    }
    else
    {
      if ( v11 < v12 )
      {
        v26 = qvector_reserve();
        v27 = a1[1];
        v28 = a1[2];
        a1[2] = v11;
        v29 = (const __m128i *)*a1;
        v8 = v26;
        v30 = v27 - 1;
        if ( v30 >= 0 )
        {
          do
          {
            v31 = _mm_loadu_si128(v29);
            v26 += 24;
            v29 = (const __m128i *)((char *)v29 + 24);
            *(__m128i *)(v26 - 24) = v31;
            *(_QWORD *)(v26 - 8) = v29[-1].m128i_i64[1];
            v25 = v30-- == 0;
          }
          while ( !v25 );
        }
        qfree();
        v7 = a1[1];
        *a1 = v8;
        a1[2] = v28;
      }
      v13 = (__int64 *)(v8 + 24 * v7);
      *v13 = a2;
      v13[1] = v5;
      v13[2] = a3;
    }
    v16 = *a1;
    v17 = a1[1] + 1;
    a1[1] = v17;
    return *(_QWORD *)(v16 + 24 * v17 - 16);
  }
  return v5;
}
