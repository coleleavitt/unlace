unsigned __int64 __fastcall sub_2C06D0(const __m128i *a1, _QWORD *a2, int a3)
{
  const __m128i *v3; // rbx
  bool v4; // zf
  __int64 *m128i_i64; // r15
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r14
  __int32 v14; // ecx
  __int64 v15; // rsi
  __m128i v16; // xmm7
  __int64 v17; // r12
  __int8 v18; // bp
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __int64 v21; // rdi
  __m128i v22; // xmm1
  __int32 v23; // esi
  __int32 v24; // ecx
  const __m128i *v25; // r13
  __int64 (__fastcall *v26)(const __m128i *, __int64); // rcx
  __int64 v27; // rsi
  __int64 v28; // r14
  __int64 i; // rbp
  _QWORD *v30; // rax
  __int64 v31; // rdi
  bool v32; // cc
  __int64 v33; // r12
  __int64 v34; // rdx
  unsigned __int64 v35; // r13
  __int64 v36; // rax
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // r12
  __int64 v39; // r14
  __int64 v40; // rsi
  const __m128i *v41; // rax
  __int64 *v42; // rsi
  __int64 (__fastcall *v43)(const __m128i *, __int64); // r10
  __int64 v44; // r10
  __int32 v45; // edi
  __int64 v46; // rdx
  __m128i v47; // xmm7
  __int64 v48; // r10
  __m128i v49; // xmm1
  __int64 v50; // rdi
  __m128i v51; // xmm7
  __int32 v52; // r10d
  __int8 v53; // dl
  __int32 v54; // edi
  __int64 v55; // rsi
  const __m128i *v56; // rax
  __int64 *v57; // rsi
  __int64 (__fastcall *v58)(const __m128i *, __int64); // r10
  __int64 v59; // r10
  __int32 v60; // edi
  __int64 v61; // rdx
  __m128i v62; // xmm7
  __int64 v63; // r10
  __m128i v64; // xmm1
  __int64 v65; // rdi
  __m128i v66; // xmm7
  __int32 v67; // r10d
  __int8 v68; // dl
  __int32 v69; // edi
  __int64 v70; // rdi
  __int64 v71; // r15
  unsigned __int8 (*v72)(void); // rax
  __int64 v73; // rdi
  bool (__fastcall *v74)(__int64); // rax
  __int64 v76; // r12
  __int64 v77; // r15
  __int64 v78; // rdi
  __int32 v79; // esi
  __m128i v80; // xmm3
  __int64 v81; // r14
  __int8 v82; // r13
  __int64 v83; // rsi
  __m128i v84; // xmm0
  __int64 v85; // rdi
  const __m128i *v86; // rax
  __m128i v87; // xmm4
  __int32 v88; // edi
  __int32 v89; // esi
  __int64 (__fastcall *v90)(const __m128i *, __int64); // r8
  __int64 *v91; // r12
  __int64 v92; // r14
  __int64 j; // r13
  _QWORD *v94; // rax
  __int64 v95; // rdi
  __int64 *v96; // r14
  __int64 *v97; // r15
  char *v98; // rsi
  __int64 *v99; // rdi
  __int64 *v100; // r14
  __int64 v101; // r13
  const __m128i *v102; // rax
  __int64 (__fastcall *v103)(const __m128i *, __int64); // r8
  __int64 v104; // rsi
  __int64 v105; // r8
  __int32 v106; // edi
  __m128i v107; // xmm7
  __int64 v108; // r15
  __int8 v109; // r12
  __int64 v110; // r8
  __m128i v111; // xmm0
  __int64 v112; // rdi
  __m128i v113; // xmm1
  __int32 v114; // r8d
  __int32 v115; // edi
  __int64 v116; // rax
  __int64 v117; // r12
  __int64 v118; // rbp
  _QWORD *v119; // rax
  __int64 v120; // rdi
  __m128i v121; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v122; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v123; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v124; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v125; // [rsp+40h] [rbp-A8h]
  __m128i *v126; // [rsp+48h] [rbp-A0h]
  __m128i v127; // [rsp+50h] [rbp-98h] BYREF
  __m128i v128; // [rsp+60h] [rbp-88h] BYREF
  const __m128i *v129; // [rsp+70h] [rbp-78h]
  _QWORD *v130; // [rsp+78h] [rbp-70h]
  __int64 *v131; // [rsp+80h] [rbp-68h]
  __int64 *v132; // [rsp+88h] [rbp-60h]
  __int64 v133; // [rsp+90h] [rbp-58h] BYREF
  __int128 v134; // [rsp+98h] [rbp-50h]
  unsigned __int64 v135; // [rsp+A8h] [rbp-40h]

  v3 = a1;
  v4 = a1[7].m128i_i64[0] == 0;
  v130 = a2;
  LODWORD(v131) = a3;
  v135 = __readfsqword(0x28u);
  v125 = (__int64 *)a1[6].m128i_i64[0];
  if ( v4 )
  {
    if ( !a1->m128i_i64[1] )
    {
      if ( !(_BYTE)v131 )
        return v135 - __readfsqword(0x28u);
      v125 = nullptr;
      v33 = *v130;
      v132 = (__int64 *)(*v130 + 40LL);
      v34 = v130[1];
      v131 = (__int64 *)(v34 + 40);
      goto LABEL_25;
    }
    m128i_i64 = a1[1].m128i_i64;
    v6 = 0;
    v7 = (__int64)a2;
    do
    {
      switch_dbctx();
      v8 = *(_QWORD *)(v7 + 8 * v6);
      sub_2C0310((__int64 *)(v8 + 40), (unsigned __int64)v125);
      v9 = *m128i_i64;
      v10 = *m128i_i64 + 88 * m128i_i64[1];
      if ( *m128i_i64 != v10 )
      {
        v126 = (__m128i *)m128i_i64;
        v11 = v8;
        v129 = v3;
        v12 = v9;
        v13 = v10;
        v124.m128i_i64[0] = v6;
        v127.m128i_i64[0] = v7;
        do
        {
          while ( 1 )
          {
            v25 = (const __m128i *)(*(_QWORD *)(v11 + 40) + 80LL * *(_QWORD *)(v12 + 80));
            v26 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v25->m128i_i64[0] + 8);
            if ( v26 == sub_2A9ED0 )
              break;
            v27 = v12;
            v12 += 88;
            v26(v25, v27);
            if ( v12 == v13 )
              goto LABEL_13;
          }
          v14 = v25[1].m128i_i32[0];
          v15 = v25->m128i_i64[1];
          *(const __m128i *)((char *)v25 + 8) = _mm_loadu_si128((const __m128i *)(v12 + 8));
          *(_DWORD *)(v12 + 16) = v14;
          *(_QWORD *)(v12 + 8) = v15;
          v16 = _mm_loadu_si128(v25 + 2);
          v17 = v25[1].m128i_i64[1];
          v25[2] = 0;
          v18 = v25[3].m128i_i8[0];
          v25[1].m128i_i64[1] = 0;
          v19 = *(_QWORD *)(v12 + 24);
          v20 = _mm_loadu_si128((const __m128i *)(v12 + 32));
          *(_QWORD *)(v12 + 24) = 0;
          *(_OWORD *)(v12 + 32) = 0;
          v21 = v25[1].m128i_i64[1];
          v121 = v16;
          if ( v21 )
          {
            v25[2].m128i_i64[0] = 0;
            v122.m128i_i64[0] = v19;
            v123 = v20;
            qfree();
            v20 = _mm_load_si128(&v123);
            v19 = v122.m128i_i64[0];
          }
          v25[1].m128i_i64[1] = v19;
          v25[2] = v20;
          v25[3].m128i_i8[0] = *(_BYTE *)(v12 + 48);
          if ( *(_QWORD *)(v12 + 24) )
          {
            *(_QWORD *)(v12 + 32) = 0;
            qfree();
          }
          v22 = _mm_load_si128(&v121);
          v23 = *(_DWORD *)(v12 + 72);
          *(_QWORD *)(v12 + 24) = v17;
          v12 += 88;
          *(_BYTE *)(v12 - 40) = v18;
          *(__m128i *)(v12 - 56) = v22;
          v24 = v25[4].m128i_i32[2];
          v25[4].m128i_i32[2] = v23;
          *(_DWORD *)(v12 - 16) = v24;
        }
        while ( v12 != v13 );
LABEL_13:
        m128i_i64 = (__int64 *)v126;
        v6 = v124.m128i_i64[0];
        v3 = v129;
        v7 = v127.m128i_i64[0];
        v10 = v126->m128i_i64[0];
      }
      if ( v10 )
      {
        v28 = m128i_i64[1];
        if ( v28 )
        {
          for ( i = 0; i != v28; ++i )
          {
            v30 = (_QWORD *)(v10 + 88 * i);
            v31 = v30[3];
            *v30 = off_4ADA58;
            if ( v31 )
            {
              v30[4] = 0;
              qfree();
            }
            v10 = *m128i_i64;
          }
        }
        m128i_i64[1] = 0;
        qfree();
        *m128i_i64 = 0;
        m128i_i64[2] = 0;
      }
      ++v6;
      m128i_i64 += 3;
    }
    while ( v6 < v3->m128i_i64[1] );
    goto LABEL_22;
  }
  v133 = 0;
  v132 = &v133;
  v134 = 0;
  sub_2C0310(&v133, (unsigned __int64)v125);
  v4 = a1->m128i_i64[1] == 0;
  v126 = nullptr;
  v129 = a1 + 1;
  if ( !v4 )
  {
    do
    {
      switch_dbctx();
      v76 = v129->m128i_i64[0];
      v77 = v129->m128i_i64[0] + 88 * v129->m128i_i64[1];
      if ( v129->m128i_i64[0] != v77 )
      {
        do
        {
          while ( 1 )
          {
            v86 = (const __m128i *)(v133 + 80LL * *(_QWORD *)(v76 + 80));
            v90 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v86->m128i_i64[0] + 8);
            if ( v90 == sub_2A9ED0 )
              break;
            v90((const __m128i *)(v133 + 80LL * *(_QWORD *)(v76 + 80)), v76);
            v76 += 88;
            if ( v77 == v76 )
              goto LABEL_69;
          }
          v78 = v86->m128i_i64[1];
          v79 = v86[1].m128i_i32[0];
          *(const __m128i *)((char *)v86 + 8) = _mm_loadu_si128((const __m128i *)(v76 + 8));
          *(_DWORD *)(v76 + 16) = v79;
          *(_QWORD *)(v76 + 8) = v78;
          v80 = _mm_loadu_si128(v86 + 2);
          v81 = v86[1].m128i_i64[1];
          v86[2] = 0;
          v82 = v86[3].m128i_i8[0];
          v86[1].m128i_i64[1] = 0;
          v83 = *(_QWORD *)(v76 + 24);
          v84 = _mm_loadu_si128((const __m128i *)(v76 + 32));
          *(_OWORD *)(v76 + 32) = 0;
          *(_QWORD *)(v76 + 24) = 0;
          v85 = v86[1].m128i_i64[1];
          v121 = v80;
          if ( v85 )
          {
            v86[2].m128i_i64[0] = 0;
            v123.m128i_i64[0] = v83;
            v122.m128i_i64[0] = (__int64)v86;
            v124 = v84;
            qfree();
            v84 = _mm_load_si128(&v124);
            v83 = v123.m128i_i64[0];
            v86 = (const __m128i *)v122.m128i_i64[0];
          }
          v86[1].m128i_i64[1] = v83;
          v86[2] = v84;
          v86[3].m128i_i8[0] = *(_BYTE *)(v76 + 48);
          if ( *(_QWORD *)(v76 + 24) )
          {
            *(_QWORD *)(v76 + 32) = 0;
            v122.m128i_i64[0] = (__int64)v86;
            qfree();
            v86 = (const __m128i *)v122.m128i_i64[0];
          }
          v87 = _mm_load_si128(&v121);
          *(_QWORD *)(v76 + 24) = v81;
          v76 += 88;
          *(_BYTE *)(v76 - 40) = v82;
          v88 = *(_DWORD *)(v76 - 16);
          *(__m128i *)(v76 - 56) = v87;
          v89 = v86[4].m128i_i32[2];
          v86[4].m128i_i32[2] = v88;
          *(_DWORD *)(v76 - 16) = v89;
        }
        while ( v77 != v76 );
LABEL_69:
        v77 = v129->m128i_i64[0];
      }
      if ( v77 )
      {
        v91 = (__int64 *)v129;
        v92 = v129->m128i_i64[1];
        if ( v92 )
        {
          for ( j = 0; j != v92; ++j )
          {
            v94 = (_QWORD *)(v77 + 88 * j);
            v95 = v94[3];
            *v94 = off_4ADA58;
            if ( v95 )
            {
              v94[4] = 0;
              qfree();
            }
            v77 = *v91;
          }
        }
        v96 = (__int64 *)v129;
        v129->m128i_i64[1] = 0;
        qfree();
        *v96 = 0;
        v96[2] = 0;
      }
      v97 = v125;
      v98 = (char *)v125 - v3[7].m128i_i64[0];
      v99 = (__int64 *)(v130[(_QWORD)v126] + 40LL);
      v122.m128i_i64[0] = v130[(_QWORD)v126];
      sub_2C0310(v99, (unsigned __int64)v98);
      if ( v97 )
      {
        v100 = nullptr;
        v101 = 0;
        do
        {
          if ( *(_DWORD *)(v3[5].m128i_i64[1] + 4LL * (_QWORD)v100) )
          {
            v102 = (const __m128i *)(*(_QWORD *)(v122.m128i_i64[0] + 40) + 80 * v101);
            v103 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v102->m128i_i64[0] + 8);
            v104 = v133 + 80LL * (_QWORD)v100;
            if ( v103 == sub_2A9ED0 )
            {
              v105 = v102->m128i_i64[1];
              v106 = v102[1].m128i_i32[0];
              *(const __m128i *)((char *)v102 + 8) = _mm_loadu_si128((const __m128i *)(v104 + 8));
              *(_QWORD *)(v104 + 8) = v105;
              *(_DWORD *)(v104 + 16) = v106;
              v107 = _mm_loadu_si128(v102 + 2);
              v108 = v102[1].m128i_i64[1];
              v102[2] = 0;
              v109 = v102[3].m128i_i8[0];
              v102[1].m128i_i64[1] = 0;
              v110 = *(_QWORD *)(v104 + 24);
              v111 = _mm_loadu_si128((const __m128i *)(v104 + 32));
              *(_QWORD *)(v104 + 24) = 0;
              *(_OWORD *)(v104 + 32) = 0;
              v112 = v102[1].m128i_i64[1];
              v121 = v107;
              if ( v112 )
              {
                v102[2].m128i_i64[0] = 0;
                v127.m128i_i64[0] = v110;
                v124.m128i_i64[0] = v104;
                v123.m128i_i64[0] = (__int64)v102;
                v128 = v111;
                qfree();
                v111 = _mm_load_si128(&v128);
                v110 = v127.m128i_i64[0];
                v104 = v124.m128i_i64[0];
                v102 = (const __m128i *)v123.m128i_i64[0];
              }
              v102[1].m128i_i64[1] = v110;
              v102[2] = v111;
              v102[3].m128i_i8[0] = *(_BYTE *)(v104 + 48);
              if ( *(_QWORD *)(v104 + 24) )
              {
                *(_QWORD *)(v104 + 32) = 0;
                v124.m128i_i64[0] = (__int64)v102;
                v123.m128i_i64[0] = v104;
                qfree();
                v102 = (const __m128i *)v124.m128i_i64[0];
                v104 = v123.m128i_i64[0];
              }
              v113 = _mm_load_si128(&v121);
              v114 = *(_DWORD *)(v104 + 72);
              *(_QWORD *)(v104 + 24) = v108;
              *(_BYTE *)(v104 + 48) = v109;
              *(__m128i *)(v104 + 32) = v113;
              v115 = v102[4].m128i_i32[2];
              v102[4].m128i_i32[2] = v114;
              *(_DWORD *)(v104 + 72) = v115;
            }
            else
            {
              v103((const __m128i *)(*(_QWORD *)(v122.m128i_i64[0] + 40) + 80 * v101), v104);
            }
            ++v101;
          }
          v100 = (__int64 *)((char *)v100 + 1);
        }
        while ( v100 != v125 );
      }
      else
      {
        v101 = 0;
      }
      if ( *(_QWORD *)(v122.m128i_i64[0] + 48) != v101 )
      {
        if ( !under_debugger )
          sub_37B760(1962);
        BUG();
      }
      v126 = (__m128i *)((char *)v126 + 1);
      v129 = (const __m128i *)((char *)v129 + 24);
    }
    while ( (unsigned __int64)v126 < v3->m128i_i64[1] );
  }
  v116 = v133;
  if ( !v133 )
  {
LABEL_22:
    if ( !(_BYTE)v131 )
      return v135 - __readfsqword(0x28u);
    goto LABEL_23;
  }
  v117 = v134;
  if ( (_QWORD)v134 )
  {
    v118 = 0;
    do
    {
      v119 = (_QWORD *)(80 * v118 + v116);
      v120 = v119[3];
      *v119 = off_4ADA58;
      if ( v120 )
      {
        v119[4] = 0;
        qfree();
      }
      ++v118;
      v116 = v133;
    }
    while ( v117 != v118 );
  }
  *(_QWORD *)&v134 = 0;
  qfree();
  if ( !(_BYTE)v131 )
    return v135 - __readfsqword(0x28u);
