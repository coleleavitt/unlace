unsigned __int64 __fastcall sub_2E30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 i; // r15
  __int64 v6; // r12
  __int64 v7; // rbx
  __m128i *v8; // r15
  __int64 v9; // r14
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // roff
  __m128i v13; // xmm0
  __int64 v14; // rcx
  __m128i v15; // xmm4
  __int64 v16; // r13
  __int64 v17; // r12
  __m128i v18; // xmm0
  __int64 v19; // r15
  __m128i v20; // xmm0
  __int64 v21; // rdi
  __m128i v22; // xmm5
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // r15
  __m128i v28; // xmm0
  __m128i v29; // [rsp+0h] [rbp-98h] BYREF
  __int64 v30; // [rsp+10h] [rbp-88h]
  __int64 v31; // [rsp+18h] [rbp-80h]
  __m128i v32; // [rsp+20h] [rbp-78h] BYREF
  __m128i s2; // [rsp+30h] [rbp-68h] BYREF
  __int64 v34; // [rsp+40h] [rbp-58h]
  __m128i v35; // [rsp+48h] [rbp-50h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v30 = a2;
  v31 = a3;
  v32.m128i_i64[0] = a4;
  v36 = __readfsqword(0x28u);
  v4 = (a3 - 1) / 2;
  if ( a2 >= v4 )
  {
    v6 = v30;
    v7 = a1 + 40 * v30;
  }
  else
  {
    for ( i = a2; ; i = v6 )
    {
      v6 = 2 * (i + 1);
      v7 = a1 + 80 * (i + 1);
      if ( memcmp((const void *)v7, (const void *)(v7 - 40), 0x10u) < 0 )
      {
        --v6;
        v7 = a1 + 40 * v6;
      }
      v8 = (__m128i *)(a1 + 40 * i);
      *v8 = _mm_loadu_si128((const __m128i *)v7);
      v9 = *(_QWORD *)(v7 + 16);
      v10 = _mm_loadu_si128((const __m128i *)(v7 + 24));
      *(_QWORD *)(v7 + 16) = 0;
      *(_OWORD *)(v7 + 24) = 0;
      if ( v8[1].m128i_i64[0] )
      {
        v8[1].m128i_i64[1] = 0;
        v29 = v10;
        qfree();
        v10 = _mm_load_si128(&v29);
      }
      v8[1].m128i_i64[0] = v9;
      *(__m128i *)((char *)v8 + 24) = v10;
      if ( v6 >= v4 )
        break;
    }
  }
  if ( (v31 & 1) == 0 && (v31 - 2) / 2 == v6 )
  {
    v24 = v6 + 1;
    v25 = 2 * (v6 + 1);
    v26 = a1 + 8 * (v25 + 8 * v24) - 40;
    *(__m128i *)v7 = _mm_loadu_si128((const __m128i *)v26);
    v27 = *(_QWORD *)(v26 + 16);
    v28 = _mm_loadu_si128((const __m128i *)(v26 + 24));
    *(_QWORD *)(v26 + 16) = 0;
    *(_OWORD *)(v26 + 24) = 0;
    if ( *(_QWORD *)(v7 + 16) )
    {
      *(_QWORD *)(v7 + 24) = 0;
      v29 = v28;
      qfree();
      v28 = _mm_load_si128(&v29);
    }
    v6 = v25 - 1;
    *(_QWORD *)(v7 + 16) = v27;
    *(__m128i *)(v7 + 24) = v28;
    v7 = a1 + 40 * v6;
  }
  v11 = v32.m128i_i64[0];
  v12 = v32.m128i_i64[0];
  v13 = _mm_loadu_si128((const __m128i *)v32.m128i_i64[0]);
  v14 = *(_QWORD *)(v32.m128i_i64[0] + 16);
  *(_QWORD *)(v32.m128i_i64[0] + 16) = 0;
  v15 = _mm_loadu_si128((const __m128i *)(v12 + 24));
  s2 = v13;
  *(_OWORD *)(v11 + 24) = 0;
  v31 = v14;
  v34 = v14;
  v32 = v15;
  v35 = v15;
  v16 = (v6 - 1) / 2;
  if ( v6 > v30 )
  {
    while ( 1 )
    {
      v19 = a1 + 40 * v16;
      v7 = a1 + 40 * v6;
      if ( memcmp((const void *)v19, &s2, 0x10u) >= 0 )
        break;
      *(__m128i *)v7 = _mm_loadu_si128((const __m128i *)v19);
      v17 = *(_QWORD *)(v19 + 16);
      v18 = _mm_loadu_si128((const __m128i *)(v19 + 24));
      *(_QWORD *)(v19 + 16) = 0;
      *(_OWORD *)(v19 + 24) = 0;
      if ( *(_QWORD *)(v7 + 16) )
      {
        *(_QWORD *)(v7 + 24) = 0;
        v29 = v18;
        qfree();
        v18 = _mm_load_si128(&v29);
      }
      *(_QWORD *)(v7 + 16) = v17;
      v6 = v16;
      *(__m128i *)(v7 + 24) = v18;
      if ( v30 >= v16 )
      {
        v7 = a1 + 40 * v16;
        break;
      }
      v16 = (v16 - 1) / 2;
    }
  }
  v20 = _mm_load_si128(&s2);
  v21 = *(_QWORD *)(v7 + 16);
  v34 = 0;
  *(__m128i *)v7 = v20;
  v35 = 0;
  if ( v21 )
  {
    *(_QWORD *)(v7 + 24) = 0;
    qfree();
  }
  v22 = _mm_load_si128(&v32);
  *(_QWORD *)(v7 + 16) = v31;
  *(__m128i *)(v7 + 24) = v22;
  return v36 - __readfsqword(0x28u);
}

