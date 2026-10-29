unsigned __int64 __fastcall sub_2CA8B0(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r15
  bool v4; // zf
  __int64 *v5; // rbp
  unsigned __int64 v6; // r15
  _QWORD *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rsi
  __m128i v12; // xmm2
  __int64 v13; // rbx
  __int64 v14; // rsi
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rdi
  __m128i v18; // xmm1
  int v19; // edi
  int v20; // esi
  __int64 v21; // r13
  __int64 (__fastcall *v22)(__int64, __int64); // r8
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 i; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rdi
  bool v28; // cc
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 *v31; // r14
  unsigned __int64 v32; // rbp
  __int64 v33; // r12
  unsigned __int64 v34; // r14
  __int64 v35; // rbp
  unsigned __int64 v36; // r13
  __int64 v37; // rdi
  unsigned __int8 (*v38)(void); // rax
  __int64 v39; // rbx
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 (__fastcall *v43)(__int64, __int64); // r10
  __int64 v44; // rsi
  __int64 v45; // rcx
  __m128i v46; // xmm2
  __int64 v47; // rsi
  __m128i v48; // xmm1
  __int64 v49; // rdi
  __int64 v50; // rdi
  __m128i v51; // xmm2
  int v52; // edi
  int v53; // esi
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 (__fastcall *v57)(__int64, __int64); // r10
  __int64 v58; // rsi
  __int64 v59; // rcx
  __m128i v60; // xmm2
  __int64 v61; // rsi
  __m128i v62; // xmm1
  __int64 v63; // rdi
  __int64 v64; // rdi
  __m128i v65; // xmm2
  int v66; // edi
  int v67; // esi
  __int64 v68; // r15
  __int64 v69; // rbx
  __int64 (__fastcall *v70)(__int64, __int64); // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __m128i v73; // xmm1
  unsigned __int64 v74; // rax
  __m128i v75; // xmm2
  __int64 v76; // rdi
  __int64 v77; // rdi
  int v78; // esi
  int v79; // eax
  __int64 v80; // rdi
  unsigned __int8 (*v81)(void); // rax
  __m128i v83; // xmm0
  __int64 v84; // r14
  __int64 v85; // r13
  __int64 v86; // rsi
  __m128i v87; // xmm4
  __int64 v88; // rbx
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rdi
  __m128i v92; // xmm5
  int v93; // edi
  int v94; // esi
  __int64 v95; // r12
  __int64 (__fastcall *v96)(__int64, __int64); // r8
  __int64 *v97; // r14
  __int64 v98; // rbx
  __int64 v99; // r12
  _QWORD *v100; // r13
  __int64 v101; // rdi
  _QWORD *v102; // rbx
  __int64 *v103; // r14
  __int64 v104; // rbx
  __int64 *v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // r13
  __int64 v108; // rax
  __int64 (__fastcall *v109)(__int64, __int64); // r10
  __int64 v110; // rsi
  __int64 v111; // rdi
  __m128i v112; // xmm2
  __int64 v113; // r12
  __int64 *v114; // r10
  __int64 v115; // rdi
  __int64 v116; // rdi
  __m128i v117; // xmm1
  int v118; // r10d
  int v119; // edi
  __int64 v120; // rdi
  __int64 v121; // r12
  __int64 v122; // rbp
  __int64 v123; // rbx
  _QWORD *v124; // rax
  __int64 v125; // rdi
  __m128i v126; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v127; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v128; // [rsp+20h] [rbp-C8h] BYREF
  __int64 *v129; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v130; // [rsp+38h] [rbp-B0h]
  __m128i v131; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v132; // [rsp+50h] [rbp-98h]
  __int64 *v133; // [rsp+58h] [rbp-90h]
  __m128i v134; // [rsp+60h] [rbp-88h] BYREF
  __int64 *v135; // [rsp+70h] [rbp-78h]
  _QWORD *v136; // [rsp+78h] [rbp-70h]
  int v137; // [rsp+84h] [rbp-64h]
  __int64 *v138; // [rsp+88h] [rbp-60h]
  __int64 v139; // [rsp+90h] [rbp-58h] BYREF
  __int128 v140; // [rsp+98h] [rbp-50h]
  unsigned __int64 v141; // [rsp+A8h] [rbp-40h]

  v3 = a1;
  v4 = a1[14] == 0;
  v136 = a2;
  v137 = a3;
  v141 = __readfsqword(0x28u);
  v129 = (__int64 *)a1[12];
  if ( !v4 )
  {
    v83.m128i_i64[0] = 0;
    v139 = 0;
    v138 = &v139;
    v140 = 0;
    sub_2CA580(&v139, (unsigned __int64)v129);
    v4 = a1[1] == 0;
    v130 = 0;
    v131.m128i_i64[0] = (__int64)(a1 + 2);
    if ( !v4 )
    {
      do
      {
        switch_dbctx();
        v84 = *(_QWORD *)v131.m128i_i64[0];
        v126.m128i_i64[0] = *(_QWORD *)(v131.m128i_i64[0] + 8);
        v85 = v84 + (v126.m128i_i64[0] << 6);
        if ( v84 != v85 )
        {
          do
          {
            while ( 1 )
            {
              v95 = v139 + 56LL * *(_QWORD *)(v84 + 56);
              v96 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v95 + 8LL);
              if ( v96 == sub_2AEC00 )
                break;
              v96(v139 + 56LL * *(_QWORD *)(v84 + 56), v84);
              v84 += 64;
              if ( v85 == v84 )
                goto LABEL_72;
            }
            v86 = *(_QWORD *)(v95 + 8);
            *(_QWORD *)(v95 + 8) = *(_QWORD *)(v84 + 8);
            *(_QWORD *)(v84 + 8) = v86;
            v87 = _mm_loadu_si128((const __m128i *)(v95 + 24));
            v88 = *(_QWORD *)(v95 + 16);
            *(_OWORD *)(v95 + 24) = 0;
            *(_QWORD *)(v95 + 16) = 0;
            v89 = *(_QWORD *)(v84 + 16);
            v83 = _mm_loadu_si128((const __m128i *)(v84 + 24));
            *(_QWORD *)(v84 + 16) = 0;
            *(_OWORD *)(v84 + 24) = 0;
            v90 = *(_QWORD *)(v95 + 16);
            v126 = v87;
            if ( v90 )
            {
              *(_QWORD *)(v95 + 24) = 0;
              v127.m128i_i64[0] = v89;
              v128 = v83;
              qfree(v90);
              v83 = _mm_load_si128(&v128);
              v89 = v127.m128i_i64[0];
            }
            *(_QWORD *)(v95 + 16) = v89;
            *(__m128i *)(v95 + 24) = v83;
            v91 = *(_QWORD *)(v84 + 16);
            if ( v91 )
            {
              *(_QWORD *)(v84 + 24) = 0;
              qfree(v91);
            }
            v92 = _mm_load_si128(&v126);
            v93 = *(_DWORD *)(v84 + 48);
            *(_QWORD *)(v84 + 16) = v88;
            v84 += 64;
            *(__m128i *)(v84 - 40) = v92;
            v94 = *(_DWORD *)(v95 + 48);
            *(_DWORD *)(v95 + 48) = v93;
            *(_DWORD *)(v84 - 16) = v94;
          }
          while ( v85 != v84 );
LABEL_72:
          v85 = *(_QWORD *)v131.m128i_i64[0];
        }
        if ( v85 )
        {
          v97 = (__int64 *)v131.m128i_i64[0];
          if ( *(_QWORD *)(v131.m128i_i64[0] + 8) )
          {
            v98 = 0;
            v99 = *(_QWORD *)(v131.m128i_i64[0] + 8);
            do
            {
              v100 = (_QWORD *)((v98 << 6) + v85);
              v101 = v100[2];
              *v100 = off_4E13C0;
              if ( v101 )
              {
                v100[3] = 0;
                qfree(v101);
              }
              ++v98;
              v85 = *v97;
            }
            while ( v99 != v98 );
          }
          v102 = (_QWORD *)v131.m128i_i64[0];
          *(_QWORD *)(v131.m128i_i64[0] + 8) = 0;
          qfree(v85);
          *v102 = 0;
          v102[2] = 0;
        }
        v103 = v129;
        v104 = v136[v130];
        sub_2CA580((__int64 *)(v104 + 40), (unsigned __int64)v129 - v3[14]);
        if ( v103 )
        {
          v105 = nullptr;
          v106 = 0;
          v107 = 0;
          do
          {
            if ( *(_DWORD *)(v3[11] + 4 * v106) )
            {
              v108 = *(_QWORD *)(v104 + 40) + 56 * v107;
              v109 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v108 + 8LL);
              v110 = (__int64)v105 + v139;
              if ( v109 == sub_2AEC00 )
              {
                v111 = *(_QWORD *)(v108 + 8);
                *(_QWORD *)(v108 + 8) = *(_QWORD *)(v110 + 8);
                *(_QWORD *)(v110 + 8) = v111;
                v112 = _mm_loadu_si128((const __m128i *)(v108 + 24));
                v113 = *(_QWORD *)(v108 + 16);
                *(_OWORD *)(v108 + 24) = 0;
                *(_QWORD *)(v108 + 16) = 0;
                v114 = *(__int64 **)(v110 + 16);
                v83 = _mm_loadu_si128((const __m128i *)(v110 + 24));
                *(_QWORD *)(v110 + 16) = 0;
                *(_OWORD *)(v110 + 24) = 0;
                v115 = *(_QWORD *)(v108 + 16);
                v126 = v112;
                if ( v115 )
                {
                  *(_QWORD *)(v108 + 24) = 0;
                  v135 = v105;
                  v133 = v114;
                  v132 = v110;
                  v128.m128i_i64[0] = v106;
                  v127.m128i_i64[0] = v108;
                  v134 = v83;
                  qfree(v115);
                  v105 = v135;
                  v83 = _mm_load_si128(&v134);
                  v114 = v133;
                  v110 = v132;
                  v106 = v128.m128i_i64[0];
                  v108 = v127.m128i_i64[0];
                }
                *(_QWORD *)(v108 + 16) = v114;
                *(__m128i *)(v108 + 24) = v83;
                v116 = *(_QWORD *)(v110 + 16);
                if ( v116 )
                {
                  *(_QWORD *)(v110 + 24) = 0;
                  v133 = v105;
                  v132 = v108;
                  v128.m128i_i64[0] = v106;
                  v127.m128i_i64[0] = v110;
                  qfree(v116);
                  v105 = v133;
                  v108 = v132;
                  v106 = v128.m128i_i64[0];
                  v110 = v127.m128i_i64[0];
                }
                v117 = _mm_load_si128(&v126);
                v118 = *(_DWORD *)(v110 + 48);
                *(_QWORD *)(v110 + 16) = v113;
                *(__m128i *)(v110 + 24) = v117;
                v119 = *(_DWORD *)(v108 + 48);
                *(_DWORD *)(v108 + 48) = v118;
                *(_DWORD *)(v110 + 48) = v119;
              }
              else
              {
                v127.m128i_i64[0] = (__int64)v105;
                v126.m128i_i64[0] = v106;
                v109(v108, v110);
                v106 = v126.m128i_i64[0];
                v105 = (__int64 *)v127.m128i_i64[0];
              }
              ++v107;
            }
            ++v106;
            v105 += 7;
          }
          while ( (__int64 *)v106 != v129 );
        }
        else
        {
          v107 = 0;
        }
        if ( *(_QWORD *)(v104 + 48) != v107 )
        {
          if ( !under_debugger )
            sub_383060(0x7AAu, *(double *)v83.m128i_i64);
          BUG();
        }
        ++v130;
        v131.m128i_i64[0] += 24;
      }
      while ( v130 < v3[1] );
    }
    v120 = v139;
    if ( v139 )
    {
      v121 = v140;
      if ( (_QWORD)v140 )
      {
        v122 = 0;
        v123 = 0;
        do
        {
          v124 = (_QWORD *)(v120 + v122);
          v125 = *(_QWORD *)(v120 + v122 + 16);
          *v124 = off_4E13C0;
          if ( v125 )
          {
            v124[3] = 0;
            qfree(v125);
          }
          ++v123;
          v120 = v139;
          v122 += 56;
        }
        while ( v121 != v123 );
      }
      *(_QWORD *)&v140 = 0;
      qfree(v120);
    }
