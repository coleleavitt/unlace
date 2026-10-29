unsigned __int64 __fastcall sub_360090(const __m128i *a1, __m128i *a2)
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
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rdi
  __m128i v15; // xmm0
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  __int32 v18; // edx
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 k; // rbx
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 m; // rbx
  _QWORD *v28; // rdx
  _QWORD *v30; // r15
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 i; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 j; // rcx
  _QWORD *v38; // rdx
  __int64 v39; // [rsp+8h] [rbp-F0h]
  __m128i v40; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v41; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+30h] [rbp-C8h]
  __int64 v43; // [rsp+38h] [rbp-C0h]
  __int64 v44; // [rsp+40h] [rbp-B8h]
  __int64 v45; // [rsp+48h] [rbp-B0h]
  __m128i v46; // [rsp+50h] [rbp-A8h]
  __m128i v47; // [rsp+60h] [rbp-98h]
  __m128i v48; // [rsp+70h] [rbp-88h] BYREF
  __m128i v49; // [rsp+80h] [rbp-78h] BYREF
  __m128i v50; // [rsp+90h] [rbp-68h] BYREF
  __int32 v51; // [rsp+A0h] [rbp-58h]
  __int32 v52; // [rsp+A4h] [rbp-54h]
  __int64 v53; // [rsp+A8h] [rbp-50h]
  __int32 v54; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v55; // [rsp+B8h] [rbp-40h]

  v2 = a1->m128i_i64[0];
  v55 = __readfsqword(0x28u);
  v44 = v2;
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
  v48 = v6;
  v10 = a1[6].m128i_i32[1];
  v11 = a1[7].m128i_i32[0];
  v45 = v5;
  v49 = _mm_loadu_si128(a1 + 4);
  v51 = v9;
  v52 = v10;
  v39 = v8;
  v53 = v8;
  v54 = v11;
  v40 = v4;
  v41 = v7;
  v46 = v4;
  v47 = v7;
  v50 = _mm_loadu_si128(a1 + 5);
  sub_3592C0((__int64)a1, a2);
  v12 = a2->m128i_i64[0];
  if ( a2->m128i_i64[0] )
  {
    v13 = (*(_DWORD *)(v12 + 104))-- == 1;
    if ( v13 )
    {
      v30 = (_QWORD *)a2->m128i_i64[0];
      if ( a2->m128i_i64[0] )
      {
        sub_253D70((__int64 *)a2->m128i_i64[0]);
        v31 = v30[23];
        if ( v31 )
        {
          v32 = v30[24];
          if ( v32 )
          {
            for ( i = 0; i != v32; ++i )
            {
              v34 = (_QWORD *)(v31 + 24 * i);
              if ( *v34 )
              {
                v34[1] = 0;
                v43 = v32;
                v42 = i;
                qfree();
                v32 = v43;
                i = v42;
                v31 = v30[23];
              }
            }
          }
          v30[24] = 0;
          qfree();
        }
        if ( v30[20] )
        {
          v30[21] = 0;
          qfree();
        }
        v35 = v30[16];
        if ( v35 )
        {
          v36 = v30[17];
          if ( v36 )
          {
            for ( j = 0; j != v36; ++j )
            {
              v38 = (_QWORD *)(v35 + 32 * j);
              if ( *v38 )
              {
                v38[1] = 0;
                v43 = j;
                v42 = v36;
                qfree();
                j = v43;
                v36 = v42;
                v35 = v30[16];
              }
            }
          }
          v30[17] = 0;
          qfree();
        }
        sub_250450((__int64)(v30 + 2));
        j__qfree();
      }
    }
  }
  a2->m128i_i64[0] = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 104);
  v14 = a2->m128i_i64[1];
  v45 = 0;
  v46 = 0;
  if ( v14 )
  {
    a2[1].m128i_i64[0] = 0;
    qfree();
  }
  v15 = _mm_load_si128(&v48);
  v16 = _mm_load_si128(&v40);
  a2->m128i_i64[1] = v5;
  v17 = _mm_load_si128(&v41);
  v18 = v51;
  a2[6].m128i_i32[1] = v10;
  a2[3] = v15;
  v19 = _mm_load_si128(&v49);
  a2[6].m128i_i32[0] = v18;
  a2[4] = v19;
  v20 = _mm_load_si128(&v50);
  a2[6].m128i_i64[1] = v39;
  a2[7].m128i_i32[0] = v11;
  a2[1] = v16;
  a2[2] = v17;
  a2[5] = v20;
  if ( v2 )
  {
    v13 = (*(_DWORD *)(v2 + 104))-- == 1;
    if ( v13 )
    {
      sub_253D70((__int64 *)v2);
      v21 = *(_QWORD *)(v2 + 184);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v2 + 192);
        if ( v22 )
        {
          for ( k = 0; k != v22; ++k )
          {
            v24 = (_QWORD *)(v21 + 24 * k);
            if ( *v24 )
            {
              v24[1] = 0;
              qfree();
              v21 = *(_QWORD *)(v2 + 184);
            }
          }
        }
        *(_QWORD *)(v2 + 192) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v2 + 160) )
      {
        *(_QWORD *)(v2 + 168) = 0;
        qfree();
      }
      v25 = *(_QWORD *)(v2 + 128);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v2 + 136);
        if ( v26 )
        {
          for ( m = 0; m != v26; ++m )
          {
            v28 = (_QWORD *)(v25 + 32 * m);
            if ( *v28 )
            {
              v28[1] = 0;
              qfree();
              v25 = *(_QWORD *)(v2 + 128);
            }
          }
        }
        *(_QWORD *)(v2 + 136) = 0;
        qfree();
      }
      sub_250450(v2 + 16);
      j__qfree();
    }
  }
  return v55 - __readfsqword(0x28u);
}

