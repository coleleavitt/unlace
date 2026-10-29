unsigned __int64 __fastcall sub_36CB0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r12
  __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // r9
  __m128i v12; // xmm3
  __int64 v13; // rdi
  __m128i v14; // xmm2
  __int64 v15; // rcx
  __int64 v16; // r10
  __int16 v17; // dx
  unsigned __int64 v18; // rsi
  __m128i v19; // xmm3
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __int64 v22; // r10
  __m128i v23; // xmm3
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // r14
  __m128i v29; // xmm6
  __m128i v30; // xmm7
  __int64 v31; // r13
  __m128i v32; // xmm5
  __m128i v33; // xmm0
  __int64 v34; // rcx
  __m128i v35; // xmm0
  __int64 v36; // rdi
  __int64 v37; // rcx
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __int64 v40; // rdi
  __m128i v41; // xmm2
  __int64 v42; // rdi
  __int64 v43; // rax
  __m128i v44; // xmm5
  unsigned __int64 v45; // rcx
  __int64 v46; // r12
  __int64 v47; // rbp
  __m128i v48; // xmm7
  __m128i v49; // xmm3
  __m128i v50; // xmm7
  __int64 v51; // r14
  __int16 v52; // r13
  __m128i v53; // xmm0
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rdi
  __int64 v57; // rax
  __m128i v58; // xmm0
  __m128i v59; // xmm3
  __int64 v60; // rax
  __m128i v61; // xmm7
  __m128i v62; // xmm2
  __int64 v63; // rcx
  __int64 v64; // rbp
  __m128i v66; // xmm2
  __int64 v67; // rax
  __m128i v68; // xmm3
  __int64 v69; // r13
  __m128i v70; // xmm1
  __int16 v71; // r14
  __int64 v72; // rax
  __int64 v73; // rcx
  __m128i v74; // xmm2
  __int64 v75; // rdi
  __int64 v76; // rcx
  __m128i v77; // xmm0
  __int64 v78; // rdi
  __m128i v79; // xmm1
  __int64 v80; // rdi
  __int64 v81; // rax
  __m128i v82; // xmm7
  __int64 v83; // rax
  unsigned __int64 v84; // rdi
  __m128i v85; // xmm3
  __int64 v86; // rax
  __m128i v87; // xmm7
  __int64 v88; // r13
  __m128i v89; // xmm1
  __int64 v90; // rbp
  __int16 v91; // r14
  __int64 v92; // rdx
  __m128i v93; // xmm2
  __int64 v94; // rdi
  __int64 v95; // rdx
  __m128i v96; // xmm0
  __int64 v97; // rdi
  __m128i v98; // xmm1
  __int64 v99; // rdi
  __int64 v100; // rax
  __m128i v101; // xmm1
  __int64 v102; // rax
  __m128i v103; // xmm3
  __m128i v104; // xmm7
  __int64 v105; // r13
  __m128i v106; // xmm1
  __int16 v107; // r14
  __int64 v108; // rax
  __int64 v109; // rcx
  __m128i v110; // xmm2
  __int64 v111; // rdi
  __int64 v112; // rcx
  __m128i v113; // xmm0
  __int64 v114; // rdi
  __m128i v115; // xmm1
  __int64 v116; // rdi
  __int64 v117; // rax
  __m128i v118; // xmm1
  __int64 v119; // rax
  __m128i v120; // xmm3
  __int64 v121; // rax
  __m128i v122; // xmm7
  __int64 v123; // r13
  __m128i v124; // xmm1
  __int64 v125; // rdx
  __m128i v126; // xmm2
  __int64 v127; // rdi
  __int64 v128; // rdx
  __m128i v129; // xmm0
  __int64 v130; // rdi
  __m128i v131; // xmm1
  __int64 v132; // rdi
  __m128i v133; // [rsp+0h] [rbp-118h] BYREF
  __m128i v134; // [rsp+10h] [rbp-108h] BYREF
  __m128i v135; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v136; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v137; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v138; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v139; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v140; // [rsp+78h] [rbp-A0h]
  __m128i v141; // [rsp+80h] [rbp-98h] BYREF
  __int64 v142; // [rsp+90h] [rbp-88h]
  __m128i v143; // [rsp+98h] [rbp-80h]
  __int64 v144; // [rsp+A8h] [rbp-70h]
  __m128i v145; // [rsp+B0h] [rbp-68h]
  __int64 v146; // [rsp+C0h] [rbp-58h]
  __int16 v147; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v148; // [rsp+D8h] [rbp-40h]

  v140 = a3;
  v148 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) > 1280 )
  {
    v5 = a2;
    while ( v140 )
    {
      v6 = *(_QWORD *)(a1 + 80);
      --v140;
      v7 = a1 + 80;
      v8 = a1 + 80 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (v3 >> 4)) >> 1);
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)v8 < v6 )
      {
        v10 = *(_QWORD *)(v5 - 80);
        if ( v10 < v6 )
          goto LABEL_80;
LABEL_5:
        if ( v6 == v10 && *(_QWORD *)(a1 + 88) >= *(_QWORD *)(v5 - 72) )
        {
LABEL_80:
          if ( v10 < v9 || v9 == v10 && *(_QWORD *)(v8 + 8) >= *(_QWORD *)(v5 - 72) )
          {
LABEL_45:
            v66 = _mm_loadu_si128((const __m128i *)(a1 + 48));
            v67 = *(_QWORD *)(a1 + 40);
            *(_QWORD *)(a1 + 40) = 0;
            *(_OWORD *)(a1 + 48) = 0;
            v68 = _mm_loadu_si128((const __m128i *)(a1 + 24));
            v69 = *(_QWORD *)(a1 + 16);
            *(_OWORD *)(a1 + 24) = 0;
            v70 = _mm_loadu_si128((const __m128i *)a1);
            v71 = *(_WORD *)(a1 + 72);
            *(_QWORD *)(a1 + 16) = 0;
            v135 = v66;
            v133.m128i_i64[0] = v67;
            v72 = *(_QWORD *)(a1 + 64);
            *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)v8);
            v73 = *(_QWORD *)(v8 + 16);
            v74 = _mm_loadu_si128((const __m128i *)(v8 + 24));
            *(_QWORD *)(v8 + 16) = 0;
            *(_OWORD *)(v8 + 24) = 0;
            v75 = *(_QWORD *)(a1 + 16);
            v134.m128i_i64[0] = v72;
            v136 = v68;
            if ( v75 )
            {
              *(_QWORD *)(a1 + 24) = 0;
              v137.m128i_i64[0] = v73;
              v139 = v70;
              v138 = v74;
              qfree();
              v70 = _mm_load_si128(&v139);
              v74 = _mm_load_si128(&v138);
              v73 = v137.m128i_i64[0];
            }
            *(__m128i *)(a1 + 24) = v74;
            *(_QWORD *)(a1 + 16) = v73;
            v76 = *(_QWORD *)(v8 + 40);
            v77 = _mm_loadu_si128((const __m128i *)(v8 + 48));
            *(_QWORD *)(v8 + 40) = 0;
            *(_OWORD *)(v8 + 48) = 0;
            if ( *(_QWORD *)(a1 + 40) )
            {
              *(_QWORD *)(a1 + 48) = 0;
              v137.m128i_i64[0] = v76;
              v139 = v70;
              v138 = v77;
              qfree();
              v70 = _mm_load_si128(&v139);
              v77 = _mm_load_si128(&v138);
              v76 = v137.m128i_i64[0];
            }
            *(_QWORD *)(a1 + 40) = v76;
            *(__m128i *)(a1 + 48) = v77;
            *(_QWORD *)(a1 + 64) = *(_QWORD *)(v8 + 64);
            *(_BYTE *)(a1 + 72) = *(_BYTE *)(v8 + 72);
            *(_BYTE *)(a1 + 73) = *(_BYTE *)(v8 + 73);
            v78 = *(_QWORD *)(v8 + 16);
            *(__m128i *)v8 = v70;
            if ( v78 )
            {
              *(_QWORD *)(v8 + 24) = 0;
              qfree();
            }
            v79 = _mm_load_si128(&v136);
            v80 = *(_QWORD *)(v8 + 40);
            *(_QWORD *)(v8 + 16) = v69;
            *(__m128i *)(v8 + 24) = v79;
            if ( v80 )
            {
              *(_QWORD *)(v8 + 48) = 0;
              qfree();
            }
            v81 = v133.m128i_i64[0];
            v82 = _mm_load_si128(&v135);
            *(_WORD *)(v8 + 72) = v71;
            *(_QWORD *)(v8 + 40) = v81;
            v83 = v134.m128i_i64[0];
            *(__m128i *)(v8 + 48) = v82;
            *(_QWORD *)(v8 + 64) = v83;
            v18 = *(_QWORD *)(a1 + 80);
            goto LABEL_7;
          }
          v120 = _mm_loadu_si128((const __m128i *)(a1 + 24));
          v121 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 40) = 0;
          *(_OWORD *)(a1 + 24) = 0;
          v122 = _mm_loadu_si128((const __m128i *)(a1 + 48));
          v123 = *(_QWORD *)(a1 + 16);
          *(_OWORD *)(a1 + 48) = 0;
          v124 = _mm_loadu_si128((const __m128i *)a1);
          v90 = *(_QWORD *)(a1 + 64);
          *(_QWORD *)(a1 + 16) = 0;
          v91 = *(_WORD *)(a1 + 72);
          v133.m128i_i64[0] = v121;
          *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(v5 - 80));
          v125 = *(_QWORD *)(v5 - 64);
          v126 = _mm_loadu_si128((const __m128i *)(v5 - 56));
          *(_QWORD *)(v5 - 64) = 0;
          *(_OWORD *)(v5 - 56) = 0;
          v127 = *(_QWORD *)(a1 + 16);
          v135 = v120;
          v134 = v122;
          if ( v127 )
          {
            *(_QWORD *)(a1 + 24) = 0;
            v136.m128i_i64[0] = v125;
            v138 = v126;
            v137 = v124;
            qfree();
            v126 = _mm_load_si128(&v138);
            v124 = _mm_load_si128(&v137);
            v125 = v136.m128i_i64[0];
          }
          *(__m128i *)(a1 + 24) = v126;
          *(_QWORD *)(a1 + 16) = v125;
          v128 = *(_QWORD *)(v5 - 40);
          v129 = _mm_loadu_si128((const __m128i *)(v5 - 32));
          *(_QWORD *)(v5 - 40) = 0;
          *(_OWORD *)(v5 - 32) = 0;
          if ( *(_QWORD *)(a1 + 40) )
          {
            *(_QWORD *)(a1 + 48) = 0;
            v136.m128i_i64[0] = v128;
            v138 = v124;
            v137 = v129;
            qfree();
            v124 = _mm_load_si128(&v138);
            v129 = _mm_load_si128(&v137);
            v128 = v136.m128i_i64[0];
          }
          *(_QWORD *)(a1 + 40) = v128;
          *(__m128i *)(a1 + 48) = v129;
          *(_QWORD *)(a1 + 64) = *(_QWORD *)(v5 - 16);
          *(_BYTE *)(a1 + 72) = *(_BYTE *)(v5 - 8);
          *(_BYTE *)(a1 + 73) = *(_BYTE *)(v5 - 7);
          v130 = *(_QWORD *)(v5 - 64);
          *(__m128i *)(v5 - 80) = v124;
          if ( v130 )
          {
            *(_QWORD *)(v5 - 56) = 0;
            qfree();
          }
          v131 = _mm_load_si128(&v135);
          v132 = *(_QWORD *)(v5 - 40);
          *(_QWORD *)(v5 - 64) = v123;
          *(__m128i *)(v5 - 56) = v131;
          if ( v132 )
          {
LABEL_65:
            *(_QWORD *)(v5 - 32) = 0;
            qfree();
          }
