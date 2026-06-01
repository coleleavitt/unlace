__int64 __fastcall sub_221F40(__int64 a1, unsigned int a2, double a3, __m128 a4)
{
  __int64 tinfo_size; // rbx
  unsigned int v5; // r15d
  __int64 v6; // rax
  __int64 v9; // rdx
  __m128i si128; // xmm0
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 *v14; // r14
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  __int64 *v18; // r8
  __int64 v19; // rdi
  _QWORD *v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rdi
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rax
  _DWORD *v30; // rdx
  char v31; // dl
  bool v32; // al
  __int64 v33; // rdi
  char v34; // al
  unsigned int v35; // edx
  __int64 v36; // rdi
  __int64 v37; // rsi
  void (__fastcall *v38)(__int64 *, __int64, __m128i *, __int64 *); // rax
  int v39; // eax
  int v40; // ebx
  __int64 *v41; // rdi
  __int64 v42; // rax
  char v43; // bl
  unsigned int v44; // eax
  __int64 v45; // rsi
  __int64 v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 *v52; // rsi
  __int64 v53; // rdx
  __int64 *v54; // rcx
  unsigned __int8 v55; // r12
  int v56; // eax
  char tinfo_property; // al
  __int64 v58; // r8
  __int64 v59; // rdi
  __int64 v60; // rax
  int v61; // ebx
  __m128i v62; // xmm1
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  int v67; // r9d
  __int64 *v68; // r8
  unsigned __int64 v69; // r9
  _QWORD *v70; // rcx
  __int64 v71; // rax
  __int64 **v72; // rax
  __int64 *v73; // rdx
  __int64 *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 *v77; // rcx
  __int64 *v78; // rbx
  unsigned __int64 v79; // rdi
  bool v80; // zf
  __int64 v81; // rdi
  __int64 *v82; // rsi
  __int64 *v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rdi
  __int64 *v86; // rax
  __int64 v87; // rcx
  __int64 *v88; // r11
  __int64 *v89; // rax
  __int64 v90; // rcx
  __int64 *v91; // rdi
  __int64 *v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rbx
  __int64 j; // r12
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rax
  __m128i *v102; // rbx
  __int64 v103; // rsi
  __int64 v104; // rcx
  __int64 v105; // r12
  __int64 *v106; // rcx
  int v107; // r9d
  __int64 v108; // rax
  _QWORD *v109; // r12
  unsigned __int64 *v110; // rdi
  _QWORD *v111; // rbx
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  int v117; // r9d
  char v118; // r12
  __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rcx
  __int64 v122; // r12
  int v123; // r9d
  unsigned int v124; // eax
  _QWORD *v125; // rbx
  __int64 v126; // rdi
  size_t v127; // rbx
  void *v128; // rax
  __int64 *v129; // rax
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  int v134; // r9d
  __int64 *v135; // rax
  __int64 v136; // rcx
  unsigned __int64 *v137; // rdi
  unsigned int *v138; // r11
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rsi
  int v142; // edx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  int v146; // r9d
  double v147; // xmm0_8
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __m128i *v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // rax
  int v155; // eax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  int v159; // r9d
  __int64 v160; // rdi
  int v161; // eax
  __int64 v162; // rdi
  size_t v163; // rax
  __int64 *v164; // rbx
  __int64 *v165; // rbx
  char v166; // r15
  int v167; // eax
  void *v168; // r15
  __m128i *v169; // rdx
  char v170; // al
  __int64 v171; // rbx
  int v172; // ebx
  __int64 i; // rax
  int v174; // r12d
  char *v175; // rdx
  char *v176; // rax
  __int64 *v177; // rdx
  __int64 *v178; // rax
  __int64 v179; // rdx
  unsigned __int64 v180; // rcx
  __int64 v181; // r15
  _QWORD *v182; // rdi
  int v183; // r15d
  int v184; // edx
  int v185; // eax
  int v186; // ebx
  int v187; // edx
  __int64 *v188; // rbx
  unsigned int v189; // ebx
  __int64 v190; // rax
  int v191; // esi
  __int64 *v192; // rsi
  void *v193; // r15
  __int64 v194; // rbx
  __int64 v195; // rdi
  __int64 v196; // rax
  __int64 *v197; // rdi
  _QWORD *v198; // rbx
  int v199; // r12d
  __int64 v200; // rax
  __int8 v201; // al
  __int64 v202; // rcx
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rax
  unsigned __int64 *v207; // rdi
  __int64 v208; // rax
  __int64 *v209; // rax
  char v210; // bl
  __int64 v211; // [rsp+0h] [rbp-270h]
  __int64 v212; // [rsp+0h] [rbp-270h]
  __int64 v213; // [rsp+10h] [rbp-260h]
  int v214; // [rsp+18h] [rbp-258h]
  int v215; // [rsp+1Ch] [rbp-254h]
  __m128i v216; // [rsp+20h] [rbp-250h] BYREF
  __int64 *v217; // [rsp+30h] [rbp-240h]
  __int64 v218; // [rsp+38h] [rbp-238h]
  size_t v219; // [rsp+40h] [rbp-230h]
  unsigned __int8 *v220; // [rsp+48h] [rbp-228h]
  __int64 v221; // [rsp+50h] [rbp-220h]
  size_t n; // [rsp+58h] [rbp-218h]
  __int64 *v223; // [rsp+60h] [rbp-210h]
  unsigned __int8 v224; // [rsp+6Ah] [rbp-206h]
  unsigned __int8 v225; // [rsp+6Bh] [rbp-205h]
  unsigned int v226; // [rsp+6Ch] [rbp-204h]
  __m128i *v227; // [rsp+70h] [rbp-200h]
  __int64 *v228; // [rsp+78h] [rbp-1F8h]
  size_t v229[2]; // [rsp+80h] [rbp-1F0h] BYREF
  __m128i v230; // [rsp+90h] [rbp-1E0h] BYREF
  __int64 *v231; // [rsp+A0h] [rbp-1D0h]
  int v232; // [rsp+A8h] [rbp-1C8h]
  int v233; // [rsp+ACh] [rbp-1C4h]
  __int64 *v234; // [rsp+B0h] [rbp-1C0h]
  __int64 v235; // [rsp+B8h] [rbp-1B8h]
  unsigned __int8 v236; // [rsp+C7h] [rbp-1A9h] BYREF
  __int64 v237; // [rsp+C8h] [rbp-1A8h] BYREF
  __int64 v238[2]; // [rsp+D0h] [rbp-1A0h] BYREF
  __int64 *v239; // [rsp+E0h] [rbp-190h] BYREF
  __int128 v240; // [rsp+E8h] [rbp-188h]
  __int64 v241[2]; // [rsp+100h] [rbp-170h] BYREF
  void *src; // [rsp+110h] [rbp-160h] BYREF
  __m128i v243; // [rsp+118h] [rbp-158h]
  __int64 v244[2]; // [rsp+130h] [rbp-140h] BYREF
  __int64 v245; // [rsp+140h] [rbp-130h] BYREF
  __int128 v246; // [rsp+148h] [rbp-128h]
  char *v247; // [rsp+160h] [rbp-110h] BYREF
  __int128 v248; // [rsp+168h] [rbp-108h] BYREF
  __m128i v249; // [rsp+178h] [rbp-F8h]
  __int64 v250; // [rsp+190h] [rbp-E0h] BYREF
  __int128 v251; // [rsp+198h] [rbp-D8h] BYREF
  __m128i v252; // [rsp+1A8h] [rbp-C8h] BYREF
  unsigned __int64 v253; // [rsp+1B8h] [rbp-B8h]
  char v254; // [rsp+1C0h] [rbp-B0h]
  _BYTE v255[24]; // [rsp+1D0h] [rbp-A0h] BYREF
  __m128i v256; // [rsp+1E8h] [rbp-88h] BYREF
  __int64 v257; // [rsp+1F8h] [rbp-78h] BYREF
  __int128 v258; // [rsp+200h] [rbp-70h]
  __int64 v259; // [rsp+210h] [rbp-60h]
  __int128 v260; // [rsp+218h] [rbp-58h]
  char v261; // [rsp+228h] [rbp-48h]
  unsigned __int64 v262; // [rsp+238h] [rbp-38h]

  v262 = __readfsqword(0x28u);
  v5 = *(_DWORD *)a1 & 0x8000;
  if ( v5 )
  {
    LODWORD(tinfo_size) = 0;
    return (unsigned int)tinfo_size;
  }
  v6 = *(_QWORD *)(a1 + 944);
  v9 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v11 = *(_QWORD *)v6;
  *(__m128i *)(v6 + 8) = si128;
  v12 = *(_QWORD *)(v11 + 1496);
  if ( *(_BYTE *)(v12 + 148) == 2 )
    v9 = *(_QWORD *)(v11 + 144);
  *(_QWORD *)(v6 + 24) = v9;
  v236 = 0;
  v13 = sub_1D5170(a1, v12, v9, v11, *(double *)si128.m128i_i64);
  si128.m128i_i64[0] = 0;
  v238[0] = 0;
  v235 = v13;
  v14 = (__int64 *)(v13 + 160);
  v15 = *(_DWORD *)a1;
  v238[1] = 0;
  v239 = nullptr;
  v240 = 0;
  if ( (v15 & 0x4000000) == 0 || *(_BYTE *)(a1 + 320) )
  {
    v234 = v238;
    goto LABEL_33;
  }
  if ( !*(_DWORD *)(v235 + 352) )
  {
    v29 = *(_QWORD *)(a1 + 520);
    if ( v29 )
    {
      while ( *(_DWORD *)(v29 + 76) != 6 )
      {
        v30 = *(_DWORD **)(v29 + 56);
        if ( v30 )
        {
          if ( (*v30 & 0xFFFFFFF7) == 0x36 )
            break;
        }
        v29 = *(_QWORD *)(v29 + 8);
        if ( !v29 )
          goto LABEL_92;
      }
    }
    else
    {
LABEL_92:
      *(_DWORD *)(a1 + 400) |= 2u;
    }
LABEL_48:
    v234 = v238;
    goto LABEL_49;
  }
  v234 = v238;
  v233 = *(_DWORD *)(a1 + 400) & 2;
  if ( v233 )
    goto LABEL_49;
  if ( (getinf() & 0xF) == 6 && (*(_BYTE *)(a1 + 4) & 0x30) != 0 )
    goto LABEL_48;
  v237 = 0;
  if ( (*(_BYTE *)a1 & 0x10) == 0 && (unsigned __int8)*(_QWORD *)(a1 + 328) )
  {
    si128.m128i_i64[0] = 0;
    memset(v255, 0, sizeof(v255));
    v256 = 0u;
    v257 = 0;
    v259 = 0;
    v261 = 16;
    v228 = (__int64 *)v255;
    v230.m128i_i64[0] = (__int64)&v237;
    v258 = 0;
    v260 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      v234 = &v256.m128i_i64[1];
      v230.m128i_i64[0] = (__int64)&v237;
      copy_tinfo_t();
      if ( (get_tinfo_property() & 0x3F) == 1 && (unsigned __int64)getinf() > 0x289 )
      {
        sub_D0070(v228);
        v234 = v238;
        goto LABEL_241;
      }
      tinfo_property = get_tinfo_property();
      v18 = &v257;
      if ( (tinfo_property & 0xF) == 9 && (_DWORD)v257 != 1 )
      {
        tinfo_size = (unsigned int)get_tinfo_size();
        v229[0] = (size_t)&v257;
        v227 = (__m128i *)&v247;
        sub_1C6010((__int64)&v247, a1, (__int64)&v257, tinfo_size, 0.0);
        if ( !(unsigned __int8)sub_21BC50(*(__int64 **)(a1 + 1504), (int *)&v247, tinfo_size, 0.0) )
        {
          si128.m128i_i64[0] = 0;
          v250 = 0;
          v251 = 0u;
          v231 = &v250;
          v252 = 0;
          sub_1C31B0((__int64)v227, (__int64)&v250, tinfo_size, 0, 0, 0.0, a4);
          LODWORD(tinfo_size) = sub_64700(v14, &v250);
          v170 = sub_3180C0((__int64 *)(v235 + 176), (__int64)&v251 + 8, v169, v235);
          if ( (_BYTE)tinfo_size || v170 )
            v236 = 1;
          sub_93B40(v231);
          cleanup_argloc();
          sub_D0070(v228);
          v234 = v238;
          goto LABEL_30;
        }
        v230.m128i_i64[0] = v229[0];
        cleanup_argloc();
        v18 = (__int64 *)v229[0];
      }
    }
    else
    {
      v18 = &v257;
      v234 = &v256.m128i_i64[1];
    }
    if ( v259 )
    {
      v230.m128i_i64[0] = (__int64)v18;
      *(_QWORD *)&v260 = 0;
      qfree(v259);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v19 = *(_QWORD *)v255;
    if ( *(_QWORD *)v255 )
    {
      if ( *(_QWORD *)&v255[8] )
      {
        v234 = nullptr;
        tinfo_size = *(_QWORD *)&v255[8];
        v230.m128i_i32[0] = a2;
        do
        {
          v20 = (_QWORD *)(v19 + 80LL * (_QWORD)v234);
          clear_tinfo_t();
          v21 = v20[5];
          if ( v21 )
          {
            v20[6] = 0;
            qfree(v21);
          }
          v22 = v20[2];
          if ( v22 )
          {
            v20[3] = 0;
            qfree(v22);
          }
          cleanup_argloc();
          v234 = (__int64 *)((char *)v234 + 1);
          v19 = *(_QWORD *)v255;
        }
        while ( (__int64 *)tinfo_size != v234 );
        a2 = v230.m128i_i32[0];
      }
      *(_QWORD *)&v255[8] = 0;
      qfree(v19);
    }
  }
  v234 = v238;
  if ( (unsigned __int8)sub_221260(a1, v238, v16, v17, 0.0, a4) )
  {
    v23 = (_QWORD *)v235;
    *(_DWORD *)(a1 + 4) |= 0x1000u;
    v24 = v23[22];
    tinfo_size = (__int64)v23;
    v23[21] = 0;
    if ( v24 )
    {
      v23[23] = 0;
      qfree(v24);
      *(_QWORD *)(tinfo_size + 176) = 0;
      *(_QWORD *)(tinfo_size + 192) = 0;
    }
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 148LL) == 1 )
      goto LABEL_29;
  }
  v34 = sub_64880(v234);
  v35 = 1;
  if ( v34 )
    v35 = (_QWORD)v240 != 0;
  v236 = sub_F86E0(a1, v14, v35);
  v230.m128i_i64[0] = (__int64)&v237;
  if ( v236 )
    goto LABEL_30;
  v225 = sub_64880(v234);
  if ( !v225 )
    goto LABEL_29;
  v221 = v240;
  if ( (_QWORD)v240 )
    goto LABEL_29;
  v36 = *(_QWORD *)(a1 + 1504);
  v220 = &v236;
  v224 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *, unsigned __int8 *))(*(_QWORD *)v36 + 112LL))(
           v36,
           a1,
           0,
           0,
           v14,
           &v236);
  if ( v224 )
    goto LABEL_29;
  if ( (*(_BYTE *)a1 & 0x10) != 0 )
  {
    v230.m128i_i64[0] = (__int64)&unk_42B290;
    v228 = (__int64 *)v255;
    v227 = (__m128i *)&v247;
    v231 = &v250;
    while ( 1 )
    {
      v37 = *(_QWORD *)(a1 + 1504);
      v38 = *(void (__fastcall **)(__int64 *, __int64, __m128i *, __int64 *))(*(_QWORD *)v37 + 104LL);
      *(_QWORD *)v255 = *(unsigned __int8 *)v230.m128i_i64[0];
      v38(v231, v37, v227, v228);
      clear_tinfo_t();
      if ( (_DWORD)v250 == 3 )
      {
        v39 = (int)v247;
        v40 = v251;
        v41 = *(__int64 **)(a1 + 1504);
        if ( (_DWORD)v247 == 8 )
          goto LABEL_243;
        v39 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v41 + 32))(v41, (unsigned int)v251);
        if ( (_DWORD)v247 == v39 )
          break;
      }
      cleanup_argloc();
      if ( &unk_42B292 == (_UNKNOWN *)++v230.m128i_i64[0] )
        goto LABEL_65;
    }
    v41 = *(__int64 **)(a1 + 1504);
