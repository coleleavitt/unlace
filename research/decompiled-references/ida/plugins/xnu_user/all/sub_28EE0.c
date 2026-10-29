unsigned __int64 __fastcall sub_28EE0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r14
  __m128i v19; // xmm6
  __m128i v20; // xmm7
  __int64 v21; // r13
  __m128i v22; // xmm5
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // rcx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __int64 v30; // rdi
  __m128i v31; // xmm2
  __int64 v32; // rdi
  __int64 v33; // rax
  __m128i v34; // xmm5
  unsigned __int64 v35; // rcx
  __int64 v36; // r12
  __int64 v37; // rbp
  __m128i v38; // xmm7
  __m128i v39; // xmm3
  __m128i v40; // xmm7
  __int64 v41; // r14
  __int16 v42; // r13
  __m128i v43; // xmm0
  __int64 v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rdi
  __int64 v47; // rax
  __m128i v48; // xmm0
  __m128i v49; // xmm3
  __int64 v50; // rax
  __m128i v51; // xmm2
  __m128i v52; // xmm7
  __int64 v53; // rcx
  __int64 v54; // rbp
  __m128i v56; // xmm2
  __int64 v57; // rax
  __m128i v58; // xmm3
  __int64 v59; // r13
  __m128i v60; // xmm1
  __int16 v61; // r14
  __m128i v62; // xmm2
  __int64 v63; // rax
  __int64 v64; // rdx
  __m128i v65; // xmm2
  __int64 v66; // rdi
  __int64 v67; // rdx
  __m128i v68; // xmm0
  __int64 v69; // rdi
  __m128i v70; // xmm1
  __int64 v71; // rdi
  __int64 v72; // rax
  __m128i v73; // xmm1
  __int64 v74; // rax
  unsigned __int64 v75; // rdi
  __m128i v76; // xmm3
  __int64 v77; // r9
  __m128i v78; // xmm2
  __int64 v79; // rdi
  __int64 v80; // r10
  __m128i v81; // xmm3
  __m128i v82; // xmm1
  __m128i v83; // xmm0
  __int64 v84; // rcx
  __int16 v85; // dx
  __int64 v86; // r10
  __m128i v87; // xmm3
  __m128i v88; // xmm3
  __int64 v89; // rax
  __int64 v90; // r13
  __m128i v91; // xmm1
  __m128i v92; // xmm3
  __int64 v93; // rbp
  __int16 v94; // r14
  __m128i v95; // xmm2
  __int64 v96; // rdx
  __m128i v97; // xmm2
  __int64 v98; // rdi
  __int64 v99; // rdx
  __m128i v100; // xmm0
  __int64 v101; // rdi
  __m128i v102; // xmm1
  __int64 v103; // rdi
  __int64 v104; // rax
  __m128i v105; // xmm1
  __m128i v106; // xmm2
  __int64 v107; // rax
  __m128i v108; // xmm3
  __int64 v109; // r13
  __m128i v110; // xmm1
  __int64 v111; // rbp
  __int16 v112; // r14
  __m128i v113; // xmm2
  __int64 v114; // rdx
  __m128i v115; // xmm2
  __int64 v116; // rdi
  __int64 v117; // rdx
  __m128i v118; // xmm0
  __int64 v119; // rdi
  __m128i v120; // xmm1
  __int64 v121; // rdi
  __int64 v122; // rax
  __m128i v123; // xmm1
  __m128i v124; // [rsp+0h] [rbp-118h] BYREF
  __m128i v125; // [rsp+10h] [rbp-108h] BYREF
  __m128i v126; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v127; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v128; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v129; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v130; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v131; // [rsp+78h] [rbp-A0h]
  __m128i v132; // [rsp+80h] [rbp-98h] BYREF
  __int64 v133; // [rsp+90h] [rbp-88h]
  __m128i v134; // [rsp+98h] [rbp-80h]
  __int64 v135; // [rsp+A8h] [rbp-70h]
  __m128i v136; // [rsp+B0h] [rbp-68h]
  __int64 v137; // [rsp+C0h] [rbp-58h]
  __int16 v138; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v139; // [rsp+D8h] [rbp-40h]

  v131 = a3;
  v139 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) > 1280 )
  {
    v5 = a2;
    while ( v131 )
    {
      --v131;
      v6 = a1 + 80;
      v7 = 5 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (v3 >> 4)) >> 1);
      v8 = *(_QWORD *)(a1 + 80);
      v9 = 16 * v7;
      v10 = a1 + v9;
      v11 = *(_QWORD *)(a1 + v9);
      if ( v11 >= v8 )
      {
        if ( v8 != v11 )
        {
          v75 = *(_QWORD *)(v5 - 80);
          if ( v75 >= v11 )
            goto LABEL_58;
          if ( v75 >= v8 )
          {
LABEL_60:
            if ( v8 != v75 || *(_QWORD *)(a1 + 88) < *(_QWORD *)(v5 - 72) )
            {
              v88 = _mm_loadu_si128((const __m128i *)(a1 + 24));
              v89 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(a1 + 40) = 0;
              *(_OWORD *)(a1 + 24) = 0;
              v90 = *(_QWORD *)(a1 + 16);
              v91 = _mm_loadu_si128((const __m128i *)a1);
              v126 = v88;
              v92 = _mm_loadu_si128((const __m128i *)(a1 + 48));
              v93 = *(_QWORD *)(a1 + 64);
              *(_QWORD *)(a1 + 16) = 0;
              v94 = *(_WORD *)(a1 + 72);
              *(_OWORD *)(a1 + 48) = 0;
              v95 = _mm_loadu_si128((const __m128i *)(v5 - 80));
              v124.m128i_i64[0] = v89;
              *(__m128i *)a1 = v95;
              v96 = *(_QWORD *)(v5 - 64);
              v97 = _mm_loadu_si128((const __m128i *)(v5 - 56));
              *(_QWORD *)(v5 - 64) = 0;
              *(_OWORD *)(v5 - 56) = 0;
              v98 = *(_QWORD *)(a1 + 16);
              v125 = v92;
              if ( v98 )
              {
                *(_QWORD *)(a1 + 24) = 0;
                v127.m128i_i64[0] = v96;
                v129 = v97;
                v128 = v91;
                qfree();
                v97 = _mm_load_si128(&v129);
                v91 = _mm_load_si128(&v128);
                v96 = v127.m128i_i64[0];
              }
              *(__m128i *)(a1 + 24) = v97;
              *(_QWORD *)(a1 + 16) = v96;
              v99 = *(_QWORD *)(v5 - 40);
              v100 = _mm_loadu_si128((const __m128i *)(v5 - 32));
              *(_QWORD *)(v5 - 40) = 0;
              *(_OWORD *)(v5 - 32) = 0;
              if ( *(_QWORD *)(a1 + 40) )
              {
                *(_QWORD *)(a1 + 48) = 0;
                v127.m128i_i64[0] = v99;
                v129 = v91;
                v128 = v100;
                qfree();
                v91 = _mm_load_si128(&v129);
                v100 = _mm_load_si128(&v128);
                v99 = v127.m128i_i64[0];
              }
              *(_QWORD *)(a1 + 40) = v99;
              *(__m128i *)(a1 + 48) = v100;
              *(_QWORD *)(a1 + 64) = *(_QWORD *)(v5 - 16);
              *(_BYTE *)(a1 + 72) = *(_BYTE *)(v5 - 8);
              *(_BYTE *)(a1 + 73) = *(_BYTE *)(v5 - 7);
              v101 = *(_QWORD *)(v5 - 64);
              *(__m128i *)(v5 - 80) = v91;
              if ( v101 )
              {
                *(_QWORD *)(v5 - 56) = 0;
                qfree();
              }
              v102 = _mm_load_si128(&v126);
              v103 = *(_QWORD *)(v5 - 40);
              *(_QWORD *)(v5 - 64) = v90;
              *(__m128i *)(v5 - 56) = v102;
              if ( v103 )
              {
                *(_QWORD *)(v5 - 32) = 0;
                qfree();
              }
              v104 = v124.m128i_i64[0];
              v105 = _mm_load_si128(&v125);
              *(_QWORD *)(v5 - 16) = v93;
              *(_WORD *)(v5 - 8) = v94;
              *(_QWORD *)(v5 - 40) = v104;
              *(__m128i *)(v5 - 32) = v105;
              v13 = *(_QWORD *)(a1 + 80);
              goto LABEL_7;
            }
          }
LABEL_56:
          v76 = _mm_loadu_si128((const __m128i *)(a1 + 80));
          v77 = *(_QWORD *)(a1 + 16);
          v78 = _mm_loadu_si128((const __m128i *)a1);
          v79 = *(_QWORD *)(a1 + 40);
          v13 = *(_QWORD *)a1;
          *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 96);
          v80 = *(_QWORD *)(a1 + 120);
          *(__m128i *)a1 = v76;
          v81 = _mm_loadu_si128((const __m128i *)(a1 + 104));
          v82 = _mm_loadu_si128((const __m128i *)(a1 + 24));
          v83 = _mm_loadu_si128((const __m128i *)(a1 + 48));
          *(_QWORD *)(a1 + 96) = v77;
          v84 = *(_QWORD *)(a1 + 64);
          v85 = *(_WORD *)(a1 + 72);
          *(_QWORD *)(a1 + 40) = v80;
          v86 = *(_QWORD *)(a1 + 144);
          *(__m128i *)(a1 + 24) = v81;
          v87 = _mm_loadu_si128((const __m128i *)(a1 + 128));
          *(_QWORD *)(a1 + 120) = v79;
          *(_QWORD *)(a1 + 64) = v86;
          LOWORD(v86) = *(_WORD *)(a1 + 152);
          *(_QWORD *)(a1 + 144) = v84;
          *(_WORD *)(a1 + 72) = v86;
          *(_WORD *)(a1 + 152) = v85;
          *(__m128i *)(a1 + 48) = v87;
          *(__m128i *)(a1 + 80) = v78;
          *(__m128i *)(a1 + 104) = v82;
          *(__m128i *)(a1 + 128) = v83;
          goto LABEL_7;
        }
        if ( *(_QWORD *)(a1 + 88) < *(_QWORD *)(v10 + 8) )
        {
          v75 = *(_QWORD *)(v5 - 80);
          if ( v75 >= v8 )
          {
LABEL_58:
            if ( v11 != v75 || *(_QWORD *)(v10 + 8) < *(_QWORD *)(v5 - 72) )
            {
              sub_28D60(a1, a1 + v9);
              v13 = *(_QWORD *)(a1 + 80);
              goto LABEL_7;
            }
            goto LABEL_60;
          }
          goto LABEL_56;
        }
        v12 = *(_QWORD *)(v5 - 80);
        if ( v12 < v8 )
          goto LABEL_45;
      }
      else
      {
        v12 = *(_QWORD *)(v5 - 80);
        if ( v12 < v8 )
          goto LABEL_73;
      }
      if ( v8 != v12 || *(_QWORD *)(a1 + 88) < *(_QWORD *)(v5 - 72) )
      {
        sub_28D60(a1, a1 + 80);
        v13 = *(_QWORD *)(a1 + 80);
        goto LABEL_7;
      }
