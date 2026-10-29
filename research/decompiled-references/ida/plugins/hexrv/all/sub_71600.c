__int64 __fastcall sub_71600(
        __int64 *a1,
        _QWORD **a2,
        int a3,
        unsigned __int64 *a4,
        _QWORD *a5,
        __int64 *a6,
        void (__fastcall ***a7)(_QWORD, __int64, _QWORD, __int64),
        __int64 *a8,
        char a9)
{
  __int64 *v10; // r12
  __int64 v11; // rbx
  __int64 *v12; // r9
  __int64 (__fastcall *v13)(__int64, int); // rax
  int v14; // r14d
  _DWORD *v15; // rax
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  _DWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r14
  __int64 (__fastcall *v22)(__int64, int, int); // r9
  __int64 v23; // r15
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, int, int); // rax
  int v26; // ebp
  __int64 v27; // rdx
  _DWORD *v28; // rcx
  _DWORD *v29; // rax
  __int64 result; // rax
  unsigned int v31; // eax
  bool v32; // cl
  __int64 v33; // r10
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // r15
  unsigned int v37; // r12d
  __int64 (__fastcall *v38)(__int64, int, int); // r10
  __int64 (__fastcall *v39)(__int64, int, int); // rax
  int v40; // eax
  __int64 v41; // r8
  __int64 v42; // rax
  _DWORD *v43; // rsi
  _QWORD *v44; // rcx
  __int64 (__fastcall *v45)(__int64, int); // rax
  __int64 (__fastcall *v46)(__int64, int); // rcx
  unsigned __int64 v47; // rax
  _DWORD *v48; // rcx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  _QWORD *v53; // rdx
  __int64 (__fastcall *v54)(__int64, int, int); // rax
  unsigned int *v55; // rax
  unsigned int v56; // r14d
  __int64 (__fastcall *v57)(__int64, int); // rax
  __int64 (__fastcall *v58)(__int64, int); // rax
  __int64 v59; // rdx
  int v60; // eax
  int *v61; // rsi
  __int64 v62; // rax
  int *v63; // rcx
  int *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  int v67; // eax
  __int64 (__fastcall *v68)(__int64, int, int); // rax
  int v69; // r13d
  __int64 *v70; // rbx
  int v71; // r12d
  __int64 (__fastcall *v72)(__int64, int); // rax
  char v73; // dl
  __int64 (__fastcall *v74)(__int64, int); // rax
  _DWORD *v75; // rax
  _DWORD *v76; // rsi
  int v77; // eax
  int v78; // eax
  bool v79; // zf
  int v80; // eax
  int v81; // eax
  __int64 *v82; // rax
  __int64 v83; // rdi
  __int64 *v84; // r13
  __int64 *v85; // r12
  _DWORD *v86; // rcx
  _DWORD *v87; // rax
  __int64 v88; // rdx
  __int64 (__fastcall *v89)(__int64, int, int); // rax
  __int64 (__fastcall *v90)(__int64, int); // rax
  bool v91; // cl
  int v92; // eax
  _DWORD *v93; // rax
  _DWORD *v94; // rcx
  __int64 (__fastcall *v95)(__int64, int); // rax
  __int64 v96; // rbx
  __int64 v97; // rbp
  int v98; // eax
  __int64 v99; // rsi
  int v100; // eax
  int v101; // eax
  __int64 v102; // rax
  __int64 v103; // rdx
  _DWORD *v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned int *v107; // rsi
  __int64 v108; // rax
  unsigned int *v109; // rcx
  unsigned int *v110; // rdx
  __int64 v111; // r8
  __int64 (__fastcall *v112)(__int64, int, int); // rax
  __int64 v113; // rax
  int v114; // ebp
  int v115; // eax
  __int64 (__fastcall *v116)(__int64, int, int); // rax
  int v117; // eax
  __int64 (__fastcall *v118)(__int64, int, int); // rax
  int v119; // eax
  __int64 (__fastcall *v120)(__int64, int, int); // rax
  int v121; // eax
  int v122; // eax
  __int64 (__fastcall *v123)(__int64); // rax
  int v124; // eax
  int v125; // eax
  __int64 (__fastcall *v126)(__int64, int); // rax
  int v127; // eax
  __int64 (__fastcall *v128)(__int64, int); // rax
  int v129; // eax
  unsigned int v130; // eax
  __int64 v131; // r8
  __int64 (__fastcall *v132)(__int64, int, int); // rax
  int v133; // eax
  __int64 (__fastcall *v134)(__int64); // rax
  int v135; // eax
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 (__fastcall *v138)(__int64, int, int); // rax
  int v139; // eax
  __int64 v140; // rax
  _DWORD *v141; // rsi
  _DWORD *v142; // rdi
  __int64 v143; // r8
  _DWORD *v144; // rdx
  _DWORD *v145; // rdx
  __int64 v146; // rcx
  int v147; // eax
  __int64 (__fastcall *v148)(__int64, int, int); // rax
  __int64 (__fastcall *v149)(__int64, int, int); // rax
  int v150; // eax
  __int64 v151; // rax
  _DWORD *v152; // rsi
  _DWORD *v153; // rcx
  __int64 v154; // r8
  _DWORD *v155; // rdi
  __int64 v156; // rdx
  _DWORD *v157; // rdi
  _DWORD *v158; // rdi
  __int64 v159; // rax
  __int64 v160; // rdx
  _DWORD *v161; // rcx
  _DWORD *v162; // rsi
  _DWORD *v163; // rdi
  int *v164; // rdi
  __int64 (__fastcall *v165)(__int64, int, int); // rax
  int v166; // eax
  __int64 (__fastcall *v167)(__int64, int, int); // rax
  int v168; // eax
  unsigned int *v169; // rdi
  __int64 (__fastcall *v170)(__int64, int, int); // rax
  int v171; // eax
  __int64 v172; // rdx
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rdx
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rdx
  int v189; // [rsp+8h] [rbp-80h]
  int v190; // [rsp+18h] [rbp-70h]
  __int64 v191; // [rsp+18h] [rbp-70h]
  int v192; // [rsp+18h] [rbp-70h]
  __int64 *v193; // [rsp+18h] [rbp-70h]
  __int64 *v194; // [rsp+18h] [rbp-70h]
  bool v195; // [rsp+18h] [rbp-70h]
  bool v196; // [rsp+18h] [rbp-70h]
  __int64 (__fastcall *v197)(__int64, int, int); // [rsp+20h] [rbp-68h]
  __int64 (__fastcall *v198)(__int64, int, int); // [rsp+20h] [rbp-68h]
  char v199; // [rsp+20h] [rbp-68h]
  bool v200; // [rsp+20h] [rbp-68h]
  bool v201; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall *v202)(__int64, int, int); // [rsp+28h] [rbp-60h]
  bool v203; // [rsp+28h] [rbp-60h]
  bool v204; // [rsp+28h] [rbp-60h]
  bool v205; // [rsp+28h] [rbp-60h]
  __int64 v206; // [rsp+28h] [rbp-60h]
  bool v207; // [rsp+28h] [rbp-60h]
  int v209; // [rsp+30h] [rbp-58h]
  __int64 *v210; // [rsp+38h] [rbp-50h]
  int v211; // [rsp+38h] [rbp-50h]
  bool v212; // [rsp+38h] [rbp-50h]
  bool v213; // [rsp+38h] [rbp-50h]
  unsigned __int64 v214; // [rsp+40h] [rbp-48h]
  bool v215; // [rsp+40h] [rbp-48h]
  bool v216; // [rsp+40h] [rbp-48h]
  unsigned int v217; // [rsp+48h] [rbp-40h]
  char v218; // [rsp+48h] [rbp-40h]
  char v219; // [rsp+48h] [rbp-40h]
  int v220; // [rsp+4Ch] [rbp-3Ch]

  v10 = a1;
  v11 = a3;
  v12 = a8;
  a6[1] = 0;
  v13 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
  if ( v13 == sub_60D10 )
  {
    v14 = 0;
    if ( a1[7] )
      v14 = *(_DWORD *)(a1[6] + 24LL * a3 + 8);
  }
  else
  {
    v52 = v13((__int64)a1, a3);
    v12 = a8;
    v14 = v52;
  }
  v15 = (_DWORD *)a5[32];
  v16 = &v15[a5[33]];
  if ( v15 != v16 )
  {
    while ( *v15 != (_DWORD)v11 )
    {
      if ( v16 == ++v15 )
        goto LABEL_26;
    }
    if ( v16 != v15 )
    {
      v17 = a6[1];
      v18 = (_DWORD *)(*a6 + 4 * v17);
      if ( (_DWORD *)*a6 == v18 )
        goto LABEL_43;
      v19 = (_DWORD *)*a6;
      while ( *v19 != (_DWORD)v11 )
      {
        if ( v18 == ++v19 )
          goto LABEL_43;
      }
      if ( v18 == v19 )
      {
LABEL_43:
        if ( a6[2] < (unsigned __int64)(v17 + 1) )
        {
          v193 = v12;
          v65 = qvector_reserve();
          v66 = a6[1];
          v12 = v193;
          *a6 = v65;
          v18 = (_DWORD *)(v65 + 4 * v66);
        }
        *v18 = v11;
        ++a6[1];
      }
      if ( v14 > 0 )
      {
        v20 = v14;
        v190 = v11;
        v21 = 0;
        v210 = v12;
        v22 = sub_60D50;
        v23 = v20;
        v24 = 24LL * (int)v11;
        do
        {
          v25 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
          if ( v25 == v22 )
          {
            v26 = *(_DWORD *)(*(_QWORD *)(a1[6] + v24) + 4 * v21);
          }
          else
          {
            v197 = v22;
            v49 = v25((__int64)a1, v190, v21);
            v22 = v197;
            v26 = v49;
          }
          v27 = a6[1];
          v28 = (_DWORD *)(*a6 + 4 * v27);
          if ( (_DWORD *)*a6 == v28 )
            goto LABEL_55;
          v29 = (_DWORD *)*a6;
          while ( v26 != *v29 )
          {
            if ( v28 == ++v29 )
              goto LABEL_55;
          }
          if ( v28 == v29 )
          {
LABEL_55:
            if ( a6[2] < (unsigned __int64)(v27 + 1) )
            {
              v198 = v22;
              v50 = qvector_reserve();
              v51 = a6[1];
              v22 = v198;
              *a6 = v50;
              v28 = (_DWORD *)(v50 + 4 * v51);
            }
            *v28 = v26;
            ++a6[1];
          }
          ++v21;
        }
        while ( v23 != v21 );
        LODWORD(v11) = v190;
        v12 = v210;
      }
      return sub_70E40(a1, a2, v11, a4, a5, a6, a7, v12);
    }
  }
