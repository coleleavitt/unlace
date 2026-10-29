__int64 __fastcall sub_1A9240(__int64 a1, __m128i *a2, double a3, __m128 a4)
{
  __m128i v4; // xmm0
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  void (__fastcall *v8)(_QWORD *, __int64, __int64); // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r12
  unsigned int v13; // ebp
  unsigned int v14; // eax
  const __m128i *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  unsigned int v20; // r15d
  __int64 v21; // r13
  unsigned int v22; // ebp
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r9d
  int v34; // eax
  unsigned int v35; // eax
  __int64 *v36; // rbp
  __int64 v37; // rax
  unsigned __int64 v38; // r12
  __int64 v39; // r13
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 *v45; // r12
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rsi
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // r12
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // r14d
  __int64 v55; // rax
  __int64 v56; // r13
  __int64 v57; // rsi
  unsigned int v58; // eax
  __int64 v59; // rdx
  unsigned int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 **v63; // rdi
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rax
  int v67; // ebp
  __int64 v68; // rax
  __int64 *v69; // rdx
  __int64 v70; // r14
  __int64 **v71; // rax
  __int64 *v72; // rax
  __int64 v73; // rax
  __int64 *v74; // rax
  int v75; // ebp
  __int64 v76; // rbp
  unsigned __int64 v77; // r12
  __int64 *v78; // rdx
  __int64 v79; // rdi
  _QWORD *v80; // r13
  _QWORD *i; // r12
  __int64 v82; // rdi
  __int64 v83; // rdi
  __m128i *v84; // r12
  unsigned int v85; // r14d
  __int64 v86; // rcx
  int v87; // r13d
  __int64 v88; // r15
  __int64 v89; // rcx
  unsigned int v90; // r13d
  __int64 v91; // rsi
  int v92; // edx
  __int64 v93; // rbx
  __int64 v94; // rax
  unsigned __int64 v95; // r15
  unsigned __int64 v96; // rbx
  __int64 *v97; // rax
  __int64 v98; // rdi
  __int64 v99; // rcx
  __int64 v100; // rax
  unsigned int v101; // r12d
  __int64 v102; // r14
  __int64 v103; // rbp
  __m128i *v104; // rax
  __int64 v105; // r14
  __int64 v106; // r15
  __int64 v107; // r12
  unsigned int v108; // r13d
  __m128i *v109; // rax
  __int64 *v110; // r12
  __int64 v111; // rdx
  __int64 *v112; // rdi
  __int64 *v113; // rdi
  __int64 v114; // rax
  __m128i v115; // xmm0
  void *v116; // r14
  void *v117; // rbx
  int v119; // [rsp+0h] [rbp-250h]
  int n; // [rsp+10h] [rbp-240h]
  unsigned int na; // [rsp+10h] [rbp-240h]
  __int64 *v122; // [rsp+18h] [rbp-238h]
  int v123; // [rsp+18h] [rbp-238h]
  __int64 v124; // [rsp+18h] [rbp-238h]
  __int64 v125; // [rsp+20h] [rbp-230h]
  __int64 v126; // [rsp+38h] [rbp-218h]
  unsigned __int64 v128; // [rsp+58h] [rbp-1F8h] BYREF
  __int128 v129; // [rsp+60h] [rbp-1F0h]
  __int64 v130; // [rsp+78h] [rbp-1D8h] BYREF
  __int64 v131; // [rsp+80h] [rbp-1D0h]
  __int64 v132; // [rsp+88h] [rbp-1C8h]
  __int64 v133; // [rsp+90h] [rbp-1C0h]
  __int128 v134; // [rsp+98h] [rbp-1B8h]
  _QWORD *v135; // [rsp+A8h] [rbp-1A8h]
  __int64 v136; // [rsp+B0h] [rbp-1A0h]
  __int64 v137; // [rsp+B8h] [rbp-198h]
  __int128 v138; // [rsp+C0h] [rbp-190h]
  __int64 v139; // [rsp+D0h] [rbp-180h]
  __int128 v140; // [rsp+D8h] [rbp-178h]
  _BYTE v141[24]; // [rsp+178h] [rbp-D8h] BYREF
  char v142; // [rsp+190h] [rbp-C0h]
  unsigned __int64 *v143; // [rsp+198h] [rbp-B8h]
  __int64 v144; // [rsp+1A0h] [rbp-B0h]
  __int128 v145; // [rsp+1A8h] [rbp-A8h]
  unsigned __int64 v146; // [rsp+210h] [rbp-40h]

  v4 = 0;
  v146 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(a1 + 16);
  v134 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v136 = 0;
  v137 = 0;
  v6 = v5[35];
  v135 = v5;
  v139 = 0;
  v7 = *(_QWORD *)(v6 + 1496);
  v138 = 0;
  v140 = 0;
  v130 = v7;
  v8 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*v5 + 56LL);
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 32LL))(v5);
  v8(v5, a1 + 144, v9);
  v10 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 184) > *(_DWORD *)(v10 + 24) || *(_DWORD *)(a1 + 208) > *(_DWORD *)(v10 + 48) )
  {
    if ( !under_debugger )
      sub_383060(0xC932u, 0.0);
    goto LABEL_157;
  }
  v11 = *(_QWORD *)(v10 + 280);
  v12 = 8;
  v13 = 1;
  if ( *(int *)(v11 + 64) > 1 )
  {
    while ( 1 )
    {
      sub_1A9050(a1, &v130, *(_QWORD *)(*(_QWORD *)(v11 + 528) + v12));
      v14 = *(_DWORD *)(v11 + 64);
      if ( (int)v14 <= (int)++v13 )
        break;
      v12 += 8;
      if ( v13 >= v14 )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, 0.0);
        goto LABEL_157;
      }
    }
  }
  sub_19C970(a1, &v130, 0.0);
  v15 = (const __m128i *)v11;
  v126 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  if ( !(unsigned __int8)sub_1A5C40(a1, v11, 0.0, a4) )
  {
LABEL_8:
    if ( *(_BYTE *)(v11 + 320) )
    {
      v15 = a2;
      if ( (unsigned __int8)sub_1A2A70((_QWORD *)a1, a2, v16, v17, v18, v19, *(double *)v4.m128i_i64, a4) )
      {
        v22 = 1;
        goto LABEL_19;
      }
    }
    if ( *(_DWORD *)(a1 + 184) == -1 || (v20 = *(_DWORD *)(a1 + 208), v20 == -1) )
    {
      v22 = 0;
      goto LABEL_19;
    }
    v21 = *(_QWORD *)(a1 + 200);
    v22 = 0;
    if ( v21 != -1 )
    {
      if ( *(_BYTE *)(a1 + 468) )
      {
LABEL_13:
        v23 = a2->m128i_i64[0];
        if ( a2->m128i_i64[0] )
        {
          a2->m128i_i64[1] = 0;
          qfree(v23);
          a2->m128i_i64[0] = 0;
          a2[1].m128i_i64[0] = 0;
        }
        v24 = a2[3].m128i_i64[1];
        if ( v24 )
        {
          a2[4].m128i_i64[0] = 0;
          qfree(v24);
          a2[3].m128i_i64[1] = 0;
          a2[4].m128i_i64[1] = 0;
        }
        *(_DWORD *)(a1 + 208) = -1;
        *(_DWORD *)(a1 + 184) = -1;
        goto LABEL_19;
      }
      v101 = *(char *)(v126 + 13);
      v102 = *(_QWORD *)(a1 + 16);
      v103 = *(_QWORD *)(v102 + 48);
      v104 = sub_D21A0(v11, (__int64)v15, v16, v17, *(double *)v4.m128i_i64);
      v22 = sub_198E60((__int64)v104, v21, (_QWORD *)(v102 + 120), v20, v103, v101, *(double *)v4.m128i_i64);
    }
    v105 = *(_QWORD *)(a1 + 176);
    if ( v105 != -1 && !*(_BYTE *)(a1 + 468) )
    {
      v106 = *(_QWORD *)(a1 + 16);
      v107 = *(_QWORD *)(v106 + 24);
      v108 = *(char *)(v126 + 12);
      na = *(_DWORD *)(a1 + 184);
      v109 = sub_D21A0(v11, v126, v16, na, *(double *)v4.m128i_i64);
      v22 += sub_198E60((__int64)v109, v105, (_QWORD *)(v106 + 96), na, v107, v108, *(double *)v4.m128i_i64);
    }
    goto LABEL_13;
  }
  sub_19C2D0(a1, v126);
  v34 = *(_DWORD *)(v11 + 72);
  if ( v34 == 128
    || (v35 = v34 & 0xFFFFFFF0, v35 != 64) && v35 != 208 && (*(_BYTE *)(v11 + 320) || (*(_BYTE *)(v11 + 4) & 0x20) != 0) )
  {
    n = 0;
  }
  else
  {
    v4 = 0;
    v128 = 0;
    v129 = 0;
    v36 = *(__int64 **)(a1 + 120);
    n = 0;
    v122 = &v36[16 * *(_QWORD *)(a1 + 128)];
    if ( v122 == v36 )
      goto LABEL_94;
    do
    {
      sub_1CFD50((_QWORD *)v11, v36[9]);
      get_func();
      tinfo_get_func_frame();
      v37 = sub_1A15A0((__int64)v36, 0, 0.0);
      if ( (unsigned int)sub_1A1640((_QWORD *)v11, (__int64)v36, v37, 0.0) == -1 )
      {
        if ( !under_debugger )
          sub_383060(0xC86Bu, 0.0);
        goto LABEL_157;
      }
      if ( !*v36 )
      {
        if ( !under_debugger )
          sub_383060(0xC8ABu, 0.0);
        goto LABEL_157;
      }
      v38 = v129;
      v39 = *(int *)(*v36 + 72);
      v40 = v128;
      v41 = v128;
      if ( (int)v39 > (int)v129 - 1 )
      {
        v42 = (int)v39 + 1;
        if ( (_QWORD)v129 != v42 )
        {
          memset(v141, 0, sizeof(v141));
          if ( v42 < (unsigned __int64)v129 )
          {
            v125 = v11;
            v95 = (int)v39 + 1;
            v96 = v129;
            do
            {
              v97 = (__int64 *)(v40 + 24 * v95);
              v98 = *v97;
              if ( *v97 )
              {
                v97[1] = 0;
                qfree(v98);
                v40 = v128;
              }
              ++v95;
            }
            while ( v95 < v96 );
            *(_QWORD *)&v129 = (int)v39 + 1;
            v11 = v125;
            v41 = v40;
          }
          else
          {
            if ( (unsigned __int64)v141 < v128 || (unsigned __int64)v141 >= v128 + 24LL * *((_QWORD *)&v129 + 1) )
            {
              if ( *((_QWORD *)&v129 + 1) < v42 )
              {
                v41 = qvector_reserve((__int64)&v128, v128, v42, 24);
                v38 = v129;
                v42 = (int)v39 + 1;
                v128 = v41;
              }
              if ( v38 < v42 )
              {
                v99 = 24 * v38;
                do
                {
                  v100 = v99 + v41;
                  a4 = 0;
                  ++v38;
                  v99 += 24;
                  *(_QWORD *)v100 = 0;
                  *(_OWORD *)(v100 + 8) = 0;
                  v41 = v128;
                }
                while ( v42 != v38 );
              }
            }
            else
            {
              if ( *((_QWORD *)&v129 + 1) < v42 )
              {
                v41 = qvector_reserve((__int64)&v128, v128, v42, 24);
                v38 = v129;
                v42 = (int)v39 + 1;
                v128 = v41;
              }
              if ( v38 < v42 )
              {
                v43 = 24 * v38;
                do
                {
                  v44 = v43 + v41;
                  ++v38;
                  v43 += 24;
                  *(_QWORD *)v44 = 0;
                  *(_OWORD *)(v44 + 8) = 0;
                  v41 = v128;
                }
                while ( v42 != v38 );
              }
            }
            *(_QWORD *)&v129 = v42;
          }
        }
      }
      v45 = (__int64 *)(v41 + 24 * v39);
      v46 = v45[1];
      v47 = *v45;
      if ( v45[2] < (unsigned __int64)(v46 + 1) )
      {
        v94 = qvector_reserve((__int64)v45, v47, v46 + 1, 8);
        *v45 = v94;
        v47 = v94;
        v46 = v45[1];
      }
      *(_QWORD *)(v47 + 8 * v46) = v36;
      v36 += 16;
      ++v45[1];
      ++n;
      clear_tinfo_t();
    }
    while ( v122 != v36 );
    v31 = 0;
    v123 = 0;
    v48 = v128;
    if ( (_QWORD)v129 )
    {
      do
      {
        v49 = v48 + 24 * v31;
        if ( *(_QWORD *)(v49 + 8) > 1u )
        {
          memset(v141, 0, sizeof(v141));
          v50 = ***(_QWORD ***)v49;
          if ( !v50 )
            sub_195160(0.0);
          v51 = *(_QWORD *)(v50 + 48);
          v52 = *(_QWORD *)(v49 + 8);
          v53 = 0;
          if ( v51 )
          {
            while ( 1 )
            {
              v54 = 0;
              v55 = 0;
              if ( v52 )
                break;
LABEL_70:
              v51 = *(_QWORD *)(v51 + 8);
              if ( !v51 )
              {
                v53 = *(_QWORD *)&v141[8];
                goto LABEL_72;
              }
            }
            while ( 1 )
            {
              v56 = *(_QWORD *)(*(_QWORD *)v49 + 8 * v55);
              if ( !*(_QWORD *)(v56 + 104) )
                break;
              if ( **(_QWORD **)(v56 + 96) == v51 )
              {
                v57 = *(_QWORD *)v141;
                v58 = *(_DWORD *)&v141[8] - 1;
                if ( *(_DWORD *)&v141[8] - 1 < 0 )
                {
LABEL_106:
                  v60 = *(_DWORD *)(v56 + 8) & 0xFFFFFFFA;
                }
                else
                {
                  v59 = *(_QWORD *)v141 + 8LL * v58;
                  while ( *(_QWORD *)(v56 + 72) != *(_QWORD *)(*(_QWORD *)v59 + 72LL) )
                  {
                    --v58;
                    v59 -= 8;
                    if ( v58 == -1 )
                      goto LABEL_106;
                  }
                  v60 = *(_DWORD *)(v56 + 8) | 5;
                }
                *(_DWORD *)(v56 + 8) = v60;
                v61 = *(_QWORD *)&v141[8];
                if ( *(_QWORD *)&v141[16] < (unsigned __int64)(*(_QWORD *)&v141[8] + 1LL) )
                {
                  *(_QWORD *)v141 = qvector_reserve((__int64)v141, v57, *(_QWORD *)&v141[8] + 1LL, 8);
                  v61 = *(_QWORD *)&v141[8];
                  v57 = *(_QWORD *)v141;
                }
                *(_QWORD *)(v57 + 8 * v61) = v56;
                ++v54;
                ++*(_QWORD *)&v141[8];
                v52 = *(_QWORD *)(v49 + 8);
                v55 = v54;
                if ( v54 >= v52 )
                  goto LABEL_70;
              }
              else
              {
                v55 = ++v54;
                if ( v54 >= v52 )
                  goto LABEL_70;
              }
            }
            if ( !under_debugger )
              sub_383060(0xC7FCu, 0.0);
LABEL_157:
            BUG();
          }
LABEL_72:
          if ( v52 != v53 )
          {
            if ( !under_debugger )
              sub_383060(0xC8B8u, 0.0);
            goto LABEL_157;
          }
          v62 = *(_QWORD *)v141;
          v63 = *(__int64 ***)v49;
          *(_QWORD *)(v49 + 8) = v52;
          v64 = *(_QWORD *)(v49 + 16);
          *(_QWORD *)v49 = v62;
          *(_QWORD *)(v49 + 16) = *(_QWORD *)&v141[16];
          *(_QWORD *)v141 = v63;
          *(_QWORD *)&v141[16] = v64;
          if ( v63 )
          {
            *(_QWORD *)&v141[8] = 0;
            qfree((__int64)v63);
          }
          v48 = v128;
        }
        ++v123;
        v65 = v129;
        v31 = v123;
        v66 = v129;
      }
      while ( v123 < (unsigned __int64)v129 );
      if ( (unsigned __int64)v129 > 1 )
      {
        v31 = 1;
        v67 = 1;
        do
        {
          v68 = v48 + 24 * v31;
          if ( *(_QWORD *)(v68 + 8) )
          {
            v69 = **(__int64 ***)v68;
            v70 = *v69;
            if ( !*v69 )
              sub_195160(0.0);
            *(_QWORD *)&v141[16] = 0;
            v142 = 0;
            v144 = v48 + 24 * v31;
            v71 = *(__int64 ***)v68;
            *(_OWORD *)v141 = (unsigned __int64)&off_4DE208;
            v72 = *v71;
            v143 = &v128;
            v73 = *v72;
            if ( !v73 )
              sub_195160(0.0);
            LODWORD(v145) = *(_DWORD *)(v73 + 72);
            v74 = (__int64 *)sub_670E0(*(_QWORD **)(v70 + 64), v48, (__int64)v69, v31);
            sub_6F590((__int64 *)v141, v74, *(_DWORD *)(v70 + 72), 1);
            *(_QWORD *)v141 = off_4DBB18;
            qfree(*(__int64 *)&v141[8]);
            v48 = v128;
            v65 = v129;
          }
          ++v67;
          v66 = v65;
          v31 = v67;
        }
        while ( v67 < v65 );
      }
      v30 = (unsigned int)(v66 - 1);
      if ( (int)v30 >= 0 )
      {
        v75 = 0;
        do
        {
          sub_1A2060(a1, (_QWORD *)(v48 + 24LL * v75));
          v66 = v129;
          ++v75;
          v48 = v128;
          v30 = (unsigned int)(v129 - 1);
        }
        while ( v75 <= (int)v30 );
      }
      if ( v48 )
      {
        if ( v66 )
        {
          v76 = 0;
          v77 = v66;
          do
          {
            v78 = (__int64 *)(v48 + 24 * v76);
            v79 = *v78;
            if ( *v78 )
            {
              v78[1] = 0;
              qfree(v79);
              v48 = v128;
            }
            ++v76;
          }
          while ( v76 != v77 );
        }
        goto LABEL_93;
      }
    }
    else if ( v128 )
    {
LABEL_93:
      *(_QWORD *)&v129 = 0;
      qfree(v48);
    }
  }