LABEL_73:
      if ( v12 < v11 || v11 == v12 && *(_QWORD *)(v10 + 8) >= *(_QWORD *)(v5 - 72) )
      {
LABEL_45:
        v56 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        v57 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 40) = 0;
        *(_OWORD *)(a1 + 24) = 0;
        v58 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        v59 = *(_QWORD *)(a1 + 16);
        *(_OWORD *)(a1 + 48) = 0;
        v60 = _mm_loadu_si128((const __m128i *)a1);
        v61 = *(_WORD *)(a1 + 72);
        *(_QWORD *)(a1 + 16) = 0;
        v126 = v56;
        v62 = _mm_loadu_si128((const __m128i *)v10);
        v124.m128i_i64[0] = v57;
        v63 = *(_QWORD *)(a1 + 64);
        *(__m128i *)a1 = v62;
        v64 = *(_QWORD *)(v10 + 16);
        v65 = _mm_loadu_si128((const __m128i *)(v10 + 24));
        *(_QWORD *)(v10 + 16) = 0;
        *(_OWORD *)(v10 + 24) = 0;
        v66 = *(_QWORD *)(a1 + 16);
        v125.m128i_i64[0] = v63;
        v127 = v58;
        if ( v66 )
        {
          *(_QWORD *)(a1 + 24) = 0;
          v128.m128i_i64[0] = v64;
          v130 = v60;
          v129 = v65;
          qfree();
          v60 = _mm_load_si128(&v130);
          v65 = _mm_load_si128(&v129);
          v64 = v128.m128i_i64[0];
        }
        *(__m128i *)(a1 + 24) = v65;
        *(_QWORD *)(a1 + 16) = v64;
        v67 = *(_QWORD *)(v10 + 40);
        v68 = _mm_loadu_si128((const __m128i *)(v10 + 48));
        *(_QWORD *)(v10 + 40) = 0;
        *(_OWORD *)(v10 + 48) = 0;
        if ( *(_QWORD *)(a1 + 40) )
        {
          *(_QWORD *)(a1 + 48) = 0;
          v128.m128i_i64[0] = v67;
          v130 = v68;
          v129 = v60;
          qfree();
          v68 = _mm_load_si128(&v130);
          v60 = _mm_load_si128(&v129);
          v67 = v128.m128i_i64[0];
        }
        *(_QWORD *)(a1 + 40) = v67;
        *(__m128i *)(a1 + 48) = v68;
        *(_QWORD *)(a1 + 64) = *(_QWORD *)(v10 + 64);
        *(_BYTE *)(a1 + 72) = *(_BYTE *)(v10 + 72);
        *(_BYTE *)(a1 + 73) = *(_BYTE *)(v10 + 73);
        v69 = *(_QWORD *)(v10 + 16);
        *(__m128i *)v10 = v60;
        if ( v69 )
        {
          *(_QWORD *)(v10 + 24) = 0;
          qfree();
        }
        v70 = _mm_load_si128(&v126);
        v71 = *(_QWORD *)(v10 + 40);
        *(_QWORD *)(v10 + 16) = v59;
        *(__m128i *)(v10 + 24) = v70;
        if ( v71 )
        {
          *(_QWORD *)(v10 + 48) = 0;
          qfree();
        }
        v72 = v124.m128i_i64[0];
        v73 = _mm_load_si128(&v127);
        *(_WORD *)(v10 + 72) = v61;
        *(_QWORD *)(v10 + 40) = v72;
        v74 = v125.m128i_i64[0];
        *(__m128i *)(v10 + 48) = v73;
        *(_QWORD *)(v10 + 64) = v74;
        v13 = *(_QWORD *)(a1 + 80);
        goto LABEL_7;
      }
      v106 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      v107 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      v108 = _mm_loadu_si128((const __m128i *)(a1 + 48));
      v109 = *(_QWORD *)(a1 + 16);
      *(_OWORD *)(a1 + 48) = 0;
      v110 = _mm_loadu_si128((const __m128i *)a1);
      v111 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 16) = 0;
      v112 = *(_WORD *)(a1 + 72);
      v125 = v106;
      v113 = _mm_loadu_si128((const __m128i *)(v5 - 80));
      v124.m128i_i64[0] = v107;
      *(__m128i *)a1 = v113;
      v114 = *(_QWORD *)(v5 - 64);
      v115 = _mm_loadu_si128((const __m128i *)(v5 - 56));
      *(_QWORD *)(v5 - 64) = 0;
      *(_OWORD *)(v5 - 56) = 0;
      v116 = *(_QWORD *)(a1 + 16);
      v126 = v108;
      if ( v116 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        v127.m128i_i64[0] = v114;
        v129 = v115;
        v128 = v110;
        qfree();
        v115 = _mm_load_si128(&v129);
        v110 = _mm_load_si128(&v128);
        v114 = v127.m128i_i64[0];
      }
      *(__m128i *)(a1 + 24) = v115;
      *(_QWORD *)(a1 + 16) = v114;
      v117 = *(_QWORD *)(v5 - 40);
      v118 = _mm_loadu_si128((const __m128i *)(v5 - 32));
      *(_QWORD *)(v5 - 40) = 0;
      *(_OWORD *)(v5 - 32) = 0;
      if ( *(_QWORD *)(a1 + 40) )
      {
        *(_QWORD *)(a1 + 48) = 0;
        v127.m128i_i64[0] = v117;
        v129 = v118;
        v128 = v110;
        qfree();
        v118 = _mm_load_si128(&v129);
        v110 = _mm_load_si128(&v128);
        v117 = v127.m128i_i64[0];
      }
      *(_QWORD *)(a1 + 40) = v117;
      *(__m128i *)(a1 + 48) = v118;
      *(_QWORD *)(a1 + 64) = *(_QWORD *)(v5 - 16);
      *(_BYTE *)(a1 + 72) = *(_BYTE *)(v5 - 8);
      *(_BYTE *)(a1 + 73) = *(_BYTE *)(v5 - 7);
      v119 = *(_QWORD *)(v5 - 64);
      *(__m128i *)(v5 - 80) = v110;
      if ( v119 )
      {
        *(_QWORD *)(v5 - 56) = 0;
        qfree();
      }
      v120 = _mm_load_si128(&v125);
      v121 = *(_QWORD *)(v5 - 40);
      *(_QWORD *)(v5 - 64) = v109;
      *(__m128i *)(v5 - 56) = v120;
      if ( v121 )
      {
        *(_QWORD *)(v5 - 32) = 0;
        qfree();
      }
      v122 = v124.m128i_i64[0];
      v123 = _mm_load_si128(&v126);
      *(_QWORD *)(v5 - 16) = v111;
      *(_WORD *)(v5 - 8) = v112;
      *(_QWORD *)(v5 - 40) = v122;
      *(__m128i *)(v5 - 32) = v123;
      v13 = *(_QWORD *)(a1 + 80);
