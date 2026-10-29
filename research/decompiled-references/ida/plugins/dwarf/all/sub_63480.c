unsigned __int64 __fastcall sub_63480(_QWORD *a1, __m128i *a2, const char *a3, const char *a4)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  char *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  _BYTE *v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // r14d
  void **p_src; // rbp
  __int64 v18; // rax
  char *v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // r15
  unsigned __int64 v27; // r14
  __int64 v28; // rsi
  __m128i v29; // xmm0
  __m128i *v30; // rbx
  __int64 v31; // r15
  __int64 v32; // rdx
  _QWORD *v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rbx
  unsigned __int64 v36; // rdx
  __int64 v37; // r15
  __int64 v38; // rsi
  __int64 v39; // rbx
  const char *v40; // rdx
  __int64 v41; // rdi
  __m128i v42; // xmm0
  __int64 v43; // rax
  __int64 v44; // rdx
  __m128i v45; // xmm1
  __int64 v46; // rbp
  __int64 v47; // rbx
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // r12
  __int64 v52; // rbp
  __int64 v53; // rbx
  __int64 v54; // rdi
  char *v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rax
  const char *v60; // rdx
  __int64 v61; // rdi
  __int64 v62; // r14
  _BYTE *v63; // rsi
  void *v64; // rdx
  size_t v65; // rdx
  _BYTE *v66; // rsi
  __int64 v67; // r15
  size_t v68; // r14
  unsigned __int64 v69; // r15
  __int64 v70; // r14
  _BYTE *v71; // rsi
  __int64 v72; // r15
  int v73; // r14d
  __int64 v74; // rbp
  __int64 v75; // rdx
  const char *v76; // r15
  __int64 v77; // rax
  size_t v78; // rax
  size_t v79; // r8
  size_t v80; // r9
  __int64 v81; // rsi
  void *v82; // rdx
  __int64 v83; // r8
  unsigned __int64 v84; // rdx
  __int64 v85; // rsi
  const char *v86; // r8
  const char *v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // r15
  __int64 v90; // r14
  __int64 *v91; // rax
  __int64 v92; // rdi
  const char *numbered_type_name; // rax
  size_t v94; // rax
  const void *v95; // r8
  size_t v96; // r9
  unsigned int v97; // edx
  __int64 idati; // rax
  size_t v99; // r8
  char *v100; // rsi
  void *v101; // rdx
  size_t v102; // r8
  char *v103; // rsi
  void *v104; // rdx
  size_t v105; // r8
  __int64 v106; // r9
  unsigned __int64 v107; // rdx
  _BYTE *v108; // rsi
  __int64 v109; // rdx
  __int64 v110; // rsi
  __int64 v111; // rdi
  void *v112; // rax
  _QWORD *v113; // rcx
  unsigned __int64 v114; // rcx
  unsigned __int64 v115; // rbx
  __int64 v116; // rbp
  __int64 *v117; // rax
  __int64 v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rdx
  __int64 v122; // r14
  const char *v123; // rax
  __int64 v124; // rax
  __int64 v125; // rsi
  __int64 v126; // rax
  unsigned int v127; // eax
  __int64 v128; // rdx
  unsigned int v129; // ecx
  __int64 v130; // rax
  int *v131; // r8
  __int64 v132; // rax
  unsigned __int64 v133; // r12
  __int64 v134; // r15
  unsigned __int64 v135; // r14
  const char *v136; // r8
  __int64 *v137; // r11
  __m128i v138; // xmm0
  __int64 v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // rax
  __int64 v142; // r10
  __int64 v143; // rdx
  __int64 v144; // r10
  __m128i v145; // xmm0
  __int64 v146; // rdx
  const char *v147; // rdx
  void *v148; // rdi
  void *v149; // rdx
  __int64 v150; // rax
  __int64 v151; // rdx
  int *v152; // r8
  __int64 v153; // rax
  __int64 v154; // r8
  __int64 v155; // rax
  __int64 v156; // rdx
  _BOOL8 v157; // rdi
  char *v158; // rdx
  size_t v159; // r9
  char *v160; // r10
  __int64 v161; // r14
  __int64 v162; // rsi
  const char *v163; // rax
  const void *v164; // r8
  size_t v165; // r9
  size_t v166; // rax
  const char *v167; // rax
  int v168; // eax
  __int64 v169; // r14
  char *v170; // rsi
  size_t v171; // rdx
  char v172; // r8
  unsigned __int64 v173; // rdx
  __int64 v174; // r14
  __int64 v175; // rsi
  __int64 v176; // rax
  int *v177; // r8
  __int64 v178; // rax
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // rax
  __int64 v182; // rdx
  _BOOL8 v183; // rdi
  _WORD *v184; // rsi
  __int64 v185; // rax
  int *v186; // r8
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // rax
  __int64 v192; // rdx
  _BOOL8 v193; // rdi
  __int64 v194; // rsi
  __int64 v195; // rax
  int *v196; // r8
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // rax
  __int64 v202; // rdx
  _BOOL8 v203; // rdi
  _DWORD *v204; // rsi
  __int64 v205; // rax
  int *v206; // r8
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // rax
  __int64 v212; // rdx
  _BOOL8 v213; // rdi
  _BYTE *v214; // rsi
  __int64 v215; // rax
  int *v216; // r8
  __int64 v217; // rax
  __int64 v218; // rax
  __int64 v219; // rcx
  __int64 v220; // r8
  __int64 v221; // rax
  __int64 v222; // rdx
  _BOOL8 v223; // rdi
  _BYTE *v224; // rsi
  __int64 *v225; // rax
  __int64 v226; // rsi
  __int64 *v227; // rdi
  __int64 *v228; // rax
  __int64 v229; // rsi
  __int64 *v230; // rdi
  __int64 *v231; // rax
  __int64 v232; // rsi
  __int64 *v233; // rdi
  __int64 v234; // rax
  char *v235; // rax
  _DWORD *v236; // rsi
  char *v237; // rdi
  __int64 v238; // rax
  __int64 *v239; // rax
  __int64 v240; // rsi
  __int64 *v241; // rdi
  __int64 v242; // rax
  __int64 *v243; // rax
  __int64 v244; // rsi
  __int64 *v245; // rdi
  int *v246; // r8
  __int64 v247; // rax
  __int64 v248; // rax
  __int64 v249; // rcx
  __int64 v250; // r8
  __int64 v251; // rax
  __int64 v252; // rdx
  _BOOL8 v253; // rdi
  _QWORD *v254; // rsi
  __int64 v255; // rax
  int *v256; // r8
  __int64 v257; // rax
  __int64 v258; // rax
  __int64 v259; // rcx
  __int64 v260; // r8
  __int64 v261; // rax
  __int64 v262; // rdx
  _BOOL8 v263; // rdi
  __int64 v264; // rsi
  __int64 v265; // rax
  int *v266; // r8
  __int64 v267; // rax
  __int64 v268; // rax
  __int64 v269; // rcx
  __int64 v270; // r8
  __int64 v271; // rax
  __int64 v272; // rdx
  _BOOL8 v273; // rdi
  _DWORD *v274; // rsi
  __int64 v275; // rax
  int *v276; // r8
  __int64 v277; // rax
  __int64 v278; // rax
  __int64 v279; // rcx
  __int64 v280; // r8
  __int64 v281; // rax
  __int64 v282; // rdx
  _BOOL8 v283; // rdi
  _WORD *v284; // rsi
  void *v285; // rdi
  size_t v286; // rdx
  int *v287; // rdi
  __int64 v288; // rax
  __int64 v289; // rax
  int *v290; // rdi
  __int64 v291; // rax
  int *v292; // rdi
  __int64 v293; // rax
  int *v294; // rdi
  int *v295; // rdi
  int *v296; // rdi
  __int64 v297; // rax
  int *v298; // rdi
  __int64 v299; // rax
  int *v300; // rdi
  __int64 v301; // rax
  int *v302; // rdi
  __int64 v303; // rax
  __int64 v304; // rax
  __int64 v305; // [rsp+8h] [rbp-3D0h]
  __int64 v306; // [rsp+8h] [rbp-3D0h]
  _DWORD *v307; // [rsp+10h] [rbp-3C8h]
  void *v308; // [rsp+10h] [rbp-3C8h]
  void *v309; // [rsp+10h] [rbp-3C8h]
  const char *v310; // [rsp+10h] [rbp-3C8h]
  void *v311; // [rsp+10h] [rbp-3C8h]
  void *v312; // [rsp+10h] [rbp-3C8h]
  char *v313; // [rsp+10h] [rbp-3C8h]
  void *v314; // [rsp+10h] [rbp-3C8h]
  _BYTE *v315; // [rsp+10h] [rbp-3C8h]
  void *v316; // [rsp+10h] [rbp-3C8h]
  void *v317; // [rsp+10h] [rbp-3C8h]
  void *v318; // [rsp+10h] [rbp-3C8h]
  void *v319; // [rsp+10h] [rbp-3C8h]
  size_t v320; // [rsp+18h] [rbp-3C0h]
  __int64 v321; // [rsp+18h] [rbp-3C0h]
  __int64 v322; // [rsp+18h] [rbp-3C0h]
  size_t nb; // [rsp+20h] [rbp-3B8h]
  __int64 nf; // [rsp+20h] [rbp-3B8h]
  __int64 *n; // [rsp+20h] [rbp-3B8h]
  size_t ne; // [rsp+20h] [rbp-3B8h]
  size_t ng; // [rsp+20h] [rbp-3B8h]
  size_t na; // [rsp+20h] [rbp-3B8h]
  size_t nc; // [rsp+20h] [rbp-3B8h]
  size_t nd; // [rsp+20h] [rbp-3B8h]
  size_t nj; // [rsp+20h] [rbp-3B8h]
  size_t nh; // [rsp+20h] [rbp-3B8h]
  size_t ni; // [rsp+20h] [rbp-3B8h]
  void *v337; // [rsp+40h] [rbp-398h]
  unsigned int v338; // [rsp+40h] [rbp-398h]
  int *v339; // [rsp+40h] [rbp-398h]
  int *v340; // [rsp+40h] [rbp-398h]
  int *v341; // [rsp+40h] [rbp-398h]
  int *v342; // [rsp+40h] [rbp-398h]
  int *v343; // [rsp+40h] [rbp-398h]
  int *v344; // [rsp+40h] [rbp-398h]
  int *v345; // [rsp+40h] [rbp-398h]
  int *v346; // [rsp+40h] [rbp-398h]
  int *v347; // [rsp+40h] [rbp-398h]
  void *v348; // [rsp+40h] [rbp-398h]
  int *v349; // [rsp+40h] [rbp-398h]
  int *v350; // [rsp+40h] [rbp-398h]
  int *v351; // [rsp+40h] [rbp-398h]
  int *v352; // [rsp+40h] [rbp-398h]
  int *v353; // [rsp+40h] [rbp-398h]
  int *v354; // [rsp+40h] [rbp-398h]
  int *v355; // [rsp+40h] [rbp-398h]
  int *v356; // [rsp+40h] [rbp-398h]
  int *v357; // [rsp+40h] [rbp-398h]
  int *v358; // [rsp+40h] [rbp-398h]
  int *v359; // [rsp+40h] [rbp-398h]
  int *v360; // [rsp+40h] [rbp-398h]
  int *v361; // [rsp+40h] [rbp-398h]
  int *v362; // [rsp+40h] [rbp-398h]
  int *v363; // [rsp+40h] [rbp-398h]
  int *v364; // [rsp+40h] [rbp-398h]
  int *v365; // [rsp+40h] [rbp-398h]
  int *v366; // [rsp+40h] [rbp-398h]
  int *v367; // [rsp+40h] [rbp-398h]
  void *v368; // [rsp+40h] [rbp-398h]
  char *v369; // [rsp+40h] [rbp-398h]
  int *v370; // [rsp+48h] [rbp-390h]
  int *v371; // [rsp+48h] [rbp-390h]
  int *v372; // [rsp+48h] [rbp-390h]
  int *v373; // [rsp+48h] [rbp-390h]
  int *v374; // [rsp+48h] [rbp-390h]
  int *v375; // [rsp+48h] [rbp-390h]
  int *v376; // [rsp+48h] [rbp-390h]
  int *v377; // [rsp+48h] [rbp-390h]
  int *v378; // [rsp+48h] [rbp-390h]
  int *v379; // [rsp+48h] [rbp-390h]
  char v380; // [rsp+48h] [rbp-390h]
  void *v381; // [rsp+48h] [rbp-390h]
  int *v382; // [rsp+48h] [rbp-390h]
  __int64 v383; // [rsp+50h] [rbp-388h]
  size_t v384; // [rsp+50h] [rbp-388h]
  char *v385; // [rsp+58h] [rbp-380h]
  unsigned __int16 v386; // [rsp+6Ch] [rbp-36Ch] BYREF
  unsigned __int16 v387; // [rsp+6Eh] [rbp-36Ah] BYREF
  unsigned __int16 v388; // [rsp+70h] [rbp-368h] BYREF
  unsigned __int16 v389; // [rsp+72h] [rbp-366h] BYREF
  unsigned __int16 v390; // [rsp+74h] [rbp-364h] BYREF
  unsigned __int16 v391; // [rsp+76h] [rbp-362h] BYREF
  __int64 v392; // [rsp+78h] [rbp-360h] BYREF
  const char *v393; // [rsp+80h] [rbp-358h] BYREF
  __m128i v394; // [rsp+88h] [rbp-350h] BYREF
  __int64 v395; // [rsp+A0h] [rbp-338h] BYREF
  __int128 v396; // [rsp+A8h] [rbp-330h]
  __int64 v397; // [rsp+C0h] [rbp-318h] BYREF
  __int128 v398; // [rsp+C8h] [rbp-310h]
  void *src; // [rsp+E0h] [rbp-2F8h] BYREF
  __int128 v400; // [rsp+E8h] [rbp-2F0h]
  void *dest; // [rsp+100h] [rbp-2D8h] BYREF
  __int128 v402; // [rsp+108h] [rbp-2D0h]
  __int64 v403; // [rsp+120h] [rbp-2B8h] BYREF
  __int128 v404; // [rsp+128h] [rbp-2B0h]
  __int64 v405; // [rsp+138h] [rbp-2A0h]
  __int128 v406; // [rsp+140h] [rbp-298h]
  _BYTE v407[20]; // [rsp+160h] [rbp-278h] BYREF
  int v408; // [rsp+174h] [rbp-264h]
  __int64 v409; // [rsp+240h] [rbp-198h]
  __int64 v410; // [rsp+260h] [rbp-178h]
  _BYTE v411[24]; // [rsp+270h] [rbp-168h] BYREF
  int v412; // [rsp+288h] [rbp-150h]
  __m128i si128; // [rsp+380h] [rbp-58h] BYREF
  unsigned __int64 v414; // [rsp+398h] [rbp-40h]

  v414 = __readfsqword(0x28u);
  v4 = a1[1];
  if ( !v4 )
    return v414 - __readfsqword(0x28u);
  v5 = 0;
  v403 = 0;
  v404 = 0;
  v6 = v411;
  v406 = 0;
  v405 = 0;
  do
  {
    v7 = *(_QWORD *)(*a1 + 8 * v5);
    memset(&v411[4], 0, 20);
    *(_DWORD *)v411 = 1;
    *(_QWORD *)&v411[8] = v7;
    sub_54BC0(&v403, (const __m128i *)v411, 0);
    ++v5;
  }
  while ( v4 != v5 );
  si128 = _mm_load_si128((const __m128i *)&xmmword_AB1A0);
  strcpy(&si128.m128i_i8[13], "out.dot");
  if ( !dword_CC888 )
    qunlink(&si128);
  if ( !(_BYTE)byte_CC868 && __cxa_guard_acquire(&byte_CC868) )
  {
    qword_CC870 = 0;
    xmmword_CC878 = 0;
    __cxa_atexit((void (*)(void *))sub_52F00, &qword_CC870, &off_C71A0);
    __cxa_guard_release(&byte_CC868);
  }
  v393 = nullptr;
  v395 = 0;
  v305 = v406;
  v394 = 0;
  v396 = 0;
  if ( !(_QWORD)v406 )
  {
    v133 = v404;
    if ( (_QWORD)v404 )
      goto LABEL_183;
    goto LABEL_47;
  }
  v8 = 0;
  v9 = 0;
  v10 = 0;
  while ( 2 )
  {
    v11 = (_BYTE *)(v405 + 32 * v10);
    v12 = *((int *)v11 + 6);
    if ( v12 >= v9 )
    {
      v13 = (int)v12 + 1;
      if ( v13 != v9 )
      {
        memset(v411, 0, sizeof(v411));
        if ( v13 < v9 )
        {
          v313 = v6;
          v115 = v9;
          v116 = (int)v12 + 1;
          while ( 1 )
          {
            v117 = (__int64 *)(v8 + 24 * v116);
            v118 = *v117;
            if ( *v117 )
            {
              v117[1] = 0;
              qfree(v118);
            }
            if ( ++v116 >= v115 )
              break;
            v8 = v395;
          }
          *(_QWORD *)&v396 = v13;
          v6 = v313;
          v8 = v395;
        }
        else
        {
          if ( (unsigned __int64)v6 < v8 || (unsigned __int64)v6 >= v8 + 24LL * *((_QWORD *)&v396 + 1) )
          {
            if ( *((_QWORD *)&v396 + 1) < v13 )
            {
              v395 = qvector_reserve(&v395, v8, v13, 24);
              v9 = v396;
              v8 = v395;
            }
            while ( v9 < v13 )
            {
              v114 = v8 + 24 * v9;
              *(_QWORD *)v114 = 0;
              *(_OWORD *)(v114 + 8) = 0;
              if ( *(_QWORD *)&v411[8] )
              {
                v311 = *(void **)&v411[8];
                nf = 4LL * *(_QWORD *)&v411[8];
                v112 = (void *)qalloc_or_throw(4LL * *(_QWORD *)&v411[8]);
                v113 = (_QWORD *)(v8 + 24 * v9);
                v113[2] = v311;
                *v113 = v112;
                memcpy(v112, *(const void **)v411, nf);
                *(_QWORD *)(v8 + 24 * v9 + 8) = v311;
              }
              v8 = v395;
              ++v9;
            }
          }
          else
          {
            if ( *((_QWORD *)&v396 + 1) < v13 )
            {
              v395 = qvector_reserve(&v395, v8, v13, 24);
              v9 = v396;
              v8 = v395;
            }
            if ( v9 < v13 )
            {
              v14 = 24 * v9;
              do
              {
                v15 = v8 + v14;
                ++v9;
                v14 += 24;
                *(_QWORD *)v15 = 0;
                v8 = v395;
                *(_OWORD *)(v15 + 8) = 0;
              }
              while ( v13 != v9 );
            }
          }
          *(_QWORD *)&v396 = v13;
        }
        v12 = *((int *)v11 + 6);
      }
    }
    *(_DWORD *)v411 = v10;
    v16 = v10;
    p_src = (void **)(v8 + 24 * v12);
    v18 = (__int64)p_src[1];
    v19 = (char *)*p_src;
    v20 = (unsigned __int64)p_src[2];
    v21 = v18 + 1;
    if ( v6 >= *p_src && v6 < &v19[4 * v20] )
    {
      if ( v20 < v21 )
      {
        v132 = qvector_reserve(p_src, v19, v18 + 1, 4);
        *p_src = (void *)v132;
        v19 = (char *)v132;
        v18 = (__int64)p_src[1];
      }
      goto LABEL_25;
    }
    while ( 1 )
    {
      if ( v20 < v21 )
      {
        v23 = qvector_reserve(p_src, v19, v21, 4);
        *p_src = (void *)v23;
        v19 = (char *)v23;
        v16 = *(_DWORD *)v411;
        v18 = (__int64)p_src[1];
      }
LABEL_25:
      *(_DWORD *)&v19[4 * v18] = v16;
      v397 = 0;
      p_src[1] = (char *)p_src[1] + 1;
      p_src = &src;
      src = nullptr;
      dest = nullptr;
      v398 = 0;
      v400 = 0;
      v402 = 0;
      v22 = *(_DWORD *)v11;
      if ( *(_DWORD *)v11 == 2 )
        break;
      if ( v22 == 3 )
      {
        sub_1F510((__int64 *)&src, (__int64)"%s=%s", "shape", "plaintext");
        sub_63290(a2, (__int64 *)&dest, (const __m128i *)(v11 + 8));
        goto LABEL_71;
      }
      if ( v22 != 1 )
      {
        sub_1F510((__int64 *)&src, (__int64)"%s=%s", "shape", "plaintext");
        v56 = (char *)dest;
        if ( *((_QWORD *)&v402 + 1) <= 0x17u )
        {
          dest = (void *)qvector_reserve(&dest, dest, 24, 1);
          v56 = (char *)dest;
        }
        *(_QWORD *)&v402 = 24;
        *(__m128i *)v56 = _mm_load_si128((const __m128i *)&xmmword_AB1B0);
        *(_QWORD *)(v56 + 15) = 0x3E746E696F702073LL;
        *((_BYTE *)dest + 23) = 0;
        goto LABEL_71;
      }
      v19 = "%s=%s";
      sub_1F510((__int64 *)&src, (__int64)"%s=%s", "shape", "egg");
      v307 = *((_DWORD **)v11 + 1);
      if ( byte_CABC0 )
      {
        v109 = v398;
        v110 = v397;
        if ( *((_QWORD *)&v398 + 1) < (unsigned __int64)(v398 + 1) )
        {
          v397 = qvector_reserve(&v397, v397, v398 + 1, 24);
          v109 = v398;
          v110 = v397;
        }
        v111 = v110 + 24 * v109;
        v19 = "%p";
        *(_QWORD *)v111 = 0;
        *(_OWORD *)(v111 + 8) = 0;
        *(_QWORD *)&v398 = v398 + 1;
        sub_20160((__int64 *)v111, (__int64)"%p", v307);
      }
      v11 = v407;
      sub_84A60(v407);
      if ( (*((_QWORD *)v307 + 29) & 0x7FFFFFFFFFFFFFFFLL) != 0 && *((_QWORD *)v307 + 29) != -1 )
      {
        if ( (unsigned __int8)sub_98E20(v307 + 58, v407) )
        {
          v119 = v398;
          v120 = v397;
          v121 = v398 + 1;
          if ( *((_QWORD *)&v398 + 1) < (unsigned __int64)(v398 + 1) )
            goto LABEL_257;
          while ( 1 )
          {
            v122 = v120 + 24 * v119;
            *(_QWORD *)v122 = 0;
            *(_OWORD *)(v122 + 8) = 0;
            *(_QWORD *)&v398 = v398 + 1;
            if ( !byte_CABC1 )
            {
              v123 = (const char *)sub_81C40(v407);
              sub_20160((__int64 *)v122, (__int64)"%s", v123);
              goto LABEL_170;
            }
            v151 = v409 & 0x7FFFFFFFFFFFFFFFLL;
            if ( v409 != -1 )
            {
              if ( v151 )
                break;
            }
            if ( under_debugger )
LABEL_451:
              BUG();
            interr(30478);
LABEL_257:
            v397 = qvector_reserve(&v397, v120, v121, 24);
            v120 = v397;
            v119 = v398;
          }
          sub_20160((__int64 *)v122, (__int64)"%lld", v151);
LABEL_170:
          v124 = v398;
          v125 = v397;
          if ( *((_QWORD *)&v398 + 1) < (unsigned __int64)(v398 + 1) )
          {
            v397 = qvector_reserve(&v397, v397, v398 + 1, 24);
            v125 = v397;
            v124 = v398;
          }
          v126 = v125 + 24 * v124;
          *(_QWORD *)v126 = 0;
          *(_OWORD *)(v126 + 8) = 0;
          *(_QWORD *)&v398 = v398 + 1;
          n = (__int64 *)v126;
          if ( !qword_CC8C8 )
          {
            v176 = qword_CC8B0;
            v177 = &dword_CC8A8;
            if ( !qword_CC8B0 )
              goto LABEL_277;
            do
            {
              if ( *(_WORD *)(v176 + 32) )
              {
                v177 = (int *)v176;
                v176 = *(_QWORD *)(v176 + 16);
              }
              else
              {
                v176 = *(_QWORD *)(v176 + 24);
              }
            }
            while ( v176 );
            if ( v177 == &dword_CC8A8 || *((_WORD *)v177 + 16) > 1u )
            {
LABEL_277:
              v371 = v177;
              v178 = operator new(0x40u);
              *(_QWORD *)(v178 + 32) = 1;
              *(_QWORD *)(v178 + 40) = 0;
              *(_OWORD *)(v178 + 48) = 0;
              v339 = (int *)v178;
              v181 = sub_53340(&qword_CC8A0, (__int64)v371, 1, v179, v180);
              v177 = (int *)v181;
              if ( v182 )
              {
                v183 = v181 || &dword_CC8A8 == (int *)v182 || *(_WORD *)(v182 + 32) > 1u;
                std::_Rb_tree_insert_and_rebalance(v183, v339, v182, &dword_CC8A8);
                ++qword_CC8C8;
                v177 = v339;
              }
              else if ( v339 )
              {
                v295 = v339;
                v358 = (int *)v181;
                operator delete(v295, 0x40u);
                v177 = v358;
              }
            }
            v184 = *((_WORD **)v177 + 5);
            if ( *((_QWORD *)v177 + 7) <= 2u )
            {
              v360 = v177;
              v297 = qvector_reserve(v177 + 10, v184, 3, 1);
              v177 = v360;
              v184 = (_WORD *)v297;
              *((_QWORD *)v360 + 5) = v297;
            }
            *((_QWORD *)v177 + 6) = 3;
            *v184 = 23899;
            v185 = *((_QWORD *)v177 + 5);
            v186 = &dword_CC8A8;
            *(_BYTE *)(v185 + 2) = 0;
            v187 = qword_CC8B0;
            if ( !qword_CC8B0 )
              goto LABEL_292;
            do
            {
              if ( *(_WORD *)(v187 + 32) > 1u )
              {
                v186 = (int *)v187;
                v187 = *(_QWORD *)(v187 + 16);
              }
              else
              {
                v187 = *(_QWORD *)(v187 + 24);
              }
            }
            while ( v187 );
            if ( v186 == &dword_CC8A8 || *((_WORD *)v186 + 16) > 2u )
            {
LABEL_292:
              v372 = v186;
              v188 = operator new(0x40u);
              *(_QWORD *)(v188 + 32) = 2;
              *(_QWORD *)(v188 + 40) = 0;
              *(_OWORD *)(v188 + 48) = 0;
              v340 = (int *)v188;
              v191 = sub_53340(&qword_CC8A0, (__int64)v372, 2, v189, v190);
              v186 = (int *)v191;
              if ( v192 )
              {
                v193 = v191 || &dword_CC8A8 == (int *)v192 || *(_WORD *)(v192 + 32) > 2u;
                std::_Rb_tree_insert_and_rebalance(v193, v340, v192, &dword_CC8A8);
                ++qword_CC8C8;
                v186 = v340;
              }
              else if ( v340 )
              {
                v296 = v340;
                v359 = (int *)v191;
                operator delete(v296, 0x40u);
                v186 = v359;
              }
            }
            v194 = *((_QWORD *)v186 + 5);
            if ( *((_QWORD *)v186 + 7) <= 5u )
            {
              v362 = v186;
              v299 = qvector_reserve(v186 + 10, v194, 6, 1);
              v186 = v362;
              v194 = v299;
              *((_QWORD *)v362 + 5) = v299;
            }
            *((_QWORD *)v186 + 6) = 6;
            *(_DWORD *)v194 = 1935764579;
            *(_BYTE *)(v194 + 4) = 115;
            v195 = *((_QWORD *)v186 + 5);
            v196 = &dword_CC8A8;
            *(_BYTE *)(v195 + 5) = 0;
            v197 = qword_CC8B0;
            if ( !qword_CC8B0 )
              goto LABEL_307;
            do
            {
              if ( *(_WORD *)(v197 + 32) > 3u )
              {
                v196 = (int *)v197;
                v197 = *(_QWORD *)(v197 + 16);
              }
              else
              {
                v197 = *(_QWORD *)(v197 + 24);
              }
            }
            while ( v197 );
            if ( v196 == &dword_CC8A8 || *((_WORD *)v196 + 16) > 4u )
            {
LABEL_307:
              v373 = v196;
              v198 = operator new(0x40u);
              *(_QWORD *)(v198 + 32) = 4;
              *(_QWORD *)(v198 + 40) = 0;
              *(_OWORD *)(v198 + 48) = 0;
              v341 = (int *)v198;
              v201 = sub_53340(&qword_CC8A0, (__int64)v373, 4, v199, v200);
              v196 = (int *)v201;
              if ( v202 )
              {
                v203 = v201 || &dword_CC8A8 == (int *)v202 || *(_WORD *)(v202 + 32) > 4u;
                std::_Rb_tree_insert_and_rebalance(v203, v341, v202, &dword_CC8A8);
                ++qword_CC8C8;
                v196 = v341;
              }
              else if ( v341 )
              {
                v302 = v341;
                v365 = (int *)v201;
                operator delete(v302, 0x40u);
                v196 = v365;
              }
            }
            v204 = *((_DWORD **)v196 + 5);
            if ( *((_QWORD *)v196 + 7) <= 4u )
            {
              v364 = v196;
              v301 = qvector_reserve(v196 + 10, v204, 5, 1);
              v196 = v364;
              v204 = (_DWORD *)v301;
              *((_QWORD *)v364 + 5) = v301;
            }
            *((_QWORD *)v196 + 6) = 5;
            *v204 = 1836412517;
            v205 = *((_QWORD *)v196 + 5);
            v206 = &dword_CC8A8;
            *(_BYTE *)(v205 + 4) = 0;
            v207 = qword_CC8B0;
            if ( !qword_CC8B0 )
              goto LABEL_322;
            do
            {
              if ( *(_WORD *)(v207 + 32) > 0xEu )
              {
                v206 = (int *)v207;
                v207 = *(_QWORD *)(v207 + 16);
              }
              else
              {
                v207 = *(_QWORD *)(v207 + 24);
              }
            }
            while ( v207 );
            if ( v206 == &dword_CC8A8 || *((_WORD *)v206 + 16) > 0xFu )
            {
LABEL_322:
              v374 = v206;
              v208 = operator new(0x40u);
              *(_QWORD *)(v208 + 32) = 15;
              *(_QWORD *)(v208 + 40) = 0;
              *(_OWORD *)(v208 + 48) = 0;
              v342 = (int *)v208;
              v211 = sub_53340(&qword_CC8A0, (__int64)v374, 15, v209, v210);
              v206 = (int *)v211;
              if ( v212 )
              {
                v213 = v211 || &dword_CC8A8 == (int *)v212 || *(_WORD *)(v212 + 32) > 0xFu;
                std::_Rb_tree_insert_and_rebalance(v213, v342, v212, &dword_CC8A8);
                ++qword_CC8C8;
                v206 = v342;
              }
              else if ( v342 )
              {
                v300 = v342;
                v363 = (int *)v211;
                operator delete(v300, 0x40u);
                v206 = v363;
              }
            }
            v214 = *((_BYTE **)v206 + 5);
            if ( *((_QWORD *)v206 + 7) <= 1u )
            {
              v354 = v206;
              v291 = qvector_reserve(v206 + 10, v214, 2, 1);
              v206 = v354;
              v214 = (_BYTE *)v291;
              *((_QWORD *)v354 + 5) = v291;
            }
            *((_QWORD *)v206 + 6) = 2;
            *v214 = 42;
            v215 = *((_QWORD *)v206 + 5);
            v216 = &dword_CC8A8;
            *(_BYTE *)(v215 + 1) = 0;
            v217 = qword_CC8B0;
            if ( !qword_CC8B0 )
              goto LABEL_337;
            do
            {
              if ( *(_WORD *)(v217 + 32) > 0xFu )
              {
                v216 = (int *)v217;
                v217 = *(_QWORD *)(v217 + 16);
              }
              else
              {
                v217 = *(_QWORD *)(v217 + 24);
              }
            }
            while ( v217 );
            if ( v216 == &dword_CC8A8 || *((_WORD *)v216 + 16) > 0x10u )
            {
LABEL_337:
              v375 = v216;
              v218 = operator new(0x40u);
              *(_QWORD *)(v218 + 32) = 16;
              *(_QWORD *)(v218 + 40) = 0;
              *(_OWORD *)(v218 + 48) = 0;
              v343 = (int *)v218;
              v221 = sub_53340(&qword_CC8A0, (__int64)v375, 16, v219, v220);
              v216 = (int *)v221;
              if ( v222 )
              {
                v223 = &dword_CC8A8 == (int *)v222 || v221 || *(_WORD *)(v222 + 32) > 0x10u;
                std::_Rb_tree_insert_and_rebalance(v223, v343, v222, &dword_CC8A8);
                ++qword_CC8C8;
                v216 = v343;
              }
              else if ( v343 )
              {
                v298 = v343;
                v361 = (int *)v221;
                operator delete(v298, 0x40u);
                v216 = v361;
              }
            }
            v224 = *((_BYTE **)v216 + 5);
            if ( *((_QWORD *)v216 + 7) <= 1u )
            {
              v356 = v216;
              v293 = qvector_reserve(v216 + 10, v224, 2, 1);
              v216 = v356;
              v224 = (_BYTE *)v293;
              *((_QWORD *)v356 + 5) = v293;
            }
            *((_QWORD *)v216 + 6) = 2;
            *v224 = 38;
            *(_BYTE *)(*((_QWORD *)v216 + 5) + 1LL) = 0;
            v391 = 18;
            v225 = (__int64 *)sub_5B380(&qword_CC8A0, &v391);
            v226 = *v225;
            v227 = v225;
            if ( (unsigned __int64)v225[2] <= 6 )
            {
              v227 = v225;
              v226 = qvector_reserve(v225, v226, 7, 1);
              *v227 = v226;
            }
            v227[1] = 7;
            *(_DWORD *)v226 = 1769108595;
            *(_WORD *)(v226 + 4) = 26478;
            *(_BYTE *)(*v227 + 6) = 0;
            v390 = 19;
            v228 = (__int64 *)sub_5B380(&qword_CC8A0, &v390);
            v229 = *v228;
            v230 = v228;
            if ( (unsigned __int64)v228[2] <= 6 )
            {
              v230 = v228;
              v229 = qvector_reserve(v228, v229, 7, 1);
              *v230 = v229;
            }
            v230[1] = 7;
            *(_DWORD *)v229 = 1970435187;
            *(_WORD *)(v229 + 4) = 29795;
            *(_BYTE *)(*v230 + 6) = 0;
            v389 = 23;
            v231 = (__int64 *)sub_5B380(&qword_CC8A0, &v389);
            v232 = *v231;
            v233 = v231;
            if ( (unsigned __int64)v231[2] <= 5 )
            {
              v233 = v231;
              v232 = qvector_reserve(v231, v232, 6, 1);
              *v233 = v232;
            }
            v233[1] = 6;
            *(_DWORD *)v232 = 1869180533;
            *(_BYTE *)(v232 + 4) = 110;
            v234 = *v233;
            v388 = 22;
            *(_BYTE *)(v234 + 5) = 0;
            v235 = sub_5B380(&qword_CC8A0, &v388);
            v236 = *(_DWORD **)v235;
            v237 = v235;
            if ( *((_QWORD *)v235 + 2) <= 7u )
            {
              v237 = v235;
              v236 = (_DWORD *)qvector_reserve(v235, v236, 8, 1);
              *(_QWORD *)v237 = v236;
            }
            *((_QWORD *)v237 + 1) = 8;
            *v236 = 1701869940;
            *(_DWORD *)((char *)v236 + 3) = 1717920869;
            v238 = *(_QWORD *)v237;
            v387 = 24;
            *(_BYTE *)(v238 + 7) = 0;
            v239 = (__int64 *)sub_5B380(&qword_CC8A0, &v387);
            v240 = *v239;
            v241 = v239;
            if ( (unsigned __int64)v239[2] <= 3 )
            {
              v241 = v239;
              v240 = qvector_reserve(v239, v240, 4, 1);
              *v241 = v240;
            }
            v241[1] = 4;
            *(_WORD *)v240 = 11822;
            *(_BYTE *)(v240 + 2) = 46;
            v242 = *v241;
            v386 = 38;
            *(_BYTE *)(v242 + 3) = 0;
            v243 = (__int64 *)sub_5B380(&qword_CC8A0, &v386);
            v244 = *v243;
            v245 = v243;
            if ( (unsigned __int64)v243[2] <= 5 )
            {
              v245 = v243;
              v244 = qvector_reserve(v243, v244, 6, 1);
              *v245 = v244;
            }
            v245[1] = 6;
            v246 = &dword_CC8A8;
            *(_DWORD *)v244 = 1936617315;
            *(_BYTE *)(v244 + 4) = 116;
            *(_BYTE *)(*v245 + 5) = 0;
            v247 = qword_CC8B0;
            if ( !qword_CC8B0 )
              goto LABEL_364;
            do
            {
              if ( *(_WORD *)(v247 + 32) > 0x34u )
              {
                v246 = (int *)v247;
                v247 = *(_QWORD *)(v247 + 16);
              }
              else
              {
                v247 = *(_QWORD *)(v247 + 24);
              }
            }
            while ( v247 );
            if ( v246 == &dword_CC8A8 || *((_WORD *)v246 + 16) > 0x35u )
            {
LABEL_364:
              v376 = v246;
              v248 = operator new(0x40u);
              *(_QWORD *)(v248 + 32) = 53;
              *(_QWORD *)(v248 + 40) = 0;
              *(_OWORD *)(v248 + 48) = 0;
              v344 = (int *)v248;
              v251 = sub_53340(&qword_CC8A0, (__int64)v376, 53, v249, v250);
              v246 = (int *)v251;
              if ( v252 )
              {
                v253 = v251 || &dword_CC8A8 == (int *)v252 || *(_WORD *)(v252 + 32) > 0x35u;
                std::_Rb_tree_insert_and_rebalance(v253, v344, v252, &dword_CC8A8);
                ++qword_CC8C8;
                v246 = v344;
              }
              else if ( v344 )
              {
                v292 = v344;
                v355 = (int *)v251;
                operator delete(v292, 0x40u);
                v246 = v355;
              }
            }
            v254 = *((_QWORD **)v246 + 5);
            if ( *((_QWORD *)v246 + 7) <= 8u )
            {
              v352 = v246;
              v289 = qvector_reserve(v246 + 10, v254, 9, 1);
              v246 = v352;
              v254 = (_QWORD *)v289;
              *((_QWORD *)v352 + 5) = v289;
            }
            *((_QWORD *)v246 + 6) = 9;
            *v254 = 0x656C6974616C6F76LL;
            v255 = *((_QWORD *)v246 + 5);
            v256 = &dword_CC8A8;
            *(_BYTE *)(v255 + 8) = 0;
            v257 = qword_CC8B0;
            if ( !qword_CC8B0 )
              goto LABEL_379;
            do
            {
              if ( *(_WORD *)(v257 + 32) > 0x37u )
              {
                v256 = (int *)v257;
                v257 = *(_QWORD *)(v257 + 16);
              }
              else
              {
                v257 = *(_QWORD *)(v257 + 24);
              }
            }
            while ( v257 );
            if ( v256 == &dword_CC8A8 || *((_WORD *)v256 + 16) > 0x38u )
            {
LABEL_379:
              v377 = v256;
              v258 = operator new(0x40u);
              *(_QWORD *)(v258 + 32) = 56;
              *(_QWORD *)(v258 + 40) = 0;
              *(_OWORD *)(v258 + 48) = 0;
              v345 = (int *)v258;
              v261 = sub_53340(&qword_CC8A0, (__int64)v377, 56, v259, v260);
              v256 = (int *)v261;
              if ( v262 )
              {
                v263 = v261 || &dword_CC8A8 == (int *)v262 || *(_WORD *)(v262 + 32) > 0x38u;
                std::_Rb_tree_insert_and_rebalance(v263, v345, v262, &dword_CC8A8);
                ++qword_CC8C8;
                v256 = v345;
              }
              else if ( v345 )
              {
                v290 = v345;
                v353 = (int *)v261;
                operator delete(v290, 0x40u);
                v256 = v353;
              }
            }
            v264 = *((_QWORD *)v256 + 5);
            if ( *((_QWORD *)v256 + 7) <= 9u )
            {
              v351 = v256;
              v288 = qvector_reserve(v256 + 10, v264, 10, 1);
              v256 = v351;
              v264 = v288;
              *((_QWORD *)v351 + 5) = v288;
            }
            *((_QWORD *)v256 + 6) = 10;
            *(_QWORD *)v264 = 0x6361667265746E69LL;
            *(_BYTE *)(v264 + 8) = 101;
            v265 = *((_QWORD *)v256 + 5);
            v266 = &dword_CC8A8;
            *(_BYTE *)(v265 + 9) = 0;
            v267 = qword_CC8B0;
            if ( !qword_CC8B0 )
              goto LABEL_394;
            do
            {
              if ( *(_WORD *)(v267 + 32) > 0x3Du )
              {
                v266 = (int *)v267;
                v267 = *(_QWORD *)(v267 + 16);
              }
              else
              {
                v267 = *(_QWORD *)(v267 + 24);
              }
            }
            while ( v267 );
            if ( v266 == &dword_CC8A8 || *((_WORD *)v266 + 16) > 0x3Eu )
            {
LABEL_394:
              v378 = v266;
              v268 = operator new(0x40u);
              *(_QWORD *)(v268 + 32) = 62;
              *(_QWORD *)(v268 + 40) = 0;
              *(_OWORD *)(v268 + 48) = 0;
              v346 = (int *)v268;
              v271 = sub_53340(&qword_CC8A0, (__int64)v378, 62, v269, v270);
              v266 = (int *)v271;
              if ( v272 )
              {
                v273 = v271 || &dword_CC8A8 == (int *)v272 || *(_WORD *)(v272 + 32) > 0x3Eu;
                std::_Rb_tree_insert_and_rebalance(v273, v346, v272, &dword_CC8A8);
                ++qword_CC8C8;
                v266 = v346;
              }
              else if ( v346 )
              {
                v287 = v346;
                v350 = (int *)v271;
                operator delete(v287, 0x40u);
                v266 = v350;
              }
            }
            v274 = *((_DWORD **)v266 + 5);
            if ( *((_QWORD *)v266 + 7) <= 7u )
            {
              v366 = v266;
              v303 = qvector_reserve(v266 + 10, v274, 8, 1);
              v266 = v366;
              v274 = (_DWORD *)v303;
              *((_QWORD *)v366 + 5) = v303;
            }
            *((_QWORD *)v266 + 6) = 8;
            *v274 = 1635022189;
            *(_DWORD *)((char *)v274 + 3) = 1701601889;
            v275 = *((_QWORD *)v266 + 5);
            v276 = &dword_CC8A8;
            *(_BYTE *)(v275 + 7) = 0;
            v277 = qword_CC8B0;
            if ( !qword_CC8B0 )
              goto LABEL_409;
            do
            {
              if ( *(_WORD *)(v277 + 32) > 0x41u )
              {
                v276 = (int *)v277;
                v277 = *(_QWORD *)(v277 + 16);
              }
              else
              {
                v277 = *(_QWORD *)(v277 + 24);
              }
            }
            while ( v277 );
            if ( v276 == &dword_CC8A8 || *((_WORD *)v276 + 16) > 0x42u )
            {
LABEL_409:
              v379 = v276;
              v278 = operator new(0x40u);
              *(_QWORD *)(v278 + 32) = 66;
              *(_QWORD *)(v278 + 40) = 0;
              *(_OWORD *)(v278 + 48) = 0;
              v347 = (int *)v278;
              v281 = sub_53340(&qword_CC8A0, (__int64)v379, 66, v279, v280);
              v276 = (int *)v281;
              if ( v282 )
              {
                v283 = v281 || &dword_CC8A8 == (int *)v282 || *(_WORD *)(v282 + 32) > 0x42u;
                std::_Rb_tree_insert_and_rebalance(v283, v347, v282, &dword_CC8A8);
                ++qword_CC8C8;
                v276 = v347;
              }
              else if ( v347 )
              {
                v294 = v347;
                v357 = (int *)v281;
                operator delete(v294, 0x40u);
                v276 = v357;
              }
            }
            v284 = *((_WORD **)v276 + 5);
            if ( *((_QWORD *)v276 + 7) <= 2u )
            {
              v367 = v276;
              v304 = qvector_reserve(v276 + 10, v284, 3, 1);
              v276 = v367;
              v284 = (_WORD *)v304;
              *((_QWORD *)v367 + 5) = v304;
            }
            *((_QWORD *)v276 + 6) = 3;
            *v284 = 9766;
            *(_BYTE *)(*((_QWORD *)v276 + 5) + 2LL) = 0;
          }
          v127 = sub_97BF0(v407);
          v128 = qword_CC8B0;
          v129 = v127;
          if ( !qword_CC8B0 )
            goto LABEL_264;
          v130 = qword_CC8B0;
          v131 = &dword_CC8A8;
          do
          {
            if ( *(_WORD *)(v130 + 32) >= (unsigned __int16)v129 )
            {
              v131 = (int *)v130;
              v130 = *(_QWORD *)(v130 + 16);
            }
            else
            {
              v130 = *(_QWORD *)(v130 + 24);
            }
          }
          while ( v130 );
          if ( v131 == &dword_CC8A8 || (unsigned __int16)v129 < *((_WORD *)v131 + 16) )
          {
LABEL_264:
            v392 = 0;
            v172 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v410 + 528))((unsigned __int16)v129, &v392);
            v173 = 2;
            v174 = n[1];
            if ( v174 )
              v173 = v174-- + 1;
            v175 = *n;
            if ( n[2] < v173 )
            {
              v380 = v172;
              v348 = (void *)v173;
              v175 = qvector_reserve(n, v175, v173, 1);
              v172 = v380;
              v173 = (unsigned __int64)v348;
              *n = v175;
            }
            n[1] = v173;
            *(_BYTE *)(v175 + v174) = v172;
            *(_BYTE *)(*n + v174 + 1) = 0;
          }
          else
          {
            v152 = &dword_CC8A8;
            do
            {
              if ( *(_WORD *)(v128 + 32) >= (unsigned __int16)v129 )
              {
                v152 = (int *)v128;
                v128 = *(_QWORD *)(v128 + 16);
              }
              else
              {
                v128 = *(_QWORD *)(v128 + 24);
              }
            }
            while ( v128 );
            if ( v152 == &dword_CC8A8 || (unsigned __int16)v129 < *((_WORD *)v152 + 16) )
            {
              v383 = (__int64)v152;
              v338 = v129;
              v153 = operator new(0x40u);
              *(_QWORD *)(v153 + 40) = 0;
              *(_OWORD *)(v153 + 48) = 0;
              *(_WORD *)(v153 + 32) = v338;
              v370 = (int *)v153;
              v155 = sub_53340(&qword_CC8A0, v383, v338, v338, v154);
              v152 = (int *)v155;
              if ( v156 )
              {
                v157 = v155 || &dword_CC8A8 == (int *)v156 || (unsigned __int16)v338 < *(_WORD *)(v156 + 32);
                std::_Rb_tree_insert_and_rebalance(v157, v370, v156, &dword_CC8A8);
                ++qword_CC8C8;
                v152 = v370;
              }
              else if ( v370 )
              {
                v349 = (int *)v155;
                operator delete(v370, 0x40u);
                v152 = v349;
              }
            }
            v158 = *((char **)v152 + 6);
            if ( v158 )
            {
              v159 = (size_t)(v158 - 1);
              if ( v158 != (_BYTE *)&dword_0 + 1 )
              {
                v160 = v158 - 1;
                v161 = n[1];
                if ( v161 )
                {
                  --v161;
                  v160 = (char *)(v159 + v161);
                  v158 += v161;
                }
                v162 = *n;
                if ( n[2] < (unsigned __int64)v158 )
                {
                  v385 = v160;
                  v384 = v159;
                  v382 = v152;
                  v369 = v158;
                  v162 = qvector_reserve(n, v162, v158, 1);
                  v160 = v385;
                  v159 = v384;
                  v152 = v382;
                  *n = v162;
                  v158 = v369;
                }
                n[1] = (__int64)v158;
                v160[v162] = 0;
                memcpy((void *)(v161 + *n), *((const void **)v152 + 5), v159);
              }
            }
          }
          v163 = (const char *)sub_986B0(v407);
          if ( !v163 || (na = (size_t)v163, v166 = strlen(v163), v164 = (const void *)na, (v165 = v166) == 0) )
          {
            *(_QWORD *)&v402 = 0;
            goto LABEL_238;
          }
          v285 = dest;
          v286 = v166 + 1;
          if ( *((_QWORD *)&v402 + 1) < v166 + 1 )
          {
            v381 = (void *)v166;
            v368 = (void *)na;
            ni = v166 + 1;
            dest = (void *)qvector_reserve(&dest, dest, v286, 1);
            v165 = (size_t)v381;
            v285 = dest;
            v164 = v368;
            v286 = ni;
          }
          *(_QWORD *)&v402 = v286;
          nj = v165;
          memmove(v285, v164, v165);
          v165 = nj;
          *((_BYTE *)dest + nj) = 0;
          if ( (unsigned __int64)v402 <= 1 )
          {
LABEL_238:
            LODWORD(v392) = 0;
            *(_QWORD *)v411 = 0;
            if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *, char *, const void *, size_t))(v410 + 112))(
                    *(_QWORD *)(*(_QWORD *)v407 + 24LL),
                    71,
                    &v392,
                    v6,
                    v164,
                    v165)
              && (_DWORD)v392 )
            {
              sub_84A60(v6);
              if ( (unsigned __int8)sub_9AB20(v407, v6) )
              {
                v167 = (const char *)sub_986B0(v6);
                sub_20160((__int64 *)&dest, (__int64)"(spec of) %s", v167);
              }
              sub_1B750((__int64)v6);
            }
          }
          v168 = v307[68];
          if ( v168 != 1 )
          {
            if ( (v168 & 0xFFFFFFFD) != 0 )
              goto LABEL_245;
            goto LABEL_259;
          }
          if ( v307[96] == 5 )
          {
LABEL_259:
            v169 = v400;
            if ( (unsigned __int64)v400 > 1 )
            {
              v170 = (char *)src;
              v171 = v400 + 1;
              if ( *((_QWORD *)&v400 + 1) < (unsigned __int64)(v400 + 1) )
              {
                nh = v400 + 1;
                src = (void *)qvector_reserve(&src, src, v171, 1);
                v171 = nh;
                v170 = (char *)src;
              }
              *(_QWORD *)&v400 = v171;
              v170[v169 - 1] = 32;
              *((_BYTE *)src + v169) = 0;
            }
            sub_1F510((__int64 *)&src, (__int64)"%s=%s", "color", "red");
            v168 = v307[68];
LABEL_245:
            if ( v168 == 2 && v307 && (v307[103] & 1) != 0 )
              sub_1F510((__int64 *)&dest, (__int64)"\\nVARIATION OF %llu BITS", *((_QWORD *)v307 + 52));
          }
          switch ( v307[84] )
          {
            case 0:
              v147 = "none";
              break;
            case 1:
              v147 = "add";
              break;
            case 2:
              v147 = "mirror";
              break;
            case 3:
              v147 = "replace";
              break;
            case 4:
              v147 = "skip";
              break;
            case 5:
              v147 = "drop";
              break;
            default:
              v147 = "UNKNOWN";
              break;
          }
          sub_1F510((__int64 *)&dest, (__int64)"\\nAction: %s", v147);
        }
        sub_1B750((__int64)v407);
        goto LABEL_71;
      }
      if ( under_debugger )
        goto LABEL_451;
      v21 = 30478;
      v18 = interr(30478);
    }
    sub_1F510((__int64 *)&src, (__int64)"%s=%s", "shape", "house");
    numbered_type_name = (const char *)get_numbered_type_name(*((_QWORD *)v11 + 1), *((unsigned int *)v11 + 4));
    if ( numbered_type_name
      && (v310 = numbered_type_name, v94 = strlen(numbered_type_name), v95 = v310, (v96 = v94) != 0) )
    {
      v148 = dest;
      v149 = (void *)(v94 + 1);
      if ( *((_QWORD *)&v402 + 1) < v94 + 1 )
      {
        v337 = (void *)v94;
        ng = (size_t)v310;
        v317 = (void *)(v94 + 1);
        dest = (void *)qvector_reserve(&dest, dest, v149, 1);
        v96 = (size_t)v337;
        v148 = dest;
        v95 = (const void *)ng;
        v149 = v317;
      }
      *(_QWORD *)&v402 = v149;
      v315 = (_BYTE *)v96;
      memmove(v148, v95, v96);
      v315[(_QWORD)dest] = 0;
    }
    else
    {
      *(_QWORD *)&v402 = 0;
    }
    sub_1F510((__int64 *)&dest, (__int64)"\\n(ordinal=%d)", *((_DWORD *)v11 + 4));
    *(_QWORD *)v407 = 0;
    v97 = *((_DWORD *)v11 + 4);
    idati = *((_QWORD *)v11 + 1);
    *(_WORD *)&v411[16] = 257;
    *(_QWORD *)&v411[8] = v97;
    if ( !idati )
      idati = get_idati(&dest, "\\n(ordinal=%d)", v97);
    *(_QWORD *)v411 = idati;
    if ( (unsigned __int8)create_tinfo(v407, 61, 189, v6)
      && (unsigned __int8)sub_57FF0(a2[5].m128i_i64[0], (__int64 *)v407) )
    {
      v99 = v400;
      if ( (unsigned __int64)v400 > 1 )
      {
        v100 = (char *)src;
        v101 = (void *)(v400 + 1);
        if ( *((_QWORD *)&v400 + 1) < (unsigned __int64)(v400 + 1) )
        {
          nc = v400;
          v318 = (void *)(v400 + 1);
          src = (void *)qvector_reserve(&src, src, v101, 1);
          v99 = nc;
          v100 = (char *)src;
          v101 = v318;
        }
        *(_QWORD *)&v400 = v101;
        v100[v99 - 1] = 32;
        *((_BYTE *)src + v99) = 0;
      }
      sub_1F510((__int64 *)&src, (__int64)"%s=%s", "color", "gray");
      v102 = v400;
      if ( (unsigned __int64)v400 > 1 )
      {
        v103 = (char *)src;
        v104 = (void *)(v400 + 1);
        if ( *((_QWORD *)&v400 + 1) < (unsigned __int64)(v400 + 1) )
        {
          nd = v400;
          v319 = (void *)(v400 + 1);
          src = (void *)qvector_reserve(&src, src, v104, 1);
          v102 = nd;
          v103 = (char *)src;
          v104 = v319;
        }
        *(_QWORD *)&v400 = v104;
        v103[v102 - 1] = 32;
        *((_BYTE *)src + v102) = 0;
      }
      sub_1F510((__int64 *)&src, (__int64)"%s=%s", "fontcolor", "gray");
      v105 = v402;
      if ( (_QWORD)v402 )
      {
        v106 = v402 + 13;
        v107 = v402 + 14;
        v105 = v402 - 1;
      }
      else
      {
        v107 = 15;
        v106 = 14;
      }
      v108 = dest;
      if ( *((_QWORD *)&v402 + 1) < v107 )
      {
        ne = v105;
        v322 = v106;
        v316 = (void *)v107;
        dest = (void *)qvector_reserve(&dest, dest, v107, 1);
        v105 = ne;
        v108 = dest;
        v106 = v322;
        v107 = (unsigned __int64)v316;
      }
      *(_QWORD *)&v402 = v107;
      v108[v106] = 0;
      qmemcpy((char *)dest + v105, "\\n<dummy type>", 14);
    }
    clear_tinfo_t(v407);
