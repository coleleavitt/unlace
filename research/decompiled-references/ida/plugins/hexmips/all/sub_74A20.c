__int64 __fastcall sub_74A20(__int64 a1, __m128i *a2, __int64 a3, char a4)
{
  __int64 v6; // rcx
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __m128i v12; // kr00_16
  __m128i *v13; // rsi
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 (__fastcall *v19)(__m128i *, int); // r12
  __int64 (__fastcall *v20)(__int64); // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r15
  signed int *v24; // r13
  int *i; // r15
  __int64 (__fastcall *v26)(__int64); // rax
  int v27; // eax
  unsigned __int64 v28; // rcx
  signed int v29; // edx
  signed int v30; // esi
  _DWORD *v31; // rcx
  _DWORD *v32; // rdi
  _DWORD *v33; // rax
  __int64 v34; // rcx
  _DWORD *v35; // rax
  __int64 v36; // rcx
  int v37; // edx
  __int64 (__fastcall *v38)(__int64); // rax
  int v39; // eax
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 (__fastcall *v46)(__int64); // rax
  int v47; // r10d
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 (__fastcall *v50)(__int64); // rax
  unsigned __int64 v51; // r15
  int v52; // r13d
  int v53; // eax
  char v54; // al
  __int64 v55; // rax
  _QWORD *v56; // r12
  int v57; // r13d
  __int64 v58; // rdx
  _QWORD *v59; // rcx
  __int64 v60; // rsi
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rdi
  char v64; // al
  int v65; // r13d
  __int64 v66; // rax
  signed int v67; // edx
  __int64 v68; // rax
  __int64 v69; // rcx
  unsigned int *v70; // rdx
  unsigned int v71; // r8d
  unsigned int v72; // r9d
  __int64 v73; // r12
  __int64 v74; // r13
  __int64 v75; // r13
  __int64 v76; // rax
  __int64 v77; // r12
  int v78; // eax
  int v79; // edx
  _DWORD *v80; // rax
  _DWORD *v81; // rcx
  unsigned int v82; // r13d
  int v83; // eax
  __int64 (__fastcall *v84)(__int64, int); // rax
  int v85; // eax
  __int64 (__fastcall *v86)(__int64, int, int); // rax
  unsigned int v87; // r12d
  bool v88; // r11
  __int64 (__fastcall *v89)(__int64); // rax
  int v90; // eax
  __int64 v91; // rbx
  __int64 v92; // r14
  __int64 v93; // rbx
  __int64 v94; // r14
  unsigned __int64 *v95; // rax
  unsigned __int64 v96; // rbx
  unsigned __int64 *v97; // rax
  __m128i v98; // xmm0
  _QWORD *v100; // rax
  __int64 v101; // rcx
  unsigned __int64 v102; // rsi
  __int64 v103; // rax
  _QWORD *v104; // r12
  int v105; // r13d
  __int64 v106; // rdx
  _QWORD *v107; // rcx
  __int64 v108; // rsi
  __int64 *v109; // r14
  __int64 v110; // rdx
  __int64 *v111; // rdi
  __int64 *v112; // rdi
  unsigned __int64 *v113; // rax
  __m128i v114; // xmm0
  unsigned __int64 v115; // r12
  __int64 *v116; // rax
  __int64 v117; // rdx
  __int64 *v118; // r14
  __int64 *v119; // rbx
  __int64 v120; // rax
  __int64 v121; // rbx
  __int64 *v122; // rdi
  __int64 *v123; // rdi
  __int64 v124; // rax
  _QWORD *v125; // rax
  __int64 v126; // rcx
  unsigned __int64 v127; // rsi
  __int64 *v128; // rdi
  __int64 *v129; // rdi
  __int64 v130; // rax
  __int64 v131; // rax
  unsigned __int64 v133; // [rsp+18h] [rbp-198h]
  int j; // [rsp+20h] [rbp-190h]
  char v135; // [rsp+26h] [rbp-18Ah]
  unsigned __int8 v136; // [rsp+27h] [rbp-189h]
  bool v137; // [rsp+28h] [rbp-188h]
  int v138; // [rsp+30h] [rbp-180h]
  int v139; // [rsp+34h] [rbp-17Ch]
  __int64 v140; // [rsp+38h] [rbp-178h]
  __int64 v141; // [rsp+58h] [rbp-158h]
  unsigned __int64 *v142; // [rsp+60h] [rbp-150h]
  unsigned __int64 v143; // [rsp+68h] [rbp-148h]
  int k; // [rsp+68h] [rbp-148h]
  int v145; // [rsp+68h] [rbp-148h]
  __m128i v146; // [rsp+70h] [rbp-140h] BYREF
  __int64 v147; // [rsp+80h] [rbp-130h] BYREF
  __int128 v148; // [rsp+88h] [rbp-128h]
  __int64 v149; // [rsp+A0h] [rbp-110h]
  __int128 v150; // [rsp+A8h] [rbp-108h]
  __int64 (__fastcall **v151)(); // [rsp+C0h] [rbp-F0h] BYREF
  unsigned __int64 *v152; // [rsp+C8h] [rbp-E8h]
  __int64 v153; // [rsp+D0h] [rbp-E0h]
  __int64 v154; // [rsp+E0h] [rbp-D0h] BYREF
  __int128 v155; // [rsp+E8h] [rbp-C8h]
  __int64 v156; // [rsp+100h] [rbp-B0h] BYREF
  __int128 v157; // [rsp+108h] [rbp-A8h]
  __int64 v158; // [rsp+118h] [rbp-98h]
  __int128 v159; // [rsp+120h] [rbp-90h]
  __int64 v160; // [rsp+130h] [rbp-80h] BYREF
  __int128 v161; // [rsp+138h] [rbp-78h]
  __int64 v162; // [rsp+148h] [rbp-68h]
  __int128 v163; // [rsp+150h] [rbp-60h]
  __int64 v164; // [rsp+160h] [rbp-50h]
  __int128 v165; // [rsp+168h] [rbp-48h]
  unsigned __int64 v166; // [rsp+178h] [rbp-38h]

  v6 = a2[17].m128i_i64[1];
  v7 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v166 = __readfsqword(0x28u);
  v8 = *(_QWORD *)a3;
  *(_QWORD *)a3 = v6;
  v9 = a2[18].m128i_i64[0];
  v147 = 0;
  *(_QWORD *)(a3 + 8) = v9;
  v10 = a2[18].m128i_i64[1];
  v149 = 0;
  *(_QWORD *)(a3 + 16) = v10;
  a2[18] = v7;
  a2[17].m128i_i64[1] = v8;
  v151 = off_4BC3F0;
  v148 = 0;
  v150 = 0;
  v152 = nullptr;
  v11 = *(_QWORD *)(a1 + 152);
  v153 = 0;
  v160 = 0;
  v162 = 0;
  v164 = 0;
  v156 = 0;
  v158 = 0;
  v161 = 0;
  v163 = 0;
  v165 = 0;
  v157 = 0;
  v159 = 0;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 160) = 0;
    qfree();
    *(_QWORD *)(a1 + 152) = 0;
    *(_QWORD *)(a1 + 168) = 0;
  }
  *(_BYTE *)(a1 + 32) = 1;
  if ( (a4 & 2) == 0 )
  {
    v146 = 0u;
    sub_73EE0((_QWORD *)a1, &v146, a2);
    v12 = v146;
LABEL_5:
    v13 = &v146;
    v146 = v12;
    v14 = sub_743E0(a1, &v146, a2);
    v18 = v146.m128i_i64[1];
    v141 = v146.m128i_i64[1];
    v142 = (unsigned __int64 *)v146.m128i_i64[0];
    if ( (a4 & 2) == 0 || !v14 )
      goto LABEL_7;
    goto LABEL_191;
  }
  sub_3C4F90(a2, a1, "initial graph", 0, 0);
  v146 = 0u;
  v54 = sub_73EE0((_QWORD *)a1, &v146, a2);
  v12 = v146;
  if ( !v54 )
    goto LABEL_5;
  v55 = a2[14].m128i_i64[0];
  v154 = 0;
  v155 = 0;
  if ( v55 )
  {
    if ( a2[14].m128i_i64[1] )
    {
      v56 = *(_QWORD **)(v55 + 8);
      if ( v56 != (_QWORD *)v55 )
      {
        v57 = *((_DWORD *)v56 + 7);
LABEL_69:
        v154 = qvector_reserve();
        v58 = v155;
        v60 = v154;
        while ( 1 )
        {
          *(_DWORD *)(v60 + 4 * v58) = v57;
          v58 = v155 + 1;
          *(_QWORD *)&v155 = v155 + 1;
          if ( (*v56 & 2) == 0 )
          {
            v59 = (_QWORD *)v56[2];
            if ( (*(_BYTE *)v59 & 2) != 0 )
            {
              v100 = (_QWORD *)(*v56 & 0xFFFFFFFFFFFFFFFCLL);
              v101 = *v100;
              if ( (*v100 & 2) == 0 )
              {
                while ( (_QWORD *)v100[2] == v56 )
                {
                  v56 = v100;
                  v102 = v101 & 0xFFFFFFFFFFFFFFFCLL;
                  v101 = *(_QWORD *)(v101 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v101 & 2) != 0 )
                  {
                    v56 = (_QWORD *)v102;
                    goto LABEL_67;
                  }
                  v100 = (_QWORD *)v102;
                }
              }
              v56 = v100;
            }
            else
            {
              do
              {
                v56 = v59;
                v59 = (_QWORD *)v59[1];
              }
              while ( (*(_BYTE *)v59 & 2) == 0 );
            }
          }
LABEL_67:
          if ( (_QWORD *)a2[14].m128i_i64[0] == v56 )
            break;
          v57 = *((_DWORD *)v56 + 7);
          v60 = v154;
          if ( *((_QWORD *)&v155 + 1) < (unsigned __int64)(v58 + 1) )
            goto LABEL_69;
        }
      }
    }
  }
  sub_3C4F90(a2, a1, "gotos removed", 0, &v154);
  if ( v154 )
  {
    *(_QWORD *)&v155 = 0;
    qfree();
  }
  v64 = sub_743E0(a1, &v146, a2);
  v13 = (__m128i *)v146.m128i_i64[1];
  __SET_PAIR__(v141, v18, *(_OWORD *)&v146);
  v142 = (unsigned __int64 *)v146.m128i_i64[0];
  if ( v64 )
  {
LABEL_191:
    v103 = a2[15].m128i_i64[0];
    v154 = 0;
    v155 = 0;
    if ( v103 )
    {
      if ( a2[15].m128i_i64[1] )
      {
        v104 = *(_QWORD **)(v103 + 8);
        if ( v104 != (_QWORD *)v103 )
        {
          v105 = *((_DWORD *)v104 + 6);
LABEL_200:
          v154 = qvector_reserve();
          v106 = v155;
          v108 = v154;
          while ( 1 )
          {
            *(_DWORD *)(v108 + 4 * v106) = v105;
            v106 = v155 + 1;
            *(_QWORD *)&v155 = v155 + 1;
            if ( (*v104 & 2) == 0 )
            {
              v107 = (_QWORD *)v104[2];
              if ( (*(_BYTE *)v107 & 2) != 0 )
              {
                v125 = (_QWORD *)(*v104 & 0xFFFFFFFFFFFFFFFCLL);
                v126 = *v125;
                if ( (*v125 & 2) == 0 )
                {
                  while ( (_QWORD *)v125[2] == v104 )
                  {
                    v104 = v125;
                    v127 = v126 & 0xFFFFFFFFFFFFFFFCLL;
                    v126 = *(_QWORD *)(v126 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v126 & 2) != 0 )
                    {
                      v104 = (_QWORD *)v127;
                      goto LABEL_198;
                    }
                    v125 = (_QWORD *)v127;
                  }
                }
                v104 = v125;
              }
              else
              {
                do
                {
                  v104 = v107;
                  v107 = (_QWORD *)v107[1];
                }
                while ( (*(_BYTE *)v107 & 2) == 0 );
              }
            }
LABEL_198:
            if ( v104 == (_QWORD *)a2[15].m128i_i64[0] )
              break;
            v105 = *((_DWORD *)v104 + 6);
            v108 = v154;
            if ( *((_QWORD *)&v155 + 1) < (unsigned __int64)(v106 + 1) )
              goto LABEL_200;
          }
        }
      }
    }
    v13 = (__m128i *)a1;
    sub_3C4F90(a2, a1, "nway normalization result", &v154, 0);
    if ( v154 )
    {
      *(_QWORD *)&v155 = 0;
      qfree();
    }
  }