LABEL_7:
      v14 = v5;
      while ( 1 )
      {
        v35 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 >= v13 )
        {
          while ( v13 < v35 || *(_QWORD *)(v6 + 8) < *(_QWORD *)(a1 + 8) )
          {
            v13 = *(_QWORD *)(v6 + 80);
            v6 += 80LL;
            if ( v35 < v13 )
            {
              v15 = *(_QWORD *)(v14 - 80);
              v16 = v14 - 80;
              if ( v15 >= v35 )
                goto LABEL_24;
              goto LABEL_9;
            }
          }
        }
        v15 = *(_QWORD *)(v14 - 80);
        v16 = v14 - 80;
        if ( v15 >= v35 )
        {
LABEL_24:
          while ( v35 < v15 || *(_QWORD *)(a1 + 8) < *(_QWORD *)(v16 + 8) )
          {
            v15 = *(_QWORD *)(v16 - 80);
            v16 -= 80LL;
            if ( v15 < v35 )
            {
              if ( v6 < v16 )
                goto LABEL_10;
              goto LABEL_28;
            }
          }
        }
LABEL_9:
        if ( v6 >= v16 )
          break;
LABEL_10:
        v17 = *(_QWORD *)(v6 + 64);
        v18 = *(_QWORD *)(v6 + 16);
        *(_QWORD *)(v6 + 16) = 0;
        v19 = _mm_loadu_si128((const __m128i *)(v6 + 24));
        v20 = _mm_loadu_si128((const __m128i *)(v6 + 48));
        *(_OWORD *)(v6 + 24) = 0;
        v21 = *(_QWORD *)(v6 + 40);
        v22 = _mm_loadu_si128((const __m128i *)v6);
        *(_OWORD *)(v6 + 48) = 0;
        *(_QWORD *)(v6 + 40) = 0;
        v23 = _mm_loadu_si128((const __m128i *)v16);
        v125.m128i_i64[0] = v17;
        LOWORD(v17) = *(_WORD *)(v6 + 72);
        *(__m128i *)v6 = v23;
        v24 = *(_QWORD *)(v16 + 16);
        v25 = _mm_loadu_si128((const __m128i *)(v16 + 24));
        *(_QWORD *)(v16 + 16) = 0;
        *(_OWORD *)(v16 + 24) = 0;
        v26 = *(_QWORD *)(v6 + 16);
        v126.m128i_i16[0] = v17;
        v124 = v22;
        v128 = v19;
        v127 = v20;
        if ( v26 )
        {
          *(_QWORD *)(v6 + 24) = 0;
          v130.m128i_i64[0] = v24;
          v129 = v25;
          qfree();
          v24 = v130.m128i_i64[0];
          v25 = _mm_load_si128(&v129);
        }
        *(_QWORD *)(v6 + 16) = v24;
        *(__m128i *)(v6 + 24) = v25;
        v27 = *(_QWORD *)(v16 + 40);
        v28 = _mm_loadu_si128((const __m128i *)(v16 + 48));
        *(_QWORD *)(v16 + 40) = 0;
        *(_OWORD *)(v16 + 48) = 0;
        if ( *(_QWORD *)(v6 + 40) )
        {
          *(_QWORD *)(v6 + 48) = 0;
          v129.m128i_i64[0] = v27;
          v130 = v28;
          qfree();
          v28 = _mm_load_si128(&v130);
          v27 = v129.m128i_i64[0];
        }
        *(_QWORD *)(v6 + 40) = v27;
        v29 = _mm_load_si128(&v124);
        *(__m128i *)(v6 + 48) = v28;
        *(_QWORD *)(v6 + 64) = *(_QWORD *)(v16 + 64);
        *(_BYTE *)(v6 + 72) = *(_BYTE *)(v16 + 72);
        *(_BYTE *)(v6 + 73) = *(_BYTE *)(v16 + 73);
        v30 = *(_QWORD *)(v16 + 16);
        *(__m128i *)v16 = v29;
        if ( v30 )
        {
          *(_QWORD *)(v16 + 24) = 0;
          qfree();
        }
        v31 = _mm_load_si128(&v128);
        v32 = *(_QWORD *)(v16 + 40);
        *(_QWORD *)(v16 + 16) = v18;
        *(__m128i *)(v16 + 24) = v31;
        if ( v32 )
        {
          *(_QWORD *)(v16 + 48) = 0;
          qfree();
        }
        v33 = v125.m128i_i64[0];
        *(_QWORD *)(v16 + 40) = v21;
        v14 = v16;
        v6 += 80LL;
        v34 = _mm_load_si128(&v127);
        *(_QWORD *)(v16 + 64) = v33;
        LOWORD(v33) = v126.m128i_i16[0];
        *(__m128i *)(v16 + 48) = v34;
        *(_WORD *)(v16 + 72) = v33;
        v13 = *(_QWORD *)v6;
      }