LABEL_23:
  v32 = v3->m128i_i64[1] <= 2uLL;
  v125 = nullptr;
  v33 = *v130;
  v132 = (__int64 *)(*v130 + 40LL);
  v34 = v130[1];
  v131 = (__int64 *)(v34 + 40);
  if ( !v32 )
  {
    v121.m128i_i64[0] = v130[2];
    v125 = (__int64 *)(v121.m128i_i64[0] + 40);
  }
LABEL_25:
  v35 = *(_QWORD *)(v33 + 48);
  if ( !v35 )
    goto LABEL_52;
  v36 = v33;
  v37 = 0;
  v121.m128i_i64[0] = v34;
  v38 = 0;
  v39 = v36;
  do
  {
    while ( 1 )
    {
      v70 = 80 * v37 + *(_QWORD *)(v39 + 40);
      v71 = 80 * v37;
      v72 = **(unsigned __int8 (***)(void))v70;
      if ( (char *)v72 == (char *)sub_2A5D80 )
      {
        if ( *(_QWORD *)(v70 + 8) != *(_QWORD *)(v70 + 56) || *(_DWORD *)(v70 + 16) != *(_DWORD *)(v70 + 64) )
        {
LABEL_27:
          if ( v38 < v37 )
          {
            v40 = *(_QWORD *)(v39 + 40);
            v41 = (const __m128i *)(v40 + 80 * v38);
            v42 = (__int64 *)(v71 + v40);
            v43 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v41->m128i_i64[0] + 8);
            if ( v43 == sub_2A9ED0 )
            {
              v44 = v41->m128i_i64[1];
              v45 = v41[1].m128i_i32[0];
              *(const __m128i *)((char *)v41 + 8) = _mm_loadu_si128((const __m128i *)(v42 + 1));
              v42[1] = v44;
              *((_DWORD *)v42 + 4) = v45;
              v46 = v41[1].m128i_i64[1];
              v47 = _mm_loadu_si128(v41 + 2);
              v41[1].m128i_i64[1] = 0;
              v41[2] = 0;
              v48 = v42[3];
              v49 = _mm_loadu_si128((const __m128i *)v42 + 2);
              v123.m128i_i64[0] = v46;
              LOBYTE(v46) = v41[3].m128i_i8[0];
              v42[3] = 0;
              *((_OWORD *)v42 + 2) = 0;
              v50 = v41[1].m128i_i64[1];
              v124.m128i_i8[0] = v46;
              v122 = v47;
              if ( v50 )
              {
                v41[2].m128i_i64[0] = 0;
                v128.m128i_i64[0] = v48;
                v129 = (const __m128i *)v42;
                v126 = (__m128i *)v41;
                v127 = v49;
                qfree();
                v48 = v128.m128i_i64[0];
                v49 = _mm_load_si128(&v127);
                v42 = (__int64 *)v129;
                v41 = v126;
              }
              v41[1].m128i_i64[1] = v48;
              v41[2] = v49;
              v41[3].m128i_i8[0] = *((_BYTE *)v42 + 48);
              if ( v42[3] )
              {
                v42[4] = 0;
                v129 = v41;
                v126 = (__m128i *)v42;
                qfree();
                v41 = v129;
                v42 = (__int64 *)v126;
              }
              v51 = _mm_load_si128(&v122);
              v52 = *((_DWORD *)v42 + 18);
              v42[3] = v123.m128i_i64[0];
              v53 = v124.m128i_i8[0];
              *((__m128i *)v42 + 2) = v51;
              *((_BYTE *)v42 + 48) = v53;
              v54 = v41[4].m128i_i32[2];
              v41[4].m128i_i32[2] = v52;
              *((_DWORD *)v42 + 18) = v54;
            }
            else
            {
              v43(v41, (__int64)v42);
            }
            v55 = *(_QWORD *)(v121.m128i_i64[0] + 40);
            v56 = (const __m128i *)(v55 + 80 * v38);
            v57 = (__int64 *)(v71 + v55);
            v58 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v56->m128i_i64[0] + 8);
            if ( v58 == sub_2A9ED0 )
            {
              v59 = v56->m128i_i64[1];
              v60 = v56[1].m128i_i32[0];
              *(const __m128i *)((char *)v56 + 8) = _mm_loadu_si128((const __m128i *)(v57 + 1));
              v57[1] = v59;
              *((_DWORD *)v57 + 4) = v60;
              v61 = v56[1].m128i_i64[1];
              v62 = _mm_loadu_si128(v56 + 2);
              v56[1].m128i_i64[1] = 0;
              v56[2] = 0;
              v63 = v57[3];
              v64 = _mm_loadu_si128((const __m128i *)v57 + 2);
              v123.m128i_i64[0] = v61;
              LOBYTE(v61) = v56[3].m128i_i8[0];
              v57[3] = 0;
              *((_OWORD *)v57 + 2) = 0;
              v65 = v56[1].m128i_i64[1];
              v124.m128i_i8[0] = v61;
              v122 = v62;
              if ( v65 )
              {
                v56[2].m128i_i64[0] = 0;
                v128.m128i_i64[0] = v63;
                v129 = (const __m128i *)v57;
                v126 = (__m128i *)v56;
                v127 = v64;
                qfree();
                v63 = v128.m128i_i64[0];
                v64 = _mm_load_si128(&v127);
                v57 = (__int64 *)v129;
                v56 = v126;
              }
              v56[1].m128i_i64[1] = v63;
              v56[2] = v64;
              v56[3].m128i_i8[0] = *((_BYTE *)v57 + 48);
              if ( v57[3] )
              {
                v57[4] = 0;
                v129 = v56;
                v126 = (__m128i *)v57;
                qfree();
                v56 = v129;
                v57 = (__int64 *)v126;
              }
              v66 = _mm_load_si128(&v122);
              v67 = *((_DWORD *)v57 + 18);
              v57[3] = v123.m128i_i64[0];
              v68 = v124.m128i_i8[0];
              *((__m128i *)v57 + 2) = v66;
              *((_BYTE *)v57 + 48) = v68;
              v69 = v56[4].m128i_i32[2];
              v56[4].m128i_i32[2] = v67;
              *((_DWORD *)v57 + 18) = v69;
            }
            else
            {
              v58(v56, (__int64)v57);
            }
            if ( v125 )
              (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(*v125 + 80 * v38) + 8LL))(
                *v125 + 80 * v38,
                v71 + *v125);
          }
          ++v38;
          goto LABEL_43;
        }
      }
      else if ( v72() )
      {
        goto LABEL_27;
      }
      v73 = v71 + *(_QWORD *)(v121.m128i_i64[0] + 40);
      v74 = **(bool (__fastcall ***)(__int64))v73;
      if ( v74 == sub_2A5D80 )
        break;
      if ( ((unsigned __int8 (*)(void))v74)() )
        goto LABEL_27;
LABEL_43:
      if ( ++v37 >= *(_QWORD *)(v39 + 48) )
        goto LABEL_51;
    }
    if ( *(_QWORD *)(v73 + 8) != *(_QWORD *)(v73 + 56) || *(_DWORD *)(v73 + 16) != *(_DWORD *)(v73 + 64) )
      goto LABEL_27;
    ++v37;
  }
  while ( v37 < *(_QWORD *)(v39 + 48) );
LABEL_51:
  v35 = v38;
LABEL_52:
  switch_dbctx();
  sub_2C0310(v132, v35);
  switch_dbctx();
  sub_2C0310(v131, v35);
  if ( v125 )
  {
    switch_dbctx();
    return sub_2C0310(v125, v35);
  }
  return v135 - __readfsqword(0x28u);
}

