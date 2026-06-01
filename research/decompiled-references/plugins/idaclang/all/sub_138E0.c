__int64 __fastcall sub_138E0(
        _QWORD *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        __m128i a9,
        __m128i a10,
        __int64 a11)
{
  int v11; // r12d
  __int64 *v12; // rbx
  __int64 v13; // rax
  char tinfo; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  const char *v20; // rdx
  __int64 v21; // xmm0_8
  char *v22; // r14
  char **v23; // r13
  __m128i v24; // xmm0
  __int64 v25; // rax
  const char *v26; // rdx
  __int32 v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int128 v37; // xmm0
  const char *v38; // rdx
  __int64 v39; // rax
  const char *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  char v50; // r13
  __int128 v51; // xmm0
  __int64 *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __m128i v59; // xmm0
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // edx
  int v71; // ecx
  int v72; // r8d
  int v73; // r9d
  __int128 v74; // xmm0
  char v75; // al
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // edx
  int v82; // ecx
  int v83; // r8d
  int v84; // r9d
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  unsigned int v90; // r13d
  __m128i v91; // kr10_16
  __int64 v92; // r14
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  int v97; // edx
  int v98; // ecx
  int v99; // r8d
  int v100; // r9d
  char v101; // al
  __int64 v102; // rdi
  __int64 v103; // r15
  __int64 v104; // r14
  char v105; // r13
  _QWORD *v106; // rbx
  __int64 v107; // rdi
  __int64 v108; // rdi
  char *v109; // rax
  __int64 v110; // r14
  __int64 v111; // rdx
  __m128i v112; // xmm0
  __m128i si128; // xmm0
  char *v114; // r13
  void *v115; // rax
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  int v121; // edx
  int v122; // ecx
  int v123; // r8d
  int v124; // r9d
  __int64 v125; // rax
  int v126; // esi
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __m128i v131; // xmm0
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __m128i v142; // xmm0
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  int v148; // edx
  int v149; // ecx
  int v150; // r8d
  int v151; // r9d
  char v152; // al
  char *v153; // rdi
  char *v154; // rax
  __int64 v155; // rdx
  char v156; // al
  __int64 v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  int v162; // edx
  int v163; // ecx
  int v164; // r8d
  int v165; // r9d
  int v166; // eax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  const char *v171; // r13
  char *v172; // rdx
  char *v173; // r13
  __int64 v174; // rsi
  __int64 v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  int v180; // edx
  int v181; // ecx
  int v182; // r8d
  int v183; // r9d
  char v184; // r13
  char *v185; // rdi
  __int64 v186; // r14
  __int64 v187; // r13
  char *v188; // r15
  __int64 v189; // rdi
  __int64 v190; // rdi
  char *v191; // rdx
  __int64 idati; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  char tinfo_property; // al
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // r14
  __int64 j; // rsi
  char v200; // al
  __int64 v201; // r8
  __int64 v202; // rax
  __int64 v203; // r8
  void *v204; // rax
  __m128i v205; // kr30_16
  __int64 v206; // r14
  int tinfo_size; // eax
  char v208; // al
  __int64 v209; // r15
  __int64 v210; // rbx
  char v211; // r14
  const char *v212; // r13
  __int64 v213; // rdi
  __int64 v214; // rdi
  __int64 v215; // rax
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  __int64 v220; // rax
  char *v221; // r13
  __int64 v222; // rsi
  char *v223; // rdi
  __int64 v224; // rax
  char v225; // al
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 v229; // r15
  __int64 v230; // rbx
  __int64 *v231; // r14
  char *v232; // r13
  __int64 v233; // rdi
  __int64 v234; // rdi
  __int64 v235; // rax
  __int64 v236; // rax
  __int64 v237; // rax
  __int64 v238; // r14
  _BYTE *v239; // rax
  char *v240; // rsi
  __int64 v241; // r14
  __int64 *v242; // r13
  __int64 i; // rbx
  __int64 v244; // rdi
  __int64 v245; // rdi
  __int64 v246; // rax
  __int128 v247; // xmm0
  __int128 v248; // [rsp+0h] [rbp-2F0h]
  char *v249; // [rsp+20h] [rbp-2D0h]
  int v250; // [rsp+20h] [rbp-2D0h]
  __int64 v251; // [rsp+30h] [rbp-2C0h]
  int n; // [rsp+38h] [rbp-2B8h]
  __int64 ne; // [rsp+38h] [rbp-2B8h]
  signed __int64 na; // [rsp+38h] [rbp-2B8h]
  __int64 nd; // [rsp+38h] [rbp-2B8h]
  size_t nb; // [rsp+38h] [rbp-2B8h]
  char nf; // [rsp+38h] [rbp-2B8h]
  char ng; // [rsp+38h] [rbp-2B8h]
  size_t nc; // [rsp+38h] [rbp-2B8h]
  char *nh; // [rsp+38h] [rbp-2B8h]
  char v261; // [rsp+40h] [rbp-2B0h]
  char v262; // [rsp+40h] [rbp-2B0h]
  char v263; // [rsp+40h] [rbp-2B0h]
  __int64 *v264; // [rsp+40h] [rbp-2B0h]
  char v265; // [rsp+40h] [rbp-2B0h]
  char v266; // [rsp+40h] [rbp-2B0h]
  char v267; // [rsp+40h] [rbp-2B0h]
  char v268; // [rsp+40h] [rbp-2B0h]
  char v269; // [rsp+40h] [rbp-2B0h]
  char v270; // [rsp+40h] [rbp-2B0h]
  char v271; // [rsp+40h] [rbp-2B0h]
  char v272; // [rsp+40h] [rbp-2B0h]
  char v273; // [rsp+40h] [rbp-2B0h]
  _QWORD *v274; // [rsp+48h] [rbp-2A8h]
  const char *v275; // [rsp+48h] [rbp-2A8h]
  __m128i v276; // [rsp+50h] [rbp-2A0h] BYREF
  __int64 v277; // [rsp+60h] [rbp-290h]
  __int64 v278; // [rsp+70h] [rbp-280h] BYREF
  __int64 v279; // [rsp+78h] [rbp-278h] BYREF
  const char *v280; // [rsp+80h] [rbp-270h] BYREF
  __int128 v281; // [rsp+88h] [rbp-268h]
  char *s1; // [rsp+A0h] [rbp-250h] BYREF
  __int128 v283; // [rsp+A8h] [rbp-248h]
  __int128 v284; // [rsp+B8h] [rbp-238h]
  __int64 v285; // [rsp+C8h] [rbp-228h]
  int v286; // [rsp+D0h] [rbp-220h]
  __m128i v287[9]; // [rsp+E0h] [rbp-210h] BYREF
  __m128i v288; // [rsp+170h] [rbp-180h] BYREF
  __int64 v289; // [rsp+180h] [rbp-170h]
  __m128i v290; // [rsp+190h] [rbp-160h] BYREF
  __int64 v291; // [rsp+1A0h] [rbp-150h]
  __m128i v292; // [rsp+1B0h] [rbp-140h] BYREF
  __int64 v293; // [rsp+1C0h] [rbp-130h]
  __m128i v294; // [rsp+1D0h] [rbp-120h] BYREF
  __int64 v295; // [rsp+1E0h] [rbp-110h]
  __m128i v296; // [rsp+1F0h] [rbp-100h] BYREF
  __int64 v297; // [rsp+200h] [rbp-F0h]
  __m128i v298; // [rsp+210h] [rbp-E0h] BYREF
  __int64 v299; // [rsp+220h] [rbp-D0h]
  __m128i v300; // [rsp+230h] [rbp-C0h] BYREF
  __int64 v301; // [rsp+240h] [rbp-B0h]
  __m128i v302; // [rsp+250h] [rbp-A0h] BYREF
  __int64 v303; // [rsp+260h] [rbp-90h]
  __m128i v304; // [rsp+270h] [rbp-80h] BYREF
  __int64 v305; // [rsp+280h] [rbp-70h]
  __m128i v306; // [rsp+290h] [rbp-60h] BYREF
  __m128i v307; // [rsp+2A0h] [rbp-50h] BYREF
  unsigned __int64 v308; // [rsp+2B8h] [rbp-38h]

  v274 = a1;
  v11 = a10.m128i_i32[0];
  v308 = __readfsqword(0x28u);
  v12 = (__int64 *)a2;
  switch ( a10.m128i_i32[0] )
  {
    case 0:
    case 2:
    case 0xB6:
      a2 = (_BYTE *)(&dword_0 + 1);
      tinfo = create_tinfo(a1, 1, 7, 0);
      goto LABEL_4;
    case 1:
      sub_C150((__int64)&s1);
      if ( !(_QWORD)v283 )
        goto LABEL_154;
      v22 = s1;
      if ( !strcmp(s1, "decltype(nullptr)") )
      {
        if ( *((_QWORD *)&v283 + 1) <= 0xEu )
        {
          s1 = (char *)qvector_reserve(&s1, v22, 15, 1);
          v22 = s1;
        }
        *(_QWORD *)&v283 = 15;
        qmemcpy(v22, "std::nullptr_t", 14);
        v22 = s1;
        s1[14] = 0;
        if ( !(_QWORD)v283 )
LABEL_154:
          v22 = (char *)::s1;
      }
      a10.m128i_i32[0] = 1;
      v23 = &off_28B40;
      v24 = _mm_loadu_si128(&a10);
      v307.m128i_i64[0] = a11;
      v306 = v24;
      while ( strcmp(*v23, v22) || (unsigned int)get_named_type(*(_QWORD *)a2, v22, 1, 0, 0, 0, 0, 0, 0) )
      {
        if ( ++v23 == (char **)&unk_28B80 )
          goto LABEL_155;
      }
      if ( (unsigned __int8)sub_BBA0((__int64)a1, 1) )
        goto LABEL_23;
LABEL_155:
      v191 = (char *)::s1;
      if ( (_QWORD)v283 )
        v191 = s1;
      idati = *(_QWORD *)a2;
      v287[0].m128i_i64[1] = (__int64)v191;
      v287[1].m128i_i16[0] = 0;
      if ( !idati )
        idati = get_idati();
      v287[0].m128i_i64[0] = idati;
      create_tinfo(a1, 61, 61, v287);
LABEL_23:
      if ( s1 )
      {
        *(_QWORD *)&v283 = 0;
        qfree(s1);
      }
      goto LABEL_25;
    case 3:
      a2 = &byte_8;
      tinfo = create_tinfo(a1, 8, 7, 0);
      goto LABEL_4;
    case 4:
    case 5:
      a2 = (_BYTE *)(&qword_20 + 2);
      tinfo = create_tinfo(a1, 34, 7, 0);
      goto LABEL_4;
    case 6:
    case 7:
    case 0xF:
    case 0x10:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x1A:
    case 0x1F:
    case 0xB1:
      a2 = (_BYTE *)(&dword_0 + 1);
      tinfo = sub_BBA0((__int64)a1, 1);
      goto LABEL_4;
    case 8:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0x1E:
      a2 = nullptr;
      tinfo = sub_BBA0((__int64)a1, 0);
      goto LABEL_4;
    case 9:
      a2 = (_BYTE *)(&qword_20 + 7);
      tinfo = create_tinfo(a1, 39, 7, 0);
      goto LABEL_4;
    case 0xD:
    case 0xE:
      a2 = (_BYTE *)(&dword_30 + 2);
      tinfo = create_tinfo(a1, 50, 7, 0);
      goto LABEL_4;
    case 0x11:
      a2 = &byte_7;
      tinfo = create_tinfo(a1, 7, 7, 0);
      goto LABEL_4;
    case 0x15:
      a2 = byte_9;
      tinfo = create_tinfo(a1, 9, 7, 0);
      goto LABEL_4;
    case 0x16:
      a2 = (_BYTE *)(&qword_18 + 1);
      tinfo = create_tinfo(a1, 25, 7, 0);
      goto LABEL_4;
    case 0x17:
      a2 = (_BYTE *)(&qword_28 + 1);
      tinfo = create_tinfo(a1, 41, 7, 0);
      goto LABEL_4;
    case 0x1B:
    case 0xA2:
      goto LABEL_2;
    case 0x1C:
      v13 = *(_QWORD *)a2;
      v287[1].m128i_i16[0] = 256;
      v287[0].m128i_i64[1] = (__int64)"Class";
      if ( !v13 )
        goto LABEL_80;
      goto LABEL_3;
    case 0x1D:
      v13 = *(_QWORD *)a2;
      v287[1].m128i_i16[0] = 256;
      v287[0].m128i_i64[1] = (__int64)"SEL";
      if ( !v13 )
        goto LABEL_80;
      goto LABEL_3;
    case 0x64:
      v142 = _mm_loadu_si128(&a10);
      v280 = nullptr;
      v305 = a11;
      v304 = v142;
      *(_QWORD *)&v281 = 0x200000000LL;
      v143 = sub_BB20();
      sub_A7A0((__int64)&v306, v143, v144, v145, v146, v147, (__int128)_mm_load_si128(&v304), v305);
      if ( !(unsigned __int8)sub_138E0(
                               (unsigned int)&v280,
                               (_DWORD)a2,
                               v148,
                               v149,
                               v150,
                               v151,
                               (__int128)_mm_load_si128(&v306),
                               v307.m128i_i64[0])
        || (a2 = (_BYTE *)(&dword_0 + 2), (get_tinfo_property(v280, 2) & 0xF) != 9) )
      {
        clear_tinfo_t(&v280);
        goto LABEL_5;
      }
      a2 = (_BYTE *)(&dword_0 + 2);
      s1 = nullptr;
      v283 = 0;
      v152 = get_tinfo_property(v280, 2) & 0x3F;
      v153 = s1;
      switch ( v152 )
      {
        case 25:
          if ( *((_QWORD *)&v283 + 1) <= 0x10u )
          {
            s1 = (char *)qvector_reserve(&s1, s1, 17, 1);
            v153 = s1;
          }
          *(_QWORD *)&v283 = 17;
          *(__m128i *)v153 = _mm_load_si128((const __m128i *)&xmmword_223D0);
          s1[16] = 0;
          break;
        case 41:
          if ( *((_QWORD *)&v283 + 1) <= 0x15u )
          {
            s1 = (char *)qvector_reserve(&s1, s1, 22, 1);
            v153 = s1;
          }
          *(_QWORD *)&v283 = 22;
          *(__m128i *)v153 = _mm_load_si128((const __m128i *)&xmmword_223E0);
          *(_QWORD *)(v153 + 13) = 0x656C62756F645F67LL;
          s1[21] = 0;
          break;
        case 9:
          if ( *((_QWORD *)&v283 + 1) <= 0xFu )
          {
            s1 = (char *)qvector_reserve(&s1, s1, 16, 1);
            v153 = s1;
          }
          *(_QWORD *)&v283 = 16;
          qmemcpy(v153, "__complex_float", 15);
          s1[15] = 0;
          break;
        default:
          v156 = 0;
          goto LABEL_118;
      }
      v154 = (char *)::s1;
      if ( (_QWORD)v283 )
        v154 = s1;
      if ( v154 )
      {
        v155 = *v12;
        v287[0].m128i_i64[1] = (__int64)v154;
        v287[1].m128i_i16[0] = 256;
        if ( !v155 )
          v155 = get_idati();
        a2 = (_BYTE *)(&word_3C + 1);
        v287[0].m128i_i64[0] = v155;
        v156 = create_tinfo(v274, 61, 61, v287);
        if ( v156 )
          goto LABEL_117;
      }
      memset(v287, 0, 48);
      v287[3].m128i_i32[0] = 16777217;
      v235 = sub_BB20();
      v236 = sub_AAD0(v235);
      v287[3].m128i_i8[1] = log2floor(v236) + 1;
      v237 = v287[0].m128i_i64[1];
      if ( v287[1].m128i_i64[0] < (unsigned __int64)(v287[0].m128i_i64[1] + 1) )
      {
        v287[0].m128i_i64[0] = qvector_reserve(v287, v287[0].m128i_i64[0], v287[0].m128i_i64[1] + 1, 144);
        v237 = v287[0].m128i_i64[1];
      }
      v238 = v287[0].m128i_i64[0] + 144 * v237;
      *(_QWORD *)(v238 + 16) = 0;
      *(_QWORD *)(v238 + 40) = 0;
      *(_QWORD *)(v238 + 112) = 1;
      *(_DWORD *)(v238 + 120) = -1;
      *(_QWORD *)(v238 + 128) = 0;
      *(_BYTE *)(v238 + 136) = 0;
      *(_OWORD *)v238 = 0;
      *(_OWORD *)(v238 + 24) = 0;
      *(_OWORD *)(v238 + 48) = 0;
      *(_OWORD *)(v238 + 64) = 0;
      ++v287[0].m128i_i64[1];
      v239 = (_BYTE *)qvector_reserve(v238 + 16, 0, 2, 1);
      *(_QWORD *)(v238 + 16) = v239;
      *(_QWORD *)(v238 + 24) = 2;
      *v239 = 99;
      *(_BYTE *)(*(_QWORD *)(v238 + 16) + 1LL) = 0;
      create_tinfo(v238 + 64, 11, 11, &v280);
      v156 = create_tinfo(v274, 29, 13, v287);
      if ( v156 )
      {
        v240 = (char *)::s1;
        if ( (_QWORD)v283 )
          v240 = s1;
        v156 = (unsigned int)sub_EB50(v274, v240, v12, 1u, nullptr) == 0;
      }
      a2 = (const char *)v287[0].m128i_i64[0];
      if ( !v287[0].m128i_i64[0] )
      {
LABEL_117:
        v153 = s1;
      }
      else
      {
        if ( v287[0].m128i_i64[1] )
        {
          v272 = v156;
          v241 = v287[0].m128i_i64[1];
          nc = (size_t)v274;
          v242 = v12;
          for ( i = 0; i != v241; ++i )
          {
            v275 = &a2[144 * i];
            clear_tinfo_t(v275 + 64);
            v244 = *((_QWORD *)v275 + 5);
            if ( v244 )
            {
              *((_QWORD *)v275 + 6) = 0;
              qfree(v244);
            }
            v245 = *((_QWORD *)v275 + 2);
            if ( v245 )
            {
              *((_QWORD *)v275 + 3) = 0;
              qfree(v245);
            }
            a2 = (const char *)v287[0].m128i_i64[0];
          }
          v156 = v272;
          v12 = v242;
          v274 = (_QWORD *)nc;
        }
        v273 = v156;
        v287[0].m128i_i64[1] = 0;
        qfree(a2);
        v153 = s1;
        v156 = v273;
      }
LABEL_118:
      if ( v153 )
      {
        v267 = v156;
        *(_QWORD *)&v283 = 0;
        qfree(v153);
        v156 = v267;
      }
      v268 = v156;
      clear_tinfo_t(&v280);
      tinfo = v268;
      goto LABEL_4;
    case 0x65:
    case 0x67:
    case 0x68:
      v41 = sub_BB20();
      sub_A650((__int64)&v288, v41, v42, v43, v44, v45, (__int128)_mm_loadu_si128(&a10), a11);
      if ( !(unsigned __int8)sub_138E0(
                               (_DWORD)a1,
                               (_DWORD)a2,
                               v46,
                               v47,
                               v48,
                               v49,
                               (__int128)_mm_load_si128(&v288),
                               v289) )
        goto LABEL_5;
      s1 = nullptr;
      v280 = nullptr;
      v287[0] = 0;
      copy_tinfo_t(&v287[0].m128i_u64[1], &v280);
      v287[1].m128i_i64[0] = 0;
      copy_tinfo_t(&v287[1], &s1);
      v287[1].m128i_i32[2] = 0;
      v287[1].m128i_i16[6] = 0;
      clear_tinfo_t(&v280);
      clear_tinfo_t(&s1);
      copy_tinfo_t(v287, a1);
      a2 = byte_9 + 1;
      v50 = create_tinfo(a1, 10, 10, v287);
      clear_tinfo_t(&v287[1]);
      clear_tinfo_t(&v287[0].m128i_u64[1]);
      clear_tinfo_t(v287);
      if ( !v50 )
        goto LABEL_5;
      goto LABEL_25;
    case 0x66:
      a2 = &byte_7;
      tinfo = get_stock_tinfo(a1, 7);
      goto LABEL_4;
    case 0x69:
    case 0x6A:
    case 0x6B:
    case 0x76:
      v280 = nullptr;
      v281 = 0;
      v37 = (__int128)_mm_loadu_si128(&a10);
      if ( (unsigned __int8)sub_D270((__int64)&v280, *(double *)&v37, a8, (__int64)a2, a3, a4, a5, a6, v37, a11) )
      {
        v38 = ::s1;
        if ( (_QWORD)v281 )
          v38 = v280;
        if ( v38 )
        {
          v39 = *(_QWORD *)a2;
          v287[0].m128i_i64[1] = (__int64)v38;
          v287[1].m128i_i16[0] = 256;
          if ( !v39 )
            v39 = get_idati();
          a2 = (_BYTE *)(&word_3C + 1);
          v287[0].m128i_i64[0] = v39;
          tinfo = create_tinfo(a1, 61, 61, v287);
          if ( tinfo )
            goto LABEL_47;
        }
      }
      v157 = sub_BB20();
      sub_A6E0((__int64)&v306, v157, v158, v159, v160, v161, (__int128)_mm_loadu_si128(&a10), a11);
      if ( v306.m128i_i32[0] == 71 )
      {
        a2 = (_BYTE *)(&dword_0 + 1);
        tinfo = create_tinfo(a1, 1, 7, 0);
LABEL_47:
        v40 = v280;
        if ( v280 )
          goto LABEL_48;
      }
      else
      {
        a2 = (const char *)v12;
        v166 = sub_18660(
                 (_DWORD)a1,
                 (_DWORD)v12,
                 v162,
                 v163,
                 v164,
                 v165,
                 (__int128)_mm_load_si128(&v306),
                 (__int128)_mm_load_si128(&v307));
        if ( v166 )
        {
          if ( v166 == 2 )
          {
            sub_10160(
              (__int64)v287,
              (__int64)v12,
              v15,
              v16,
              v17,
              v18,
              (__int128)_mm_load_si128(&v306),
              (__int128)_mm_load_si128(&v307));
            v171 = ::s1;
            if ( v287[0].m128i_i64[1] )
              v171 = (const char *)v287[0].m128i_i64[0];
            sub_E8A0((__int64)&s1, (__int64)v12, v167, v168, v169, v170, (__int128)_mm_loadu_si128(&a10));
            v172 = (char *)::s1;
            if ( (_QWORD)v283 )
              v172 = s1;
            a2 = "CXType %s references an unhandled node: %s";
            sub_67C0(v12 + 10, (__int64)"CXType %s references an unhandled node: %s", v172, v171);
            if ( s1 )
            {
              *(_QWORD *)&v283 = 0;
              qfree(s1);
            }
            if ( v287[0].m128i_i64[0] )
            {
              v287[0].m128i_i64[1] = 0;
              qfree(v287[0].m128i_i64[0]);
            }
            ++v12[17];
          }
          tinfo = 0;
        }
        else
        {
          tinfo = 1;
        }
        v40 = v280;
        if ( v280 )
        {
LABEL_48:
          v261 = tinfo;
          *(_QWORD *)&v281 = 0;
          qfree(v40);
          tinfo = v261;
        }
      }
LABEL_4:
      if ( tinfo )
      {
LABEL_25:
        v25 = sub_BB20();
        a10.m128i_i32[0] = v11;
        if ( (unsigned int)sub_A9B0(v25) && (unsigned __int8)*v274 )
          *v274 |= 0x40uLL;
        return 1;
      }
      else
      {
LABEL_5:
        if ( (unsigned __int64)v12[11] <= 1 )
        {
          a10.m128i_i32[0] = v11;
          sub_E8A0((__int64)v287, (__int64)a2, v15, v16, v17, v18, (__int128)_mm_loadu_si128(&a10));
          v20 = ::s1;
          if ( v287[0].m128i_i64[1] )
            v20 = (const char *)v287[0].m128i_i64[0];
          sub_67C0(v12 + 10, (__int64)"failed to convert type info for \"%s\"", v20);
          if ( v287[0].m128i_i64[0] )
          {
            v287[0].m128i_i64[1] = 0;
            qfree(v287[0].m128i_i64[0]);
          }
          ++v12[17];
        }
        return 0;
      }
    case 0x6C:
    case 0xA1:
      v51 = (__int128)_mm_loadu_si128(&a10);
      v52 = (__int64 *)a2;
      a2 = (const char *)a1;
      tinfo = sub_FFD0(0, a1, 13, v52, a5, a6, *(double *)&v51, a8, v51, a11);
      goto LABEL_4;
    case 0x6D:
      v116 = sub_BB20();
      a10.m128i_i32[0] = 109;
      sub_A650((__int64)&v292, v116, v117, v118, v119, v120, (__int128)_mm_loadu_si128(&a10), a11);
      if ( (unsigned __int8)sub_138E0(
                              (_DWORD)a1,
                              (_DWORD)a2,
                              v121,
                              v122,
                              v123,
                              v124,
                              (__int128)_mm_load_si128(&v292),
                              v293) )
      {
        s1 = nullptr;
        v280 = nullptr;
        v287[0] = 0;
        copy_tinfo_t(&v287[0].m128i_u64[1], &v280);
        v287[1].m128i_i64[0] = 0;
        copy_tinfo_t(&v287[1], &s1);
        v287[1].m128i_i32[2] = 0;
        v287[1].m128i_i16[6] = 0;
        clear_tinfo_t(&v280);
        clear_tinfo_t(&s1);
        copy_tinfo_t(v287, a1);
        a2 = byte_9 + 1;
        v266 = create_tinfo(a1, 10, 10, v287);
        clear_tinfo_t(&v287[1]);
        clear_tinfo_t(&v287[0].m128i_u64[1]);
        clear_tinfo_t(v287);
        tinfo = v266;
      }
      else
      {
LABEL_2:
        v13 = *(_QWORD *)a2;
        v287[1].m128i_i16[0] = 256;
        v287[0].m128i_i64[1] = (__int64)"id";
        if ( !v13 )
LABEL_80:
          v13 = get_idati();
LABEL_3:
        a2 = (_BYTE *)(&word_3C + 1);
        v287[0].m128i_i64[0] = v13;
        tinfo = create_tinfo(a1, 61, 61, v287);
      }
      goto LABEL_4;
    case 0x6E:
    case 0x6F:
      memset(v287, 0, 88);
      v74 = (__int128)_mm_loadu_si128(&a10);
      v287[5].m128i_i8[8] = 16;
      v75 = sub_CAD0((__int64)a1, (int)a2, a3, a4, a5, a6, v74, a11);
      v287[1].m128i_i32[3] = 0;
      v287[5].m128i_i8[8] = v75 | v287[5].m128i_i8[8] & 0xF;
      v76 = sub_BB20();
      sub_A830((__int64)&v296, v76, v77, v78, v79, v80, (__int128)_mm_loadu_si128(&a10), a11);
      if ( (unsigned __int8)sub_138E0(
                              (unsigned int)&v287[2],
                              (_DWORD)a2,
                              v81,
                              v82,
                              v83,
                              v84,
                              (__int128)_mm_load_si128(&v296),
                              v297) )
      {
        v85 = sub_BB20();
        n = sub_A8C0(v85, (int)a2, v86, v87, v88, v89, (__int128)_mm_loadu_si128(&a10), a11);
        v90 = 0;
        if ( n <= 0 )
        {
LABEL_65:
          a2 = byte_9 + 3;
          v101 = create_tinfo(a1, 12, 12, v287);
        }
        else
        {
          while ( 1 )
          {
            v91 = v287[0];
            if ( v287[1].m128i_i64[0] < (unsigned __int64)(v287[0].m128i_i64[1] + 1) )
            {
              v287[0].m128i_i64[0] = qvector_reserve(v287, v287[0].m128i_i64[0], v287[0].m128i_i64[1] + 1, 80);
              v91 = v287[0];
            }
            v92 = v91.m128i_i64[0] + 80 * v91.m128i_i64[1];
            *(_DWORD *)v92 = 0;
            *(_QWORD *)(v92 + 8) = 0;
            *(_QWORD *)(v92 + 16) = 0;
            *(_QWORD *)(v92 + 40) = 0;
            *(_QWORD *)(v92 + 64) = 0;
            *(_DWORD *)(v92 + 72) = 0;
            *(_OWORD *)(v92 + 24) = 0;
            *(_OWORD *)(v92 + 48) = 0;
            ++v287[0].m128i_i64[1];
            v93 = sub_BB20();
            a10.m128i_i32[0] = v11;
            sub_A8F0((__int64)&v298, v93, v90, v94, v95, v96, (__int128)_mm_loadu_si128(&a10), a11);
            a2 = (const char *)v12;
            v101 = sub_138E0((int)v92 + 64, (_DWORD)v12, v97, v98, v99, v100, (__int128)_mm_load_si128(&v298), v299);
            if ( !v101 )
              break;
            if ( n == ++v90 )
              goto LABEL_65;
          }
        }
        if ( v287[4].m128i_i64[0] )
        {
          v262 = v101;
          v287[4].m128i_i64[1] = 0;
          qfree(v287[4].m128i_i64[0]);
          v101 = v262;
        }
        v263 = v101;
        cleanup_argloc(&v287[2].m128i_u64[1]);
        clear_tinfo_t(&v287[2]);
        v102 = v287[0].m128i_i64[0];
        tinfo = v263;
        if ( v287[0].m128i_i64[0] )
        {
          v103 = v287[0].m128i_i64[1];
          v104 = 0;
          if ( v287[0].m128i_i64[1] )
          {
            v264 = v12;
            v105 = tinfo;
            do
            {
              v106 = (_QWORD *)(v102 + 80 * v104);
              clear_tinfo_t(v106 + 8);
              v107 = v106[5];
              if ( v107 )
              {
                v106[6] = 0;
                qfree(v107);
              }
              v108 = v106[2];
              if ( v108 )
              {
                v106[3] = 0;
                qfree(v108);
              }
              ++v104;
              cleanup_argloc(v106);
              v102 = v287[0].m128i_i64[0];
            }
            while ( v103 != v104 );
            v12 = v264;
            tinfo = v105;
          }
          v265 = tinfo;
          v287[0].m128i_i64[1] = 0;
          qfree(v102);
          tinfo = v265;
        }
        goto LABEL_4;
      }
      if ( v287[4].m128i_i64[0] )
      {
        v287[4].m128i_i64[1] = 0;
        qfree(v287[4].m128i_i64[0]);
      }
      cleanup_argloc(&v287[2].m128i_u64[1]);
      clear_tinfo_t(&v287[2]);
      goto LABEL_5;
    case 0x70:
    case 0x72:
    case 0x73:
    case 0x74:
      v287[0] = 0u;
      v27 = 0;
      if ( a10.m128i_i32[0] == 112 )
      {
        v215 = sub_BB20();
        a10.m128i_i32[0] = 112;
        v27 = sub_A770(v215, (int)a2, v216, v217, v218, v219, (__int128)_mm_loadu_si128(&a10), a11);
      }
      v287[0].m128i_i32[3] = v27;
      v28 = sub_BB20();
      a10.m128i_i32[0] = v11;
      sub_A7A0((__int64)&v294, v28, v29, v30, v31, v32, (__int128)_mm_loadu_si128(&a10), a11);
      if ( !(unsigned __int8)sub_138E0(
                               (unsigned int)v287,
                               (_DWORD)a2,
                               v33,
                               v34,
                               v35,
                               v36,
                               (__int128)_mm_load_si128(&v294),
                               v295) )
      {
        clear_tinfo_t(v287);
        goto LABEL_5;
      }
      a2 = byte_9 + 2;
      v269 = create_tinfo(a1, 11, 11, v287);
      clear_tinfo_t(v287);
      tinfo = v269;
      goto LABEL_4;
    case 0x71:
    case 0xB0:
      v59 = _mm_loadu_si128(&a10);
      s1 = nullptr;
      *(_QWORD *)&v283 = 0;
      v307.m128i_i64[0] = a11;
      v306 = v59;
      v60 = sub_BB20();
      DWORD1(v283) = sub_A770(v60, (int)a2, v61, v62, v63, v64, (__int128)_mm_load_si128(&v306), v307.m128i_i64[0]);
      v65 = sub_BB20();
      sub_A7A0((__int64)&v304, v65, v66, v67, v68, v69, (__int128)_mm_load_si128(&v306), v307.m128i_i64[0]);
      if ( !(unsigned __int8)sub_138E0(
                               (unsigned int)&s1,
                               (_DWORD)a2,
                               v70,
                               v71,
                               v72,
                               v73,
                               (__int128)_mm_load_si128(&v304),
                               v305) )
      {
        clear_tinfo_t(&s1);
        goto LABEL_5;
      }
      memset(v287, 0, 48);
      v287[3].m128i_i32[0] = 16777217;
      v193 = sub_BB20();
      v194 = sub_AAD0(v193);
      v287[3].m128i_i8[1] = log2floor(v194) + 1;
      tinfo_property = get_tinfo_property(s1, 2);
      if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
      {
        v205 = v287[0];
        if ( v287[1].m128i_i64[0] < (unsigned __int64)(v287[0].m128i_i64[1] + 1) )
        {
          v287[0].m128i_i64[0] = qvector_reserve(v287, v287[0].m128i_i64[0], v287[0].m128i_i64[1] + 1, 144);
          v205 = v287[0];
        }
        v206 = v205.m128i_i64[0] + 144 * v205.m128i_i64[1];
        *(_QWORD *)(v206 + 16) = 0;
        *(_QWORD *)(v206 + 40) = 0;
        *(_QWORD *)(v206 + 112) = 1;
        *(_DWORD *)(v206 + 120) = -1;
        *(_QWORD *)(v206 + 128) = 0;
        *(_BYTE *)(v206 + 136) = 0;
        *(_OWORD *)v206 = 0;
        *(_OWORD *)(v206 + 24) = 0;
        *(_OWORD *)(v206 + 48) = 0;
        *(_OWORD *)(v206 + 64) = 0;
        ++v287[0].m128i_i64[1];
        tinfo_size = get_tinfo_size(0, s1, 0);
        sub_67C0((__int64 *)(v206 + 16), (__int64)"f%d", 8 * tinfo_size);
        if ( !(unsigned __int8)create_tinfo(v206 + 64, 11, 11, &s1) )
          goto LABEL_184;
      }
      if ( (get_tinfo_property(s1, 2) & 0x3F) == 0x19 )
        goto LABEL_200;
      v196 = sub_BB20();
      v197 = sub_AD40(v196);
      if ( v197 < 0 )
        goto LABEL_184;
      v250 = 1;
      na = 8 * v197;
      if ( 8 * v197 > 8 )
        goto LABEL_168;
LABEL_199:
      v250 = 0;
      if ( na > 8 )
      {
LABEL_168:
        while ( 1 )
        {
          v198 = 8;
          for ( j = v250 == 0 ? 34 : 2; ; j = v250 == 0 ? 38 : 6 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  DWORD1(v283) = na / v198;
                  v200 = create_tinfo(&s1, j, 7, 0);
                  a2 = (const char *)v287[0].m128i_i64[0];
                  v201 = v287[0].m128i_i64[0];
                  if ( !v200 )
                    goto LABEL_185;
                  v202 = v287[0].m128i_i64[1];
                  if ( v287[1].m128i_i64[0] < (unsigned __int64)(v287[0].m128i_i64[1] + 1) )
                  {
                    v287[0].m128i_i64[0] = qvector_reserve(v287, v287[0].m128i_i64[0], v287[0].m128i_i64[1] + 1, 144);
                    v202 = v287[0].m128i_i64[1];
                    v201 = v287[0].m128i_i64[0];
                  }
                  v203 = 144 * v202 + v201;
                  *(_QWORD *)(v203 + 16) = 0;
                  *(_QWORD *)(v203 + 112) = 1;
                  *(_QWORD *)(v203 + 40) = 0;
                  *(_DWORD *)(v203 + 120) = -1;
                  *(_QWORD *)(v203 + 128) = 0;
                  *(_BYTE *)(v203 + 136) = 0;
                  *(_OWORD *)v203 = 0;
                  *(_OWORD *)(v203 + 24) = 0;
                  *(_OWORD *)(v203 + 48) = 0;
                  *(_OWORD *)(v203 + 64) = 0;
                  v251 = v203;
                  ++v287[0].m128i_i64[1];
                  sub_67C0((__int64 *)(v203 + 16), (__int64)"%c%d", (v250 & 1) == 0 ? 117 : 105, v198);
                  if ( !(unsigned __int8)create_tinfo(v251 + 64, 11, 11, &s1) )
                  {
LABEL_184:
                    a2 = (const char *)v287[0].m128i_i64[0];
LABEL_185:
                    v208 = 0;
                    goto LABEL_186;
                  }
                  v198 *= 2;
                  if ( na <= v198 )
                    goto LABEL_222;
                  if ( na % v198 )
                  {
                    if ( !v250 )
                      goto LABEL_200;
                    goto LABEL_199;
                  }
                  if ( v198 != 32 )
                    break;
                  j = v250 == 0 ? 36 : 4;
                }
                if ( v198 > 32 )
                  break;
                v198 = 16;
                j = v250 == 0 ? 35 : 3;
              }
              if ( v198 != 64 )
                break;
              j = v250 == 0 ? 37 : 5;
            }
            if ( v198 != 128 )
              break;
          }
LABEL_222:
          if ( !v250 )
            break;
          v250 = 0;
        }
      }