LABEL_28:
      sub_28EE0(v6, v5, v131);
      v3 = v6 - a1;
      if ( (__int64)(v6 - a1) <= 1280 )
        return v139 - __readfsqword(0x28u);
      v5 = v6;
    }
    sub_289F0(a1, v5, v5);
    if ( (__int64)(v5 - a1) > 80 )
    {
      v127.m128i_i64[0] = (__int64)&v132;
      do
      {
        v36 = *(_QWORD *)(v5 - 64);
        v37 = *(_QWORD *)(v5 - 40);
        v5 -= 80LL;
        v38 = _mm_loadu_si128((const __m128i *)v5);
        *(_QWORD *)(v5 + 16) = 0;
        *(_QWORD *)(v5 + 40) = 0;
        v39 = _mm_loadu_si128((const __m128i *)(v5 + 24));
        v126 = v38;
        v40 = _mm_loadu_si128((const __m128i *)(v5 + 48));
        v41 = *(_QWORD *)(v5 + 64);
        *(_OWORD *)(v5 + 24) = 0;
        v42 = *(_WORD *)(v5 + 72);
        *(_OWORD *)(v5 + 48) = 0;
        v43 = _mm_loadu_si128((const __m128i *)a1);
        v125 = v39;
        *(__m128i *)v5 = v43;
        v44 = *(_QWORD *)(a1 + 16);
        v45 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        *(_QWORD *)(a1 + 16) = 0;
        *(_OWORD *)(a1 + 24) = 0;
        v46 = *(_QWORD *)(v5 + 16);
        v124 = v40;
        if ( v46 )
        {
          *(_QWORD *)(v5 + 24) = 0;
          v128.m128i_i64[0] = v44;
          v129 = v45;
          qfree();
          v45 = _mm_load_si128(&v129);
          v44 = v128.m128i_i64[0];
        }
        *(_QWORD *)(v5 + 16) = v44;
        *(__m128i *)(v5 + 24) = v45;
        v47 = *(_QWORD *)(a1 + 40);
        v48 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        *(_QWORD *)(a1 + 40) = 0;
        *(_OWORD *)(a1 + 48) = 0;
        if ( *(_QWORD *)(v5 + 40) )
        {
          *(_QWORD *)(v5 + 48) = 0;
          v128.m128i_i64[0] = v47;
          v129 = v48;
          qfree();
          v48 = _mm_load_si128(&v129);
          v47 = v128.m128i_i64[0];
        }
        *(_QWORD *)(v5 + 40) = v47;
        v49 = _mm_load_si128(&v126);
        *(__m128i *)(v5 + 48) = v48;
        v50 = *(_QWORD *)(a1 + 64);
        v51 = _mm_load_si128(&v125);
        v138 = v42;
        v52 = _mm_load_si128(&v124);
        *(_QWORD *)(v5 + 64) = v50;
        LOBYTE(v50) = *(_BYTE *)(a1 + 72);
        v53 = v127.m128i_i64[0];
        v135 = v37;
        *(_BYTE *)(v5 + 72) = v50;
        LOBYTE(v50) = *(_BYTE *)(a1 + 73);
        v137 = v41;
        *(_BYTE *)(v5 + 73) = v50;
        v133 = v36;
        v132 = v49;
        v134 = v51;
        v136 = v52;
        sub_1A0D0(a1, 0, 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - a1) >> 4), v53);
        v54 = v133;
        if ( v135 )
          qfree();
        if ( v54 )
          qfree();
      }
      while ( (__int64)(v5 - a1) > 80 );
    }
  }
  return v139 - __readfsqword(0x28u);
}