LABEL_243:
    if ( !(unsigned __int8)sub_21BC50(v41, (int *)v231, v39, 0.0) )
    {
      v191 = v40;
      LODWORD(tinfo_size) = (_DWORD)v228;
      sub_21CA20(v228, v191, (int)v247, 0.0);
      si128.m128i_i64[0] = 0;
      *(_QWORD *)&v255[16] = 0;
      v256 = 0;
      if ( sub_122C30((__int64)v228, (__int64)v14) )
      {
        v202 = v235;
        v236 = 1;
        v203 = *(_QWORD *)(v235 + 160);
        *(_QWORD *)(v235 + 160) = *(_QWORD *)v255;
        *(_QWORD *)v255 = v203;
        v204 = *(_QWORD *)(v202 + 168);
        *(_QWORD *)(v202 + 168) = *(_QWORD *)&v255[8];
        *(_QWORD *)&v255[8] = v204;
        v205 = *(_QWORD *)(v202 + 176);
        si128 = _mm_loadu_si128((const __m128i *)(v202 + 184));
        *(_QWORD *)(v202 + 176) = *(_QWORD *)&v255[16];
        *(__m128i *)(v202 + 184) = _mm_loadu_si128(&v256);
        *(_QWORD *)&v255[16] = v205;
        v256 = si128;
      }
      sub_93B40(v228);
      cleanup_argloc();
      v230.m128i_i64[0] = (__int64)&v237;
      goto LABEL_30;
    }
    cleanup_argloc();
  }