LABEL_200:
      v208 = create_tinfo(a1, 29, 13, v287);
      a2 = (const char *)v287[0].m128i_i64[0];
LABEL_186:
      if ( a2 )
      {
        v209 = v287[0].m128i_i64[1];
        if ( v287[0].m128i_i64[1] )
        {
          nb = (size_t)v12;
          v210 = 0;
          v211 = v208;
          do
          {
            v212 = &a2[144 * v210];
            clear_tinfo_t(v212 + 64);
            v213 = *((_QWORD *)v212 + 5);
            if ( v213 )
            {
              *((_QWORD *)v212 + 6) = 0;
              qfree(v213);
            }
            v214 = *((_QWORD *)v212 + 2);
            if ( v214 )
            {
              *((_QWORD *)v212 + 3) = 0;
              qfree(v214);
            }
            ++v210;
            a2 = (const char *)v287[0].m128i_i64[0];
          }
          while ( v209 != v210 );
          v12 = (__int64 *)nb;
          v208 = v211;
        }
        nf = v208;
        v287[0].m128i_i64[1] = 0;
        qfree(a2);
        v208 = nf;
      }
      ng = v208;
      clear_tinfo_t(&s1);
      tinfo = ng;
      goto LABEL_4;
    case 0x75:
      s1 = nullptr;
      memset(v287, 0, sizeof(v287));
      v285 = 0;
      v286 = 1;
      v287[7].m128i_i64[0] = 1;
      v287[7].m128i_i32[2] = -1;
      v283 = 0;
      v284 = 0;
      v109 = (char *)qvector_reserve(&s1, 0, 2, 144);
      s1 = v109;
      v110 = 144 * v283;
      if ( (unsigned __int64)v283 <= 1 )
      {
        while ( 1 )
        {
          si128 = _mm_load_si128(v287);
          v114 = &v109[v110];
          *((_QWORD *)v114 + 2) = 0;
          *(__m128i *)v114 = si128;
          *(_OWORD *)(v114 + 24) = 0;
          if ( v287[1].m128i_i64[1] )
          {
            ne = v287[1].m128i_i64[1];
            v115 = (void *)qalloc_or_throw(v287[1].m128i_i64[1]);
            *((_QWORD *)v114 + 2) = v115;
            *((_QWORD *)v114 + 4) = ne;
            memcpy(v115, (const void *)v287[1].m128i_i64[0], ne);
            *((_QWORD *)v114 + 3) = ne;
          }
          *((_QWORD *)v114 + 5) = 0;
          *((_OWORD *)v114 + 3) = 0;
          if ( v287[3].m128i_i64[0] )
          {
            nd = v287[3].m128i_i64[0];
            v204 = (void *)qalloc_or_throw(v287[3].m128i_i64[0]);
            *((_QWORD *)v114 + 5) = v204;
            *((_QWORD *)v114 + 7) = nd;
            memcpy(v204, (const void *)v287[2].m128i_i64[1], nd);
            *((_QWORD *)v114 + 6) = nd;
          }
          *((_QWORD *)v114 + 8) = 0;
          copy_tinfo_t(v114 + 64, &v287[4]);
          v111 = v287[7].m128i_i64[1];
          *(__m128i *)(v114 + 72) = _mm_loadu_si128((const __m128i *)&v287[4].m128i_u64[1]);
          v112 = _mm_loadu_si128((const __m128i *)&v287[5].m128i_u64[1]);
          *((_QWORD *)v114 + 15) = v111;
          *(__m128i *)(v114 + 88) = v112;
          *(__m128i *)(v114 + 104) = _mm_loadu_si128((const __m128i *)&v287[6].m128i_u64[1]);
          *((_QWORD *)v114 + 16) = v287[8].m128i_i64[0];
          v114[136] = v287[8].m128i_i8[8];
          if ( v110 )
            break;
          v109 = s1;
          v110 = 144;
        }
      }
      *(_QWORD *)&v283 = 2;
      clear_tinfo_t(&v287[4]);
      if ( v287[2].m128i_i64[1] )
      {
        v287[3].m128i_i64[0] = 0;
        qfree(v287[2].m128i_i64[1]);
      }
      if ( v287[1].m128i_i64[0] )
      {
        v287[1].m128i_i64[1] = 0;
        qfree(v287[1].m128i_i64[0]);
      }
      v173 = s1;
      v174 = *((_QWORD *)s1 + 2);
      if ( *((_QWORD *)s1 + 4) <= 3u )
      {
        v220 = qvector_reserve(s1 + 16, v174, 4, 1);
        *((_QWORD *)v173 + 2) = v220;
        v174 = v220;
      }
      *((_QWORD *)v173 + 3) = 4;
      *(_WORD *)v174 = 29808;
      *(_BYTE *)(v174 + 2) = 114;
      *(_BYTE *)(*((_QWORD *)v173 + 2) + 3LL) = 0;
      v278 = 0;
      v175 = sub_BB20();
      a10.m128i_i32[0] = 117;
      sub_A650((__int64)&v290, v175, v176, v177, v178, v179, (__int128)_mm_loadu_si128(&a10), a11);
      a2 = (const char *)v12;
      if ( !(unsigned __int8)sub_138E0(
                               (unsigned int)&v278,
                               (_DWORD)v12,
                               v180,
                               v181,
                               v182,
                               v183,
                               (__int128)_mm_load_si128(&v290),
                               v291) )
        goto LABEL_145;
      v280 = nullptr;
      v287[0] = 0;
      v249 = s1 + 64;
      v279 = 0;
      copy_tinfo_t(&v287[0].m128i_u64[1], &v279);
      v287[1].m128i_i64[0] = 0;
      copy_tinfo_t(&v287[1], &v280);
      v287[1].m128i_i32[2] = 0;
      v287[1].m128i_i16[6] = 0;
      clear_tinfo_t(&v279);
      clear_tinfo_t(&v280);
      copy_tinfo_t(v287, &v278);
      a2 = byte_9 + 1;
      v184 = create_tinfo(v249, 10, 10, v287);
      clear_tinfo_t(&v287[1]);
      clear_tinfo_t(&v287[0].m128i_u64[1]);
      clear_tinfo_t(v287);
      if ( !v184 )
        goto LABEL_145;
      v221 = s1;
      v222 = *((_QWORD *)s1 + 20);
      if ( *((_QWORD *)s1 + 22) <= 3u )
      {
        v246 = qvector_reserve(s1 + 160, v222, 4, 1);
        *((_QWORD *)v221 + 20) = v246;
        v222 = v246;
      }
      *((_QWORD *)v221 + 21) = 4;
      *(_WORD *)v222 = 25697;
      *(_BYTE *)(v222 + 2) = 106;
      *(_BYTE *)(*((_QWORD *)v221 + 20) + 3LL) = 0;
      v287[1].m128i_i16[0] = 256;
      v223 = s1 + 208;
      v224 = *v12;
      v287[0].m128i_i64[1] = (__int64)"size_t";
      if ( !v224 )
      {
        nh = s1 + 208;
        v224 = get_idati();
        v223 = nh;
      }
      a2 = (_BYTE *)(&word_3C + 1);
      v287[0].m128i_i64[0] = v224;
      if ( !(unsigned __int8)create_tinfo(v223, 61, 61, v287) )
      {
LABEL_145:
        clear_tinfo_t(&v278);
        v185 = s1;
        if ( s1 )
        {
          v186 = v283;
          if ( (_QWORD)v283 )
          {
            v187 = 0;
            do
            {
              v188 = &v185[144 * v187];
              clear_tinfo_t(v188 + 64);
              v189 = *((_QWORD *)v188 + 5);
              if ( v189 )
              {
                *((_QWORD *)v188 + 6) = 0;
                qfree(v189);
              }
              v190 = *((_QWORD *)v188 + 2);
              if ( v190 )
              {
                *((_QWORD *)v188 + 3) = 0;
                qfree(v190);
              }
              ++v187;
              v185 = s1;
            }
            while ( v186 != v187 );
          }
          *(_QWORD *)&v283 = 0;
          qfree(v185);
        }
        goto LABEL_5;
      }
      a2 = byte_9 + 4;
      v225 = create_tinfo(v274, 13, 13, &s1);
      if ( v225 )
      {
        v247 = (__int128)_mm_loadu_si128(&a10);
        a2 = (const char *)v12;
        v225 = sub_EE80(v274, v12, nullptr, v226, v227, v228, *(double *)&v247, a8, v247, a11);
      }
      v270 = v225;
      clear_tinfo_t(&v278);
      tinfo = v270;
      if ( s1 )
      {
        v229 = v283;
        if ( (_QWORD)v283 )
        {
          v231 = v12;
          v230 = 0;
          do
          {
            v232 = &s1[144 * v230];
            clear_tinfo_t(v232 + 64);
            v233 = *((_QWORD *)v232 + 5);
            if ( v233 )
            {
              *((_QWORD *)v232 + 6) = 0;
              qfree(v233);
            }
            v234 = *((_QWORD *)v232 + 2);
            if ( v234 )
            {
              *((_QWORD *)v232 + 3) = 0;
              qfree(v234);
            }
            ++v230;
          }
          while ( v229 != v230 );
          tinfo = v270;
          v12 = v231;
        }
        a2 = nullptr;
        v271 = tinfo;
        *(_QWORD *)&v283 = 0;
        qfree(s1);
        tinfo = v271;
      }
      goto LABEL_4;
    case 0x77:
      v137 = sub_BB20();
      a10.m128i_i32[0] = 119;
      sub_AB30((__int64)&v300, v137, v138, v139, v140, v141, (__int128)_mm_loadu_si128(&a10), a11);
      v248 = (__int128)_mm_load_si128(&v300);
      v58 = v301;
      goto LABEL_56;
    case 0xB5:
      goto LABEL_12;
    case 0xB7:
      v125 = sub_BB20();
      a10.m128i_i32[0] = 183;
      v126 = v125;
      sub_B850((__int64)&v276, v125, v127, v128, v129, v130, (__int128)_mm_loadu_si128(&a10), a11);
      v131 = _mm_loadu_si128(&v276);
      a11 = v277;
      v11 = _mm_cvtsi128_si32(v131);
      a10 = v131;
      v132 = sub_BB20();
      if ( (int)sub_B790(v132, v126, v133, v134, v135, v136, (__int128)_mm_loadu_si128(&a10), a11) >= 0 )
      {
LABEL_12:
        v21 = _mm_loadu_si128(&a10).m128i_u64[0];
        a2 = (const char *)v12;
        tinfo = sub_13170((char *)a1, v12, a3, a4, a5, a6, *(double *)&v21, a8, a9, v21);
      }
      else
      {
        v248 = (__int128)_mm_loadu_si128(&a10);
        v58 = a11;
LABEL_56:
        a2 = (const char *)v12;
        tinfo = sub_138E0((_DWORD)a1, (_DWORD)v12, a3, a4, a5, a6, v248, v58);
      }
      goto LABEL_4;
    case 0xB8:
    case 0xB9:
      v53 = sub_BB20();
      sub_AC50((__int64)&v302, v53, v54, v55, v56, v57, (__int128)_mm_loadu_si128(&a10), a11);
      v248 = (__int128)_mm_load_si128(&v302);
      v58 = v303;
      goto LABEL_56;
    default:
      sub_E8A0((__int64)v287, (__int64)a2, a3, a4, a5, a6, (__int128)_mm_loadu_si128(&a10));
      v26 = ::s1;
      if ( v287[0].m128i_i64[1] )
        v26 = (const char *)v287[0].m128i_i64[0];
      a2 = "unhandled type: %s";
      sub_67C0(v12 + 10, (__int64)"unhandled type: %s", v26);
      if ( v287[0].m128i_i64[0] )
      {
        v287[0].m128i_i64[1] = 0;
        qfree(v287[0].m128i_i64[0]);
      }
      ++v12[17];
      goto LABEL_5;
  }
}