LABEL_94:
  v15 = a2;
  v22 = n + (unsigned __int8)sub_1A2A70((_QWORD *)a1, a2, v30, v31, v32, v33, *(double *)v4.m128i_i64, a4);
  sub_19C0B0(a1, *(double *)v4.m128i_i64);
  v80 = *(_QWORD **)(a1 + 120);
  for ( i = &v80[16 * *(_QWORD *)(a1 + 128)]; i != v80; v80 += 16 )
  {
    sub_1A46A0(a1, (__int64)v80, *(double *)v4.m128i_i64, a4);
    v15 = (const __m128i *)*(unsigned int *)(a1 + 464);
    sub_1A1220(v80, (int)v15, v4);
  }
  sub_190300(v11, v15);
  v82 = *(_QWORD *)(a1 + 400);
  if ( v82 )
  {
    *(_QWORD *)(a1 + 408) = 0;
    qfree(v82);
    *(_QWORD *)(a1 + 400) = 0;
    *(_QWORD *)(a1 + 416) = 0;
  }
  v83 = *(_QWORD *)(a1 + 424);
  if ( v83 )
  {
    *(_QWORD *)(a1 + 432) = 0;
    qfree(v83);
    *(_QWORD *)(a1 + 424) = 0;
    *(_QWORD *)(a1 + 440) = 0;
  }
  clear_tinfo_t();
  clear_tinfo_t();
  if ( !v22 )
    goto LABEL_8;
  v84 = sub_D21A0(v11, (__int64)v15, v16, v17, *(double *)v4.m128i_i64);
  v85 = *(char *)(v126 + 12);
  *(_OWORD *)&v141[8] = 0;
  v86 = *(_QWORD *)(a1 + 16);
  v87 = *(_DWORD *)(a1 + 184);
  v88 = *(_QWORD *)(v86 + 104);
  if ( v88 )
  {
    v124 = *(_QWORD *)(a1 + 16);
    v117 = (void *)qalloc_or_throw(4 * v88, (__int64)v15, 4 * v88, v86);
    *(_QWORD *)&v141[16] = v88;
    memcpy(v117, *(const void **)(v124 + 96), 4 * v88);
    *(_QWORD *)&v141[8] = v88;
    *(_QWORD *)v141 = v117;
    sub_196810((__int64)v84, (__int64)v141, v87, v85);
    if ( v117 )
      qfree((__int64)v117);
  }
  else
  {
    *(_QWORD *)v141 = 0;
    sub_196810((__int64)v84, (__int64)v141, v87, v85);
  }
  v90 = *(char *)(v126 + 13);
  *(_OWORD *)&v141[8] = 0;
  v91 = *(_QWORD *)(a1 + 16);
  v92 = *(_DWORD *)(a1 + 208);
  v93 = *(_QWORD *)(v91 + 128);
  v119 = v92;
  if ( v93 )
  {
    v116 = (void *)qalloc_or_throw(4 * v93, v91, 4 * v93, v89);
    *(_QWORD *)&v141[16] = v93;
    memcpy(v116, *(const void **)(v91 + 120), 4 * v93);
    *(_QWORD *)&v141[8] = v93;
    *(_QWORD *)v141 = v116;
    sub_196810((__int64)v84, (__int64)v141, v119, v90);
    if ( v116 )
      qfree((__int64)v116);
  }
  else
  {
    *(_QWORD *)v141 = 0;
    sub_196810((__int64)v84, (__int64)v141, v92, v90);
  }
  sub_A2520((__int64)v84, "spoiled ellipsis regs");