LABEL_26:
  v31 = sub_6BC60(a5, v11);
  v32 = 0;
  v217 = v31;
  v214 = v31;
  if ( (unsigned __int64)v31 < a5[36] )
    v32 = (*(_BYTE *)(a5[35] + 4LL * (int)v31) & 8) != 0;
  if ( v14 > 0 )
  {
    v33 = 0;
    v34 = 24LL * (int)v11;
    while ( v32 )
    {
      if ( v14 == ++v33 )
        goto LABEL_47;
    }
    v35 = *a1;
    v36 = v33;
    v37 = v33;
    v38 = sub_60D50;
    while ( 1 )
    {
      v39 = *(__int64 (__fastcall **)(__int64, int, int))(v35 + 112);
      if ( v39 == v38 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1[6] + v34) + 4 * v36) == (_DWORD)v11 )
          goto LABEL_38;
      }
      else
      {
        v202 = v38;
        v191 = v34;
        v40 = v39((__int64)a1, v11, v37);
        v38 = v202;
        v34 = v191;
        if ( v40 == (_DWORD)v11 )
        {
LABEL_38:
          v41 = v37;
          v42 = a6[1];
          v43 = (_DWORD *)*a6;
          if ( a6[2] < (unsigned __int64)(v42 + 1) )
          {
            v105 = qvector_reserve();
            v41 = v37;
            *a6 = v105;
            v43 = (_DWORD *)v105;
            v42 = a6[1];
          }
          v43[v42] = v11;
          ++a6[1];
          v189 = v41;
          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, _QWORD, __int64), _QWORD, _QWORD, __int64, __int64, __int64))**a7)(
            a7,
            (unsigned int)v11,
            (unsigned int)v11,
            5,
            v41,
            v34);
          result = (unsigned int)(v189 == 0) + 11;
          if ( v14 == 1 )
            return 10;
          return result;
        }
      }
      if ( ++v36 == v14 )
        break;
      v35 = *a1;
      v37 = v36;
    }
    v10 = a1;
    v32 = 0;
    v11 = (int)v11;
