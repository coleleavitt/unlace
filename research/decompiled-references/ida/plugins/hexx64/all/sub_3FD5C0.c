__int64 __fastcall sub_3FD5C0(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        unsigned __int8 a4,
        double a5,
        double a6,
        __m128 a7)
{
  __m128i v7; // xmm0
  unsigned __int8 *v9; // r13
  __m128 si128; // xmm1
  unsigned __int8 *v12; // rax
  __int64 v13; // r14
  int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rcx
  void *v17; // r14
  unsigned int v18; // ebx
  __int64 v19; // rdi
  __int64 v21; // rax
  __int16 v22; // ax
  __int64 v23; // rdx
  __int64 v24; // r14
  unsigned int dtype_size; // ebx
  __m128i v26; // xmm0
  __m128i v27; // xmm5
  unsigned int v28; // eax
  __int64 v29; // r14
  unsigned int v30; // ebx
  int v31; // ebx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rsi
  _DWORD *v45; // rsi
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int32 v48; // r8d
  __m128i v49; // xmm0
  __m128i v50; // xmm3
  __int64 v51; // rcx
  int v52; // eax
  unsigned __int8 v53; // bl
  __int64 v54; // rcx
  __int64 v55; // rax
  __m128i v56; // xmm0
  __int64 v57; // r14
  unsigned int v58; // ebx
  __int64 v59; // r14
  int v60; // ebx
  __int64 v61; // rax
  __int64 v62; // rbx
  int v63; // eax
  int v64; // eax
  __int64 v65; // rbx
  int v66; // eax
  __int64 v67; // rbx
  int v68; // eax
  int v69; // esi
  __int64 v70; // r14
  int v71; // ebx
  char v72; // al
  __int32 v73; // r8d
  __int16 *v74; // rbx
  int v75; // eax
  int v76; // eax
  __int64 v77; // rsi
  unsigned __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // eax
  unsigned int v81; // ebx
  int v82; // eax
  char v83; // dl
  char v84; // al
  int v85; // r14d
  __int64 v86; // rsi
  char *v87; // rax
  unsigned int v88; // r14d
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // r14
  int v92; // ebx
  __int64 v93; // rcx
  __m128i *v94; // roff
  char *v95; // rax
  __int64 v96; // rdi
  __int64 *v97; // r14
  __int32 v98; // eax
  unsigned int v99; // r14d
  __int64 v100; // rsi
  __int64 v101; // r14
  __int64 v102; // rdx
  void *v103; // rax
  bool v104; // zf
  unsigned __int8 v105; // al
  int v106; // ecx
  __int32 v107; // eax
  unsigned int v108; // ebx
  __int64 v109; // rax
  const char *v110; // rbx
  char v111; // al
  __int64 v112; // rdi
  __int64 v113; // rsi
  const __m128i *v114; // rdx
  __int64 v115; // rcx
  unsigned __int8 *v116; // rsi
  const __m128i *v117; // rdi
  __m128i v118; // xmm0
  __m128i v119; // xmm7
  __int64 v120; // rbx
  int v121; // eax
  int v122; // ebx
  int v123; // ebx
  __int64 v124; // r14
  int v125; // ebx
  __int64 v126; // rax
  __int64 v127; // rbx
  __int64 v128; // r8
  int v129; // eax
  int v130; // eax
  int v131; // eax
  int v132; // eax
  __int64 v133; // rcx
  __int16 v134; // ax
  _WORD *v135; // rdx
  unsigned int v136; // ebx
  int v137; // esi
  int v138; // eax
  __int64 v139; // roff
  __int64 v140; // rsi
  __m128i v141; // xmm0
  unsigned int v142; // eax
  char *v143; // rax
  char v144; // cl
  char v145; // dl
  int v146; // ebx
  int v147; // eax
  int v148; // ebx
  int v149; // eax
  __int16 *v150; // rbx
  __int16 i; // ax
  __int64 v152; // rdx
  unsigned __int64 *v153; // rsi
  __int64 v154; // r8
  int v155; // r14d
  int v156; // eax
  int v157; // eax
  unsigned int v158; // r14d
  int v159; // eax
  int v160; // eax
  __int16 v161; // ax
  int v162; // eax
  __int64 v163; // rbx
  __int64 v164; // rbx
  __int64 v165; // rcx
  unsigned __int8 *v166; // rsi
  int v167; // eax
  __int64 v168; // rdx
  _QWORD *v169; // rbx
  unsigned int v170; // ebx
  unsigned int v171; // ebx
  char v172; // al
  __int16 v173; // ax
  __int16 *v174; // rbx
  __int16 j; // ax
  int v176; // eax
  int v177; // eax
  __int16 v178; // ax
  __int16 *v179; // rdx
  __int16 *v180; // rcx
  int v181; // eax
  int v182; // eax
  _WORD *v183; // rdx
  __int16 v184; // ax
  __int64 v185; // rbx
  unsigned __int8 *v186; // r14
  __int64 v187; // rsi
  __int64 v188; // rdx
  int v189; // eax
  __m128i v190; // xmm1
  __m128i v191; // xmm0
  __m128i v192; // xmm0
  __int64 v193; // rax
  unsigned int v194; // eax
  char v195; // al
  char v196; // al
  char v197; // al
  __int16 v198; // ax
  __int16 *v199; // r14
  char v200; // dl
  int v201; // eax
  char v202; // al
  int v203; // eax
  __int16 v204; // ax
  int v205; // eax
  int v206; // ebx
  __int16 v207; // ax
  __int16 *v208; // rdx
  __int16 *v209; // r14
  int v210; // ebx
  int v211; // eax
  int v212; // eax
  __int64 v213; // rax
  int v214; // esi
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int32 v219; // eax
  unsigned int v220; // r14d
  __int64 v221; // rax
  char *v222; // r14
  int v223; // eax
  __int32 v224; // eax
  __int64 v225; // rax
  char *v226; // rax
  __int16 v227; // dx
  __int16 *v228; // rax
  void *v229; // rcx
  int v230; // ebx
  int v231; // eax
  int v232; // ebx
  int v233; // eax
  unsigned int v234; // ebx
  int v235; // eax
  unsigned __int64 v236; // rdx
  __int16 v237; // ax
  char *v238; // rax
  int v239; // eax
  unsigned int v240; // ebx
  __int64 v241; // r14
  int v242; // eax
  int v243; // eax
  _QWORD *v244; // rbx
  unsigned __int8 v245; // al
  __int64 v246; // rax
  int v247; // eax
  __int64 v248; // rcx
  int v249; // eax
  int v250; // ebx
  int v251; // eax
  char *v252; // rax
  unsigned int v253; // ebx
  __int16 v254; // ax
  unsigned __int64 v255; // rdx
  char v256; // al
  char v257; // al
  unsigned __int8 v258; // bl
  unsigned int v259; // r14d
  __int64 v260; // rbx
  int v261; // eax
  __int64 v262; // rax
  int v263; // ebx
  __int64 v264; // rbx
  unsigned __int8 v265; // al
  char *v266; // rax
  __int64 v267; // r14
  unsigned int v268; // ebx
  __int64 v269; // r14
  unsigned int v270; // ebx
  unsigned int v271; // ebx
  char v272; // al
  char *v273; // rax
  int v274; // eax
  unsigned int v275; // ebx
  int v276; // eax
  __int64 v277; // rsi
  __m128i v278; // xmm0
  char *v279; // xmm0_8
  __m128i v280; // xmm0
  char v281; // al
  char v282; // al
  __int64 v283; // rbx
  unsigned __int8 v284; // al
  __int64 v285; // r14
  unsigned int v286; // ebx
  __int64 v287; // r14
  unsigned int v288; // ebx
  __int64 v289; // rbx
  unsigned int v290; // ebx
  char v291; // al
  int v292; // ecx
  int v293; // ebx
  __int64 v294; // r14
  int v295; // ebx
  unsigned __int8 v296; // al
  char *v297; // rax
  unsigned int v298; // ebx
  __int64 v299; // r14
  unsigned int v300; // ebx
  char v301; // al
  char v302; // al
  __int64 v303; // rax
  __m128i v304; // xmm0
  unsigned __int64 v305; // rbx
  unsigned __int64 v306; // r14
  __int64 v307; // rdx
  __int64 v308; // rcx
  __int64 v309; // rax
  unsigned __int64 v310; // rdx
  __int64 v311; // rdx
  __int64 v312; // rcx
  int v313; // r14d
  int v314; // eax
  __int16 v315; // ax
  int v316; // eax
  int v317; // ebx
  __int64 v318; // rsi
  __int64 v319; // rax
  int v320; // ebx
  double v321; // xmm0_8
  int v322; // eax
  __int64 v323; // rdx
  __int64 v324; // rcx
  int v325; // eax
  unsigned int v326; // ebx
  unsigned int v327; // r14d
  __m128i *v328; // r14
  unsigned int v329; // ebx
  int tinfo_size; // eax
  __int64 v331; // roff
  __int64 v332; // rax
  char *v333; // rbx
  char *v334; // rax
  __int64 v335; // rax
  int v336; // eax
  int v337; // eax
  __int64 v338; // r14
  int v339; // ebx
  __int64 v340; // rax
  __int64 v341; // rax
  char *v342; // rax
  int v343; // ebx
  int v344; // eax
  int v345; // ebx
  int v346; // eax
  __int64 v347; // r14
  unsigned int v348; // ebx
  __int64 v349; // r14
  unsigned int v350; // ebx
  __int64 v351; // rax
  int v352; // r14d
  __int64 v353; // r14
  unsigned int v354; // ebx
  __int64 v355; // rbx
  int v356; // eax
  int v357; // eax
  int v358; // r14d
  __int64 v359; // rbx
  unsigned __int8 v360; // al
  __int64 v361; // rbx
  unsigned __int8 v362; // al
  unsigned __int8 v363; // cl
  char v364; // al
  char v365; // al
  int v366; // eax
  char *v367; // rax
  __int64 v368; // rbx
  unsigned __int8 v369; // al
  int v370; // eax
  int v371; // eax
  unsigned int v372; // ebx
  char v373; // al
  char v374; // al
  int v375; // eax
  char *v376; // rax
  int v377; // ecx
  int v378; // r14d
  __int64 v379; // r14
  char v380; // dl
  int v381; // edx
  int v382; // eax
  __int16 *v383; // rdx
  int v384; // eax
  __m128i *v385; // rbx
  int v386; // eax
  __int32 v387; // r8d
  int v388; // eax
  int v389; // eax
  int v390; // eax
  int v391; // eax
  int v392; // ebx
  int v393; // eax
  char v394; // bl
  int v395; // r14d
  int v396; // eax
  int v397; // eax
  unsigned int v398; // ebx
  int v399; // eax
  unsigned __int8 v400; // bl
  __int64 v401; // r14
  int v402; // r14d
  unsigned __int8 dtype_by_size; // al
  __int64 v404; // rbx
  unsigned __int64 v405; // rdx
  __int16 v406; // ax
  unsigned int v407; // ebx
  __int64 v408; // rdx
  __int64 v409; // rcx
  unsigned __int64 v410; // rbx
  __m128i v411; // xmm0
  __int64 v412; // rax
  int v413; // edx
  int v414; // esi
  __int64 v415; // rdx
  __int64 v416; // rcx
  __int64 v417; // rdx
  __int64 v418; // rcx
  int v419; // esi
  __int64 v420; // rdx
  __int64 v421; // rcx
  int v422; // esi
  __int64 v423; // rdx
  __int64 v424; // rcx
  int v425; // esi
  __int64 v426; // rdx
  __int64 v427; // rcx
  __int16 v428; // ax
  char v429; // dl
  unsigned __int8 *v430; // rax
  __int32 v431; // r9d
  unsigned int v432; // eax
  int v433; // eax
  int v434; // eax
  __int32 v435; // eax
  __int64 v436; // rax
  __int64 v437; // rax
  __m128i *v438; // rbx
  int v439; // eax
  __int16 v440; // ax
  __int64 tinfo_property; // rax
  int v442; // r14d
  int v443; // r14d
  int v444; // eax
  __int64 v445; // rax
  int v446; // eax
  char v447; // al
  __int64 v448; // rax
  __int16 v449; // ax
  int v450; // eax
  int v451; // eax
  __int64 v452; // rax
  int v453; // eax
  __int16 v454; // ax
  int v455; // eax
  int v456; // eax
  __m128i *v457; // rax
  char v458; // dl
  int v459; // eax
  int v460; // eax
  unsigned int v461; // [rsp-8h] [rbp-5F8h]
  int v462; // [rsp-8h] [rbp-5F8h]
  int v463; // [rsp-8h] [rbp-5F8h]
  __int64 v464; // [rsp+0h] [rbp-5F0h]
  char v465; // [rsp+8h] [rbp-5E8h]
  int v466; // [rsp+8h] [rbp-5E8h]
  unsigned int v467; // [rsp+Ch] [rbp-5E4h]
  __int64 v468; // [rsp+10h] [rbp-5E0h] BYREF
  int v469; // [rsp+18h] [rbp-5D8h]
  int v470; // [rsp+1Ch] [rbp-5D4h]
  char *v471; // [rsp+20h] [rbp-5D0h]
  void *v472; // [rsp+28h] [rbp-5C8h]
  int v473; // [rsp+30h] [rbp-5C0h]
  unsigned __int8 v474; // [rsp+37h] [rbp-5B9h]
  unsigned __int8 *v475; // [rsp+38h] [rbp-5B8h]
  __m128i v476; // [rsp+40h] [rbp-5B0h] BYREF
  __m128i *v477; // [rsp+50h] [rbp-5A0h]
  __m128i v478; // [rsp+58h] [rbp-598h] BYREF
  __m128i v479; // [rsp+68h] [rbp-588h] BYREF
  __int64 v480; // [rsp+78h] [rbp-578h]
  __int64 v481; // [rsp+80h] [rbp-570h] BYREF
  int v482; // [rsp+88h] [rbp-568h]
  __int64 v483; // [rsp+90h] [rbp-560h] BYREF
  unsigned __int64 v484; // [rsp+98h] [rbp-558h]
  char v485; // [rsp+A0h] [rbp-550h]
  __int64 v486[2]; // [rsp+B0h] [rbp-540h] BYREF
  __int64 v487; // [rsp+C0h] [rbp-530h] BYREF
  __m128i v488; // [rsp+C8h] [rbp-528h]
  const void *v489[2]; // [rsp+E0h] [rbp-510h] BYREF
  void *src; // [rsp+F0h] [rbp-500h] BYREF
  __int128 v491; // [rsp+F8h] [rbp-4F8h]
  __int64 v492; // [rsp+110h] [rbp-4E0h] BYREF
  __int64 v493; // [rsp+118h] [rbp-4D8h]
  __int64 v494; // [rsp+120h] [rbp-4D0h] BYREF
  __m128i v495; // [rsp+128h] [rbp-4C8h] BYREF
  char *s1[3]; // [rsp+140h] [rbp-4B0h] BYREF
  __int128 v497; // [rsp+158h] [rbp-498h]
  unsigned __int8 v498[4]; // [rsp+170h] [rbp-480h] BYREF
  unsigned int v499; // [rsp+174h] [rbp-47Ch]
  __int64 v500; // [rsp+178h] [rbp-478h]
  __int64 v501; // [rsp+180h] [rbp-470h]
  __int64 v502; // [rsp+188h] [rbp-468h]
  char v503[4]; // [rsp+1C0h] [rbp-430h] BYREF
  __int64 v504; // [rsp+1C4h] [rbp-42Ch]
  char v505[24]; // [rsp+210h] [rbp-3E0h] BYREF
  _BYTE v506[24]; // [rsp+260h] [rbp-390h] BYREF
  _BYTE v507[360]; // [rsp+2B0h] [rbp-340h] BYREF
  char v508; // [rsp+418h] [rbp-1D8h] BYREF
  char v509[368]; // [rsp+420h] [rbp-1D0h] BYREF
  char s[31]; // [rsp+590h] [rbp-60h] BYREF
  char v511; // [rsp+5AFh] [rbp-41h] BYREF
  unsigned __int64 v512; // [rsp+5B8h] [rbp-38h]

  v7 = 0;
  v9 = v507;
  v478.m128i_i64[1] = a2;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_4247F0);
  v477 = (__m128i *)a3;
  v474 = a4;
  v512 = __readfsqword(0x28u);
  v488 = 0;
  v12 = v498;
  v486[0] = 0;
  v486[1] = 0;
  v487 = 0;
  v489[0] = nullptr;
  v489[1] = nullptr;
  src = nullptr;
  v492 = 0;
  v493 = 0;
  v494 = 0;
  v491 = 0;
  v495 = 0;
  do
  {
    *((_DWORD *)v12 + 1) = -1;
    v12 += 80;
    *((_WORD *)v12 - 40) = 0;
    *((_WORD *)v12 - 39) = 0;
    *((_QWORD *)v12 - 9) = 0;
    *((__m128 *)v12 - 4) = si128;
    *((_QWORD *)v12 - 6) = 0;
    *(_OWORD *)(v12 - 40) = 0;
    *((_DWORD *)v12 - 6) = 0;
    *((_QWORD *)v12 - 2) = 0;
    *((_DWORD *)v12 - 2) = 0;
  }
  while ( v12 != v507 );
  v13 = *(_QWORD *)(a1 + 832);
  v14 = *(_DWORD *)(v13 + 452);
  v15 = v13;
  v478.m128i_i32[0] = *(_DWORD *)(a1 + 52) & 7;
  v470 = v14;
  v469 = *(_DWORD *)(v13 + 464);
  v476.m128i_i32[0] = *(_DWORD *)(v13 + 388);
  v16 = *(unsigned int *)(v13 + 380);
  v473 = *(_DWORD *)(v13 + 380);
  if ( v478.m128i_i32[0] == 2 )
  {
    v22 = *(_WORD *)(a1 + 48);
    if ( v22 == 45 )
    {
      v51 = v478.m128i_i64[1];
      v52 = *(_DWORD *)(v13 + 404);
      *(_BYTE *)(v478.m128i_i64[1] + 16) = 1;
      *(_DWORD *)(v51 + 12) = v52;
    }
    else
    {
      if ( v22 != 133 )
        goto LABEL_6;
      v23 = v478.m128i_i64[1];
      *(_DWORD *)(v478.m128i_i64[1] + 12) = *(_DWORD *)(v13 + 408);
      *(_BYTE *)(v23 + 16) = 1;
      v474 = *(_BYTE *)(a1 + 109);
    }
    if ( v474 > 2u && v474 != 7 )
      goto LABEL_6;
    qsnprintf();
    v24 = *(_QWORD *)(a1 + 832);
    dtype_size = get_dtype_size();
    v479.m128i_i64[0] = (__int64)s1;
    sub_32C430((__int64 *)s1, v24, dtype_size, 2);
    sub_32F0D0((__int64)v498, v473, dtype_size);
    clear_tinfo_t();
    v26 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL));
    if ( !*(_BYTE *)(v478.m128i_i64[1] + 16) )
    {
      v478.m128i_i32[0] = _mm_cvtsi128_si32(v26);
      v257 = sub_3FACB0(v478.m128i_i64[1], v26, si128, a7);
      v26 = _mm_cvtsi32_si128(v478.m128i_u32[0]);
      if ( !v257 )
        sub_3EB430(*(double *)v26.m128i_i64);
    }
    v503[0] = 1;
    v27 = _mm_cvtsi32_si128(*(_DWORD *)(v478.m128i_i64[1] + 12));
    v478.m128i_i32[0] = *(_DWORD *)(v478.m128i_i64[1] + 12);
    v7 = _mm_unpacklo_epi32(v26, v27);
    v504 = v7.m128i_i64[0];
    v28 = get_dtype_size();
    sub_32C430(&v483, *(_QWORD *)(a1 + 832), v28, 2);
    sub_32C540(v479.m128i_i64[0], *(_QWORD *)(a1 + 832), &v483);
    copy_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    v29 = *(_QWORD *)(a1 + 832);
    v30 = get_dtype_size();
    sub_32C430((__int64 *)v479.m128i_i64[0], v29, v30, 2);
    sub_32F0D0((__int64)v505, v476.m128i_i32[0], v30);
    v31 = 0;
    v17 = nullptr;
    clear_tinfo_t();
    LOBYTE(v468) = 0;
    LODWORD(v475) = 0;
    v465 = 1;
    v476.m128i_i32[0] = 4;
    v478.m128i_i32[0] = 0;
    v472 = s;
    v467 = 0;
    LODWORD(v471) = 3;