LABEL_7:
  sub_6B810((__int64 *)a1, (__int64)v13, v15, v18, v16, v17);
  v139 = *(_DWORD *)(a1 + 160) + 1;
  v19 = *(unsigned __int64 (__fastcall **)(__m128i *, int))(a2->m128i_i64[0] + 168);
  v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  if ( v20 == sub_60E50 )
  {
    v21 = *(unsigned int *)(a1 + 144);
    if ( (char *)v19 == (char *)sub_68120 )
      goto LABEL_9;
LABEL_239:
    v19(a2, v21);
    goto LABEL_11;
  }
  v21 = (unsigned int)v20(a1);
  if ( (char *)v19 != (char *)sub_68120 )
    goto LABEL_239;
LABEL_9:
  sub_631C0((__int64)a2, v21);
  v22 = a2[19].m128i_u64[1];
  v21 = (int)v21;
  LODWORD(v154) = 0;
  v23 = v21;
  if ( (int)v21 < v22 )
  {
    a2[19].m128i_i64[1] = (int)v21;
    goto LABEL_11;
  }
  if ( v22 < (int)v21 )
  {
    v61 = a2[19].m128i_u64[0];
    v62 = a2[20].m128i_u64[0];
    if ( (unsigned __int64)&v154 < v61 || (unsigned __int64)&v154 >= v61 + 4 * v62 )
    {
      if ( v62 < v23 )
      {
        v130 = qvector_reserve();
        a2[19].m128i_i64[0] = v130;
        v61 = v130;
        v22 = a2[19].m128i_u64[1];
        if ( v22 >= v23 )
          goto LABEL_78;
      }
      v63 = v23;
      while ( 1 )
      {
        *(_DWORD *)(v61 + 4 * v22++) = 0;
        if ( v23 == v22 )
          break;
        v61 = a2[19].m128i_u64[0];
      }
    }
    else
    {
      if ( v62 < v23 )
      {
        v131 = qvector_reserve();
        a2[19].m128i_i64[0] = v131;
        v61 = v131;
        v63 = v23;
        v22 = a2[19].m128i_u64[1];
        if ( v22 >= v23 )
          goto LABEL_78;
      }
      else
      {
        v63 = v23;
      }
      while ( 1 )
      {
        *(_DWORD *)(v61 + 4 * v22++) = 0;
        if ( v63 == v22 )
          break;
        v61 = a2[19].m128i_u64[0];
      }
    }
    v23 = v63;
LABEL_78:
    a2[19].m128i_i64[1] = v23;
  }