LABEL_71:
    v57 = v398;
    v58 = v397;
    if ( *((_QWORD *)&v398 + 1) < (unsigned __int64)(v398 + 1) )
    {
      v397 = qvector_reserve(&v397, v397, v398 + 1, 24);
      v57 = v398;
      v58 = v397;
    }
    v59 = 3 * v57;
    v60 = ::src;
    v61 = v58 + 8 * v59;
    *(_QWORD *)v61 = 0;
    *(_OWORD *)(v61 + 8) = 0;
    *(_QWORD *)&v398 = v398 + 1;
    if ( (_QWORD)v402 )
      v60 = (const char *)dest;
    sub_20160((__int64 *)v61, (__int64)"%s", v60);
    v62 = v400;
    if ( (unsigned __int64)v400 > 1 )
    {
      v63 = src;
      v64 = (void *)(v400 + 1);
      if ( *((_QWORD *)&v400 + 1) < (unsigned __int64)(v400 + 1) )
      {
        v312 = (void *)(v400 + 1);
        src = (void *)qvector_reserve(&src, src, v64, 1);
        v64 = v312;
        v63 = src;
      }
      *(_QWORD *)&v400 = v64;
      v63[v62] = 0;
      memmove((char *)src + 1, src, v62 - 1);
      *(_BYTE *)src = 91;
      v65 = v400;
      v66 = src;
      if ( (_QWORD)v400 )
      {
        v67 = v400 + 1;
        v68 = v400 - 1;
        if ( *((_QWORD *)&v400 + 1) >= (unsigned __int64)(v400 + 1) )
          goto LABEL_80;
      }
      else
      {
        if ( *((_QWORD *)&v400 + 1) > 1u )
        {
          *(_QWORD *)&v400 = 2;
          *((_BYTE *)src + 1) = 0;
LABEL_82:
          v69 = 2;
          *(_BYTE *)src = 32;
          v70 = v400;
          if ( (_QWORD)v400 )
          {
            v69 = v400 + 1;
            v70 = v400 - 1;
          }
          v71 = src;
          if ( *((_QWORD *)&v400 + 1) < v69 )
          {
            src = (void *)qvector_reserve(&src, src, v69, 1);
            v71 = src;
          }
          *(_QWORD *)&v400 = v69;
          v71[v70] = 93;
          *((_BYTE *)src + v70 + 1) = 0;
          goto LABEL_87;
        }
        v68 = 0;
        v67 = 2;
      }
      src = (void *)qvector_reserve(&src, src, v67, 1);
      v66 = src;
      v65 = v68 + 1;
LABEL_80:
      *(_QWORD *)&v400 = v67;
      v66[v65] = 0;
      if ( v68 )
        memmove((char *)src + 1, src, v68);
      goto LABEL_82;
    }