LABEL_65:
  v42 = *(_QWORD *)(a1 + 1496);
  v230.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v43 = *(_BYTE *)(v42 + 145);
  v44 = sub_64960(v14, 0);
  if ( v44 == *(_DWORD *)(v235 + 168) )
  {
    v232 = 0;
    LODWORD(v229[0]) = -1;
    v226 = -1;
    goto LABEL_73;
  }
  v45 = v44;
  LODWORD(v229[0]) = v44;
  v232 = sub_64BA0(v14, v44);
  if ( v230.m128i_i32[0] < v232 )
  {
    v48 = LODWORD(v229[0]);
    v232 = (2 * v230.m128i_i32[0]) >> 1;
    v226 = LODWORD(v229[0]) + v232;
    if ( !v43 )
    {
      v226 = v229[0];
      LODWORD(v229[0]) += v232;
    }
  }
  else
  {
    v47 = sub_64960(v14, LODWORD(v229[0]) + v232);
    v46 = v235;
    v226 = v47;
    v45 = v47;
    if ( v47 != *(_DWORD *)(v235 + 168)
      && (v48 = v230.m128i_u32[0], v47 == LODWORD(v229[0]) + 2 * v230.m128i_i32[0])
      && v232 == (unsigned int)sub_64BA0(v14, v47) )
    {
      if ( !v43 )
      {
        v48 = LODWORD(v229[0]);
        LODWORD(v229[0]) = v226;
        v226 = v48;
      }
    }
    else
    {
      v49 = v229[0];
      LODWORD(v229[0]) = -1;
      v226 = v49;
    }
  }
  if ( (*(_BYTE *)a1 & 0x10) == 0 && v232 > 0 && *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 148LL) == 1 )
  {
    v130 = sub_670E0((_QWORD *)a1, v45, v46, v48);
    v227 = (__m128i *)sub_110340(v130, 2, v131, v132, v133, v134, 0.0, a4);
    if ( !v227 )
    {
      if ( !under_debugger )
        sub_383060(0xC50Eu, 0.0);
LABEL_442:
      BUG();
    }
    v135 = (__int64 *)v227;
    v136 = v235;
    si128.m128i_i64[0] = 0;
    ++v227[1].m128i_i32[2];
    v137 = (unsigned __int64 *)(*v135 + 24LL * *(int *)(v136 + 72));
    v256.m128i_i8[8] = 1;
    memset(v255, 0, sizeof(v255));
    LOBYTE(v258) = 1;
    v256.m128i_i64[0] = (int)v226;
    v257 = 0xFFFFFFFF00000001LL;
    v228 = (__int64 *)v255;
    tinfo_size = (__int64)sub_104DF0(v137, (__int64)v255);
    if ( *(_QWORD *)v255 )
    {
      *(_QWORD *)&v255[8] = 0;
      qfree(*(__int64 *)v255);
    }
    if ( tinfo_size )
    {
      LODWORD(v231) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 1504) + 176LL))(
                        *(_QWORD *)(a1 + 1504),
                        v226,
                        v230.m128i_u32[0]);
      v138 = *(unsigned int **)tinfo_size;
      tinfo_size = *(_QWORD *)tinfo_size + 4LL * *(_QWORD *)(tinfo_size + 8);
      if ( (unsigned int *)tinfo_size != v138 )
      {
        while ( 1 )
        {
          v139 = *v138;
          if ( (unsigned int)v139 >= *(_DWORD *)(a1 + 64) )
            sub_21BD60(0.0);
          v140 = *(_QWORD *)(a1 + 528);
          v141 = *(_QWORD *)(a1 + 1504);
          v230.m128i_i64[0] = (__int64)v138;
          if ( (unsigned __int8)sub_32E840(
                                  v228,
                                  v141,
                                  (unsigned int)v231,
                                  *(_QWORD *)(*(_QWORD *)(v140 + 8 * v139) + 32LL),
                                  *(_QWORD *)(*(_QWORD *)(v140 + 8 * v139) + 40LL),
                                  1) != 2 )
            break;
          v138 = (unsigned int *)(v230.m128i_i64[0] + 4);
          if ( tinfo_size == v230.m128i_i64[0] + 4 )
            goto LABEL_335;
        }
        sub_104E10((__int64)v227, 0.0);
        goto LABEL_73;
      }
    }
LABEL_335:
    sub_104E10((__int64)v227, 0.0);
    v230.m128i_i64[0] = (__int64)&v237;
LABEL_241:
    clear_tinfo_t();
LABEL_49:
    v31 = sub_64880(v14);
    v32 = 1;
    if ( v31 )
      v32 = *(_QWORD *)(v235 + 184) != 0;
    v236 = v32;
    v33 = *(_QWORD *)(v235 + 176);
    *(_QWORD *)(v235 + 168) = 0;
    if ( v33 )
    {
      tinfo_size = v235;
      *(_QWORD *)(v235 + 184) = 0;
      qfree(v33);
      *(_QWORD *)(tinfo_size + 176) = 0;
      *(_QWORD *)(tinfo_size + 192) = 0;
      v15 = *(_DWORD *)a1;
      goto LABEL_33;
    }
    goto LABEL_31;
  }
LABEL_73:
  v241[0] = 0;
  v223 = v241;
  v241[1] = 0;
  sub_63E80(v241, v226, v232, 0.0);
  si128.m128i_i64[0] = 0;
  src = nullptr;
  v243 = 0;
  if ( LODWORD(v229[0]) != -1 )
  {
    *(_OWORD *)v255 = 0u;
    v228 = (__int64 *)v255;
    sub_63E80((__int64 *)v255, v229[0], v232, 0.0);
    si128.m128i_i64[0] = 0;
    *(_QWORD *)&v255[16] = 0;
    v256 = 0;
    sub_64280(v223, (__int64 *)v255, 0.0);
    sub_316CB0((__int64 *)&src, (__int64 **)&v255[16], v50, v51);
    if ( *(_QWORD *)&v255[16] )
    {
      v256.m128i_i64[0] = 0;
      qfree(*(__int64 *)&v255[16]);
    }
    qfree(*(__int64 *)v255);
  }
  v52 = v14;
  if ( sub_122C30((__int64)v223, (__int64)v14) )
  {
    v52 = v223;
    sub_648D0(v14, (const void **)v223, 0.0);
    v58 = v243.m128i_i64[0];
    v54 = nullptr;
    if ( v243.m128i_i64[0] )
    {
      v230.m128i_i64[0] = v243.m128i_i64[0];
      v127 = 16 * v243.m128i_i64[0];
      v128 = (void *)qalloc_or_throw(16 * v243.m128i_i64[0], (__int64)v223, v53, 0);
      v52 = (__int64 *)src;
      v129 = (__int64 *)memcpy(v128, src, v127);
      v58 = v230.m128i_i64[0];
      v54 = v129;
    }
    si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v58, (__m128i)(unsigned __int64)v58);
    v59 = *(_QWORD *)(v235 + 176);
    if ( v59 )
    {
      *(_QWORD *)(v235 + 184) = 0;
      v231 = v54;
      v230 = si128;
      qfree(v59);
      v54 = v231;
      si128 = _mm_load_si128(&v230);
    }
    v60 = v235;
    v61 = v232;
    v236 = 1;
    *(_QWORD *)(v235 + 176) = v54;
    *(__m128i *)(v60 + 184) = si128;
    if ( v61 <= 0 )
      goto LABEL_108;
  }
  else if ( v232 <= 0 )
  {
    v55 = v236;
    if ( !v236 )
      goto LABEL_80;
LABEL_108:
    if ( LODWORD(v229[0]) != -1 )
    {
      *(_DWORD *)a1 |= 0x8000u;
      goto LABEL_110;
    }
LABEL_246:
    v55 = v224;
    v56 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
    goto LABEL_83;
  }
  v62 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v232), _mm_cvtsi32_si128(a2));
  *(__m128i *)v255 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v226), _mm_cvtsi32_si128(v229[0])), v62);
  si128 = 0;
  *(_QWORD *)&v255[16] = v14;
  v256 = 0u;
  v257 = 0;
  v258 = 0;
  LOBYTE(v259) = LODWORD(v229[0]) != -1;
  v63 = sub_670E0((_QWORD *)a1, (__int64)v52, v53, (__int64)v54);
  v218 = sub_110340(v63, 2, v64, v65, v66, v67, 0.0, (__m128)v62);
  if ( !v218 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, 0.0);
    goto LABEL_442;
  }
  v70 = (_QWORD *)v218;
  v71 = *(_QWORD *)(v218 + 8);
  ++*(_DWORD *)(v218 + 24);
  v72 = (__int64 **)(*v70 + 24 * v71 - 24);
  v73 = *v72;
  n = (size_t)v72;
  v228 = v73;