LABEL_47:
    if ( v14 == 2 )
    {
      v53 = (_QWORD *)*v10;
      v54 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
      if ( v54 == sub_60D50 )
      {
        v55 = *(unsigned int **)(v10[6] + v34);
        v56 = *v55;
      }
      else
      {
        v206 = v34;
        v196 = v32;
        v130 = v54((__int64)v10, v11, 0);
        v53 = (_QWORD *)*v10;
        v32 = v196;
        v56 = v130;
        v132 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
        if ( v132 != sub_60D50 )
        {
          v133 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, bool, __int64, __int64))v132)(
                   v10,
                   (unsigned int)v11,
                   1,
                   v196,
                   v131,
                   v206);
          v53 = (_QWORD *)*v10;
          v32 = v196;
          v192 = v133;
LABEL_63:
          v57 = (__int64 (__fastcall *)(__int64, int))v53[12];
          if ( v57 == sub_60D10 )
          {
            if ( !v10[7] )
            {
              v211 = 0;
              v209 = 0;
              goto LABEL_66;
            }
            v106 = v10[6];
            v211 = *(_DWORD *)(v106 + 24LL * (int)v56 + 8);
            goto LABEL_156;
          }
          v205 = v32;
          v127 = v57((__int64)v10, v56);
          v53 = (_QWORD *)*v10;
          v32 = v205;
          v211 = v127;
          v128 = *(__int64 (__fastcall **)(__int64, int))(*v10 + 96);
          if ( v128 == sub_60D10 )
          {
            if ( v10[7] )
            {
              v106 = v10[6];
LABEL_156:
              v209 = *(_DWORD *)(v106 + 24LL * v192 + 8);
              goto LABEL_66;
            }
            v209 = 0;
          }
          else
          {
            v129 = v128((__int64)v10, v192);
            v53 = (_QWORD *)*v10;
            v32 = v205;
            v209 = v129;
          }
