unsigned __int64 __fastcall sub_47780(const __m128i **a1, const __m128i *a2)
{
  const __m128i *v3; // rdx
  const __m128i *v6; // rax
  const __m128i *v7; // r13
  __m128i si128; // xmm1
  __m128i v9; // xmm0
  __int64 v10; // rsi
  __int64 v11; // rcx
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  const __m128i *v18; // rdx
  const __m128i *v19; // r14
  const __m128i *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __m128i v23; // xmm0
  bool v24; // cf
  __int64 v25; // rax
  const __m128i *v26; // rdx
  const __m128i *v27; // r14
  const __m128i *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rdx
  __m128i v31; // xmm0
  _BYTE v32[24]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v33; // [rsp+18h] [rbp-70h]
  __int64 v34; // [rsp+20h] [rbp-68h]
  __m128i v35; // [rsp+30h] [rbp-58h] BYREF
  __m128i v36; // [rsp+40h] [rbp-48h] BYREF
  __int64 v37; // [rsp+50h] [rbp-38h]
  unsigned __int64 v38; // [rsp+58h] [rbp-30h]

  v3 = a1[1];
  v38 = __readfsqword(0x28u);
  memset(v32, 0, sizeof(v32));
  v33 = 0;
  LODWORD(v34) = 0;
  if ( a2 < v3 )
  {
LABEL_9:
    a1[1] = a2;
    return v38 - __readfsqword(0x28u);
  }
  if ( v3 < a2 )
  {
    v6 = *a1;
    v7 = a1[2];
    if ( v32 < (_BYTE *)*a1 || v32 >= &v6->m128i_i8[40 * (_QWORD)v7] )
    {
      if ( v7 >= a2 )
        goto LABEL_6;
      v17 = qvector_reserve();
      v18 = a1[1];
      v19 = a1[2];
      a1[2] = v7;
      v20 = *a1;
      v21 = v17;
      v22 = (__int64)&v18[-1].m128i_i64[1] + 7;
      if ( v22 >= 0 )
      {
        do
        {
          v23 = _mm_loadu_si128(v20);
          v17 += 40;
          v20 = (const __m128i *)((char *)v20 + 40);
          *(__m128i *)(v17 - 40) = v23;
          *(__m128i *)(v17 - 24) = _mm_loadu_si128((const __m128i *)((char *)v20 - 24));
          *(_QWORD *)(v17 - 8) = v20[-1].m128i_i64[1];
          v24 = v22-- == 0;
        }
        while ( !v24 );
      }
      qfree();
      v3 = a1[1];
      *a1 = (const __m128i *)v21;
      v6 = (const __m128i *)v21;
      a1[2] = v19;
      if ( v3 < a2 )
      {
LABEL_6:
        si128 = _mm_load_si128((const __m128i *)v32);
        v9 = _mm_load_si128((const __m128i *)&v32[16]);
        v10 = v34;
        v11 = 5LL * (_QWORD)v3;
        while ( 1 )
        {
          v3 = (const __m128i *)((char *)v3 + 1);
          v6[2].m128i_i64[v11] = v10;
          *(__m128i *)((char *)v6 + v11 * 8) = si128;
          *(__m128i *)((char *)v6 + v11 * 8 + 16) = v9;
          v11 += 5;
          if ( a2 == v3 )
            break;
          v6 = *a1;
        }
      }
    }
    else
    {
      v35 = _mm_load_si128((const __m128i *)v32);
      v12 = _mm_load_si128((const __m128i *)&v32[16]);
      v37 = v34;
      v36 = v12;
      if ( v7 >= a2 )
        goto LABEL_12;
      v25 = qvector_reserve();
      v26 = a1[1];
      v27 = a1[2];
      a1[2] = v7;
      v28 = *a1;
      v29 = v25;
      v30 = (__int64)&v26[-1].m128i_i64[1] + 7;
      if ( v30 >= 0 )
      {
        do
        {
          v31 = _mm_loadu_si128(v28);
          v25 += 40;
          v28 = (const __m128i *)((char *)v28 + 40);
          *(__m128i *)(v25 - 40) = v31;
          *(__m128i *)(v25 - 24) = _mm_loadu_si128((const __m128i *)((char *)v28 - 24));
          *(_QWORD *)(v25 - 8) = v28[-1].m128i_i64[1];
          v24 = v30-- == 0;
        }
        while ( !v24 );
      }
      qfree();
      v3 = a1[1];
      *a1 = (const __m128i *)v29;
      v6 = (const __m128i *)v29;
      a1[2] = v27;
      if ( v3 < a2 )
      {
LABEL_12:
        v13 = _mm_load_si128(&v35);
        v14 = _mm_load_si128(&v36);
        v15 = v37;
        v16 = 5LL * (_QWORD)v3;
        while ( 1 )
        {
          v3 = (const __m128i *)((char *)v3 + 1);
          v6[2].m128i_i64[v16] = v15;
          *(__m128i *)((char *)v6 + v16 * 8) = v13;
          *(__m128i *)((char *)v6 + v16 * 8 + 16) = v14;
          v16 += 5;
          if ( a2 == v3 )
            break;
          v6 = *a1;
        }
      }
    }
    goto LABEL_9;
  }
  return v38 - __readfsqword(0x28u);
}
