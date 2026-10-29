unsigned __int64 __fastcall sub_1F20C0(_QWORD *a1, int a2, __int64 a3, __int64 a4, char a5, double a6)
{
  __int64 *v8; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 *v12; // rax
  unsigned __int64 v13; // rcx
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int64 v18; // rsi
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  char v26; // al
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 *v30; // rbp
  __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  __m128i v33; // xmm0
  __int64 v34; // rax
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __m128i v41; // [rsp+0h] [rbp-118h] BYREF
  __int64 v42; // [rsp+10h] [rbp-108h]
  __int64 v43[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v44; // [rsp+30h] [rbp-E8h]
  __m128i v45; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+48h] [rbp-D0h]
  __m128i v47; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v48; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+70h] [rbp-A8h]
  char v50; // [rsp+78h] [rbp-A0h]
  __int64 v51[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v52; // [rsp+90h] [rbp-88h]
  __m128i v53; // [rsp+98h] [rbp-80h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-70h]
  __m128i v55; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v56; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-48h]
  char v58; // [rsp+D8h] [rbp-40h]
  unsigned __int64 v59; // [rsp+E8h] [rbp-30h]

  v8 = (__int64 *)a1[7];
  v59 = __readfsqword(0x28u);
  v10 = a1[8];
  LODWORD(v42) = a2;
  BYTE4(v42) = a5;
  v11 = (__int64)&v8[12 * v10];
  if ( (__int64 *)v11 != v8 )
  {
    v12 = v8;
    do
    {
      if ( a3 == v12[8] && a4 == v12[9] && ((v42 ^ v12[10]) & 0xFFFFFFFFFFLL) == 0 )
      {
        if ( !under_debugger )
          sub_383060(0xCEC5u, a6);
        BUG();
      }
      v12 += 12;
    }
    while ( v12 != (__int64 *)v11 );
  }
  v41.m128i_i64[1] = a4;
  v41.m128i_i64[0] = a3;
  v13 = a1[9];
  v45 = 0;
  v47 = 0;
  v14 = _mm_load_si128(&v41);
  v43[0] = 0;
  v43[1] = 0;
  v44 = 0;
  v46 = 0;
  v49 = v42;
  v50 = 0;
  v48 = v14;
  if ( v43 < v8 || v43 >= &v8[12 * v13] )
  {
    v32 = v10 + 1;
    if ( v13 < v32 )
    {
      v38 = qvector_reserve((__int64)(a1 + 7), (__int64)v8, v32, 96);
      v39 = a1[8];
      a1[7] = v38;
      v11 = v38 + 96 * v39;
    }
    sub_64000((__int64 *)v11, (__int64)v43, *(double *)v14.m128i_i64);
    v33 = _mm_loadu_si128(&v45);
    v34 = v44;
    v44 = 0;
    *(__m128i *)(v11 + 24) = v33;
    *(_QWORD *)(v11 + 16) = v34;
    v45 = 0;
    v35 = _mm_load_si128(&v47);
    *(_QWORD *)(v11 + 40) = v46;
    *(__m128i *)(v11 + 48) = v35;
    v36 = _mm_load_si128(&v48);
    *(_QWORD *)(v11 + 80) = v49;
    LOBYTE(v34) = v50;
    *(__m128i *)(v11 + 64) = v36;
    *(_BYTE *)(v11 + 88) = v34;
    ++a1[8];
  }
  else
  {
    sub_64000(v51, (__int64)v43, *(double *)v14.m128i_i64);
    v15 = v44;
    v16 = _mm_loadu_si128(&v45);
    v44 = 0;
    v17 = _mm_load_si128(&v47);
    v18 = a1[7];
    v52 = v15;
    v53 = v16;
    v54 = v46;
    v45 = 0;
    v57 = v49;
    v47 = 0;
    v19 = _mm_load_si128(&v48);
    v58 = v50;
    v20 = a1[8];
    v46 = 0;
    v55 = v17;
    v56 = v19;
    if ( a1[9] < (unsigned __int64)(v20 + 1) )
    {
      v40 = qvector_reserve((__int64)(a1 + 7), v18, v20 + 1, 96);
      a1[7] = v40;
      v18 = v40;
      v20 = a1[8];
    }
    v21 = v18 + 96 * v20;
    sub_64000((__int64 *)v21, (__int64)v51, *(double *)v19.m128i_i64);
    v22 = v51[0];
    v23 = _mm_loadu_si128(&v53);
    *(_QWORD *)(v21 + 16) = v52;
    *(__m128i *)(v21 + 24) = v23;
    v24 = _mm_load_si128(&v55);
    *(_QWORD *)(v21 + 40) = v54;
    *(__m128i *)(v21 + 48) = v24;
    v25 = _mm_load_si128(&v56);
    *(_QWORD *)(v21 + 80) = v57;
    v26 = v58;
    *(__m128i *)(v21 + 64) = v25;
    *(_BYTE *)(v21 + 88) = v26;
    qfree(v22);
    v27 = v46;
    ++a1[8];
    if ( v27 )
    {
      v28 = v47.m128i_i64[0];
      if ( v47.m128i_i64[0] )
      {
        v29 = 0;
        do
        {
          v30 = (__int64 *)(v27 + 40 * v29);
          v31 = v30[2];
          if ( v31 )
          {
            v30[3] = 0;
            qfree(v31);
          }
          ++v29;
          qfree(*v30);
          v27 = v46;
        }
        while ( v28 != v29 );
      }
      v47.m128i_i64[0] = 0;
      qfree(v27);
    }
  }
  if ( v44 )
  {
    v45.m128i_i64[0] = 0;
    qfree(v44);
  }
  qfree(v43[0]);
  return v59 - __readfsqword(0x28u);
}

