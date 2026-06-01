__int64 __fastcall sub_17D8C0(__m128i *a1, unsigned __int8 a2, const __m128i *a3, double a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edx
  int v10; // esi
  _BYTE *v11; // rax
  __m128i v12; // xmm0
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned int *v17; // rbx
  unsigned int *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  _BYTE *v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  unsigned __int64 v26; // rdi
  _BYTE *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r10
  _QWORD *v30; // rax
  __int64 v31; // r11
  __int64 v32; // rsi
  _BYTE *v33; // rsi
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  __int64 v36; // rcx
  size_t v37; // rdx
  unsigned __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rsi
  _QWORD *v42; // rcx
  _QWORD *v43; // rax
  _QWORD *v44; // rdi
  __int32 v45; // eax
  __int64 v47; // rax
  __int64 v48; // rsi
  _BYTE *v49; // rdx
  __int64 v50; // rax
  bool v51; // zf
  int v52; // edx
  __int64 v53; // rdx
  int v54; // r8d
  int v55; // r9d
  _BYTE *v56; // rdx
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  size_t v59; // rax
  unsigned __int8 *v60; // rdi
  __int64 *v61; // rsi
  __int32 v62; // eax
  unsigned int v63; // edx
  __int32 v64; // eax
  __int32 v65; // eax
  const void **v66; // rbx
  void *v67; // rbx
  __int64 v68; // rax
  int v69; // eax
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  int v75; // r9d
  __int64 v76; // rax
  __m128i *v77; // rdx
  __int64 v78; // rax
  size_t v79; // rcx
  __int64 *v80; // r8
  unsigned __int64 v81; // rax
  __int64 *v82; // rcx
  char v83; // al
  __int64 v84; // rdi
  char v85; // al
  __int64 *v86; // rsi
  __int64 *v87; // rdi
  unsigned int v88; // eax
  __int64 v89; // rax
  unsigned __int8 *v90; // rcx
  __int64 *v91; // r8
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  int v95; // r9d
  __int64 *v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // r8
  int v99; // r9d
  unsigned __int8 *v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  int v104; // r9d
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  int v108; // r9d
  char v109; // al
  __int8 v110; // dl
  __int64 *v111; // rax
  unsigned __int8 *v112; // r9
  unsigned __int8 *v113; // rdi
  __int64 *v114; // rax
  size_t v115; // rsi
  __int64 v116; // rdi
  __int64 v117; // rdx
  int v118; // r8d
  int v119; // r9d
  _BYTE *v120; // rcx
  unsigned __int64 *v121; // rax
  __int64 v122; // rsi
  unsigned __int8 *v123; // rsi
  unsigned __int8 *v124; // rdi
  _BYTE *v125; // rdi
  char v126; // al
  __m128i *v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rcx
  unsigned __int64 *v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  int v135; // r9d
  unsigned __int8 v136; // al
  char v137; // al
  __int64 *v138; // rdi
  __int128 v139; // rdi
  int v140; // ecx
  __int32 v141; // eax
  _BYTE *v142; // rsi
  __int64 v143; // rdi
  unsigned int v144; // edx
  int v145; // eax
  unsigned __int64 *v146; // rdx
  char v147; // al
  __int32 v148; // eax
  unsigned __int8 *v149; // rdi
  char v150; // dl
  int v151; // eax
  __int64 v152; // [rsp+8h] [rbp-548h]
  __int64 v153; // [rsp+10h] [rbp-540h]
  __int64 v154; // [rsp+18h] [rbp-538h]
  __int64 v155; // [rsp+20h] [rbp-530h]
  __int64 v156; // [rsp+28h] [rbp-528h]
  char v157; // [rsp+30h] [rbp-520h]
  __int64 v158; // [rsp+30h] [rbp-520h]
  unsigned __int64 *v159; // [rsp+38h] [rbp-518h] BYREF
  __int64 v160; // [rsp+40h] [rbp-510h]
  int v161; // [rsp+48h] [rbp-508h]
  int v162; // [rsp+4Ch] [rbp-504h]
  size_t v163; // [rsp+50h] [rbp-500h]
  unsigned __int64 **v164; // [rsp+58h] [rbp-4F8h]
  __int64 *v165; // [rsp+60h] [rbp-4F0h]
  unsigned __int64 *v166; // [rsp+68h] [rbp-4E8h]
  unsigned __int8 *v167; // [rsp+70h] [rbp-4E0h]
  unsigned __int8 *v168; // [rsp+78h] [rbp-4D8h] BYREF
  const __m128i *v169; // [rsp+80h] [rbp-4D0h]
  __int64 v170; // [rsp+88h] [rbp-4C8h]
  unsigned __int64 **v171; // [rsp+90h] [rbp-4C0h]
  size_t n; // [rsp+98h] [rbp-4B8h] BYREF
  __int64 *v173; // [rsp+A0h] [rbp-4B0h]
  __int64 *v174; // [rsp+A8h] [rbp-4A8h]
  __m128i v175; // [rsp+B0h] [rbp-4A0h] BYREF
  __int64 *v176; // [rsp+C0h] [rbp-490h]
  unsigned __int64 *v177; // [rsp+C8h] [rbp-488h]
  __m128i v178; // [rsp+D0h] [rbp-480h] BYREF
  unsigned int v179; // [rsp+E0h] [rbp-470h]
  unsigned __int8 v180; // [rsp+E6h] [rbp-46Ah]
  unsigned __int8 v181; // [rsp+E7h] [rbp-469h]
  _BYTE *v182; // [rsp+E8h] [rbp-468h]
  __int64 v183[4]; // [rsp+F0h] [rbp-460h] BYREF
  __int64 v184; // [rsp+110h] [rbp-440h] BYREF
  __int128 v185; // [rsp+118h] [rbp-438h]
  __int64 v186; // [rsp+130h] [rbp-420h] BYREF
  __int64 v187; // [rsp+138h] [rbp-418h]
  void *v188; // [rsp+140h] [rbp-410h] BYREF
  __int128 v189; // [rsp+148h] [rbp-408h]
  __int64 v190[2]; // [rsp+160h] [rbp-3F0h] BYREF
  __int64 v191; // [rsp+170h] [rbp-3E0h] BYREF
  __int128 v192; // [rsp+178h] [rbp-3D8h]
  __int64 v193[2]; // [rsp+190h] [rbp-3C0h] BYREF
  void *src; // [rsp+1A0h] [rbp-3B0h] BYREF
  __m128i v195; // [rsp+1A8h] [rbp-3A8h]
  __int64 v196; // [rsp+1C0h] [rbp-390h] BYREF
  void *v197; // [rsp+1D0h] [rbp-380h]
  __int128 v198; // [rsp+1D8h] [rbp-378h]
  __int64 v199; // [rsp+1F0h] [rbp-360h] BYREF
  __int64 v200; // [rsp+1F8h] [rbp-358h]
  __int64 v201; // [rsp+200h] [rbp-350h] BYREF
  __int128 v202; // [rsp+208h] [rbp-348h]
  __int64 v203[2]; // [rsp+220h] [rbp-330h] BYREF
  unsigned __int64 *v204; // [rsp+230h] [rbp-320h] BYREF
  __int64 v205; // [rsp+238h] [rbp-318h]
  __int64 v206[2]; // [rsp+250h] [rbp-300h] BYREF
  void *v207; // [rsp+260h] [rbp-2F0h] BYREF
  __int64 v208; // [rsp+268h] [rbp-2E8h]
  __int64 v209[6]; // [rsp+280h] [rbp-2D0h] BYREF
  __int64 v210[2]; // [rsp+2B0h] [rbp-2A0h] BYREF
  void *v211; // [rsp+2C0h] [rbp-290h] BYREF
  __int128 v212; // [rsp+2C8h] [rbp-288h]
  __int64 v213; // [rsp+2E0h] [rbp-270h] BYREF
  __int128 v214; // [rsp+2E8h] [rbp-268h]
  __int64 v215; // [rsp+2F8h] [rbp-258h]
  unsigned __int8 *v216; // [rsp+310h] [rbp-240h] BYREF
  _BYTE *v217; // [rsp+318h] [rbp-238h]
  void *v218; // [rsp+320h] [rbp-230h]
  __int128 v219; // [rsp+328h] [rbp-228h]
  char v220; // [rsp+338h] [rbp-218h]
  __m128i v221; // [rsp+340h] [rbp-210h]
  int v222; // [rsp+350h] [rbp-200h]
  char v223; // [rsp+354h] [rbp-1FCh]
  __int64 v224; // [rsp+360h] [rbp-1F0h] BYREF
  __int128 v225; // [rsp+368h] [rbp-1E8h] BYREF
  __int128 v226; // [rsp+378h] [rbp-1D8h]
  __int64 v227; // [rsp+388h] [rbp-1C8h]
  unsigned __int64 v228; // [rsp+390h] [rbp-1C0h]
  __int64 v229; // [rsp+398h] [rbp-1B8h]
  unsigned __int64 v230; // [rsp+3A0h] [rbp-1B0h]
  __int64 v231; // [rsp+3A8h] [rbp-1A8h]
  __int64 (__fastcall **v232)(); // [rsp+3B0h] [rbp-1A0h] BYREF
  __int128 v233; // [rsp+3B8h] [rbp-198h] BYREF
  __m128i v234; // [rsp+3C8h] [rbp-188h] BYREF
  char v235; // [rsp+3D8h] [rbp-178h]
  __int64 v236; // [rsp+3E0h] [rbp-170h] BYREF
  unsigned __int8 *v237; // [rsp+3E8h] [rbp-168h]
  _BYTE v238[160]; // [rsp+3F8h] [rbp-158h] BYREF
  __int64 v239; // [rsp+498h] [rbp-B8h] BYREF
  char v240[24]; // [rsp+4A8h] [rbp-A8h] BYREF
  __int64 v241; // [rsp+4C0h] [rbp-90h] BYREF
  char v242[32]; // [rsp+4D0h] [rbp-80h] BYREF
  __m128i *v243; // [rsp+4F0h] [rbp-60h]
  int v244; // [rsp+508h] [rbp-48h]
  unsigned __int8 v245; // [rsp+50Dh] [rbp-43h]
  unsigned __int8 v246; // [rsp+50Eh] [rbp-42h]
  char v247; // [rsp+512h] [rbp-3Eh]
  char v248; // [rsp+513h] [rbp-3Dh]
  unsigned __int64 v249; // [rsp+518h] [rbp-38h]

  v169 = a3;
  v181 = a2;
  v249 = __readfsqword(0x28u);
  v7 = a1[4].m128i_i64[0];
  v189 = 0;
  v186 = 0;
  v8 = *(_QWORD *)(v7 + 1504);
  v187 = 0;
  v188 = nullptr;
  v9 = *(_DWORD *)(v8 + 84);
  v10 = *(_DWORD *)(v8 + 60);
  v170 = v8;
  v173 = v190;
  v190[0] = 0;
  v190[1] = 0;
  sub_63E80(v190, v10, v9, 0.0);
  v11 = (_BYTE *)a1[3].m128i_i64[0];
  v12.m128i_i64[0] = 0;
  v191 = 0;
  v174 = &v196;
  v182 = v11;
  v179 = 0;
  v176 = &v199;
  v192 = 0;
  if ( !v11 )
  {
    a1[1].m128i_i32[2] &= ~0x80u;
    goto LABEL_81;
  }
  do
  {
    v13 = *(_DWORD *)v182;
    if ( *(_DWORD *)v182 == 60 )
      goto LABEL_6;
    if ( v13 == 56 )
    {
      if ( !v182[64] )
        goto LABEL_6;
    }
    else if ( v13 == 57 && !v182[64] && sub_1D2A70(a1[30].m128i_i64[0], *((_QWORD *)v182 + 3)) )
    {
      goto LABEL_6;
    }
    sub_124680((__int64)v193, (__int64)a1, (__int64)v182, 0, *(double *)v12.m128i_i64, a5);
    sub_64000(v174, (__int64)v193, *(double *)v12.m128i_i64);
    v16 = v195.m128i_i64[0];
    v197 = nullptr;
    v198 = 0;
    if ( v195.m128i_i64[0] )
    {
      v197 = (void *)qalloc_or_throw(16 * v195.m128i_i64[0], (__int64)v193, v14, v15);
      *((_QWORD *)&v198 + 1) = v16;
      memcpy(v197, src, 16 * v16);
      *(_QWORD *)&v198 = v16;
    }
    v199 = 0;
    v12.m128i_i64[0] = 0;
    v17 = (unsigned int *)v182;
    v200 = 0;
    v201 = 0;
    v177 = nullptr;
    v202 = 0;
LABEL_13:
    v18 = (unsigned int *)sub_129150(
                            (__int64)a1,
                            v193,
                            *((_QWORD *)v17 + 2),
                            0,
                            (__int64)&v186,
                            0,
                            *(double *)v12.m128i_i64,
                            a5,
                            0x101u);
    v17 = v18;
    if ( v18 )
    {
      if ( !v181 || (v19 = *v18, v19 == 4) || v19 == 67 && v17[17] == v17[9] )
      {
        sub_64280(v176, &v186, *(double *)v12.m128i_i64);
        sub_316CB0(&v201, (__int64 **)&v188, v20, v21);
        v26 = *v17;
        if ( (unsigned int)(v26 - 61) > 1 && !sub_32ED70(v26) )
          goto LABEL_52;
        v175.m128i_i32[0] = v17[1] & 0x20000;
        if ( v175.m128i_i32[0] )
          goto LABEL_52;
        v23 = *((_BYTE **)v17 + 3);
        v25 = *v17;
        v27 = *((_BYTE **)v182 + 3);
        if ( v23 == v27 )
          goto LABEL_46;
        if ( v25 == 67 )
        {
          if ( v17[17] == 4 )
          {
            if ( (int)v17[9] > 4 && *((_BYTE *)v17 + 32) != 13 )
              goto LABEL_52;
            v47 = a1[4].m128i_i64[0];
            if ( !*(_QWORD *)(v47 + 1040) )
              goto LABEL_47;
          }
          else
          {
            v47 = a1[4].m128i_i64[0];
            if ( !*(_QWORD *)(v47 + 1040) )
            {
              if ( *(_DWORD *)v182 != 62 )
                goto LABEL_48;
              goto LABEL_93;
            }
          }
          v22 = *(_QWORD **)(v47 + 1016);
          v29 = v47 + 1008;
          if ( !v22 )
          {
LABEL_47:
            if ( *(_DWORD *)v182 != 62 )
              goto LABEL_48;
            v48 = *((_QWORD *)v182 + 3);
            if ( *((_QWORD *)v17 + 3) == v48 )
            {
              if ( !sub_120720((__int64)v17, v48) )
                goto LABEL_52;
LABEL_48:
              if ( *v17 == 61 )
              {
                v23 = v182;
                if ( *(_DWORD *)v182 != 4 && (*(_DWORD *)v182 != 67 || *((_DWORD *)v182 + 17) != *((_DWORD *)v182 + 9)) )
                  goto LABEL_52;
              }
              goto LABEL_49;
            }
LABEL_93:
            if ( *v17 == 61 )
              goto LABEL_52;
LABEL_49:
            if ( *((_BYTE *)v17 + 64) == 8 && !v17[17] )
              goto LABEL_52;
            if ( (unsigned __int8)sub_64780(&v186, v173) )
              goto LABEL_52;
            v178.m128i_i64[0] = (__int64)&v191;
            if ( (unsigned __int8)sub_318470((unsigned __int64 **)&v188, (__int64)&v191) )
              goto LABEL_52;
            v167 = (unsigned __int8 *)(v17 + 16);
            LOBYTE(v168) = sub_330E90((__int64)a1, (__int64)(v17 + 16));
            if ( (_BYTE)v168 )
              goto LABEL_52;
            v171 = (unsigned __int64 **)v203;
            sub_124680((__int64)v203, (__int64)a1, (__int64)v17, 1, *(double *)v12.m128i_i64, a5);
            if ( (unsigned __int8)sub_64780(v171, v173) || (unsigned __int8)sub_318470(&v204, v178.m128i_i64[0]) )
            {
              if ( v182[32] == 4 || v182[48] == 4 || v182[64] == 4 )
                goto LABEL_110;
              v35 = *((_QWORD *)v17 + 3);
              v178.m128i_i64[0] = a1[4].m128i_i64[0];
              v36 = sub_1CFBB0(v178.m128i_i64[0], v35);
              if ( (v17[1] & 0x20) != 0 )
                v36 += *(int *)(*(_QWORD *)(v178.m128i_i64[0] + 1504) + 80LL);
              v37 = a1[4].m128i_u64[0];
              v178.m128i_i64[0] = v36;
              v38 = *((_QWORD *)v182 + 3);
              n = v37;
              v39 = sub_1CFBB0(v37, v38);
              if ( (v182[4] & 0x20) != 0 )
                v39 += *(int *)(*(_QWORD *)(n + 1504) + 80LL);
              if ( v178.m128i_i64[0] != v39 )
                goto LABEL_110;
            }
            if ( v181 )
            {
              v178.m128i_i64[0] = *(_QWORD *)(a1[4].m128i_i64[0] + 1504);
              if ( (unsigned __int8)sub_64780(v171, (_QWORD *)(v178.m128i_i64[0] + 104))
                || (unsigned __int8)sub_318470(&v204, v178.m128i_i64[0] + 120) )
              {
                v40 = a1[4].m128i_i64[0];
                v41 = *((_QWORD *)v17 + 3);
                v42 = (_QWORD *)(v40 + 1056);
                v43 = *(_QWORD **)(v40 + 1064);
                v44 = v42;
                if ( !v43 )
                  goto LABEL_110;
                do
                {
                  if ( v43[4] >= v41 )
                  {
                    v44 = v43;
                    v43 = (_QWORD *)v43[2];
                  }
                  else
                  {
                    v43 = (_QWORD *)v43[3];
                  }
                }
                while ( v43 );
                if ( v42 == v44 || v41 < v44[4] )
                  goto LABEL_110;
              }
            }
            LOBYTE(v166) = sub_172FB0(v17);
            if ( (_BYTE)v166 )
            {
              if ( (a1[1].m128i_i8[9] & 8) == 0 )
                goto LABEL_110;
            }
            if ( (unsigned __int8)sub_318470((unsigned __int64 **)&v188, a1[4].m128i_i64[0] + 232)
              || (unsigned __int8)sub_318470(&v204, a1[4].m128i_i64[0] + 232) )
            {
              v49 = *((_BYTE **)v17 + 1);
              for ( n = (size_t)&v232; v49 != v182; v49 = *(_BYTE **)(v178.m128i_i64[0] + 8) )
              {
                v233 = 0u;
                v234 = 0u;
                v232 = &off_4DDF00;
                v178.m128i_i64[0] = (__int64)v49;
                if ( (unsigned int)sub_11F760(v49, (_QWORD *)n) )
                  goto LABEL_110;
              }
            }
            if ( (*((_BYTE *)v17 + 65) & 8) != 0 )
            {
              v57 = *((unsigned __int8 *)v17 + 64);
              v180 = 0;
              if ( (unsigned __int8)v57 <= 9u )
              {
                v58 = 610;
                v180 = _bittest64(&v58, v57);
              }
            }
            else
            {
              v180 = 0;
            }
            v50 = a1[4].m128i_i64[0];
            v51 = (_BYTE)v166 == 0;
            v52 = *(_DWORD *)(v50 + 888) + 1;
            v161 = *(_DWORD *)(v50 + 888);
            *(_DWORD *)(v50 + 888) = v52;
            if ( v51 )
            {
              v53 = *((_QWORD *)v17 + 1);
              LOBYTE(v164) = *v17 == 62;
              v178.m128i_i8[0] = sub_AE9C0((__int64)a1, &v186, v53, (__int64)v182, 1u, *(double *)v12.m128i_i64) ^ 1;
              if ( (unsigned __int8)sub_64880(&v186) && !(_QWORD)v189 )
                goto LABEL_110;
            }
            else
            {
              v164 = (unsigned __int64 **)&v216;
              sub_64000((__int64 *)&v216, (__int64)&v186, *(double *)v12.m128i_i64);
              v12.m128i_i64[0] = 0;
              v218 = nullptr;
              v219 = 0;
              if ( (_QWORD)v189 )
              {
                v178.m128i_i64[0] = v189;
                n = 16 * v189;
                v218 = (void *)qalloc_or_throw(16 * v189, (__int64)&v186, 16 * v189, v189);
                *((_QWORD *)&v219 + 1) = v178.m128i_i64[0];
                memcpy(v218, v188, n);
                *(_QWORD *)&v219 = v178.m128i_i64[0];
              }
              if ( sub_B0230((__int64)a1, v164, *((_QWORD *)v17 + 1), (__int64)v182, 3, 1u)
                || sub_120380(v17, 0) && sub_120380(v182, 0) )
              {
                goto LABEL_158;
              }
              v69 = *(_DWORD *)v182;
              if ( *(_DWORD *)v182 == 1
                || (v69 != 4 && (v69 != 67 || *((_DWORD *)v182 + 9) != *((_DWORD *)v182 + 17)) || v182[32] == 4)
                && (!sub_11C8A0((__int64)v182, &v232) || *(_BYTE *)v232 == 4)
                && (v182[32] != 1 || v182[48] != 1) )
              {
                v163 = (size_t)&v224;
                sub_64000(&v224, (__int64)&v186, 0.0);
                v12.m128i_i64[0] = 0;
                *((_QWORD *)&v225 + 1) = 0;
                v226 = 0;
                if ( (_QWORD)v189 )
                {
                  v178.m128i_i64[0] = v189;
                  n = 16 * v189;
                  *((_QWORD *)&v225 + 1) = qalloc_or_throw(16 * v189, (__int64)&v186, 16 * v189, v189);
                  *((_QWORD *)&v226 + 1) = v178.m128i_i64[0];
                  memcpy(*((void **)&v225 + 1), v188, n);
                  *(_QWORD *)&v226 = v178.m128i_i64[0];
                }
                n = (size_t)&v232;
                sub_127A20((__int64)&v232, (__int64)a1, (__int64)v17, 0, v70, v71, 0.0, a5);
                sub_64640((__int64 *)v163, (__int64 *)n, v72, v73, v74, v75);
                v178.m128i_i64[0] = (__int64)&v225 + 8;
                sub_317C60((__int64 *)&v225 + 1, (__int64)&v233 + 8);
                if ( *((_QWORD *)&v233 + 1) )
                {
                  v234.m128i_i64[0] = 0;
                  qfree(*((__int64 *)&v233 + 1));
                }
                qfree((__int64)v232);
                v76 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
                v235 = 0;
                v233 = 0u;
                v234 = 0u;
                v232 = &off_4DDF28;
                v236 = v76;
                if ( (unsigned int)sub_11E900(v17, n) )
                {
                  v78 = a1[4].m128i_i64[0];
                  v12.m128i_i64[0] = 0;
                  v79 = *(_QWORD *)(v78 + 128);
                  v80 = *(__int64 **)(v78 + 568);
                  v213 = 0;
                  v214 = 0;
                  n = v79;
                  v81 = (unsigned __int64)v80 + v79 - 1;
                  v82 = &v213;
                  v159 = (unsigned __int64 *)&v213;
                  if ( v81 >= (unsigned __int64)v80 )
                  {
                    v165 = v80;
                    v213 = qvector_reserve((__int64)v159, 0, 1, 16);
                    v77 = (__m128i *)(16 * v214);
                    v12 = (__m128i)_mm_loadh_ps((const double *)&n);
                    *(__m128i *)(v213 + 16 * v214) = v12;
                    *(_QWORD *)&v214 = v214 + 1;
                  }
                  sub_3180C0((__int64 *)v178.m128i_i64[0], (__int64)v159, v77, (__int64)v82);
                  if ( v213 )
                  {
                    *(_QWORD *)&v214 = 0;
                    qfree(v213);
                  }
                }
                else if ( *((_QWORD *)&v225 + 1) )
                {
                  *(_QWORD *)&v226 = 0;
                  qfree(*((__int64 *)&v225 + 1));
                  *((_QWORD *)&v225 + 1) = 0;
                  *((_QWORD *)&v226 + 1) = 0;
                }
                v83 = sub_64780((_QWORD *)v163, v193);
                v84 = *((_QWORD *)&v225 + 1);
                if ( v83
                  || (v85 = sub_318470((unsigned __int64 **)v178.m128i_i64[0], (__int64)&src),
                      v84 = *((_QWORD *)&v225 + 1),
                      v85) )
                {
                  if ( v84 )
                  {
                    *(_QWORD *)&v226 = 0;
                    qfree(v84);
                  }
                  qfree(v224);
LABEL_158:
                  if ( v218 )
                  {
                    *(_QWORD *)&v219 = 0;
                    qfree((__int64)v218);
                  }
                  qfree((__int64)v216);
LABEL_110:
                  if ( v204 )
                  {
                    v205 = 0;
                    qfree((__int64)v204);
                  }
                  qfree(v203[0]);
                  goto LABEL_52;
                }
                if ( *((_QWORD *)&v225 + 1) )
                {
                  *(_QWORD *)&v226 = 0;
                  qfree(*((__int64 *)&v225 + 1));
                }
                qfree(v224);
              }
              if ( v218 )
              {
                *(_QWORD *)&v219 = 0;
                qfree((__int64)v218);
              }
              qfree((__int64)v216);
              LOBYTE(v164) = (_BYTE)v166;
              v178.m128i_i8[0] = (char)v166;
            }
            v165 = v206;
            sub_127A20((__int64)v206, (__int64)a1, (__int64)v17, 256, v54, v55, *(double *)v12.m128i_i64, a5);
            if ( (unsigned int)(*(_DWORD *)v182 - 1) > 1 )
            {
              LOBYTE(v163) = 0;
            }
            else
            {
              v56 = v182 + 48;
              if ( *(_DWORD *)v182 == 2 )
                v56 = v182 + 32;
              v232 = nullptr;
              v233 = 0u;
              n = (size_t)&v232;
              v234 = 0;
              sub_123EA0((__int64)a1, (__int64 *)&v232, (__int64)v56, 1, 0xFFFF0000, 0.0);
              LOBYTE(v163) = sub_64780(v165, (_QWORD *)n);
              if ( !(_BYTE)v163 )
                LOBYTE(v163) = sub_318470((unsigned __int64 **)&v207, (__int64)&v233 + 8);
              if ( *((_QWORD *)&v233 + 1) )
              {
                v234.m128i_i64[0] = 0;
                qfree(*((__int64 *)&v233 + 1));
              }
              qfree((__int64)v232);
            }
            v12 = 0;
            v184 = 0;
            v185 = 0;
            LODWORD(n) = *(_DWORD *)v182;
            if ( (unsigned int)(n - 56) <= 1 && !v182[64] || !v178.m128i_i8[0] )
            {
              v178.m128i_i64[0] = 0;
              if ( (_BYTE)v164 )
                goto LABEL_138;
              LOBYTE(v160) = 0;
              v157 = 1;
LABEL_169:
              for ( v178.m128i_i64[0] = 0; ; v178.m128i_i64[0] = v163 )
              {
                v59 = sub_A9AA0((__int64)a1, v171, (__int64)v17, (__int64)v182, 1u);
                v163 = v59;
                if ( !v59 )
                {
                  LOBYTE(v162) = 0;
                  goto LABEL_284;
                }
                if ( (_BYTE)v160 )
                {
                  LOBYTE(v164) = v160;
                  LOBYTE(v162) = v160;
LABEL_284:
                  v88 = *v17;
                  if ( *v17 == 61 )
                  {
                    if ( !sub_A4680((__int64)a1, (__int64)v182, &v186, v12, a5) )
                      goto LABEL_223;
                    goto LABEL_194;
                  }
                  if ( *(_DWORD *)v182 != 1 || v88 == 4 )
                  {
LABEL_287:
                    if ( *((_BYTE *)v17 + 64) != 14 )
                      goto LABEL_288;
                    if ( *(_DWORD *)v182 == 4 )
                    {
                      v167 = *((unsigned __int8 **)v17 + 9);
                      v112 = v167 + 16;
                      goto LABEL_326;
                    }
                    if ( *(_DWORD *)v182 == 11
                      && v182[32] == 4
                      && !v163
                      && sub_125B90(
                           *((unsigned __int8 **)v182 + 5),
                           *(_QWORD *)(a1[4].m128i_i64[0] + 1504),
                           v17,
                           0,
                           *(double *)v12.m128i_i64) )
                    {
                      v111 = *((__int64 **)v17 + 9);
                      v51 = *(_DWORD *)v182 == 4;
                      v167 = (unsigned __int8 *)v111;
                      v112 = (unsigned __int8 *)(v111 + 2);
                      v113 = v182 + 32;
                      if ( !v51 )
                        goto LABEL_316;
LABEL_326:
                      v168 = v112;
                      n = (size_t)(v182 + 32);
                      v126 = sub_125B60(v182 + 32, (__int64)v167, 0, *(double *)v12.m128i_i64);
                      v112 = v168;
                      if ( !v126 )
                      {
                        v111 = *((__int64 **)v17 + 9);
                        v113 = (unsigned __int8 *)n;
LABEL_316:
                        n = (size_t)v112;
                        if ( !sub_125B60(v113, (__int64)(v111 + 2), 0, *(double *)v12.m128i_i64) )
                          goto LABEL_288;
                        v114 = (__int64 *)v167;
                        v167 = (unsigned __int8 *)n;
                        v112 = (unsigned __int8 *)v114;
                      }
                      v115 = (size_t)v112;
                      v116 = a1[4].m128i_i64[0];
                      v163 = (size_t)(v182 + 64);
                      LOBYTE(v168) = sub_12CF30(v116, (__int64)v112, v182 + 64, 0, 0, (int)v112, v12);
                      if ( !(_BYTE)v168 )
                        goto LABEL_288;
                      v120 = v182;
                      if ( v182 == *((_BYTE **)v17 + 1) )
                      {
LABEL_324:
                        v121 = (unsigned __int64 *)j__qalloc_or_throw(80, v115, v117, (__int64)v120);
                        v177 = v121;
                        v178.m128i_i64[0] = (__int64)(v121 + 4);
                        v175.m128i_i64[0] = (__int64)(v121 + 8);
                        v122 = *((_QWORD *)v17 + 3);
                        v121[7] = 0;
                        v121[4] = 0xFFFFFFFF00000000LL;
                        v121[5] = 0;
                        v121[6] = 0xFFFFFFFF00000000LL;
                        v121[8] = 0xFFFFFFFF00000000LL;
                        v121[9] = 0;
                        sub_330970((__int64)v121, v122);
                        v123 = (unsigned __int8 *)v163;
                        v124 = (unsigned __int8 *)v178.m128i_i64[0];
                        *(_DWORD *)v177 = 4;
                        sub_125180(v124, v123);
                        sub_125180((unsigned __int8 *)v175.m128i_i64[0], v167);
                        sub_A3160((__int64)a1, v177, (__int64)v17, *(double *)v12.m128i_i64);
                        sub_125180(v167, (unsigned __int8 *)v178.m128i_i64[0]);
                        v125 = v182;
                        *((_QWORD *)v17 + 3) = *((_QWORD *)v182 + 3);
                        sub_11D5A0((__int64)v125);
                        sub_167810((__int64)a1, v17, 6u, v12, a5, a6);
                        goto LABEL_194;
                      }
                      v12 = 0;
                      v232 = nullptr;
                      v233 = 0u;
                      n = (size_t)&v232;
                      v234 = 0;
                      sub_127FE0((__int64)a1, (__int64 *)&v232, v163, 0, v118, v119, 0.0, a5);
                      v115 = n;
                      if ( !sub_B0230((__int64)a1, (unsigned __int64 **)n, *((_QWORD *)v17 + 1), (__int64)v182, 3, 1u) )
                      {
                        if ( *((_QWORD *)&v233 + 1) )
                        {
                          v234.m128i_i64[0] = 0;
                          qfree(*((__int64 *)&v233 + 1));
                        }
                        qfree((__int64)v232);
                        goto LABEL_324;
                      }
                      if ( *((_QWORD *)&v233 + 1) )
                      {
                        v234.m128i_i64[0] = 0;
                        qfree(*((__int64 *)&v233 + 1));
                      }
                      qfree((__int64)v232);
                    }
LABEL_288:
                    if ( (_BYTE)v162 && v157 )
                      goto LABEL_223;
                    LOBYTE(v162) = v160 | v162;
                    if ( (_BYTE)v162 )
                    {
                      v89 = a1[4].m128i_i64[0];
                      v12.m128i_i64[0] = 0;
                      v90 = *(unsigned __int8 **)(v89 + 128);
                      v91 = *(__int64 **)(v89 + 568);
                      v233 = 0;
                      v232 = nullptr;
                      v168 = v90;
                      n = (size_t)&v232;
                      if ( (char *)v91 + (_QWORD)v90 - 1 >= (char *)v91 )
                      {
                        v167 = (unsigned __int8 *)v91;
                        v232 = (__int64 (__fastcall **)())qvector_reserve(n, 0, 1, 16);
                        v12 = (__m128i)_mm_loadh_ps((const double *)&v168);
                        *(__m128i *)&v232[2 * v233] = v12;
                        *(_QWORD *)&v233 = v233 + 1;
                      }
                      LOBYTE(v162) = sub_317F40((__int64 *)n, (__int64)&v207);
                      if ( v232 )
                      {
                        *(_QWORD *)&v233 = 0;
                        qfree((__int64)v232);
                      }
                      if ( !(_BYTE)v162 )
                        goto LABEL_223;
                      if ( (_QWORD)v185 )
                      {
                        sub_1751F0(v165, v174, v92, v93, v94, v95);
                        if ( !(unsigned __int8)sub_64880(v165) || v208 )
                        {
                          LODWORD(v168) = 0;
                          while ( (int)v168 < (unsigned __int64)v185 )
                          {
                            sub_124680(
                              n,
                              (__int64)a1,
                              *(_QWORD *)(v184 + 8LL * (int)v168),
                              0,
                              *(double *)v12.m128i_i64,
                              a5);
                            v137 = sub_94210((unsigned __int64 **)n, v165);
                            v138 = (__int64 *)n;
                            if ( v137 )
                              goto LABEL_415;
                            sub_93B40((__int64 *)n);
                            LODWORD(v168) = (_DWORD)v168 + 1;
                          }
                        }
                      }
                    }
                    if ( (*(_BYTE *)(a1[30].m128i_i64[0] + 607) & 2) == 0 && sub_17D770((__int64)a1, v17, v169) )
                      goto LABEL_223;
                    sub_124680((__int64)v209, (__int64)a1, (__int64)v182, 2048, *(double *)v12.m128i_i64, a5);
                    n = (size_t)&v232;
                    sub_1752C0(
                      (__int64)&v232,
                      (__int64)v209,
                      (__int64)v17,
                      v182,
                      (__int64)a1,
                      (__int64)a1,
                      *(double *)v12.m128i_i64,
                      a5,
                      0,
                      v162,
                      (__int64)v171);
                    v96 = v174;
                    v167 = (unsigned __int8 *)v210;
                    sub_64000(v210, (__int64)v174, *(double *)v12.m128i_i64);
                    v100 = (unsigned __int8 *)v198;
                    v12.m128i_i64[0] = 0;
                    v211 = nullptr;
                    v212 = 0;
                    if ( (_QWORD)v198 )
                    {
                      v168 = (unsigned __int8 *)v198;
                      v163 = 16 * v198;
                      v211 = (void *)qalloc_or_throw(16 * v198, (__int64)v96, 16 * v198, v198);
                      *((_QWORD *)&v212 + 1) = v168;
                      memcpy(v211, v197, v163);
                      v100 = v168;
                      *(_QWORD *)&v212 = v168;
                    }
                    sub_1751F0((__int64 *)v167, v193, v97, (__int64)v100, v98, v99);
                    sub_64640(&v239, (__int64 *)v167, v101, v102, v103, v104);
                    v168 = (unsigned __int8 *)&v211;
                    sub_317C60((__int64 *)v240, (__int64)&v211);
                    LOBYTE(v163) = sub_64640(&v241, (__int64 *)v167, v105, v106, v107, v108);
                    v109 = sub_317C60((__int64 *)v242, (__int64)v168);
                    v247 = v163 | v109;
                    LODWORD(v168) = sub_175BD0(n, (__int64)v182, (__m128i)0LL);
                    if ( v244 )
                    {
                      LOBYTE(v163) = v244 == 1;
                      v150 = sub_11CC50(v237 + 64, v243[30].m128i_i64[0], 0, 0.0);
                      v151 = 0;
                      if ( (_BYTE)v163 == v150 )
                        v151 = 3;
                      v245 = sub_AB6D0(v243, (unsigned int *)v237, (int)v237 + 64, v151 | 4u, 0.0);
                    }
                    v179 += v245;
                    if ( (_DWORD)v168 == -2 )
                      goto LABEL_417;
                    if ( !(_DWORD)v168 )
                    {
                      LODWORD(v168) = v246;
                      if ( v246 )
                      {
                        sub_93B40((__int64 *)v167);
                        sub_173DA0(n);
                        sub_93B40(v209);
                        goto LABEL_194;
                      }
                      v110 = v162;
                      if ( v245 || (*((_QWORD *)&v139 + 1) = v17, *(_QWORD *)&v139 = a1, v110 = sub_B36D0(v139), v245) )
                      {
                        v177 = nullptr;
                        v178.m128i_i64[0] = 0;
                      }
                      v175.m128i_i8[0] = v110;
                      sub_93B40((__int64 *)v167);
                      sub_173DA0(n);
                      sub_93B40(v209);
                      if ( !v175.m128i_i8[0] )
                      {
LABEL_210:
                        if ( v184 )
                        {
                          *(_QWORD *)&v185 = 0;
                          qfree(v184);
                        }
                        sub_93B40(v165);
                        sub_93B40((__int64 *)v171);
                        goto LABEL_143;
                      }
LABEL_201:
                      v66 = (const void **)n;
                      sub_124680(n, (__int64)a1, (__int64)v182, 0, *(double *)v12.m128i_i64, a5);
                      sub_648D0(v193, v66, *(double *)v12.m128i_i64);
                      a5 = 0;
                      v67 = *((void **)&v233 + 1);
                      v12 = _mm_loadu_si128(&v234);
                      *((_QWORD *)&v233 + 1) = 0;
                      v234 = 0;
                      if ( src )
                      {
                        v175 = v12;
                        v195.m128i_i64[0] = 0;
                        qfree((__int64)src);
                        v12 = _mm_load_si128(&v175);
                      }
                      src = v67;
                      v195 = v12;
                      sub_173690(v174, (__int64)v193, *(double *)v12.m128i_i64);
                      sub_93B40((__int64 *)n);
                      v187 = 0;
                      if ( v188 )
                      {
                        *(_QWORD *)&v189 = 0;
                        qfree((__int64)v188);
                        v188 = nullptr;
                        *((_QWORD *)&v189 + 1) = 0;
                      }
                      v200 = 0;
                      if ( v201 )
                      {
                        *(_QWORD *)&v202 = 0;
                        qfree(v201);
                        v201 = 0;
                        *((_QWORD *)&v202 + 1) = 0;
                      }
                      if ( (_BYTE)v162 )
                        sub_1EA870((__int64)a1, a1 + 28, a1[3].m128i_i64[0], 0);
                      v17 = (unsigned int *)v182;
                      goto LABEL_210;
                    }
                    if ( (unsigned int)((_DWORD)v168 + 4) <= 1 )
                    {
                      if ( (_DWORD)v168 == -4 )
                        ++v179;
                    }
                    else if ( (int)v168 <= 1 || !(_BYTE)v166 )
                    {
                      LOBYTE(v166) = (unsigned __int8)v164 & ((int)v236 > 0);
                      if ( !(_BYTE)v166 )
                      {
                        v12.m128i_i64[0] = 0;
                        v231 = 0;
                        *((_QWORD *)&v226 + 1) = 0xFFFFFFFF00000000LL;
                        v228 = 0xFFFFFFFF00000000LL;
                        v230 = 0xFFFFFFFF00000000LL;
                        v227 = 0;
                        v229 = 0;
                        v163 = (size_t)&v224;
                        v225 = 0;
                        sub_1253A0((__int64)&v224, (__int64)v17);
                        v140 = 128;
                        if ( *(char *)(a1[4].m128i_i64[0] + 5) < 0 )
                          v140 = 512;
                        if ( sub_173990(v17, v182, (int)v168, v140) )
                        {
                          if ( !(_BYTE)v162 || (_DWORD)v236 )
                            goto LABEL_405;
                          if ( !v245 )
                          {
                            if ( *(_DWORD *)v182 != 4 || !sub_125B60(v182 + 32, (__int64)(v182 + 64), 0, 0.0) )
                            {
                              if ( *((_BYTE *)v17 + 64) == 1 )
                                sub_1380A0(a1[4].m128i_i64[0], v17[18], (int)v17[17], 0.0, a5);
                              sub_11D5A0((__int64)v17);
                              v141 = a1[1].m128i_i32[2];
                              v142 = v182;
                              BYTE1(v141) &= ~2u;
                              LOBYTE(v141) = v141 | 0x80;
                              a1[1].m128i_i32[2] = v141;
                              v143 = sub_13B260(a1, (__int64)v142, 0.0);
                              if ( v143 )
                                sub_13B2C0(v143);
                              LOBYTE(v166) = v162;
                            }
LABEL_405:
                            if ( (*(_BYTE *)(a1[4].m128i_i64[0] + 4) & 8) == 0
                              || (v164 = (unsigned __int64 **)&v216,
                                  sub_1E16F0((__int64)&v216, (__int64)a1[28].m128i_i64),
                                  LOBYTE(v159) = sub_94210((unsigned __int64 **)v165, v164),
                                  sub_93B40((__int64 *)v164),
                                  v144 = 24,
                                  !(_BYTE)v159) )
                            {
                              v144 = 8;
                            }
                            if ( !(_QWORD)v185 )
                              v144 |= 4u;
                            v145 = sub_167810((__int64)a1, (unsigned int *)v182, v144, (__m128i)0LL, a5, a6);
                            if ( (v182[6] & 2) != 0 )
                            {
                              if ( (_QWORD)v185 )
                              {
                                if ( (_BYTE)v166 )
                                  sub_1253A0((__int64)v17, v163);
                                goto LABEL_413;
                              }
                              if ( (unsigned __int8)v162 | v181 || v145 )
                              {
LABEL_422:
                                v248 = 0;
                                sub_7CCD0(v163);
                                sub_93B40((__int64 *)v167);
                                sub_173DA0(n);
                                sub_93B40(v209);
                                LOBYTE(v168) = v162;
                                goto LABEL_194;
                              }
LABEL_425:
                              if ( (*((_BYTE *)v17 + 64) != 1 || !(unsigned __int8)sub_11CCD0(v170, v17[18]))
                                && *((_QWORD *)v182 + 3) != *((_QWORD *)v17 + 3)
                                && (*v17 != 4 && (*v17 != 67 || v17[9] != v17[17]) || *((_BYTE *)v17 + 32) != 2) )
                              {
                                if ( (int)v168 > 1 && *(_DWORD *)v182 != 1 )
                                  goto LABEL_413;
                                if ( *((_BYTE *)v17 + 32) == 4 || *((_BYTE *)v17 + 48) == 4 )
                                {
                                  if ( !(_BYTE)v160 )
                                    goto LABEL_413;
                                  sub_11D5A0((__int64)v17);
                                  v148 = a1[1].m128i_i32[2];
                                  BYTE1(v148) &= ~2u;
                                  LOBYTE(v148) = v148 | 0x80;
                                  a1[1].m128i_i32[2] = v148;
                                }
                              }
                            }
                            else if ( !((unsigned __int8)v162 | v181) && !v145 )
                            {
                              goto LABEL_425;
                            }
                            if ( (_QWORD)v185 )
                            {
                              v159 = (unsigned __int64 *)&v213;
                              v178.m128i_i64[0] = (__int64)v238;
                              sub_124680((__int64)&v213, (__int64)a1, (__int64)v238, 0, 0.0, a5);
                              v220 = 0;
                              v216 = (unsigned __int8 *)&off_4DDEA0;
                              v178.m128i_i32[0] = 0;
                              v217 = nullptr;
                              v12 = (__m128i)_mm_loadh_ps((const double *)&v159);
                              v219 = 0u;
                              v222 = 0;
                              v223 = 0;
                              v218 = a1;
                              v168 = (unsigned __int8 *)&v216;
                              v221 = v12;
                              while ( v178.m128i_i32[0] < (unsigned __int64)v185 )
                              {
                                v146 = *(unsigned __int64 **)(v184 + 8LL * v178.m128i_i32[0]);
                                if ( *(_DWORD *)v221.m128i_i64[0] != 8
                                  && (v177 = *(unsigned __int64 **)(v184 + 8LL * v178.m128i_i32[0]),
                                      v147 = sub_125B90(
                                               (unsigned __int8 *)v221.m128i_i64[0],
                                               *(_QWORD *)(*((_QWORD *)v218 + 8) + 1504LL),
                                               (unsigned int *)v146,
                                               0,
                                               *(double *)v12.m128i_i64),
                                      v146 = v177,
                                      v147)
                                  && *(_DWORD *)(v221.m128i_i64[0] + 68) == *((_DWORD *)v177 + 17) )
                                {
                                  v149 = (unsigned __int8 *)(v177 + 4);
                                  v166 = v177;
                                  v177 = *(unsigned __int64 **)(*((_QWORD *)v218 + 8) + 1504LL);
                                  sub_125180(v149, (unsigned __int8 *)(v221.m128i_i64[0] + 64));
                                  sub_172B80(v177, (__int64)v166, v12);
                                }
                                else
                                {
                                  v222 = 0;
                                  if ( (unsigned int)sub_11E900(v146, (__int64)v168) || v222 <= 0 )
                                  {
                                    if ( !under_debugger )
                                      sub_383060(0xC56Au, *(double *)v12.m128i_i64);
LABEL_464:
                                    BUG();
                                  }
                                }
                                ++v178.m128i_i32[0];
                              }
                              while ( v175.m128i_i32[0] < (unsigned __int64)v185 )
                                sub_167810(
                                  (__int64)a1,
                                  *(unsigned int **)(v184 + 8LL * v175.m128i_i32[0]++),
                                  6u,
                                  v12,
                                  a5,
                                  a6);
                              if ( *((_QWORD *)&v214 + 1) )
                              {
                                v215 = 0;
                                qfree(*((__int64 *)&v214 + 1));
                              }
                              qfree(v213);
                              sub_167810((__int64)a1, (unsigned int *)v182, 0xEu, v12, a5, a6);
                            }
                            goto LABEL_422;
                          }
                          sub_7CCD0(v163);
LABEL_417:
                          sub_93B40((__int64 *)v167);
                          sub_173DA0(n);
                          sub_93B40(v209);
                          goto LABEL_201;
                        }
LABEL_413:
                        sub_7CCD0(v163);
                      }
                    }
                    sub_93B40((__int64 *)v167);
                    sub_173DA0(n);
                    v138 = v209;
LABEL_415:
                    sub_93B40(v138);
                    goto LABEL_223;
                  }
                  if ( v88 == 67 )
                  {
                    if ( v17[9] == v17[17] )
                      goto LABEL_288;
                  }
                  else if ( v88 - 8 <= 2 )
                  {
                    goto LABEL_288;
                  }
                  v12 = 0;
                  v232 = nullptr;
                  v233 = 0u;
                  v234 = 0;
                  v168 = v182 + 64;
                  n = (size_t)&v232;
                  sub_123EA0((__int64)a1, (__int64 *)&v232, (__int64)(v182 + 64), 0, 0xFFFF0000, 0.0);
                  sub_64700((__int64 *)n, &v186);
                  sub_3180C0((__int64 *)&v233 + 1, (__int64)&v188, v127, v128);
                  if ( (unsigned __int8)sub_64880((_QWORD *)n) && !v234.m128i_i64[0] )
                  {
LABEL_339:
                    sub_93B40((__int64 *)n);
                    goto LABEL_287;
                  }
                  v159 = (unsigned __int64 *)&v213;
                  sub_123A40((__int64)&v213, v168, v129, v130);
                  if ( *v17 - 12 <= 1
                    && (v216 = nullptr, v217 = nullptr, (unsigned __int8)sub_122E10((__int64 *)&v216, v17))
                    && v217
                    && *v217 != 4 )
                  {
                    if ( (_BYTE)v213 == 4 )
                    {
                      if ( (unsigned int)(*(_DWORD *)v214 - 12) <= 1 )
                      {
                        v224 = 0;
                        *(_QWORD *)&v225 = 0;
                        if ( (unsigned __int8)sub_122E10(&v224, (_DWORD *)v214) )
                        {
                          if ( (_QWORD)v225
                            && sub_1255D0((unsigned __int8 *)v225, v170, (__int64)v167, 0, 0.0)
                            && (~v224 & (unsigned __int64)&v216[v224] & 0x8000000000000000LL) == 0LL )
                          {
                            sub_11CDA0((__int64)v159);
                            goto LABEL_339;
                          }
                        }
                      }
                      goto LABEL_346;
                    }
                    v168 = v216;
                    sub_11CDA0((__int64)v159);
                    if ( (__int64)v168 >= 0 )
                      goto LABEL_339;
                  }
                  else
                  {
LABEL_346:
                    sub_11CDA0((__int64)v159);
                  }
                  if ( sub_124CC0((__int64)a1, (_QWORD *)n, (__int64)v182, (__int64)v17, 0, 1u, 0.0, a5)
                    || sub_A9D90((__int64)a1, (unsigned __int64 **)n, *((_QWORD *)v182 + 1), 0, 1u) )
                  {
                    sub_93B40((__int64 *)n);
                    goto LABEL_223;
                  }
                  goto LABEL_339;
                }
                if ( (unsigned int *)v59 == v17 )
                  goto LABEL_223;
                LOBYTE(v162) = *v17 == 4 || *v17 - 8 <= 3;
                if ( (_BYTE)v162 )
                {
                  if ( *((_BYTE *)v17 + 32) == 4 )
                  {
                    v60 = *((unsigned __int8 **)v17 + 5);
                  }
                  else
                  {
                    LOBYTE(v162) = 0;
                    v60 = (unsigned __int8 *)v17;
                  }
                }
                else
                {
                  v60 = (unsigned __int8 *)v17;
                }
                if ( *((_DWORD *)v60 + 17) <= *(_DWORD *)(v163 + 68) )
                {
                  v156 = a1[30].m128i_i64[0];
                  v159 = *(unsigned __int64 **)(v156 + 112);
                  if ( sub_125B90(v60, (__int64)v159, (unsigned int *)v163, 1u, *(double *)v12.m128i_i64) )
                  {
                    v61 = v165;
                    v155 = *(_QWORD *)(v163 + 8);
                    v154 = *((_QWORD *)v17 + 1);
                    n = (size_t)&v232;
                    sub_64000((__int64 *)&v232, (__int64)v165, *(double *)v12.m128i_i64);
                    v12 = 0;
                    *((_QWORD *)&v233 + 1) = 0;
                    v234 = 0;
                    if ( v208 )
                    {
                      v153 = v208;
                      v152 = 16 * v208;
                      *((_QWORD *)&v233 + 1) = qalloc_or_throw(16 * v208, (__int64)v61, 16 * v208, v208);
                      v234.m128i_i64[1] = v153;
                      memcpy(*((void **)&v233 + 1), v207, v152);
                      v234.m128i_i64[0] = v153;
                    }
                    n = sub_A9D90((__int64)a1, (unsigned __int64 **)n, v154, v155, 1u);
                    if ( *((_QWORD *)&v233 + 1) )
                    {
                      v234.m128i_i64[0] = 0;
                      qfree(*((__int64 *)&v233 + 1));
                    }
                    qfree((__int64)v232);
                    if ( !n )
                    {
                      if ( sub_1225C0((__int64)v17) )
                      {
                        if ( sub_122600((unsigned int *)v163) && *(_DWORD *)(v163 + 68) == v17[9] )
                        {
LABEL_186:
                          sub_A33C0((__int64)a1, (__int64)v17);
                          if ( !(_BYTE)v162 )
                          {
                            sub_11CDA0((__int64)(v17 + 12));
                            *v17 = 4;
                          }
                          v62 = v17[9];
                          v177 = (unsigned __int64 *)(v17 + 8);
                          v178.m128i_i32[0] = v62;
                          sub_125180((unsigned __int8 *)v17 + 32, (unsigned __int8 *)(v163 + 64));
                          v63 = *v17;
                          v64 = v17[9];
                          if ( *v17 > 9 )
                          {
                            if ( v63 != 10 )
                              goto LABEL_352;
                          }
                          else
                          {
                            if ( v63 <= 7 )
                            {
                              if ( v63 == 4 )
                              {
                                if ( v17[17] != v64 )
                                  goto LABEL_192;
                                goto LABEL_193;
                              }
LABEL_352:
                              if ( (int)v17[17] > v64 )
                              {
                                if ( !under_debugger )
                                  sub_383060(0xC56Bu, 0.0);
                                goto LABEL_464;
                              }
                              goto LABEL_193;
                            }
                            if ( v178.m128i_i32[0] < v64 )
                            {
                              if ( !(unsigned __int8)sub_12AB50(
                                                       (unsigned int **)v177,
                                                       v159,
                                                       v178.m128i_i32[0],
                                                       0,
                                                       (__m128i)0LL) )
                              {
                                v175.m128i_i64[0] = *((_QWORD *)v17 + 3);
                                v136 = sub_11CC50((unsigned __int8 *)v177, v156, 0, 0.0);
                                sub_1207E0(
                                  (char *)v177,
                                  v159,
                                  (unsigned int)v136 + 10,
                                  v175.m128i_i64[0],
                                  v178.m128i_i32[0],
                                  (__m128i)0LL);
                              }
                              v64 = v17[9];
                            }
                          }
                          if ( v64 == v17[17] )
                          {
                            *v17 = 4;
                          }
                          else if ( v64 >= (int)v17[17] )
                          {
LABEL_192:
                            *v17 = 10;
                          }
LABEL_193:
                          sub_A3160((__int64)a1, v17, v163, 0.0);
                          sub_167810((__int64)a1, v17, 6u, (__m128i)0LL, a5, a6);
                          LOBYTE(v168) = 0;
                          LOBYTE(v162) = 0;
LABEL_194:
                          v65 = a1[1].m128i_i32[2];
                          ++v179;
                          BYTE1(v65) &= ~2u;
                          LOBYTE(v65) = v65 | 0x80;
                          v51 = v180 == 0;
                          a1[1].m128i_i32[2] = v65;
                          if ( !v51 )
                            sub_175220(v182 + 64);
                          if ( *(_DWORD *)v182 == 4 && v182[32] == 2 )
                            *((_DWORD *)v182 + 1) &= ~0x20000u;
                          if ( *(_BYTE *)(a1[30].m128i_i64[0] + 1425) )
                            sub_A2520((__int64)a1, "propagate step %d result (propagated %d)");
                          if ( (_BYTE)v168 )
                          {
                            v177 = nullptr;
                            v178.m128i_i64[0] = 0;
                            n = (size_t)&v232;
                            goto LABEL_201;
                          }
                          n = (size_t)&v232;
                          sub_124680((__int64)&v232, (__int64)a1, (__int64)v182, 0, *(double *)v12.m128i_i64, a5);
                          sub_648D0(v193, (const void **)n, *(double *)v12.m128i_i64);
                          a5 = 0;
                          v131 = *((unsigned __int64 **)&v233 + 1);
                          v12 = _mm_loadu_si128(&v234);
                          *((_QWORD *)&v233 + 1) = 0;
                          v234 = 0;
                          if ( src )
                          {
                            v177 = v131;
                            v178 = v12;
                            v195.m128i_i64[0] = 0;
                            qfree((__int64)src);
                            v131 = v177;
                            v12 = _mm_load_si128(&v178);
                          }
                          src = v131;
                          v195 = v12;
                          sub_173690(v174, (__int64)v193, *(double *)v12.m128i_i64);
                          sub_93B40((__int64 *)n);
                          sub_1751F0(v193, v176, v132, v133, v134, v135);
                          if ( v184 )
                          {
                            *(_QWORD *)&v185 = 0;
                            qfree(v184);
                          }
                          sub_93B40(v165);
                          sub_93B40((__int64 *)v171);
LABEL_145:
                          v177 = nullptr;
LABEL_52:
                          sub_64640(v193, &v186, (__int64)v22, (__int64)v23, v24, v25);
                          sub_317C60((__int64 *)&src, (__int64)&v188);
                          goto LABEL_13;
                        }
                      }
                      else if ( !sub_122600((unsigned int *)v163) )
                      {
                        goto LABEL_186;
                      }
                    }
                  }
                }
                if ( *(_DWORD *)(get_ph() + 4) != 72 && *(_DWORD *)(get_ph() + 4) != 15 )
                  goto LABEL_223;
                v183[0] = (__int64)a1;
                v183[1] = v178.m128i_i64[0];
                v183[2] = (__int64)v177;
                if ( !(unsigned __int8)sub_178580(
                                         v183,
                                         (unsigned int *)v182,
                                         (unsigned int *)v163,
                                         *(double *)v12.m128i_i64,
                                         a5) )
                  goto LABEL_223;
                v177 = *(unsigned __int64 **)(v163 + 16);
                if ( !v177 )
                {
                  if ( !under_debugger )
                    sub_383060(0xCE59u, *(double *)v12.m128i_i64);
                  goto LABEL_464;
                }
                sub_A33C0((__int64)a1, v163);
                sub_A3160((__int64)a1, (_QWORD *)v163, (__int64)v182, *(double *)v12.m128i_i64);
              }
            }
            v159 = *((unsigned __int64 **)v17 + 1);
            v68 = sub_A9AA0((__int64)a1, v171, (__int64)v159, (__int64)v182, 1u);
            LOBYTE(v160) = 0;
            if ( v68 )
            {
LABEL_214:
              if ( (_QWORD)v185 )
              {
                if ( (v182[6] & 2) != 0 )
                {
                  v178.m128i_i64[0] = 0;
LABEL_223:
                  if ( v184 )
                  {
                    *(_QWORD *)&v185 = 0;
                    qfree(v184);
                  }
LABEL_138:
                  if ( v207 )
                  {
                    v208 = 0;
                    qfree((__int64)v207);
                  }
                  qfree(v206[0]);
                  if ( v204 )
                  {
                    v205 = 0;
                    qfree((__int64)v204);
                  }
                  qfree(v203[0]);
LABEL_143:
                  if ( v178.m128i_i64[0] )
                  {
                    sub_A33C0((__int64)a1, v178.m128i_i64[0]);
                    sub_A3160((__int64)a1, v178.m128i_i64[0], (__int64)v177, *(double *)v12.m128i_i64);
                    goto LABEL_145;
                  }
                  goto LABEL_52;
                }
                if ( !(_BYTE)v163 && (v182[64] != 1 || *(_DWORD *)(v170 + 60) != *((_DWORD *)v182 + 18)) )
                {
                  if ( *v17 == 4 || *v17 == 67 && v17[9] == v17[17] )
                    LOBYTE(v164) = (*((_BYTE *)v17 + 32) == 4) | (unsigned __int8)v164;
                  else
                    LOBYTE(v164) = v178.m128i_i8[0];
                }
              }
              v157 = v160 ^ 1;
              if ( (unsigned __int8)v160 != 1 )
              {
                v178.m128i_i64[0] = 0;
                if ( (_BYTE)v164 )
                  goto LABEL_223;
              }
              goto LABEL_169;
            }
            v86 = v165;
            v162 = a1[4].m128i_i32[2];
            n = (size_t)&v232;
            sub_64000((__int64 *)&v232, (__int64)v165, 0.0);
            v12 = 0;
            *((_QWORD *)&v233 + 1) = 0;
            v234 = 0;
            if ( v208 )
            {
              v160 = v208;
              v158 = 16 * v208;
              *((_QWORD *)&v233 + 1) = qalloc_or_throw(16 * v208, (__int64)v86, 16 * v208, v208);
              v234.m128i_i64[1] = v160;
              memcpy(*((void **)&v233 + 1), v207, v158);
              v234.m128i_i64[0] = v160;
            }
            LOBYTE(v160) = sub_1778B0(
                             (__int64)a1,
                             (unsigned __int64 **)n,
                             (__int64)v159,
                             0,
                             (__int64)v182,
                             &v184,
                             (__m128i)0LL,
                             a5,
                             v162);
            if ( !(_BYTE)v160 )
              goto LABEL_261;
            if ( (unsigned __int8)sub_64880((_QWORD *)n) && !v234.m128i_i64[0]
              || (unsigned __int8)sub_A2310((_QWORD *)(*(_QWORD *)(a1[4].m128i_i64[0] + 1504) + 104LL), (_QWORD *)n) )
            {
              goto LABEL_262;
            }
            v87 = *(__int64 **)(a1[4].m128i_i64[0] + 784);
            if ( v87 )
              LOBYTE(v160) = !sub_17C4E0(v87, n, v162, 0xFFFFFFFF, 0, 0, 0.0, 2u, 0x2001u);
            else
LABEL_261:
              LOBYTE(v160) = 0;
LABEL_262:
            if ( *((_QWORD *)&v233 + 1) )
            {
              v234.m128i_i64[0] = 0;
              qfree(*((__int64 *)&v233 + 1));
            }
            qfree((__int64)v232);
            goto LABEL_214;
          }
        }
        else
        {
          v28 = a1[4].m128i_i64[0];
          if ( !*(_QWORD *)(v28 + 1040) || (v22 = *(_QWORD **)(v28 + 1016), v29 = v28 + 1008, !v22) )
          {
LABEL_43:
            if ( *(_DWORD *)v182 == 4 && v25 == 4 )
            {
              if ( sub_125B60(v182 + 32, (__int64)(v17 + 16), 0, *(double *)v12.m128i_i64)
                && sub_125B60(v182 + 64, (__int64)(v17 + 8), 0, *(double *)v12.m128i_i64)
                && v182[32] == 6 )
              {
                goto LABEL_17;
              }
              v25 = *v17;
            }
            if ( v25 != 10 )
            {
LABEL_46:
              if ( v25 == 62 )
              {
                if ( *(_DWORD *)v182 != 1 && *(_DWORD *)v182 != 4 )
                  goto LABEL_52;
                goto LABEL_49;
              }
              goto LABEL_47;
            }
            if ( (*((_BYTE *)v17 + 65) & 4) == 0 )
            {
              v233 = 0u;
              v232 = off_4DDF50;
              v234 = 0u;
              v235 = 0;
              v178.m128i_i64[0] = (__int64)&v236;
              sub_123A40((__int64)&v236, (unsigned __int8 *)v17 + 64, (__int64)v22, (__int64)v23);
              LODWORD(n) = sub_11E900(v182, (__int64)&v232);
              v232 = off_4DDF50;
              sub_11CDA0(v178.m128i_i64[0]);
              v25 = *v17;
              if ( (_DWORD)n )
                *((_BYTE *)v17 + 65) |= 4u;
              goto LABEL_46;
            }
            goto LABEL_47;
          }
        }
        v24 = v29;
        v30 = v22;
        do
        {
          while ( 1 )
          {
            v31 = v30[2];
            v32 = v30[3];
            if ( v30[4] < (unsigned __int64)v23 )
              break;
            v24 = (__int64)v30;
            v30 = (_QWORD *)v30[2];
            if ( !v31 )
              goto LABEL_35;
          }
          v30 = (_QWORD *)v30[3];
        }
        while ( v32 );
LABEL_35:
        if ( v24 == v29 )
        {
          v33 = v182;
        }
        else
        {
          if ( (unsigned __int64)v23 >= *(_QWORD *)(v24 + 32) )
            goto LABEL_52;
          v24 = v29;
          v33 = v182;
        }
        do
        {
          while ( 1 )
          {
            v23 = (_BYTE *)v22[2];
            v34 = v22[3];
            if ( v22[4] < (unsigned __int64)v27 )
              break;
            v24 = (__int64)v22;
            v22 = (_QWORD *)v22[2];
            if ( !v23 )
              goto LABEL_41;
          }
          v22 = (_QWORD *)v22[3];
        }
        while ( v34 );
LABEL_41:
        v182 = v33;
        if ( v24 != v29 && (unsigned __int64)v27 >= *(_QWORD *)(v24 + 32) )
          goto LABEL_52;
        goto LABEL_43;
      }
    }
LABEL_17:
    if ( v201 )
    {
      *(_QWORD *)&v202 = 0;
      qfree(v201);
    }
    qfree(v199);
    if ( v197 )
    {
      *(_QWORD *)&v198 = 0;
      qfree((__int64)v197);
    }
    qfree(v196);
    if ( src )
    {
      v195.m128i_i64[0] = 0;
      qfree((__int64)src);
    }
    qfree(v193[0]);
LABEL_6:
    v182 = *((_BYTE **)v182 + 1);
  }
  while ( v182 );
  if ( v179 )
  {
    v45 = a1[1].m128i_i32[2];
    BYTE1(v45) &= ~2u;
    LOBYTE(v45) = v45 | 0xC0;
    a1[1].m128i_i32[2] = v45;
    sub_A2520((__int64)a1, "propagate result: %d");
  }
  a1[1].m128i_i32[2] &= ~0x80u;
  if ( v191 )
  {
    *(_QWORD *)&v192 = 0;
    qfree(v191);
  }
LABEL_81:
  qfree(v190[0]);
  if ( v188 )
  {
    *(_QWORD *)&v189 = 0;
    qfree((__int64)v188);
  }
  qfree(v186);
  return v179;
}

