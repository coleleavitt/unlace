unsigned __int64 __fastcall sub_2C50F0(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r14
  bool v4; // zf
  __int64 *v5; // rbp
  unsigned __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  int v11; // esi
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
  __int64 j; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rdi
  bool v27; // cc
  __int64 v28; // r15
  __int64 v29; // rdx
  unsigned __int64 v30; // rbp
  __int64 v31; // r14
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // r15
  __int64 v34; // rdi
  unsigned __int8 (*v35)(void); // rax
  __int64 v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 (__fastcall *v40)(__int64, __int64); // r9
  int v41; // edi
  __int64 v42; // rcx
  __m128i v43; // xmm2
  __int64 v44; // r9
  __m128i v45; // xmm1
  __int64 v46; // rdi
  __m128i v47; // xmm2
  int v48; // r9d
  int v49; // edi
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 (__fastcall *v53)(__int64, __int64); // r9
  int v54; // edi
  __int64 v55; // rcx
  __m128i v56; // xmm2
  __int64 v57; // r9
  __m128i v58; // xmm1
  __int64 v59; // rdi
  __m128i v60; // xmm2
  int v61; // r9d
  int v62; // edi
  __int64 v63; // rbx
  __int64 v64; // rbp
  __int64 (__fastcall *v65)(__int64, __int64); // rax
  int v66; // eax
  __int64 v67; // rax
  __m128i v68; // xmm1
  unsigned __int64 v69; // rdx
  __m128i v70; // xmm2
  int v71; // edx
  int v72; // eax
  __int64 v73; // rdi
  __int64 v74; // rbp
  unsigned __int8 (*v75)(void); // rax
  __int64 v77; // rbp
  __int64 v78; // r15
  int v79; // edx
  __m128i v80; // xmm4
  __int64 v81; // r12
  __int64 v82; // rdx
  __m128i v83; // xmm0
  __int64 v84; // rdi
  __m128i v85; // xmm5
  int v86; // esi
  int v87; // edx
  __int64 v88; // r13
  __int64 (__fastcall *v89)(__int64, __int64); // rdx
  __int64 *v90; // rbp
  __int64 v91; // r13
  __int64 i; // r12
  _QWORD *v93; // rax
  __int64 v94; // rdi
  _QWORD *v95; // rbp
  __int64 *v96; // rbp
  __int64 v97; // r15
  __int64 *v98; // r12
  __int64 v99; // r13
  __int64 v100; // rax
  __int64 (__fastcall *v101)(__int64, __int64); // r8
  __int64 v102; // rsi
  int v103; // edi
  __m128i v104; // xmm2
  __int64 v105; // rbp
  __int64 v106; // r8
  __m128i v107; // xmm0
  __int64 v108; // rdi
  __m128i v109; // xmm1
  int v110; // r8d
  int v111; // edi
  __int64 v112; // rax
  __int64 v113; // rbp
  __int64 v114; // rbx
  _QWORD *v115; // rax
  __int64 v116; // rdi
  __m128i v117; // [rsp+0h] [rbp-E8h] BYREF
  __int64 *v118; // [rsp+18h] [rbp-D0h]
  __m128i v119; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v120; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v121; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v122; // [rsp+50h] [rbp-98h] BYREF
  __m128i v123; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v124; // [rsp+70h] [rbp-78h]
  _QWORD *v125; // [rsp+78h] [rbp-70h]
  __int64 *v126; // [rsp+80h] [rbp-68h]
  __int64 *v127; // [rsp+88h] [rbp-60h]
  __int64 v128; // [rsp+90h] [rbp-58h] BYREF
  __int128 v129; // [rsp+98h] [rbp-50h]
  unsigned __int64 v130; // [rsp+A8h] [rbp-40h]

  v3 = a1;
  v4 = a1[14] == 0;
  v125 = a2;
  LODWORD(v126) = a3;
  v130 = __readfsqword(0x28u);
  v118 = (__int64 *)a1[12];
  if ( !v4 )
  {
    v128 = 0;
    v127 = &v128;
    v129 = 0;
    sub_2C4D60(&v128, (unsigned __int64)v118);
    v4 = a1[1] == 0;
    v124 = 0;
    v121.m128i_i64[0] = (__int64)(a1 + 2);
    if ( !v4 )
    {
      do
      {
        switch_dbctx();
        v77 = *(_QWORD *)v121.m128i_i64[0];
        v78 = *(_QWORD *)v121.m128i_i64[0] + 56LL * *(_QWORD *)(v121.m128i_i64[0] + 8);
        if ( *(_QWORD *)v121.m128i_i64[0] != v78 )
        {
          do
          {
            while ( 1 )
            {
              v88 = v128 + 48LL * *(_QWORD *)(v77 + 48);
              v89 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v88 + 8LL);
              if ( v89 == sub_2AB990 )
                break;
              v89(v128 + 48LL * *(_QWORD *)(v77 + 48), v77);
              v77 += 56;
              if ( v78 == v77 )
                goto LABEL_72;
            }
            v79 = *(_DWORD *)(v88 + 8);
            *(_DWORD *)(v88 + 8) = *(_DWORD *)(v77 + 8);
            *(_DWORD *)(v77 + 8) = v79;
            v80 = _mm_loadu_si128((const __m128i *)(v88 + 24));
            v81 = *(_QWORD *)(v88 + 16);
            *(_OWORD *)(v88 + 24) = 0;
            *(_QWORD *)(v88 + 16) = 0;
            v82 = *(_QWORD *)(v77 + 16);
            v83 = _mm_loadu_si128((const __m128i *)(v77 + 24));
            *(_QWORD *)(v77 + 16) = 0;
            *(_OWORD *)(v77 + 24) = 0;
            v84 = *(_QWORD *)(v88 + 16);
            v117 = v80;
            if ( v84 )
            {
              *(_QWORD *)(v88 + 24) = 0;
              v119.m128i_i64[0] = v82;
              v120 = v83;
              qfree();
              v83 = _mm_load_si128(&v120);
              v82 = v119.m128i_i64[0];
            }
            *(_QWORD *)(v88 + 16) = v82;
            *(__m128i *)(v88 + 24) = v83;
            if ( *(_QWORD *)(v77 + 16) )
            {
              *(_QWORD *)(v77 + 24) = 0;
              qfree();
            }
            v85 = _mm_load_si128(&v117);
            v86 = *(_DWORD *)(v77 + 44);
            *(_QWORD *)(v77 + 16) = v81;
            v77 += 56;
            *(__m128i *)(v77 - 32) = v85;
            v87 = *(_DWORD *)(v88 + 44);
            *(_DWORD *)(v88 + 44) = v86;
            *(_DWORD *)(v77 - 12) = v87;
          }
          while ( v78 != v77 );
LABEL_72:
          v78 = *(_QWORD *)v121.m128i_i64[0];
        }
        if ( v78 )
        {
          v90 = (__int64 *)v121.m128i_i64[0];
          v91 = *(_QWORD *)(v121.m128i_i64[0] + 8);
          if ( v91 )
          {
            for ( i = 0; i != v91; ++i )
            {
              v93 = (_QWORD *)(v78 + 56 * i);
              v94 = v93[2];
              *v93 = off_4C1AB0;
              if ( v94 )
              {
                v93[3] = 0;
                qfree();
              }
              v78 = *v90;
            }
          }
          v95 = (_QWORD *)v121.m128i_i64[0];
          *(_QWORD *)(v121.m128i_i64[0] + 8) = 0;
          qfree();
          *v95 = 0;
          v95[2] = 0;
        }
        v96 = v118;
        v97 = v125[v124];
        sub_2C4D60((__int64 *)(v97 + 40), (unsigned __int64)v118 - v3[14]);
        if ( v96 )
        {
          v98 = nullptr;
          v99 = 0;
          do
          {
            if ( *(_DWORD *)(v3[11] + 4LL * (_QWORD)v98) )
            {
              v100 = *(_QWORD *)(v97 + 40) + 48 * v99;
              v101 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v100 + 8LL);
              v102 = v128 + 48LL * (_QWORD)v98;
              if ( v101 == sub_2AB990 )
              {
                v103 = *(_DWORD *)(v100 + 8);
                *(_DWORD *)(v100 + 8) = *(_DWORD *)(v102 + 8);
                *(_DWORD *)(v102 + 8) = v103;
                v104 = _mm_loadu_si128((const __m128i *)(v100 + 24));
                v105 = *(_QWORD *)(v100 + 16);
                *(_OWORD *)(v100 + 24) = 0;
                *(_QWORD *)(v100 + 16) = 0;
                v106 = *(_QWORD *)(v102 + 16);
                v107 = _mm_loadu_si128((const __m128i *)(v102 + 24));
                *(_QWORD *)(v102 + 16) = 0;
                *(_OWORD *)(v102 + 24) = 0;
                v108 = *(_QWORD *)(v100 + 16);
                v117 = v104;
                if ( v108 )
                {
                  *(_QWORD *)(v100 + 24) = 0;
                  v122.m128i_i64[0] = v106;
                  v120.m128i_i64[0] = v102;
                  v119.m128i_i64[0] = v100;
                  v123 = v107;
                  qfree();
                  v107 = _mm_load_si128(&v123);
                  v106 = v122.m128i_i64[0];
                  v102 = v120.m128i_i64[0];
                  v100 = v119.m128i_i64[0];
                }
                *(_QWORD *)(v100 + 16) = v106;
                *(__m128i *)(v100 + 24) = v107;
                if ( *(_QWORD *)(v102 + 16) )
                {
                  *(_QWORD *)(v102 + 24) = 0;
                  v120.m128i_i64[0] = v100;
                  v119.m128i_i64[0] = v102;
                  qfree();
                  v100 = v120.m128i_i64[0];
                  v102 = v119.m128i_i64[0];
                }
                v109 = _mm_load_si128(&v117);
                v110 = *(_DWORD *)(v102 + 44);
                *(_QWORD *)(v102 + 16) = v105;
                *(__m128i *)(v102 + 24) = v109;
                v111 = *(_DWORD *)(v100 + 44);
                *(_DWORD *)(v100 + 44) = v110;
                *(_DWORD *)(v102 + 44) = v111;
              }
              else
              {
                v101(*(_QWORD *)(v97 + 40) + 48 * v99, v102);
              }
              ++v99;
            }
            v98 = (__int64 *)((char *)v98 + 1);
          }
          while ( v98 != v118 );
        }
        else
        {
          v99 = 0;
        }
        if ( *(_QWORD *)(v97 + 48) != v99 )
        {
          if ( !under_debugger )
            sub_37E160(1962);
          BUG();
        }
        ++v124;
        v121.m128i_i64[0] += 24;
      }
      while ( v124 < v3[1] );
    }
    v112 = v128;
    if ( v128 )
    {
      v113 = v129;
      if ( (_QWORD)v129 )
      {
        v114 = 0;
        do
        {
          v115 = (_QWORD *)(48 * v114 + v112);
          v116 = v115[2];
          *v115 = off_4C1AB0;
          if ( v116 )
          {
            v115[3] = 0;
            qfree();
          }
          ++v114;
          v112 = v128;
        }
        while ( v113 != v114 );
      }
      *(_QWORD *)&v129 = 0;
      qfree();
    }