LABEL_87:
    v72 = 0;
    v73 = 0;
    v74 = 0;
    memset(v411, 0, sizeof(v411));
    if ( (_QWORD)v398 )
    {
      while ( 1 )
      {
        v75 = 3 * v72;
        v76 = ::src;
        v77 = v397 + 8 * v75;
        if ( *(_QWORD *)(v77 + 8) )
          v76 = *(const char **)v77;
        if ( v76 )
        {
          v78 = strlen(v76);
          v79 = v78;
          v80 = v78;
          if ( v74 )
          {
            --v74;
            v80 = v78 + v74;
          }
          v81 = *(_QWORD *)v411;
          v82 = (void *)(v80 + 1);
          if ( *(_QWORD *)&v411[16] < v80 + 1 )
          {
            nb = v78;
            v320 = v80;
            v308 = (void *)(v80 + 1);
            *(_QWORD *)v411 = qvector_reserve(v6, *(_QWORD *)v411, v82, 1);
            v79 = nb;
            v81 = *(_QWORD *)v411;
            v80 = v320;
            v82 = v308;
          }
          *(_QWORD *)&v411[8] = v82;
          *(_BYTE *)(v81 + v80) = 0;
          memmove((void *)(v74 + *(_QWORD *)v411), v76, v79);
          v74 = *(_QWORD *)&v411[8];
        }
        v72 = ++v73;
        if ( v73 >= (unsigned __int64)v398 )
          break;
        if ( v73 > 0 )
        {
          if ( v74 )
          {
            v83 = v74 + 1;
            v84 = v74 + 2;
            --v74;
          }
          else
          {
            v84 = 3;
            v83 = 2;
          }
          v85 = *(_QWORD *)v411;
          if ( *(_QWORD *)&v411[16] < v84 )
          {
            v321 = v83;
            v309 = (void *)v84;
            *(_QWORD *)v411 = qvector_reserve(v6, *(_QWORD *)v411, v84, 1);
            v83 = v321;
            v85 = *(_QWORD *)v411;
            v84 = (unsigned __int64)v309;
          }
          *(_QWORD *)&v411[8] = v84;
          *(_BYTE *)(v85 + v83) = 0;
          *(_WORD *)(*(_QWORD *)v411 + v74) = 28252;
          v74 = *(_QWORD *)&v411[8];
        }
      }
      v86 = ::src;
      if ( (_QWORD)v400 )
        v86 = (const char *)src;
      v87 = ::src;
      if ( v74 )
        v87 = *(const char **)v411;
    }
    else
    {
      v86 = ::src;
      v87 = ::src;
      if ( (_QWORD)v400 )
        v86 = (const char *)src;
    }
    sub_1F510((__int64 *)&v393, (__int64)"  n%zu [label=\"%s\"]%s;\n", v10, v87, v86);
    if ( *(_QWORD *)v411 )
    {
      *(_QWORD *)&v411[8] = 0;
      qfree(*(_QWORD *)v411);
    }
    if ( dest )
    {
      *(_QWORD *)&v402 = 0;
      qfree(dest);
    }
    if ( src )
    {
      *(_QWORD *)&v400 = 0;
      qfree(src);
    }
    v88 = v397;
    if ( v397 )
    {
      v89 = v398;
      if ( (_QWORD)v398 )
      {
        v90 = 0;
        do
        {
          v91 = (__int64 *)(v88 + 24 * v90);
          v92 = *v91;
          if ( *v91 )
          {
            v91[1] = 0;
            qfree(v92);
            v88 = v397;
          }
          ++v90;
        }
        while ( v89 != v90 );
      }
      *(_QWORD *)&v398 = 0;
      qfree(v88);
    }
    if ( v305 != ++v10 )
    {
      v9 = v396;
      v8 = v395;
      continue;
    }
    break;
  }
  v133 = v404;
  if ( (_QWORD)v404 )
  {
    v305 = v406;
LABEL_183:
    v134 = 0;
    v135 = 0;
    while ( 1 )
    {
      v136 = ::src;
      v137 = (__int64 *)(v134 + v403);
      if ( *(_QWORD *)(v134 + v403 + 40) )
        v136 = (const char *)v137[4];
      v412 = 0;
      v138 = _mm_loadu_si128((const __m128i *)(v137 + 1));
      v139 = v405 + 32 * v305;
      *(_QWORD *)&v411[16] = v137[3];
      *(__m128i *)v411 = v138;
      if ( v405 == v139 )
      {
        v150 = *v137;
        LODWORD(v146) = 0;
        LODWORD(v144) = 0;
        v408 = 0;
        *(_OWORD *)&v407[4] = 0;
        *(_DWORD *)v407 = 1;
        *(_QWORD *)&v407[8] = v150;
      }
      else
      {
        v140 = v405;
        do
        {
          if ( *(_OWORD *)v6 - *(_OWORD *)v140 == 0 && *(_QWORD *)(v140 + 16) == *((_QWORD *)v6 + 2) )
            break;
          v140 += 32;
        }
        while ( v139 != v140 );
        v141 = *v137;
        v408 = 0;
        *(_OWORD *)&v407[4] = 0;
        v142 = v140 - v405;
        v143 = v405;
        *(_QWORD *)&v407[8] = v141;
        v144 = v142 >> 5;
        *(_DWORD *)v407 = 1;
        v145 = _mm_load_si128((const __m128i *)v407);
        *(_QWORD *)&v411[16] = 0;
        v412 = 0;
        *(__m128i *)v411 = v145;
        do
        {
          if ( *(_OWORD *)v6 - *(_OWORD *)v143 == 0 && *(_QWORD *)(v143 + 16) == *((_QWORD *)v6 + 2) )
          {
            v146 = (v143 - v405) >> 5;
            goto LABEL_196;
          }
          v143 += 32;
        }
        while ( v139 != v143 );
        LODWORD(v146) = (32 * v305) >> 5;
      }
LABEL_196:
      sub_1F510((__int64 *)&v393, (__int64)"  n%d -> n%d [label=\"%s\"];\n", v146, v144, v136);
      ++v135;
      v134 += 56;
      if ( v135 >= v133 )
        break;
      v305 = v406;
    }
  }
  v24 = 0;
  v306 = v396;
  if ( (_QWORD)v396 )
  {
    do
    {
      v25 = v394.m128i_i64[0];
      if ( v394.m128i_i64[0] )
      {
        v26 = v394.m128i_i64[0] + 16;
        v27 = v394.m128i_i64[0] + 17;
        v25 = v394.m128i_i64[0] - 1;
      }
      else
      {
        v27 = 18;
        v26 = 17;
      }
      v28 = (__int64)v393;
      if ( v394.m128i_i64[1] < v27 )
      {
        v393 = (const char *)qvector_reserve(&v393, v393, v27, 1);
        v28 = (__int64)v393;
      }
      v29 = _mm_load_si128((const __m128i *)&xmmword_AB1C0);
      v394.m128i_i64[0] = v27;
      *(_BYTE *)(v28 + v26) = 0;
      v30 = (__m128i *)&v393[v25];
      v31 = 0;
      *v30 = v29;
      v32 = v395;
      v30[1].m128i_i8[0] = 32;
      v33 = (_QWORD *)(v32 + 24 * v24);
      v34 = v33[1];
      if ( v34 )
      {
        do
          sub_1F510((__int64 *)&v393, (__int64)"n%d;", *(_DWORD *)(*v33 + 4 * v31++));
        while ( v31 != v34 );
      }
      v35 = v394.m128i_i64[0];
      if ( v394.m128i_i64[0] )
      {
        v37 = v394.m128i_i64[0] + 1;
        v36 = v394.m128i_i64[0] + 2;
        v35 = v394.m128i_i64[0] - 1;
      }
      else
      {
        v36 = 3;
        v37 = 2;
      }
      v38 = (__int64)v393;
      if ( v394.m128i_i64[1] < v36 )
      {
        v314 = (void *)v36;
        v393 = (const char *)qvector_reserve(&v393, v393, v36, 1);
        v36 = (unsigned __int64)v314;
        v38 = (__int64)v393;
      }
      v394.m128i_i64[0] = v36;
      ++v24;
      *(_BYTE *)(v38 + v37) = 0;
      *(_WORD *)&v393[v35] = 2685;
    }
    while ( v24 != v306 );
  }
