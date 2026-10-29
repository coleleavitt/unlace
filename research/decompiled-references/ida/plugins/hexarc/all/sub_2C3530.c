unsigned __int64 __fastcall sub_2C3530(_QWORD *a1, _QWORD *a2, int a3)
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
  __m128i v17; // xmm1
  int v18; // edi
  int v19; // esi
  __int64 v20; // r13
  __int64 (__fastcall *v21)(__int64, __int64); // r8
  __int64 v22; // rsi
  __int64 v23; // r12
  __int64 i; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rdi
  bool v27; // cc
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 *v30; // r14
  unsigned __int64 v31; // rbp
  __int64 v32; // r12
  unsigned __int64 v33; // r14
  __int64 v34; // rbp
  unsigned __int64 v35; // r13
  __int64 v36; // rdi
  unsigned __int8 (*v37)(void); // rax
  __int64 v38; // rbx
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(__int64, __int64); // r10
  __int64 v43; // rsi
  __int64 v44; // rcx
  __m128i v45; // xmm2
  __int64 v46; // rsi
  __m128i v47; // xmm1
  __int64 v48; // rdi
  __m128i v49; // xmm2
  int v50; // edi
  int v51; // esi
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 (__fastcall *v55)(__int64, __int64); // r10
  __int64 v56; // rsi
  __int64 v57; // rcx
  __m128i v58; // xmm2
  __int64 v59; // rsi
  __m128i v60; // xmm1
  __int64 v61; // rdi
  __m128i v62; // xmm2
  int v63; // edi
  int v64; // esi
  __int64 v65; // r15
  __int64 v66; // rbx
  __int64 (__fastcall *v67)(__int64, __int64); // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __m128i v70; // xmm1
  unsigned __int64 v71; // rax
  __m128i v72; // xmm2
  int v73; // esi
  int v74; // eax
  __int64 v75; // rdi
  unsigned __int8 (*v76)(void); // rax
  __int64 v78; // r14
  __int64 v79; // r13
  __int64 v80; // rsi
  __m128i v81; // xmm4
  __int64 v82; // rbx
  __int64 v83; // rsi
  __m128i v84; // xmm0
  __int64 v85; // rdi
  __m128i v86; // xmm5
  int v87; // edi
  int v88; // esi
  __int64 v89; // r12
  __int64 (__fastcall *v90)(__int64, __int64); // r8
  __int64 *v91; // r14
  __int64 v92; // rbx
  __int64 v93; // r12
  _QWORD *v94; // r13
  __int64 v95; // rdi
  _QWORD *v96; // rbx
  __int64 *v97; // r14
  __int64 v98; // rbx
  __int64 *v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // r13
  __int64 v102; // rax
  __int64 (__fastcall *v103)(__int64, __int64); // r10
  __int64 v104; // rsi
  __int64 v105; // rdi
  __m128i v106; // xmm2
  __int64 v107; // r12
  __int64 *v108; // r10
  __m128i v109; // xmm0
  __int64 v110; // rdi
  __m128i v111; // xmm1
  int v112; // r10d
  int v113; // edi
  __int64 v114; // rdi
  __int64 v115; // r12
  __int64 v116; // rbp
  __int64 v117; // rbx
  _QWORD *v118; // rax
  __int64 v119; // rdi
  __m128i v120; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v121; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v122; // [rsp+20h] [rbp-C8h] BYREF
  __int64 *v123; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v124; // [rsp+38h] [rbp-B0h]
  __m128i v125; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v126; // [rsp+50h] [rbp-98h]
  __int64 *v127; // [rsp+58h] [rbp-90h]
  __m128i v128; // [rsp+60h] [rbp-88h] BYREF
  __int64 *v129; // [rsp+70h] [rbp-78h]
  _QWORD *v130; // [rsp+78h] [rbp-70h]
  int v131; // [rsp+84h] [rbp-64h]
  __int64 *v132; // [rsp+88h] [rbp-60h]
  __int64 v133; // [rsp+90h] [rbp-58h] BYREF
  __int128 v134; // [rsp+98h] [rbp-50h]
  unsigned __int64 v135; // [rsp+A8h] [rbp-40h]

  v3 = a1;
  v4 = a1[14] == 0;
  v130 = a2;
  v131 = a3;
  v135 = __readfsqword(0x28u);
  v123 = (__int64 *)a1[12];
  if ( !v4 )
  {
    v133 = 0;
    v132 = &v133;
    v134 = 0;
    sub_2C3200(&v133, (unsigned __int64)v123);
    v4 = a1[1] == 0;
    v124 = 0;
    v125.m128i_i64[0] = (__int64)(a1 + 2);
    if ( !v4 )
    {
      do
      {
        switch_dbctx();
        v78 = *(_QWORD *)v125.m128i_i64[0];
        v120.m128i_i64[0] = *(_QWORD *)(v125.m128i_i64[0] + 8);
        v79 = v78 + (v120.m128i_i64[0] << 6);
        if ( v78 != v79 )
        {
          do
          {
            while ( 1 )
            {
              v89 = v133 + 56LL * *(_QWORD *)(v78 + 56);
              v90 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v89 + 8LL);
              if ( v90 == sub_2A7880 )
                break;
              v90(v133 + 56LL * *(_QWORD *)(v78 + 56), v78);
              v78 += 64;
              if ( v79 == v78 )
                goto LABEL_72;
            }
            v80 = *(_QWORD *)(v89 + 8);
            *(_QWORD *)(v89 + 8) = *(_QWORD *)(v78 + 8);
            *(_QWORD *)(v78 + 8) = v80;
            v81 = _mm_loadu_si128((const __m128i *)(v89 + 24));
            v82 = *(_QWORD *)(v89 + 16);
            *(_OWORD *)(v89 + 24) = 0;
            *(_QWORD *)(v89 + 16) = 0;
            v83 = *(_QWORD *)(v78 + 16);
            v84 = _mm_loadu_si128((const __m128i *)(v78 + 24));
            *(_QWORD *)(v78 + 16) = 0;
            *(_OWORD *)(v78 + 24) = 0;
            v85 = *(_QWORD *)(v89 + 16);
            v120 = v81;
            if ( v85 )
            {
              *(_QWORD *)(v89 + 24) = 0;
              v121.m128i_i64[0] = v83;
              v122 = v84;
              qfree();
              v84 = _mm_load_si128(&v122);
              v83 = v121.m128i_i64[0];
            }
            *(_QWORD *)(v89 + 16) = v83;
            *(__m128i *)(v89 + 24) = v84;
            if ( *(_QWORD *)(v78 + 16) )
            {
              *(_QWORD *)(v78 + 24) = 0;
              qfree();
            }
            v86 = _mm_load_si128(&v120);
            v87 = *(_DWORD *)(v78 + 48);
            *(_QWORD *)(v78 + 16) = v82;
            v78 += 64;
            *(__m128i *)(v78 - 40) = v86;
            v88 = *(_DWORD *)(v89 + 48);
            *(_DWORD *)(v89 + 48) = v87;
            *(_DWORD *)(v78 - 16) = v88;
          }
          while ( v79 != v78 );
LABEL_72:
          v79 = *(_QWORD *)v125.m128i_i64[0];
        }
        if ( v79 )
        {
          v91 = (__int64 *)v125.m128i_i64[0];
          if ( *(_QWORD *)(v125.m128i_i64[0] + 8) )
          {
            v92 = 0;
            v93 = *(_QWORD *)(v125.m128i_i64[0] + 8);
            do
            {
              v94 = (_QWORD *)((v92 << 6) + v79);
              v95 = v94[2];
              *v94 = off_4ADBC0;
              if ( v95 )
              {
                v94[3] = 0;
                qfree();
              }
              ++v92;
              v79 = *v91;
            }
            while ( v93 != v92 );
          }
          v96 = (_QWORD *)v125.m128i_i64[0];
          *(_QWORD *)(v125.m128i_i64[0] + 8) = 0;
          qfree();
          *v96 = 0;
          v96[2] = 0;
        }
        v97 = v123;
        v98 = v130[v124];
        sub_2C3200((__int64 *)(v98 + 40), (unsigned __int64)v123 - v3[14]);
        if ( v97 )
        {
          v99 = nullptr;
          v100 = 0;
          v101 = 0;
          do
          {
            if ( *(_DWORD *)(v3[11] + 4 * v100) )
            {
              v102 = *(_QWORD *)(v98 + 40) + 56 * v101;
              v103 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v102 + 8LL);
              v104 = (__int64)v99 + v133;
              if ( v103 == sub_2A7880 )
              {
                v105 = *(_QWORD *)(v102 + 8);
                *(_QWORD *)(v102 + 8) = *(_QWORD *)(v104 + 8);
                *(_QWORD *)(v104 + 8) = v105;
                v106 = _mm_loadu_si128((const __m128i *)(v102 + 24));
                v107 = *(_QWORD *)(v102 + 16);
                *(_OWORD *)(v102 + 24) = 0;
                *(_QWORD *)(v102 + 16) = 0;
                v108 = *(__int64 **)(v104 + 16);
                v109 = _mm_loadu_si128((const __m128i *)(v104 + 24));
                *(_QWORD *)(v104 + 16) = 0;
                *(_OWORD *)(v104 + 24) = 0;
                v110 = *(_QWORD *)(v102 + 16);
                v120 = v106;
                if ( v110 )
                {
                  *(_QWORD *)(v102 + 24) = 0;
                  v129 = v99;
                  v127 = v108;
                  v126 = v104;
                  v122.m128i_i64[0] = v100;
                  v121.m128i_i64[0] = v102;
                  v128 = v109;
                  qfree();
                  v99 = v129;
                  v109 = _mm_load_si128(&v128);
                  v108 = v127;
                  v104 = v126;
                  v100 = v122.m128i_i64[0];
                  v102 = v121.m128i_i64[0];
                }
                *(_QWORD *)(v102 + 16) = v108;
                *(__m128i *)(v102 + 24) = v109;
                if ( *(_QWORD *)(v104 + 16) )
                {
                  *(_QWORD *)(v104 + 24) = 0;
                  v127 = v99;
                  v126 = v102;
                  v122.m128i_i64[0] = v100;
                  v121.m128i_i64[0] = v104;
                  qfree();
                  v99 = v127;
                  v102 = v126;
                  v100 = v122.m128i_i64[0];
                  v104 = v121.m128i_i64[0];
                }
                v111 = _mm_load_si128(&v120);
                v112 = *(_DWORD *)(v104 + 48);
                *(_QWORD *)(v104 + 16) = v107;
                *(__m128i *)(v104 + 24) = v111;
                v113 = *(_DWORD *)(v102 + 48);
                *(_DWORD *)(v102 + 48) = v112;
                *(_DWORD *)(v104 + 48) = v113;
              }
              else
              {
                v121.m128i_i64[0] = (__int64)v99;
                v120.m128i_i64[0] = v100;
                v103(v102, v104);
                v100 = v120.m128i_i64[0];
                v99 = (__int64 *)v121.m128i_i64[0];
              }
              ++v101;
            }
            ++v100;
            v99 += 7;
          }
          while ( (__int64 *)v100 != v123 );
        }
        else
        {
          v101 = 0;
        }
        if ( *(_QWORD *)(v98 + 48) != v101 )
        {
          if ( !under_debugger )
            sub_37B760(1962);
          BUG();
        }
        ++v124;
        v125.m128i_i64[0] += 24;
      }
      while ( v124 < v3[1] );
    }
    v114 = v133;
    if ( v133 )
    {
      v115 = v134;
      if ( (_QWORD)v134 )
      {
        v116 = 0;
        v117 = 0;
        do
        {
          v118 = (_QWORD *)(v114 + v116);
          v119 = *(_QWORD *)(v114 + v116 + 16);
          *v118 = off_4ADBC0;
          if ( v119 )
          {
            v118[3] = 0;
            qfree();
          }
          ++v117;
          v114 = v133;
          v116 += 56;
        }
        while ( v115 != v117 );
      }
      *(_QWORD *)&v134 = 0;
      qfree();
    }