LABEL_66:
          v58 = (__int64 (__fastcall *)(__int64, int))v53[13];
          if ( v58 == sub_60D30 )
          {
            if ( v10[10] )
            {
              v59 = v10[9];
              v220 = *(_DWORD *)(v59 + 24LL * (int)v56 + 8);
LABEL_69:
              v60 = *(_DWORD *)(v59 + 24LL * v192 + 8);
LABEL_70:
              if ( v32 )
              {
                if ( !a9 )
                  return 0;
                if ( v214 >= a5[36] || (~(unsigned __int8)*(_DWORD *)(a5[35] + 4LL * (int)v217) & 0x18) != 0 )
                {
                  if ( v60 != 1 )
                    return 0;
                  if ( v209 == 1 )
                  {
                    v165 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
                    if ( v165 == sub_60D50 )
                      v166 = **(_DWORD **)(v10[6] + 24LL * v192);
                    else
                      v166 = v165((__int64)v10, v192, 0);
                    if ( v166 != v56 )
                      return 0;
                  }
                  else if ( v209 || v56 == (_DWORD)v11 )
                  {
                    return 0;
                  }
                  goto LABEL_78;
                }
                goto LABEL_163;
              }
              LOBYTE(v111) = v211 == 1;
              v203 = v209 == 1;
              v32 = v60 == 1;
              if ( v211 != 1 || v209 != 1 )
                goto LABEL_185;
              v53 = (_QWORD *)*v10;
LABEL_181:
              v112 = (__int64 (__fastcall *)(__int64, int, int))v53[14];
              if ( v112 == sub_60D50 )
              {
                v113 = v10[6];
                v114 = **(_DWORD **)(v113 + 24LL * (int)v56);
              }
              else
              {
                v207 = v32;
                v147 = v112((__int64)v10, v56, 0);
                v32 = v207;
                v114 = v147;
                v148 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
                if ( v148 != sub_60D50 )
                {
                  v115 = v148((__int64)v10, v192, 0);
                  v32 = v207;
LABEL_184:
                  v203 = 1;
                  v111 = 1;
                  if ( v115 == v114 )
                  {
                    if ( v220 == 1 && v32 )
                    {
                      v158 = (_DWORD *)*a6;
                      v159 = a6[1];
                      v160 = *a6 + 4 * v159;
                      if ( *a6 != v160 )
                      {
                        v161 = (_DWORD *)*a6;
                        while ( *v161 != (_DWORD)v11 )
                        {
                          if ( (_DWORD *)v160 == ++v161 )
                            goto LABEL_304;
                        }
                        if ( v161 != (_DWORD *)v160 )
                        {
                          v162 = (_DWORD *)*a6;
                          goto LABEL_270;
                        }
                      }
LABEL_304:
                      if ( a6[2] < (unsigned __int64)(v159 + 1) )
                      {
                        v173 = qvector_reserve();
                        *a6 = v173;
                        v158 = (_DWORD *)v173;
                      }
                      v158[a6[1]] = v11;
                      v162 = (_DWORD *)*a6;
                      v159 = a6[1] + 1;
                      v160 = *a6 + 4 * v159;
                      a6[1] = v159;
                      if ( (_DWORD *)v160 != v162 )
                      {
                        v158 = v162;
LABEL_270:
                        while ( v192 != *v158 )
                        {
                          if ( ++v158 == (_DWORD *)v160 )
                            goto LABEL_308;
                        }
                        if ( v158 != (_DWORD *)v160 )
                        {
                          v163 = v162;
                          goto LABEL_313;
                        }
                      }
LABEL_308:
                      if ( a6[2] < (unsigned __int64)(v159 + 1) )
                      {
                        v174 = qvector_reserve();
                        *a6 = v174;
                        v162 = (_DWORD *)v174;
                      }
                      v162[a6[1]] = v192;
                      v163 = (_DWORD *)*a6;
                      v159 = a6[1] + 1;
                      v160 = *a6 + 4 * v159;
                      a6[1] = v159;
                      if ( (_DWORD *)v160 == v163 )
                        goto LABEL_316;
                      v162 = v163;
LABEL_313:
                      while ( *v162 != v56 )
                      {
                        if ( ++v162 == (_DWORD *)v160 )
                          goto LABEL_316;
                      }
                      if ( (_DWORD *)v160 == v162 )
                      {
LABEL_316:
                        if ( a6[2] < (unsigned __int64)(v159 + 1) )
                        {
                          v175 = qvector_reserve();
                          *a6 = v175;
                          v163 = (_DWORD *)v175;
                        }
                        v163[a6[1]++] = v56;
                      }
                      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, _QWORD, __int64), _QWORD, _QWORD, __int64, __int64))**a7)(
                        a7,
                        (unsigned int)v11,
                        (unsigned int)v192,
                        5,
                        v111);
                      (**a7)(a7, (unsigned int)v11, v56, 5);
                      return 4;
                    }
                    v203 = 1;
                    LOBYTE(v111) = 1;
                  }