LABEL_23:
    if ( (_BYTE)v137 )
    {
      v28 = v3[1] <= 2u;
      v129 = nullptr;
      v29 = v136[1];
      v30 = *v136;
      v31 = (__int64 *)(*v136 + 40LL);
      v133 = (__int64 *)(v29 + 40);
      if ( !v28 )
      {
        v126.m128i_i64[0] = v136[2];
        v129 = (__int64 *)(v126.m128i_i64[0] + 40);
      }
      goto LABEL_26;
    }
    return v141 - __readfsqword(0x28u);
  }
  if ( a1[1] )
  {
    v130 = 0;
    v131.m128i_i64[0] = (__int64)a1;
    v5 = a1 + 2;
    do
    {
      v6 = v130;
      v7 = v136;
      switch_dbctx();
      v8 = v7[v6];
      sub_2CA580((__int64 *)(v8 + 40), (unsigned __int64)v129);
      v9 = *v5;
      v10 = *v5 + (v5[1] << 6);
      if ( *v5 != v10 )
      {
        do
        {
          while ( 1 )
          {
            v21 = *(_QWORD *)(v8 + 40) + 56LL * *(_QWORD *)(v9 + 56);
            v22 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 8LL);
            if ( v22 == sub_2AEC00 )
              break;
            v23 = v9;
            v9 += 64;
            v22(v21, v23);
            if ( v9 == v10 )
              goto LABEL_13;
          }
          v11 = *(_QWORD *)(v21 + 8);
          *(_QWORD *)(v21 + 8) = *(_QWORD *)(v9 + 8);
          *(_QWORD *)(v9 + 8) = v11;
          v12 = _mm_loadu_si128((const __m128i *)(v21 + 24));
          v13 = *(_QWORD *)(v21 + 16);
          *(_OWORD *)(v21 + 24) = 0;
          *(_QWORD *)(v21 + 16) = 0;
          v14 = *(_QWORD *)(v9 + 16);
          v15 = _mm_loadu_si128((const __m128i *)(v9 + 24));
          *(_QWORD *)(v9 + 16) = 0;
          *(_OWORD *)(v9 + 24) = 0;
          v16 = *(_QWORD *)(v21 + 16);
          v126 = v12;
          if ( v16 )
          {
            *(_QWORD *)(v21 + 24) = 0;
            v127.m128i_i64[0] = v14;
            v128 = v15;
            qfree(v16);
            v15 = _mm_load_si128(&v128);
            v14 = v127.m128i_i64[0];
          }
          *(_QWORD *)(v21 + 16) = v14;
          *(__m128i *)(v21 + 24) = v15;
          v17 = *(_QWORD *)(v9 + 16);
          if ( v17 )
          {
            *(_QWORD *)(v9 + 24) = 0;
            qfree(v17);
          }
          v18 = _mm_load_si128(&v126);
          v19 = *(_DWORD *)(v9 + 48);
          *(_QWORD *)(v9 + 16) = v13;
          v9 += 64;
          *(__m128i *)(v9 - 40) = v18;
          v20 = *(_DWORD *)(v21 + 48);
          *(_DWORD *)(v21 + 48) = v19;
          *(_DWORD *)(v9 - 16) = v20;
        }
        while ( v9 != v10 );
LABEL_13:
        v10 = *v5;
      }
      if ( v10 )
      {
        v24 = v5[1];
        if ( v24 )
        {
          for ( i = 0; i != v24; ++i )
          {
            v26 = (_QWORD *)(v10 + (i << 6));
            v27 = v26[2];
            *v26 = off_4E13C0;
            if ( v27 )
            {
              v26[3] = 0;
              qfree(v27);
            }
            v10 = *v5;
          }
        }
        v5[1] = 0;
        qfree(v10);
        *v5 = 0;
        v5[2] = 0;
      }
      ++v130;
      v5 += 3;
    }
    while ( v130 < *(_QWORD *)(v131.m128i_i64[0] + 8) );
    v3 = (_QWORD *)v131.m128i_i64[0];
    goto LABEL_23;
  }
  if ( !(_BYTE)v137 )
    return v141 - __readfsqword(0x28u);
  v129 = nullptr;
  v29 = v136[1];
  v30 = *v136;
  v31 = (__int64 *)(*v136 + 40LL);
  v133 = (__int64 *)(v29 + 40);