LABEL_66:
          v100 = v133.m128i_i64[0];
          v101 = _mm_load_si128(&v134);
          *(_QWORD *)(v5 - 16) = v90;
          *(_WORD *)(v5 - 8) = v91;
          *(_QWORD *)(v5 - 40) = v100;
          *(__m128i *)(v5 - 32) = v101;
          v18 = *(_QWORD *)(a1 + 80);
          goto LABEL_7;
        }
        goto LABEL_6;
      }
      if ( v6 == v9 )
      {
        if ( *(_QWORD *)(a1 + 88) >= *(_QWORD *)(v8 + 8) )
        {
          v10 = *(_QWORD *)(v5 - 80);
          if ( v10 < v6 )
            goto LABEL_45;
          goto LABEL_5;
        }
        v84 = *(_QWORD *)(v5 - 80);
        if ( v84 < v6 )
          goto LABEL_6;
      }
      else
      {
        v84 = *(_QWORD *)(v5 - 80);
        if ( v84 < v9 )
        {
          if ( v84 < v6 )
            goto LABEL_6;
          goto LABEL_56;
        }
      }
      if ( v9 != v84 || *(_QWORD *)(v8 + 8) < *(_QWORD *)(v5 - 72) )
      {
        v102 = *(_QWORD *)(a1 + 40);
        v103 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        *(_QWORD *)(a1 + 40) = 0;
        *(_OWORD *)(a1 + 24) = 0;
        v104 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        v105 = *(_QWORD *)(a1 + 16);
        *(_OWORD *)(a1 + 48) = 0;
        v106 = _mm_loadu_si128((const __m128i *)a1);
        v107 = *(_WORD *)(a1 + 72);
        *(_QWORD *)(a1 + 16) = 0;
        v133.m128i_i64[0] = v102;
        v108 = *(_QWORD *)(a1 + 64);
        *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)v8);
        v109 = *(_QWORD *)(v8 + 16);
        v110 = _mm_loadu_si128((const __m128i *)(v8 + 24));
        *(_QWORD *)(v8 + 16) = 0;
        *(_OWORD *)(v8 + 24) = 0;
        v111 = *(_QWORD *)(a1 + 16);
        v134.m128i_i64[0] = v108;
        v135 = v103;
        v136 = v104;
        if ( v111 )
        {
          *(_QWORD *)(a1 + 24) = 0;
          v137.m128i_i64[0] = v109;
          v139 = v110;
          v138 = v106;
          qfree();
          v110 = _mm_load_si128(&v139);
          v106 = _mm_load_si128(&v138);
          v109 = v137.m128i_i64[0];
        }
        *(__m128i *)(a1 + 24) = v110;
        *(_QWORD *)(a1 + 16) = v109;
        v112 = *(_QWORD *)(v8 + 40);
        v113 = _mm_loadu_si128((const __m128i *)(v8 + 48));
        *(_QWORD *)(v8 + 40) = 0;
        *(_OWORD *)(v8 + 48) = 0;
        if ( *(_QWORD *)(a1 + 40) )
        {
          *(_QWORD *)(a1 + 48) = 0;
          v137.m128i_i64[0] = v112;
          v139 = v113;
          v138 = v106;
          qfree();
          v113 = _mm_load_si128(&v139);
          v106 = _mm_load_si128(&v138);
          v112 = v137.m128i_i64[0];
        }
        *(_QWORD *)(a1 + 40) = v112;
        *(__m128i *)(a1 + 48) = v113;
        *(_QWORD *)(a1 + 64) = *(_QWORD *)(v8 + 64);
        *(_BYTE *)(a1 + 72) = *(_BYTE *)(v8 + 72);
        *(_BYTE *)(a1 + 73) = *(_BYTE *)(v8 + 73);
        v114 = *(_QWORD *)(v8 + 16);
        *(__m128i *)v8 = v106;
        if ( v114 )
        {
          *(_QWORD *)(v8 + 24) = 0;
          qfree();
        }
        v115 = _mm_load_si128(&v135);
        v116 = *(_QWORD *)(v8 + 40);
        *(_QWORD *)(v8 + 16) = v105;
        *(__m128i *)(v8 + 24) = v115;
        if ( v116 )
        {
          *(_QWORD *)(v8 + 48) = 0;
          qfree();
        }
        v117 = v133.m128i_i64[0];
        v118 = _mm_load_si128(&v136);
        *(_WORD *)(v8 + 72) = v107;
        *(_QWORD *)(v8 + 40) = v117;
        v119 = v134.m128i_i64[0];
        *(__m128i *)(v8 + 48) = v118;
        *(_QWORD *)(v8 + 64) = v119;
        v18 = *(_QWORD *)(a1 + 80);
        goto LABEL_7;
      }
