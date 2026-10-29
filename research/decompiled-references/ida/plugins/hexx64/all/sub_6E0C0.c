unsigned __int64 __fastcall sub_6E0C0(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v6; // rax
  int v8; // eax
  int v9; // ebp
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // rax
  int *v20; // rbp
  int v21; // r15d
  int v22; // r12d
  __int64 (__fastcall *v23)(__int64, int); // rax
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rdx
  __int64 (__fastcall *v27)(__int64, int, int); // rax
  unsigned int v28; // eax
  int v29; // edx
  int v30; // r12d
  char v31; // al
  int v32; // r8d
  __int64 v33; // rbp
  __int64 v34; // rdx
  int v35; // edx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rbx
  __int64 *v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rbp
  __int64 v43; // rbp
  int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // rbp
  int *v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  bool v59; // cf
  unsigned __int64 v60; // r9
  unsigned __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // r12
  int *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdi
  unsigned __int64 v70; // rax
  __int64 v71; // rsi
  unsigned __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // r15
  __int64 *v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  unsigned __int64 v80; // r12
  unsigned __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 *v84; // rdi
  __int64 *v85; // rdi
  unsigned __int64 v86; // rsi
  unsigned __int64 v87; // rcx
  __int64 *v88; // rdi
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdi
  unsigned __int64 v97; // rdx
  unsigned __int64 v98; // rsi
  unsigned __int64 v99; // rcx
  __int64 *v100; // rdi
  unsigned __int64 v101; // rax
  __int64 v102; // rax
  unsigned __int64 v103; // rbp
  unsigned __int64 v104; // rsi
  unsigned __int64 v105; // rax
  __int64 *v106; // rdi
  unsigned __int64 v107; // rax
  __int64 i; // rax
  __int64 v109; // rdx
  int v110; // ecx
  __int64 v111; // rdx
  unsigned __int64 v112; // rdx
  __int64 v113; // rax
  unsigned __int64 v114; // rax
  unsigned __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // rdx
  int v127; // [rsp+8h] [rbp-F0h]
  int v128; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v129; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v130; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v131; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v132; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v133; // [rsp+8h] [rbp-F0h]
  int v134; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v135; // [rsp+8h] [rbp-F0h]
  int v136; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v137; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v138; // [rsp+8h] [rbp-F0h]
  int v139; // [rsp+10h] [rbp-E8h]
  __int64 v140; // [rsp+10h] [rbp-E8h]
  int v141; // [rsp+20h] [rbp-D8h]
  int v142; // [rsp+24h] [rbp-D4h]
  bool v143; // [rsp+28h] [rbp-D0h]
  int v144; // [rsp+2Ch] [rbp-CCh]
  int v145; // [rsp+2Ch] [rbp-CCh]
  int v146; // [rsp+2Ch] [rbp-CCh]
  int v147; // [rsp+2Ch] [rbp-CCh]
  int v148; // [rsp+34h] [rbp-C4h] BYREF
  int v149; // [rsp+38h] [rbp-C0h] BYREF
  int v150; // [rsp+3Ch] [rbp-BCh] BYREF
  int v151; // [rsp+40h] [rbp-B8h] BYREF
  int v152; // [rsp+44h] [rbp-B4h] BYREF
  int v153; // [rsp+48h] [rbp-B0h] BYREF
  int v154; // [rsp+4Ch] [rbp-ACh] BYREF
  __int64 v155[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 *v156; // [rsp+60h] [rbp-98h] BYREF
  __int128 v157; // [rsp+68h] [rbp-90h]
  int *v158; // [rsp+80h] [rbp-78h] BYREF
  __int128 v159; // [rsp+88h] [rbp-70h]
  unsigned __int64 v160; // [rsp+98h] [rbp-60h] BYREF
  __int128 v161; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v162; // [rsp+B8h] [rbp-40h]

  v6 = *(_QWORD *)a1;
  v162 = __readfsqword(0x28u);
  v8 = (*(__int64 (__fastcall **)(__int64))(v6 + 56))(a1);
  if ( !v8 )
    return v162 - __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( !under_debugger )
      sub_383060(0xCB2Fu, a4);
    BUG();
  }
  v9 = v8;
  v10 = *(unsigned __int64 **)(a3 + 8);
  if ( !v10 )
    goto LABEL_45;
  v11 = *v10;
  if ( !*(_QWORD *)(a3 + 16) )
  {
    *v10 = *v10 & 3 | (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*(_QWORD *)(a3 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(a3 + 8),
                                                (__m128i)*(unsigned __int64 *)(a3 + 8));
    **(_QWORD **)(a3 + 8) &= ~1uLL;
    **(_QWORD **)(a3 + 8) |= 2uLL;
    goto LABEL_6;
  }
  v40 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
  v41 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v41 & 2) == 0 )
  {
    v84 = (__int64 *)v40[1];
    if ( (*(_BYTE *)v84 & 2) != 0 )
    {
      v85 = (__int64 *)v40[2];
      if ( (*(_BYTE *)v85 & 2) != 0 )
        goto LABEL_226;
    }
    else
    {
      sub_6BF90(v84);
      v85 = (__int64 *)v40[2];
      if ( (*(_BYTE *)v85 & 2) != 0 )
        goto LABEL_162;
    }
    sub_6BF90(v85);
LABEL_162:
    v41 = *v40;
    if ( (*v40 & 2) != 0 )
    {
LABEL_163:
      if ( v11 > 3 )
        qfree(v11 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = *(unsigned __int64 **)(a3 + 8);
      v11 = *v10;
      goto LABEL_44;
    }
LABEL_226:
    *v40 = v41 | 2;
    goto LABEL_163;
  }
LABEL_44:
  *v10 = v11 & 3 | (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*(_QWORD *)(a3 + 8) + 8LL) = _mm_unpacklo_epi64(
                                              (__m128i)*(unsigned __int64 *)(a3 + 8),
                                              (__m128i)*(unsigned __int64 *)(a3 + 8));
  **(_QWORD **)(a3 + 8) &= ~1uLL;
  **(_QWORD **)(a3 + 8) |= 2uLL;
LABEL_45:
  *(_QWORD *)(a3 + 16) = 0;
LABEL_6:
  v158 = nullptr;
  v160 = 0;
  v159 = 0;
  v161 = 0;
  if ( v9 < 0 )
  {
    v12 = *a2;
    if ( !*a2 )
    {
      v96 = a2[3];
      if ( v96 )
      {
        a2[4] = 0;
        qfree(v96);
        a2[3] = 0;
        a2[5] = 0;
      }
      goto LABEL_11;
    }
    goto LABEL_8;
  }
  v65 = v9;
  v66 = (int *)qvector_reserve((__int64)&v158, 0, v9, 4);
  v67 = v159;
  v158 = v66;
  if ( (unsigned __int64)v159 < v9 )
  {
    v66[(_QWORD)v159] = -1;
    v68 = v67 + 1;
    if ( v67 + 1 < (unsigned __int64)v9 )
    {
      do
        v158[v68++] = -1;
      while ( v68 != v9 );
    }
  }
  v12 = *a2;
  *(_QWORD *)&v159 = v9;
  if ( v12 )
  {
LABEL_8:
    a2[1] = 0;
    qfree(v12);
    v13 = a2[3];
    *a2 = 0;
    a2[2] = 0;
    if ( v13 )
    {
      a2[4] = 0;
      qfree(v13);
      a2[3] = 0;
      a2[5] = 0;
    }
    if ( v9 < 0 )
      goto LABEL_11;
    v65 = v9;
    goto LABEL_134;
  }
  v69 = a2[3];
  if ( v69 )
  {
    a2[4] = 0;
    qfree(v69);
    a2[3] = 0;
    a2[5] = 0;
  }
LABEL_134:
  v70 = a2[1];
  LODWORD(v156) = -1;
  if ( v65 >= v70 )
  {
    if ( v70 >= v65 )
      goto LABEL_11;
    v71 = *a2;
    v72 = a2[2];
    if ( (unsigned __int64)&v156 < *a2 || (unsigned __int64)&v156 >= v71 + 4 * v72 )
    {
      if ( v72 >= v65
        || (v113 = qvector_reserve((__int64)a2, v71, v65, 4), *a2 = v113, v71 = v113, v70 = a2[1], v70 < v65) )
      {
        v95 = 4 * v70;
        while ( 1 )
        {
          *(_DWORD *)(v71 + v95) = -1;
          v95 += 4;
          if ( 4 * v65 == v95 )
            break;
          v71 = *a2;
        }
      }
    }
    else if ( v72 >= v65
           || (v121 = qvector_reserve((__int64)a2, v71, v65, 4), *a2 = v121, v71 = v121, v70 = a2[1], v70 < v65) )
    {
      v73 = 4 * v70;
      while ( 1 )
      {
        *(_DWORD *)(v71 + v73) = -1;
        v73 += 4;
        if ( 4 * v65 == v73 )
          break;
        v71 = *a2;
      }
    }
  }
  a2[1] = v65;
LABEL_11:
  v155[0] = 0;
  v14 = *(_QWORD *)a1;
  v155[1] = 0;
  v142 = (*(__int64 (__fastcall **)(__int64))(v14 + 80))(a1);
  v156 = nullptr;
  v157 = 0;
  sub_64190(v155, v142, 0.0);
  v15 = v161;
  if ( (_QWORD)v161 )
  {
LABEL_12:
    v143 = v142 >= 0;
    if ( (_QWORD)v159 && v142 >= 0 && v142 < (unsigned __int64)v161 )
    {
      *v158 = v142;
      *(_DWORD *)(v160 + 4LL * v142) = 0;
    }
    goto LABEL_16;
  }
  v80 = v159;
  v148 = -1;
  if ( (_QWORD)v159 )
  {
    v81 = v160;
    if ( (unsigned __int64)&v148 < v160 || (unsigned __int64)&v148 >= v160 + 4LL * *((_QWORD *)&v161 + 1) )
    {
      v111 = 0;
      if ( *((_QWORD *)&v161 + 1) >= (unsigned __int64)v159
        || (v116 = qvector_reserve((__int64)&v160, v160, v159, 4),
            v111 = v161,
            v160 = v116,
            v81 = v116,
            (unsigned __int64)v161 < v80) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v81 + 4 * v111++) = -1;
          if ( v111 == v80 )
            break;
          v81 = v160;
        }
      }
    }
    else
    {
      v82 = 0;
      if ( *((_QWORD *)&v161 + 1) >= (unsigned __int64)v159
        || (v123 = qvector_reserve((__int64)&v160, v160, v159, 4),
            v160 = v123,
            v81 = v123,
            v82 = v161,
            (unsigned __int64)v161 < v80) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v81 + 4 * v82++) = -1;
          if ( v82 == v80 )
            break;
          v81 = v160;
        }
      }
    }
    *(_QWORD *)&v161 = v80;
    do
    {
      v83 = v158[v15];
      if ( (_DWORD)v83 != -1 )
        *(_DWORD *)(v160 + 4 * v83) = v15;
      ++v15;
    }
    while ( v15 != v80 );
    goto LABEL_12;
  }
  v143 = v142 >= 0;