LABEL_19:
  if ( v139 )
  {
    *(_QWORD *)&v140 = 0;
    qfree(v139);
  }
  if ( v137 )
  {
    *(_QWORD *)&v138 = 0;
    qfree(v137);
  }
  if ( v133 )
  {
    *(_QWORD *)&v134 = 0;
    qfree(v133);
  }
  v25 = v131;
  if ( v131 )
  {
    v26 = *(_QWORD *)v131;
    if ( !v132 )
    {
      *(_QWORD *)v131 = *(_QWORD *)v131 & 3LL | v131 & 0xFFFFFFFFFFFFFFFCLL;
      v27 = v131;
      v28 = (__m128i)(unsigned __int64)v131;
      *(_QWORD *)v131 &= ~1uLL;
      *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64(v28, v28);
      *(_QWORD *)v131 |= 2uLL;
      goto LABEL_28;
    }
    v110 = (__int64 *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
    v111 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v111 & 2) != 0 )
    {
LABEL_133:
      *(_QWORD *)v25 = v26 & 3 | v25 & 0xFFFFFFFFFFFFFFFCLL;
      v114 = v131;
      v115 = (__m128i)(unsigned __int64)v131;
      *(_QWORD *)v131 &= ~1uLL;
      *(__m128i *)(v114 + 8) = _mm_unpacklo_epi64(v115, v115);
      *(_QWORD *)v131 |= 2uLL;
      v132 = 0;
LABEL_28:
      if ( v131 )
        qfree(v131);
      return v22;
    }
    v112 = (__int64 *)v110[1];
    if ( (*(_BYTE *)v112 & 2) != 0 )
    {
      v113 = (__int64 *)v110[2];
      if ( (*(_BYTE *)v113 & 2) != 0 )
        goto LABEL_137;
    }
    else
    {
      sub_196450(v112);
      v113 = (__int64 *)v110[2];
      if ( (*(_BYTE *)v113 & 2) != 0 )
        goto LABEL_129;
    }
    sub_196450(v113);
LABEL_129:
    v111 = *v110;
    if ( (*v110 & 2) != 0 )
    {
LABEL_130:
      if ( v26 > 3 )
        qfree(v26 & 0xFFFFFFFFFFFFFFFCLL);
      v25 = v131;
      v26 = *(_QWORD *)v131;
      goto LABEL_133;
    }
LABEL_137:
    *v110 = v111 | 2;
    goto LABEL_130;
  }
  return v22;
}