LABEL_23:
    if ( (_BYTE)v131 )
    {
      v27 = v3[1] <= 2u;
      v123 = nullptr;
      v28 = v130[1];
      v29 = *v130;
      v30 = (__int64 *)(*v130 + 40LL);
      v127 = (__int64 *)(v28 + 40);
      if ( !v27 )
      {
        v120.m128i_i64[0] = v130[2];
        v123 = (__int64 *)(v120.m128i_i64[0] + 40);
      }
      goto LABEL_26;
    }
    return v135 - __readfsqword(0x28u);
  }
  if ( a1[1] )
  {
    v124 = 0;
    v125.m128i_i64[0] = (__int64)a1;
    v5 = a1 + 2;
    do
    {
      v6 = v124;
      v7 = v130;
      switch_dbctx();
      v8 = v7[v6];
      sub_2C3200((__int64 *)(v8 + 40), (unsigned __int64)v123);
      v9 = *v5;
      v10 = *v5 + (v5[1] << 6);
      if ( *v5 != v10 )
      {
        do
        {
          while ( 1 )
          {
            v20 = *(_QWORD *)(v8 + 40) + 56LL * *(_QWORD *)(v9 + 56);
            v21 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 8LL);
            if ( v21 == sub_2A7880 )
              break;
            v22 = v9;
            v9 += 64;
            v21(v20, v22);
            if ( v9 == v10 )
              goto LABEL_13;
          }
          v11 = *(_QWORD *)(v20 + 8);
          *(_QWORD *)(v20 + 8) = *(_QWORD *)(v9 + 8);
          *(_QWORD *)(v9 + 8) = v11;
          v12 = _mm_loadu_si128((const __m128i *)(v20 + 24));
          v13 = *(_QWORD *)(v20 + 16);
          *(_OWORD *)(v20 + 24) = 0;
          *(_QWORD *)(v20 + 16) = 0;
          v14 = *(_QWORD *)(v9 + 16);
          v15 = _mm_loadu_si128((const __m128i *)(v9 + 24));
          *(_QWORD *)(v9 + 16) = 0;
          *(_OWORD *)(v9 + 24) = 0;
          v16 = *(_QWORD *)(v20 + 16);
          v120 = v12;
          if ( v16 )
          {
            *(_QWORD *)(v20 + 24) = 0;
            v121.m128i_i64[0] = v14;
            v122 = v15;
            qfree();
            v15 = _mm_load_si128(&v122);
            v14 = v121.m128i_i64[0];
          }
          *(_QWORD *)(v20 + 16) = v14;
          *(__m128i *)(v20 + 24) = v15;
          if ( *(_QWORD *)(v9 + 16) )
          {
            *(_QWORD *)(v9 + 24) = 0;
            qfree();
          }
          v17 = _mm_load_si128(&v120);
          v18 = *(_DWORD *)(v9 + 48);
          *(_QWORD *)(v9 + 16) = v13;
          v9 += 64;
          *(__m128i *)(v9 - 40) = v17;
          v19 = *(_DWORD *)(v20 + 48);
          *(_DWORD *)(v20 + 48) = v18;
          *(_DWORD *)(v9 - 16) = v19;
        }
        while ( v9 != v10 );
LABEL_13:
        v10 = *v5;
      }
      if ( v10 )
      {
        v23 = v5[1];
        if ( v23 )
        {
          for ( i = 0; i != v23; ++i )
          {
            v25 = (_QWORD *)(v10 + (i << 6));
            v26 = v25[2];
            *v25 = off_4ADBC0;
            if ( v26 )
            {
              v25[3] = 0;
              qfree();
            }
            v10 = *v5;
          }
        }
        v5[1] = 0;
        qfree();
        *v5 = 0;
        v5[2] = 0;
      }
      ++v124;
      v5 += 3;
    }
    while ( v124 < *(_QWORD *)(v125.m128i_i64[0] + 8) );
    v3 = (_QWORD *)v125.m128i_i64[0];
    goto LABEL_23;
  }
  if ( !(_BYTE)v131 )
    return v135 - __readfsqword(0x28u);
  v123 = nullptr;
  v28 = v130[1];
  v29 = *v130;
  v30 = (__int64 *)(*v130 + 40LL);
  v127 = (__int64 *)(v28 + 40);