LABEL_16:
  v17 = *((_QWORD *)&v157 + 1);
  v16 = v157;
  if ( *((_QWORD *)&v157 + 1) < (unsigned __int64)(v157 + 1) )
  {
    v74 = qvector_reserve((__int64)&v156, 0, v157 + 1, 8);
    v75 = *((_QWORD *)&v157 + 1);
    v18 = v74;
    *((_QWORD *)&v157 + 1) = v17;
    v76 = v156;
    v77 = v157 - 1;
    if ( (__int64)v157 - 1 >= 0 )
    {
      v78 = v74;
      do
      {
        v79 = *v76;
        v78 += 8;
        ++v76;
        *(_QWORD *)(v78 - 8) = v79;
        v59 = v77-- == 0;
      }
      while ( !v59 );
      v76 = v156;
    }
    qfree((__int64)v76);
    v156 = (__int64 *)v18;
    v16 = v157;
    *((_QWORD *)&v157 + 1) = v75;
  }
  else
  {
    v18 = (__int64)v156;
  }
  v141 = 0;
  *(_QWORD *)(v18 + 8 * v16) = (unsigned int)v142;
  v139 = 1;
  v19 = v157 + 1;
  *(_QWORD *)&v157 = v157 + 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v20 = (int *)&v156[v19 - 1];
      v21 = *v20;
      v22 = v20[1];
      v23 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
      v24 = (unsigned int)*v20;
      if ( v23 == sub_65090 )
      {
        v25 = sub_65090(a1, v24);
      }
      else
      {
        v25 = v23(a1, v24);
        v21 = *v20;
      }
      if ( v22 == v25 )
        break;
      v26 = (unsigned int)v20[1];
      v27 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
      if ( v27 == sub_650D0 )
      {
        v127 = v20[1];
        v28 = sub_650D0(a1, v21, v26);
        v29 = v127;
      }
      else
      {
        v28 = v27(a1, v21, v26);
        v29 = v20[1];
        v21 = *v20;
      }
      v30 = v28;
      v20[1] = v29 + 1;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(
             a1,
             (unsigned int)v21,
             v28) )
      {
LABEL_34:
        v19 = v157;
      }
      else
      {
        v31 = sub_64190(v155, v30, 0.0);
        v32 = *v20;
        if ( !v31 )
        {
          v33 = v161;
          if ( (_QWORD)v161 )
          {
            if ( v32 >= 0 )
            {
              v34 = v32;
              if ( v32 < (unsigned __int64)v161 )
              {
LABEL_29:
                v35 = *(_DWORD *)(v160 + 4 * v34);
                if ( v30 < 0 )
                {
                  if ( v35 < -1 )
                    goto LABEL_32;
                  if ( a2[4] )
                    goto LABEL_88;
                  v103 = a2[1];
                  v152 = -1;
                  if ( !v103 )
                    goto LABEL_88;
                  goto LABEL_214;
                }
                v36 = v30;
                if ( v30 < (unsigned __int64)v161 )
                {
                  if ( v35 < *(_DWORD *)(v160 + 4LL * v30) )
                  {
LABEL_32:
                    v37 = 2;
LABEL_33:
                    (**(void (__fastcall ***)(__int64, _QWORD, _QWORD, __int64))a3)(
                      a3,
                      (unsigned int)v32,
                      (unsigned int)v30,
                      v37);
                    goto LABEL_34;
                  }
LABEL_85:
                  v49 = a2[4];
                  if ( v49 )
                  {
LABEL_86:
                    if ( v36 < v49 )
                    {
                      v37 = 4;
                      if ( *(_DWORD *)(a2[3] + 4 * v36) != -1 )
                        goto LABEL_33;
                    }
                    goto LABEL_88;
                  }
                  v103 = a2[1];
                  if ( !v103 )
                    goto LABEL_224;
                  goto LABEL_213;
                }
                if ( v35 < -1 )
                  goto LABEL_32;
                goto LABEL_255;
              }
            }
          }
          else
          {
            v60 = v159;
            v150 = -1;
            if ( (_QWORD)v159 )
            {
              v61 = v160;
              if ( (unsigned __int64)&v150 < v160 || (unsigned __int64)&v150 >= v160 + 4LL * *((_QWORD *)&v161 + 1) )
              {
                v93 = 0;
                if ( *((_QWORD *)&v161 + 1) >= (unsigned __int64)v159
                  || (v144 = v32,
                      v130 = v159,
                      v94 = qvector_reserve((__int64)&v160, v160, v159, 4),
                      v93 = v161,
                      v60 = v130,
                      v160 = v94,
                      v61 = v94,
                      v32 = v144,
                      (unsigned __int64)v161 < v130) )
                {
                  while ( 1 )
                  {
                    *(_DWORD *)(v61 + 4 * v93++) = -1;
                    if ( v93 == v60 )
                      break;
                    v61 = v160;
                  }
                }
              }
              else
              {
                v62 = 0;
                if ( *((_QWORD *)&v161 + 1) >= (unsigned __int64)v159
                  || (v145 = v32,
                      v133 = v159,
                      v120 = qvector_reserve((__int64)&v160, v160, v159, 4),
                      v160 = v120,
                      v60 = v133,
                      v61 = v120,
                      v62 = v161,
                      v32 = v145,
                      (unsigned __int64)v161 < v133) )
                {
                  while ( 1 )
                  {
                    *(_DWORD *)(v61 + 4 * v62++) = -1;
                    if ( v62 == v60 )
                      break;
                    v61 = v160;
                  }
                }
              }
              *(_QWORD *)&v161 = v60;
              v63 = 0;
              do
              {
                v64 = v158[v63];
                if ( (_DWORD)v64 != -1 )
                  *(_DWORD *)(v160 + 4 * v64) = v63;
                ++v63;
              }
              while ( v63 != v60 );
              v125 = v161;
              if ( v32 >= 0 )
              {
                v34 = v32;
                if ( v32 < (unsigned __int64)v161 )
                  goto LABEL_29;
              }
              if ( !(_QWORD)v161 )
              {
                v126 = v159;
                v151 = -1;
                if ( (_QWORD)v159 )
                {
                  if ( (unsigned __int64)&v151 < v160 || (unsigned __int64)&v151 >= v160 + 4LL * *((_QWORD *)&v161 + 1) )
                  {
                    if ( *((_QWORD *)&v161 + 1) < (unsigned __int64)v159 )
                    {
                      v146 = v32;
                      v137 = v159;
                      v160 = qvector_reserve((__int64)&v160, v160, v159, 4);
                      v32 = v146;
                      v125 = v161;
                      v126 = v137;
                    }
                    if ( v125 < v126 )
                    {
                      do
                        *(_DWORD *)(v160 + 4 * v125++) = -1;
                      while ( v126 != v125 );
                    }
                  }
                  else
                  {
                    if ( *((_QWORD *)&v161 + 1) < (unsigned __int64)v159 )
                    {
                      v147 = v32;
                      v138 = v159;
                      v160 = qvector_reserve((__int64)&v160, v160, v159, 4);
                      v32 = v147;
                      v125 = v161;
                      v126 = v138;
                    }
                    if ( v125 < v126 )
                    {
                      do
                        *(_DWORD *)(v160 + 4 * v125++) = -1;
                      while ( v126 != v125 );
                    }
                  }
                  *(_QWORD *)&v161 = v126;
                  do
                  {
                    v48 = v158[v33];
                    if ( (_DWORD)v48 != -1 )
                      *(_DWORD *)(v160 + 4 * v48) = v33;
                    ++v33;
                  }
                  while ( v126 != v33 );
                }
              }
            }
          }
          if ( v30 < 0 )
          {
            if ( a2[4] )
              goto LABEL_88;
LABEL_256:
            v103 = a2[1];
            if ( !v103 )
              goto LABEL_88;
LABEL_213:
            v152 = -1;
LABEL_214:
            v104 = a2[3];
            v105 = a2[5];
            v106 = a2 + 3;
            if ( (unsigned __int64)&v152 < v104 || (unsigned __int64)&v152 >= v104 + 4 * v105 )
            {
              if ( v105 < v103 )
              {
                v134 = v32;
                a2[3] = qvector_reserve((__int64)v106, v104, v103, 4);
                v32 = v134;
              }
              v115 = a2[4];
              if ( v115 < v103 )
              {
                do
                  *(_DWORD *)(a2[3] + 4 * v115++) = -1;
                while ( v103 != v115 );
              }
            }
            else
            {
              if ( v105 < v103 )
              {
                v136 = v32;
                a2[3] = qvector_reserve((__int64)v106, v104, v103, 4);
                v32 = v136;
              }
              v107 = a2[4];
              if ( v107 < v103 )
              {
                do
                  *(_DWORD *)(a2[3] + 4 * v107++) = -1;
                while ( v103 != v107 );
              }
            }
            a2[4] = v103;
            for ( i = 0; i != v103; ++i )
            {
              v109 = *(int *)(*a2 + 4 * i);
              if ( (_DWORD)v109 != -1 )
                *(_DWORD *)(a2[3] + 4 * v109) = i;
            }
LABEL_224:
            if ( v30 >= 0 )
            {
              v49 = a2[4];
              v36 = v30;
              goto LABEL_86;
            }
LABEL_88:
            v37 = 3;
            goto LABEL_33;
          }
          v36 = v30;
          if ( v30 < (unsigned __int64)v161 )
          {
            if ( *(int *)(v160 + 4LL * v30) > -1 )
              goto LABEL_32;
            goto LABEL_85;
          }
LABEL_255:
          v49 = a2[4];
          if ( v49 )
            goto LABEL_86;
          goto LABEL_256;
        }
        if ( v32 != -1 )
          (**(void (__fastcall ***)(__int64, _QWORD, _QWORD, __int64))a3)(a3, (unsigned int)v32, (unsigned int)v30, 1);
        v43 = v161;
        v44 = v139 + 1;
        if ( !(_QWORD)v161 )
        {
          v50 = v159;
          v153 = -1;
          if ( !(_QWORD)v159 )
            goto LABEL_64;
          v51 = v160;
          if ( (unsigned __int64)&v153 < v160 || (unsigned __int64)&v153 >= v160 + 4LL * *((_QWORD *)&v161 + 1) )
          {
            v91 = 0;
            if ( *((_QWORD *)&v161 + 1) >= (unsigned __int64)v159
              || (v129 = v159,
                  v92 = qvector_reserve((__int64)&v160, v160, v159, 4),
                  v91 = v161,
                  v50 = v129,
                  v160 = v92,
                  v51 = v92,
                  v44 = v139 + 1,
                  (unsigned __int64)v161 < v129) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v51 + 4 * v91++) = -1;
                if ( v91 == v50 )
                  break;
                v51 = v160;
              }
            }
          }
          else
          {
            v52 = 0;
            if ( *((_QWORD *)&v161 + 1) >= (unsigned __int64)v159
              || (v132 = v159,
                  v119 = qvector_reserve((__int64)&v160, v160, v159, 4),
                  v160 = v119,
                  v50 = v132,
                  v51 = v119,
                  v52 = v161,
                  v44 = v139 + 1,
                  (unsigned __int64)v161 < v132) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v51 + 4 * v52++) = -1;
                if ( v52 == v50 )
                  break;
                v51 = v160;
              }
            }
          }
          *(_QWORD *)&v161 = v50;
          do
          {
            v53 = v158[v43];
            if ( (_DWORD)v53 != -1 )
              *(_DWORD *)(v160 + 4 * v53) = v43;
            ++v43;
          }
          while ( v43 != v50 );
        }
        if ( v139 >= 0 && v139 < (unsigned __int64)v159 && v30 >= 0 && v30 < (unsigned __int64)v161 )
        {
          v158[v139] = v30;
          *(_DWORD *)(v160 + 4LL * v30) = v139;
        }