LABEL_113:
  v74 = nullptr;
  if ( !v73 )
    goto LABEL_116;
LABEL_114:
  v74 = v73;
  if ( *(_QWORD *)(n + 8) )
    v74 = (__int64 *)v73[1];
  while ( 1 )
  {
LABEL_116:
    if ( v228 == v74 )
      goto LABEL_421;
    v75 = *v228;
    v76 = *v228 & 2;
    if ( (*v228 & 2) != 0 )
    {
      v84 = v228[2];
      v80 = *(_BYTE *)(v84 + 56) == 1;
      v230.m128i_i64[0] = v84 + 24;
      if ( !v80 )
        goto LABEL_143;
      v85 = *(_QWORD *)(v84 + 48);
      if ( (_DWORD)v85 == v226 )
        goto LABEL_173;
      if ( (_DWORD)v85 != LODWORD(v229[0]) )
        goto LABEL_143;
      goto LABEL_132;
    }
    v77 = (__int64 *)v228[1];
    v68 = v77;
    if ( (*(_BYTE *)v77 & 2) == 0 )
    {
      v78 = v234;
      do
      {
        v79 = (unsigned __int64)v68;
        v68 = (__int64 *)v68[2];
      }
      while ( (*(_BYTE *)v68 & 2) == 0 );
      goto LABEL_121;
    }
    v68 = (__int64 *)(v75 & 0xFFFFFFFFFFFFFFFCLL);
    v69 = *(_QWORD *)(v75 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v69 & 2) == 0 )
    {
      v78 = v234;
      if ( v228 != (__int64 *)v68[1] )
      {
LABEL_148:
        v79 = (unsigned __int64)v68;
        goto LABEL_122;
      }
      while ( 1 )
      {
        v88 = v68;
        v79 = v69 & 0xFFFFFFFFFFFFFFFCLL;
        v69 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v69 & 2) != 0 )
          break;
        v68 = (__int64 *)v79;
        if ( v88 != *(__int64 **)(v79 + 8) )
          goto LABEL_148;
      }
LABEL_121:
      v234 = v78;
LABEL_122:
      v80 = *(_BYTE *)(v79 + 56) == 1;
      v230.m128i_i64[0] = v79 + 24;
      if ( !v80 )
        goto LABEL_125;
      v81 = *(_QWORD *)(v79 + 48);
      if ( v226 == (_DWORD)v81 )
        goto LABEL_173;
      if ( LODWORD(v229[0]) != (_DWORD)v81 )
        goto LABEL_125;
      goto LABEL_132;
    }
    v80 = *((_BYTE *)v68 + 56) == 1;
    v230.m128i_i64[0] = (__int64)(v68 + 3);
    if ( !v80 )
    {
LABEL_149:
      v89 = (__int64 *)(v75 & 0xFFFFFFFFFFFFFFFCLL);
      v90 = *v89;
      if ( (*v89 & 2) == 0 )
      {
        v91 = v228;
        while ( (__int64 *)v89[1] == v91 )
        {
          v91 = v89;
          v92 = (__int64 *)(v90 & 0xFFFFFFFFFFFFFFFCLL);
          v90 = *(_QWORD *)(v90 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v90 & 2) != 0 )
          {
            v228 = v92;
            goto LABEL_113;
          }
          v89 = v92;
        }
      }
      v228 = v89;
      goto LABEL_113;
    }
    v93 = v68[6];
    if ( (_DWORD)v93 == v226 )
      goto LABEL_173;
    if ( (_DWORD)v93 != LODWORD(v229[0]) )
      goto LABEL_125;
LABEL_132:
    if ( (_BYTE)v259 )
      break;
LABEL_140:
    if ( v76 )
    {
      v84 = v228[2];
LABEL_143:
      v228 = (__int64 *)v84;
      goto LABEL_113;
    }
    v77 = (__int64 *)v228[1];
LABEL_125:
    v82 = v77;
    if ( (*(_BYTE *)v77 & 2) != 0 )
      goto LABEL_149;
    do
    {
      v83 = v82;
      v82 = (__int64 *)v82[2];
    }
    while ( (*(_BYTE *)v82 & 2) == 0 );
    v228 = v83;
    v74 = nullptr;
    if ( v73 )
      goto LABEL_114;
  }
  si128 = 0;
  v250 = 0;
  v252.m128i_i8[8] = 1;
  v252.m128i_i64[0] = (int)v226;
  v254 = 1;
  v253 = 0xFFFFFFFF00000001LL;
  v231 = &v250;
  v251 = 0;
  v86 = sub_1041A0((unsigned __int64 *)n, (__int64)&v250);
  v69 = (unsigned __int64)v86;
  if ( v250 )
  {
    v227 = (__m128i *)v86;
    *(_QWORD *)&v251 = 0;
    qfree(v250);
    v69 = (unsigned __int64)v227;
  }
  if ( v69 == *(_QWORD *)n )
    goto LABEL_173;
  v68 = (__int64 *)(v69 + 24);
  if ( v69 + 24 == v230.m128i_i64[0] )
    goto LABEL_173;
  if ( *(_DWORD *)(v230.m128i_i64[0] + 40) != v232 )
  {
    LOBYTE(v259) = 0;
LABEL_139:
    v75 = *v228;
    v73 = *(__int64 **)n;
    v76 = *v228 & 2;
    goto LABEL_140;
  }
  v247 = nullptr;
  v248 = 0;
  v171 = *(_QWORD *)(v69 + 32);
  if ( v171 )
  {
    v227 = (__m128i *)(v69 + 24);
    v217 = (__int64 *)v69;
    v219 = 4 * v171;
    v247 = (char *)qalloc_or_throw(4 * v171, (__int64)&v250, 4 * v171, v87);
    *((_QWORD *)&v248 + 1) = v171;
    memcpy(v247, (const void *)v227->m128i_i64[0], 4 * v171);
    *(_QWORD *)&v248 = v171;
    v68 = (__int64 *)v227;
    v69 = (unsigned __int64)v217;
  }
  v216.m128i_i32[0] = v226 + v232;
  v217 = (__int64 *)&v247;
  if ( *(_QWORD *)n != v69 )
  {
    while ( 1 )
    {
      if ( *((_BYTE *)v68 + 32) != 1 )
        sub_21BD20(0.0);
      if ( v216.m128i_i32[0] <= *((_DWORD *)v68 + 6) )
        break;
      v172 = 0;
      for ( i = 0; v172 < (unsigned __int64)v68[1]; i = v172 )
      {
        v174 = *(_DWORD *)(*v68 + 4 * i);
        v175 = &v247[4 * v248];
        if ( v247 == v175 )
          goto LABEL_353;
        v176 = v247;
        while ( v174 != *(_DWORD *)v176 )
        {
          v176 += 4;
          if ( v175 == v176 )
            goto LABEL_353;
        }
        if ( v176 == v175 )
        {
LABEL_353:
          if ( *((_QWORD *)&v248 + 1) < (unsigned __int64)(v248 + 1) )
          {
            v219 = (size_t)v68;
            v227 = (__m128i *)v69;
            v247 = (char *)qvector_reserve((__int64)v217, (__int64)v247, v248 + 1, 4);
            v68 = (__int64 *)v219;
            v69 = (unsigned __int64)v227;
            v175 = &v247[4 * v248];
          }
          *(_DWORD *)v175 = v174;
          *(_QWORD *)&v248 = v248 + 1;
        }
        ++v172;
      }
      if ( (*(_QWORD *)v69 & 2) == 0 )
      {
        v177 = *(__int64 **)(v69 + 16);
        if ( (*(_BYTE *)v177 & 2) != 0 )
        {
          v178 = (__int64 *)(*(_QWORD *)v69 & 0xFFFFFFFFFFFFFFFCLL);
          v179 = *v178;
          if ( (*v178 & 2) == 0 )
          {
            while ( v178[2] == v69 )
            {
              v69 = (unsigned __int64)v178;
              v180 = v179 & 0xFFFFFFFFFFFFFFFCLL;
              v179 = *(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v179 & 2) != 0 )
              {
                v69 = v180;
                goto LABEL_351;
              }
              v178 = (__int64 *)v180;
            }
          }
          v69 = (unsigned __int64)v178;
        }
        else
        {
          do
          {
            v69 = (unsigned __int64)v177;
            v177 = (__int64 *)v177[1];
          }
          while ( (*(_BYTE *)v177 & 2) == 0 );
        }
      }
LABEL_351:
      if ( *(_QWORD *)n == v69 )
        break;
      v68 = (__int64 *)(v69 + 24);
    }
  }
  v197 = *(__int64 **)(a1 + 784);
  si128 = 0;
  v250 = 0;
  v251 = 0;
  sub_71390(v197, v231, 1);
  LODWORD(v69) = 0;
  v94 = 0;
  LODWORD(v219) = 0;
  if ( (_QWORD)v248 )
  {
    while ( 1 )
    {
      v198 = (_QWORD *)(v250 + 16LL * *(int *)&v247[4 * v94]);
      if ( !*(_QWORD *)(v230.m128i_i64[0] + 8) )
        break;
      v199 = 0;
      v200 = 0;
      while ( 1 )
      {
        LODWORD(v227) = *(_DWORD *)(*(_QWORD *)v230.m128i_i64[0] + 4 * v200);
        if ( sub_64930(v198, (int)v227) )
        {
          if ( (unsigned int)v227 >= *(_DWORD *)(a1 + 64) )
            sub_21BD60(0.0);
          if ( sub_64930((_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * (unsigned int)v227) + 200LL), v229[0]) )
            break;
        }
        v200 = ++v199;
        if ( (unsigned __int64)v199 >= *(_QWORD *)(v230.m128i_i64[0] + 8) )
          goto LABEL_400;
      }
      LODWORD(v219) = v219 + 1;
      v94 = (int)v219;
      if ( (int)v219 >= (unsigned __int64)v248 )
        goto LABEL_165;
    }