LABEL_185:
                  if ( v32 && v203 )
                  {
                    v116 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
                    if ( v116 == sub_60D50 )
                    {
                      v117 = **(_DWORD **)(v10[6] + 24LL * v192);
                    }
                    else
                    {
                      v215 = v32;
                      v218 = v111;
                      v117 = v116((__int64)v10, v192, 0);
                      v32 = v215;
                      LOBYTE(v111) = v218;
                    }
                    if ( v117 == (_DWORD)v11 )
                    {
                      v138 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 120);
                      if ( v138 == sub_60D70 )
                      {
                        v139 = **(_DWORD **)(v10[9] + 24LL * v192);
                      }
                      else
                      {
                        v216 = v32;
                        v219 = v111;
                        v139 = v138((__int64)v10, v192, 0);
                        v32 = v216;
                        LOBYTE(v111) = v219;
                      }
                      if ( v139 == (_DWORD)v11 )
                      {
                        v140 = a6[1];
                        v141 = (_DWORD *)*a6;
                        v142 = (_DWORD *)*a6;
                        v143 = *a6 + 4 * v140;
                        if ( *a6 != v143 )
                        {
                          v144 = (_DWORD *)*a6;
                          while ( *v144 != (_DWORD)v11 )
                          {
                            if ( (_DWORD *)v143 == ++v144 )
                              goto LABEL_327;
                          }
                          if ( (_DWORD *)v143 != v144 )
                          {
                            v145 = (_DWORD *)*a6;
                            v146 = (__int64)&v141[v140];
                            goto LABEL_238;
                          }
                        }
LABEL_327:
                        if ( a6[2] < (unsigned __int64)(v140 + 1) )
                        {
                          v185 = qvector_reserve();
                          *a6 = v185;
                          v142 = (_DWORD *)v185;
                        }
                        v142[a6[1]] = v11;
                        v141 = (_DWORD *)*a6;
                        v140 = a6[1] + 1;
                        v146 = *a6 + 4 * v140;
                        a6[1] = v140;
                        if ( v141 == (_DWORD *)v146 )
                          goto LABEL_240;
                        v145 = v141;
LABEL_238:
                        while ( v192 != *v145 )
                        {
                          if ( ++v145 == (_DWORD *)v146 )
                            goto LABEL_240;
                        }
                        if ( v145 == (_DWORD *)v146 )
                        {
LABEL_240:
                          if ( a6[2] < (unsigned __int64)(v140 + 1) )
                          {
                            v178 = qvector_reserve();
                            *a6 = v178;
                            v141 = (_DWORD *)v178;
                          }
                          v141[a6[1]++] = v192;
                        }
                        (**a7)(a7, (unsigned int)v11, (unsigned int)v192, 5);
                        (**a7)(a7, (unsigned int)v192, (unsigned int)v11, 5);
                        return 13;
                      }
                    }
                  }
                  goto LABEL_190;
                }
                v113 = v10[6];
              }
              v115 = **(_DWORD **)(v113 + 24LL * v192);
              goto LABEL_184;
            }
            v220 = 0;
          }
          else
          {
            v204 = v32;
            v125 = v58((__int64)v10, v56);
            v53 = (_QWORD *)*v10;
            v32 = v204;
            v220 = v125;
            v126 = *(__int64 (__fastcall **)(__int64, int))(*v10 + 104);
            if ( v126 != sub_60D30 )
            {
              v60 = v126((__int64)v10, v192);
              v32 = v204;
              goto LABEL_70;
            }
            if ( v10[10] )
            {
              v59 = v10[9];
              goto LABEL_69;
            }
          }
          if ( v32 )
          {
            if ( !a9 || v214 >= a5[36] || (~*(_BYTE *)(a5[35] + 4LL * (int)v217) & 0x18) != 0 )
              return 0;
LABEL_163:
            if ( v220 != 1 )
              return 0;
            if ( v211 == 1 )
            {
              v167 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
              if ( v167 == sub_60D50 )
                v168 = **(_DWORD **)(v10[6] + 24LL * (int)v56);
              else
                v168 = v167((__int64)v10, v56, 0);
              if ( v192 != v168 )
                return 0;
            }
            else if ( v211 || v192 == (_DWORD)v11 )
            {
              return 0;
            }
            goto LABEL_167;
          }
          LOBYTE(v111) = v211 == 1;
          v203 = v209 == 1;
          if ( v211 != 1 || v209 != 1 )
          {
LABEL_190:
            if ( v220 == 1 && (_BYTE)v111 )
            {
              v118 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
              if ( v118 == sub_60D50 )
              {
                v119 = **(_DWORD **)(v10[6] + 24LL * (int)v56);
              }
              else
              {
                v212 = v32;
                v119 = v118((__int64)v10, v56, 0);
                v32 = v212;
              }
              if ( v119 == (_DWORD)v11 )
              {
                v149 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 120);
                if ( v149 == sub_60D70 )
                {
                  v150 = **(_DWORD **)(v10[9] + 24LL * (int)v56);
                }
                else
                {
                  v213 = v32;
                  v150 = v149((__int64)v10, v56, 0);
                  v32 = v213;
                }
                if ( v150 == (_DWORD)v11 )
                {
                  v151 = a6[1];
                  v152 = (_DWORD *)*a6;
                  v153 = (_DWORD *)*a6;
                  v154 = *a6 + 4 * v151;
                  if ( *a6 != v154 )
                  {
                    v155 = (_DWORD *)*a6;
                    while ( *v155 != (_DWORD)v11 )
                    {
                      if ( (_DWORD *)v154 == ++v155 )
                        goto LABEL_322;
                    }
                    if ( (_DWORD *)v154 != v155 )
                    {
                      v156 = (__int64)&v152[v151];
                      v157 = (_DWORD *)*a6;
                      goto LABEL_256;
                    }
                  }
LABEL_322:
                  if ( a6[2] < (unsigned __int64)(v151 + 1) )
                  {
                    v182 = qvector_reserve();
                    *a6 = v182;
                    v153 = (_DWORD *)v182;
                  }
                  v153[a6[1]] = v11;
                  v157 = (_DWORD *)*a6;
                  v151 = a6[1] + 1;
                  v156 = *a6 + 4 * v151;
                  a6[1] = v151;
                  if ( v157 == (_DWORD *)v156 )
                    goto LABEL_258;
                  v152 = v157;
LABEL_256:
                  while ( *v152 != v56 )
                  {
                    if ( ++v152 == (_DWORD *)v156 )
                      goto LABEL_258;
                  }
                  if ( v152 == (_DWORD *)v156 )
                  {
LABEL_258:
                    if ( a6[2] < (unsigned __int64)(v151 + 1) )
                    {
                      v179 = qvector_reserve();
                      *a6 = v179;
                      v157 = (_DWORD *)v179;
                    }
                    v157[a6[1]++] = v56;
                  }
                  (**a7)(a7, (unsigned int)v11, v56, 5);
                  (**a7)(a7, v56, (unsigned int)v11, 5);
                  return 14;
                }
              }
              if ( !a9 )
                goto LABEL_200;
              v120 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
              if ( v120 == sub_60D50 )
              {
                v121 = **(_DWORD **)(v10[6] + 24LL * (int)v56);
              }
              else
              {
                v201 = v32;
                v121 = v120((__int64)v10, v56, 0);
                v32 = v201;
              }
              if ( v192 != v121 )
              {
LABEL_199:
                if ( v32 )
                {
                  if ( v203 )
                  {
                    v170 = *(__int64 (__fastcall **)(__int64, int, int))(*v10 + 112);
                    if ( v170 == sub_60D50 )
                      v171 = **(_DWORD **)(v10[6] + 24LL * v192);
                    else
                      v171 = v170((__int64)v10, v192, 0);
                    if ( v171 != v56 )
                      goto LABEL_200;
                  }
                  else
                  {
                    if ( v209 || v56 == (_DWORD)v11 )
                      goto LABEL_200;
                    v134 = *(__int64 (__fastcall **)(__int64))(*v10 + 88);
                    v135 = v134 == sub_60CF0 ? *((_DWORD *)v10 + 10) : v134((__int64)v10);
                    if ( v192 == v135 )
                      goto LABEL_200;
                  }
LABEL_78:
                  v61 = (int *)*a6;
                  v62 = a6[1];
                  v63 = (int *)(*a6 + 4 * v62);
                  v64 = (int *)*a6;
                  if ( (int *)*a6 == v63 )
                    goto LABEL_274;
                  while ( *v64 != (_DWORD)v11 )
                  {
                    if ( v63 == ++v64 )
                      goto LABEL_274;
                  }
                  if ( v64 == v63 )
                  {
LABEL_274:
                    if ( a6[2] < (unsigned __int64)(v62 + 1) )
                    {
                      v183 = qvector_reserve();
                      v184 = a6[1];
                      *a6 = v183;
                      v63 = (int *)(v183 + 4 * v184);
                    }
                    *v63 = v11;
                    v164 = (int *)*a6;
                    v62 = a6[1] + 1;
                    v63 = (int *)(*a6 + 4 * v62);
                    a6[1] = v62;
                    if ( v63 != v164 )
                    {
                      v61 = v164;
                      goto LABEL_85;
                    }
                  }
                  else
                  {
LABEL_85:
                    while ( v192 != *v61 )
                    {
                      if ( v63 == ++v61 )
                        goto LABEL_291;
                    }
                    if ( v61 != v63 )
                    {
LABEL_87:
                      (**a7)(a7, (unsigned int)v11, (unsigned int)v192, 5);
                      return 2;
                    }
                  }
LABEL_291:
                  if ( a6[2] < (unsigned __int64)(v62 + 1) )
                  {
                    v180 = qvector_reserve();
                    v181 = a6[1];
                    *a6 = v180;
                    v63 = (int *)(v180 + 4 * v181);
                  }
                  *v63 = v192;
                  ++a6[1];
                  goto LABEL_87;
                }
LABEL_200:
                v122 = sub_6BFC0(v10, a5, v11, (__int64)a6, a7);
                if ( !v122 )
                  return 0;
                return (unsigned int)((v122 >> 1) + 6);
              }
            }
            else
            {
              if ( !a9 )
                goto LABEL_200;
              if ( v220 != 1 || v211 || v192 == (_DWORD)v11 )
                goto LABEL_199;
              v123 = *(__int64 (__fastcall **)(__int64))(*v10 + 88);
              if ( v123 == sub_60CF0 )
              {
                v124 = *((_DWORD *)v10 + 10);
              }
              else
              {
                v200 = v32;
                v124 = v123((__int64)v10);
                v32 = v200;
              }
              if ( v124 == v56 )
                goto LABEL_199;
            }