LABEL_64:
        v45 = v157;
        if ( *((_QWORD *)&v157 + 1) < (unsigned __int64)(v157 + 1) )
        {
          v140 = *((_QWORD *)&v157 + 1);
          v128 = v44;
          v46 = qvector_reserve((__int64)&v156, 0, v157 + 1, 8);
          v54 = *((_QWORD *)&v157 + 1);
          v55 = v156;
          v56 = v157 - 1;
          *((_QWORD *)&v157 + 1) = v140;
          if ( (__int64)v157 - 1 >= 0 )
          {
            v57 = v46;
            do
            {
              v58 = *v55;
              v57 += 8;
              ++v55;
              *(_QWORD *)(v57 - 8) = v58;
              v59 = v56-- == 0;
            }
            while ( !v59 );
            v55 = v156;
          }
          qfree((__int64)v55);
          v45 = v157;
          v156 = (__int64 *)v46;
          v44 = v128;
          *((_QWORD *)&v157 + 1) = v54;
        }
        else
        {
          v46 = (__int64)v156;
        }
        v47 = (int *)(v46 + 8 * v45);
        v139 = v44;
        *v47 = v30;
        v47[1] = 0;
        v19 = v157 + 1;
        *(_QWORD *)&v157 = v157 + 1;
      }
    }
    v42 = a2[4];
    if ( !(_QWORD)v157 )
      break;
    v19 = v157 - 1;
    *(_QWORD *)&v157 = v19;
    if ( !v19 )
      break;
    if ( v42 )
      goto LABEL_49;
    v97 = a2[1];
    v149 = -1;
    if ( v97 )
    {
      v98 = a2[3];
      v99 = a2[5];
      v100 = a2 + 3;
      if ( (unsigned __int64)&v149 < v98 || (unsigned __int64)&v149 >= v98 + 4 * v99 )
      {
        v114 = 0;
        if ( v99 >= v97
          || (v131 = v97,
              v118 = qvector_reserve((__int64)v100, v98, v97, 4),
              a2[3] = v118,
              v98 = v118,
              v97 = v131,
              v114 = a2[4],
              v114 < v131) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v98 + 4 * v114++) = -1;
            if ( v97 == v114 )
              break;
            v98 = a2[3];
          }
        }
      }
      else
      {
        v101 = 0;
        if ( v99 >= v97
          || (v135 = v97,
              v124 = qvector_reserve((__int64)v100, v98, v97, 4),
              a2[3] = v124,
              v98 = v124,
              v97 = v135,
              v101 = a2[4],
              v101 < v135) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v98 + 4 * v101++) = -1;
            if ( v97 == v101 )
              break;
            v98 = a2[3];
          }
        }
      }
      a2[4] = v97;
      do
      {
        v102 = *(int *)(*a2 + 4 * v42);
        if ( (_DWORD)v102 != -1 )
          *(_DWORD *)(a2[3] + 4 * v102) = v42;
        ++v42;
      }
      while ( v97 != v42 );