LABEL_400:
    LOBYTE(v259) = 0;
    goto LABEL_401;
  }
LABEL_165:
  if ( !(_BYTE)v259 )
  {
LABEL_401:
    sub_221ED0(v231);
    if ( v247 )
    {
      *(_QWORD *)&v248 = 0;
      qfree((__int64)v247);
    }
    goto LABEL_139;
  }
  if ( v250 )
  {
    v95 = v251;
    for ( j = 0; v95 != j; ++j )
    {
      v97 = j;
      qfree(*(_QWORD *)(v250 + 16 * v97));
    }
    *(_QWORD *)&v251 = 0;
    qfree(v250);
  }
  if ( v247 )
  {
    *(_QWORD *)&v248 = 0;
    qfree((__int64)v247);
  }
LABEL_173:
  n = (size_t)v255;
  LODWORD(v228) = 0;
  v98 = 0;
  if ( !*(_QWORD *)(v230.m128i_i64[0] + 8) )
    goto LABEL_421;
  do
  {
    v100 = *(_QWORD *)v230.m128i_i64[0];
    v101 = *(int *)(*(_QWORD *)v230.m128i_i64[0] + 4 * v98);
    if ( (_DWORD)v101 )
    {
      v102 = *(__m128i **)(*(_QWORD *)(a1 + 528) + 8 * v101);
      if ( (_BYTE)v259 )
      {
        v231 = &v250;
        v103 = *(_QWORD *)&v255[16];
        v227 = *(__m128i **)&v255[16];
        sub_64000(&v250, *(__int64 *)&v255[16], *(double *)si128.m128i_i64);
        si128 = 0;
        *((_QWORD *)&v251 + 1) = 0;
        v252 = 0;
        v105 = v227[1].m128i_i64[1];
        if ( v105 )
        {
          v219 = 16 * v105;
          *((_QWORD *)&v251 + 1) = qalloc_or_throw(16 * v105, v103, 16 * v105, v104);
          v252.m128i_i64[1] = v105;
          memcpy(*((void **)&v251 + 1), (const void *)v227[1].m128i_i64[0], 16 * v105);
          v252.m128i_i64[0] = v105;
        }
      }
      else
      {
        v250 = 0;
        v231 = &v250;
        *(_QWORD *)&v251 = 0;
        sub_63E80(&v250, *(int *)v255, *(int *)&v255[8], *(double *)si128.m128i_i64);
        *((_QWORD *)&v251 + 1) = 0;
        si128 = 0;
        v252 = 0;
      }
      v106 = (__int64 *)sub_129150(
                          (__int64)v102,
                          v231,
                          v102[3].m128i_i64[1],
                          0,
                          0,
                          0,
                          *(double *)si128.m128i_i64,
                          (__m128)v62,
                          0x101u);
      if ( *((_QWORD *)&v251 + 1) )
      {
        v231 = v106;
        v252.m128i_i64[0] = 0;
        qfree(*((__int64 *)&v251 + 1));
        v106 = v231;
      }
      v231 = v106;
      qfree(v250);
      if ( !v231 )
      {
        if ( !under_debugger )
          sub_383060(0xC985u, *(double *)si128.m128i_i64);
        goto LABEL_442;
      }
      if ( (unsigned int)sub_220840(
                           (__m128i *)n,
                           v230.m128i_i64[0],
                           v102,
                           (unsigned int *)v231,
                           1,
                           v107,
                           *(double *)si128.m128i_i64,
                           (__m128)v62) != 1 )
      {
        v215 = 0;
        goto LABEL_185;
      }
    }
    v99 = v230.m128i_i64[0];
    LODWORD(v228) = (_DWORD)v228 + 1;
    v98 = (int)v228;
  }
  while ( (unsigned __int64)(int)v228 < *(_QWORD *)(v230.m128i_i64[0] + 8) );
  v215 = 2;