LABEL_27:
    v464 = *(_QWORD *)(a1 + 8);
    if ( (int)v475 < 0 )
    {
      s1[0] = nullptr;
      copy_tinfo_t();
LABEL_29:
      v32 = sub_335B10(
              v464,
              *(_QWORD *)(a1 + 40),
              (__int64)v472,
              v479.m128i_i64[0],
              (int)v471,
              (__int64)v498,
              *(double *)v7.m128i_i64,
              si128,
              v31);
      clear_tinfo_t();
      *(_DWORD *)(*(_QWORD *)(v32 + 72) + 284LL) = v478.m128i_i32[0];
      *(_DWORD *)(*(_QWORD *)(v32 + 72) + 280LL) |= v476.m128i_i32[0];
      if ( !(unsigned __int8)sub_64880(v486) || v488.m128i_i64[0] )
      {
        if ( !(unsigned __int8)sub_64880(&v492) || v495.m128i_i64[0] )
          **(_DWORD **)(a1 + 8) |= 0x40u;
        v35 = (__int64 *)(*(_QWORD *)(v32 + 72) + 136LL);
        v478.m128i_i64[0] = *(_QWORD *)(v32 + 72);
        sub_64280(v35, v486, *(double *)v7.m128i_i64);
        sub_316CB0((__int64 *)(v478.m128i_i64[0] + 152), (const void **)&v487, v478.m128i_i64[0], v36);
        sub_316CB0((__int64 *)(*(_QWORD *)(v32 + 72) + 216LL), (const void **)&v487, *(_QWORD *)(v32 + 72), v37);
        v38 = *(_QWORD *)(v32 + 72);
        si128 = (__m128)_mm_loadu_si128(&v495);
        v39 = *(_QWORD *)(v38 + 176);
        *(_QWORD *)(v38 + 176) = v492;
        v40 = v493;
        v7 = _mm_loadu_si128((const __m128i *)(v38 + 200));
        *(__m128 *)(v38 + 200) = si128;
        v492 = v39;
        v41 = *(_QWORD *)(v38 + 184);
        *(_QWORD *)(v38 + 184) = v40;
        v34 = v494;
        v493 = v41;
        v33 = *(_QWORD *)(v38 + 192);
        *(_QWORD *)(v38 + 192) = v494;
        v494 = v33;
        v495 = v7;
      }
      sub_316CB0((__int64 *)(*(_QWORD *)(v32 + 72) + 216LL), (const void **)&src, v33, v34);
      if ( v465 )
        *(_DWORD *)(v32 + 4) |= 0x80000u;
      if ( (_BYTE)v468 )
      {
        if ( !*(_BYTE *)(v478.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], v7, si128, a7) )
          sub_3EB430(*(double *)v7.m128i_i64);
        v49 = _mm_cvtsi32_si128(*(_DWORD *)(v32 + 68));
        s1[0] = &byte_1;
        v50 = _mm_cvtsi32_si128(*(_DWORD *)(v478.m128i_i64[1] + 12));
        v478.m128i_i32[0] = *(_DWORD *)(v478.m128i_i64[1] + 12);
        v7 = _mm_unpacklo_epi32(v49, v50);
        *(__int64 *)((char *)s1 + 4) = v7.m128i_i64[0];
        v32 = (__int64)sub_125260(v32, (unsigned __int8 *)v479.m128i_i64[0], v42, v43);
        sub_11CDA0(v479.m128i_i64[0]);
      }
      goto LABEL_37;
    }
LABEL_28:
    s1[0] = (char *)(unsigned __int8)v475;
    goto LABEL_29;
  }
  if ( v478.m128i_i32[0] != 1 )
  {
    if ( v478.m128i_i32[0] )
      goto LABEL_6;
    v47 = *(unsigned __int16 *)(a1 + 48);
    v48 = *(_DWORD *)(v13 + 456);
    if ( (unsigned __int16)v47 > 0x708u )
      goto LABEL_6;
    if ( (unsigned __int16)v47 > 0x1BBu )
    {
      switch ( *(_WORD *)(a1 + 48) )
      {
        case 0x1BC:
        case 0x1C3:
        case 0x228:
        case 0x234:
          goto LABEL_288;
        case 0x1BD:
        case 0x1BF:
        case 0x1C4:
        case 0x1C6:
        case 0x1CF:
        case 0x1D2:
        case 0x1D3:
        case 0x1D5:
        case 0x1D6:
        case 0x1D9:
        case 0x1DA:
        case 0x1DB:
        case 0x1DC:
        case 0x1DE:
        case 0x1DF:
        case 0x238:
        case 0x23A:
        case 0x240:
        case 0x241:
        case 0x242:
        case 0x249:
        case 0x24A:
        case 0x254:
        case 0x255:
        case 0x256:
        case 0x257:
        case 0x258:
        case 0x259:
        case 0x25E:
        case 0x25F:
        case 0x260:
        case 0x261:
        case 0x262:
        case 0x263:
        case 0x264:
        case 0x265:
        case 0x266:
        case 0x267:
        case 0x268:
        case 0x269:
        case 0x296:
        case 0x299:
        case 0x2A1:
        case 0x2A2:
        case 0x2A3:
        case 0x2A4:
        case 0x2A5:
        case 0x2A6:
        case 0x2A7:
        case 0x2A8:
        case 0x2B5:
        case 0x2B6:
        case 0x2C1:
          goto LABEL_113;
        case 0x1BE:
        case 0x1C0:
          goto LABEL_289;
        case 0x1C1:
        case 0x1C7:
        case 0x1C9:
        case 0x1CA:
        case 0x1CC:
        case 0x1CD:
        case 0x210:
        case 0x211:
        case 0x212:
        case 0x213:
        case 0x215:
        case 0x21B:
        case 0x21C:
        case 0x21D:
        case 0x229:
        case 0x22E:
        case 0x244:
        case 0x245:
        case 0x250:
        case 0x251:
        case 0x29D:
          goto LABEL_196;
        case 0x1C2:
        case 0x233:
          LOBYTE(v468) = sub_3F7000(a1);
          if ( !(_BYTE)v468 )
            goto LABEL_6;
          v291 = *(_BYTE *)(a1 + 65);
          if ( (v291 == 13 || v291 == 1 && (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu)
            && (v447 = *(_BYTE *)(a1 + 105), v447 != 13) )
          {
            if ( v447 == 1 )
              LOBYTE(v468) = (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu;
          }
          else
          {
            LOBYTE(v468) = 0;
          }
          v104 = *(_WORD *)(a1 + 48) == 450;
          LODWORD(v475) = 0;
          v476.m128i_i32[0] = 20;
          v466 = 67;
          v467 = 2;
          LODWORD(v471) = 0;
          if ( !v104 )
            goto LABEL_506;
          LOBYTE(v472) = 3;
          v474 = 3;
          goto LABEL_483;
        case 0x1C5:
        case 0x1D0:
        case 0x208:
        case 0x220:
        case 0x224:
        case 0x227:
        case 0x236:
        case 0x247:
          goto LABEL_254;
        case 0x1C8:
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v328 = v477;
          s1[0] = byte_9;
          v479.m128i_i64[0] = (__int64)s1;
          v329 = v477->m128i_u32[3];
          tinfo_size = get_tinfo_size();
          v77 = v329;
          v479.m128i_i64[0] = (__int64)s1;
          sub_32F0D0((__int64)v498, v329, tinfo_size);
          clear_tinfo_t();
          LODWORD(v475) = 0;
          v476.m128i_i32[0] = 20;
          v467 = 2;
          v331 = v478.m128i_i64[1];
          LODWORD(v471) = 0;
          *v477 = _mm_loadu_si128((const __m128i *)v478.m128i_i64[1]);
          v328[1].m128i_i8[0] = *(_BYTE *)(v331 + 16);
          goto LABEL_207;
        case 0x1CB:
        case 0x1D8:
        case 0x243:
        case 0x26A:
        case 0x28C:
        case 0x28D:
        case 0x290:
        case 0x291:
        case 0x293:
        case 0x295:
        case 0x298:
        case 0x29E:
        case 0x29F:
        case 0x2A0:
        case 0x2BA:
        case 0x2BB:
        case 0x2BF:
        case 0x2C0:
          LOBYTE(v468) = sub_3F7000(a1);
          if ( !(_BYTE)v468 )
            goto LABEL_6;
          v150 = &word_4F0700;
          if ( *(_BYTE *)(a1 + 69) != 7 )
            v150 = &word_4F0740;
          for ( i = *(_WORD *)(a1 + 48); *v150 != i; v150 += 12 )
            ;
          v152 = *(_QWORD *)(a1 + 152);
          v153 = *(unsigned __int64 **)(a1 + 832);
          v154 = *(_QWORD *)(a1 + 40);
          v472 = *((void **)v150 + 1);
          sub_120A10((__int64)v505, v153, v152, 1, v154, 2);
          s1[0] = (_BYTE *)(&dword_30 + 2);
          v479.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v155 = v477->m128i_i32[3];
          v156 = *((_DWORD *)v150 + 5);
          if ( v156 < 0 )
          {
            s1[0] = nullptr;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v156;
          }
          v157 = get_tinfo_size();
          sub_32F0D0((__int64)v503, v155, v157);
          clear_tinfo_t();
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
            && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
          {
            sub_3EB430(0.0);
          }
          v158 = *(_DWORD *)(v478.m128i_i64[1] + 12);
          v159 = *((_DWORD *)v150 + 4);
          if ( v159 < 0 )
          {
            s1[0] = nullptr;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v159;
          }
          v160 = get_tinfo_size();
          v77 = v158;
          sub_32F0D0((__int64)v498, v158, v160);
          clear_tinfo_t();
          v78 = get_dtype_size();
          if ( v78 < (int)v504 )
          {
            LODWORD(v475) = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
            v402 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
            dtype_by_size = get_dtype_by_size();
            v77 = *(unsigned __int8 *)(a1 + 109);
            sub_1D6840(a1, v77, dtype_by_size, v402, (int)v475, 0, (__m128i)0LL, si128, a7);
          }
          v161 = *(_WORD *)(a1 + 48);
          if ( v161 != 703 )
          {
            v78 = *((unsigned int *)v150 + 4);
            LODWORD(v475) = *((_DWORD *)v150 + 4);
            if ( v161 == 704 )
            {
              v79 = v478.m128i_i64[1];
              v162 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
              *(_BYTE *)(v478.m128i_i64[1] + 16) = 1;
              *(_DWORD *)(v79 + 12) = v162;
            }
            LODWORD(v471) = 3;
            goto LABEL_205;
          }
          v445 = v478.m128i_i64[1];
          v79 = v476.m128i_u32[0];
          v104 = v472 == nullptr;
          *(_DWORD *)(v478.m128i_i64[1] + 12) = v476.m128i_i32[0];
          *(_BYTE *)(v445 + 16) = 1;
          if ( v104 )
          {
            LODWORD(v475) = 7;
            v476.m128i_i32[0] = 20;
            v467 = 1;
            LODWORD(v471) = 3;
            goto LABEL_207;
          }
          v448 = *(_QWORD *)(a1 + 8);
          v17 = nullptr;
          LODWORD(v471) = 3;
          v31 = 1;
          v467 = 1;
          v464 = v448;
          v476.m128i_i32[0] = 20;
          v465 = 0;
          LODWORD(v475) = 7;
          goto LABEL_28;
        case 0x1CE:
          v31 = 1;
          v17 = nullptr;
          LOBYTE(v468) = 1;
          v472 = "_mm_getcsr";
          LODWORD(v475) = 7;
          v465 = 0;
          v476.m128i_i32[0] = 4;
          v467 = 2;
          LODWORD(v471) = 0;
          v479.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0x1D1:
        case 0x20E:
        case 0x248:
          goto LABEL_833;
        case 0x1D4:
          goto LABEL_300;
        case 0x1D7:
        case 0x1E0:
        case 0x23B:
        case 0x23C:
        case 0x23D:
        case 0x23E:
        case 0x23F:
        case 0x292:
        case 0x29A:
        case 0x29B:
        case 0x29C:
        case 0x2B8:
        case 0x2B9:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          v174 = &word_4F0900;
          if ( *(_BYTE *)(a1 + 109) != 7 )
            v174 = &word_4F0940;
          for ( j = *(_WORD *)(a1 + 48); *v174 != j; v174 += 12 )
            ;
          v104 = *(_BYTE *)(a1 + 145) == 5;
          v472 = *((void **)v174 + 1);
          if ( v104 )
          {
            v397 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v498, v397, *((_DWORD *)v174 + 4));
            sub_120A10(
              (__int64)v503,
              *(unsigned __int64 **)(a1 + 832),
              *(_QWORD *)(a1 + 152),
              1,
              *(_QWORD *)(a1 + 40),
              1);
            s1[0] = (_BYTE *)(&dword_30 + 2);
            v77 = (__int64)s1;
            v479.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
            clear_tinfo_t();
          }
          else
          {
            v176 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v498, v176, *((_DWORD *)v174 + 4));
            v177 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
            v77 = (__int64)v503;
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v503, v177, 50);
          }
          LODWORD(v471) = 2;
          LODWORD(v475) = *((_DWORD *)v174 + 5);
          goto LABEL_205;
        case 0x1DD:
        case 0x26B:
        case 0x26C:
        case 0x26D:
          v104 = *(_BYTE *)(a1 + 109) == 7;
          v476.m128i_i64[0] = (__int64)&word_4F0A60;
          if ( !v104 )
            goto LABEL_196;
          goto LABEL_197;
        case 0x1E1:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          v370 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
          sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v498, v370, -12);
          v371 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
          sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v503, v371, -12);
          v472 = "_m_maskmovq";
          goto LABEL_587;
        case 0x1E2:
        case 0x1E3:
        case 0x22F:
        case 0x230:
        case 0x231:
        case 0x2C5:
        case 0x2C6:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          v207 = *(_WORD *)(a1 + 48);
          v208 = &word_4F0640;
          v209 = &word_4F0640;
          if ( v207 != word_4F0640 )
          {
            do
              v208 += 12;
            while ( *v208 != v207 );
            v209 = v208;
          }
          v472 = *((void **)v209 + 1);
          sub_3FAC20(a1, (__int64)v498, *((_DWORD *)v209 + 4), v478.m128i_i64[1], v486, (__m128i)0LL, si128, a7);
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v210 = v477->m128i_i32[3];
          v211 = *((_DWORD *)v209 + 5);
          if ( v211 < 0 )
          {
            s1[0] = nullptr;
            v479.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v211;
            v479.m128i_i64[0] = (__int64)s1;
          }
          v212 = get_tinfo_size();
          sub_32F0D0((__int64)v503, v210, v212);
          clear_tinfo_t();
          v465 = 0;
          v476.m128i_i32[0] = 20;
          LODWORD(v471) = 2;
          goto LABEL_315;
        case 0x1E4:
          v264 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v479.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v265 = getinf();
          sub_120A10((__int64)v503, (unsigned __int64 *)v13, 1, v265, v264, -1);
          goto LABEL_453;
        case 0x1E5:
          v368 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v479.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v369 = getinf();
          sub_120A10((__int64)v503, (unsigned __int64 *)v13, 2, v369, v368, -1);
          goto LABEL_453;
        case 0x1E6:
          v361 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v479.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v362 = getinf();
          sub_120A10((__int64)v503, (unsigned __int64 *)v13, 3, v362, v361, -1);
          goto LABEL_453;
        case 0x1E7:
          v359 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v479.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v360 = getinf();
          sub_120A10((__int64)v503, (unsigned __int64 *)v13, 0, v360, v359, -1);
          goto LABEL_453;
        case 0x1E8:
          LOBYTE(v468) = 0;
          v31 = 0;
          v17 = nullptr;
          v266 = "_mm_sfence";
          LODWORD(v475) = 0;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x1E9:
        case 0x1EA:
        case 0x1EB:
        case 0x1EC:
        case 0x1ED:
        case 0x1EE:
        case 0x1EF:
        case 0x1F0:
        case 0x1F4:
        case 0x1F8:
          LODWORD(v475) = -14;
          goto LABEL_210;
        case 0x1F1:
        case 0x1F2:
        case 0x1F3:
        case 0x1F5:
        case 0x1F6:
        case 0x1F7:
        case 0x284:
        case 0x285:
        case 0x286:
        case 0x288:
        case 0x289:
        case 0x28A:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          v184 = *(_WORD *)(a1 + 48);
          v476.m128i_i64[0] = (__int64)&unk_434BE0;
          if ( v184 != 497 )
          {
            v183 = &unk_434BE0;
            do
              v183 += 8;
            while ( *v183 != v184 );
            v476.m128i_i64[0] = (__int64)v183;
          }
          v185 = j__qalloc_or_throw(80, v13, (__int64)v183, (__int64)&unk_434BE0);
          v186 = (unsigned __int8 *)(v185 + 32);
          v187 = *(_QWORD *)(a1 + 40);
          v475 = (unsigned __int8 *)(v185 + 48);
          v479.m128i_i64[0] = v185 + 64;
          *(_QWORD *)(v185 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v185 + 40) = 0;
          *(_QWORD *)(v185 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v185 + 56) = 0;
          *(_QWORD *)(v185 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v185 + 72) = 0;
          sub_330970(v185, v187);
          v188 = v476.m128i_i64[0];
          v189 = *(_DWORD *)(v476.m128i_i64[0] + 4);
          *(_DWORD *)(v185 + 4) |= 0x10u;
          *(_DWORD *)v185 = v189;
          v478.m128i_i32[0] = *(_DWORD *)(v188 + 12);
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
            && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
          {
            sub_3EB430(0.0);
          }
          s1[0] = &byte_1;
          v190 = _mm_cvtsi32_si128(*(_DWORD *)(v478.m128i_i64[1] + 12));
          v479.m128i_i64[0] = (__int64)s1;
          v191 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v478.m128i_u32[0]), v190);
          *(__int64 *)((char *)s1 + 4) = v191.m128i_i64[0];
          sub_125180(v186, (unsigned __int8 *)s1);
          sub_11CDA0((__int64)s1);
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, v191, (__m128)v190, a7) )
            sub_3EB430(*(double *)v191.m128i_i64);
          s1[0] = &byte_1;
          v192 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v478.m128i_u32[0]), _mm_cvtsi32_si128(v477->m128i_u32[3]));
          *(__int64 *)((char *)s1 + 4) = v192.m128i_i64[0];
          sub_125180(v475, (unsigned __int8 *)v479.m128i_i64[0]);
          sub_11CDA0(v479.m128i_i64[0]);
          sub_125180((unsigned __int8 *)(v185 + 64), v186);
          v193 = v476.m128i_i64[0];
          *(_DWORD *)(v185 + 68) = 1;
          if ( *(_BYTE *)(v193 + 8) )
            sub_12B6F0(v185, *(unsigned __int64 **)(a1 + 832), 6, 1, 1, v192);
          sub_12B6F0(v185, *(unsigned __int64 **)(a1 + 832), 9, v478.m128i_i32[0], 1, v192);
          sub_12B6F0(v185, *(unsigned __int64 **)(a1 + 832), 5, v478.m128i_i32[0], 1, v192);
          sub_B5290(*(_QWORD **)(a1 + 16), v185, *(double *)v192.m128i_i64);
          goto LABEL_272;
        case 0x1F9:
        case 0x1FC:
        case 0x1FD:
          goto LABEL_305;
        case 0x1FA:
        case 0x1FB:
          goto LABEL_179;
        case 0x207:
        case 0x209:
        case 0x20A:
        case 0x21F:
        case 0x223:
        case 0x226:
        case 0x235:
        case 0x237:
        case 0x246:
        case 0x27C:
        case 0x27D:
        case 0x27E:
        case 0x27F:
        case 0x280:
        case 0x281:
        case 0x282:
        case 0x283:
        case 0x287:
        case 0x28B:
          goto LABEL_209;
        case 0x20B:
          sub_3FA780(a1, (__int64)v498, 1, v478.m128i_i64[1], (__m128i)0LL, 0, 0xFFFFFFFF, si128, a7);
          sub_3F0D80((__int64 *)v489, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v468) = 0;
          v252 = "_mm_clflush";
          LODWORD(v471) = 1;
          v467 = 0;
          goto LABEL_387;
        case 0x20F:
        case 0x216:
        case 0x2A9:
        case 0x2AA:
        case 0x2AB:
        case 0x2AC:
        case 0x2AD:
        case 0x2AE:
        case 0x2AF:
        case 0x2B0:
        case 0x2B1:
        case 0x2B2:
        case 0x2B3:
        case 0x2B4:
          goto LABEL_242;
        case 0x214:
        case 0x232:
          goto LABEL_751;
        case 0x217:
          v474 = 4;
          LODWORD(v475) = 0;
          LODWORD(v471) = 0;
          goto LABEL_481;
        case 0x218:
          LOBYTE(v472) = 3;
          v474 = 4;
          goto LABEL_890;
        case 0x219:
          LOBYTE(v472) = 4;
          goto LABEL_729;
        case 0x21A:
          LOBYTE(v472) = 4;
          v474 = 3;