LABEL_11:
  v24 = (signed int *)a2[12].m128i_i64[1];
  for ( i = &v24[2 * a2[13].m128i_i64[0]]; i != v24; v24 += 2 )
  {
    v26 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
    if ( v26 == sub_60E50 )
      v27 = *(_DWORD *)(a1 + 144);
    else
      v27 = v26(a1);
    v28 = *v24;
    v29 = v24[1];
    v30 = *v24;
    if ( v28 < v27 && v29 < (unsigned __int64)v27 )
    {
      *(_DWORD *)(a2[17].m128i_i64[1] + 4 * v28) &= 0xFFFFFFE7;
      v31 = *(_DWORD **)(a1 + 152);
      v30 = *v24;
      v32 = &v31[*(_QWORD *)(a1 + 160)];
      if ( v31 == v32 )
      {
        v29 = v24[1];
      }
      else
      {
        v33 = *(_DWORD **)(a1 + 152);
        while ( v30 != *v33 )
        {
          if ( v32 == ++v33 )
            goto LABEL_21;
        }
        if ( v32 != v33 )
        {
          sub_68EA0((__int64)"failed to force goto for (%d,%d)\n", v30, v24[1]);
          continue;
        }
LABEL_21:
        v29 = v24[1];
        while ( v29 != *v31 )
        {
          if ( v32 == ++v31 )
            goto LABEL_25;
        }
        if ( v32 != v31 )
          goto LABEL_93;
      }
LABEL_25:
      v34 = *(_QWORD *)(a1 + 48) + 24LL * v30;
      v35 = *(_DWORD **)v34;
      v36 = *(_QWORD *)v34 + 4LL * *(_QWORD *)(v34 + 8);
      if ( v35 != (_DWORD *)v36 )
      {
        while ( *v35 != v29 )
        {
          if ( (_DWORD *)v36 == ++v35 )
            goto LABEL_93;
        }
        if ( (_DWORD *)v36 != v35 )
        {
          v146.m128i_i64[0] = (__int64)v142;
          v146.m128i_i64[1] = v141;
          v37 = sub_70E60((__int64 *)a1, &v146, a2, (__int64)&v147, v30, v29, 1);
          if ( v37 )
          {
            sub_6EFC0(a1, a2, v37, &v147, &v151, nullptr, &v146);
            v141 = v146.m128i_i64[1];
            v142 = (unsigned __int64 *)v146.m128i_i64[0];
          }
          else
          {
            sub_68EA0((__int64)"failed to force goto for (%d,%d)\n", *v24, v24[1]);
          }
          continue;
        }
      }
    }
LABEL_93:
    sub_68EA0((__int64)"failed to force goto for (%d,%d)\n", v30, v29);
  }
  v154 = 0;
  v155 = 0;