LABEL_185:
  LODWORD(v228) = 0;
  LOBYTE(v219) = v225;
  if ( !*(_QWORD *)(v230.m128i_i64[0] + 8) )
  {
LABEL_421:
    v55 = 0;
    v233 = v232;
    LOBYTE(v219) = v225;
    goto LABEL_220;
  }
  while ( 2 )
  {
    LODWORD(tinfo_size) = v221;
    v119 = *(int *)(*(_QWORD *)v230.m128i_i64[0] + 4 * v221);
    if ( !(_DWORD)v119 )
    {
      v108 = sub_1108E0(*(_QWORD *)(a1 + 784), 0, v100, v99, (__int64)v68, v69, *(double *)si128.m128i_i64, (__m128)v62);
      v109 = (_QWORD *)v108;
      if ( !v108 )
      {
        if ( !under_debugger )
          sub_383060(0xC50Eu, *(double *)si128.m128i_i64);
        goto LABEL_442;
      }
      ++*(_DWORD *)(v108 + 24);
      v110 = *(unsigned __int64 **)v108;
      v250 = 0;
      v252.m128i_i8[8] = 1;
      v252.m128i_i64[0] = (int)v226;
      v253 = (unsigned int)v232 | 0xFFFFFFFF00000000LL;
      v254 = 1;
      v231 = &v250;
      v251 = 0;
      v111 = sub_104DF0(v110, (__int64)&v250);
      if ( v250 )
      {
        *(_QWORD *)&v251 = 0;
        qfree(v250);
      }
      if ( !v111 )
        goto LABEL_278;
      v112 = v111[1];
      v113 = v112;
      if ( !v112 || *(_DWORD *)(*v111 + 4 * v112 - 4) != *(_DWORD *)(v235 + 72) )
      {
        if ( !under_debugger )
          sub_383060(0xCEC7u, *(double *)si128.m128i_i64);
        goto LABEL_442;
      }
      if ( (*(_BYTE *)a1 & 0x20) != 0 )
      {
LABEL_194:
        if ( v113 > 1 )
        {
          LOBYTE(v259) = 0;
          sub_104E10((__int64)v109, *(double *)si128.m128i_i64);
LABEL_196:
          if ( !v232 )
            goto LABEL_408;
          v5 = 1;
          goto LABEL_198;
        }
        goto LABEL_278;
      }
      if ( v112 != 1 )
      {
        if ( v112 == 2 )
        {
          LODWORD(v217) = *(_DWORD *)*v111;
          if ( (unsigned int)v217 >= *(_DWORD *)(a1 + 64) )
            sub_21BD60(*(double *)si128.m128i_i64);
          v163 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * (unsigned int)v217);
          v247 = nullptr;
          *(_QWORD *)&v248 = 0;
          n = v163;
          v227 = (__m128i *)&v247;
          sub_63E80((__int64 *)&v247, v226, v232, *(double *)si128.m128i_i64);
          si128 = 0;
          *((_QWORD *)&v248 + 1) = 0;
          v249 = 0;
          v221 = sub_A9D90(n, (unsigned __int64 **)v227, *(_QWORD *)(n + 48), 0, 1u);
          if ( !v221 )
          {
            if ( !under_debugger )
              sub_383060(0xCEC6u, 0.0);
            goto LABEL_442;
          }
          if ( *(_DWORD *)v221 == 4
            && v232 == *(_DWORD *)(v221 + 36)
            && *(_BYTE *)(v221 + 32) == 1
            && *(_BYTE *)(v221 + 64) == 5 )
          {
            v250 = 0;
            *(_QWORD *)&v251 = 0;
            sub_63E80(v231, v226, v232, 0.0);
            *((_QWORD *)&v251 + 1) = 0;
            v252 = 0;
            sub_648D0(v227->m128i_i64, (const void **)v231, 0.0);
            v206 = *((_QWORD *)&v251 + 1);
            v62 = 0;
            si128 = _mm_loadu_si128(&v252);
            *((_QWORD *)&v251 + 1) = 0;
            v252 = 0;
            if ( *((_QWORD *)&v248 + 1) )
            {
              v213 = v206;
              v216 = si128;
              v249.m128i_i64[0] = 0;
              qfree(*((__int64 *)&v248 + 1));
              v206 = v213;
              si128 = _mm_load_si128(&v216);
            }
            *((_QWORD *)&v248 + 1) = v206;
            v249 = si128;
            if ( *((_QWORD *)&v251 + 1) )
            {
              v252.m128i_i64[0] = 0;
              qfree(*((__int64 *)&v251 + 1));
            }
            qfree(v250);
            if ( !sub_A9D90(n, (unsigned __int64 **)v227, *(_QWORD *)(v221 + 8), 0, 1u) )
            {
              si128 = 0;
              v207 = (unsigned __int64 *)(*v109 + 24LL * (int)v217);
              v208 = *(_QWORD *)(*(_QWORD *)(v221 + 72) + 8LL);
              v250 = 0;
              v252.m128i_i8[8] = 5;
              v252.m128i_i64[0] = v208;
              v253 = (unsigned int)v232 | 0xFFFFFFFF00000000LL;
              v254 = 1;
              v251 = 0;
              v209 = sub_104DF0(v207, (__int64)v231);
              if ( v250 )
              {
                v227 = (__m128i *)v209;
                *(_QWORD *)&v251 = 0;
                qfree(v250);
                v209 = (__int64 *)v227;
              }
              if ( !v209 || !v209[1] )
              {
                if ( *((_QWORD *)&v248 + 1) )
                {
                  v249.m128i_i64[0] = 0;
                  qfree(*((__int64 *)&v248 + 1));
                }
                qfree((__int64)v247);
LABEL_252:
                v244[0] = 0;
                v244[1] = 0;
                v245 = 0;
                v217 = v244;
                v246 = 0;
                sub_138BB0(a1, 0, v244, 0, 0xFFFFFFFFFFFFFFFFLL, 0);
                if ( v245 )
                {
                  *(_QWORD *)&v246 = 0;
                  qfree(v245);
                  v245 = 0;
                  *((_QWORD *)&v246 + 1) = 0;
                }
                v250 = 0;
                *(_QWORD *)&v251 = 0;
                sub_63E80(v231, v226, v232, 0.0);
                *((_QWORD *)&v251 + 1) = 0;
                v252 = 0;
                sub_64640(v217, v231, v143, v144, v145, v146);
                sub_317C60(&v245, (__int64)&v251 + 8);
                if ( *((_QWORD *)&v251 + 1) )
                {
                  v252.m128i_i64[0] = 0;
                  qfree(*((__int64 *)&v251 + 1));
                }
                qfree(v250);
                v147 = 0.0;
                v247 = nullptr;
                v248 = 0u;
                v148 = *(_QWORD *)(a1 + 520);
                v249 = 0;
                v149 = *(_QWORD *)(v148 + 8);
                v227 = (__m128i *)&v247;
                for ( v216.m128i_i64[0] = (__int64)&v248 + 8; v149; v149 = *(_QWORD *)(v211 + 8) )
                {
                  v211 = v149;
                  sub_64280(v227->m128i_i64, (__int64 *)(v149 + 240), 0.0);
                  sub_316CB0((__int64 *)v216.m128i_i64[0], (__int64 **)(v211 + 256), v211, v150);
                }
                sub_64700(v217, v227->m128i_i64);
                sub_3180C0(&v245, (__int64)&v248 + 8, v151, v152);
                v153 = *(_QWORD *)(a1 + 920);
                if ( v153 )
                {
                  v154 = *(_QWORD *)(v153 + 8);
                  v212 = v154 + 4LL * *(_QWORD *)(v153 + 16);
                  if ( v154 != v212 )
                  {
                    v216.m128i_i64[0] = *(_QWORD *)(v153 + 8);
                    do
                    {
                      v214 = *(_DWORD *)v216.m128i_i64[0];
                      v147 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1504) + 32LL))(*(_QWORD *)(a1 + 1504));
                      v250 = 0;
                      *(_QWORD *)&v251 = 0;
                      sub_63E80(v231, v214, v155, v147);
                      *((_QWORD *)&v251 + 1) = 0;
                      v252 = 0;
                      sub_64640(v217, v231, v156, v157, v158, v159);
                      sub_317C60(&v245, (__int64)&v251 + 8);
                      if ( *((_QWORD *)&v251 + 1) )
                      {
                        v252.m128i_i64[0] = 0;
                        qfree(*((__int64 *)&v251 + 1));
                      }
                      qfree(v250);
                      v216.m128i_i64[0] += 4;
                    }
                    while ( v212 != v216.m128i_i64[0] );
                  }
                }
                v250 = 0;
                *(_QWORD *)&v251 = 0;
                sub_63E80(v231, 0, 5, v147);
                si128 = 0;
                *((_QWORD *)&v251 + 1) = 0;
                v252 = 0;
                v216.m128i_i8[0] = sub_64820(v217, v231);
                if ( v216.m128i_i8[0] )
                {
                  v201 = sub_317F40((__int64 *)&v251 + 1, (__int64)&v245);
                  v160 = *((_QWORD *)&v251 + 1);
                  v216.m128i_i8[0] = v201;
                  if ( !*((_QWORD *)&v251 + 1) )
                  {
LABEL_267:
                    qfree(v250);
                    if ( v216.m128i_i8[0] )
                    {
                      if ( n )
                      {
                        sub_11D5A0(v221);
                        v161 = *(_DWORD *)(n + 24);
                        LODWORD(v227) = v161;
                        BYTE1(v161) &= ~2u;
                        LOBYTE(v161) = v161 | 0x80;
                        *(_DWORD *)(n + 24) = v161;
                      }
                      goto LABEL_270;
                    }
LABEL_404:
                    v216.m128i_i8[0] = 0;
LABEL_270:
                    if ( *((_QWORD *)&v248 + 1) )
                    {
                      v249.m128i_i64[0] = 0;
                      qfree(*((__int64 *)&v248 + 1));
                    }
                    qfree((__int64)v247);
                    if ( v245 )
                    {
                      *(_QWORD *)&v246 = 0;
                      qfree(v245);
                    }
                    qfree(v244[0]);
                    if ( !v216.m128i_i8[0] )
                    {
                      v113 = v111[1];
                      goto LABEL_194;
                    }
                    *(_QWORD *)(a1 + 368) = 0;
                    v162 = *(_QWORD *)(a1 + 376);
                    if ( v162 )
                    {
                      *(_QWORD *)(a1 + 384) = 0;
                      qfree(v162);
                      *(_QWORD *)(a1 + 376) = 0;
                      *(_QWORD *)(a1 + 392) = 0;
                    }
                    *(_DWORD *)a1 |= 0x20u;
LABEL_278:
                    sub_104E10((__int64)v109, *(double *)si128.m128i_i64);
                    if ( v5 <= 2 )
                      goto LABEL_216;
                    n = 0;
                    v227 = nullptr;
                    goto LABEL_280;
                  }
                }
                else
                {
                  v160 = *((_QWORD *)&v251 + 1);
                  if ( !*((_QWORD *)&v251 + 1) )
                  {
                    qfree(v250);
                    goto LABEL_404;
                  }
                }
                v252.m128i_i64[0] = 0;
                qfree(v160);
                goto LABEL_267;
              }
            }
          }
          if ( *((_QWORD *)&v248 + 1) )
          {
            v249.m128i_i64[0] = 0;
            qfree(*((__int64 *)&v248 + 1));
          }
          qfree((__int64)v247);
          v112 = v111[1];
        }
        v113 = v112;
        goto LABEL_194;
      }
      v221 = 0;
      n = 0;
      goto LABEL_252;
    }
    v227 = *(__m128i **)(*(_QWORD *)(a1 + 528) + 8 * v119);
    if ( (_BYTE)v259 )
    {
      tinfo_size = *(_QWORD *)&v255[16];
      v231 = &v250;
      v120 = *(_QWORD *)&v255[16];
      sub_64000(&v250, *(__int64 *)&v255[16], *(double *)si128.m128i_i64);
      *((_QWORD *)&v251 + 1) = 0;
      v252 = 0;
      v122 = *(_QWORD *)(tinfo_size + 24);
      if ( v122 )
      {
        n = 16 * v122;
        *((_QWORD *)&v251 + 1) = qalloc_or_throw(16 * v122, v120, 16 * v122, v121);
        v252.m128i_i64[1] = v122;
        memcpy(*((void **)&v251 + 1), *(const void **)(tinfo_size + 16), n);
        v252.m128i_i64[0] = v122;
      }
    }
    else
    {
      v250 = 0;
      v231 = &v250;
      *(_QWORD *)&v251 = 0;
      sub_63E80(&v250, *(int *)v255, *(int *)&v255[8], *(double *)si128.m128i_i64);
      *((_QWORD *)&v251 + 1) = 0;
      v252 = 0;
    }
    n = sub_129150((__int64)v227, v231, v227[3].m128i_i64[1], 0, 0, 0, *(double *)si128.m128i_i64, (__m128)v62, 0x101u);
    if ( *((_QWORD *)&v251 + 1) )
    {
      v252.m128i_i64[0] = 0;
      qfree(*((__int64 *)&v251 + 1));
    }
    qfree(v250);
    if ( !n )
    {
      if ( !v236 )
      {
        if ( !under_debugger )
          sub_383060(0xC4F6u, *(double *)si128.m128i_i64);
        goto LABEL_442;
      }
LABEL_205:
      LODWORD(v228) = (_DWORD)v228 + 1;
      v221 = (int)v228;
      if ( (unsigned __int64)(int)v228 >= *(_QWORD *)(v230.m128i_i64[0] + 8) )
      {
        v55 = 0;
        v233 = v232;
        goto LABEL_220;
      }
      continue;
    }
    break;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __m128i *, size_t, __int64 *, unsigned __int8 *))(**(_QWORD **)(a1 + 1504) + 112LL))(
         *(_QWORD *)(a1 + 1504),
         a1,
         v227,
         n,
         v14,
         v220) )
  {
    sub_104E10(v218, *(double *)si128.m128i_i64);
    sub_93B40(v256.m128i_i64);
LABEL_248:
    if ( src )
    {
      v243.m128i_i64[0] = 0;
      qfree((__int64)src);
    }
    qfree(v241[0]);
LABEL_29:
    v230.m128i_i64[0] = (__int64)&v237;
LABEL_30:
    clear_tinfo_t();
LABEL_31:
    v15 = *(_DWORD *)a1;
LABEL_33:
    BYTE1(v15) |= 0x80u;
    v25 = v234;
    *(_DWORD *)a1 = v15;
    sub_64280(v14, v25, *(double *)si128.m128i_i64);
    sub_316CB0((__int64 *)(v235 + 176), &v239, v26, v27);
    if ( v236 || !(unsigned __int8)sub_64880(v234) )
      LODWORD(tinfo_size) = 1;
    else
      LOBYTE(tinfo_size) = (_QWORD)v240 != 0;
    goto LABEL_35;
  }
  v124 = sub_221120((__m128i *)v255, v230.m128i_i64[0], v227, (unsigned int *)n, v215, v123, si128, (__m128)v62);
  v5 = v124;
  if ( v124 == 2 )
  {
    v55 = v225;
    v233 = v232;
    goto LABEL_220;
  }
  if ( v124 == 3 )
  {
LABEL_280:
    if ( !(unsigned __int8)sub_64880(&v256) )
    {
      v250 = 0;
      *(_QWORD *)&v251 = 0;
      sub_63E80(v231, v226, v232, *(double *)si128.m128i_i64);
      v166 = sub_64820(&v256, v231);
      qfree(v250);
      if ( v166 )
      {
        v167 = sub_64C00(&v256);
        v250 = 0;
        *(_QWORD *)&v251 = 0;
        v232 = v167 - v226 + 1;
        sub_63E80(v231, v226, v232, *(double *)si128.m128i_i64);
        *((_QWORD *)&v251 + 1) = 0;
        v252 = 0;
        sub_648D0(v223, (const void **)v231, *(double *)si128.m128i_i64);
        v168 = *((void **)&v251 + 1);
        si128 = _mm_loadu_si128(&v252);
        *((_QWORD *)&v251 + 1) = 0;
        v252 = 0;
        if ( src )
        {
          *(__m128i *)v229 = si128;
          v243.m128i_i64[0] = 0;
          qfree((__int64)src);
          si128 = _mm_load_si128((const __m128i *)v229);
        }
        src = v168;
        v243 = si128;
        if ( *((_QWORD *)&v251 + 1) )
        {
          v252.m128i_i64[0] = 0;
          qfree(*((__int64 *)&v251 + 1));
        }
        qfree(v250);
        if ( sub_122C30((__int64)v223, (__int64)v14) )
        {
          v192 = v223;
          sub_648D0(v14, (const void **)v223, *(double *)si128.m128i_i64);
          v193 = nullptr;
          v194 = v243.m128i_i64[0];
          if ( v243.m128i_i64[0] )
          {
            v229[0] = 16 * v243.m128i_i64[0];
            v193 = (void *)qalloc_or_throw(16 * v243.m128i_i64[0], (__int64)v192, 16 * v243.m128i_i64[0], v99);
            memcpy(v193, src, v229[0]);
          }
          si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v194, (__m128i)(unsigned __int64)v194);
          v195 = *(_QWORD *)(v235 + 176);
          if ( v195 )
          {
            *(__m128i *)v229 = si128;
            *(_QWORD *)(v235 + 184) = 0;
            qfree(v195);
            si128 = _mm_load_si128((const __m128i *)v229);
          }
          v196 = v235;
          v236 = 1;
          *(_QWORD *)(v235 + 176) = v193;
          *(__m128i *)(v196 + 184) = si128;
        }
        if ( !(_BYTE)v219 )
        {
          if ( !v232 )
          {
LABEL_412:
            LOBYTE(v219) = 0;
            v55 = 0;
            LODWORD(v229[0]) = -1;
            goto LABEL_220;
          }
          LODWORD(v229[0]) = -1;
          v5 = 3;
          goto LABEL_205;
        }
        LODWORD(v229[0]) = -1;
        goto LABEL_309;
      }
    }
    if ( LODWORD(v229[0]) == -1 )
    {
      if ( !(_BYTE)v219 )
      {
        if ( !v232 )
          goto LABEL_412;
        goto LABEL_284;
      }
    }
    else
    {
      v250 = 0;
      *(_QWORD *)&v251 = 0;
      sub_63E80(v231, v229[0], v232, *(double *)si128.m128i_i64);
      v165 = v231;
      if ( sub_647F0((__int64)&v256, (__int64)v231) && (unsigned __int8)sub_64820(&v256, v165) )
        LOBYTE(v259) = 0;
      qfree(v250);
      if ( !(_BYTE)v219 )
      {
        if ( !v232 )
          goto LABEL_408;
        v5 = 3;
        if ( !(_BYTE)v259 )
        {
LABEL_200:
          v250 = 0;
          *(_QWORD *)&v251 = 0;
          sub_63E80(v231, v229[0], v232, *(double *)si128.m128i_i64);
          *((_QWORD *)&v251 + 1) = 0;
          v252 = 0;
          v118 = sub_64640(v14, v231, v114, v115, v116, v117);
          if ( (unsigned __int8)sub_317C60((__int64 *)(v235 + 176), (__int64)&v251 + 8) )
          {
            if ( *((_QWORD *)&v251 + 1) )
            {
              v252.m128i_i64[0] = 0;
              qfree(*((__int64 *)&v251 + 1));
            }
            qfree(v250);
          }
          else
          {
            if ( *((_QWORD *)&v251 + 1) )
            {
              v252.m128i_i64[0] = 0;
              qfree(*((__int64 *)&v251 + 1));
            }
            qfree(v250);
            if ( !v118 )
            {
              if ( !under_debugger )
                sub_383060(0xCE66u, *(double *)si128.m128i_i64);
              goto LABEL_442;
            }
          }
          v236 = 1;
          LODWORD(v229[0]) = -1;
          goto LABEL_205;
        }
LABEL_284:
        v5 = 3;
        goto LABEL_205;
      }
    }