LABEL_26:
  v32 = *(_QWORD *)(v30 + 48);
  if ( !v32 )
    goto LABEL_58;
  v134.m128i_i64[0] = (__int64)v31;
  v33 = 0;
  v34 = 0;
  v126.m128i_i64[0] = v29;
  v35 = v30;
  v36 = 0;
  do
  {
    v80 = v33 + *(_QWORD *)(v35 + 40);
    v81 = **(unsigned __int8 (***)(void))v80;
    if ( (char *)v81 == (char *)sub_2AD170 )
    {
      if ( *(_QWORD *)(v80 + 8) != *(_QWORD *)(v80 + 40) )
        goto LABEL_31;
    }
    else if ( v81() )
    {
      goto LABEL_31;
    }
    v37 = v33 + *(_QWORD *)(v126.m128i_i64[0] + 40);
    v38 = **(unsigned __int8 (***)(void))v37;
    if ( (char *)v38 == (char *)sub_2AD170 )
    {
      if ( *(_QWORD *)(v37 + 8) == *(_QWORD *)(v37 + 40) )
        goto LABEL_52;
    }
    else if ( !v38() )
    {
      goto LABEL_52;
    }
LABEL_31:
    if ( v34 < v36 )
    {
      v39 = *(_QWORD *)(v35 + 40);
      v40 = 56 * v34;
      v41 = v39 + 56 * v34;
      v42 = v33 + v39;
      v43 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 8LL);
      if ( v43 == sub_2AEC00 )
      {
        v44 = *(_QWORD *)(v41 + 8);
        *(_QWORD *)(v41 + 8) = *(_QWORD *)(v42 + 8);
        *(_QWORD *)(v42 + 8) = v44;
        v45 = *(_QWORD *)(v41 + 16);
        v46 = _mm_loadu_si128((const __m128i *)(v41 + 24));
        *(_QWORD *)(v41 + 16) = 0;
        *(_OWORD *)(v41 + 24) = 0;
        v47 = *(_QWORD *)(v42 + 16);
        v48 = _mm_loadu_si128((const __m128i *)(v42 + 24));
        *(_QWORD *)(v42 + 16) = 0;
        *(_OWORD *)(v42 + 24) = 0;
        v49 = *(_QWORD *)(v41 + 16);
        v128.m128i_i64[0] = v45;
        v127 = v46;
        if ( v49 )
        {
          *(_QWORD *)(v41 + 24) = 0;
          v132 = v47;
          v130 = v41;
          v131 = v48;
          qfree(v49);
          v47 = v132;
          v48 = _mm_load_si128(&v131);
          v41 = v130;
        }
        *(_QWORD *)(v41 + 16) = v47;
        *(__m128i *)(v41 + 24) = v48;
        v50 = *(_QWORD *)(v42 + 16);
        if ( v50 )
        {
          *(_QWORD *)(v42 + 24) = 0;
          v130 = v41;
          qfree(v50);
          v41 = v130;
        }
        v51 = _mm_load_si128(&v127);
        v52 = *(_DWORD *)(v42 + 48);
        *(_QWORD *)(v42 + 16) = v128.m128i_i64[0];
        *(__m128i *)(v42 + 24) = v51;
        v53 = *(_DWORD *)(v41 + 48);
        *(_DWORD *)(v41 + 48) = v52;
        *(_DWORD *)(v42 + 48) = v53;
      }
      else
      {
        v43(v41, v42);
      }
      v54 = *(_QWORD *)(v126.m128i_i64[0] + 40);
      v55 = v54 + v40;
      v56 = v33 + v54;
      v57 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 8LL);
      if ( v57 == sub_2AEC00 )
      {
        v58 = *(_QWORD *)(v55 + 8);
        *(_QWORD *)(v55 + 8) = *(_QWORD *)(v56 + 8);
        *(_QWORD *)(v56 + 8) = v58;
        v59 = *(_QWORD *)(v55 + 16);
        v60 = _mm_loadu_si128((const __m128i *)(v55 + 24));
        *(_QWORD *)(v55 + 16) = 0;
        *(_OWORD *)(v55 + 24) = 0;
        v61 = *(_QWORD *)(v56 + 16);
        v62 = _mm_loadu_si128((const __m128i *)(v56 + 24));
        *(_QWORD *)(v56 + 16) = 0;
        *(_OWORD *)(v56 + 24) = 0;
        v63 = *(_QWORD *)(v55 + 16);
        v128.m128i_i64[0] = v59;
        v127 = v60;
        if ( v63 )
        {
          *(_QWORD *)(v55 + 24) = 0;
          v132 = v61;
          v130 = v55;
          v131 = v62;
          qfree(v63);
          v61 = v132;
          v62 = _mm_load_si128(&v131);
          v55 = v130;
        }
        *(_QWORD *)(v55 + 16) = v61;
        *(__m128i *)(v55 + 24) = v62;
        v64 = *(_QWORD *)(v56 + 16);
        if ( v64 )
        {
          *(_QWORD *)(v56 + 24) = 0;
          v130 = v55;
          qfree(v64);
          v55 = v130;
        }
        v65 = _mm_load_si128(&v127);
        v66 = *(_DWORD *)(v56 + 48);
        *(_QWORD *)(v56 + 16) = v128.m128i_i64[0];
        *(__m128i *)(v56 + 24) = v65;
        v67 = *(_DWORD *)(v55 + 48);
        *(_DWORD *)(v55 + 48) = v66;
        *(_DWORD *)(v56 + 48) = v67;
      }
      else
      {
        v57(v55, v56);
      }
      if ( v129 )
      {
        v68 = *v129 + v40;
        v69 = v33 + *v129;
        v70 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v68 + 8LL);
        if ( v70 == sub_2AEC00 )
        {
          v71 = *(_QWORD *)(v68 + 8);
          *(_QWORD *)(v68 + 8) = *(_QWORD *)(v69 + 8);
          *(_QWORD *)(v69 + 8) = v71;
          v72 = *(_QWORD *)(v68 + 16);
          v73 = _mm_loadu_si128((const __m128i *)(v68 + 24));
          *(_QWORD *)(v68 + 16) = 0;
          *(_OWORD *)(v68 + 24) = 0;
          v74 = *(_QWORD *)(v69 + 16);
          v75 = _mm_loadu_si128((const __m128i *)(v69 + 24));
          *(_QWORD *)(v69 + 16) = 0;
          *(_OWORD *)(v69 + 24) = 0;
          v76 = *(_QWORD *)(v68 + 16);
          if ( v76 )
          {
            *(_QWORD *)(v68 + 24) = 0;
            v130 = v74;
            v128.m128i_i64[0] = v72;
            v131 = v73;
            v127 = v75;
            qfree(v76);
            v73 = _mm_load_si128(&v131);
            v74 = v130;
            v72 = v128.m128i_i64[0];
            v75 = _mm_load_si128(&v127);
          }
          *(_QWORD *)(v68 + 16) = v74;
          *(__m128i *)(v68 + 24) = v75;
          v77 = *(_QWORD *)(v69 + 16);
          if ( v77 )
          {
            *(_QWORD *)(v69 + 24) = 0;
            v127.m128i_i64[0] = v72;
            v128 = v73;
            qfree(v77);
            v73 = _mm_load_si128(&v128);
            v72 = v127.m128i_i64[0];
          }
          *(_QWORD *)(v69 + 16) = v72;
          v78 = *(_DWORD *)(v69 + 48);
          *(__m128i *)(v69 + 24) = v73;
          v79 = *(_DWORD *)(v68 + 48);
          *(_DWORD *)(v68 + 48) = v78;
          *(_DWORD *)(v69 + 48) = v79;
        }
        else
        {
          v70(v68, v69);
        }
      }
    }
    ++v34;
LABEL_52:
    ++v36;
    v33 += 56;
  }
  while ( v36 < *(_QWORD *)(v35 + 48) );
  v32 = v34;
  v31 = (__int64 *)v134.m128i_i64[0];
LABEL_58:
  switch_dbctx();
  sub_2CA580(v31, v32);
  switch_dbctx();
  sub_2CA580(v133, v32);
  if ( !v129 )
    return v141 - __readfsqword(0x28u);
  switch_dbctx();
  return sub_2CA580(v129, v32);
}