LABEL_34:
  while ( 2 )
  {
    v38 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
    if ( v38 == sub_60E50 )
      v39 = *(_DWORD *)(a1 + 144);
    else
      v39 = v38(a1);
    if ( v139 < v39 )
    {
      v40 = v161;
      v41 = 0;
      if ( (_QWORD)v161 )
      {
        do
        {
          v42 = v41 + 1;
          qfree();
          v41 = v42;
        }
        while ( v40 != v42 );
      }
      v43 = v163;
      *(_QWORD *)&v161 = 0;
      v44 = 0;
      if ( (_QWORD)v163 )
      {
        do
        {
          v45 = v44 + 1;
          qfree();
          v44 = v45;
        }
        while ( v43 != v45 );
      }
      *(_QWORD *)&v163 = 0;
      *(_QWORD *)&v165 = 0;
      *(_QWORD *)&v150 = 0;
      sub_69EC0(a1, &v156, (__int64)&v151);
      v46 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
      if ( v46 == sub_60E50 )
        v138 = *(_DWORD *)(a1 + 144);
      else
        v138 = v46(a1);
      if ( v138 > 0 )
      {
        v143 = 0;
        while ( 1 )
        {
          v50 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
          if ( v50 == sub_60E50 )
          {
            if ( v139 >= *(_DWORD *)(a1 + 144) )
              goto LABEL_84;
          }
          else if ( v139 >= (int)v50(a1) )
          {
LABEL_84:
            LODWORD(v51) = v143;
            goto LABEL_85;
          }
          LODWORD(v51) = v143 + 1;
          if ( v143 >= (unsigned __int64)v157 )
            goto LABEL_85;
          v52 = *(_DWORD *)(v156 + 4 * v143);
          if ( v52 == -1 )
            goto LABEL_85;
          if ( (unsigned __int64)(unsigned int)v52 >= *(_QWORD *)(a1 + 104)
            || (v53 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * v52), v53 < 0)
            || v52 == v53 )
          {
            v146.m128i_i64[0] = (__int64)v142;
            v146.m128i_i64[1] = v141;
            v47 = sub_71780(
                    (__int64 *)a1,
                    &v146,
                    v52,
                    (unsigned __int64 *)&v154,
                    a2,
                    &v147,
                    (void (__fastcall ***)(_QWORD, __int64, _QWORD, __int64))&v151,
                    &v160,
                    1);
            if ( v47 || (_QWORD)v155 )
              goto LABEL_89;
            v48 = v150;
            v49 = v149;
            if ( *((_QWORD *)&v150 + 1) < (unsigned __int64)(v150 + 1) )
            {
              v149 = qvector_reserve();
              v49 = v149;
              v48 = v150;
            }
            *(_DWORD *)(v49 + 4 * v48) = v52;
            *(_QWORD *)&v150 = v150 + 1;
          }
          if ( ++v143 == v138 )
            goto LABEL_85;
        }
      }
      LODWORD(v51) = 0;
LABEL_85:
      if ( (_QWORD)v150 )
      {
        v65 = 0;
        v66 = 0;
        while ( 1 )
        {
          v67 = *(_DWORD *)(v149 + 4 * v66);
          v146.m128i_i64[0] = (__int64)v142;
          v146.m128i_i64[1] = v141;
          v47 = sub_734E0((__int64 *)a1, &v146, v67, a2, &v147, &v151, &v160);
          if ( v47 )
            break;
          v66 = ++v65;
          if ( v65 >= (unsigned __int64)v150 )
            goto LABEL_121;
        }
LABEL_89:
        if ( !v47 )
          goto LABEL_117;
LABEL_90:
        v146.m128i_i64[0] = (__int64)v142;
        v146.m128i_i64[1] = v141;
        sub_6EFC0(a1, a2, v47, &v147, &v151, &v154, &v146);
        v141 = v146.m128i_i64[1];
        v142 = (unsigned __int64 *)v146.m128i_i64[0];
        v68 = v155;
        v69 = v155;
        if ( (_QWORD)v155 )
          goto LABEL_91;
        if ( (a4 & 1) == 0 )
          continue;
        v73 = v161;
        v74 = 0;
        if ( (_QWORD)v161 )
        {
          v140 = v155;
          do
          {
            ++v74;
            qfree();
          }
          while ( v73 != v74 );
          v69 = v140;
        }
        v75 = v163;
        *(_QWORD *)&v161 = 0;
        v76 = v69;
        if ( (_QWORD)v163 )
        {
          do
          {
            v77 = v76 + 1;
            qfree();
            v76 = v77;
          }
          while ( v75 != v77 );
        }
        *(_QWORD *)&v163 = 0;
        *(_QWORD *)&v165 = 0;
        if ( v138 <= (int)v51 )
          continue;
        v51 = (int)v51;
        while ( 1 )
        {
          if ( v51 >= (unsigned __int64)v157 )
            goto LABEL_34;
          v79 = *(_DWORD *)(v156 + 4 * v51);
          if ( v79 == -1 )
            goto LABEL_34;
          if ( (unsigned __int64)(unsigned int)v79 >= *(_QWORD *)(a1 + 104)
            || (v78 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * v79), v78 < 0)
            || v79 == v78 )
          {
            v80 = (_DWORD *)a2[16].m128i_i64[0];
            v81 = &v80[a2[16].m128i_i64[1]];
            if ( v80 == v81 )
              goto LABEL_114;
            while ( v79 != *v80 )
            {
              if ( v81 == ++v80 )
                goto LABEL_114;
            }
            if ( v81 == v80 )
            {
LABEL_114:
              v146.m128i_i64[0] = (__int64)v142;
              v146.m128i_i64[1] = v141;
              v47 = sub_71780(
                      (__int64 *)a1,
                      &v146,
                      v79,
                      (unsigned __int64 *)&v154,
                      a2,
                      &v147,
                      (void (__fastcall ***)(_QWORD, __int64, _QWORD, __int64))&v151,
                      &v160,
                      0);
              if ( v47 || (_QWORD)v155 )
              {
                LODWORD(v51) = v51 + 1;
                if ( !v47 )
                {
LABEL_117:
                  v68 = v155;
                  if ( !(_QWORD)v155 )
                  {
                    if ( !under_debugger )
                      sub_37E160(51805);
                    goto LABEL_265;
                  }
LABEL_91:
                  v70 = (unsigned int *)(v154 + 8 * v68 - 8);
                  v71 = *v70;
                  v72 = v70[1];
                  *(_QWORD *)&v155 = v68 - 1;
                  v146.m128i_i64[0] = (__int64)v142;
                  v146.m128i_i64[1] = v141;
                  v47 = sub_70E60((__int64 *)a1, &v146, a2, (__int64)&v147, v71, v72, 0);
                  if ( !v47 )
                  {
                    *(_QWORD *)&v155 = 0;
                    goto LABEL_34;
                  }
                }
                goto LABEL_90;
              }
            }
          }
          if ( v138 <= (int)++v51 )
            goto LABEL_34;
        }
      }