LABEL_309:
    v164 = v231;
    sub_124680((__int64)v231, (__int64)v227, n, 1, *(double *)si128.m128i_i64, (__m128)v62);
    LOBYTE(v219) = sub_64780(v164, v14);
    if ( !(_BYTE)v219 )
      LOBYTE(v219) = sub_318470((unsigned __int64 **)&v251 + 1, v235 + 176);
    if ( *((_QWORD *)&v251 + 1) )
    {
      v252.m128i_i64[0] = 0;
      qfree(*((__int64 *)&v251 + 1));
    }
    qfree(v250);
    if ( !v232 )
    {
LABEL_408:
      v55 = 0;
      v233 = 0;
      goto LABEL_220;
    }
    v5 = 3;
LABEL_198:
    if ( (_BYTE)v259 || LODWORD(v229[0]) == -1 )
      goto LABEL_205;
    goto LABEL_200;
  }
LABEL_216:
  if ( v5 )
    goto LABEL_196;
  v125 = (_QWORD *)v235;
  v126 = *(_QWORD *)(v235 + 176);
  *(_QWORD *)(v235 + 168) = 0;
  if ( v126 )
  {
    v125[23] = 0;
    qfree(v126);
    v125[22] = 0;
    v125[24] = 0;
  }
  v236 = 1;
  v55 = 0;
  LODWORD(v229[0]) = -1;
  v226 = -1;