LABEL_56:
      if ( v6 != v84 || *(_QWORD *)(a1 + 88) < *(_QWORD *)(v5 - 72) )
      {
        v85 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        v86 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 40) = 0;
        *(_OWORD *)(a1 + 24) = 0;
        v87 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        v88 = *(_QWORD *)(a1 + 16);
        *(_OWORD *)(a1 + 48) = 0;
        v89 = _mm_loadu_si128((const __m128i *)a1);
        v90 = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 16) = 0;
        v91 = *(_WORD *)(a1 + 72);
        v133.m128i_i64[0] = v86;
        *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(v5 - 80));
        v92 = *(_QWORD *)(v5 - 64);
        v93 = _mm_loadu_si128((const __m128i *)(v5 - 56));
        *(_QWORD *)(v5 - 64) = 0;
        *(_OWORD *)(v5 - 56) = 0;
        v94 = *(_QWORD *)(a1 + 16);
        v135 = v85;
        v134 = v87;
        if ( v94 )
        {
          *(_QWORD *)(a1 + 24) = 0;
          v136.m128i_i64[0] = v92;
          v138 = v89;
          v137 = v93;
          qfree();
          v89 = _mm_load_si128(&v138);
          v93 = _mm_load_si128(&v137);
          v92 = v136.m128i_i64[0];
        }
        *(__m128i *)(a1 + 24) = v93;
        *(_QWORD *)(a1 + 16) = v92;
        v95 = *(_QWORD *)(v5 - 40);
        v96 = _mm_loadu_si128((const __m128i *)(v5 - 32));
        *(_QWORD *)(v5 - 40) = 0;
        *(_OWORD *)(v5 - 32) = 0;
        if ( *(_QWORD *)(a1 + 40) )
        {
          *(_QWORD *)(a1 + 48) = 0;
          v136.m128i_i64[0] = v95;
          v138 = v89;
          v137 = v96;
          qfree();
          v89 = _mm_load_si128(&v138);
          v96 = _mm_load_si128(&v137);
          v95 = v136.m128i_i64[0];
        }
        *(_QWORD *)(a1 + 40) = v95;
        *(__m128i *)(a1 + 48) = v96;
        *(_QWORD *)(a1 + 64) = *(_QWORD *)(v5 - 16);
        *(_BYTE *)(a1 + 72) = *(_BYTE *)(v5 - 8);
        *(_BYTE *)(a1 + 73) = *(_BYTE *)(v5 - 7);
        v97 = *(_QWORD *)(v5 - 64);
        *(__m128i *)(v5 - 80) = v89;
        if ( v97 )
        {
          *(_QWORD *)(v5 - 56) = 0;
          qfree();
        }
        v98 = _mm_load_si128(&v135);
        v99 = *(_QWORD *)(v5 - 40);
        *(_QWORD *)(v5 - 64) = v88;
        *(__m128i *)(v5 - 56) = v98;
        if ( v99 )
          goto LABEL_65;
        goto LABEL_66;
      }