LABEL_47:
  v39 = fopenWT(&si128);
  sub_551B0(v39, (__int64)"digraph %s {\n", a3);
  sub_551B0(v39, (__int64)"  label=\"%s\";\n", a4);
  v40 = ::src;
  if ( v394.m128i_i64[0] )
    v40 = v393;
  sub_551B0(v39, (__int64)"%s", v40);
  sub_551B0(v39, (__int64)"}\n");
  qfclose(v39);
  v41 = qword_CC870;
  v42 = _mm_loadu_si128((const __m128i *)&xmmword_CC878);
  v43 = (__int64)v393;
  v44 = v395;
  v45 = _mm_loadu_si128(&v394);
  v393 = (const char *)qword_CC870;
  qword_CC870 = v43;
  xmmword_CC878 = (__int128)v45;
  v394 = v42;
  if ( v395 )
  {
    v46 = v396;
    if ( (_QWORD)v396 )
    {
      v47 = 0;
      do
      {
        v48 = (__int64 *)(v44 + 24 * v47);
        v49 = *v48;
        if ( *v48 )
        {
          v48[1] = 0;
          qfree(v49);
          v44 = v395;
        }
        ++v47;
      }
      while ( v46 != v47 );
    }
    *(_QWORD *)&v396 = 0;
    qfree(v44);
    v41 = (__int64)v393;
  }
  if ( v41 )
  {
    v394.m128i_i64[0] = 0;
    qfree(v41);
  }
  if ( v405 )
  {
    *(_QWORD *)&v406 = 0;
    qfree(v405);
  }
  v50 = v403;
  if ( v403 )
  {
    v51 = v404;
    if ( (_QWORD)v404 )
    {
      v52 = 0;
      v53 = 0;
      do
      {
        v54 = *(_QWORD *)(v50 + v52 + 32);
        if ( v54 )
        {
          *(_QWORD *)(v50 + v52 + 40) = 0;
          qfree(v54);
          v50 = v403;
        }
        ++v53;
        v52 += 56;
      }
      while ( v51 != v53 );
    }
    *(_QWORD *)&v404 = 0;
    qfree(v50);
  }
  return v414 - __readfsqword(0x28u);
}