LABEL_49:
      if ( v141 < 0 || v141 >= (unsigned __int64)a2[1] || v21 < 0 || v21 >= (unsigned __int64)a2[4] )
      {
        v19 = v157;
        goto LABEL_54;
      }
      *(_DWORD *)(*a2 + 4LL * v141) = v21;
      v110 = v141++;
      *(_DWORD *)(a2[3] + 4LL * v21) = v110;
      v19 = v157;
    }
    else
    {
LABEL_54:
      ++v141;
    }
  }
  if ( v42 )
    goto LABEL_69;
  v38 = a2[1];
  v154 = -1;
  if ( v38 )
  {
    v86 = a2[3];
    v87 = a2[5];
    v88 = a2 + 3;
    if ( (unsigned __int64)&v154 < v86 || (unsigned __int64)&v154 >= v86 + 4 * v87 )
    {
      v112 = 0;
      if ( v87 >= v38
        || (v117 = qvector_reserve((__int64)v88, v86, v38, 4), v112 = a2[4], a2[3] = v117, v86 = v117, v112 < v38) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v86 + 4 * v112++) = -1;
          if ( v112 == v38 )
            break;
          v86 = a2[3];
        }
      }
    }
    else
    {
      v89 = 0;
      if ( v87 >= v38
        || (v122 = qvector_reserve((__int64)v88, v86, v38, 4), a2[3] = v122, v86 = v122, v89 = a2[4], v89 < v38) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v86 + 4 * v89++) = -1;
          if ( v89 == v38 )
            break;
          v86 = a2[3];
        }
      }
    }
    a2[4] = v38;
    do
    {
      v90 = *(int *)(*a2 + 4 * v42);
      if ( (_DWORD)v90 != -1 )
        *(_DWORD *)(a2[3] + 4 * v90) = v42;
      ++v42;
    }
    while ( v42 != v38 );
LABEL_69:
    if ( v141 >= 0 && v141 < (unsigned __int64)a2[1] && v143 && v142 < (unsigned __int64)a2[4] )
    {
      *(_DWORD *)(*a2 + 4LL * v141) = v142;
      *(_DWORD *)(a2[3] + 4LL * v142) = v141;
    }
  }
  if ( v156 )
  {
    *(_QWORD *)&v157 = 0;
    qfree((__int64)v156);
  }
  qfree(v155[0]);
  if ( v160 )
  {
    *(_QWORD *)&v161 = 0;
    qfree(v160);
  }
  if ( v158 )
  {
    *(_QWORD *)&v159 = 0;
    qfree((__int64)v158);
  }
  return v162 - __readfsqword(0x28u);
}