LABEL_6:
      v11 = *(_QWORD *)(a1 + 16);
      v12 = _mm_loadu_si128((const __m128i *)(a1 + 80));
      v13 = *(_QWORD *)(a1 + 40);
      v14 = _mm_loadu_si128((const __m128i *)a1);
      v15 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 96);
      v16 = *(_QWORD *)(a1 + 120);
      v17 = *(_WORD *)(a1 + 72);
      *(_QWORD *)(a1 + 96) = v11;
      v18 = *(_QWORD *)a1;
      *(__m128i *)a1 = v12;
      v19 = _mm_loadu_si128((const __m128i *)(a1 + 104));
      v20 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      v21 = _mm_loadu_si128((const __m128i *)(a1 + 48));
      *(_QWORD *)(a1 + 40) = v16;
      v22 = *(_QWORD *)(a1 + 144);
      *(__m128i *)(a1 + 24) = v19;
      v23 = _mm_loadu_si128((const __m128i *)(a1 + 128));
      *(_QWORD *)(a1 + 120) = v13;
      *(_QWORD *)(a1 + 64) = v22;
      LOWORD(v22) = *(_WORD *)(a1 + 152);
      *(_QWORD *)(a1 + 144) = v15;
      *(_WORD *)(a1 + 72) = v22;
      *(_WORD *)(a1 + 152) = v17;
      *(__m128i *)(a1 + 48) = v23;
      *(__m128i *)(a1 + 80) = v14;
      *(__m128i *)(a1 + 104) = v20;
      *(__m128i *)(a1 + 128) = v21;
