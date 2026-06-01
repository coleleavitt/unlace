__int64 __fastcall sub_17AD0(
        __int64 *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        int a8)
{
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 *v14; // r11
  __int64 v15; // rbp
  __int64 v16; // r10
  __int64 *v17; // r14
  __int64 v18; // rax
  __int64 v20; // r15
  __int64 v21; // r14
  __int64 *v22; // rbp
  __int64 *v23; // rbx
  __int64 v24; // r12
  __m128i v25; // xmm0
  __int64 v26; // r12
  __m128i v27; // xmm0
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // r15
  __int64 v35; // r14
  __int64 v36; // rbp
  __int64 v37; // r13
  __int64 *v38; // rbx
  __int64 v39; // r12
  __m128i v40; // xmm0
  __int64 v41; // r12
  __m128i v42; // xmm0
  __int64 v43; // r13
  int v44; // r15d
  char *v45; // rbp
  __int64 v46; // r14
  __int64 *v47; // rbx
  __int64 v48; // r12
  __m128i v49; // xmm0
  __int64 v50; // r12
  __m128i v51; // xmm0
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 *v54; // rbp
  __int64 v55; // r15
  __int64 v56; // rbx
  __int64 v57; // r12
  __m128i v58; // xmm0
  __int64 v59; // r12
  __m128i v60; // xmm0
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // r14
  __int64 v64; // rbp
  __int64 v65; // r13
  char *v66; // rbx
  __int64 v67; // r15
  __int64 v68; // r12
  __m128i v69; // xmm0
  __int64 v70; // r12
  __m128i v71; // xmm0
  __int64 v72; // r15
  __int64 *v73; // r13
  __int64 *v74; // rbp
  __int64 *v75; // rbx
  __int64 v76; // r14
  __int64 v77; // r12
  __m128i v78; // xmm0
  __int64 v79; // r12
  __m128i v80; // xmm0
  __int64 v81; // rax
  __int64 v82; // rax
  char *v83; // [rsp+0h] [rbp-A8h]
  __int64 v84; // [rsp+8h] [rbp-A0h]
  __m128i v85; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v86; // [rsp+30h] [rbp-78h]
  __int64 v87; // [rsp+38h] [rbp-70h]
  __int64 v88; // [rsp+40h] [rbp-68h]
  __int64 *v89; // [rsp+48h] [rbp-60h]
  __int64 *v90; // [rsp+50h] [rbp-58h]
  __int64 v91; // [rsp+58h] [rbp-50h]
  __int64 v92; // [rsp+60h] [rbp-48h]
  __int64 v93; // [rsp+68h] [rbp-40h]

  v8 = a5;
  v9 = a5;
  if ( a4 <= a5 )
    v9 = a4;
  if ( a7 >= v9 )
    return sub_16D10(a1, a2, a3, a4, a5, a6, a8);
  v10 = a4;
  v11 = (__int64)a2;
  v12 = (__int64)a1;
  v87 = a3;
  v86 = a6;
  if ( a4 <= a5 )
    goto LABEL_13;
LABEL_5:
  v88 = v10;
  v84 = v10 / 2;
  v85.m128i_i64[0] = v12 + ((v10 / 2) << 6);
  v13 = sub_12CE0(v11, v87, v85.m128i_i64[0], a8);
  v14 = (__int64 *)v85.m128i_i64[0];
  v83 = (char *)v13;
  v15 = (v13 - v11) >> 6;
  v16 = v88 - v84;
  if ( v88 - v84 <= v15 )
    goto LABEL_14;
LABEL_6:
  if ( v15 <= a7 )
  {
    if ( !v15 )
      goto LABEL_8;
    if ( (__int64)&v83[-v11] <= 0 )
    {
      v88 = 0;
      v62 = 0;
      v63 = (v11 - (__int64)v14) >> 6;
      if ( v11 - (__int64)v14 <= 0 )
        goto LABEL_8;
    }
    else
    {
      v89 = v14;
      v53 = (__int64)&v83[-v11] >> 6;
      v91 = v16;
      v92 = v8;
      v88 = v15;
      v54 = v86;
      v55 = v53;
      v90 = (__int64 *)v12;
      v56 = v11;
      do
      {
        v57 = *(_QWORD *)v56;
        v58 = _mm_loadu_si128((const __m128i *)(v56 + 8));
        *(_QWORD *)v56 = 0;
        *(_OWORD *)(v56 + 8) = 0;
        if ( *v54 )
        {
          v54[1] = 0;
          v85 = v58;
          qfree();
          v58 = _mm_load_si128(&v85);
        }
        *v54 = v57;
        *(__m128i *)(v54 + 1) = v58;
        v59 = *(_QWORD *)(v56 + 24);
        v60 = _mm_loadu_si128((const __m128i *)(v56 + 32));
        *(_QWORD *)(v56 + 24) = 0;
        *(_OWORD *)(v56 + 32) = 0;
        if ( v54[3] )
        {
          v54[4] = 0;
          v85 = v60;
          qfree();
          v60 = _mm_load_si128(&v85);
        }
        v54[3] = v59;
        v56 += 64;
        v54 += 8;
        *((__m128i *)v54 - 2) = v60;
        *((_DWORD *)v54 - 4) = *(_DWORD *)(v56 - 16);
        *((_DWORD *)v54 - 3) = *(_DWORD *)(v56 - 12);
        *((_BYTE *)v54 - 8) = *(_BYTE *)(v56 - 8);
        --v53;
      }
      while ( v53 );
      v61 = v55 - 1;
      v14 = v89;
      v15 = v88;
      v12 = (__int64)v90;
      v16 = v91;
      if ( v55 - 1 < 0 )
        v61 = 0;
      v8 = v92;
      v62 = (v61 << 6) + 64;
      v88 = v62 >> 6;
      v63 = (v11 - (__int64)v89) >> 6;
      if ( v11 - (__int64)v89 <= 0 )
      {
LABEL_63:
        v72 = v88;
        v73 = v14;
        if ( v62 > 0 )
        {
          v91 = v8;
          v89 = (__int64 *)v15;
          v74 = v14;
          v90 = (__int64 *)v12;
          v75 = v86;
          v76 = v16;
          do
          {
            v77 = *v75;
            v78 = _mm_loadu_si128((const __m128i *)(v75 + 1));
            *v75 = 0;
            *(_OWORD *)(v75 + 1) = 0;
            if ( *v74 )
            {
              v74[1] = 0;
              v85 = v78;
              qfree();
              v78 = _mm_load_si128(&v85);
            }
            *v74 = v77;
            *(__m128i *)(v74 + 1) = v78;
            v79 = v75[3];
            v80 = _mm_loadu_si128((const __m128i *)v75 + 2);
            v75[3] = 0;
            *((_OWORD *)v75 + 2) = 0;
            if ( v74[3] )
            {
              v74[4] = 0;
              v85 = v80;
              qfree();
              v80 = _mm_load_si128(&v85);
            }
            v74[3] = v79;
            v75 += 8;
            v74 += 8;
            *((__m128i *)v74 - 2) = v80;
            *((_DWORD *)v74 - 4) = *((_DWORD *)v75 - 4);
            *((_DWORD *)v74 - 3) = *((_DWORD *)v75 - 3);
            *((_BYTE *)v74 - 8) = *((_BYTE *)v75 - 8);
            --v72;
          }
          while ( v72 );
          v16 = v76;
          LODWORD(v14) = (_DWORD)v73;
          v15 = (__int64)v89;
          LODWORD(v12) = (_DWORD)v90;
          v81 = v88 - 1;
          v8 = v91;
          if ( v88 - 1 < 0 )
            v81 = 0;
          v17 = &v73[8 * v81 + 8];
          goto LABEL_9;
        }
LABEL_8:
        v17 = v14;
        goto LABEL_9;
      }
    }
    v90 = v14;
    v92 = v8;
    v89 = (__int64 *)v15;
    v64 = v11;
    v65 = v62;
    v91 = v12;
    v66 = v83;
    v67 = v16;
    do
    {
      v66 -= 64;
      v68 = *(_QWORD *)(v64 - 64);
      v64 -= 64;
      *(_QWORD *)v64 = 0;
      v69 = _mm_loadu_si128((const __m128i *)(v64 + 8));
      *(_OWORD *)(v64 + 8) = 0;
      if ( *(_QWORD *)v66 )
      {
        *((_QWORD *)v66 + 1) = 0;
        v85 = v69;
        qfree();
        v69 = _mm_load_si128(&v85);
      }
      *(_QWORD *)v66 = v68;
      *(__m128i *)(v66 + 8) = v69;
      v70 = *(_QWORD *)(v64 + 24);
      v71 = _mm_loadu_si128((const __m128i *)(v64 + 32));
      *(_QWORD *)(v64 + 24) = 0;
      *(_OWORD *)(v64 + 32) = 0;
      if ( *((_QWORD *)v66 + 3) )
      {
        *((_QWORD *)v66 + 4) = 0;
        v85 = v71;
        qfree();
        v71 = _mm_load_si128(&v85);
      }
      *((_QWORD *)v66 + 3) = v70;
      *((__m128i *)v66 + 2) = v71;
      *((_DWORD *)v66 + 12) = *(_DWORD *)(v64 + 48);
      *((_DWORD *)v66 + 13) = *(_DWORD *)(v64 + 52);
      v66[56] = *(_BYTE *)(v64 + 56);
      --v63;
    }
    while ( v63 );
    v15 = (__int64)v89;
    v14 = v90;
    v62 = v65;
    v16 = v67;
    v12 = v91;
    v8 = v92;
    goto LABEL_63;
  }
  while ( 1 )
  {
LABEL_14:
    if ( v16 > a7 )
    {
      v88 = v16;
      v85.m128i_i64[0] = (__int64)v14;
      v82 = sub_15790(v14, v11, (__int64)v83);
      v16 = v88;
      LODWORD(v14) = v85.m128i_i32[0];
      v17 = (__int64 *)v82;
      goto LABEL_9;
    }
    if ( !v16 )
      goto LABEL_16;
    if ( v11 - (__int64)v14 <= 0 )
    {
      v88 = 0;
      v32 = 0;
      v33 = (__int64)&v83[-v11] >> 6;
      v31 = v86;
      if ( (__int64)&v83[-v11] <= 0 )
      {
LABEL_16:
        v17 = (__int64 *)v83;
        goto LABEL_9;
      }
    }
    else
    {
      v89 = v14;
      v20 = (v11 - (__int64)v14) >> 6;
      v21 = v20;
      v91 = v16;
      v92 = v8;
      v88 = v15;
      v22 = v86;
      v90 = (__int64 *)v12;
      v23 = v14;
      do
      {
        v24 = *v23;
        v25 = _mm_loadu_si128((const __m128i *)(v23 + 1));
        *v23 = 0;
        *(_OWORD *)(v23 + 1) = 0;
        if ( *v22 )
        {
          v22[1] = 0;
          v85 = v25;
          qfree();
          v25 = _mm_load_si128(&v85);
        }
        *v22 = v24;
        *(__m128i *)(v22 + 1) = v25;
        v26 = v23[3];
        v27 = _mm_loadu_si128((const __m128i *)v23 + 2);
        v23[3] = 0;
        *((_OWORD *)v23 + 2) = 0;
        if ( v22[3] )
        {
          v22[4] = 0;
          v85 = v27;
          qfree();
          v27 = _mm_load_si128(&v85);
        }
        v22[3] = v26;
        v23 += 8;
        v22 += 8;
        *((__m128i *)v22 - 2) = v27;
        *((_DWORD *)v22 - 4) = *((_DWORD *)v23 - 4);
        *((_DWORD *)v22 - 3) = *((_DWORD *)v23 - 3);
        *((_BYTE *)v22 - 8) = *((_BYTE *)v23 - 8);
        --v20;
      }
      while ( v20 );
      v28 = v21 - 1;
      v29 = 0;
      if ( v28 >= 0 )
        v29 = v28;
      v15 = v88;
      v14 = v89;
      v12 = (__int64)v90;
      v16 = v91;
      v30 = v29 << 6;
      v8 = v92;
      v31 = (__int64 *)((char *)v86 + v30 + 64);
      v32 = v30 + 64;
      v88 = v32 >> 6;
      v33 = (__int64)&v83[-v11] >> 6;
      if ( (__int64)&v83[-v11] <= 0 )
        goto LABEL_36;
    }
    v90 = v31;
    v34 = v33;
    v35 = v16;
    v91 = (__int64)v14;
    v93 = v8;
    v89 = (__int64 *)v15;
    v36 = v11;
    v37 = v32;
    v92 = v12;
    v38 = v14;
    do
    {
      v39 = *(_QWORD *)v36;
      v40 = _mm_loadu_si128((const __m128i *)(v36 + 8));
      *(_QWORD *)v36 = 0;
      *(_OWORD *)(v36 + 8) = 0;
      if ( *v38 )
      {
        v38[1] = 0;
        v85 = v40;
        qfree();
        v40 = _mm_load_si128(&v85);
      }
      *v38 = v39;
      *(__m128i *)(v38 + 1) = v40;
      v41 = *(_QWORD *)(v36 + 24);
      v42 = _mm_loadu_si128((const __m128i *)(v36 + 32));
      *(_QWORD *)(v36 + 24) = 0;
      *(_OWORD *)(v36 + 32) = 0;
      if ( v38[3] )
      {
        v38[4] = 0;
        v85 = v42;
        qfree();
        v42 = _mm_load_si128(&v85);
      }
      v38[3] = v41;
      v36 += 64;
      v38 += 8;
      *((__m128i *)v38 - 2) = v42;
      *((_DWORD *)v38 - 4) = *(_DWORD *)(v36 - 16);
      *((_DWORD *)v38 - 3) = *(_DWORD *)(v36 - 12);
      *((_BYTE *)v38 - 8) = *(_BYTE *)(v36 - 8);
      --v34;
    }
    while ( v34 );
    v15 = (__int64)v89;
    v31 = v90;
    v32 = v37;
    v16 = v35;
    LODWORD(v14) = v91;
    v12 = v92;
    v8 = v93;
LABEL_36:
    v43 = v88;
    if ( v32 <= 0 )
      goto LABEL_16;
    v91 = v8;
    v44 = (int)v14;
    v89 = (__int64 *)v15;
    v45 = v83;
    v46 = v16;
    v90 = (__int64 *)v12;
    v47 = v31;
    do
    {
      v45 -= 64;
      v48 = *(v47 - 8);
      v47 -= 8;
      *v47 = 0;
      v49 = _mm_loadu_si128((const __m128i *)(v47 + 1));
      *(_OWORD *)(v47 + 1) = 0;
      if ( *(_QWORD *)v45 )
      {
        *((_QWORD *)v45 + 1) = 0;
        v85 = v49;
        qfree();
        v49 = _mm_load_si128(&v85);
      }
      *(_QWORD *)v45 = v48;
      *(__m128i *)(v45 + 8) = v49;
      v50 = v47[3];
      v51 = _mm_loadu_si128((const __m128i *)v47 + 2);
      v47[3] = 0;
      *((_OWORD *)v47 + 2) = 0;
      if ( *((_QWORD *)v45 + 3) )
      {
        *((_QWORD *)v45 + 4) = 0;
        v85 = v51;
        qfree();
        v51 = _mm_load_si128(&v85);
      }
      *((_QWORD *)v45 + 3) = v50;
      *((__m128i *)v45 + 2) = v51;
      *((_DWORD *)v45 + 12) = *((_DWORD *)v47 + 12);
      *((_DWORD *)v45 + 13) = *((_DWORD *)v47 + 13);
      v45[56] = *((_BYTE *)v47 + 56);
      --v43;
    }
    while ( v43 );
    v16 = v46;
    LODWORD(v14) = v44;
    v15 = (__int64)v89;
    v52 = v88 - 1;
    LODWORD(v12) = (_DWORD)v90;
    v8 = v91;
    if ( v88 - 1 < 0 )
      v52 = 0;
    v17 = (__int64 *)&v83[-64 * v52 - 64];
LABEL_9:
    v85.m128i_i64[0] = v16;
    v8 -= v15;
    sub_17AD0(v12, (_DWORD)v14, (_DWORD)v17, v84, v15, (_DWORD)v86, a7, a8);
    v10 = v85.m128i_i64[0];
    v18 = v8;
    if ( v85.m128i_i64[0] <= v8 )
      v18 = v85.m128i_i64[0];
    if ( a7 >= v18 )
      return sub_16D10(v17, v83, v87, v85.m128i_i64[0], v8, v86, a8);
    v11 = (__int64)v83;
    v12 = (__int64)v17;
    if ( v85.m128i_i64[0] > v8 )
      goto LABEL_5;
LABEL_13:
    v85.m128i_i64[0] = v10;
    v15 = v8 / 2;
    v83 = (char *)(v11 + ((v8 / 2) << 6));
    v14 = (__int64 *)sub_12C60(v12, v11, (__int64)v83, a8);
    v84 = ((__int64)v14 - v12) >> 6;
    v16 = v85.m128i_i64[0] - v84;
    if ( v85.m128i_i64[0] - v84 > v8 / 2 )
      goto LABEL_6;
  }
}