LABEL_26:
  v31 = *(_QWORD *)(v29 + 48);
  if ( !v31 )
    goto LABEL_58;
  v128.m128i_i64[0] = (__int64)v30;
  v32 = 0;
  v33 = 0;
  v120.m128i_i64[0] = v28;
  v34 = v29;
  v35 = 0;
  do
  {
    v75 = v32 + *(_QWORD *)(v34 + 40);
    v76 = **(unsigned __int8 (***)(void))v75;
    if ( (char *)v76 == (char *)sub_2A5DF0 )
    {
      if ( *(_QWORD *)(v75 + 8) != *(_QWORD *)(v75 + 40) )
        goto LABEL_31;
    }
    else if ( v76() )
    {
      goto LABEL_31;
    }
    v36 = v32 + *(_QWORD *)(v120.m128i_i64[0] + 40);
    v37 = **(unsigned __int8 (***)(void))v36;
    if ( (char *)v37 == (char *)sub_2A5DF0 )
    {
      if ( *(_QWORD *)(v36 + 8) == *(_QWORD *)(v36 + 40) )
        goto LABEL_52;
    }
    else if ( !v37() )
    {
      goto LABEL_52;
    }
LABEL_31:
    if ( v33 < v35 )
    {
      v38 = *(_QWORD *)(v34 + 40);
      v39 = 56 * v33;
      v40 = v38 + 56 * v33;
      v41 = v32 + v38;
      v42 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 8LL);
      if ( v42 == sub_2A7880 )
      {
        v43 = *(_QWORD *)(v40 + 8);
        *(_QWORD *)(v40 + 8) = *(_QWORD *)(v41 + 8);
        *(_QWORD *)(v41 + 8) = v43;
        v44 = *(_QWORD *)(v40 + 16);
        v45 = _mm_loadu_si128((const __m128i *)(v40 + 24));
        *(_QWORD *)(v40 + 16) = 0;
        *(_OWORD *)(v40 + 24) = 0;
        v46 = *(_QWORD *)(v41 + 16);
        v47 = _mm_loadu_si128((const __m128i *)(v41 + 24));
        *(_QWORD *)(v41 + 16) = 0;
        *(_OWORD *)(v41 + 24) = 0;
        v48 = *(_QWORD *)(v40 + 16);
        v122.m128i_i64[0] = v44;
        v121 = v45;
        if ( v48 )
        {
          *(_QWORD *)(v40 + 24) = 0;
          v126 = v46;
          v124 = v40;
          v125 = v47;
          qfree();
          v46 = v126;
          v47 = _mm_load_si128(&v125);
          v40 = v124;
        }
        *(_QWORD *)(v40 + 16) = v46;
        *(__m128i *)(v40 + 24) = v47;
        if ( *(_QWORD *)(v41 + 16) )
        {
          *(_QWORD *)(v41 + 24) = 0;
          v124 = v40;
          qfree();
          v40 = v124;
        }
        v49 = _mm_load_si128(&v121);
        v50 = *(_DWORD *)(v41 + 48);
        *(_QWORD *)(v41 + 16) = v122.m128i_i64[0];
        *(__m128i *)(v41 + 24) = v49;
        v51 = *(_DWORD *)(v40 + 48);
        *(_DWORD *)(v40 + 48) = v50;
        *(_DWORD *)(v41 + 48) = v51;
      }
      else
      {
        v42(v40, v41);
      }
      v52 = *(_QWORD *)(v120.m128i_i64[0] + 40);
      v53 = v52 + v39;
      v54 = v32 + v52;
      v55 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 8LL);
      if ( v55 == sub_2A7880 )
      {
        v56 = *(_QWORD *)(v53 + 8);
        *(_QWORD *)(v53 + 8) = *(_QWORD *)(v54 + 8);
        *(_QWORD *)(v54 + 8) = v56;
        v57 = *(_QWORD *)(v53 + 16);
        v58 = _mm_loadu_si128((const __m128i *)(v53 + 24));
        *(_QWORD *)(v53 + 16) = 0;
        *(_OWORD *)(v53 + 24) = 0;
        v59 = *(_QWORD *)(v54 + 16);
        v60 = _mm_loadu_si128((const __m128i *)(v54 + 24));
        *(_QWORD *)(v54 + 16) = 0;
        *(_OWORD *)(v54 + 24) = 0;
        v61 = *(_QWORD *)(v53 + 16);
        v122.m128i_i64[0] = v57;
        v121 = v58;
        if ( v61 )
        {
          *(_QWORD *)(v53 + 24) = 0;
          v126 = v59;
          v124 = v53;
          v125 = v60;
          qfree();
          v59 = v126;
          v60 = _mm_load_si128(&v125);
          v53 = v124;
        }
        *(_QWORD *)(v53 + 16) = v59;
        *(__m128i *)(v53 + 24) = v60;
        if ( *(_QWORD *)(v54 + 16) )
        {
          *(_QWORD *)(v54 + 24) = 0;
          v124 = v53;
          qfree();
          v53 = v124;
        }
        v62 = _mm_load_si128(&v121);
        v63 = *(_DWORD *)(v54 + 48);
        *(_QWORD *)(v54 + 16) = v122.m128i_i64[0];
        *(__m128i *)(v54 + 24) = v62;
        v64 = *(_DWORD *)(v53 + 48);
        *(_DWORD *)(v53 + 48) = v63;
        *(_DWORD *)(v54 + 48) = v64;
      }
      else
      {
        v55(v53, v54);
      }
      if ( v123 )
      {
        v65 = *v123 + v39;
        v66 = v32 + *v123;
        v67 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 8LL);
        if ( v67 == sub_2A7880 )
        {
          v68 = *(_QWORD *)(v65 + 8);
          *(_QWORD *)(v65 + 8) = *(_QWORD *)(v66 + 8);
          *(_QWORD *)(v66 + 8) = v68;
          v69 = *(_QWORD *)(v65 + 16);
          v70 = _mm_loadu_si128((const __m128i *)(v65 + 24));
          *(_QWORD *)(v65 + 16) = 0;
          *(_OWORD *)(v65 + 24) = 0;
          v71 = *(_QWORD *)(v66 + 16);
          v72 = _mm_loadu_si128((const __m128i *)(v66 + 24));
          *(_QWORD *)(v66 + 16) = 0;
          *(_OWORD *)(v66 + 24) = 0;
          if ( *(_QWORD *)(v65 + 16) )
          {
            *(_QWORD *)(v65 + 24) = 0;
            v124 = v71;
            v122.m128i_i64[0] = v69;
            v125 = v70;
            v121 = v72;
            qfree();
            v70 = _mm_load_si128(&v125);
            v71 = v124;
            v69 = v122.m128i_i64[0];
            v72 = _mm_load_si128(&v121);
          }
          *(_QWORD *)(v65 + 16) = v71;
          *(__m128i *)(v65 + 24) = v72;
          if ( *(_QWORD *)(v66 + 16) )
          {
            *(_QWORD *)(v66 + 24) = 0;
            v121.m128i_i64[0] = v69;
            v122 = v70;
            qfree();
            v70 = _mm_load_si128(&v122);
            v69 = v121.m128i_i64[0];
          }
          *(_QWORD *)(v66 + 16) = v69;
          v73 = *(_DWORD *)(v66 + 48);
          *(__m128i *)(v66 + 24) = v70;
          v74 = *(_DWORD *)(v65 + 48);
          *(_DWORD *)(v65 + 48) = v73;
          *(_DWORD *)(v66 + 48) = v74;
        }
        else
        {
          v67(v65, v66);
        }
      }
    }
    ++v33;
LABEL_52:
    ++v35;
    v32 += 56;
  }
  while ( v35 < *(_QWORD *)(v34 + 48) );
  v31 = v33;
  v30 = (__int64 *)v128.m128i_i64[0];
LABEL_58:
  switch_dbctx();
  sub_2C3200(v30, v31);
  switch_dbctx();
  sub_2C3200(v127, v31);
  if ( !v123 )
    return v135 - __readfsqword(0x28u);
  switch_dbctx();
  return sub_2C3200(v123, v31);
}