LABEL_121:
      if ( v138 > 0 )
      {
        for ( j = 0; ; j = 1 )
        {
          v135 = 0;
          v133 = 0;
          v136 = j ^ 1;
          do
          {
            if ( v133 < (unsigned __int64)v157 )
            {
              v82 = *(_DWORD *)(v156 + 4 * v133);
              if ( v82 != -1 )
              {
                for ( k = 0; ; ++k )
                {
                  v84 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 104LL);
                  if ( v84 == sub_60EB0 )
                  {
                    v85 = 0;
                    if ( *(_QWORD *)(a1 + 80) )
                      v85 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 24LL * (int)v82 + 8);
                    if ( k >= v85 )
                      break;
                  }
                  else if ( k >= (int)v84(a1, v82) )
                  {
                    break;
                  }
                  v86 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 120LL);
                  if ( v86 == sub_60EF0 )
                    v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL * (int)v82) + 4LL * k);
                  else
                    v87 = v86(a1, v82, k);
                  v88 = sub_6C610(a1, (__int64)a2, v87);
                  v137 = v88;
                  if ( (v88 & v136) != 0 )
                  {
                    v135 = v88 & v136;
                  }
                  else
                  {
                    v146.m128i_i64[0] = (__int64)v142;
                    v146.m128i_i64[1] = v141;
                    v83 = sub_70E60((__int64 *)a1, &v146, a2, (__int64)&v147, v87, v82, j);
                    v47 = v83;
                    if ( v83 )
                    {
                      if ( v137 )
                      {
                        v145 = v83;
                        sub_68EA0((__int64)"### removed eh34 edge %d->%d\n", v87, v82);
                        v47 = v145;
                      }
                      LODWORD(v51) = v133;
                      goto LABEL_89;
                    }
                  }
                }
              }
            }
            ++v133;
          }
          while ( v138 != v133 );
          if ( !v135 || j == 1 )
            break;
        }
      }
    }
    break;
  }
  sub_3C5430(a2);
  v89 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  if ( v89 == sub_60E50 )
    v90 = *(_DWORD *)(a1 + 144);
  else
    v90 = v89(a1);
  if ( v139 != v90 )
  {
    if ( !under_debugger )
      sub_37E160(50365);
LABEL_265:
    BUG();
  }
  if ( v154 )
  {
    *(_QWORD *)&v155 = 0;
    qfree();
  }
  if ( v142 )
  {
    if ( !v141
      || (v115 = *v142, v116 = (__int64 *)(*v142 & 0xFFFFFFFFFFFFFFFCLL), v117 = *v116, v118 = v116, (*v116 & 2) != 0) )
    {
LABEL_148:
      qfree();
      goto LABEL_149;
    }
    v119 = (__int64 *)v116[1];
    v120 = *v119;
    if ( (*v119 & 2) != 0 )
    {
      v121 = v118[2];
      if ( (*(_BYTE *)v121 & 2) != 0 )
      {
LABEL_252:
        *v118 = v117 | 2;
LABEL_220:
        if ( v115 > 3 )
          qfree();
        goto LABEL_148;
      }
      goto LABEL_213;
    }
    v128 = (__int64 *)v119[1];
    if ( (*(_BYTE *)v128 & 2) != 0 )
    {
      v129 = (__int64 *)v119[2];
      if ( (*(_BYTE *)v129 & 2) != 0 )
      {
LABEL_257:
        *v119 = v120 | 2;
LABEL_248:
        if ( v119 )
          qfree();
        v121 = v118[2];
        if ( (*(_BYTE *)v121 & 2) != 0 )
        {
LABEL_219:
          v117 = *v118;
          if ( (*v118 & 2) != 0 )
            goto LABEL_220;
          goto LABEL_252;
        }
LABEL_213:
        v122 = *(__int64 **)(v121 + 8);
        if ( (*(_BYTE *)v122 & 2) != 0 )
        {
          v123 = *(__int64 **)(v121 + 16);
          if ( (*(_BYTE *)v123 & 2) != 0 )
          {
            v124 = *(_QWORD *)v121;
LABEL_260:
            *(_QWORD *)v121 = v124 | 2;
LABEL_217:
            if ( v121 )
              qfree();
            goto LABEL_219;
          }
        }
        else
        {
          sub_678A0(v122);
          v123 = *(__int64 **)(v121 + 16);
          if ( (*(_BYTE *)v123 & 2) != 0 )
            goto LABEL_216;
        }
        sub_678A0(v123);
LABEL_216:
        v124 = *(_QWORD *)v121;
        if ( (*(_QWORD *)v121 & 2) != 0 )
          goto LABEL_217;
        goto LABEL_260;
      }
    }
    else
    {
      sub_678A0(v128);
      v129 = (__int64 *)v119[2];
      if ( (*(_BYTE *)v129 & 2) != 0 )
        goto LABEL_247;
    }
    sub_678A0(v129);
LABEL_247:
    v120 = *v119;
    if ( (*v119 & 2) != 0 )
      goto LABEL_248;
    goto LABEL_257;
  }