LABEL_167:
            v107 = (unsigned int *)*a6;
            v108 = a6[1];
            v109 = (unsigned int *)(*a6 + 4 * v108);
            if ( (unsigned int *)*a6 == v109 )
              goto LABEL_286;
            v110 = (unsigned int *)*a6;
            while ( *v110 != (_DWORD)v11 )
            {
              if ( v109 == ++v110 )
                goto LABEL_286;
            }
            if ( v109 == v110 )
            {
LABEL_286:
              if ( a6[2] < (unsigned __int64)(v108 + 1) )
              {
                v186 = qvector_reserve();
                v187 = a6[1];
                *a6 = v186;
                v109 = (unsigned int *)(v186 + 4 * v187);
              }
              *v109 = v11;
              v169 = (unsigned int *)*a6;
              v108 = a6[1] + 1;
              v109 = (unsigned int *)(*a6 + 4 * v108);
              a6[1] = v108;
              if ( v109 != v169 )
              {
                v107 = v169;
                goto LABEL_174;
              }
            }
            else
            {
LABEL_174:
              while ( *v107 != v56 )
              {
                if ( ++v107 == v109 )
                  goto LABEL_301;
              }
              if ( v107 != v109 )
              {
LABEL_176:
                (**a7)(a7, (unsigned int)v11, v56, 5);
                return 3;
              }
            }