LABEL_890:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LODWORD(v475) = 0;
          LOBYTE(v468) = 0;
          v476.m128i_i32[0] = 20;
          v466 = 67;
          v467 = 1;
          LODWORD(v471) = 0;
          goto LABEL_483;
        case 0x21E:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LODWORD(v475) = 25;
          v474 = 4;
          goto LABEL_479;
        case 0x221:
          LOBYTE(v468) = 0;
          v31 = 0;
          v17 = nullptr;
          v266 = "_mm_lfence";
          LODWORD(v475) = 0;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x222:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          v336 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
          sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v498, v336, -13);
          v337 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
          sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v503, v337, -13);
          v472 = "_mm_maskmoveu_si128";
LABEL_587:
          v338 = *(_QWORD *)(a1 + 832);
          v339 = *(_DWORD *)(v338 + 404);
          v479.m128i_i64[0] = (__int64)s1;
          v476.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v338, v476.m128i_u32[0], 2);
          sub_32F0D0((__int64)v505, v339, v476.m128i_i32[0]);
          clear_tinfo_t();
          copy_tinfo_t();
          LOBYTE(v468) = 0;
          LODWORD(v471) = 3;
          v467 = 0;
          v476.m128i_i32[0] = 20;
          v465 = 0;
          LODWORD(v475) = 0;
          goto LABEL_93;
        case 0x225:
          LOBYTE(v468) = 0;
          v31 = 0;
          v17 = nullptr;
          v266 = "_mm_mfence";
          LODWORD(v475) = 0;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x22A:
        case 0x22B:
          v195 = *(_BYTE *)(a1 + 65);
          if ( v195 != 13 && (v195 != 1 || (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) > 0xFu) )
            goto LABEL_289;
          v196 = *(_BYTE *)(a1 + 105);
          if ( v196 != 13 && (v196 != 1 || (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu) )
            goto LABEL_289;
LABEL_288:
          v197 = *(_BYTE *)(a1 + 109);
          if ( *(_BYTE *)(a1 + 69) != v197 )
            goto LABEL_289;
          v398 = v197;
          v399 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
          v77 = *(_QWORD *)(a1 + 832);
          sub_3F1CC0((__int64)v498, v77, v399, v398, 2);
          v476.m128i_i32[0] = 4;
          LODWORD(v475) = 0;
          v467 = 2;
          LODWORD(v471) = 0;
          goto LABEL_207;
        case 0x22C:
        case 0x22D:
          if ( (_WORD)v47 == 556 )
          {
            if ( *(_BYTE *)(a1 + 65) == 1 )
            {
              v438 = (__m128i *)v478.m128i_i64[1];
              v439 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
            }
            else
            {
              v438 = v477;
              v439 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
            }
            v438[1].m128i_i8[0] = 1;
            v438->m128i_i32[3] = v439 + 8;
          }
          v104 = *(_BYTE *)(a1 + 65) == 1;
          LODWORD(v475) = 0;
          LOBYTE(v468) = 0;
          v476.m128i_i32[0] = 4;
          v466 = 67;
          if ( v104 )
          {
            LOBYTE(v472) = 4;
            v467 = 1;
            LODWORD(v471) = 0;
            v474 = 4;
          }
          else
          {
            v467 = 2;
            LODWORD(v471) = 0;
LABEL_506:
            LOBYTE(v472) = 4;
            v474 = 4;
          }
          goto LABEL_483;
        case 0x239:
          LOBYTE(v468) = 0;
          v31 = 0;
          v17 = nullptr;
          v266 = "_mm_pause";
          LODWORD(v475) = 0;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x24B:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          if ( ((*(_QWORD *)(a1 + 104) ^ *(_QWORD *)(a1 + 64)) & 0xFFFF00000000FF00LL) == 0 )
          {
            v274 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
            sub_3F7E20(a1, 3u, a4, 0, 0x3BEA45E214ADDC55LL, v274, (__m128i)0LL, si128, a7, 0);
            goto LABEL_272;
          }
LABEL_209:
          LODWORD(v475) = -15;
LABEL_210:
          LOBYTE(v468) = sub_3F7000(a1);
          if ( !(_BYTE)v468 )
            goto LABEL_6;
          qsnprintf();
          v143 = &s[strlen(s)];
          v144 = *(v143 - 3);
          if ( v143 >= &v511 )
            goto LABEL_214;
          v145 = *(v143 - 1);
          if ( v145 == 100 )
          {
            v429 = *(v143 - 2);
            if ( v429 == 112 || v429 == 115 )
            {
              *(_WORD *)v143 = 100;
              *(v143 - 1) = v429;
              *(v143 - 2) = 95;
            }
          }
          else if ( v145 == 115 )
          {
            v458 = *(v143 - 2);
            if ( v458 == 112 || v458 == 115 )
            {
              if ( v144 != 50 )
              {
                *(_WORD *)v143 = 115;
                *(v143 - 1) = v458;
                *(v143 - 2) = 95;
LABEL_215:
                if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
                {
                  sub_3EB430(0.0);
                }
                s1[0] = nullptr;
                v146 = *(_DWORD *)(v478.m128i_i64[1] + 12);
                v479.m128i_i64[0] = (__int64)s1;
                copy_tinfo_t();
                sub_32F0D0((__int64)v498, v146, 16);
                clear_tinfo_t();
                v147 = get_dtype_size();
                v148 = v147;
                if ( v147 <= 8 )
                {
                  sub_32C150(v479.m128i_i64[0], *(_QWORD *)(a1 + 832), v147, 0.0);
                  v149 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
                  sub_32F0D0((__int64)v503, v149, v148);
                  v31 = 1;
                  v17 = nullptr;
                  clear_tinfo_t();
                  v465 = 0;
                  v476.m128i_i32[0] = 20;
                  v472 = s;
                  v467 = 2;
                  LODWORD(v471) = 2;
                  goto LABEL_27;
                }
                v389 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
                sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v503, v389, (int)v475);
                LODWORD(v471) = 2;
                v467 = 2;
                v472 = s;
                v476.m128i_i32[0] = 20;
                v465 = 0;
                goto LABEL_93;
              }
LABEL_695:
              *(v143 - 3) = 95;
              goto LABEL_215;
            }
          }
LABEL_214:
          if ( v144 != 50 )
            goto LABEL_215;
          goto LABEL_695;
        case 0x24F:
          v272 = *(_BYTE *)(a1 + 105);
          if ( v272 != 13 && (v272 != 1 || (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu) )
          {
            LOBYTE(v468) = sub_3F7000(a1);
            if ( !(_BYTE)v468 )
              goto LABEL_6;
            sub_3FA780(a1, (__int64)v498, 89, (__int64)v477, (__m128i)0LL, 0, 0xFFFFFFFF, si128, a7);
            sub_3F0D80((__int64 *)v489, a1 + 104, 0);
            LODWORD(v471) = 1;
            v472 = "_mm_loaddup_pd";
            v467 = 2;
            v476.m128i_i32[0] = 20;
            v465 = 0;
            LODWORD(v475) = -15;
            v479.m128i_i64[0] = (__int64)s1;
            goto LABEL_93;
          }
LABEL_196:
          v476.m128i_i64[0] = (__int64)&word_4F0DC0;
LABEL_197:
          if ( (unsigned __int8)sub_3F7000(a1) )
          {
            v133 = v476.m128i_i64[0];
            v134 = *(_WORD *)(a1 + 48);
            if ( *(_WORD *)v476.m128i_i64[0] != v134 )
            {
              do
              {
                v135 = (_WORD *)(v133 + 24);
                v133 = (__int64)v135;
              }
              while ( *v135 != v134 );
              v476.m128i_i64[0] = (__int64)v135;
            }
            v472 = *(void **)(v476.m128i_i64[0] + 8);
            if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
              sub_3EB430(0.0);
            v136 = v477->m128i_u32[3];
            v137 = *(_DWORD *)(v476.m128i_i64[0] + 16);
            if ( v137 < 0 )
            {
              s1[0] = nullptr;
              v479.m128i_i64[0] = (__int64)s1;
              copy_tinfo_t();
            }
            else
            {
              s1[0] = (char *)(unsigned __int8)v137;
              v479.m128i_i64[0] = (__int64)s1;
            }
            v138 = get_tinfo_size();
            v77 = v136;
            sub_32F0D0((__int64)v498, v136, v138);
            clear_tinfo_t();
            v78 = (unsigned __int64)v477;
            LODWORD(v471) = 1;
            LODWORD(v475) = *(_DWORD *)(v476.m128i_i64[0] + 20);
            v139 = v478.m128i_i64[1];
            v7 = _mm_loadu_si128((const __m128i *)v478.m128i_i64[1]);
            *v477 = v7;
            *(_BYTE *)(v78 + 16) = *(_BYTE *)(v139 + 16);
            goto LABEL_205;
          }
          goto LABEL_6;
        case 0x25A:
          v465 = sub_3F7000(a1);
          if ( !v465 )
            goto LABEL_6;
          v267 = *(_QWORD *)(a1 + 832);
          v268 = get_dtype_size();
          sub_32C430((__int64 *)s1, v267, v268, 2);
          sub_32F0D0((__int64)v498, 8, v268);
          v479.m128i_i64[0] = (__int64)s1;
          clear_tinfo_t();
          v269 = *(_QWORD *)(a1 + 832);
          v270 = get_dtype_size();
          sub_32C430((__int64 *)s1, v269, v270, 2);
          sub_32F0D0((__int64)v503, v476.m128i_i32[0], v270);
          clear_tinfo_t();
          v476.m128i_i64[0] = *(_QWORD *)(a1 + 832);
          v271 = get_dtype_size();
          sub_32C430((__int64 *)s1, v476.m128i_i64[0], v271, 2);
          sub_32F0D0((__int64)v505, v473, v271);
          clear_tinfo_t();
          copy_tinfo_t();
          LOBYTE(v468) = 0;
          LODWORD(v471) = 3;
          v467 = 0;
          v472 = "_mm_monitor";
          v476.m128i_i32[0] = 4;
          LODWORD(v475) = 0;
          goto LABEL_93;
        case 0x25B:
          v465 = sub_3F7000(a1);
          if ( !v465 )
            goto LABEL_6;
          sub_3F1CC0((__int64)v498, *(_QWORD *)(a1 + 832), v476.m128i_i32[0], 2, 2);
          sub_3F1CC0((__int64)v503, *(_QWORD *)(a1 + 832), 8, 2, 2);
          LOBYTE(v468) = 0;
          v467 = 0;
          v472 = "_mm_mwait";
          LODWORD(v475) = 0;
          LODWORD(v471) = 2;
          v476.m128i_i32[0] = 4;
          v479.m128i_i64[0] = (__int64)s1;
          goto LABEL_93;
        case 0x25D:
          LOBYTE(v468) = sub_3F7000(a1);
          if ( !(_BYTE)v468 )
            goto LABEL_6;
          sub_3FA780(a1, (__int64)v498, -13, (__int64)v477, (__m128i)0LL, 64, 0xFFFFFFFF, si128, a7);
          sub_3F0D80((__int64 *)v489, a1 + 104, 0);
          LODWORD(v471) = 1;
          v273 = "_mm_lddqu_si128";
          v467 = 2;
          goto LABEL_471;
        case 0x273:
          goto LABEL_363;
        case 0x276:
          v31 = 0;
          LOBYTE(v468) = 0;
          v266 = "__vmx_off";
          LODWORD(v475) = 0;
          v17 = nullptr;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x28E:
        case 0x28F:
        case 0x297:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          v227 = *(_WORD *)(a1 + 48);
          v228 = &word_4EFAA0;
          if ( word_4EFAA0 != v227 )
          {
            do
              v228 += 12;
            while ( *v228 != v227 );
          }
          v229 = *((void **)v228 + 1);
          LODWORD(v475) = *((_DWORD *)v228 + 4);
          v472 = v229;
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
            && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
          {
            sub_3EB430(0.0);
          }
          v230 = *(_DWORD *)(v478.m128i_i64[1] + 12);
          if ( (int)v475 < 0 )
          {
            s1[0] = nullptr;
            v479.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v475;
            v479.m128i_i64[0] = (__int64)s1;
          }
          v231 = get_tinfo_size();
          sub_32F0D0((__int64)v498, v230, v231);
          clear_tinfo_t();
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v232 = v477->m128i_i32[3];
          if ( (int)v475 < 0 )
          {
            s1[0] = nullptr;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v475;
          }
          v233 = get_tinfo_size();
          sub_32F0D0((__int64)v503, v232, v233);
          clear_tinfo_t();
          v234 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
          if ( (int)v475 < 0 )
          {
            s1[0] = nullptr;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v475;
          }
          v235 = get_tinfo_size();
          v77 = v234;
          sub_32F0D0((__int64)v505, v234, v235);
          clear_tinfo_t();
          LODWORD(v471) = 3;
          goto LABEL_205;
        case 0x294:
          LOBYTE(v468) = sub_3F7000(a1);
          if ( !(_BYTE)v468 )
            goto LABEL_6;
          sub_3FA780(a1, (__int64)v498, -13, (__int64)v477, (__m128i)0LL, 0, 0xFFFFFFFF, si128, a7);
          sub_3F0D80((__int64 *)v489, a1 + 104, 0);
          LODWORD(v471) = 1;
          v273 = "_mm_stream_load_si128";
          v467 = 2;
LABEL_471:
          v472 = v273;
          v476.m128i_i32[0] = 20;
          v465 = 0;
          LODWORD(v475) = -13;
          v479.m128i_i64[0] = (__int64)s1;
          goto LABEL_93;
        case 0x2B7:
          LOBYTE(v468) = sub_3F7000(a1);
          if ( !(_BYTE)v468 )
            goto LABEL_6;
          v355 = v478.m128i_i64[1];
          v356 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
          sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v498, v356, -13);
          v357 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
          sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v503, v357, -13);
          *(_BYTE *)(v478.m128i_i64[1] + 16) = 1;
          v17 = nullptr;
          v472 = "_mm_testz_si128";
          *(_DWORD *)(v355 + 12) = 1;
          v31 = 1;
          LODWORD(v475) = 34;
          v465 = 0;
          v476.m128i_i32[0] = 20;
          v467 = 1;
          LODWORD(v471) = 2;
          v479.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0x2BC:
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16) )
          {
            if ( !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
              sub_3EB430(0.0);
            v15 = *(_QWORD *)(a1 + 832);
          }
          v475 = (unsigned __int8 *)v15;
          v352 = *(_DWORD *)(v478.m128i_i64[1] + 12);
          v479.m128i_i64[0] = (__int64)s1;
          v476.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v15, v476.m128i_u32[0], 2);
          sub_32F0D0((__int64)v498, v352, v476.m128i_i32[0]);
          clear_tinfo_t();
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v353 = *(_QWORD *)(a1 + 832);
          v476.m128i_i32[0] = v477->m128i_i32[3];
          v354 = get_dtype_size();
          sub_32C430((__int64 *)v479.m128i_i64[0], v353, v354, 2);
          sub_32F0D0((__int64)v503, v476.m128i_i32[0], v354);
          clear_tinfo_t();
          get_dtype_size();
          qsnprintf();
          LOBYTE(v468) = 1;
          LODWORD(v471) = 2;
          v467 = 2;
          v472 = s;
          v476.m128i_i32[0] = 4;
          v465 = 0;
          LODWORD(v475) = 39;
          goto LABEL_93;
        case 0x2BD:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LODWORD(v475) = 7;
          v472 = "_mm_cmpestri";
          goto LABEL_599;
        case 0x2BE:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LODWORD(v475) = -13;
          v472 = "_mm_cmpestrm";
LABEL_599:
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
            && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
          {
            sub_3EB430(0.0);
          }
          s1[0] = nullptr;
          v479.m128i_i64[0] = (__int64)s1;
          v343 = *(_DWORD *)(v478.m128i_i64[1] + 12);
          copy_tinfo_t();
          v344 = get_tinfo_size();
          sub_32F0D0((__int64)v498, v343, v344);
          clear_tinfo_t();
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          v345 = v477->m128i_i32[3];
          copy_tinfo_t();
          v346 = get_tinfo_size();
          sub_32F0D0((__int64)v503, v345, v346);
          clear_tinfo_t();
          v347 = *(_QWORD *)(a1 + 832);
          v348 = get_dtype_size();
          sub_32C430((__int64 *)v479.m128i_i64[0], v347, v348, 2);
          sub_32F0D0((__int64)v505, 8, v348);
          clear_tinfo_t();
          v349 = *(_QWORD *)(a1 + 832);
          v350 = get_dtype_size();
          sub_32C430((__int64 *)v479.m128i_i64[0], v349, v350, 2);
          sub_32F0D0((__int64)v506, v473, v350);
          clear_tinfo_t();
          if ( *(_WORD *)(a1 + 48) != 701 )
            v476.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
          v351 = v478.m128i_i64[1];
          v17 = nullptr;
          LOBYTE(v468) = 1;
          v465 = 0;
          v31 = 1;
          *(_DWORD *)(v478.m128i_i64[1] + 12) = v476.m128i_i32[0];
          *(_BYTE *)(v351 + 16) = 1;
          v476.m128i_i32[0] = 20;
          v467 = 1;
          LODWORD(v471) = 4;
          goto LABEL_27;
        case 0x2C2:
          if ( !v477[1].m128i_i8[0] )
          {
            if ( !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
              sub_3EB430(0.0);
            v15 = *(_QWORD *)(a1 + 832);
          }
          v475 = (unsigned __int8 *)v15;
          v358 = v477->m128i_i32[3];
          v479.m128i_i64[0] = (__int64)s1;
          v476.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v15, v476.m128i_u32[0], 2);
          sub_32F0D0((__int64)v498, v358, v476.m128i_i32[0]);
          clear_tinfo_t();
          v472 = "__popcnt";
          if ( v499 == 2 )
            v472 = "__popcnt16";
          v31 = 1;
          v17 = nullptr;
          LOBYTE(v468) = 1;
          v465 = 0;
          LODWORD(v475) = (unsigned __int8)v502;
          v476.m128i_i32[0] = 4;
          v467 = 1;
          LODWORD(v471) = 1;
          goto LABEL_27;
        case 0x2C3:
        case 0x2C4:
          LOBYTE(v468) = sub_3F7000(a1);
          if ( !(_BYTE)v468 )
            goto LABEL_6;
          v314 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
          sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v498, v314, -13);
          v315 = *(_WORD *)(a1 + 48);
          if ( *(_BYTE *)(a1 + 105) == 5 )
          {
            v476.m128i_i32[0] = 1;
            v472 = "_mm_extracti_si64";
            if ( v315 == 708 )
            {
              v453 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
              sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v503, v453, -13);
              v476.m128i_i32[0] = 2;
              v472 = "_mm_inserti_si64";
            }
            LODWORD(v471) = v476.m128i_i32[0] + 2;
            do
            {
              sub_120A10(
                (__int64)&v498[80 * v476.m128i_i32[0]],
                *(unsigned __int64 **)(a1 + 832),
                *(_QWORD *)(a1 + 40LL * v476.m128i_i32[0] + 72),
                4,
                *(_QWORD *)(a1 + 40),
                v476.m128i_i32[0]);
              s1[0] = (char *)&dword_14;
              v479.m128i_i64[0] = (__int64)s1;
              copy_tinfo_t();
              clear_tinfo_t();
              ++v476.m128i_i32[0];
            }
            while ( v476.m128i_i32[0] != (_DWORD)v471 );
          }
          else
          {
            v472 = "_mm_insert_si64";
            if ( v315 == 707 )
              v472 = (void *)"_mm_extract_si64";
            v316 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
            sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v503, v316, -13);
            LODWORD(v471) = 2;
            v479.m128i_i64[0] = (__int64)s1;
          }
          v465 = 0;
          v31 = 1;
          v17 = nullptr;
          LODWORD(v475) = -13;
          v476.m128i_i32[0] = 20;
          v467 = 2;
          goto LABEL_27;
        case 0x2C7:
          if ( !v477[1].m128i_i8[0] )
          {
            if ( !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
              sub_3EB430(0.0);
            v15 = *(_QWORD *)(a1 + 832);
          }
          v475 = (unsigned __int8 *)v15;
          v313 = v477->m128i_i32[3];
          v479.m128i_i64[0] = (__int64)s1;
          v476.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v15, v476.m128i_u32[0], 2);
          sub_32F0D0((__int64)v498, v313, v476.m128i_i32[0]);
          clear_tinfo_t();
          v472 = "__lzcnt";
          if ( v499 == 2 )
            v472 = "__lzcnt16";
          v31 = 1;
          v17 = nullptr;
          LOBYTE(v468) = 1;
          v465 = 0;
          LODWORD(v475) = (unsigned __int8)v502;
          v476.m128i_i32[0] = 20;
          v467 = 1;
          LODWORD(v471) = 1;
          goto LABEL_27;
        case 0x2C9:
        case 0x708:
          goto LABEL_592;
        case 0x2CA:
        case 0x2F9:
        case 0x707:
          goto LABEL_346;
        case 0x2CD:
          LOBYTE(v468) = 0;
          LODWORD(v471) = 0;
          v467 = 0;
          v252 = "__svm_clgi";
          goto LABEL_387;
        case 0x2CE:
          v340 = *(_QWORD *)(a1 + 800);
          v498[0] = 1;
          LODWORD(v500) = 8;
          v499 = *(_DWORD *)(*(_QWORD *)(v340 + 112) + 80LL);
          copy_tinfo_t();
          v341 = *(_QWORD *)(a1 + 800);
          v503[0] = 1;
          LODWORD(v341) = *(unsigned __int8 *)(v341 + 130);
          s1[0] = &byte_7;
          v7 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v341), _mm_cvtsi32_si128(v476.m128i_u32[0]));
          v479.m128i_i64[0] = (__int64)s1;
          v504 = v7.m128i_i64[0];
          copy_tinfo_t();
          v17 = nullptr;
          v31 = 0;
          clear_tinfo_t();
          LOBYTE(v468) = 0;
          LODWORD(v475) = 0;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          v472 = "__svm_invlpga";
          v467 = 0;
          LODWORD(v471) = 2;
          goto LABEL_27;
        case 0x2CF:
          v472 = "__svm_skinit";
          goto LABEL_500;
        case 0x2D0:
          LOBYTE(v468) = 0;
          v31 = 0;
          v17 = nullptr;
          LODWORD(v475) = 0;
          v266 = "__svm_stgi";
          v465 = 1;
          v476.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x2D2:
          v472 = "__svm_vmload";
          goto LABEL_500;
        case 0x2D4:
          v472 = "__svm_vmrun";
          goto LABEL_500;
        case 0x2D5:
          v472 = "__svm_vmsave";