LABEL_7:
      v24 = v5;
      while ( 1 )
      {
        v45 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 >= v18 )
        {
          while ( v18 < v45 || *(_QWORD *)(v7 + 8) < *(_QWORD *)(a1 + 8) )
          {
            v18 = *(_QWORD *)(v7 + 80);
            v7 += 80LL;
            if ( v45 < v18 )
            {
              v25 = *(_QWORD *)(v24 - 80);
              v26 = v24 - 80;
              if ( v25 >= v45 )
                goto LABEL_24;
              goto LABEL_9;
            }
          }
        }
        v25 = *(_QWORD *)(v24 - 80);
        v26 = v24 - 80;
        if ( v25 >= v45 )
        {
LABEL_24:
          while ( v45 < v25 || *(_QWORD *)(a1 + 8) < *(_QWORD *)(v26 + 8) )
          {
            v25 = *(_QWORD *)(v26 - 80);
            v26 -= 80LL;
            if ( v25 < v45 )
            {
              if ( v7 < v26 )
                goto LABEL_10;
              goto LABEL_28;
            }
          }
        }
LABEL_9:
        if ( v7 >= v26 )
          break;
LABEL_10:
        v27 = *(_QWORD *)(v7 + 64);
        v28 = *(_QWORD *)(v7 + 16);
        *(_QWORD *)(v7 + 16) = 0;
        v29 = _mm_loadu_si128((const __m128i *)(v7 + 24));
        v30 = _mm_loadu_si128((const __m128i *)(v7 + 48));
        *(_OWORD *)(v7 + 24) = 0;
        v31 = *(_QWORD *)(v7 + 40);
        v32 = _mm_loadu_si128((const __m128i *)v7);
        *(_OWORD *)(v7 + 48) = 0;
        *(_QWORD *)(v7 + 40) = 0;
        v33 = _mm_loadu_si128((const __m128i *)v26);
        v136.m128i_i64[0] = v27;
        LOWORD(v27) = *(_WORD *)(v7 + 72);
        *(__m128i *)v7 = v33;
        v34 = *(_QWORD *)(v26 + 16);
        v35 = _mm_loadu_si128((const __m128i *)(v26 + 24));
        *(_QWORD *)(v26 + 16) = 0;
        *(_OWORD *)(v26 + 24) = 0;
        v36 = *(_QWORD *)(v7 + 16);
        v133.m128i_i16[0] = v27;
        v135 = v32;
        v137 = v29;
        v134 = v30;
        if ( v36 )
        {
          *(_QWORD *)(v7 + 24) = 0;
          v138.m128i_i64[0] = v34;
          v139 = v35;
          qfree();
          v35 = _mm_load_si128(&v139);
          v34 = v138.m128i_i64[0];
        }
        *(_QWORD *)(v7 + 16) = v34;
        *(__m128i *)(v7 + 24) = v35;
        v37 = *(_QWORD *)(v26 + 40);
        v38 = _mm_loadu_si128((const __m128i *)(v26 + 48));
        *(_QWORD *)(v26 + 40) = 0;
        *(_OWORD *)(v26 + 48) = 0;
        if ( *(_QWORD *)(v7 + 40) )
        {
          *(_QWORD *)(v7 + 48) = 0;
          v139.m128i_i64[0] = v37;
          v138 = v38;
          qfree();
          v37 = v139.m128i_i64[0];
          v38 = _mm_load_si128(&v138);
        }
        *(_QWORD *)(v7 + 40) = v37;
        v39 = _mm_load_si128(&v135);
        *(__m128i *)(v7 + 48) = v38;
        *(_QWORD *)(v7 + 64) = *(_QWORD *)(v26 + 64);
        *(_BYTE *)(v7 + 72) = *(_BYTE *)(v26 + 72);
        *(_BYTE *)(v7 + 73) = *(_BYTE *)(v26 + 73);
        v40 = *(_QWORD *)(v26 + 16);
        *(__m128i *)v26 = v39;
        if ( v40 )
        {
          *(_QWORD *)(v26 + 24) = 0;
          qfree();
        }
        v41 = _mm_load_si128(&v137);
        v42 = *(_QWORD *)(v26 + 40);
        *(_QWORD *)(v26 + 16) = v28;
        *(__m128i *)(v26 + 24) = v41;
        if ( v42 )
        {
          *(_QWORD *)(v26 + 48) = 0;
          qfree();
        }
        v43 = v136.m128i_i64[0];
        *(_QWORD *)(v26 + 40) = v31;
        v24 = v26;
        v7 += 80LL;
        v44 = _mm_load_si128(&v134);
        *(_QWORD *)(v26 + 64) = v43;
        LOWORD(v43) = v133.m128i_i16[0];
        *(__m128i *)(v26 + 48) = v44;
        *(_WORD *)(v26 + 72) = v43;
        v18 = *(_QWORD *)v7;
      }