LABEL_149:
  if ( v158 )
  {
    *(_QWORD *)&v159 = 0;
    qfree();
  }
  if ( v156 )
  {
    *(_QWORD *)&v157 = 0;
    qfree();
  }
  if ( v164 )
  {
    *(_QWORD *)&v165 = 0;
    qfree();
  }
  if ( v162 )
  {
    if ( (_QWORD)v163 )
    {
      v91 = 0;
      v92 = v163;
      do
      {
        ++v91;
        qfree();
      }
      while ( v92 != v91 );
    }
    *(_QWORD *)&v163 = 0;
    qfree();
  }
  if ( v160 )
  {
    if ( (_QWORD)v161 )
    {
      v93 = 0;
      v94 = v161;
      do
      {
        ++v93;
        qfree();
      }
      while ( v94 != v93 );
    }
    *(_QWORD *)&v161 = 0;
    qfree();
  }
  v151 = off_4BC3F0;
  v95 = v152;
  if ( v152 )
  {
    v96 = *v152;
    if ( !v153 )
    {
      *v152 = *v152 & 3 | (unsigned __int64)v152 & 0xFFFFFFFFFFFFFFFCLL;
      v97 = v152;
      v98 = (__m128i)(unsigned __int64)v152;
      *v152 &= ~1uLL;
      *(__m128i *)(v97 + 1) = _mm_unpacklo_epi64(v98, v98);
      *v152 |= 2u;
      goto LABEL_168;
    }
    v109 = (__int64 *)(v96 & 0xFFFFFFFFFFFFFFFCLL);
    v110 = *(_QWORD *)(v96 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v110 & 2) != 0 )
    {
LABEL_209:
      *v95 = v96 & 3 | (unsigned __int64)v95 & 0xFFFFFFFFFFFFFFFCLL;
      v113 = v152;
      v114 = (__m128i)(unsigned __int64)v152;
      *v152 &= ~1uLL;
      *(__m128i *)(v113 + 1) = _mm_unpacklo_epi64(v114, v114);
      *v152 |= 2u;
      v153 = 0;
LABEL_168:
      if ( v152 )
        qfree();
      goto LABEL_170;
    }
    v111 = (__int64 *)v109[1];
    if ( (*(_BYTE *)v111 & 2) != 0 )
    {
      v112 = (__int64 *)v109[2];
      if ( (*(_BYTE *)v112 & 2) != 0 )
        goto LABEL_243;
    }
    else
    {
      sub_67D90(v111);
      v112 = (__int64 *)v109[2];
      if ( (*(_BYTE *)v112 & 2) != 0 )
        goto LABEL_205;
    }
    sub_67D90(v112);
LABEL_205:
    v110 = *v109;
    if ( (*v109 & 2) != 0 )
    {
LABEL_206:
      if ( v96 > 3 )
        qfree();
      v95 = v152;
      v96 = *v152;
      goto LABEL_209;
    }
LABEL_243:
    *v109 = v110 | 2;
    goto LABEL_206;
  }
LABEL_170:
  if ( v149 )
  {
    *(_QWORD *)&v150 = 0;
    qfree();
  }
  if ( v147 )
  {
    *(_QWORD *)&v148 = 0;
    qfree();
  }
  return 1;
}