LABEL_500:
          v290 = get_dtype_size();
          v479.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v13, v290, 2);
          sub_32F0D0((__int64)v498, 8, v290);
          v31 = 0;
          clear_tinfo_t();
          LOBYTE(v468) = 0;
          LODWORD(v475) = 0;
          goto LABEL_392;
        case 0x2EA:
          LODWORD(v475) = 36;
          v472 = (void *)"__bextr_u32";
          if ( (unsigned int)get_dtype_size() == 8 )
          {
            LODWORD(v475) = 37;
            v472 = (void *)"__bextr_u64";
          }
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v285 = *(_QWORD *)(a1 + 832);
          v476.m128i_i32[0] = v477->m128i_i32[3];
          v286 = get_dtype_size();
          v479.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v285, v286, 2);
          sub_32F0D0((__int64)v498, v476.m128i_i32[0], v286);
          clear_tinfo_t();
          s1[0] = (char *)a1;
          LOBYTE(s1[2]) = 0;
          s1[1] = (char *)0xFFFFFFFF00000002LL;
          sub_3FA580((int *)s1, 1, 0, (__m128i)0LL, si128, a7);
          if ( !LOBYTE(s1[2]) && !(unsigned __int8)sub_3FACB0(v479.m128i_i64[0], (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v287 = *(_QWORD *)(a1 + 832);
          v476.m128i_i32[0] = HIDWORD(s1[1]);
          v288 = get_dtype_size();
          sub_32C430((__int64 *)v479.m128i_i64[0], v287, v288, 2);
          v471 = v503;
          sub_32F0D0((__int64)v503, v476.m128i_i32[0], v288);
          clear_tinfo_t();
          v289 = *(_QWORD *)(a1 + 832);
          LODWORD(v287) = get_dtype_size();
          sub_32C430((__int64 *)v479.m128i_i64[0], v289, v287, 2);
          sub_32F0D0((__int64)v505, v476.m128i_i32[0], v287);
          clear_tinfo_t();
          sub_126240(v503, *(unsigned __int64 **)(a1 + 832), 0x14u, *(_QWORD *)(a1 + 40), 255, 4, (__m128i)0LL);
          sub_126240(v505, *(unsigned __int64 **)(a1 + 832), 0x17u, *(_QWORD *)(a1 + 40), 8, 1, (__m128i)0LL);
          sub_126240(v505, *(unsigned __int64 **)(a1 + 832), 0x14u, *(_QWORD *)(a1 + 40), 255, 4, (__m128i)0LL);
          sub_3F6F70(a1);
          v465 = 0;
          v476.m128i_i32[0] = 20;
          v467 = 1;
          LODWORD(v471) = 3;
          LOBYTE(v468) = 1;
          goto LABEL_112;
        case 0x491:
          v283 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v479.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v284 = getinf();
          sub_120A10((__int64)v503, (unsigned __int64 *)v13, 6, v284, v283, -1);
LABEL_453:
          sub_3FA780(a1, (__int64)v498, 1, v478.m128i_i64[1], (__m128i)0LL, 0, 0xFFFFFFFF, si128, a7);
          sub_3F0D80((__int64 *)v489, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v468) = 0;
          LODWORD(v471) = 2;
          v467 = 0;
          v472 = "_mm_prefetch";
          v476.m128i_i32[0] = 4;
          v465 = 1;
          LODWORD(v475) = 0;
          goto LABEL_93;
        default:
          goto LABEL_6;
      }
    }
    if ( (unsigned __int16)v47 <= 0x1B4u )
    {
      if ( (unsigned __int16)v47 <= 5u )
        goto LABEL_6;
      switch ( *(_WORD *)(a1 + 48) )
      {
        case 6:
        case 0x2C:
        case 0x7A:
        case 0x7E:
        case 0x86:
        case 0x8F:
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
            goto LABEL_6;
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 65) - 2) <= 2u )
          {
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) <= 2u )
            {
              if ( (_WORD)v47 != 143 )
              {
                if ( (v47 & 0xFFFB) != 0x7A )
                {
                  if ( !under_debugger )
                    sub_383060(0xC8C4u, 0.0);
LABEL_944:
                  BUG();
                }
                goto LABEL_278;
              }
            }
            else if ( (_WORD)v47 != 143 )
            {
              if ( (_WORD)v47 == 134 )
              {
                v457 = v477;
                v477->m128i_i32[3] = v470;
                v457[1].m128i_i8[0] = 1;
                sub_3F8EE0(a1, 0.0, *(double *)si128.m128_u64, a7);
              }
              v478.m128i_i32[2] = sub_3F9DC0(a1, 0, v470, (__m128i)0LL, si128, a7);
              LODWORD(s1[0]) = 1;
              HIDWORD(s1[0]) = get_dtype_size();
              LODWORD(s1[1]) = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
              v479.m128i_i64[0] = (__int64)s1;
              sub_3F7290(a1, v478.m128i_i32[2], (unsigned __int8 *)s1, (__m128i)0LL, si128, a7);
              sub_11CDA0((__int64)s1);
              goto LABEL_281;
            }
LABEL_279:
            v194 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
            sub_3F7230(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 468LL), v194, (__m128i)0LL, si128, a7);
            if ( *(_WORD *)(a1 + 48) == 143 )
            {
              v456 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
              sub_3F8D40(a1, v456, v474, (__m128i)0LL, si128, a7);
            }
LABEL_281:
            sub_3F6F70(a1);
            v18 = 1;
            goto LABEL_8;
          }
          if ( (v47 & 0xFFFB) == 0x7A && (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) <= 2u )
          {
LABEL_278:
            v474 = *(_BYTE *)(a1 + 109);
            goto LABEL_279;
          }
          goto LABEL_6;
        case 0xA:
        case 0xB:
          v476.m128i_i32[0] = get_dtype_size();
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
            && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
          {
            sub_3EB430(0.0);
          }
          sub_32F110(
            (__int64)v498,
            *(_QWORD *)(a1 + 832),
            *(unsigned int *)(v478.m128i_i64[1] + 12),
            v476.m128i_u32[0],
            0,
            v476.m128i_i32[0],
            2);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 && v476.m128i_i32[0] == 4 )
            v476.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
            && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
          {
            sub_3EB430(0.0);
          }
          s1[0] = nullptr;
          s1[1] = nullptr;
          v214 = *(_DWORD *)(v478.m128i_i64[1] + 12);
          v479.m128i_i64[0] = (__int64)s1;
          sub_63E80((__int64 *)s1, v214, v476.m128i_i32[0], 0.0);
          s1[2] = nullptr;
          v497 = 0;
          sub_64280(v486, (__int64 *)s1, 0.0);
          sub_316CB0(&v487, (const void **)&s1[2], v215, v216);
          if ( s1[2] )
          {
            *(_QWORD *)&v497 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
            && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
          {
            sub_3EB430(0.0);
          }
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v479.m128i_i64[0], *(_DWORD *)(v478.m128i_i64[1] + 12), v476.m128i_i32[0], 0.0);
          v7 = 0;
          s1[2] = nullptr;
          v497 = 0;
          sub_64280(&v492, (__int64 *)v479.m128i_i64[0], 0.0);
          sub_316CB0(&v494, (const void **)&s1[2], v217, v218);
          if ( s1[2] )
          {
            *(_QWORD *)&v497 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v219 = v477->m128i_i32[3];
          v475 = *(unsigned __int8 **)(a1 + 832);
          v476.m128i_i32[0] = v219;
          v220 = get_dtype_size();
          sub_32C430((__int64 *)v479.m128i_i64[0], (__int64)v475, v220, 2);
          sub_32F0D0((__int64)v503, v476.m128i_i32[0], v220);
          clear_tinfo_t();
          v104 = *(_WORD *)(a1 + 48) == 11;
          v472 = "_BitScanForward";
          if ( v104 )
            v472 = "_BitScanReverse";
          if ( a4 == 7 )
          {
            qsnprintf();
            v472 = s;
          }
          v221 = v478.m128i_i64[1];
          v31 = 1;
          v17 = nullptr;
          LOBYTE(v468) = 1;
          LODWORD(v475) = 34;
          *(_DWORD *)(v478.m128i_i64[1] + 12) = 1;
          *(_BYTE *)(v221 + 16) = 1;
          v465 = 0;
          v476.m128i_i32[0] = 36;
          v467 = 1;
          LODWORD(v471) = 2;
          goto LABEL_27;
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
          v222 = (char *)&unk_4EA0E0;
          if ( (_WORD)v47 == 12 )
          {
            v479.m128i_i64[0] = (__int64)v489;
          }
          else
          {
            do
              v222 += 24;
            while ( (_WORD)v47 != *(_WORD *)v222 );
            v479.m128i_i64[0] = (__int64)v486;
          }
          sub_3F0D80((__int64 *)v479.m128i_i64[0], a1 + 64, 0);
          if ( *(_BYTE *)(a1 + 65) == 1 )
          {
            v430 = (unsigned __int8 *)get_dtype_size();
            v104 = *(_WORD *)(a1 + 48) == 12;
            v478.m128i_i32[0] = (int)v430;
            if ( v104 )
              v431 = 0;
            else
              v431 = (int)v430;
            v475 = v430;
            v476.m128i_i32[0] = v431;
            v432 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
            sub_32F110((__int64)v498, *(_QWORD *)(a1 + 832), v432, v478.m128i_u32[0], (int)v475, v476.m128i_i32[0], 1);
            v433 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
            sub_3F0F00((__int64 *)v479.m128i_i64[0], v433, v478.m128i_i32[0], 0.0);
            if ( *(_WORD *)(a1 + 48) == 12 )
              goto LABEL_821;
            v434 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
            sub_3F0F00(&v492, v434, v478.m128i_i32[0], 0.0);
          }
          else
          {
            if ( (unsigned __int8)(a4 - 1) > 1u && a4 != 7 )
              goto LABEL_6;
            v223 = sub_3F7140(a4);
            sub_3FA780(a1, (__int64)v498, v223, v478.m128i_i64[1], (__m128i)0LL, 0, 0xFFFFFFFF, si128, a7);
          }
          if ( *(_WORD *)(a1 + 48) != 12 )
            goto LABEL_341;
LABEL_821:
          s1[0] = nullptr;
          tinfo_property = get_tinfo_property();
          if ( (_BYTE)tinfo_property )
            tinfo_property |= 0x40uLL;
          s1[0] = (char *)tinfo_property;
          v479.m128i_i64[0] = (__int64)s1;
          sub_3F0910();
          clear_tinfo_t();
LABEL_341:
          v479.m128i_i8[0] = *(_BYTE *)(a1 + 109);
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v224 = v477->m128i_i32[3];
          v475 = *(unsigned __int8 **)(a1 + 832);
          v476.m128i_i32[0] = v224;
          v478.m128i_i32[0] = get_dtype_size();
          v479.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, (__int64)v475, v478.m128i_u32[0], 2);
          v77 = v476.m128i_u32[0];
          sub_32F0D0((__int64)v503, v476.m128i_i32[0], v478.m128i_i32[0]);
          clear_tinfo_t();
          v472 = *((void **)v222 + 1);
          if ( a4 == 7 || a4 == 1 )
          {
            qsnprintf();
            v435 = *((_DWORD *)v222 + 4);
            v472 = s;
            v478.m128i_i32[0] = v435;
            v436 = v478.m128i_i64[1];
            *(_DWORD *)(v478.m128i_i64[1] + 12) = 0;
            *(_BYTE *)(v436 + 16) = 1;
          }
          else
          {
            v79 = 0;
            v104 = v472 == nullptr;
            v478.m128i_i32[0] = *((_DWORD *)v222 + 4);
            v225 = v478.m128i_i64[1];
            *(_DWORD *)(v478.m128i_i64[1] + 12) = 0;
            *(_BYTE *)(v225 + 16) = 1;
            if ( v104 )
            {
              LODWORD(v475) = 34;
              v476.m128i_i32[0] = 4;
              v467 = 1;
              LODWORD(v471) = 2;
              break;
            }
          }
          v437 = *(_QWORD *)(a1 + 8);
          v17 = nullptr;
          LOBYTE(v468) = 1;
          v31 = 1;
          LODWORD(v471) = 2;
          v464 = v437;
          v467 = 1;
          v476.m128i_i32[0] = 4;
          v465 = 0;
          LODWORD(v475) = 34;
          goto LABEL_28;
        case 0x18:
          LOBYTE(v468) = 0;
          v31 = 0;
          v17 = nullptr;
          v266 = "_disable";
          LODWORD(v475) = 0;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x28:
          LOBYTE(v468) = 0;
          v31 = 0;
          v17 = nullptr;
          v266 = "__halt";
          LODWORD(v475) = 0;
          v465 = 1;
          v476.m128i_i32[0] = 12;
          goto LABEL_455;
        case 0x2B:
          if ( a4 == 2 )
          {
            v476.m128i_i64[0] = (__int64)"dword";
          }
          else if ( a4 > 2u )
          {
            if ( a4 != 7 )
              goto LABEL_6;
            v476.m128i_i64[0] = (__int64)"qword";
          }
          else
          {
            v376 = "word";
            if ( !a4 )
              v376 = "byte";
            v476.m128i_i64[0] = (__int64)v376;
          }
          if ( *(_BYTE *)(a1 + 109) != 1 )
          {
            if ( v477[1].m128i_i8[0] )
            {
              v377 = v477->m128i_i32[3];
              v378 = v377;
            }
            else
            {
              if ( !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
                sub_3EB430(0.0);
              v378 = v477->m128i_i32[3];
              v377 = v378;
              if ( !v477[1].m128i_i8[0] )
              {
                if ( !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
                  sub_3EB430(0.0);
                v377 = v477->m128i_i32[3];
              }
            }
            sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), 1, v377, v378, 0, (__m128i)0LL, si128, a7);
          }
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v379 = *(_QWORD *)(a1 + 832);
          LODWORD(v475) = v477->m128i_i32[3];
          v479.m128i_i64[0] = (__int64)s1;
          LODWORD(v472) = get_dtype_size();
          sub_32C430((__int64 *)s1, v379, (unsigned int)v472, 2);
          sub_32F0D0((__int64)v498, (int)v475, (int)v472);
          clear_tinfo_t();
          qsnprintf();
          LODWORD(v475) = 35;
          if ( a4 != 1 )
          {
            LODWORD(v475) = 36;
            if ( a4 != 2 )
            {
              LODWORD(v475) = 34;
              if ( a4 )
                LODWORD(v475) = 37;
            }
          }
          v31 = 0;
          v17 = nullptr;
          LOBYTE(v468) = 0;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          v472 = s;
          v467 = 0;
          LODWORD(v471) = 1;
          goto LABEL_27;
        case 0x2E:
          v332 = *(_QWORD *)(a1 + 72);
          if ( v332 == 41 )
          {
            sub_3F1CC0((__int64)v498, v13, v476.m128i_i32[0], 2, 2);
            LOBYTE(v468) = 0;
            v467 = 0;
            v472 = "__fastfail";
            LODWORD(v475) = 0;
            LODWORD(v471) = 1;
            v478.m128i_i32[0] = 15;
            v476.m128i_i32[0] = 12;
            v465 = 1;
            v479.m128i_i64[0] = (__int64)s1;
            goto LABEL_93;
          }
          if ( v332 != 44 )
            goto LABEL_6;
          v7 = 0;
          memset(s1, 0, sizeof(s1));
          v479.m128i_i64[0] = (__int64)s1;
          if ( get_cmt() <= 0 || s1[1] <= &byte_9[2] )
          {
            v333 = s1[0];
            v476.m128i_i32[0] = 4;
            v472 = "__int2c";
            LODWORD(v471) = 0;
          }
          else
          {
            v333 = s1[0];
            if ( !strncmp(s1[0], "NT_ASSERT(\"", 0xBu) )
            {
              v334 = strrchr(v333 + 11, 34);
              if ( v334 && v334[1] == 41 )
                *v334 = 0;
              v498[0] = 3;
              v500 = qstrdup();
              v499 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
              copy_tinfo_t();
              v335 = *(_QWORD *)(a1 + 40);
              v333 = s1[0];
              v476.m128i_i32[0] = 12;
              LODWORD(v471) = 1;
              v501 = v335;
              v472 = "NT_ASSERT";
            }
            else
            {
              v476.m128i_i32[0] = 4;
              v472 = "__int2c";
              LODWORD(v471) = 0;
            }
          }
          if ( v333 )
          {
            s1[1] = nullptr;
            qfree((__int64)v333);
          }
          LOBYTE(v468) = 0;
          v31 = 0;
          LODWORD(v475) = 0;
          v17 = nullptr;
          v465 = 1;
          v467 = 0;
          goto LABEL_27;
        case 0x30:
          LOBYTE(v468) = 0;
          v31 = 0;
          LODWORD(v475) = 0;
          v465 = 1;
          if ( (get_flags_ex() & 0x10000) != 0 )
            v476.m128i_i32[0] = 4;
          else
            v476.m128i_i32[0] = 12;
          v17 = nullptr;
          v266 = "__debugbreak";
          goto LABEL_455;
        case 0x61:
        case 0x62:
        case 0xDE:
          sub_3FAC20(a1, (__int64)v498, 1, v478.m128i_i64[1], v486, (__m128i)0LL, si128, a7);
          v254 = *(_WORD *)(a1 + 48);
          v255 = 6;
          v472 = "__lidt";
          if ( v254 != 98 )
          {
            v472 = "__lgdt";
            if ( v254 != 97 )
            {
              v472 = "__invlpg";
              if ( v254 == 222 )
                v255 = 4096;
            }
          }
          sub_3F0D80((__int64 *)v489, a1 + 64, v255);
          LOBYTE(v468) = 0;
          LODWORD(v471) = 1;
          v467 = 0;
          goto LABEL_388;
        case 0x78:
          if ( (unsigned __int64)get_dtype_size() <= 3 )
          {
            if ( v477[1].m128i_i8[0] )
            {
              v292 = v477->m128i_i32[3];
              v293 = v292;
            }
            else
            {
              if ( !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
                sub_3EB430(0.0);
              v293 = v477->m128i_i32[3];
              v292 = v293;
              if ( !v477[1].m128i_i8[0] )
              {
                if ( !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
                  sub_3EB430(0.0);
                v292 = v477->m128i_i32[3];
              }
            }
            sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), 2, v292, v293, 0, (__m128i)0LL, si128, a7);
          }
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v294 = *(_QWORD *)(a1 + 832);
          v295 = v477->m128i_i32[3];
          v479.m128i_i64[0] = (__int64)s1;
          v476.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v294, v476.m128i_u32[0], 2);
          sub_32F0D0((__int64)v498, v295, v476.m128i_i32[0]);
          v31 = 1;
          v17 = nullptr;
          clear_tinfo_t();
          LOBYTE(v468) = 1;
          LODWORD(v475) = 36;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          v472 = "__segmentlimit";
          v467 = 1;
          LODWORD(v471) = 1;
          goto LABEL_27;
        case 0x7B:
          v301 = *(_BYTE *)(a1 + 65);
          if ( v301 == 10 )
          {
            v394 = *(_BYTE *)(a1 + 109);
            qsnprintf();
            v395 = 36;
            if ( v394 == 7 )
              v395 = 37;
            v396 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v498, v396, v395);
            LODWORD(v471) = 1;
            LODWORD(v475) = 0;
            v472 = s;
            v467 = 0;
          }
          else if ( v301 == 9 )
          {
            v390 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
            sub_3F7E20(
              a1,
              3u,
              2,
              *(unsigned __int16 *)(a1 + 70),
              0x3BEA45E214ADDC55LL,
              v390,
              (__m128i)0LL,
              si128,
              a7,
              0);
            v391 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v498, v391, 36);
            v392 = 36;
            if ( *(_BYTE *)(a1 + 109) == 7 )
              v392 = 37;
            v393 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v503, v393, v392);
            LODWORD(v471) = 2;
            LODWORD(v475) = 0;
            v472 = "__writedr";
            v467 = 0;
          }
          else
          {
            v302 = *(_BYTE *)(a1 + 105);
            if ( v302 == 10 )
            {
              qsnprintf();
              LODWORD(v475) = 36;
              if ( *(_BYTE *)(a1 + 69) == 7 )
                LODWORD(v475) = 37;
              sub_3F6F70(a1);
              v467 = 1;
              LODWORD(v471) = 0;
              v472 = s;
            }
            else if ( v302 == 9 )
            {
              v459 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
              sub_3F7E20(
                a1,
                3u,
                2,
                *(unsigned __int16 *)(a1 + 110),
                0x3BEA45E214ADDC55LL,
                v459,
                (__m128i)0LL,
                si128,
                a7,
                0);
              v460 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
              sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v498, v460, 36);
              LODWORD(v475) = 36;
              if ( *(_BYTE *)(a1 + 69) == 7 )
                LODWORD(v475) = 37;
              v467 = 1;
              v472 = "__readdr";
              LODWORD(v471) = 1;
            }
            else
            {
              LODWORD(v475) = 0;
              v472 = nullptr;
              v467 = 0;
              LODWORD(v471) = 0;
            }
          }
          v303 = *(_QWORD *)(a1 + 8);
          v304.m128i_i64[0] = 0;
          memset(s1, 0, sizeof(s1));
          v497 = 0;
          v305 = *(_QWORD *)(v303 + 544);
          v306 = *(_QWORD *)(v303 + 536);
          if ( v306 + v305 - 1 >= v306 )
          {
            s1[2] = (char *)qvector_reserve((__int64)&s1[2], 0, 1, 16);
            v304 = _mm_unpacklo_epi64((__m128i)v306, (__m128i)v305);
            *(__m128i *)&s1[2][16 * v497] = v304;
            *(_QWORD *)&v497 = v497 + 1;
          }
          v479.m128i_i64[0] = (__int64)s1;
          sub_64280((__int64 *)v489, (__int64 *)s1, *(double *)v304.m128i_i64);
          sub_316CB0((__int64 *)&src, (const void **)&s1[2], v307, v308);
          if ( s1[2] )
          {
            *(_QWORD *)&v497 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          v309 = *(_QWORD *)(a1 + 8);
          v7 = 0;
          memset(s1, 0, sizeof(s1));
          v497 = 0;
          v310 = *(_QWORD *)(v309 + 696);
          v468 = *(_QWORD *)(v309 + 704);
          v476.m128i_i64[0] = v310;
          if ( v310 + v468 - 1 >= v310 )
          {
            s1[2] = (char *)qvector_reserve((__int64)&s1[2], 0, 1, 16);
            v7 = (__m128i)_mm_loadh_ps((const double *)&v468);
            *(__m128i *)&s1[2][16 * v497] = v7;
            *(_QWORD *)&v497 = v497 + 1;
          }
          sub_64280((__int64 *)v489, (__int64 *)v479.m128i_i64[0], *(double *)v7.m128i_i64);
          sub_316CB0((__int64 *)&src, (const void **)&s1[2], v311, v312);
          if ( s1[2] )
          {
            *(_QWORD *)&v497 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          v77 = v467;
          if ( v467 )
          {
            if ( !v472 )
            {
              v476.m128i_i32[0] = 4;
              break;
            }
            v452 = *(_QWORD *)(a1 + 8);
            v31 = v467;
            v17 = nullptr;
            LOBYTE(v468) = 1;
            v476.m128i_i32[0] = 4;
            v464 = v452;
            v465 = 1;
            goto LABEL_28;
          }
          sub_3EBDD0(v486, (__int64)v489, *(double *)v7.m128i_i64);
          if ( !v472 )
            goto LABEL_6;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          LOBYTE(v468) = 0;
          goto LABEL_112;
        case 0x84:
          v296 = *(_BYTE *)(a1 + 109);
          LOBYTE(v475) = v296;
          if ( v296 == 2 )
          {
            v476.m128i_i64[0] = (__int64)"dword";
          }
          else if ( v296 > 2u )
          {
            if ( (_BYTE)v475 != 7 )
              goto LABEL_6;
            v476.m128i_i64[0] = (__int64)"qword";
          }
          else
          {
            v104 = v296 == 0;
            v297 = "word";
            if ( v104 )
              v297 = "byte";
            v476.m128i_i64[0] = (__int64)v297;
          }
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16) )
          {
            if ( !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
              sub_3EB430(0.0);
            v13 = *(_QWORD *)(a1 + 832);
          }
          LODWORD(v472) = *(_DWORD *)(v478.m128i_i64[1] + 12);
          v298 = get_dtype_size();
          v479.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v13, v298, 2);
          sub_32F0D0((__int64)v498, (int)v472, v298);
          clear_tinfo_t();
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v299 = *(_QWORD *)(a1 + 832);
          LODWORD(v472) = v477->m128i_i32[3];
          v300 = get_dtype_size();
          sub_32C430((__int64 *)v479.m128i_i64[0], v299, v300, 2);
          sub_32F0D0((__int64)v503, (int)v472, v300);
          clear_tinfo_t();
          qsnprintf();
          LOBYTE(v468) = 0;
          LODWORD(v471) = 2;
          v467 = 0;
          v472 = s;
          v476.m128i_i32[0] = 4;
          v465 = 1;
          LODWORD(v475) = 0;
          goto LABEL_93;
        case 0x8C:
        case 0x8E:
          v249 = 140;
          if ( *(_DWORD *)(v13 + 84) == 8 )
            v249 = 142;
          if ( (_DWORD)v47 != v249 )
            goto LABEL_6;
          sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
          sub_3F8EE0(a1, 0.0, *(double *)si128.m128_u64, a7);
          v250 = 39;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
            v250 = 37;
          v251 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
          sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v498, v251, v250);
          sub_3F0F00(v486, 0, 5, 0.0);
          LOBYTE(v468) = 0;
          v252 = "__writeeflags";
          LODWORD(v471) = 1;
          v467 = 0;
          goto LABEL_387;
        case 0x95:
        case 0x97:
          v243 = 149;
          if ( *(_DWORD *)(v13 + 84) == 8 )
            v243 = 151;
          if ( (_DWORD)v47 != v243 )
            goto LABEL_6;
          v244 = *(_QWORD **)(a1 + 8);
          v472 = "__readeflags";
          if ( *(_QWORD *)(a1 + 40) == v244[5] )
            v472 = "__getcallerseflags";
          v245 = 39;
          if ( *(_DWORD *)(v13 + 80) == 8 )
            v245 = 37;
          LODWORD(v475) = v245;
          v479.m128i_i64[0] = (__int64)s1;
          sub_3EBD60(s1, v245);
          v246 = get_tinfo_size();
          v247 = sub_138140(v244, v246, 1, 0.0);
          v248 = v478.m128i_i64[1];
          v31 = 1;
          v17 = nullptr;
          *(_DWORD *)(v478.m128i_i64[1] + 12) = v247;
          *(_BYTE *)(v248 + 16) = 1;
          clear_tinfo_t();
          LOBYTE(v468) = 1;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          v478.m128i_i32[0] = 16;
          v467 = 1;
          LODWORD(v471) = 0;
          goto LABEL_27;
        case 0x9A:
        case 0x9B:
          if ( a4 != 2 )
            goto LABEL_6;
          v239 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
          sub_3F1CC0((__int64)v498, *(_QWORD *)(a1 + 832), v239, 2, 2);
          HIDWORD(v504) = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
          v503[0] = 1;
          LODWORD(v504) = 1;
          s1[0] = (_BYTE *)(&qword_20 + 2);
          v479.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          if ( *(_WORD *)(a1 + 48) == 154 )
          {
            v240 = 27;
            v472 = "_lrotl";
          }
          else
          {
            v240 = 28;
            v472 = "_lrotr";
          }
          v241 = (int)sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
          v242 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
          sub_3F7E20(a1, v240, 2, v242, v241, 0, (__m128i)0LL, si128, a7, 0);
          v465 = 0;
          LODWORD(v475) = 36;
          v476.m128i_i32[0] = 20;
          v467 = 1;
          LODWORD(v471) = 2;
          LOBYTE(v468) = 1;
          goto LABEL_112;
        case 0xC6:
        case 0xC7:
LABEL_363:
          sub_3FAC20(a1, (__int64)v498, 1, v478.m128i_i64[1], v486, (__m128i)0LL, si128, a7);
          v236 = 6;
          if ( *(_WORD *)(a1 + 48) == 627 )
            v236 = 8;
          sub_3F0D80(v486, a1 + 64, v236);
          v237 = *(_WORD *)(a1 + 48);
          LOBYTE(v468) = 0;
          v31 = 0;
          v17 = nullptr;
          LODWORD(v475) = 0;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          if ( v237 == 199 )
          {
            v238 = "__sidt";
          }
          else if ( v237 == 198 )
          {
            v238 = "__sgdt";
          }
          else
          {
            v238 = "__vmx_vmptrst";
          }
          v472 = v238;
          v467 = 0;
          LODWORD(v471) = 1;
          v479.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0xCE:
          LOBYTE(v468) = 0;
          v31 = 0;
          v17 = nullptr;
          v266 = "_enable";
          LODWORD(v475) = 0;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0xD6:
          goto LABEL_129;
        case 0xDA:
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16) )
          {
            if ( !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
              sub_3EB430(0.0);
            v15 = *(_QWORD *)(a1 + 832);
          }
          v479.m128i_i64[0] = v15;
          v478.m128i_i32[0] = *(_DWORD *)(v478.m128i_i64[1] + 12);
          v327 = get_dtype_size();
          v479.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v15, v327, 2);
          sub_32F0D0((__int64)v498, v478.m128i_i32[0], v327);
          clear_tinfo_t();
          if ( a4 == 7 )
          {
            v31 = 1;
            v17 = nullptr;
            LOBYTE(v468) = 1;
            LODWORD(v475) = 37;
            v465 = 0;
            v476.m128i_i32[0] = 20;
            v478.m128i_i32[0] = 12;
            v472 = "_byteswap_uint64";
            v467 = 1;
            LODWORD(v471) = 1;
          }
          else
          {
            v104 = a4 == 1;
            LOBYTE(v468) = 1;
            v31 = 1;
            v17 = nullptr;
            if ( v104 )
            {
              LODWORD(v475) = 35;
              v465 = 0;
              v476.m128i_i32[0] = 20;
              v478.m128i_i32[0] = 12;
              v472 = "_byteswap_ushort";
            }
            else
            {
              LODWORD(v475) = 36;
              v465 = 0;
              v476.m128i_i32[0] = 20;
              v478.m128i_i32[0] = 12;
              v472 = "_byteswap_ulong";
            }
            v467 = 1;
            LODWORD(v471) = 1;
          }
          goto LABEL_27;
        case 0xDD:
          LOBYTE(v468) = 0;
          v31 = 0;
          v17 = nullptr;
          v266 = "__wbinvd";
          LODWORD(v475) = 0;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0xDF:
        case 0x101:
          v253 = get_dtype_size();
          v479.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v13, v253, 2);
          sub_32F0D0((__int64)v498, v476.m128i_i32[0], v253);
          clear_tinfo_t();
          v104 = *(_WORD *)(a1 + 48) == 223;
          v472 = "__readpmc";
          if ( v104 )
            v472 = "__readmsr";
          LOBYTE(v468) = 0;
          v31 = 0;
          LODWORD(v475) = 37;
LABEL_392:
          v465 = 1;
          v17 = nullptr;
          v476.m128i_i32[0] = 4;
          v467 = 0;
          LODWORD(v471) = 1;
          goto LABEL_27;
        case 0xE0:
          v326 = get_dtype_size();
          v479.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v13, v326, 2);
          sub_32F0D0((__int64)v498, v476.m128i_i32[0], v326);
          clear_tinfo_t();
          sub_1252A0((__int64)v503, 8, v473, 4);
          s1[0] = (_BYTE *)(&qword_20 + 5);
          copy_tinfo_t();
          v17 = nullptr;
          v31 = 0;
          clear_tinfo_t();
          LOBYTE(v468) = 0;
          LODWORD(v475) = 0;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          v472 = "__writemsr";
          v467 = 0;
          LODWORD(v471) = 2;
          goto LABEL_27;
        case 0xE3:
          LOBYTE(v468) = 0;
          v31 = 0;
          v17 = nullptr;
          v266 = "__rdtsc";
          LODWORD(v475) = 37;
          v465 = 1;
          v476.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x15F:
          LOBYTE(v468) = 0;
          v31 = 0;
          v17 = nullptr;
          LODWORD(v475) = 0;
          v266 = "_m_empty";
          v465 = 0;
          v476.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x160:
          LOBYTE(v468) = sub_3F7000(a1);
          if ( !(_BYTE)v468 )
            goto LABEL_6;
          v372 = *(char *)(a1 + 109);
          if ( *(_BYTE *)(a1 + 69) != *(_BYTE *)(a1 + 109) )
          {
            v373 = *(_BYTE *)(a1 + 65);
            if ( v373 != 12 )
            {
              if ( v373 != 1 )
              {
                if ( v373 != 13 )
                  goto LABEL_640;
LABEL_883:
                v450 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
                sub_3F1CC0((__int64)v498, *(_QWORD *)(a1 + 832), v450, 2, 2);
                v465 = 0;
                v31 = 1;
                v17 = nullptr;
                v367 = "_mm_cvtsi32_si128";
                LODWORD(v475) = -13;
                v476.m128i_i32[0] = 20;
                goto LABEL_629;
              }
              v449 = *(_WORD *)(a1 + 70);
              if ( (unsigned __int16)(v449 - 56) > 7u )
              {
                if ( (unsigned __int16)(v449 - 64) > 0xFu )
                {
LABEL_640:
                  v374 = *(_BYTE *)(a1 + 105);
                  if ( v374 != 12 )
                  {
                    if ( v374 != 1 )
                    {
                      if ( v374 != 13 )
                        goto LABEL_6;
                      goto LABEL_643;
                    }
                    v454 = *(_WORD *)(a1 + 110);
                    if ( (unsigned __int16)(v454 - 56) > 7u )
                    {
                      if ( (unsigned __int16)(v454 - 64) <= 0xFu )
                      {
LABEL_643:
                        v375 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
                        sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v498, v375, -13);
                        v465 = 0;
                        v31 = 1;
                        v17 = nullptr;
                        v367 = "_mm_cvtsi128_si32";
                        LODWORD(v475) = 7;
                        v476.m128i_i32[0] = 20;
                        goto LABEL_629;
                      }
                      goto LABEL_6;
                    }
                  }
                  v455 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
                  sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v498, v455, -12);
                  v465 = 0;
                  v31 = 1;
                  v17 = nullptr;
                  v367 = "_mm_cvtsi64_si32";
                  LODWORD(v475) = 7;
                  v476.m128i_i32[0] = 20;
                  goto LABEL_629;
                }
                goto LABEL_883;
              }
            }
            v446 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
            sub_3F1CC0((__int64)v498, *(_QWORD *)(a1 + 832), v446, 2, 2);
            v465 = 0;
            v31 = 1;
            v17 = nullptr;
            v367 = "_mm_cvtsi32_si64";
            LODWORD(v475) = -12;
            v476.m128i_i32[0] = 20;
LABEL_629:
            v472 = v367;
            v467 = 2;
            LODWORD(v471) = 1;
            v479.m128i_i64[0] = (__int64)s1;
            goto LABEL_27;
          }
          v451 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
LABEL_885:
          v77 = *(_QWORD *)(a1 + 832);
          sub_3F1CC0((__int64)v498, v77, v451, v372, 2);
          v476.m128i_i32[0] = 20;
          v79 = 0;
          LODWORD(v475) = 0;
          v467 = 2;
          LODWORD(v471) = 1;
          break;
        case 0x161:
          LOBYTE(v468) = sub_3F7000(a1);
          if ( !(_BYTE)v468 )
            goto LABEL_6;
          v363 = *(_BYTE *)(a1 + 109);
          v465 = *(_BYTE *)(a1 + 69) == v363 && *(_BYTE *)(a1 + 69) <= 7u;
          if ( v465 )
          {
            v372 = v363;
            v451 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
            goto LABEL_885;
          }
          v364 = *(_BYTE *)(a1 + 65);
          if ( v364 == 13 || v364 == 1 && (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu )
          {
            v365 = *(_BYTE *)(a1 + 105);
            if ( v365 == 13 || v365 == 1 && (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) <= 0xFu )
            {
              v366 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
              sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v498, v366, -13);
              v31 = 1;
              v17 = nullptr;
              v367 = "_mm_move_epi64";
              LODWORD(v475) = -13;
              v476.m128i_i32[0] = 20;
              goto LABEL_629;
            }
          }