LABEL_220:
  sub_104E10(v218, *(double *)si128.m128i_i64);
  if ( v257 )
  {
    *(_QWORD *)&v258 = 0;
    qfree(v257);
  }
  qfree(v256.m128i_i64[0]);
  if ( !v236 )
  {
    v232 = v233;
    v225 = v219;
LABEL_80:
    if ( LODWORD(v229[0]) == -1 && *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 84LL) >= v232 )
      goto LABEL_82;
    if ( (get_tinfo_property() & 0xF) != 0xA )
    {
      if ( LODWORD(v229[0]) == -1 )
      {
LABEL_82:
        v56 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
        goto LABEL_83;
      }
      goto LABEL_85;
    }
    v142 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 84LL);
    v228 = (__int64 *)v255;
    tinfo_size = (__int64)v255;
    sub_21CA20((__int64 *)v255, v226, v142, *(double *)si128.m128i_i64);
    si128.m128i_i64[0] = 0;
    *(_QWORD *)&v255[16] = 0;
    v256 = 0;
    sub_21C010(v14, (__int64)v255, 0.0);
    sub_93B40((__int64 *)v255);
    v236 = 1;
    goto LABEL_248;
  }
  if ( LODWORD(v229[0]) != -1 )
    goto LABEL_224;
  if ( v233 <= 0 )
  {
    v224 = v55;
    v225 = v219;
    v232 = v233;
    goto LABEL_246;
  }
  v231 = &v250;
  sub_221B60((__int64)&v250, a1, 0, 0xFFFFFFFFFFFFFFFFLL, 0, *(double *)si128.m128i_i64, (__m128)v62);
  v189 = sub_64960(v14, 0);
  while ( 2 )
  {
    if ( !sub_11CA80(v233) )
    {
LABEL_376:
      v224 = sub_64A10(v231, --v189, ++v233);
      if ( !v224 )
      {
        sub_21C070(
          *(__int64 **)(a1 + 1504),
          v14,
          *(_QWORD *)(a1 + 1496) + 264LL,
          *(double *)si128.m128i_i64,
          (__m128)v62);
        goto LABEL_382;
      }
      continue;
    }
    break;
  }
  sub_1C69A0((__int64)v255, *(_QWORD **)(a1 + 1504), v189, v233, *(double *)si128.m128i_i64);
  if ( !*(_DWORD *)v255 )
  {
    cleanup_argloc();
    goto LABEL_376;
  }
  cleanup_argloc();
  if ( v224 )
  {
    sub_21CA20((__int64 *)v255, v189, v233, *(double *)si128.m128i_i64);
    si128.m128i_i64[0] = 0;
    *(_QWORD *)&v255[16] = 0;
    v256 = 0;
    sub_21C010(v14, (__int64)v255, 0.0);
    sub_93B40((__int64 *)v255);
  }
LABEL_382:
  sub_93B40(v231);
  v190 = *(_QWORD *)(a1 + 1496);
  v232 = v233;
  v56 = *(unsigned __int8 *)(v190 + 130);
  v225 = v219;
LABEL_83:
  v233 = v56;
  if ( v56 != v232 )
    goto LABEL_85;
  if ( !v225 )
    goto LABEL_85;
  v181 = *(_QWORD *)(a1 + 520);
  if ( (unsigned __int8)sub_64880((_QWORD *)(v181 + 240)) )
    goto LABEL_85;
  if ( !*(_QWORD *)(v181 + 264) )
    goto LABEL_85;
  v182 = (_QWORD *)(v181 + 240);
  v183 = sub_64960((_QWORD *)(v181 + 240), 0);
  v184 = sub_64BA0(v182, v183);
  if ( v233 <= v184 )
    goto LABEL_85;
  v228 = (__int64 *)v255;
  sub_21CA20((__int64 *)v255, v183, v184, *(double *)si128.m128i_i64);
  *(_QWORD *)&v255[16] = 0;
  v256 = 0;
  if ( !(unsigned __int8)sub_64780(v14, v255) )
  {
    v210 = sub_318470((unsigned __int64 **)(v235 + 176), (__int64)&v255[16]);
    sub_93B40(v228);
    if ( v210 )
      goto LABEL_368;
    goto LABEL_85;
  }
  sub_93B40(v228);
LABEL_368:
  v185 = sub_1F01D0();
  if ( v185 == -1 || v185 == v183 || (v186 = v183 - v185, !sub_11CA80(v183 - v185)) )
  {
LABEL_85:
    LODWORD(tinfo_size) = v236;
    if ( !v55 )
      goto LABEL_226;
    goto LABEL_86;
  }
  v187 = v186;
  v188 = v228;
  sub_21CA20(v228, v226, v187, 0.0);
  *(_QWORD *)&v255[16] = 0;
  v256 = 0;
  sub_21C010(v14, (__int64)v188, 0.0);
  sub_93B40(v188);
  v236 = 1;
LABEL_224:
  if ( v55 )
    goto LABEL_110;
  LODWORD(tinfo_size) = v236;
LABEL_226:
  *(_DWORD *)a1 |= 0x8000u;
LABEL_86:
  if ( (_BYTE)tinfo_size )
  {
LABEL_110:
    sub_66FA0(a1, 1);
    LODWORD(tinfo_size) = v236;
  }
  if ( src )
  {
    v243.m128i_i64[0] = 0;
    qfree((__int64)src);
  }
  qfree(v241[0]);
  clear_tinfo_t();
LABEL_35:
  if ( v239 )
  {
    *(_QWORD *)&v240 = 0;
    qfree((__int64)v239);
  }
  qfree(v238[0]);
  return (unsigned int)tinfo_size;
}