LABEL_301:
            if ( a6[2] < (unsigned __int64)(v108 + 1) )
            {
              v176 = qvector_reserve();
              v177 = a6[1];
              *a6 = v176;
              v109 = (unsigned int *)(v176 + 4 * v177);
            }
            *v109 = v56;
            ++a6[1];
            goto LABEL_176;
          }
          goto LABEL_181;
        }
        v55 = *(unsigned int **)(v10[6] + v206);
      }
      v192 = v55[1];
      goto LABEL_63;
    }
  }
  v44 = (_QWORD *)*v10;
  v45 = *(__int64 (__fastcall **)(__int64, int))(*v10 + 104);
  if ( v45 == sub_60D30 )
  {
    if ( !v10[10] )
    {
LABEL_50:
      v46 = (__int64 (__fastcall *)(__int64, int))v44[12];
      goto LABEL_51;
    }
    v67 = *(_DWORD *)(v10[9] + 24LL * (int)v11 + 8);
  }
  else
  {
    v67 = v45((__int64)v10, v11);
    v44 = (_QWORD *)*v10;
  }
  if ( v67 != 1 )
    goto LABEL_50;
  v68 = (__int64 (__fastcall *)(__int64, int, int))v44[15];
  v194 = a6;
  v69 = v11;
  v70 = v10;
  if ( v68 != sub_60D70 )
    goto LABEL_104;
LABEL_91:
  v71 = **(_DWORD **)(v70[9] + 24LL * v69);
  v72 = (__int64 (__fastcall *)(__int64, int))v44[13];
  if ( v72 == sub_60D30 )
  {
LABEL_92:
    v73 = 0;
    if ( v70[10] )
      v73 = *(_DWORD *)(v70[9] + 24LL * v71 + 8) == 1;
    v74 = (__int64 (__fastcall *)(__int64, int))v44[12];
    if ( v74 != sub_60D10 )
      goto LABEL_106;
LABEL_95:
    if ( !v70[7] )
    {
      v10 = v70;
      v11 = v69;
      a6 = v194;
      goto LABEL_52;
    }
    if ( *(_DWORD *)(v70[6] + 24LL * v71 + 8) == 1 )
      goto LABEL_97;
LABEL_107:
    v10 = v70;
    v46 = (__int64 (__fastcall *)(__int64, int))v44[12];
    v11 = v69;
    a6 = v194;
  }
  else
  {
    while ( 1 )
    {
      v78 = v72((__int64)v70, v71);
      v44 = (_QWORD *)*v70;
      v79 = v78 == 1;
      v74 = *(__int64 (__fastcall **)(__int64, int))(*v70 + 96);
      v73 = v79;
      if ( v74 == sub_60D10 )
        goto LABEL_95;
LABEL_106:
      v199 = v73;
      v80 = v74((__int64)v70, v71);
      v44 = (_QWORD *)*v70;
      v73 = v199;
      if ( v80 != 1 )
        goto LABEL_107;
LABEL_97:
      v75 = (_DWORD *)a5[32];
      v76 = &v75[a5[33]];
      if ( v75 != v76 )
      {
        while ( v71 != *v75 )
        {
          if ( v76 == ++v75 )
            goto LABEL_102;
        }
        v73 &= v75 == v76;
      }
LABEL_102:
      if ( !v73 )
        break;
      v68 = (__int64 (__fastcall *)(__int64, int, int))v44[15];
      v69 = v71;
      if ( v68 == sub_60D70 )
        goto LABEL_91;
LABEL_104:
      v77 = v68((__int64)v70, v69, 0);
      v44 = (_QWORD *)*v70;
      v71 = v77;
      v72 = *(__int64 (__fastcall **)(__int64, int))(*v70 + 104);
      if ( v72 == sub_60D30 )
        goto LABEL_92;
    }
    v172 = v71;
    v10 = v70;
    v11 = v69;
    v46 = (__int64 (__fastcall *)(__int64, int))v44[12];
    a6 = v194;
    if ( v75 == v76 )
      v11 = v172;
  }