LABEL_289:
          LOBYTE(v468) = sub_3F7000(a1);
          if ( !(_BYTE)v468 )
            goto LABEL_6;
          v198 = *(_WORD *)(a1 + 48);
          v199 = &word_4F11E0;
          if ( v198 != word_4F11E0 )
          {
            do
              v199 += 12;
            while ( *v199 != v198 );
          }
          v200 = *(_BYTE *)(a1 + 65);
          if ( v200 == 13 )
            goto LABEL_665;
          if ( v200 == 1 )
          {
            if ( (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu )
            {
LABEL_665:
              v380 = *(_BYTE *)(a1 + 105);
              if ( v380 == 13 )
                goto LABEL_6;
              if ( v380 != 1 )
              {
                qsnprintf();
                sub_3FA780(
                  a1,
                  (__int64)v498,
                  *((_DWORD *)v199 + 4),
                  (__int64)v477,
                  (__m128i)0LL,
                  64,
                  0xFFFFFFFF,
                  si128,
                  a7);
                sub_3F0D80((__int64 *)v489, a1 + 104, 0);
                v381 = *((_DWORD *)v199 + 5);
                v31 = 1;
                v17 = nullptr;
                v465 = 0;
                v476.m128i_i32[0] = 20;
                v367 = s;
                LODWORD(v475) = v381;
                goto LABEL_629;
              }
              if ( (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu && v198 == 353 )
              {
                v443 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
                v444 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
                sub_1D6840(a1, 7, a4, v444, v443, 0, (__m128i)0LL, si128, a7);
                goto LABEL_272;
              }
              goto LABEL_6;
            }
            if ( v198 == 353 )
            {
              v404 = (int)sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
              v463 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
              sub_3F7E20(a1, 4u, 7, v463, 0x3BEA45E214ADDC55LL, v404, (__m128i)0LL, si128, a7, 0);
              goto LABEL_272;
            }
            v479.m128i_i64[0] = get_dtype_size();
            v382 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
            sub_3F0F00(v486, v382, v479.m128i_i32[0], 0.0);
            v461 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
            sub_32F110((__int64)v498, *(_QWORD *)(a1 + 832), v461, v479.m128i_u32[0], 0, v479.m128i_i32[0], 2);
          }
          else
          {
            sub_3FAC20(a1, (__int64)v498, *((_DWORD *)v199 + 4), v478.m128i_i64[1], v486, (__m128i)0LL, si128, a7);
          }
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v476.m128i_i32[0] = v477->m128i_i32[3];
          v201 = *((_DWORD *)v199 + 5);
          if ( v201 < 0 )
          {
            s1[0] = nullptr;
            v479.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v201;
            v479.m128i_i64[0] = (__int64)s1;
          }
          sub_32F0D0((__int64)v503, v476.m128i_i32[0], 16);
          clear_tinfo_t();
          if ( ((*(_WORD *)(a1 + 48) - 446) & 0xFFFD) != 0 )
          {
            sub_3FB270(a1, 0, SHIDWORD(v504), 0, (__m128i)0LL, si128, a7);
            goto LABEL_272;
          }
          qsnprintf();
          LOBYTE(v468) = 0;
          LODWORD(v471) = 2;
          v467 = 0;
          v472 = s;
          v476.m128i_i32[0] = 20;
          v465 = 0;
          LODWORD(v475) = 0;
          goto LABEL_93;
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16A:
        case 0x16B:
        case 0x16C:
        case 0x16D:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17A:
        case 0x17B:
        case 0x17C:
        case 0x17D:
        case 0x17E:
        case 0x17F:
        case 0x180:
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18A:
        case 0x18B:
        case 0x18C:
        case 0x1A8:
        case 0x1AA:
        case 0x1AB:
          goto LABEL_113;
        case 0x16E:
        case 0x16F:
        case 0x170:
        case 0x18D:
LABEL_300:
          v479.m128i_i32[0] = *(_DWORD *)(v13 + 456);
          v202 = sub_3F7000(a1);
          v48 = v479.m128i_i32[0];
          if ( !v202 || ((*(_QWORD *)(a1 + 104) ^ *(_QWORD *)(a1 + 64)) & 0xFFFF00000000FF00LL) != 0 )
            goto LABEL_113;
          v203 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
          sub_3F7E20(a1, 3u, a4, 0, 0x3BEA45E214ADDC55LL, v203, (__m128i)0LL, si128, a7, 0);
          v204 = *(_WORD *)(a1 + 48);
          if ( v204 != 468 && v204 != 397 )
          {
            v479.m128i_i64[0] = (int)sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
            v205 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
            sub_3F7E20(a1, 7u, a4, v205, 0x3BEA45E214ADDC55LL, v479.m128i_i64[0], (__m128i)0LL, si128, a7, 0);
          }
          goto LABEL_272;
        case 0x18E:
LABEL_346:
          v226 = (char *)&unk_4E9DE0;
          while ( (_WORD)v47 != *(_WORD *)v226 )
          {
            v226 += 16;
            if ( algn_4E9E50 == v226 )
            {
              if ( !under_debugger )
                sub_383060(0xCD2Cu, 0.0);
              goto LABEL_944;
            }
          }
          v472 = *((void **)v226 + 1);
          sub_3FAC20(a1, (__int64)v498, 1, v478.m128i_i64[1], v486, (__m128i)0LL, si128, a7);
          v405 = 512;
          if ( *(_WORD *)(a1 + 48) == 714 )
            v405 = 832;
          sub_3F0D80(v486, a1 + 64, v405);
          v406 = *(_WORD *)(a1 + 48);
          if ( v406 == 398 || v406 == 1799 )
          {
LABEL_781:
            v465 = 1;
            v476.m128i_i32[0] = 4;
            LODWORD(v471) = 1;
          }
          else
          {
LABEL_762:
            v476.m128i_i64[0] = *(_QWORD *)(a1 + 832);
            v407 = get_dtype_size();
            v479.m128i_i64[0] = (__int64)s1;
            sub_32C430((__int64 *)s1, v476.m128i_i64[0], v407, 2);
            sub_32F0D0((__int64)v503, 8, v407);
            clear_tinfo_t();
            v465 = 1;
            v476.m128i_i32[0] = 4;
            LODWORD(v471) = 2;
          }
LABEL_315:
          if ( !v472 )
            goto LABEL_6;
          v213 = *(_QWORD *)(a1 + 8);
          LOBYTE(v468) = 0;
          v17 = nullptr;
          v31 = 0;
          v467 = 0;
          v464 = v213;
          LODWORD(v475) = 0;
          v479.m128i_i64[0] = (__int64)s1;
          goto LABEL_28;
        case 0x18F:
LABEL_592:
          v342 = (char *)&unk_4E9DE0;
          while ( (_WORD)v47 != *(_WORD *)v342 )
          {
            v342 += 16;
            if ( algn_4E9E50 == v342 )
            {
              if ( !under_debugger )
                sub_383060(0xCD2Cu, 0.0);
              goto LABEL_944;
            }
          }
          v472 = *((void **)v342 + 1);
          sub_3FA780(a1, (__int64)v498, 1, v478.m128i_i64[1], (__m128i)0LL, 0, 0xFFFFFFFF, si128, a7);
          sub_3F0D80((__int64 *)v489, a1 + 64, 0);
          sub_648D0(v486, v489, 0.0);
          v410 = v491;
          v479.m128i_i64[0] = 0;
          if ( (_QWORD)v491 )
          {
            v479.m128i_i64[0] = qalloc_or_throw(16 * v491, (__int64)v489, v408, v409);
            memcpy((void *)v479.m128i_i64[0], src, 16 * v410);
          }
          v411 = _mm_unpacklo_epi64((__m128i)v410, (__m128i)v410);
          if ( v487 )
          {
            v476 = v411;
            v488.m128i_i64[0] = 0;
            qfree(v487);
            v411 = _mm_load_si128(&v476);
          }
          v488 = v411;
          v487 = v479.m128i_i64[0];
          v412 = *(_QWORD *)(a1 + 832);
          v413 = *(_DWORD *)(v412 + 448);
          v414 = *(_DWORD *)(v412 + 492);
          s1[0] = nullptr;
          s1[1] = nullptr;
          v479.m128i_i64[0] = (__int64)s1;
          sub_63E80((__int64 *)s1, v414, 8 * v413, *(double *)v411.m128i_i64);
          s1[2] = nullptr;
          v497 = 0;
          sub_64280(v486, (__int64 *)v479.m128i_i64[0], 0.0);
          sub_316CB0(&v487, (const void **)&s1[2], v415, v416);
          if ( s1[2] )
          {
            *(_QWORD *)&v497 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v479.m128i_i64[0], 0, 5, 0.0);
          s1[2] = nullptr;
          v497 = 0;
          sub_64280(v486, (__int64 *)v479.m128i_i64[0], 0.0);
          sub_316CB0(&v487, (const void **)&s1[2], v417, v418);
          if ( s1[2] )
          {
            *(_QWORD *)&v497 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          v419 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 688LL);
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v479.m128i_i64[0], v419, 3, 0.0);
          s1[2] = nullptr;
          v497 = 0;
          sub_64280(v486, (__int64 *)v479.m128i_i64[0], 0.0);
          sub_316CB0(&v487, (const void **)&s1[2], v420, v421);
          if ( s1[2] )
          {
            *(_QWORD *)&v497 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          v422 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 528LL);
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v479.m128i_i64[0], v422, 64, 0.0);
          s1[2] = nullptr;
          v497 = 0;
          sub_64280(v486, (__int64 *)v479.m128i_i64[0], 0.0);
          sub_316CB0(&v487, (const void **)&s1[2], v423, v424);
          if ( s1[2] )
          {
            *(_QWORD *)&v497 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          v425 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v479.m128i_i64[0], v425, 256, 0.0);
          v7 = 0;
          s1[2] = nullptr;
          v497 = 0;
          sub_64280(v486, (__int64 *)v479.m128i_i64[0], 0.0);
          sub_316CB0(&v487, (const void **)&s1[2], v426, v427);
          if ( s1[2] )
          {
            *(_QWORD *)&v497 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          v428 = *(_WORD *)(a1 + 48);
          if ( v428 == 399 || v428 == 1800 )
            goto LABEL_781;
          goto LABEL_762;
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19A:
        case 0x19B:
        case 0x1A0:
        case 0x1A1:
        case 0x1A2:
        case 0x1A3:
        case 0x1A4:
LABEL_179:
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          v122 = v477->m128i_i32[3];
          v479.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          sub_32F0D0((__int64)v503, v122, 8);
          clear_tinfo_t();
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
            && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
          {
            sub_3EB430(0.0);
          }
          s1[0] = nullptr;
          v123 = *(_DWORD *)(v478.m128i_i64[1] + 12);
          copy_tinfo_t();
          sub_32F0D0((__int64)v498, v123, 8);
          clear_tinfo_t();
          LODWORD(v471) = 2;
          goto LABEL_182;
        case 0x19C:
        case 0x19D:
        case 0x19E:
        case 0x19F:
LABEL_305:
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          v206 = v477->m128i_i32[3];
          v479.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          sub_32F0D0((__int64)v498, v206, 8);
          clear_tinfo_t();
          LODWORD(v471) = 1;
LABEL_182:
          LOBYTE(v468) = sub_3F7000(a1);
          if ( !(_BYTE)v468 )
            goto LABEL_6;
          qsnprintf();
          v31 = 1;
          v17 = nullptr;
          LODWORD(v475) = -12;
          v465 = 0;
          v476.m128i_i32[0] = 20;
          v472 = s;
          v467 = 2;
          goto LABEL_27;
        case 0x1A5:
          LOBYTE(v468) = 0;
          v31 = 0;
          v17 = nullptr;
          LODWORD(v475) = 0;
          v266 = "_m_femms";
          v465 = 0;
          v476.m128i_i32[0] = 4;
LABEL_455:
          v472 = v266;
          v467 = 0;
          LODWORD(v471) = 0;
          v479.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0x1A6:
          sub_3FA780(a1, (__int64)v498, 1, v478.m128i_i64[1], (__m128i)0LL, 0, 0xFFFFFFFF, si128, a7);
          sub_3F0D80((__int64 *)v489, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v468) = 0;
          v252 = "_m_prefetch";
          LODWORD(v471) = 1;
          v467 = 0;
          goto LABEL_387;
        case 0x1A7:
          sub_3FA780(a1, (__int64)v498, 1, v478.m128i_i64[1], (__m128i)0LL, 0, 0xFFFFFFFF, si128, a7);
          sub_3F0D80((__int64 *)v489, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v468) = 0;
          v252 = "_m_prefetchw";
          LODWORD(v471) = 1;
          v467 = 0;
LABEL_387:
          v472 = v252;
LABEL_388:
          v476.m128i_i32[0] = 4;
          v465 = 1;
          LODWORD(v475) = 0;
          v479.m128i_i64[0] = (__int64)s1;
          goto LABEL_93;
        case 0x1A9:
          goto LABEL_254;
        case 0x1AE:
LABEL_833:
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v442 = v477->m128i_i32[3];
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
            && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
          {
            sub_3EB430(0.0);
          }
          sub_3FA190(a1, *(_DWORD *)(v478.m128i_i64[1] + 12), v442, 0.0);
          sub_3FB3E0(a1, 12, 0.0);
          sub_3F5050(a1);
          goto LABEL_272;
        case 0x1AF:
LABEL_751:
          v476.m128i_i64[0] = (__int64)&word_4F0A60;
          goto LABEL_197;
        case 0x1B0:
        case 0x1B3:
LABEL_242:
          v172 = *(_BYTE *)(a1 + 105);
          v476.m128i_i64[0] = (__int64)&word_4F0C40;
          if ( v172 != 13 )
          {
            v476.m128i_i64[0] = (__int64)&word_4F0DC0;
            if ( v172 == 1 )
            {
              v173 = *(_WORD *)(a1 + 110);
              v476.m128i_i64[0] = (__int64)&word_4F0C40;
              if ( (unsigned __int16)(v173 - 64) > 0xFu )
                v476.m128i_i64[0] = (__int64)&word_4F0DC0;
            }
          }
          goto LABEL_197;
        case 0x1B1:
          LOBYTE(v472) = 3;
LABEL_729:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LODWORD(v475) = 0;
          LOBYTE(v468) = 0;
          v476.m128i_i32[0] = 20;
          v466 = 65;
          v467 = 0;
          LODWORD(v471) = 0;
          v474 = 2;
          goto LABEL_483;
        case 0x1B2:
          v474 = 3;
          LODWORD(v475) = 0;
          LODWORD(v471) = 0;
          goto LABEL_481;
        case 0x1B4:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LODWORD(v475) = 9;
          v474 = 3;
LABEL_479:
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v275 = v477->m128i_u32[3];
          s1[0] = (char *)(int)v475;
          v276 = get_tinfo_size();
          v15 = v275;
          v479.m128i_i64[0] = (__int64)s1;
          sub_32F0D0((__int64)v498, v275, v276);
          clear_tinfo_t();
          LODWORD(v471) = 1;
LABEL_481:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LOBYTE(v468) = 0;
          v476.m128i_i32[0] = 20;
          v466 = 63;
          v467 = 1;
          LOBYTE(v472) = 2;
LABEL_483:
          v32 = j__qalloc_or_throw(80, v15, v47, v16);
          v277 = *(_QWORD *)(a1 + 40);
          v478.m128i_i64[0] = v32 + 32;
          *(_QWORD *)(v32 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v32 + 40) = 0;
          *(_QWORD *)(v32 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v32 + 56) = 0;
          *(_QWORD *)(v32 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v32 + 72) = 0;
          sub_330970(v32, v277);
          v278 = (__m128i)(unsigned __int64)get_dtype_size();
          if ( !v477[1].m128i_i8[0] )
          {
            v479.m128i_i64[0] = v278.m128i_i64[0];
            v282 = sub_3FACB0((__int64)v477, v278, si128, a7);
            v278 = _mm_loadl_epi64(&v479);
            if ( !v282 )
              sub_3EB430(*(double *)v278.m128i_i64);
          }
          s1[0] = &byte_1;
          v279 = (char *)_mm_unpacklo_epi32(v278, _mm_cvtsi32_si128(v477->m128i_u32[3])).m128i_u64[0];
          v479.m128i_i64[0] = (__int64)s1;
          *(char **)((char *)s1 + 4) = v279;
          sub_125180((unsigned __int8 *)v478.m128i_i64[0], (unsigned __int8 *)s1);
          sub_11CDA0(v479.m128i_i64[0]);
          v280 = (__m128i)(unsigned __int64)get_dtype_size();
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16) )
          {
            v478.m128i_i64[0] = v280.m128i_i64[0];
            v281 = sub_3FACB0(v478.m128i_i64[1], v280, si128, a7);
            v280 = _mm_loadl_epi64(&v478);
            if ( !v281 )
              sub_3EB430(*(double *)v280.m128i_i64);
          }
          s1[0] = &byte_1;
          a7 = (__m128)_mm_cvtsi32_si128(*(_DWORD *)(v478.m128i_i64[1] + 12));
          v478.m128i_i32[0] = *(_DWORD *)(v478.m128i_i64[1] + 12);
          v7 = _mm_unpacklo_epi32(v280, (__m128i)a7);
          *(__int64 *)((char *)s1 + 4) = v7.m128i_i64[0];
          sub_125180((unsigned __int8 *)(v32 + 64), (unsigned __int8 *)v479.m128i_i64[0]);
          sub_11CDA0(v479.m128i_i64[0]);
          *(_DWORD *)(v32 + 4) |= 0x10u;
          v104 = (_BYTE)v468 == 0;
          *(_DWORD *)v32 = v466;
          if ( !v104 )
            sub_12B6F0(v32, *(unsigned __int64 **)(a1 + 832), 9, 16, 1, v7);
          v472 = nullptr;
          v17 = nullptr;
          goto LABEL_37;
        default:
          goto LABEL_6;
      }
LABEL_207:
      v32 = j__qalloc_or_throw(80, v77, v78, v79);
      v140 = *(_QWORD *)(a1 + 40);
      v479.m128i_i64[0] = v32 + 32;
      *(_QWORD *)(v32 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v32 + 40) = 0;
      *(_QWORD *)(v32 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v32 + 56) = 0;
      *(_QWORD *)(v32 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v32 + 72) = 0;
      sub_330970(v32, v140);
      sub_125180((unsigned __int8 *)(v32 + 32), v498);
      v141 = _mm_cvtsi32_si128(v499);
      if ( !*(_BYTE *)(v478.m128i_i64[1] + 16) )
      {
        v479.m128i_i32[0] = _mm_cvtsi128_si32(v141);
        v256 = sub_3FACB0(v478.m128i_i64[1], v141, si128, a7);
        v141 = _mm_cvtsi32_si128(v479.m128i_u32[0]);
        if ( !v256 )
          sub_3EB430(*(double *)v141.m128i_i64);
      }
      v17 = nullptr;
      v472 = nullptr;
      v142 = *(_DWORD *)(v478.m128i_i64[1] + 12);
      *(_BYTE *)(v32 + 64) = 1;
      *(_DWORD *)v32 = 4;
      v479.m128i_i32[0] = v142;
      v7 = _mm_unpacklo_epi32(v141, _mm_cvtsi32_si128(v142));
      *(_QWORD *)(v32 + 68) = v7.m128i_i64[0];
