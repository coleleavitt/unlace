unsigned __int64 __fastcall sub_365310(const __m128i *a1, __m128i *a2)
{
  __int64 v2; // r12
  __m128i v4; // xmm1
  __int64 v5; // r14
  __m128i v6; // xmm0
  __m128i v7; // xmm2
  __int64 v8; // rax
  __int32 v9; // edx
  __int32 v10; // r13d
  __int32 v11; // ebp
  __m128i v12; // xmm0
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rdi
  __m128i v16; // xmm0
  __m128i v17; // xmm3
  __m128i v18; // xmm4
  __int32 v19; // edx
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 k; // rbx
  __int64 *v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rbp
  __int64 m; // rbx
  __int64 *v31; // rdx
  __int64 v32; // rdi
  _QWORD *v34; // r15
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 i; // rdx
  __int64 *v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // r8
  __int64 j; // rcx
  __int64 *v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // [rsp+8h] [rbp-F0h]
  __m128i v47; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v48; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v49; // [rsp+30h] [rbp-C8h]
  __int64 v50; // [rsp+38h] [rbp-C0h]
  __int64 v51; // [rsp+40h] [rbp-B8h]
  __int64 v52; // [rsp+48h] [rbp-B0h]
  __m128i v53; // [rsp+50h] [rbp-A8h]
  __m128i v54; // [rsp+60h] [rbp-98h]
  __m128i v55; // [rsp+70h] [rbp-88h] BYREF
  __m128i v56; // [rsp+80h] [rbp-78h] BYREF
  __m128i v57; // [rsp+90h] [rbp-68h] BYREF
  __int32 v58; // [rsp+A0h] [rbp-58h]
  __int32 v59; // [rsp+A4h] [rbp-54h]
  __int64 v60; // [rsp+A8h] [rbp-50h]
  __int32 v61; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v62; // [rsp+B8h] [rbp-40h]

  v2 = a1->m128i_i64[0];
  v62 = __readfsqword(0x28u);
  v51 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 104);
  v4 = _mm_loadu_si128(a1 + 1);
  v5 = a1->m128i_i64[1];
  a1[1] = 0;
  v6 = _mm_loadu_si128(a1 + 3);
  v7 = _mm_loadu_si128(a1 + 2);
  v8 = a1[6].m128i_i64[1];
  v9 = a1[6].m128i_i32[0];
  a1->m128i_i64[1] = 0;
  v55 = v6;
  v10 = a1[6].m128i_i32[1];
  v11 = a1[7].m128i_i32[0];
  v52 = v5;
  v56 = _mm_loadu_si128(a1 + 4);
  v12 = _mm_loadu_si128(a1 + 5);
  v58 = v9;
  v59 = v10;
  v46 = v8;
  v60 = v8;
  v61 = v11;
  v47 = v4;
  v48 = v7;
  v53 = v4;
  v54 = v7;
  v57 = v12;
  sub_35E540((__int64)a1, a2, *(double *)v12.m128i_i64);
  v13 = a2->m128i_i64[0];
  if ( a2->m128i_i64[0] )
  {
    v14 = (*(_DWORD *)(v13 + 104))-- == 1;
    if ( v14 )
    {
      v34 = (_QWORD *)a2->m128i_i64[0];
      if ( a2->m128i_i64[0] )
      {
        sub_258970((__int64 *)a2->m128i_i64[0]);
        v35 = v34[23];
        if ( v35 )
        {
          v36 = v34[24];
          if ( v36 )
          {
            for ( i = 0; i != v36; ++i )
            {
              v38 = (__int64 *)(v35 + 24 * i);
              v39 = *v38;
              if ( *v38 )
              {
                v38[1] = 0;
                v50 = v36;
                v49 = i;
                qfree(v39);
                v36 = v50;
                i = v49;
                v35 = v34[23];
              }
            }
          }
          v34[24] = 0;
          qfree(v35);
        }
        v40 = v34[20];
        if ( v40 )
        {
          v34[21] = 0;
          qfree(v40);
        }
        v41 = v34[16];
        if ( v41 )
        {
          v42 = v34[17];
          if ( v42 )
          {
            for ( j = 0; j != v42; ++j )
            {
              v44 = (__int64 *)(v41 + 32 * j);
              v45 = *v44;
              if ( *v44 )
              {
                v44[1] = 0;
                v50 = j;
                v49 = v42;
                qfree(v45);
                j = v50;
                v42 = v49;
                v41 = v34[16];
              }
            }
          }
          v34[17] = 0;
          qfree(v41);
        }
        sub_255050((__int64)(v34 + 2), *(double *)v12.m128i_i64);
        j__qfree((__int64)v34);
      }
    }
  }
  a2->m128i_i64[0] = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 104);
  v15 = a2->m128i_i64[1];
  v52 = 0;
  v53 = 0;
  if ( v15 )
  {
    a2[1].m128i_i64[0] = 0;
    qfree(v15);
  }
  v16 = _mm_load_si128(&v55);
  v17 = _mm_load_si128(&v47);
  a2->m128i_i64[1] = v5;
  v18 = _mm_load_si128(&v48);
  v19 = v58;
  a2[6].m128i_i32[1] = v10;
  a2[3] = v16;
  v20 = _mm_load_si128(&v56);
  a2[6].m128i_i32[0] = v19;
  a2[4] = v20;
  v21 = _mm_load_si128(&v57);
  a2[6].m128i_i64[1] = v46;
  a2[7].m128i_i32[0] = v11;
  a2[1] = v17;
  a2[2] = v18;
  a2[5] = v21;
  if ( v2 )
  {
    v14 = (*(_DWORD *)(v2 + 104))-- == 1;
    if ( v14 )
    {
      sub_258970((__int64 *)v2);
      v22 = *(_QWORD *)(v2 + 184);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v2 + 192);
        if ( v23 )
        {
          for ( k = 0; k != v23; ++k )
          {
            v25 = (__int64 *)(v22 + 24 * k);
            v26 = *v25;
            if ( *v25 )
            {
              v25[1] = 0;
              qfree(v26);
              v22 = *(_QWORD *)(v2 + 184);
            }
          }
        }
        *(_QWORD *)(v2 + 192) = 0;
        qfree(v22);
      }
      v27 = *(_QWORD *)(v2 + 160);
      if ( v27 )
      {
        *(_QWORD *)(v2 + 168) = 0;
        qfree(v27);
      }
      v28 = *(_QWORD *)(v2 + 128);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v2 + 136);
        if ( v29 )
        {
          for ( m = 0; m != v29; ++m )
          {
            v31 = (__int64 *)(v28 + 32 * m);
            v32 = *v31;
            if ( *v31 )
            {
              v31[1] = 0;
              qfree(v32);
              v28 = *(_QWORD *)(v2 + 128);
            }
          }
        }
        *(_QWORD *)(v2 + 136) = 0;
        qfree(v28);
      }
      sub_255050(v2 + 16, *(double *)v21.m128i_i64);
      j__qfree(v2);
    }
  }
  return v62 - __readfsqword(0x28u);
}