LABEL_51:
  if ( v46 == sub_60D10 )
  {
LABEL_52:
    if ( !v10[7] )
    {
      a6[1] = 0;
LABEL_54:
      v47 = 0;
      v48 = (_DWORD *)*a6;
      goto LABEL_152;
    }
    v81 = *(_DWORD *)(v10[6] + 24LL * (int)v11 + 8);
    goto LABEL_110;
  }
  v81 = v46((__int64)v10, v11);
LABEL_110:
  a6[1] = 0;
  if ( v81 != 1 )
    goto LABEL_54;
  v82 = a6;
  v83 = 0;
  v84 = v10;
  v85 = v82;
  do
  {
    v86 = (_DWORD *)(*v85 + 4 * v83);
    if ( (_DWORD *)*v85 == v86 )
      goto LABEL_136;
    v87 = (_DWORD *)*v85;
    while ( (_DWORD)v11 != *v87 )
    {
      if ( v86 == ++v87 )
        goto LABEL_136;
    }
    if ( v87 == v86 )
    {
LABEL_136:
      if ( v85[2] < (unsigned __int64)(v83 + 1) )
      {
        v102 = qvector_reserve();
        v103 = v85[1];
        *v85 = v102;
        v86 = (_DWORD *)(v102 + 4 * v103);
      }
      *v86 = v11;
      ++v85[1];
      v88 = *v84;
      v89 = *(__int64 (__fastcall **)(__int64, int, int))(*v84 + 112);
      if ( v89 == sub_60D50 )
      {
LABEL_118:
        LODWORD(v11) = **(_DWORD **)(v84[6] + 24 * v11);
        v90 = *(__int64 (__fastcall **)(__int64, int))(v88 + 104);
        if ( v90 != sub_60D30 )
          goto LABEL_140;
        goto LABEL_119;
      }
    }
    else
    {
      v88 = *v84;
      v89 = *(__int64 (__fastcall **)(__int64, int, int))(*v84 + 112);
      if ( v89 == sub_60D50 )
        goto LABEL_118;
    }
    v100 = v89((__int64)v84, v11, 0);
    v88 = *v84;
    v11 = v100;
    v90 = *(__int64 (__fastcall **)(__int64, int))(*v84 + 104);
    if ( v90 != sub_60D30 )
    {
LABEL_140:
      v92 = v90((__int64)v84, v11);
      v88 = *v84;
      goto LABEL_121;
    }
LABEL_119:
    v91 = 0;
    if ( !v84[10] )
      goto LABEL_127;
    v92 = *(_DWORD *)(v84[9] + 24LL * (int)v11 + 8);
LABEL_121:
    v91 = 0;
    if ( v92 == 1 )
    {
      v93 = (_DWORD *)a5[32];
      v94 = &v93[a5[33]];
      if ( v93 == v94 )
      {
LABEL_146:
        v91 = 1;
      }
      else
      {
        while ( (_DWORD)v11 != *v93 )
        {
          if ( v94 == ++v93 )
            goto LABEL_146;
        }
        v91 = v93 == v94;
      }
    }
LABEL_127:
    v95 = *(__int64 (__fastcall **)(__int64, int))(v88 + 96);
    if ( v95 == sub_60D10 )
    {
      if ( !v84[7] )
      {
        v47 = v85[1];
        a6 = v85;
        goto LABEL_130;
      }
      v101 = *(_DWORD *)(v84[6] + 24LL * (int)v11 + 8);
    }
    else
    {
      v195 = v91;
      v101 = v95((__int64)v84, v11);
      v91 = v195;
    }
    v83 = v85[1];
  }
  while ( v101 == 1 && v91 );
  a6 = v85;
  v47 = v85[1];
LABEL_130:
  if ( v91 )
  {
    v48 = (_DWORD *)(*a6 + 4 * v47);
    if ( (_DWORD *)*a6 == v48 )
      goto LABEL_152;
    v104 = (_DWORD *)*a6;
    while ( (_DWORD)v11 != *v104 )
    {
      if ( v48 == ++v104 )
        goto LABEL_152;
    }
    if ( v104 == v48 )
    {
LABEL_152:
      if ( a6[2] < v47 + 1 )
      {
        v136 = qvector_reserve();
        v137 = a6[1];
        *a6 = v136;
        v48 = (_DWORD *)(v136 + 4 * v137);
      }
      *v48 = v11;
      v47 = a6[1] + 1;
      a6[1] = v47;
    }
  }
  if ( v47 <= 1 )
    return 0;
  v96 = (unsigned int)(v47 - 2);
  v97 = 4 * v96;
  if ( (int)v96 >= 0 )
  {
    do
    {
      v98 = v96 + 1;
      LODWORD(v96) = v96 - 1;
      v99 = *(unsigned int *)(*a6 + v97);
      v97 -= 4;
      (**a7)(a7, v99, *(unsigned int *)(*a6 + 4LL * v98), 5);
    }
    while ( (_DWORD)v96 != -1 );
  }
  return 1;
}