LABEL_37:
      v44 = *(_QWORD *)(a1 + 832);
      if ( *(_DWORD *)(v44 + 84) == 8 && *(_DWORD *)(v32 + 68) == 4 )
      {
        if ( !*(_BYTE *)(v478.m128i_i64[1] + 16) )
        {
          if ( !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], v7, si128, a7) )
            sub_3EB430(*(double *)v7.m128i_i64);
          v44 = *(_QWORD *)(a1 + 832);
        }
        if ( *(_DWORD *)(v44 + 440) >= *(_DWORD *)(v478.m128i_i64[1] + 12) )
          sub_12B6F0(v32, (unsigned __int64 *)v44, 9, 8, 1, v7);
      }
      v45 = (_DWORD *)sub_B5290(*(_QWORD **)(a1 + 16), v32, *(double *)v7.m128i_i64);
      if ( (v476.m128i_i8[0] & 8) != 0 )
        goto LABEL_51;
      v46 = *(unsigned __int16 *)(a1 + 48);
      if ( (unsigned __int16)v46 <= 0x101u )
      {
        if ( (unsigned __int16)v46 > 0x94u )
        {
          switch ( *(_WORD *)(a1 + 48) )
          {
            case 0x95:
            case 0x97:
              v45[1] |= 0x20000u;
              sub_3F8D40(a1, v45[18], v474, v7, si128, a7);
              break;
            case 0x9A:
            case 0x9B:
              sub_3FB370(a1, 8, *(double *)v7.m128i_i64);
              break;
            case 0xC6:
            case 0xC7:
            case 0xCE:
            case 0xDD:
            case 0xDE:
              goto LABEL_159;
            case 0xD1:
            case 0xDB:
              goto LABEL_79;
            case 0xD8:
              goto LABEL_78;
            case 0xD9:
            case 0xE2:
              if ( (_DWORD)v471 == 3 )
              {
                if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], v7, si128, a7) )
                {
                  sub_3EB430(*(double *)v7.m128i_i64);
                }
                v260 = *(int *)(v478.m128i_i64[1] + 12);
                v479.m128i_i64[0] = v469;
                v261 = get_dtype_size();
                sub_1D6310(a1, 0x21u, v261, v479.m128i_i64[0], v260, 1, *(double *)v7.m128i_i64, 0);
                LOWORD(v46) = *(_WORD *)(a1 + 48);
              }
              if ( (_WORD)v46 == 217 )
              {
                if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], v7, si128, a7) )
                {
                  sub_3EB430(*(double *)v7.m128i_i64);
                }
                v127 = v469;
                v128 = *(int *)(v478.m128i_i64[1] + 12);
                v479.m128i_i32[0] = v474;
                v478.m128i_i64[0] = v128;
                v129 = get_dtype_size();
                sub_1D6310(a1, 0x23u, v129, v127, v478.m128i_i64[0], 0, *(double *)v7.m128i_i64, 0);
                if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], v7, si128, a7) )
                {
                  sub_3EB430(*(double *)v7.m128i_i64);
                }
                v478.m128i_i64[0] = *(int *)(v478.m128i_i64[1] + 12);
                v130 = get_dtype_size();
                sub_1D6310(a1, 0x1Eu, v130, v127, v478.m128i_i64[0], 3, *(double *)v7.m128i_i64, 0);
                if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], v7, si128, a7) )
                {
                  sub_3EB430(*(double *)v7.m128i_i64);
                }
                v478.m128i_i64[0] = *(int *)(v478.m128i_i64[1] + 12);
                v131 = get_dtype_size();
                sub_1D6310(a1, 0xDu, v131, v127, v478.m128i_i64[0], v127, *(double *)v7.m128i_i64, 0);
                sub_3FB720(a1, 0x1Fu, v469, v479.m128i_u32[0], 4, v7, si128, a7);
                v132 = get_dtype_size();
                sub_1D6310(a1, 0x1Du, v132, v127, 0x3BEA45E214ADDC55LL, 2, *(double *)v7.m128i_i64, 0);
              }
              break;
            case 0xDF:
            case 0xE3:
            case 0x101:
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
              {
                v120 = v473;
                v121 = get_dtype_size();
                sub_1D6310(a1, 4u, v121, 12, 0x3BEA45E214ADDC55LL, v120, *(double *)v7.m128i_i64, 0);
                sub_1D6840(a1, 2, 7, 8, 8, 0, v7, si128, a7);
                sub_1D6840(a1, 2, 7, v473, v473, 0, v7, si128, a7);
              }
              break;
            default:
              goto LABEL_48;
          }
          goto LABEL_48;
        }
        if ( (unsigned __int16)v46 > 0x30u )
        {
          if ( (unsigned __int16)v46 > 0x8Fu )
            goto LABEL_48;
          if ( (unsigned __int16)v46 <= 0x7Au )
          {
            if ( (unsigned __int16)v46 > 0x62u )
            {
              if ( (_WORD)v46 == 120 )
                sub_3FB370(a1, 2, *(double *)v7.m128i_i64);
              goto LABEL_48;
            }
            if ( (unsigned __int16)v46 <= 0x60u )
              goto LABEL_48;
          }
          else if ( ((1LL << ((unsigned __int8)v46 - 123)) & 0xA0601) == 0 )
          {
            if ( (_WORD)v46 == 143 )
            {
              v258 = v474;
              if ( !*(_BYTE *)(v478.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], v7, si128, a7) )
                sub_3EB430(*(double *)v7.m128i_i64);
              sub_3F8D40(a1, *(_DWORD *)(v478.m128i_i64[1] + 12), v258, v7, si128, a7);
              goto LABEL_48;
            }
            if ( (_WORD)v46 != 131 )
              goto LABEL_48;
LABEL_78:
            sub_3FB3E0(a1, 9, *(double *)v7.m128i_i64);
            goto LABEL_79;
          }
        }
        else
        {
          if ( (unsigned __int16)v46 <= 0x21u )
          {
            if ( (unsigned __int16)v46 > 0xBu )
            {
              if ( (unsigned __int16)(v46 - 12) <= 3u )
                sub_3FB370(a1, 30, *(double *)v7.m128i_i64);
              goto LABEL_48;
            }
            if ( (unsigned __int16)v46 > 9u )
            {
              if ( *v45 != 4 )
              {
                if ( !under_debugger )
                  sub_383060(0xC9CBu, *(double *)v7.m128i_i64);
                goto LABEL_944;
              }
              *v45 = 6;
              sub_3FB370(a1, 29, *(double *)v7.m128i_i64);
              goto LABEL_48;
            }
            if ( (_WORD)v46 != 6 )
            {
LABEL_48:
              if ( v467 == 2 )
              {
                if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], v7, si128, a7) )
                {
                  sub_3EB430(*(double *)v7.m128i_i64);
                }
                sub_3FB270(a1, 0, *(_DWORD *)(v478.m128i_i64[1] + 12), 1, v7, si128, a7);
              }
LABEL_51:
              v18 = 1;
              sub_3ED3A0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1000LL), *(_QWORD *)(a1 + 40));
              goto LABEL_7;
            }
LABEL_79:
            v53 = v474;
            if ( !*(_BYTE *)(v478.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], v7, si128, a7) )
              sub_3EB430(*(double *)v7.m128i_i64);
            sub_3FD520(a1, *(_DWORD *)(v478.m128i_i64[1] + 12), v53, v7, si128, a7);
            goto LABEL_48;
          }
          if ( ((1LL << v46) & 0x1280000000000LL) == 0 )
          {
            if ( ((1LL << v46) & 0x100400000000LL) != 0 )
              goto LABEL_79;
            if ( (_WORD)v46 != 46 )
              goto LABEL_48;
LABEL_103:
            v45[1] |= 0x20000u;
            sub_3FB370(a1, 31, *(double *)v7.m128i_i64);
            goto LABEL_48;
          }
        }
LABEL_159:
        v45[1] |= 0x20000u;
        goto LABEL_48;
      }
      if ( (unsigned __int16)v46 > 0x2EAu )
        goto LABEL_48;
      if ( (unsigned __int16)v46 > 0x2B6u )
      {
        switch ( *(_WORD *)(a1 + 48) )
        {
          case 0x2B7:
            v163 = *(_QWORD *)(a1 + 8);
            if ( (int)v475 < 0 )
            {
              s1[0] = nullptr;
              v479.m128i_i64[0] = (__int64)s1;
              copy_tinfo_t();
            }
            else
            {
              s1[0] = (char *)(unsigned __int8)v475;
              v479.m128i_i64[0] = (__int64)s1;
            }
            v164 = sub_335B10(
                     v163,
                     *(_QWORD *)(a1 + 40) + 1LL,
                     (__int64)"_mm_testc_si128",
                     v479.m128i_i64[0],
                     (int)v471,
                     (__int64)v498,
                     *(double *)v7.m128i_i64,
                     si128,
                     1);
            clear_tinfo_t();
            v165 = v476.m128i_u32[0];
            v166 = (unsigned __int8 *)v479.m128i_i64[0];
            *(_DWORD *)(*(_QWORD *)(v164 + 72) + 280LL) |= v476.m128i_i32[0];
            v167 = *(_DWORD *)(v164 + 68);
            LODWORD(s1[0]) = 1;
            LODWORD(s1[1]) = 0;
            HIDWORD(s1[0]) = v167;
            v169 = sub_1251B0(v164, v166, v168, v165);
            sub_11CDA0(v479.m128i_i64[0]);
            sub_B5290(*(_QWORD **)(a1 + 16), (__int64)v169, *(double *)v7.m128i_i64);
            break;
          case 0x2BD:
          case 0x2BF:
            qstrncpy();
            v110 = "zcso";
            v478.m128i_i64[0] = (__int64)&unk_434B90;
            v479.m128i_i64[0] = (__int64)s1;
            do
            {
              v111 = *v110;
              v112 = *(_QWORD *)(a1 + 8);
              s1[0] = (_BYTE *)(&qword_20 + 2);
              v113 = *(_QWORD *)(a1 + 40);
              s[11] = v111;
              v477 = (__m128i *)sub_335B10(
                                  v112,
                                  v113,
                                  (__int64)s,
                                  v479.m128i_i64[0],
                                  (int)v471,
                                  (__int64)v498,
                                  *(double *)v7.m128i_i64,
                                  si128,
                                  1);
              clear_tinfo_t();
              v114 = v477;
              v115 = v476.m128i_u32[0];
              v116 = (unsigned __int8 *)v479.m128i_i64[0];
              v117 = v477;
              *(_DWORD *)(v477[4].m128i_i64[1] + 280) |= v476.m128i_i32[0];
              v118 = _mm_cvtsi32_si128(v117[4].m128i_u32[1]);
              s1[0] = &byte_1;
              v119 = _mm_cvtsi32_si128(*(_DWORD *)v478.m128i_i64[0]);
              LODWORD(v477) = *(_DWORD *)v478.m128i_i64[0];
              v7 = _mm_unpacklo_epi32(v118, v119);
              *(__int64 *)((char *)s1 + 4) = v7.m128i_i64[0];
              v477 = (__m128i *)sub_1251B0((__int64)v117, v116, (__int64)v114, v115);
              sub_11CDA0(v479.m128i_i64[0]);
              sub_B5290(*(_QWORD **)(a1 + 16), (__int64)v477, *(double *)v7.m128i_i64);
              ++v110;
              v478.m128i_i64[0] += 4;
            }
            while ( "" != v110 );
            break;
          case 0x2C2:
            v171 = v474;
            if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, v7, si128, a7) )
              sub_3EB430(*(double *)v7.m128i_i64);
            sub_3FB720(a1, 0x21u, v477->m128i_i32[3], v171, 1, v7, si128, a7);
            sub_3FB3E0(a1, 29, *(double *)v7.m128i_i64);
            break;
          case 0x2CE:
          case 0x2D0:
            goto LABEL_159;
          case 0x2D2:
          case 0x2D4:
          case 0x2D5:
            goto LABEL_103;
          case 0x2EA:
            sub_3FB3E0(a1, 9, *(double *)v7.m128i_i64);
            sub_3FB370(a1, 20, *(double *)v7.m128i_i64);
            v170 = v474;
            if ( !*(_BYTE *)(v478.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], v7, si128, a7) )
              sub_3EB430(*(double *)v7.m128i_i64);
            sub_3FB720(a1, 0x21u, *(_DWORD *)(v478.m128i_i64[1] + 12), v170, 1, v7, si128, a7);
            break;
          default:
            goto LABEL_48;
        }
        goto LABEL_48;
      }
      if ( (_WORD)v46 == 595 )
      {
        v65 = v470;
        v66 = get_dtype_size();
        sub_1D6310(a1, 4u, v66, v65, 0x3BEA45E214ADDC55LL, 8, *(double *)v7.m128i_i64, 0);
        v67 = v473;
        v479.m128i_i64[0] = v470 + 8;
        v68 = get_dtype_size();
        sub_1D6310(a1, 4u, v68, v479.m128i_i64[0], 0x3BEA45E214ADDC55LL, v67, *(double *)v7.m128i_i64, 0);
        sub_3FB720(a1, 0x20u, v469, 0, 1, v7, si128, a7);
        goto LABEL_48;
      }
      if ( (unsigned __int16)v46 > 0x253u )
      {
        if ( (_WORD)v46 != 627 && (_WORD)v46 != 630 )
          goto LABEL_48;
        goto LABEL_103;
      }
      if ( (_WORD)v46 != 458 )
      {
        if ( (unsigned __int16)v46 > 0x1CAu )
        {
          if ( (unsigned __int16)v46 > 0x225u )
          {
            if ( (_WORD)v46 != 569 )
              goto LABEL_48;
          }
          else
          {
            if ( (unsigned __int16)v46 <= 0x1E7u )
              goto LABEL_48;
            v102 = 0x2200000000000001LL;
            LOWORD(v46) = v46 - 488;
            if ( !_bittest64(&v102, v46) )
              goto LABEL_48;
          }
          goto LABEL_159;
        }
        if ( (_WORD)v46 != 456 )
          goto LABEL_48;
      }
      if ( !*(_BYTE *)(v478.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], v7, si128, a7) )
        sub_3EB430(*(double *)v7.m128i_i64);
      v54 = 0x400000001LL;
      v481 = 0x400000001LL;
      v482 = *(_DWORD *)(v478.m128i_i64[1] + 12);
      if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, v7, si128, a7) )
        sub_3EB430(*(double *)v7.m128i_i64);
      s1[1] = nullptr;
      v483 = 0x400000001LL;
      LODWORD(v484) = v477->m128i_i32[3];
      s1[0] = (char *)-4294967283LL;
      v479.m128i_i64[0] = (__int64)s1;
      v478.m128i_i64[0] = (__int64)&v481;
      v55 = j__qalloc_or_throw(20, (__int64)v45, 0x400000001LL, v54);
      v56 = _mm_loadu_si128((const __m128i *)((char *)xmmword_42E1E0[1].m128i_i64 + 4));
      *(__m128i *)v55 = v56;
      *(_DWORD *)(v55 + 16) = xmmword_42E1E0[2].m128i_i32[1];
      s1[1] = (char *)v55;
      v478.m128i_i64[0] = (__int64)&v481;
      HIDWORD(s1[0]) = 4;
      v479.m128i_i64[0] = (__int64)s1;
      sub_1D6450(a1, 72, (unsigned __int8 *)s1, (unsigned __int8 *)&v483, (unsigned __int8 *)&v481, v56, si128, a7);
      sub_11CDA0(v479.m128i_i64[0]);
      sub_11CDA0((__int64)&v483);
      sub_11CDA0(v478.m128i_i64[0]);
      goto LABEL_51;
    }
    v262 = 1LL << ((unsigned __int8)v47 + 75);
    if ( (v262 & 0x29) == 0 )
    {
      if ( (v262 & 0x52) == 0 )
      {
        if ( !*(_BYTE *)(v478.m128i_i64[1] + 16) )
        {
          if ( !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v15 = *(_QWORD *)(a1 + 832);
        }
        v475 = (unsigned __int8 *)v15;
        v263 = *(_DWORD *)(v478.m128i_i64[1] + 12);
        v479.m128i_i64[0] = (__int64)s1;
        v476.m128i_i32[0] = get_dtype_size();
        sub_32C430((__int64 *)s1, v15, v476.m128i_u32[0], 2);
        sub_32F0D0((__int64)v498, v263, v476.m128i_i32[0]);
        v31 = 0;
        v17 = nullptr;
        clear_tinfo_t();
        LOBYTE(v468) = 0;
        LODWORD(v475) = 0;
        v465 = 0;
        v476.m128i_i32[0] = 4;
        v472 = "_mm_setcsr";
        v467 = 0;
        LODWORD(v471) = 1;
        goto LABEL_27;
      }
LABEL_254:
      LOBYTE(v468) = sub_3F7000(a1);
      if ( !(_BYTE)v468 )
        goto LABEL_6;
      v178 = *(_WORD *)(a1 + 48);
      v479.m128i_i64[0] = (__int64)&word_4F0B20;
      if ( v178 != word_4F0B20 )
      {
        v179 = &word_4F0B20;
        do
        {
          v180 = v179 + 12;
          v179 = v180;
        }
        while ( *v180 != v178 );
        v479.m128i_i64[0] = (__int64)v180;
      }
      v472 = *(void **)(v479.m128i_i64[0] + 8);
      if ( !v472 )
      {
        v400 = 4;
        if ( *(_DWORD *)(v479.m128i_i64[0] + 20) == 9 )
          v400 = 3;
        v478.m128i_i64[0] = (int)sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
        v401 = (int)sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
        v462 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
        sub_3F7E20(
          a1,
          *(_DWORD *)(v479.m128i_i64[0] + 16),
          v400,
          v462,
          v401,
          v478.m128i_i64[0],
          (__m128i)0LL,
          si128,
          a7,
          0);
LABEL_272:
        v17 = nullptr;
        goto LABEL_51;
      }
      LODWORD(v475) = *(_DWORD *)(v479.m128i_i64[0] + 20);
      v181 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
      sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v498, v181, (int)v475);
      v182 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
      sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v503, v182, (int)v475);
      LODWORD(v471) = 2;
      goto LABEL_261;
    }
LABEL_113:
    v479.m128i_i32[0] = v48;
    LOBYTE(v468) = sub_3F7000(a1);
    if ( !(_BYTE)v468 )
      goto LABEL_6;
    v72 = *(_BYTE *)(a1 + 65);
    v73 = v479.m128i_i32[0];
    if ( v72 != 12 )
    {
      if ( v72 != 1 )
      {
        if ( v72 != 13 )
          goto LABEL_6;
        goto LABEL_117;
      }
      v440 = *(_WORD *)(a1 + 70);
      if ( (unsigned __int16)(v440 - 56) > 7u )
      {
        if ( (unsigned __int16)(v440 - 64) > 0xFu )
          goto LABEL_6;
LABEL_117:
        v74 = &word_4EFC80;
        v75 = 0;
        while ( *v74 != *(_WORD *)(a1 + 48) )
        {
          ++v75;
          v74 += 12;
          if ( v75 == 104 )
            goto LABEL_6;
        }
        v472 = *((void **)v74 + 1);
        v76 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
        v77 = (__int64)v498;
        sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v498, v76, *((_DWORD *)v74 + 4));
        if ( *(_BYTE *)(a1 + 105) != 5 )
        {
          v80 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
          v77 = (__int64)v503;
          sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v503, v80, *((_DWORD *)v74 + 4));
        }
        LODWORD(v475) = *((_DWORD *)v74 + 4);
        goto LABEL_123;
      }
    }
    v383 = &word_4EFB00;
    while ( *v383 != *(_WORD *)(a1 + 48) )
    {
      v383 += 12;
      if ( v383 == (__int16 *)&algn_4EFC64[4] )
      {
        qsnprintf();
        v73 = v479.m128i_i32[0];
        v472 = s;
        goto LABEL_687;
      }
    }
    v472 = *((void **)v383 + 1);
LABEL_687:
    v479.m128i_i32[0] = v73;
    v384 = sub_3FAE20(v478.m128i_i64[1], (__m128i)0LL, si128, a7);
    sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v498, v384, -12);
    if ( *(_BYTE *)(a1 + 109) != 7 )
    {
      v385 = v477;
      v386 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
      sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), 7, v386, v479.m128i_i32[0], 0, (__m128i)0LL, si128, a7);
      v387 = v479.m128i_i32[0];
      v477[1].m128i_i8[0] = 1;
      v385->m128i_i32[3] = v387;
    }
    LODWORD(v475) = -12;
    if ( *(_BYTE *)(a1 + 105) == 5 )
    {
LABEL_124:
      v81 = *(char *)(a1 + 109);
      v82 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
      sub_3F1CC0((__int64)v503, *(_QWORD *)(a1 + 832), v82, v81, 2);
      v83 = *(_BYTE *)(a1 + 65);
      if ( v83 == 13 )
      {
        v84 = v468;
      }
      else
      {
        v84 = 0;
        if ( v83 == 1 )
          v84 = (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu;
      }
      v472 = sub_3EE630((char *)v472, v84);
      if ( !v472 )
      {
        if ( !under_debugger )
          sub_383060(0xC83Eu, 0.0);
        goto LABEL_944;
      }
      v31 = 1;
      v465 = 0;
      v17 = v472;
      v476.m128i_i32[0] = 20;
      v467 = 2;
      LODWORD(v471) = 2;
      v479.m128i_i64[0] = (__int64)s1;
      goto LABEL_27;
    }
    v388 = sub_3FAE20((__int64)v477, (__m128i)0LL, si128, a7);
    v77 = (__int64)v503;
    sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v503, v388, -12);
    LODWORD(v475) = -12;