LABEL_23:
    if ( (_BYTE)v126 )
    {
      v27 = v3[1] <= 2u;
      v118 = nullptr;
      v28 = *v125;
      v29 = v125[1];
      v126 = (__int64 *)(*v125 + 40LL);
      v127 = (__int64 *)(v29 + 40);
      if ( !v27 )
      {
        v117.m128i_i64[0] = v125[2];
        v118 = (__int64 *)(v117.m128i_i64[0] + 40);
      }
      goto LABEL_26;
    }
    return v130 - __readfsqword(0x28u);
  }
  if ( a1[1] )
  {
    v124 = 0;
    v5 = a1 + 2;
    v121.m128i_i64[0] = (__int64)a1;
    do
    {
      v6 = v124;
      v7 = v125;
      switch_dbctx();
      v8 = v7[v6];
      sub_2C4D60((__int64 *)(v8 + 40), (unsigned __int64)v118);
      v9 = *v5;
      v10 = *v5 + 56 * v5[1];
      if ( *v5 != v10 )
      {
        do
        {
          while ( 1 )
          {
            v20 = *(_QWORD *)(v8 + 40) + 48LL * *(_QWORD *)(v9 + 48);
            v21 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 8LL);
            if ( v21 == sub_2AB990 )
              break;
            v22 = v9;
            v9 += 56;
            v21(v20, v22);
            if ( v9 == v10 )
              goto LABEL_13;
          }
          v11 = *(_DWORD *)(v20 + 8);
          *(_DWORD *)(v20 + 8) = *(_DWORD *)(v9 + 8);
          *(_DWORD *)(v9 + 8) = v11;
          v12 = _mm_loadu_si128((const __m128i *)(v20 + 24));
          v13 = *(_QWORD *)(v20 + 16);
          *(_OWORD *)(v20 + 24) = 0;
          *(_QWORD *)(v20 + 16) = 0;
          v14 = *(_QWORD *)(v9 + 16);
          v15 = _mm_loadu_si128((const __m128i *)(v9 + 24));
          *(_QWORD *)(v9 + 16) = 0;
          *(_OWORD *)(v9 + 24) = 0;
          v16 = *(_QWORD *)(v20 + 16);
          v117 = v12;
          if ( v16 )
          {
            *(_QWORD *)(v20 + 24) = 0;
            v119.m128i_i64[0] = v14;
            v120 = v15;
            qfree();
            v15 = _mm_load_si128(&v120);
            v14 = v119.m128i_i64[0];
          }
          *(_QWORD *)(v20 + 16) = v14;
          *(__m128i *)(v20 + 24) = v15;
          if ( *(_QWORD *)(v9 + 16) )
          {
            *(_QWORD *)(v9 + 24) = 0;
            qfree();
          }
          v17 = _mm_load_si128(&v117);
          v18 = *(_DWORD *)(v9 + 44);
          *(_QWORD *)(v9 + 16) = v13;
          v9 += 56;
          *(__m128i *)(v9 - 32) = v17;
          v19 = *(_DWORD *)(v20 + 44);
          *(_DWORD *)(v20 + 44) = v18;
          *(_DWORD *)(v9 - 12) = v19;
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
          for ( j = 0; j != v23; ++j )
          {
            v25 = (_QWORD *)(v10 + 56 * j);
            v26 = v25[2];
            *v25 = off_4C1AB0;
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
    while ( v124 < *(_QWORD *)(v121.m128i_i64[0] + 8) );
    v3 = (_QWORD *)v121.m128i_i64[0];
    goto LABEL_23;
  }
  if ( !(_BYTE)v126 )
    return v130 - __readfsqword(0x28u);
  v118 = nullptr;
  v28 = *v125;
  v29 = v125[1];
  v126 = (__int64 *)(*v125 + 40LL);
  v127 = (__int64 *)(v29 + 40);
LABEL_26:
  v30 = *(_QWORD *)(v28 + 48);
  if ( !v30 )
    goto LABEL_58;
  v31 = v28;
  v117.m128i_i64[0] = v29;
  v32 = 0;
  v33 = 0;
  do
  {
    v73 = 48 * v32 + *(_QWORD *)(v31 + 40);
    v74 = 48 * v32;
    v75 = **(unsigned __int8 (***)(void))v73;
    if ( (char *)v75 == (char *)sub_2A88E0 )
    {
      if ( *(_DWORD *)(v73 + 8) != *(_DWORD *)(v73 + 40) )
        goto LABEL_31;
    }
    else if ( v75() )
    {
      goto LABEL_31;
    }
    v34 = v74 + *(_QWORD *)(v117.m128i_i64[0] + 40);
    v35 = **(unsigned __int8 (***)(void))v34;
    if ( (char *)v35 == (char *)sub_2A88E0 )
    {
      if ( *(_DWORD *)(v34 + 8) == *(_DWORD *)(v34 + 40) )
        goto LABEL_52;
    }
    else if ( !v35() )
    {
      goto LABEL_52;
    }
LABEL_31:
    if ( v33 < v32 )
    {
      v36 = *(_QWORD *)(v31 + 40);
      v37 = 48 * v33;
      v38 = v36 + 48 * v33;
      v39 = v74 + v36;
      v40 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 8LL);
      if ( v40 == sub_2AB990 )
      {
        v41 = *(_DWORD *)(v38 + 8);
        *(_DWORD *)(v38 + 8) = *(_DWORD *)(v39 + 8);
        *(_DWORD *)(v39 + 8) = v41;
        v42 = *(_QWORD *)(v38 + 16);
        v43 = _mm_loadu_si128((const __m128i *)(v38 + 24));
        *(_QWORD *)(v38 + 16) = 0;
        *(_OWORD *)(v38 + 24) = 0;
        v44 = *(_QWORD *)(v39 + 16);
        v45 = _mm_loadu_si128((const __m128i *)(v39 + 24));
        *(_QWORD *)(v39 + 16) = 0;
        *(_OWORD *)(v39 + 24) = 0;
        v46 = *(_QWORD *)(v38 + 16);
        v120.m128i_i64[0] = v42;
        v119 = v43;
        if ( v46 )
        {
          *(_QWORD *)(v38 + 24) = 0;
          v123.m128i_i64[0] = v44;
          v121.m128i_i64[0] = v39;
          v124 = v38;
          v122 = v45;
          qfree();
          v44 = v123.m128i_i64[0];
          v45 = _mm_load_si128(&v122);
          v39 = v121.m128i_i64[0];
          v38 = v124;
        }
        *(_QWORD *)(v38 + 16) = v44;
        *(__m128i *)(v38 + 24) = v45;
        if ( *(_QWORD *)(v39 + 16) )
        {
          *(_QWORD *)(v39 + 24) = 0;
          v121.m128i_i64[0] = v38;
          v124 = v39;
          qfree();
          v38 = v121.m128i_i64[0];
          v39 = v124;
        }
        v47 = _mm_load_si128(&v119);
        v48 = *(_DWORD *)(v39 + 44);
        *(_QWORD *)(v39 + 16) = v120.m128i_i64[0];
        *(__m128i *)(v39 + 24) = v47;
        v49 = *(_DWORD *)(v38 + 44);
        *(_DWORD *)(v38 + 44) = v48;
        *(_DWORD *)(v39 + 44) = v49;
      }
      else
      {
        v40(v38, v39);
      }
      v50 = *(_QWORD *)(v117.m128i_i64[0] + 40);
      v51 = v50 + v37;
      v52 = v74 + v50;
      v53 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 8LL);
      if ( v53 == sub_2AB990 )
      {
        v54 = *(_DWORD *)(v51 + 8);
        *(_DWORD *)(v51 + 8) = *(_DWORD *)(v52 + 8);
        *(_DWORD *)(v52 + 8) = v54;
        v55 = *(_QWORD *)(v51 + 16);
        v56 = _mm_loadu_si128((const __m128i *)(v51 + 24));
        *(_QWORD *)(v51 + 16) = 0;
        *(_OWORD *)(v51 + 24) = 0;
        v57 = *(_QWORD *)(v52 + 16);
        v58 = _mm_loadu_si128((const __m128i *)(v52 + 24));
        *(_QWORD *)(v52 + 16) = 0;
        *(_OWORD *)(v52 + 24) = 0;
        v59 = *(_QWORD *)(v51 + 16);
        v120.m128i_i64[0] = v55;
        v119 = v56;
        if ( v59 )
        {
          *(_QWORD *)(v51 + 24) = 0;
          v123.m128i_i64[0] = v57;
          v122.m128i_i64[0] = v52;
          v124 = v51;
          v121 = v58;
          qfree();
          v57 = v123.m128i_i64[0];
          v52 = v122.m128i_i64[0];
          v58 = _mm_load_si128(&v121);
          v51 = v124;
        }
        *(_QWORD *)(v51 + 16) = v57;
        *(__m128i *)(v51 + 24) = v58;
        if ( *(_QWORD *)(v52 + 16) )
        {
          *(_QWORD *)(v52 + 24) = 0;
          v121.m128i_i64[0] = v51;
          v124 = v52;
          qfree();
          v51 = v121.m128i_i64[0];
          v52 = v124;
        }
        v60 = _mm_load_si128(&v119);
        v61 = *(_DWORD *)(v52 + 44);
        *(_QWORD *)(v52 + 16) = v120.m128i_i64[0];
        *(__m128i *)(v52 + 24) = v60;
        v62 = *(_DWORD *)(v51 + 44);
        *(_DWORD *)(v51 + 44) = v61;
        *(_DWORD *)(v52 + 44) = v62;
      }
      else
      {
        v53(v51, v52);
      }
      if ( v118 )
      {
        v63 = *v118 + v37;
        v64 = *v118 + v74;
        v65 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v63 + 8LL);
        if ( v65 == sub_2AB990 )
        {
          v66 = *(_DWORD *)(v63 + 8);
          *(_DWORD *)(v63 + 8) = *(_DWORD *)(v64 + 8);
          *(_DWORD *)(v64 + 8) = v66;
          v67 = *(_QWORD *)(v63 + 16);
          v68 = _mm_loadu_si128((const __m128i *)(v63 + 24));
          *(_QWORD *)(v63 + 16) = 0;
          *(_OWORD *)(v63 + 24) = 0;
          v69 = *(_QWORD *)(v64 + 16);
          v70 = _mm_loadu_si128((const __m128i *)(v64 + 24));
          *(_QWORD *)(v64 + 16) = 0;
          *(_OWORD *)(v64 + 24) = 0;
          if ( *(_QWORD *)(v63 + 16) )
          {
            *(_QWORD *)(v63 + 24) = 0;
            v124 = v69;
            v120.m128i_i64[0] = v67;
            v121 = v68;
            v119 = v70;
            qfree();
            v68 = _mm_load_si128(&v121);
            v69 = v124;
            v67 = v120.m128i_i64[0];
            v70 = _mm_load_si128(&v119);
          }
          *(_QWORD *)(v63 + 16) = v69;
          *(__m128i *)(v63 + 24) = v70;
          if ( *(_QWORD *)(v64 + 16) )
          {
            *(_QWORD *)(v64 + 24) = 0;
            v119.m128i_i64[0] = v67;
            v120 = v68;
            qfree();
            v68 = _mm_load_si128(&v120);
            v67 = v119.m128i_i64[0];
          }
          *(_QWORD *)(v64 + 16) = v67;
          v71 = *(_DWORD *)(v64 + 44);
          *(__m128i *)(v64 + 24) = v68;
          v72 = *(_DWORD *)(v63 + 44);
          *(_DWORD *)(v63 + 44) = v71;
          *(_DWORD *)(v64 + 44) = v72;
        }
        else
        {
          v65(v63, v64);
        }
      }
    }
    ++v33;
LABEL_52:
    ++v32;
  }
  while ( v32 < *(_QWORD *)(v31 + 48) );
  v30 = v33;
LABEL_58:
  switch_dbctx();
  sub_2C4D60(v126, v30);
  switch_dbctx();
  sub_2C4D60(v127, v30);
  if ( !v118 )
    return v130 - __readfsqword(0x28u);
  switch_dbctx();
  return sub_2C4D60(v118, v30);
}