LABEL_28:
      sub_36CB0(v7, v5, v140);
      v3 = v7 - a1;
      if ( (__int64)(v7 - a1) <= 1280 )
        return v148 - __readfsqword(0x28u);
      v5 = v7;
    }
    sub_36940(a1, v5, v5);
    if ( (__int64)(v5 - a1) > 80 )
    {
      v136.m128i_i64[0] = (__int64)&v141;
      do
      {
        v46 = *(_QWORD *)(v5 - 64);
        v47 = *(_QWORD *)(v5 - 40);
        v5 -= 80LL;
        v48 = _mm_loadu_si128((const __m128i *)v5);
        *(_QWORD *)(v5 + 16) = 0;
        *(_QWORD *)(v5 + 40) = 0;
        v49 = _mm_loadu_si128((const __m128i *)(v5 + 24));
        v135 = v48;
        v50 = _mm_loadu_si128((const __m128i *)(v5 + 48));
        v51 = *(_QWORD *)(v5 + 64);
        *(_OWORD *)(v5 + 24) = 0;
        v52 = *(_WORD *)(v5 + 72);
        *(_OWORD *)(v5 + 48) = 0;
        v53 = _mm_loadu_si128((const __m128i *)a1);
        v134 = v49;
        *(__m128i *)v5 = v53;
        v54 = *(_QWORD *)(a1 + 16);
        v55 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        *(_QWORD *)(a1 + 16) = 0;
        *(_OWORD *)(a1 + 24) = 0;
        v56 = *(_QWORD *)(v5 + 16);
        v133 = v50;
        if ( v56 )
        {
          *(_QWORD *)(v5 + 24) = 0;
          v137.m128i_i64[0] = v54;
          v138 = v55;
          qfree();
          v55 = _mm_load_si128(&v138);
          v54 = v137.m128i_i64[0];
        }
        *(_QWORD *)(v5 + 16) = v54;
        *(__m128i *)(v5 + 24) = v55;
        v57 = *(_QWORD *)(a1 + 40);
        v58 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        *(_QWORD *)(a1 + 40) = 0;
        *(_OWORD *)(a1 + 48) = 0;
        if ( *(_QWORD *)(v5 + 40) )
        {
          *(_QWORD *)(v5 + 48) = 0;
          v137.m128i_i64[0] = v57;
          v138 = v58;
          qfree();
          v58 = _mm_load_si128(&v138);
          v57 = v137.m128i_i64[0];
        }
        *(_QWORD *)(v5 + 40) = v57;
        v59 = _mm_load_si128(&v135);
        *(__m128i *)(v5 + 48) = v58;
        v60 = *(_QWORD *)(a1 + 64);
        v61 = _mm_load_si128(&v134);
        v147 = v52;
        v62 = _mm_load_si128(&v133);
        *(_QWORD *)(v5 + 64) = v60;
        LOBYTE(v60) = *(_BYTE *)(a1 + 72);
        v63 = v136.m128i_i64[0];
        v144 = v47;
        *(_BYTE *)(v5 + 72) = v60;
        LOBYTE(v60) = *(_BYTE *)(a1 + 73);
        v146 = v51;
        *(_BYTE *)(v5 + 73) = v60;
        v142 = v46;
        v141 = v59;
        v143 = v61;
        v145 = v62;
        sub_1CA00(a1, 0, 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - a1) >> 4), v63);
        v64 = v142;
        if ( v144 )
          qfree();
        if ( v64 )
          qfree();
      }
      while ( (__int64)(v5 - a1) > 80 );
    }
  }
  return v148 - __readfsqword(0x28u);
}