LABEL_123:
    LODWORD(v471) = 2;
    if ( *(_BYTE *)(a1 + 105) != 5 )
    {
LABEL_205:
      if ( !v472 )
      {
        v476.m128i_i32[0] = 20;
        v467 = 2;
        goto LABEL_207;
      }
      LOBYTE(v468) = 1;
LABEL_261:
      v465 = 0;
      v467 = 2;
      v476.m128i_i32[0] = 20;
      v479.m128i_i64[0] = (__int64)s1;
      goto LABEL_93;
    }
    goto LABEL_124;
  }
  v21 = *(unsigned __int16 *)(a1 + 48);
  if ( (unsigned __int16)v21 > 0xE2u )
  {
    if ( (_WORD)v21 != 595 )
      goto LABEL_6;
    sub_3FA780(a1, (__int64)v498, 21, v478.m128i_i64[1], (__m128i)0LL, 128, 0xFFFFFFFF, si128, a7);
    v57 = *(_QWORD *)(a1 + 832);
    v58 = get_dtype_size();
    v479.m128i_i64[0] = (__int64)s1;
    sub_32C430((__int64 *)s1, v57, v58, 2);
    sub_32F0D0((__int64)v503, v476.m128i_i32[0], v58);
    clear_tinfo_t();
    s1[0] = (_BYTE *)(&dword_14 + 1);
    copy_tinfo_t();
    clear_tinfo_t();
    v59 = *(_QWORD *)(a1 + 832);
    v60 = *(_DWORD *)(v59 + 396);
    v478.m128i_i32[0] = get_dtype_size();
    sub_32C430((__int64 *)s1, v59, v478.m128i_u32[0], 2);
    sub_32F0D0((__int64)v505, v60, v478.m128i_i32[0]);
    clear_tinfo_t();
    s1[0] = (_BYTE *)(&dword_14 + 1);
    copy_tinfo_t();
    clear_tinfo_t();
    sub_32F110((__int64)v506, *(_QWORD *)(a1 + 832), (unsigned int)v470, 16, 16, 16, 1);
    v7 = 0;
    v476.m128i_i64[0] = (__int64)&s1[1];
    v480 = 21;
    v483 = 0;
    v481 = 0;
    v478.m128i_i64[0] = (__int64)&v481;
    *(_OWORD *)s1 = 0;
    copy_tinfo_t();
    s1[2] = nullptr;
    copy_tinfo_t();
    LODWORD(v497) = 0;
    WORD2(v497) = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    v61 = v478.m128i_i64[1];
    v62 = v470;
    *(_DWORD *)(v478.m128i_i64[1] + 12) = v469;
    *(_BYTE *)(v61 + 16) = 1;
    v63 = get_dtype_size();
    sub_1D6310(a1, 4u, v63, 8, 0x3BEA45E214ADDC55LL, v62, 0.0, 0);
    v64 = get_dtype_size();
    sub_1D6310(a1, 4u, v64, v473, 0x3BEA45E214ADDC55LL, v470 + 8, 0.0, 0);
    sub_3F0D80(v486, a1 + 64, 0);
    LOBYTE(v468) = 1;
    LODWORD(v471) = 4;
    v467 = 1;
    v472 = "_InterlockedCompareExchange128";
    v478.m128i_i32[0] = 0;
    v476.m128i_i32[0] = 4;
    v465 = 1;
    LODWORD(v475) = 34;
LABEL_93:
    v31 = (unsigned __int8)v468;
    v17 = nullptr;
    goto LABEL_27;
  }
  if ( (unsigned __int16)v21 > 0xD0u )
  {
    LOWORD(v21) = v21 - 209;
    switch ( v21 )
    {
      case 0LL:
      case 7LL:
        goto LABEL_105;
      case 5LL:
LABEL_129:
        LOBYTE(v468) = a4 > 1u && *(_BYTE *)(a1 + 105) != 1;
        if ( !(_BYTE)v468 )
          goto LABEL_6;
        LODWORD(v475) = 4;
        v478.m128i_i8[0] = 4;
        if ( a4 == 7 )
        {
          LODWORD(v475) = 5;
          v478.m128i_i8[0] = 5;
        }
        sub_3FA780(a1, (__int64)v498, (int)v475, (__int64)v477, (__m128i)0LL, 128, 0xFFFFFFFF, si128, a7);
        if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
          && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
        {
          sub_3EB430(0.0);
        }
        v479.m128i_i64[0] = *(_QWORD *)(a1 + 832);
        v85 = *(_DWORD *)(v478.m128i_i64[1] + 12);
        v86 = v479.m128i_i64[0];
        v476.m128i_i32[0] = get_dtype_size();
        v479.m128i_i64[0] = (__int64)s1;
        sub_32C430((__int64 *)s1, v86, v476.m128i_u32[0], 2);
        sub_32F0D0((__int64)v503, v85, v476.m128i_i32[0]);
        clear_tinfo_t();
        s1[0] = (char *)v478.m128i_u8[0];
        copy_tinfo_t();
        clear_tinfo_t();
        v87 = "_InterlockedExchange64";
        if ( a4 != 7 )
          v87 = "_InterlockedExchange";
        v472 = v87;
        sub_3F0D80(v486, a1 + 104, 0);
        v465 = 0;
        v476.m128i_i32[0] = 4;
        v478.m128i_i32[0] = 0;
        v467 = 1;
        LODWORD(v471) = 2;
        goto LABEL_112;
      case 8LL:
        if ( *(_BYTE *)(a1 + 65) == 1 )
          goto LABEL_6;
        v95 = &v507[40];
        *(_QWORD *)&v507[24] = 0;
        *(_QWORD *)&v507[32] = 0;
        memset(v507, 255, 24);
        v7 = 0;
        do
        {
          *(_WORD *)v95 = 0;
          v95 += 40;
          *((_WORD *)v95 - 19) = 0;
          *((_WORD *)v95 - 18) = 0;
          *((_DWORD *)v95 - 2) = 0;
          *((_WORD *)v95 - 17) = 0;
          *((_OWORD *)v95 - 2) = 0;
          *((_QWORD *)v95 - 2) = 0;
        }
        while ( v95 != &v508 );
        v96 = *(_QWORD *)(a1 + 800);
        v478.m128i_i64[0] = a1 + 24;
        v97 = (__int64 *)sub_3F0080(v96, a1 + 24, v507);
        if ( v97 != (__int64 *)-1LL )
        {
          LOBYTE(v468) = sub_332920(*(_QWORD *)(a1 + 8) + 8LL, *(unsigned __int64 *)&v507[16]);
          if ( (_BYTE)v468 )
          {
            sub_B57F0(*(_QWORD *)(a1 + 8), v97, *(_QWORD *)(a1 + 40));
            v472 = (void *)sub_3EB540((__int64)s, *(unsigned __int16 *)&v507[24], a4, 0.0);
            LODWORD(v475) = 19;
            if ( a4 != 1 )
            {
              LODWORD(v475) = 20;
              if ( a4 != 2 )
              {
                LODWORD(v475) = 18;
                if ( a4 )
                  LODWORD(v475) = 21;
              }
            }
            sub_3FA780(a1, (__int64)v498, (int)v475, v478.m128i_i64[1], (__m128i)0LL, 128, 0xFFFFFFFF, si128, a7);
            v476.m128i_i64[0] = (__int64)v509;
            qmemcpy(v509, (const void *)v478.m128i_i64[0], 0x168u);
            v478.m128i_i64[0] = a1 + 24;
            qmemcpy((void *)(a1 + 24), v507, 0x168u);
            v483 = a1;
            v484 = 0xFFFFFFFF00000001LL;
            v485 = 0;
            sub_3FA580((int *)&v483, 1, 0, (__m128i)0LL, si128, a7);
            if ( !v485 && !(unsigned __int8)sub_3FACB0((__int64)&v483, (__m128i)0LL, si128, a7) )
              sub_3EB430(0.0);
            v317 = HIDWORD(v484);
            v318 = *(_QWORD *)(a1 + 832);
            LODWORD(v471) = get_dtype_size();
            v479.m128i_i64[0] = (__int64)s1;
            sub_32C430((__int64 *)s1, v318, (unsigned int)v471, 2);
            sub_32F0D0((__int64)v503, v317, (int)v471);
            clear_tinfo_t();
            v319 = v478.m128i_i64[1];
            qmemcpy((void *)v478.m128i_i64[0], (const void *)v476.m128i_i64[0], 0x168u);
            *(_DWORD *)(v478.m128i_i64[1] + 12) = 8;
            *(_BYTE *)(v319 + 16) = 1;
            sub_3F0D80(v486, a1 + 64, 0);
            v320 = get_dtype_size();
            v321 = (*(double (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                     *(_QWORD *)(a1 + 832),
                     *(unsigned __int16 *)&v507[46]);
            s1[0] = nullptr;
            s1[1] = nullptr;
            sub_63E80((__int64 *)v479.m128i_i64[0], v322, v320, v321);
            v7 = 0;
            s1[2] = nullptr;
            v497 = 0;
            sub_64280(v486, (__int64 *)v479.m128i_i64[0], 0.0);
            sub_316CB0(&v487, (const void **)&s1[2], v323, v324);
            if ( s1[2] )
            {
              *(_QWORD *)&v497 = 0;
              qfree((__int64)s1[2]);
            }
            qfree((__int64)s1[0]);
            v325 = get_dtype_size();
            sub_1D6310(a1, 4u, v325, 8, 0x3BEA45E214ADDC55LL, v469, 0.0, 0);
            v31 = 1;
            v17 = nullptr;
            v465 = 0;
            v476.m128i_i32[0] = 4;
            v478.m128i_i32[0] = 0;
            v467 = 1;
            LODWORD(v471) = 2;
            goto LABEL_27;
          }
        }
        if ( a4 == 2 )
        {
          LODWORD(v475) = 20;
          v472 = "_InterlockedCompareExchange";
        }
        else if ( a4 > 2u )
        {
          LODWORD(v475) = 21;
          v472 = "_InterlockedCompareExchange64";
          if ( a4 != 7 )
            goto LABEL_6;
        }
        else
        {
          LODWORD(v475) = 18;
          v472 = "_InterlockedCompareExchange8";
          if ( a4 )
          {
            LODWORD(v475) = 19;
            v472 = "_InterlockedCompareExchange16";
          }
        }
        if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
          sub_3EB430(0.0);
        v98 = v477->m128i_i32[3];
        v479.m128i_i64[0] = *(_QWORD *)(a1 + 832);
        v478.m128i_i32[0] = v98;
        v99 = get_dtype_size();
        v100 = v479.m128i_i64[0];
        v479.m128i_i64[0] = (__int64)s1;
        sub_32C430((__int64 *)s1, v100, v99, 2);
        sub_32F0D0((__int64)v503, v478.m128i_i32[0], v99);
        clear_tinfo_t();
        v101 = *(_QWORD *)(a1 + 832);
        v478.m128i_i32[0] = get_dtype_size();
        sub_32C430((__int64 *)s1, v101, v478.m128i_u32[0], 2);
        sub_32F0D0((__int64)v505, 8, v478.m128i_i32[0]);
        clear_tinfo_t();
LABEL_137:
        v89 = get_dtype_size();
        sub_1D6310(a1, 4u, v89, 8, 0x3BEA45E214ADDC55LL, v469, *(double *)v7.m128i_i64, 0);
        sub_3FA780(a1, (__int64)v498, (int)v475, v478.m128i_i64[1], v7, 128, 0xFFFFFFFF, si128, a7);
        s1[0] = (char *)(int)v475;
        copy_tinfo_t();
        clear_tinfo_t();
        s1[0] = (char *)(int)v475;
        copy_tinfo_t();
        clear_tinfo_t();
        v90 = v478.m128i_i64[1];
        *(_DWORD *)(v478.m128i_i64[1] + 12) = 8;
        *(_BYTE *)(v90 + 16) = 1;
        sub_3F0D80(v486, a1 + 64, 0);
        v465 = 1;
        v476.m128i_i32[0] = 4;
        v478.m128i_i32[0] = 0;
        v467 = 1;
        LODWORD(v471) = 3;
        LOBYTE(v468) = 1;
        break;
      case 10LL:
        v479.m128i_i32[0] = a4;
        v472 = (void *)sub_3EB540((__int64)s, 219, a4, 0.0);
        LODWORD(v475) = 19;
        if ( a4 != 1 )
        {
          LODWORD(v475) = 20;
          if ( a4 != 2 )
            LODWORD(v475) = a4 == 0 ? 18 : 21;
        }
        if ( *(_BYTE *)(a1 + 65) == 1 )
        {
          v259 = get_dtype_size();
          if ( !*(_BYTE *)(v478.m128i_i64[1] + 16)
            && !(unsigned __int8)sub_3FACB0(v478.m128i_i64[1], (__m128i)0LL, si128, a7) )
          {
            sub_3EB430(0.0);
          }
          sub_32F110(
            (__int64)v498,
            *(_QWORD *)(a1 + 832),
            *(unsigned int *)(v478.m128i_i64[1] + 12),
            v259,
            v259,
            v259,
            1);
        }
        else
        {
          sub_3FA780(a1, (__int64)v498, (int)v475, v478.m128i_i64[1], (__m128i)0LL, 128, 0xFFFFFFFF, si128, a7);
        }
        if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
          sub_3EB430(0.0);
        v91 = *(_QWORD *)(a1 + 832);
        v92 = v477->m128i_i32[3];
        v479.m128i_i64[0] = (__int64)s1;
        v478.m128i_i32[0] = get_dtype_size();
        sub_32C430((__int64 *)s1, v91, v478.m128i_u32[0], 2);
        sub_32F0D0((__int64)v503, v92, v478.m128i_i32[0]);
        clear_tinfo_t();
        v93 = v478.m128i_i64[1];
        v94 = v477;
        v7 = _mm_loadu_si128(v477);
        *(__m128i *)v478.m128i_i64[1] = v7;
        *(_BYTE *)(v93 + 16) = v94[1].m128i_i8[0];
        sub_3F0D80(v486, a1 + 64, 0);
        sub_3F6F70(a1);
        goto LABEL_111;
      case 17LL:
        sub_1252A0((__int64)v503, *(unsigned int *)(v13 + 396), v476.m128i_i32[0], 4);
        s1[0] = (_BYTE *)(&dword_14 + 1);
        copy_tinfo_t();
        v479.m128i_i64[0] = (__int64)s1;
        clear_tinfo_t();
        v478.m128i_i64[0] = *(_QWORD *)(a1 + 832);
        v88 = get_dtype_size();
        sub_32C430((__int64 *)s1, v478.m128i_i64[0], v88, 2);
        sub_32F0D0((__int64)v505, 8, v88);
        clear_tinfo_t();
        LODWORD(v475) = 21;
        v472 = "_InterlockedCompareExchange64";
        goto LABEL_137;
      default:
        goto LABEL_6;
    }
    goto LABEL_112;
  }
  if ( (unsigned __int16)v21 <= 0x2Cu )
  {
    if ( (unsigned __int16)v21 > 5u )
    {
      switch ( *(_WORD *)(a1 + 48) )
      {
        case 6:
          LOBYTE(v468) = equal_bytes();
          if ( !(_BYTE)v468 )
            goto LABEL_105;
          LOBYTE(v480) = 3;
          netnode_supset();
          LOBYTE(v481) = 3;
          netnode_supset();
          sub_3FA780(a1, (__int64)v498, 21, v478.m128i_i64[1], (__m128i)0LL, 128, 0xFFFFFFFF, si128, a7);
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v124 = *(_QWORD *)(a1 + 832);
          v125 = v477->m128i_i32[3];
          v479.m128i_i64[0] = (__int64)s1;
          v478.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v124, v478.m128i_u32[0], 2);
          sub_32F0D0((__int64)v503, v125, v478.m128i_i32[0]);
          clear_tinfo_t();
          v126 = v478.m128i_i64[1];
          *(_DWORD *)(v478.m128i_i64[1] + 12) = 8;
          *(_BYTE *)(v126 + 16) = 1;
          sub_3F0D80(v486, a1 + 64, 0);
          LODWORD(v471) = 2;
          v467 = 1;
          v472 = "_InterlockedAddLargeStatistic";
          v478.m128i_i32[0] = 0;
          v476.m128i_i32[0] = 4;
          v465 = 0;
          LODWORD(v475) = 20;
          goto LABEL_93;
        case 7:
          goto LABEL_105;
        case 0xE:
        case 0xF:
          if ( *(_BYTE *)(a1 + 65) == 1 )
            goto LABEL_6;
          v103 = (void *)sub_3EB540((__int64)s, (unsigned __int16)v21, a4, 0.0);
          v104 = *(_WORD *)(a1 + 48) == 14;
          v472 = v103;
          v478.m128i_i32[0] = 20;
          if ( v104 )
            v478.m128i_i32[0] = 21;
          sub_3FA780(a1, (__int64)v498, 20, v478.m128i_i64[1], (__m128i)0LL, 128, 0xFFFFFFFF, si128, a7);
          v105 = *(_BYTE *)(a1 + 109);
          if ( v105 < a4 )
          {
            if ( v477[1].m128i_i8[0] )
            {
              v106 = v477->m128i_i32[3];
              v479.m128i_i32[0] = v106;
            }
            else
            {
              if ( !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
                sub_3EB430(0.0);
              v104 = v477[1].m128i_i8[0] == 0;
              v479.m128i_i32[0] = v477->m128i_i32[3];
              if ( v104 )
              {
                if ( !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
                  sub_3EB430(0.0);
                v105 = *(_BYTE *)(a1 + 109);
                v106 = v477->m128i_i32[3];
              }
              else
              {
                v105 = *(_BYTE *)(a1 + 109);
                v106 = v479.m128i_i32[0];
              }
            }
            sub_1D6840(a1, v105, a4, v106, v479.m128i_i32[0], 0, (__m128i)0LL, si128, a7);
          }
          if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
            sub_3EB430(0.0);
          v107 = v477->m128i_i32[3];
          v475 = *(unsigned __int8 **)(a1 + 832);
          v476.m128i_i32[0] = v107;
          v108 = get_dtype_size();
          v479.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, (__int64)v475, v108, 2);
          sub_32F0D0((__int64)v503, v476.m128i_i32[0], v108);
          clear_tinfo_t();
          v109 = v478.m128i_i64[1];
          *(_DWORD *)(v478.m128i_i64[1] + 12) = 0;
          *(_BYTE *)(v109 + 16) = 1;
          sub_3F0D80(v486, a1 + 64, 0);
          LODWORD(v475) = 18;
          v465 = 0;
          v476.m128i_i32[0] = 4;
          v467 = 1;
          LODWORD(v471) = 2;
          LOBYTE(v468) = 1;
          goto LABEL_112;
        case 0x22:
        case 0x2C:
          if ( *(_BYTE *)(a1 + 65) == 1 )
            goto LABEL_6;
          v472 = (void *)sub_3EB540((__int64)s, (unsigned __int16)v21, a4, 0.0);
          LODWORD(v475) = 19;
          if ( a4 != 1 )
          {
            LODWORD(v475) = 20;
            if ( a4 != 2 )
              LODWORD(v475) = a4 == 0 ? 18 : 21;
          }
          sub_3FA780(a1, (__int64)v498, (int)v475, v478.m128i_i64[1], (__m128i)0LL, 128, 0xFFFFFFFF, si128, a7);
          sub_3F0D80(v486, a1 + 64, 0);
          v465 = 0;
          v476.m128i_i32[0] = 4;
          v478.m128i_i32[0] = 0;
          v467 = 1;
          LODWORD(v471) = 1;
          LOBYTE(v468) = 1;
          v479.m128i_i64[0] = (__int64)s1;
          goto LABEL_112;
        default:
          goto LABEL_6;
      }
    }
    goto LABEL_6;
  }
  if ( (_WORD)v21 == 131 )
  {
LABEL_105:
    if ( *(_BYTE *)(a1 + 65) == 1 )
      goto LABEL_6;
    v69 = *(unsigned __int16 *)(a1 + 48);
    v479.m128i_i32[0] = a4;
    v472 = (void *)sub_3EB540((__int64)s, v69, a4, 0.0);
    LODWORD(v475) = 19;
    if ( a4 != 1 )
    {
      LODWORD(v475) = 20;
      if ( a4 != 2 )
        LODWORD(v475) = a4 == 0 ? 18 : 21;
    }
    sub_3FA780(a1, (__int64)v498, (int)v475, v478.m128i_i64[1], (__m128i)0LL, 128, 0xFFFFFFFF, si128, a7);
    if ( !v477[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v477, (__m128i)0LL, si128, a7) )
      sub_3EB430(0.0);
    v70 = *(_QWORD *)(a1 + 832);
    v71 = v477->m128i_i32[3];
    v479.m128i_i64[0] = (__int64)s1;
    v478.m128i_i32[0] = get_dtype_size();
    sub_32C430((__int64 *)s1, v70, v478.m128i_u32[0], 2);
    sub_32F0D0((__int64)v503, v71, v478.m128i_i32[0]);
    clear_tinfo_t();
    sub_3F0D80(v486, a1 + 64, 0);
LABEL_111:
    v465 = 0;
    v476.m128i_i32[0] = 4;
    v478.m128i_i32[0] = 0;
    v467 = 1;
    LODWORD(v471) = 2;
    LOBYTE(v468) = 1;
LABEL_112:
    v31 = (unsigned __int8)v468;
    v17 = nullptr;
    v464 = *(_QWORD *)(a1 + 8);
    goto LABEL_28;
  }
LABEL_6:
  v17 = nullptr;
  v18 = 0;
LABEL_7:
  qfree((__int64)v17);
  do
  {
LABEL_8:
    v9 -= 80;
    cleanup_argloc();
    v19 = *((_QWORD *)v9 + 4);
    if ( v19 )
    {
      *((_QWORD *)v9 + 5) = 0;
      qfree(v19);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v9);
  }
  while ( v9 != v498 );
  if ( v494 )
  {
    v495.m128i_i64[0] = 0;
    qfree(v494);
  }
  qfree(v492);
  if ( src )
  {
    *(_QWORD *)&v491 = 0;
    qfree((__int64)src);
  }
  qfree((__int64)v489[0]);
  if ( v487 )
  {
    v488.m128i_i64[0] = 0;
    qfree(v487);
  }
  qfree(v486[0]);
  return v18;
}

