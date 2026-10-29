__int64 __fastcall sub_E1F80(_QWORD *a1, __int64 a2, char *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  int v7; // ebp
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // r13
  char v12; // al
  char v13; // bl
  char v14; // r13
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // rsi
  __m128i v18; // xmm0
  int v19; // r12d
  char v20; // al
  bool v21; // r15
  int v22; // eax
  int v23; // r9d
  int v24; // r12d
  int v25; // edi
  int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rdi
  unsigned int v29; // ebx
  char v30; // al
  int v31; // ebp
  int v32; // edx
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  int v35; // eax
  int v36; // edx
  __m128i v37; // xmm1
  __int64 v38; // rax
  __int64 v39; // rdx
  __m128i v40; // xmm0
  __int64 v41; // rax
  __int64 v42; // rdx
  __m128i v43; // xmm1
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __int64 v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // rdx
  __int64 v53; // rax
  __m128i v54; // xmm1
  __int64 v55; // rax
  __m128i v56; // xmm0
  __m128i v57; // xmm1
  __m128i v58; // xmm1
  __int64 v59; // r15
  char v60; // al
  unsigned __int64 v61; // r13
  unsigned __int64 v62; // r15
  int v63; // ebx
  int v64; // edx
  __m128i v65; // xmm0
  __m128i v66; // xmm1
  int v67; // eax
  int v68; // edx
  __int64 v69; // rax
  __int64 v70; // rdx
  __m128i v71; // xmm1
  __int64 v72; // rax
  __m128i v73; // xmm0
  __int64 v74; // rdx
  __m128i v75; // xmm1
  __m128i v76; // xmm0
  __m128i v77; // xmm0
  __m128i v78; // xmm1
  __int64 v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  __m128i v85; // xmm1
  __int64 v86; // rdx
  __int64 v87; // rax
  __m128i v88; // xmm1
  __int64 v89; // rax
  __m128i v90; // xmm0
  __int64 v91; // rdx
  __m128i v92; // xmm2
  __m128i v93; // xmm1
  int v95; // eax
  int v96; // eax
  int v97; // r9d
  __int64 v98; // r15
  char v99; // al
  int v100; // ecx
  __int64 v101; // r15
  unsigned __int64 v102; // r15
  __int64 v103; // rax
  __int64 v104; // rdi
  unsigned int v105; // eax
  int v106; // eax
  unsigned __int64 v107; // r13
  unsigned __int64 v108; // rbx
  unsigned int v109; // ebp
  int v110; // eax
  unsigned __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rsi
  int v115; // edi
  __m128i v116; // xmm0
  __int64 v117; // rcx
  __m128i v118; // xmm1
  int v119; // edi
  __m128i v120; // xmm1
  __m128i v121; // xmm0
  __m128i v122; // xmm1
  __m128i v123; // xmm0
  __m128i v124; // xmm0
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // rdx
  __m128i v131; // xmm1
  __m128i v132; // xmm0
  __m128i v133; // xmm1
  __m128i v134; // xmm1
  __int64 v135; // rax
  bool v137; // [rsp+28h] [rbp-2E0h]
  int v138; // [rsp+34h] [rbp-2D4h]
  int v139; // [rsp+38h] [rbp-2D0h]
  int v140; // [rsp+38h] [rbp-2D0h]
  unsigned __int64 v141; // [rsp+38h] [rbp-2D0h]
  int v142; // [rsp+40h] [rbp-2C8h]
  int v143; // [rsp+40h] [rbp-2C8h]
  __int64 v144; // [rsp+40h] [rbp-2C8h]
  int *v145; // [rsp+48h] [rbp-2C0h]
  int v146; // [rsp+50h] [rbp-2B8h] BYREF
  int v147; // [rsp+54h] [rbp-2B4h]
  __int64 v148; // [rsp+58h] [rbp-2B0h]
  __m128i v149; // [rsp+60h] [rbp-2A8h] BYREF
  __int64 v150; // [rsp+70h] [rbp-298h]
  __m128i v151; // [rsp+78h] [rbp-290h] BYREF
  __m128i v152; // [rsp+88h] [rbp-280h] BYREF
  unsigned int v153; // [rsp+98h] [rbp-270h]
  __int64 v154; // [rsp+A8h] [rbp-260h]
  __m128i v155; // [rsp+B0h] [rbp-258h] BYREF
  __int64 v156; // [rsp+C0h] [rbp-248h]
  __m128i v157; // [rsp+C8h] [rbp-240h] BYREF
  __m128i v158; // [rsp+D8h] [rbp-230h] BYREF
  __int64 v159; // [rsp+E8h] [rbp-220h]
  __int64 v160; // [rsp+F0h] [rbp-218h] BYREF
  __int64 v161; // [rsp+F8h] [rbp-210h]
  __int64 v162; // [rsp+100h] [rbp-208h]
  __m128i v163; // [rsp+108h] [rbp-200h] BYREF
  int v164; // [rsp+118h] [rbp-1F0h]
  __int16 v165; // [rsp+11Ch] [rbp-1ECh]
  int v166; // [rsp+120h] [rbp-1E8h] BYREF
  int v167; // [rsp+124h] [rbp-1E4h]
  __int64 v168; // [rsp+128h] [rbp-1E0h]
  __m128i v169; // [rsp+130h] [rbp-1D8h] BYREF
  __int64 v170; // [rsp+140h] [rbp-1C8h]
  __m128i v171; // [rsp+148h] [rbp-1C0h] BYREF
  __m128i v172; // [rsp+158h] [rbp-1B0h] BYREF
  unsigned int v173; // [rsp+168h] [rbp-1A0h]
  __int64 v174; // [rsp+178h] [rbp-190h]
  __m128i v175; // [rsp+180h] [rbp-188h] BYREF
  __int64 v176; // [rsp+190h] [rbp-178h]
  __m128i v177; // [rsp+198h] [rbp-170h] BYREF
  __m128i v178; // [rsp+1A8h] [rbp-160h] BYREF
  __int64 v179; // [rsp+1B8h] [rbp-150h]
  __int64 v180; // [rsp+1C0h] [rbp-148h] BYREF
  __int64 v181; // [rsp+1C8h] [rbp-140h]
  __int64 v182; // [rsp+1D0h] [rbp-138h]
  __m128i v183; // [rsp+1D8h] [rbp-130h] BYREF
  int v184; // [rsp+1E8h] [rbp-120h]
  __int16 v185; // [rsp+1ECh] [rbp-11Ch]
  int v186; // [rsp+1F0h] [rbp-118h] BYREF
  int v187; // [rsp+1F4h] [rbp-114h]
  __int64 v188; // [rsp+1F8h] [rbp-110h]
  __m128i v189; // [rsp+200h] [rbp-108h] BYREF
  __int64 v190; // [rsp+210h] [rbp-F8h]
  __m128i v191; // [rsp+218h] [rbp-F0h] BYREF
  __m128i v192; // [rsp+228h] [rbp-E0h] BYREF
  unsigned int v193; // [rsp+238h] [rbp-D0h]
  __int64 v194; // [rsp+248h] [rbp-C0h]
  __m128i v195; // [rsp+250h] [rbp-B8h] BYREF
  __int64 v196; // [rsp+260h] [rbp-A8h]
  __m128i v197; // [rsp+268h] [rbp-A0h] BYREF
  __m128i v198; // [rsp+278h] [rbp-90h] BYREF
  __int64 v199; // [rsp+288h] [rbp-80h]
  __int64 v200; // [rsp+290h] [rbp-78h] BYREF
  __int64 v201; // [rsp+298h] [rbp-70h]
  __int64 v202; // [rsp+2A0h] [rbp-68h]
  __m128i v203; // [rsp+2A8h] [rbp-60h] BYREF
  int v204; // [rsp+2B8h] [rbp-50h]
  __int16 v205; // [rsp+2BCh] [rbp-4Ch]
  unsigned __int64 v206; // [rsp+2C8h] [rbp-40h]

  v4 = a1[38];
  v5 = *(_QWORD *)(*a1 + 480LL);
  v206 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(*(_QWORD *)(v5 + 112) + 48LL) & 8;
  v8 = *(_DWORD *)(*(_QWORD *)(a1[2] + 112LL) + 80LL);
  v138 = v8;
  v9 = sub_E0380(a1) / v8;
  *((_DWORD *)a1 + 87) = v9;
  if ( (int)v9 < 0 || (v10 = a1[2], (int)v9 >= *(_DWORD *)(v10 + 656)) )
  {
    sub_3311F0((_QWORD *)a1[1], v4, 0x26u);
    *((_DWORD *)a1 + 87) = 0;
    goto LABEL_28;
  }
  if ( *(_BYTE *)(v10 + 148) == 1 )
  {
    v29 = 256;
    if ( (_DWORD)v9 )
      return v29;
    goto LABEL_28;
  }
  if ( !(_DWORD)v9 )
  {
LABEL_28:
    v13 = 0;
    v14 = 0;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v11 = *a3;
    if ( !*a3 )
      break;
    ++a3;
    if ( (unsigned int)v11 <= 0x7F )
    {
      v12 = (v11 == 64) | (islower(v11) != 0);
      if ( v12 )
      {
        v13 = v12;
        v14 = 0;
        goto LABEL_9;
      }
    }
  }
  v13 = 1;
  v14 = 1;
LABEL_9:
  v15 = *a1;
  sub_D10B0((__int64)&v146, *(_QWORD *)(*a1 + 480LL), 0);
  v158 = (__m128i)(unsigned __int64)v15;
  v16 = *a1;
  v165 = 0;
  v17 = *(_QWORD *)(v16 + 480);
  v159 = 0;
  v160 = 0;
  v161 = 0;
  v162 = 0;
  v164 = -1;
  v163 = 0;
  sub_D10B0((__int64)&v166, v17, 0);
  v18.m128i_i64[0] = 0;
  v178 = (__m128i)(unsigned __int64)v16;
  v19 = 2;
  v179 = 0;
  v180 = 0;
  v181 = 0;
  v182 = 0;
  v184 = -1;
  v185 = 0;
  v183 = 0;
  if ( !v7 )
    v19 = 2 * (*(_BYTE *)(*(_QWORD *)(*a1 + 480LL) + 148LL) != 0);
  if ( !(unsigned __int8)sub_E6F10(a1) )
  {
    sub_DEB50((__int64)&v146, 0x70u, a2, v19);
    if ( *(_BYTE *)(a1[2] + 148LL) != 2 )
    {
LABEL_13:
      v20 = sub_64880(&v158.m128i_i64[1]);
      goto LABEL_14;
    }
    v98 = *a1;
    sub_D10B0((__int64)&v186, *(_QWORD *)(*a1 + 480LL), 0);
    v18.m128i_i64[0] = 0;
    v198 = (__m128i)(unsigned __int64)v98;
    v199 = 0;
    v200 = 0;
    v201 = 0;
    v202 = 0;
    v204 = -1;
    v205 = 0;
    v203 = 0;
    if ( (unsigned __int8)sub_64880(&v158.m128i_i64[1]) )
    {
      v99 = sub_64880(&v160);
      v100 = 0;
      v101 = 0;
      if ( v99 )
        goto LABEL_152;
    }
    else
    {
      v101 = (int)(sub_64C00(&v158.m128i_i64[1]) + 1);
      if ( (unsigned __int8)sub_64880(&v160) )
      {
LABEL_211:
        v100 = 2 * (v101 != 0);
LABEL_152:
        sub_DEB50((__int64)&v186, 0xB0u, a2, v100);
        if ( (unsigned __int8)sub_64880(&v198.m128i_i64[1]) )
        {
          if ( !(unsigned __int8)sub_64880(&v158.m128i_i64[1]) )
          {
            v102 = 0;
            v141 = (int)(sub_64C00(&v158.m128i_i64[1]) + 1);
            goto LABEL_155;
          }
LABEL_154:
          v141 = 0;
          v102 = 0;
LABEL_155:
          v144 = 0;
          if ( !(unsigned __int8)sub_64880(&v200) )
            v144 = (int)(sub_64C00(&v200) + 1);
          if ( !(unsigned __int8)sub_64880(&v160) )
            v141 += (int)(sub_64C00(&v160) + 1);
          v103 = v202;
          v104 = v202;
          if ( v102 + v144 < v141 )
            goto LABEL_160;
          v113 = v148;
          v114 = v188;
LABEL_217:
          v115 = v186;
          v188 = v113;
          v116 = _mm_load_si128(&v149);
          v117 = v190;
          v148 = v114;
          v118 = _mm_load_si128(&v189);
          v186 = v146;
          v146 = v115;
          v119 = v187;
          v149 = v118;
          v120 = _mm_loadu_si128(&v191);
          v187 = v147;
          v189 = v116;
          v121 = _mm_loadu_si128(&v151);
          v190 = v150;
          v150 = v117;
          LODWORD(v117) = v193;
          v151 = v120;
          v122 = _mm_loadu_si128(&v192);
          v193 = v153;
          v191 = v121;
          v123 = _mm_loadu_si128(&v152);
          v147 = v119;
          v152 = v122;
          v192 = v123;
          v124 = _mm_load_si128(&v155);
          v153 = v117;
          v125 = v194;
          v194 = v154;
          v154 = v125;
          v126 = v196;
          v196 = v156;
          v156 = v126;
          v127 = v199;
          v199 = v159;
          v159 = v127;
          v128 = v200;
          v200 = v160;
          v160 = v128;
          v104 = v162;
          v129 = v201;
          v201 = v161;
          v130 = v163.m128i_i64[1];
          v162 = v103;
          v131 = _mm_load_si128(&v195);
          v195 = v124;
          v132 = _mm_loadu_si128(&v157);
          v161 = v129;
          v155 = v131;
          v133 = _mm_loadu_si128(&v197);
          v197 = v132;
          v18 = _mm_loadu_si128(&v158);
          v157 = v133;
          v163 = _mm_loadu_si128(&v203);
          v202 = v104;
          v203.m128i_i64[1] = v130;
          LODWORD(v130) = v204;
          v134 = _mm_loadu_si128(&v198);
          v204 = v164;
          v164 = v130;
          LOBYTE(v130) = v205;
          v158 = v134;
          LOBYTE(v205) = v165;
          LOBYTE(v165) = v130;
          v198 = v18;
LABEL_160:
          if ( v104 )
          {
            v203.m128i_i64[0] = 0;
            qfree(v104);
          }
          qfree(v200);
          qfree(v198.m128i_i64[1]);
          if ( v196 )
          {
            v197.m128i_i64[0] = 0;
            qfree(v196);
          }
          if ( v194 )
          {
            v195.m128i_i64[0] = 0;
            qfree(v194);
          }
          if ( v190 )
          {
            v191.m128i_i64[0] = 0;
            qfree(v190);
          }
          if ( v188 )
          {
            v189.m128i_i64[0] = 0;
            qfree(v188);
          }
          goto LABEL_13;
        }
        v102 = (int)(sub_64C00(&v198.m128i_i64[1]) + 1);
        if ( (unsigned __int8)sub_64880(&v158.m128i_i64[1]) )
        {
          if ( !v102 )
            goto LABEL_154;
        }
        else
        {
          v141 = (int)(sub_64C00(&v158.m128i_i64[1]) + 1);
          if ( v141 >= v102 )
          {
            if ( v102 )
            {
              v114 = v188;
              v113 = v148;
              v135 = 0;
              while ( *(_DWORD *)(v188 + 4 * v135) == *(_DWORD *)(v148 + 4 * v135) )
              {
                if ( ++v135 == v102 )
                  goto LABEL_155;
              }
              v103 = v202;
              goto LABEL_217;
            }
            goto LABEL_155;
          }
        }
        v113 = v148;
        v114 = v188;
        v103 = v202;
        goto LABEL_217;
      }
    }
    v101 += (int)(sub_64C00(&v160) + 1);
    goto LABEL_211;
  }
  sub_DEB50((__int64)&v146, 0xB0u, a2, 0);
  v20 = sub_64880(&v158.m128i_i64[1]);
LABEL_14:
  if ( v20 )
  {
    v21 = 0;
    if ( (unsigned __int8)sub_64880(&v160) )
      goto LABEL_16;
    v59 = 0;
  }
  else
  {
    v59 = (int)(sub_64C00(&v158.m128i_i64[1]) + 1);
    if ( (unsigned __int8)sub_64880(&v160) )
    {
      v21 = (int)v59 != 0;
      goto LABEL_16;
    }
  }
  v21 = (int)(sub_64C00(&v160) + 1) + v59 != 0;
LABEL_16:
  v22 = sub_DEB50((__int64)&v166, 0x80u, a2, v19);
  v23 = *((_DWORD *)a1 + 87);
  v24 = v22;
  v137 = v22 != 0;
  v25 = v23;
  if ( !v23 )
  {
    if ( *(_BYTE *)(a1[2] + 144LL) )
    {
      if ( v14 && v13 )
      {
        if ( v22 )
        {
LABEL_34:
          v13 = 1;
          v14 = 0;
          v145 = &v166;
LABEL_35:
          v142 = v23;
          if ( !(unsigned __int8)sub_DE780((__int64)v145) )
            goto LABEL_36;
          v140 = 0;
          v23 = v142;
LABEL_132:
          v143 = v23;
          if ( (*(_BYTE *)(*a1 + 24LL) & 8) != 0 )
          {
            v96 = sub_DFFC0(a1, *(double *)v18.m128i_i64);
            v97 = v143;
            if ( v96 >= 0 )
            {
LABEL_134:
              v97 = v96 / v138;
              goto LABEL_135;
            }
          }
          else
          {
            v96 = sub_E0FE0((__int64)a1, -1, *(int *)(a1[1] + 120LL));
            v97 = v143;
            if ( v96 >= 0 )
              goto LABEL_134;
          }
          if ( !*((_BYTE *)v145 + 205) )
          {
            v28 = v182;
            v29 = 0;
            goto LABEL_87;
          }
LABEL_135:
          if ( *((_DWORD *)a1 + 87) < v97 )
            *((_DWORD *)a1 + 87) = v97;
          if ( v140 && *((_DWORD *)a1 + 87) )
            goto LABEL_116;
LABEL_36:
          if ( v21 )
          {
            if ( v137 )
              goto LABEL_69;
          }
          else if ( !v137 )
          {
            goto LABEL_116;
          }
          v26 = *((_DWORD *)a1 + 87);
          if ( !v7 )
          {
LABEL_177:
            if ( !v137 )
            {
LABEL_172:
              if ( !v21 )
                goto LABEL_23;
LABEL_124:
              if ( !v26 )
                goto LABEL_82;
LABEL_80:
              if ( HIBYTE(v165) )
                sub_DAE40((__int64)&v146, (_DWORD *)a1 + 87, *(double *)v18.m128i_i64);
              goto LABEL_82;
            }
LABEL_63:
            if ( !v21 )
              goto LABEL_45;
            goto LABEL_44;
          }
          goto LABEL_39;
        }
LABEL_174:
        v13 = 1;
        v14 = 0;
LABEL_129:
        if ( !v21 && !v137 )
        {
          v140 = 0;
          v145 = &v146;
          goto LABEL_132;
        }
        v145 = &v146;
        goto LABEL_35;
      }
      if ( !v22 )
        goto LABEL_129;
    }
    else
    {
      v95 = sub_CFF70();
      v25 = *((_DWORD *)a1 + 87);
      v23 = 0;
      v26 = v25;
      if ( v95 )
      {
        v140 = v95 / v138;
        if ( v95 / v138 )
        {
          if ( v24 )
          {
            if ( v25 )
              goto LABEL_23;
            v13 = 0;
            v14 = 0;
            v145 = &v166;
          }
          else
          {
            if ( v25 )
              goto LABEL_23;
            v13 = 0;
            v14 = 0;
            v145 = &v146;
          }
          goto LABEL_132;
        }
      }
      if ( v14 && v13 )
      {
        if ( v24 )
        {
          if ( v25 )
          {
LABEL_20:
            if ( !v21 )
            {
              if ( v7 )
              {
                v26 = v25;
                if ( !v24 )
                  goto LABEL_23;
              }
              goto LABEL_46;
            }
LABEL_69:
            v61 = 0;
            if ( !(unsigned __int8)sub_64880(&v158.m128i_i64[1]) )
              v61 = (int)(sub_64C00(&v158.m128i_i64[1]) + 1);
            if ( !(unsigned __int8)sub_64880(&v160) )
              v61 += (int)(sub_64C00(&v160) + 1);
            v62 = 0;
            if ( !(unsigned __int8)sub_64880(&v178.m128i_i64[1]) )
              v62 = (int)(sub_64C00(&v178.m128i_i64[1]) + 1);
            if ( !(unsigned __int8)sub_64880(&v180) )
              v62 += (int)(sub_64C00(&v180) + 1);
            if ( v62 < v61 )
            {
              v26 = *((_DWORD *)a1 + 87);
              if ( !v7 )
                goto LABEL_124;
              if ( v26 )
                goto LABEL_80;
              if ( v153 == 112 )
              {
                v137 = 0;
                v21 = 1;
                goto LABEL_122;
              }
LABEL_82:
              v63 = 0;
              if ( !(unsigned __int8)sub_64880(&v158.m128i_i64[1]) )
                v63 = sub_64C00(&v158.m128i_i64[1]) + 1;
              if ( !(unsigned __int8)sub_64880(&v160) )
                v63 += sub_64C00(&v160) + 1;
              v64 = v146;
              v65 = _mm_loadu_si128((const __m128i *)(a1 + 13));
              v66 = _mm_load_si128(&v149);
              v146 = *((_DWORD *)a1 + 22);
              v67 = *((_DWORD *)a1 + 23);
              *((_DWORD *)a1 + 22) = v64;
              v68 = v147;
              v147 = v67;
              v69 = a1[12];
              *((_DWORD *)a1 + 23) = v68;
              v70 = v148;
              *(__m128i *)(a1 + 13) = v66;
              v71 = _mm_loadu_si128(&v151);
              v148 = v69;
              v72 = a1[15];
              v149 = v65;
              v73 = _mm_loadu_si128((const __m128i *)a1 + 8);
              *((_DWORD *)a1 + 87) += v63;
              v29 = v153;
              a1[12] = v70;
              v74 = v150;
              *((__m128i *)a1 + 8) = v71;
              v75 = _mm_loadu_si128(&v152);
              v150 = v72;
              LODWORD(v72) = *((_DWORD *)a1 + 40);
              v151 = v73;
              v76 = _mm_loadu_si128((const __m128i *)a1 + 9);
              a1[15] = v74;
              *((__m128i *)a1 + 9) = v75;
              v152 = v76;
              *((_DWORD *)a1 + 40) = v29;
              v77 = _mm_loadu_si128((const __m128i *)(a1 + 23));
              v153 = v72;
              v78 = _mm_load_si128(&v155);
              v79 = a1[22];
              a1[22] = v154;
              v155 = v77;
              v80 = _mm_loadu_si128((const __m128i *)a1 + 13);
              v154 = v79;
              v81 = a1[25];
              a1[25] = v156;
              v156 = v81;
              v82 = a1[30];
              a1[30] = v159;
              v83 = v160;
              v159 = v82;
              v84 = a1[31];
              *(__m128i *)(a1 + 23) = v78;
              v85 = _mm_loadu_si128(&v157);
              a1[31] = v83;
              v86 = v161;
              v160 = v84;
              v87 = a1[32];
              *((__m128i *)a1 + 13) = v85;
              v88 = _mm_loadu_si128((const __m128i *)a1 + 17);
              v161 = v87;
              v89 = a1[33];
              v157 = v80;
              v90 = _mm_loadu_si128((const __m128i *)a1 + 14);
              a1[32] = v86;
              v91 = v162;
              v162 = v89;
              LODWORD(v89) = *((_DWORD *)a1 + 72);
              a1[33] = v91;
              LODWORD(v91) = v164;
              v164 = v89;
              LOBYTE(v89) = *((_BYTE *)a1 + 292);
              *((_DWORD *)a1 + 72) = v91;
              LOBYTE(v91) = v165;
              v92 = _mm_loadu_si128(&v163);
              LOBYTE(v165) = v89;
              v163 = v88;
              v28 = v182;
              v93 = _mm_loadu_si128(&v158);
              *((_BYTE *)a1 + 292) = v91;
              *((__m128i *)a1 + 17) = v92;
              *((__m128i *)a1 + 14) = v93;
              v158 = v90;
              goto LABEL_87;
            }
            v107 = 0;
            if ( !(unsigned __int8)sub_64880(&v178.m128i_i64[1]) )
              v107 = (int)(sub_64C00(&v178.m128i_i64[1]) + 1);
            if ( !(unsigned __int8)sub_64880(&v180) )
              v107 += (int)(sub_64C00(&v180) + 1);
            v108 = 0;
            if ( !(unsigned __int8)sub_64880(&v158.m128i_i64[1]) )
              v108 = (int)(sub_64C00(&v158.m128i_i64[1]) + 1);
            if ( !(unsigned __int8)sub_64880(&v160) )
              v108 += (int)(sub_64C00(&v160) + 1);
            v26 = *((_DWORD *)a1 + 87);
            if ( v108 < v107 )
            {
              if ( !v7 )
                goto LABEL_45;
              if ( !v26 )
              {
                if ( v153 != 112 )
                  goto LABEL_48;
                v137 = 1;
                v21 = 0;
LABEL_122:
                if ( (unsigned int)sub_DEB50((__int64)&v146, 0x70u, a2, 8) )
                {
                  v26 = *((_DWORD *)a1 + 87);
                  if ( !v137 )
                    goto LABEL_124;
                  goto LABEL_44;
                }
                v106 = sub_DEB50((__int64)&v166, 0x80u, a2, 8);
                v26 = *((_DWORD *)a1 + 87);
                if ( v106 )
                  goto LABEL_63;
                goto LABEL_177;
              }
LABEL_46:
              if ( HIBYTE(v185) )
                sub_DAE40((__int64)&v166, (_DWORD *)a1 + 87, *(double *)v18.m128i_i64);
              goto LABEL_48;
            }
            if ( v7 && !v26 )
            {
              if ( v153 == 112 )
              {
                v137 = 1;
                v21 = 1;
                goto LABEL_122;
              }
              goto LABEL_43;
            }
LABEL_44:
            v30 = sub_E0240((__int64)&v146, v26);
            v26 = *((_DWORD *)a1 + 87);
            if ( !v30 )
              goto LABEL_124;
LABEL_45:
            if ( v26 )
              goto LABEL_46;
LABEL_48:
            v31 = 0;
            if ( !(unsigned __int8)sub_64880(&v178.m128i_i64[1]) )
              v31 = sub_64C00(&v178.m128i_i64[1]) + 1;
            if ( !(unsigned __int8)sub_64880(&v180) )
              v31 += sub_64C00(&v180) + 1;
            v32 = v166;
            v33 = _mm_loadu_si128((const __m128i *)(a1 + 13));
            v29 = v173;
            v34 = _mm_load_si128(&v169);
            v166 = *((_DWORD *)a1 + 22);
            v35 = *((_DWORD *)a1 + 23);
            *((_DWORD *)a1 + 22) = v32;
            v36 = v167;
            *(__m128i *)(a1 + 13) = v34;
            v37 = _mm_loadu_si128(&v171);
            v167 = v35;
            v38 = a1[12];
            *((_DWORD *)a1 + 23) = v36;
            v39 = v168;
            v169 = v33;
            v40 = _mm_loadu_si128((const __m128i *)a1 + 8);
            v168 = v38;
            v41 = a1[15];
            a1[12] = v39;
            v42 = v170;
            *((__m128i *)a1 + 8) = v37;
            v43 = _mm_loadu_si128(&v172);
            v170 = v41;
            LODWORD(v41) = *((_DWORD *)a1 + 40);
            v171 = v40;
            v44 = _mm_loadu_si128((const __m128i *)a1 + 9);
            a1[15] = v42;
            *((__m128i *)a1 + 9) = v43;
            v172 = v44;
            *((_DWORD *)a1 + 87) += v31;
            *((_DWORD *)a1 + 40) = v29;
            v173 = v41;
            v45 = a1[22];
            a1[22] = v174;
            v174 = v45;
            v46 = a1[25];
            a1[25] = v176;
            v176 = v46;
            v47 = a1[30];
            v48 = _mm_loadu_si128((const __m128i *)(a1 + 23));
            a1[30] = v179;
            v49 = _mm_load_si128(&v175);
            v179 = v47;
            v50 = a1[31];
            v175 = v48;
            v51 = _mm_loadu_si128((const __m128i *)a1 + 13);
            a1[31] = v180;
            v52 = v181;
            v180 = v50;
            v53 = a1[32];
            *(__m128i *)(a1 + 23) = v49;
            v28 = a1[33];
            v54 = _mm_loadu_si128(&v177);
            v181 = v53;
            v55 = a1[35];
            *((__m128i *)a1 + 13) = v54;
            v177 = v51;
            v56 = _mm_loadu_si128((const __m128i *)a1 + 14);
            a1[32] = v52;
            v57 = _mm_loadu_si128(&v183);
            v183.m128i_i64[1] = v55;
            a1[33] = v182;
            LODWORD(v55) = *((_DWORD *)a1 + 72);
            LODWORD(v52) = v184;
            *((__m128i *)a1 + 17) = v57;
            v58 = _mm_loadu_si128(&v178);
            v184 = v55;
            LOBYTE(v55) = *((_BYTE *)a1 + 292);
            *((_DWORD *)a1 + 72) = v52;
            v182 = v28;
            *((_BYTE *)a1 + 292) = v185;
            LOBYTE(v185) = v55;
            *((__m128i *)a1 + 14) = v58;
            v178 = v56;
            goto LABEL_87;
          }
          goto LABEL_34;
        }
        if ( v25 )
        {
LABEL_148:
          if ( v21 )
            goto LABEL_80;
LABEL_149:
          v28 = v182;
          v29 = 80;
          goto LABEL_87;
        }
        goto LABEL_174;
      }
      if ( !v24 )
      {
        if ( v25 )
          goto LABEL_170;
        goto LABEL_129;
      }
      if ( v25 )
      {
LABEL_66:
        if ( v21 )
          goto LABEL_69;
        v26 = v25;
        if ( !v7 )
          goto LABEL_45;
        goto LABEL_39;
      }
    }
    v139 = v23;
    v60 = sub_DE780((__int64)&v166);
    v23 = v139;
    if ( !v60 )
    {
      if ( v21 && v137 )
        goto LABEL_69;
      v26 = *((_DWORD *)a1 + 87);
      if ( !v7 )
        goto LABEL_63;
      goto LABEL_39;
    }
    v140 = 0;
    v145 = &v166;
    goto LABEL_132;
  }
  if ( v14 && v13 )
  {
    if ( v22 )
      goto LABEL_20;
    goto LABEL_148;
  }
  if ( v22 )
    goto LABEL_66;
LABEL_170:
  if ( v21 )
  {
    v26 = v25;
    if ( !v7 )
      goto LABEL_172;
LABEL_39:
    if ( v26 )
    {
      if ( !v24 )
      {
        if ( !v21 )
          goto LABEL_23;
        goto LABEL_80;
      }
      if ( !v21 )
        goto LABEL_46;
      goto LABEL_44;
    }
    if ( v153 == 112 )
      goto LABEL_122;
    if ( v24 )
    {
      if ( !v21 )
        goto LABEL_48;
LABEL_43:
      v26 = 0;
      goto LABEL_44;
    }
    if ( v21 )
      goto LABEL_82;
    goto LABEL_143;
  }
LABEL_116:
  if ( !v14 )
  {
    if ( v13 )
      goto LABEL_149;
    v26 = *((_DWORD *)a1 + 87);
    if ( !v7 || v26 )
    {
LABEL_23:
      if ( v26 > 0 )
      {
        v27 = a1[2];
        if ( *(_BYTE *)(v27 + 148) )
        {
          if ( (unsigned __int8)getinf_flag() && (netnode_check(), v109 = netnode_altval(), v109 > 0x74) )
          {
            v110 = *(_DWORD *)(get_ph() + 4);
            v28 = v182;
            v29 = 176;
            if ( v110 )
            {
              v111 = (unsigned int)(v110 - 13);
              v29 = 256;
              if ( (unsigned int)v111 <= 0x3B )
              {
                v112 = 0x800000000000005LL;
                if ( _bittest64(&v112, v111) )
                {
                  if ( v109 != 117 )
                    v29 = 176;
                }
              }
            }
          }
          else
          {
            v28 = v182;
            v29 = 256;
          }
        }
        else
        {
          v105 = sub_D06A0(*(_QWORD *)(v27 + 112));
          v28 = v182;
          v29 = v105;
        }
        goto LABEL_87;
      }
      goto LABEL_143;
    }
    if ( v153 == 112 )
    {
      v137 = 0;
      v21 = 0;
      goto LABEL_122;
    }
LABEL_143:
    v28 = v182;
    v29 = 32;
    goto LABEL_87;
  }
  v28 = v182;
  v29 = 96;
LABEL_87:
  if ( v28 )
  {
    v183.m128i_i64[0] = 0;
    qfree(v28);
  }
  qfree(v180);
  qfree(v178.m128i_i64[1]);
  if ( v176 )
  {
    v177.m128i_i64[0] = 0;
    qfree(v176);
  }
  if ( v174 )
  {
    v175.m128i_i64[0] = 0;
    qfree(v174);
  }
  if ( v170 )
  {
    v171.m128i_i64[0] = 0;
    qfree(v170);
  }
  if ( v168 )
  {
    v169.m128i_i64[0] = 0;
    qfree(v168);
  }
  if ( v162 )
  {
    v163.m128i_i64[0] = 0;
    qfree(v162);
  }
  qfree(v160);
  qfree(v158.m128i_i64[1]);
  if ( v156 )
  {
    v157.m128i_i64[0] = 0;
    qfree(v156);
  }
  if ( v154 )
  {
    v155.m128i_i64[0] = 0;
    qfree(v154);
  }
  if ( v150 )
  {
    v151.m128i_i64[0] = 0;
    qfree(v150);
  }
  if ( v148 )
  {
    v149.m128i_i64[0] = 0;
    qfree(v148);
  }
  return v29;
}

