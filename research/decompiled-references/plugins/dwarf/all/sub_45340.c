__int64 __fastcall sub_45340(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__int64, __int64, __int64))
{
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // r12
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // r12
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r14
  __int64 v39; // rbp
  __int64 v40; // r15
  __int64 v41; // rbx
  __int64 v42; // r12
  __m128i v43; // xmm0
  __int64 v44; // rdi
  __int64 v45; // r12
  __m128i v46; // xmm0
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rbp
  int v51; // r15d
  __int64 v52; // rbx
  __int64 v53; // r14
  __int64 v54; // r12
  __m128i v55; // xmm0
  __int64 v56; // rdi
  __int64 v57; // r12
  __m128i v58; // xmm0
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rbp
  unsigned __int64 v64; // r15
  __int64 v65; // rbx
  unsigned __int64 v66; // r14
  __int64 v67; // r12
  __m128i v68; // xmm0
  __int64 v69; // rdi
  __int64 v70; // r12
  __m128i v71; // xmm0
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rdi
  unsigned __int64 v75; // rcx
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  __int64 v78; // rbp
  __int64 v79; // rbx
  __int64 v80; // r15
  unsigned __int64 v81; // r14
  __int64 v82; // r12
  __m128i v83; // xmm0
  __int64 v84; // rdi
  __int64 v85; // r12
  __m128i v86; // xmm0
  __int64 v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // rbp
  int v91; // r15d
  __int64 v92; // rbx
  __int64 v93; // r14
  __int64 v94; // r12
  __m128i v95; // xmm0
  __int64 v96; // rdi
  __int64 v97; // r12
  __m128i v98; // xmm0
  __int64 v99; // rdi
  __int64 v100; // rsi
  __int64 v101; // rdi
  __int64 v102; // r15
  __int64 v103; // rax
  __int64 v104; // [rsp+0h] [rbp-A8h]
  __int64 v105; // [rsp+8h] [rbp-A0h]
  __int64 v106; // [rsp+10h] [rbp-98h]
  __m128i v108; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int8 (__fastcall *v109)(__int64, __int64); // [rsp+30h] [rbp-78h]
  __int64 v110; // [rsp+38h] [rbp-70h]
  __int64 v111; // [rsp+40h] [rbp-68h]
  __int64 v112; // [rsp+48h] [rbp-60h]
  __int64 v113; // [rsp+50h] [rbp-58h]
  __int64 v114; // [rsp+58h] [rbp-50h]
  __int64 v115; // [rsp+60h] [rbp-48h]
  __int64 v116; // [rsp+68h] [rbp-40h]

  v8 = a5;
  v9 = a4;
  v10 = a4;
  if ( a5 <= a4 )
    v10 = a5;
  v105 = a1;
  v110 = a3;
  if ( a7 >= v10 )
    return sub_3FE50(a1, a2, v110, a4, a5, a6, a8);
  v109 = (unsigned __int8 (__fastcall *)(__int64, __int64))a8;
  v11 = a2;
  v12 = a7;
  if ( a4 <= a5 )
    goto LABEL_13;
LABEL_5:
  v108.m128i_i64[0] = v11;
  v111 = v9 / 2;
  v106 = 144 * (v9 / 2) + v105;
  v13 = sub_45220(v11, v110, v106, v109);
  v14 = v108.m128i_i64[0];
  v15 = v111;
  v104 = v13;
  v9 -= v111;
  v16 = 0x8E38E38E38E38E39LL * ((v13 - v108.m128i_i64[0]) >> 4);
  if ( v9 <= v16 )
    goto LABEL_14;
LABEL_6:
  if ( v16 <= v12 )
  {
    if ( !v16 )
      goto LABEL_8;
    if ( v104 - v14 <= 0 )
    {
      v76 = 0;
      v111 = 0;
      v77 = 0x8E38E38E38E38E39LL * ((v14 - v106) >> 4);
      if ( v14 - v106 <= 0 )
        goto LABEL_8;
    }
    else
    {
      v111 = v15;
      v112 = v14;
      v114 = v8;
      v113 = v9;
      v63 = v14 + 64;
      v64 = 0x8E38E38E38E38E39LL * ((v104 - v14) >> 4);
      v115 = v12;
      v65 = a6 + 64;
      v66 = v64;
      do
      {
        *(_QWORD *)(v65 - 64) = *(_QWORD *)(v63 - 64);
        *(_QWORD *)(v65 - 56) = *(_QWORD *)(v63 - 56);
        v67 = *(_QWORD *)(v63 - 48);
        v68 = _mm_loadu_si128((const __m128i *)(v63 - 40));
        *(_QWORD *)(v63 - 48) = 0;
        *(_OWORD *)(v63 - 40) = 0;
        v69 = *(_QWORD *)(v65 - 48);
        if ( v69 )
        {
          *(_QWORD *)(v65 - 40) = 0;
          v108 = v68;
          qfree(v69);
          v68 = _mm_load_si128(&v108);
        }
        *(_QWORD *)(v65 - 48) = v67;
        *(__m128i *)(v65 - 40) = v68;
        v70 = *(_QWORD *)(v63 - 24);
        v71 = _mm_loadu_si128((const __m128i *)(v63 - 16));
        *(_QWORD *)(v63 - 24) = 0;
        *(_OWORD *)(v63 - 16) = 0;
        v72 = *(_QWORD *)(v65 - 24);
        if ( v72 )
        {
          *(_QWORD *)(v65 - 16) = 0;
          v108 = v71;
          qfree(v72);
          v71 = _mm_load_si128(&v108);
        }
        *(_QWORD *)(v65 - 24) = v70;
        v73 = v63;
        v74 = v65;
        v63 += 144;
        *(__m128i *)(v65 - 16) = v71;
        v65 += 144;
        copy_tinfo_t(v74, v73);
        *(__m128i *)(v65 - 136) = _mm_loadu_si128((const __m128i *)(v63 - 136));
        *(__m128i *)(v65 - 120) = _mm_loadu_si128((const __m128i *)(v63 - 120));
        *(__m128i *)(v65 - 104) = _mm_loadu_si128((const __m128i *)(v63 - 104));
        *(_DWORD *)(v65 - 88) = *(_DWORD *)(v63 - 88);
        *(_DWORD *)(v65 - 80) = *(_DWORD *)(v63 - 80);
        *(_DWORD *)(v65 - 76) = *(_DWORD *)(v63 - 76);
        *(_BYTE *)(v65 - 72) = *(_BYTE *)(v63 - 72);
        --v66;
      }
      while ( v66 );
      v75 = v64 - 1;
      v14 = v112;
      v15 = v111;
      v9 = v113;
      if ( (__int64)(v64 - 1) < 0 )
        v75 = 0;
      v8 = v114;
      v12 = v115;
      v76 = 144 * v75 + 144;
      v111 = 0x8E38E38E38E38E39LL * (v76 >> 4);
      v77 = 0x8E38E38E38E38E39LL * ((v112 - v106) >> 4);
      if ( v112 - v106 <= 0 )
      {
LABEL_63:
        if ( v76 > 0 )
        {
          v113 = v8;
          v112 = v9;
          v90 = a6 + 64;
          v91 = v15;
          v114 = v12;
          v92 = v106 + 64;
          v93 = v111;
          do
          {
            *(_QWORD *)(v92 - 64) = *(_QWORD *)(v90 - 64);
            *(_QWORD *)(v92 - 56) = *(_QWORD *)(v90 - 56);
            v94 = *(_QWORD *)(v90 - 48);
            v95 = _mm_loadu_si128((const __m128i *)(v90 - 40));
            *(_QWORD *)(v90 - 48) = 0;
            *(_OWORD *)(v90 - 40) = 0;
            v96 = *(_QWORD *)(v92 - 48);
            if ( v96 )
            {
              *(_QWORD *)(v92 - 40) = 0;
              v108 = v95;
              qfree(v96);
              v95 = _mm_load_si128(&v108);
            }
            *(_QWORD *)(v92 - 48) = v94;
            *(__m128i *)(v92 - 40) = v95;
            v97 = *(_QWORD *)(v90 - 24);
            v98 = _mm_loadu_si128((const __m128i *)(v90 - 16));
            *(_QWORD *)(v90 - 24) = 0;
            *(_OWORD *)(v90 - 16) = 0;
            v99 = *(_QWORD *)(v92 - 24);
            if ( v99 )
            {
              *(_QWORD *)(v92 - 16) = 0;
              v108 = v98;
              qfree(v99);
              v98 = _mm_load_si128(&v108);
            }
            *(_QWORD *)(v92 - 24) = v97;
            v100 = v90;
            v101 = v92;
            v90 += 144;
            *(__m128i *)(v92 - 16) = v98;
            v92 += 144;
            copy_tinfo_t(v101, v100);
            *(__m128i *)(v92 - 136) = _mm_loadu_si128((const __m128i *)(v90 - 136));
            *(__m128i *)(v92 - 120) = _mm_loadu_si128((const __m128i *)(v90 - 120));
            *(__m128i *)(v92 - 104) = _mm_loadu_si128((const __m128i *)(v90 - 104));
            *(_DWORD *)(v92 - 88) = *(_DWORD *)(v90 - 88);
            *(_DWORD *)(v92 - 80) = *(_DWORD *)(v90 - 80);
            *(_DWORD *)(v92 - 76) = *(_DWORD *)(v90 - 76);
            *(_BYTE *)(v92 - 72) = *(_BYTE *)(v90 - 72);
            --v93;
          }
          while ( v93 );
          LODWORD(v15) = v91;
          v9 = v112;
          v8 = v113;
          v102 = v111 - 1;
          v12 = v114;
          if ( v111 - 1 < 0 )
            v102 = 0;
          v17 = v106 + 144 * v102 + 144;
          goto LABEL_9;
        }
LABEL_8:
        v17 = v106;
        goto LABEL_9;
      }
    }
    v112 = v15;
    v114 = v8;
    v113 = v9;
    v115 = v12;
    v78 = v104 - 80;
    v79 = v14 - 80;
    v80 = v76;
    v81 = v77;
    do
    {
      *(_QWORD *)(v78 - 64) = *(_QWORD *)(v79 - 64);
      *(_QWORD *)(v78 - 56) = *(_QWORD *)(v79 - 56);
      v82 = *(_QWORD *)(v79 - 48);
      v83 = _mm_loadu_si128((const __m128i *)(v79 - 40));
      *(_QWORD *)(v79 - 48) = 0;
      *(_OWORD *)(v79 - 40) = 0;
      v84 = *(_QWORD *)(v78 - 48);
      if ( v84 )
      {
        *(_QWORD *)(v78 - 40) = 0;
        v108 = v83;
        qfree(v84);
        v83 = _mm_load_si128(&v108);
      }
      *(_QWORD *)(v78 - 48) = v82;
      *(__m128i *)(v78 - 40) = v83;
      v85 = *(_QWORD *)(v79 - 24);
      v86 = _mm_loadu_si128((const __m128i *)(v79 - 16));
      *(_QWORD *)(v79 - 24) = 0;
      *(_OWORD *)(v79 - 16) = 0;
      v87 = *(_QWORD *)(v78 - 24);
      if ( v87 )
      {
        *(_QWORD *)(v78 - 16) = 0;
        v108 = v86;
        qfree(v87);
        v86 = _mm_load_si128(&v108);
      }
      *(_QWORD *)(v78 - 24) = v85;
      v88 = v79;
      v89 = v78;
      v79 -= 144;
      *(__m128i *)(v78 - 16) = v86;
      v78 -= 144;
      copy_tinfo_t(v89, v88);
      *(__m128i *)(v78 + 152) = _mm_loadu_si128((const __m128i *)(v79 + 152));
      *(__m128i *)(v78 + 168) = _mm_loadu_si128((const __m128i *)(v79 + 168));
      *(__m128i *)(v78 + 184) = _mm_loadu_si128((const __m128i *)(v79 + 184));
      *(_DWORD *)(v78 + 200) = *(_DWORD *)(v79 + 200);
      *(_DWORD *)(v78 + 208) = *(_DWORD *)(v79 + 208);
      *(_DWORD *)(v78 + 212) = *(_DWORD *)(v79 + 212);
      *(_BYTE *)(v78 + 216) = *(_BYTE *)(v79 + 216);
      --v81;
    }
    while ( v81 );
    LODWORD(v15) = v112;
    v9 = v113;
    v76 = v80;
    v8 = v114;
    v12 = v115;
    goto LABEL_63;
  }
  while ( 1 )
  {
LABEL_14:
    if ( v9 > v12 )
    {
      v108.m128i_i64[0] = v15;
      v103 = sub_2D3E0(v106, v14, v104);
      LODWORD(v15) = v108.m128i_i32[0];
      v17 = v103;
      goto LABEL_9;
    }
    if ( !v9 )
      goto LABEL_16;
    if ( v14 - v106 <= 0 )
    {
      v37 = 0x8E38E38E38E38E39LL * ((v104 - v14) >> 4);
      if ( v104 - v14 <= 0 )
      {
LABEL_16:
        v17 = v104;
        goto LABEL_9;
      }
      v36 = a6;
      v35 = 0;
      v111 = 0;
      v32 = v106 + 64;
    }
    else
    {
      v111 = v15;
      v21 = 0x8E38E38E38E38E39LL * ((v14 - v106) >> 4);
      v112 = v14;
      v114 = v8;
      v116 = v21;
      v113 = v9;
      v115 = v12;
      v22 = v106 + 64;
      v23 = a6 + 64;
      do
      {
        *(_QWORD *)(v23 - 64) = *(_QWORD *)(v22 - 64);
        *(_QWORD *)(v23 - 56) = *(_QWORD *)(v22 - 56);
        v24 = *(_QWORD *)(v22 - 48);
        v25 = _mm_loadu_si128((const __m128i *)(v22 - 40));
        *(_QWORD *)(v22 - 48) = 0;
        *(_OWORD *)(v22 - 40) = 0;
        v26 = *(_QWORD *)(v23 - 48);
        if ( v26 )
        {
          *(_QWORD *)(v23 - 40) = 0;
          v108 = v25;
          qfree(v26);
          v25 = _mm_load_si128(&v108);
        }
        *(_QWORD *)(v23 - 48) = v24;
        *(__m128i *)(v23 - 40) = v25;
        v27 = *(_QWORD *)(v22 - 24);
        v28 = _mm_loadu_si128((const __m128i *)(v22 - 16));
        *(_QWORD *)(v22 - 24) = 0;
        *(_OWORD *)(v22 - 16) = 0;
        v29 = *(_QWORD *)(v23 - 24);
        if ( v29 )
        {
          *(_QWORD *)(v23 - 16) = 0;
          v108 = v28;
          qfree(v29);
          v28 = _mm_load_si128(&v108);
        }
        *(_QWORD *)(v23 - 24) = v27;
        v30 = v22;
        v31 = v23;
        v22 += 144;
        *(__m128i *)(v23 - 16) = v28;
        v23 += 144;
        copy_tinfo_t(v31, v30);
        *(__m128i *)(v23 - 136) = _mm_loadu_si128((const __m128i *)(v22 - 136));
        *(__m128i *)(v23 - 120) = _mm_loadu_si128((const __m128i *)(v22 - 120));
        *(__m128i *)(v23 - 104) = _mm_loadu_si128((const __m128i *)(v22 - 104));
        *(_DWORD *)(v23 - 88) = *(_DWORD *)(v22 - 88);
        *(_DWORD *)(v23 - 80) = *(_DWORD *)(v22 - 80);
        *(_DWORD *)(v23 - 76) = *(_DWORD *)(v22 - 76);
        *(_BYTE *)(v23 - 72) = *(_BYTE *)(v22 - 72);
        --v21;
      }
      while ( v21 );
      v15 = v111;
      v14 = v112;
      v32 = v106 + 64;
      v33 = v116 - 1;
      v9 = v113;
      v8 = v114;
      if ( v116 - 1 < 0 )
        v33 = 0;
      v12 = v115;
      v34 = 144 * v33;
      v35 = 144 * v33 + 144;
      v36 = a6 + v34 + 144;
      v111 = 0x8E38E38E38E38E39LL * (v35 >> 4);
      v37 = 0x8E38E38E38E38E39LL * ((v104 - v112) >> 4);
      if ( v104 - v112 <= 0 )
        goto LABEL_36;
    }
    v112 = v15;
    v38 = v37;
    v113 = v35;
    v115 = v8;
    v114 = v9;
    v39 = v14 + 64;
    v40 = v36;
    v116 = v12;
    v41 = v32;
    do
    {
      *(_QWORD *)(v41 - 64) = *(_QWORD *)(v39 - 64);
      *(_QWORD *)(v41 - 56) = *(_QWORD *)(v39 - 56);
      v42 = *(_QWORD *)(v39 - 48);
      v43 = _mm_loadu_si128((const __m128i *)(v39 - 40));
      *(_QWORD *)(v39 - 48) = 0;
      *(_OWORD *)(v39 - 40) = 0;
      v44 = *(_QWORD *)(v41 - 48);
      if ( v44 )
      {
        *(_QWORD *)(v41 - 40) = 0;
        v108 = v43;
        qfree(v44);
        v43 = _mm_load_si128(&v108);
      }
      *(_QWORD *)(v41 - 48) = v42;
      *(__m128i *)(v41 - 40) = v43;
      v45 = *(_QWORD *)(v39 - 24);
      v46 = _mm_loadu_si128((const __m128i *)(v39 - 16));
      *(_QWORD *)(v39 - 24) = 0;
      *(_OWORD *)(v39 - 16) = 0;
      v47 = *(_QWORD *)(v41 - 24);
      if ( v47 )
      {
        *(_QWORD *)(v41 - 16) = 0;
        v108 = v46;
        qfree(v47);
        v46 = _mm_load_si128(&v108);
      }
      *(_QWORD *)(v41 - 24) = v45;
      v48 = v39;
      v49 = v41;
      v39 += 144;
      *(__m128i *)(v41 - 16) = v46;
      v41 += 144;
      copy_tinfo_t(v49, v48);
      *(__m128i *)(v41 - 136) = _mm_loadu_si128((const __m128i *)(v39 - 136));
      *(__m128i *)(v41 - 120) = _mm_loadu_si128((const __m128i *)(v39 - 120));
      *(__m128i *)(v41 - 104) = _mm_loadu_si128((const __m128i *)(v39 - 104));
      *(_DWORD *)(v41 - 88) = *(_DWORD *)(v39 - 88);
      *(_DWORD *)(v41 - 80) = *(_DWORD *)(v39 - 80);
      *(_DWORD *)(v41 - 76) = *(_DWORD *)(v39 - 76);
      *(_BYTE *)(v41 - 72) = *(_BYTE *)(v39 - 72);
      --v38;
    }
    while ( v38 );
    LODWORD(v15) = v112;
    v35 = v113;
    v36 = v40;
    v9 = v114;
    v8 = v115;
    v12 = v116;
LABEL_36:
    if ( v35 <= 0 )
      goto LABEL_16;
    v113 = v8;
    v112 = v9;
    v50 = v36 - 80;
    v51 = v15;
    v114 = v12;
    v52 = v104 - 80;
    v53 = v111;
    do
    {
      *(_QWORD *)(v52 - 64) = *(_QWORD *)(v50 - 64);
      *(_QWORD *)(v52 - 56) = *(_QWORD *)(v50 - 56);
      v54 = *(_QWORD *)(v50 - 48);
      v55 = _mm_loadu_si128((const __m128i *)(v50 - 40));
      *(_QWORD *)(v50 - 48) = 0;
      *(_OWORD *)(v50 - 40) = 0;
      v56 = *(_QWORD *)(v52 - 48);
      if ( v56 )
      {
        *(_QWORD *)(v52 - 40) = 0;
        v108 = v55;
        qfree(v56);
        v55 = _mm_load_si128(&v108);
      }
      *(_QWORD *)(v52 - 48) = v54;
      *(__m128i *)(v52 - 40) = v55;
      v57 = *(_QWORD *)(v50 - 24);
      v58 = _mm_loadu_si128((const __m128i *)(v50 - 16));
      *(_QWORD *)(v50 - 24) = 0;
      *(_OWORD *)(v50 - 16) = 0;
      v59 = *(_QWORD *)(v52 - 24);
      if ( v59 )
      {
        *(_QWORD *)(v52 - 16) = 0;
        v108 = v58;
        qfree(v59);
        v58 = _mm_load_si128(&v108);
      }
      *(_QWORD *)(v52 - 24) = v57;
      v60 = v50;
      v61 = v52;
      v50 -= 144;
      *(__m128i *)(v52 - 16) = v58;
      v52 -= 144;
      copy_tinfo_t(v61, v60);
      *(__m128i *)(v52 + 152) = _mm_loadu_si128((const __m128i *)(v50 + 152));
      *(__m128i *)(v52 + 168) = _mm_loadu_si128((const __m128i *)(v50 + 168));
      *(__m128i *)(v52 + 184) = _mm_loadu_si128((const __m128i *)(v50 + 184));
      *(_DWORD *)(v52 + 200) = *(_DWORD *)(v50 + 200);
      *(_DWORD *)(v52 + 208) = *(_DWORD *)(v50 + 208);
      *(_DWORD *)(v52 + 212) = *(_DWORD *)(v50 + 212);
      *(_BYTE *)(v52 + 216) = *(_BYTE *)(v50 + 216);
      --v53;
    }
    while ( v53 );
    LODWORD(v15) = v51;
    v9 = v112;
    v8 = v113;
    v12 = v114;
    v62 = v111 - 1;
    if ( v111 - 1 < 0 )
      v62 = 0;
    v17 = v104 - 144 * v62 - 144;
LABEL_9:
    v8 -= v16;
    sub_45340(v105, v106, v17, v15, v16, a6, v12, (__int64)v109);
    v18 = v8;
    if ( v9 <= v8 )
      v18 = v9;
    if ( v12 >= v18 )
      return sub_3FE50(v17, v104, v110, v9, v8, a6, (unsigned __int8 (__fastcall *)(__int64, __int64, __int64))v109);
    v105 = v17;
    v11 = v104;
    if ( v9 > v8 )
      goto LABEL_5;
LABEL_13:
    v108.m128i_i64[0] = v11;
    v16 = v8 / 2;
    v104 = v11 + 144 * (v8 / 2);
    v19 = sub_452B0(v105, v11, v104, v109);
    v14 = v108.m128i_i64[0];
    v106 = v19;
    v15 = 0x8E38E38E38E38E39LL * ((v19 - v105) >> 4);
    v9 -= v15;
    if ( v9 > v8 / 2 )
      goto LABEL_6;
  }
}
