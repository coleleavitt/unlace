__int64 __fastcall sub_1A670(__int64 a1)
{
  __int64 v2; // rbp
  char **v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __m128i si128; // xmm0
  __int64 v15; // rax
  char *v16; // rsi
  char *v17; // r9
  char v18; // r8
  char v19; // cl
  int v20; // edx
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __m128i v26; // xmm0
  __int64 v27; // rax
  char *v28; // rsi
  char v29; // cl
  int v30; // edx
  char **v31; // r9
  char v32; // r8
  __int64 v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __m128i v37; // xmm0
  __m128i *v38; // rax
  __int64 v39; // r12
  __int64 v40; // r15
  __int64 v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __m128i v45; // xmm0
  __int64 v46; // rax
  const void *v47; // rsi
  __int64 v48; // r9
  char v49; // r8
  char v50; // cl
  int v51; // edx
  __int64 v52; // r12
  __int64 v53; // r15
  __int64 v54; // r14
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __m128i v58; // xmm0
  __int64 v59; // rax
  char *v60; // rsi
  __int64 v61; // r9
  char v62; // r8
  char v63; // cl
  int v64; // edx
  __int64 v65; // r12
  __int64 v66; // r15
  __int64 v67; // r14
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __m128i v71; // xmm0
  __int64 v72; // rax
  const void *v73; // rsi
  __int64 v74; // r9
  char v75; // r8
  char v76; // cl
  int v77; // edx
  __int64 v78; // r12
  __int64 v79; // r15
  __int64 v80; // r14
  __int64 v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // rcx
  __m128i v84; // xmm0
  __int64 v85; // rax
  char *v86; // rsi
  char v87; // cl
  int v88; // edx
  __int64 v89; // r9
  char v90; // r8
  __int64 v91; // r12
  __int64 v92; // r15
  __int64 v93; // r14
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rcx
  __m128i v97; // xmm0
  __int64 v98; // rax
  const void *v99; // rsi
  __int64 v100; // r9
  char v101; // r8
  char v102; // cl
  int v103; // edx
  __int64 v104; // r12
  __int64 v105; // r15
  __int64 v106; // r14
  __int64 v107; // rsi
  __int64 v108; // rdx
  __int64 v109; // rcx
  __m128i v110; // xmm0
  __int64 v111; // rax
  const void *v112; // rsi
  __int64 v113; // r9
  char v114; // r8
  char v115; // cl
  int v116; // edx
  int v117; // r14d
  __int64 v118; // r12
  __int64 v119; // r15
  __int64 v120; // rdx
  __int64 v121; // rsi
  __int64 v122; // rdi
  __m128i v123; // xmm0
  __int64 v124; // rax
  char *v125; // rsi
  __int64 v126; // r9
  char v127; // r8
  char v128; // cl
  int v129; // edx
  __int64 v130; // r12
  __int64 v131; // r15
  __int64 v132; // rdx
  __int64 v133; // rsi
  __int64 v134; // rdi
  __m128i v135; // xmm0
  __int64 v136; // rax
  char *v137; // rsi
  char v138; // r8
  __int64 v139; // r9
  char v140; // cl
  int v141; // edx
  __int64 v142; // r12
  __int64 v143; // r15
  __int64 v144; // rdx
  __int64 v145; // rsi
  __int64 v146; // rdi
  __m128i v147; // xmm0
  __int64 v148; // rax
  char *v149; // rsi
  char v150; // cl
  __int64 v151; // r9
  char v152; // r8
  int v153; // edx
  __int64 v154; // r12
  __int64 v155; // r15
  __int64 v156; // rdx
  __int64 v157; // rsi
  __int64 v158; // rdi
  __m128i v159; // xmm0
  __int64 v160; // rax
  char *v161; // rsi
  int v162; // edx
  __int64 v163; // r9
  char v164; // r8
  char v165; // cl
  __int64 v166; // r12
  __int64 v167; // r15
  __int64 v168; // rdx
  __int64 v169; // rsi
  __int64 v170; // rdi
  __m128i v171; // xmm0
  __int64 v172; // rax
  char *v173; // rsi
  __int64 v174; // r9
  char v175; // r8
  char v176; // cl
  int v177; // edx
  __int64 v178; // r12
  __int64 v179; // r15
  __int64 v180; // rdx
  __int64 v181; // rsi
  __int64 v182; // rdi
  __m128i v183; // xmm0
  __int64 v184; // rax
  char *v185; // rsi
  __int64 v186; // r9
  char v187; // r8
  char v188; // cl
  int v189; // edx
  __int64 v190; // r12
  __int64 v191; // r15
  __int64 v192; // rdx
  __int64 v193; // rsi
  __int64 v194; // rdi
  __m128i v195; // xmm0
  __int64 v196; // rax
  char *v197; // rsi
  __int64 v198; // r9
  char v199; // r8
  char v200; // cl
  int v201; // edx
  __int64 v202; // r12
  __int64 v203; // r8
  __int64 v204; // r15
  __int64 v205; // rsi
  __int64 v206; // rdi
  __int64 v207; // rdx
  __m128i v208; // xmm0
  __int64 v209; // rax
  char *v210; // rsi
  char v211; // cl
  int v212; // edx
  __int64 v213; // r9
  __int64 v214; // r12
  __int64 v215; // r8
  __int64 v216; // r15
  __int64 v217; // rsi
  __int64 v218; // rdi
  __int64 v219; // rdx
  __m128i v220; // xmm0
  __int64 v221; // rax
  char *v222; // rsi
  __int64 v223; // r9
  char v224; // cl
  int v225; // edx
  __int64 v226; // r12
  __int64 v227; // r8
  __int64 v228; // r15
  __int64 v229; // rsi
  __int64 v230; // rdx
  __int64 v231; // rcx
  __m128i v232; // xmm0
  __int64 v233; // rax
  char *v234; // rsi
  char **v235; // r9
  char v236; // cl
  int v237; // edx
  char **v238; // rbp
  bool v239; // r12
  int v240; // r15d
  __int64 v241; // r14
  __int64 v242; // rdx
  __int64 v243; // rsi
  __int64 v244; // rdi
  __int64 v245; // rax
  __int64 v246; // r13
  __int64 v247; // r14
  __int64 v248; // rdx
  __int64 v249; // rsi
  __int64 v250; // rdi
  __m128i v251; // xmm0
  __int64 v252; // rax
  char *v253; // rsi
  char v254; // r8
  _UNKNOWN **v255; // r9
  char v256; // cl
  int v257; // edx
  __int64 v258; // r14
  _UNKNOWN **v259; // rbp
  __int64 v260; // rax
  __int64 v261; // r13
  __int64 v262; // rdx
  __int64 v263; // rsi
  __int64 v264; // rdi
  __int64 v265; // rax
  __int64 v266; // rax
  char **v267; // rbp
  unsigned __int64 v268; // r14
  __int64 v269; // r13
  __int64 v270; // rdx
  __int64 v271; // rsi
  __int64 v272; // rdi
  __m128i v273; // xmm1
  __m128i *v274; // rax
  __int64 result; // rax
  __int64 v276; // rax
  __int64 v277; // r12
  __int64 v278; // r15
  __int64 v279; // rax
  __int64 v280; // rax
  __int64 v281; // rax
  __int64 v282; // rax
  __int64 v283; // rax
  __int64 v284; // rax
  __int64 v285; // rax
  __int64 v286; // rax
  __int64 v287; // rax
  __int64 v288; // rax
  __int64 v289; // rax
  __int64 v290; // rax
  __int64 v291; // rax
  __int64 v292; // rax
  __int64 v293; // rax
  __int64 v294; // rax
  __int64 v295; // rax
  __int64 v296; // rax
  __int64 v297; // rax
  __int64 v298; // rax
  __int64 v299; // rdx
  __int64 v300; // rax
  __int64 v301; // rsi
  __m128i v302; // xmm0
  __int64 v303; // rax
  char *v304; // rsi
  __int64 v305; // r9
  char v306; // r8
  char v307; // cl
  int v308; // edx
  __int64 v309; // r12
  __int64 v310; // r15
  __int64 v311; // rdx
  __int64 v312; // rax
  __int64 v313; // rsi
  __m128i v314; // xmm0
  __int64 v315; // rax
  char *v316; // rsi
  char v317; // r8
  __int64 v318; // r9
  char v319; // cl
  int v320; // edx
  __int64 v321; // r12
  __int64 v322; // r15
  __int64 v323; // rdx
  __int64 v324; // rax
  __int64 v325; // rsi
  __m128i v326; // xmm0
  __int64 v327; // rax
  char *v328; // rsi
  char v329; // cl
  __int64 v330; // r9
  char v331; // r8
  int v332; // edx
  __int64 v333; // r12
  __int64 v334; // r15
  __int64 v335; // rdx
  __int64 v336; // rax
  __int64 v337; // rsi
  __m128i v338; // xmm0
  __int64 v339; // rax
  char *v340; // rsi
  int v341; // edx
  __int64 v342; // r9
  char v343; // r8
  char v344; // cl
  __int64 v345; // r12
  __int64 v346; // r8
  __int64 v347; // r15
  __int64 v348; // rsi
  __int64 v349; // rdx
  __int64 v350; // rcx
  __m128i v351; // xmm0
  __int64 v352; // rax
  char *v353; // rsi
  __int64 v354; // r9
  char v355; // cl
  int v356; // edx
  __int64 v357; // r12
  __int64 v358; // r8
  __int64 v359; // r15
  __int64 v360; // rsi
  __int64 v361; // rdx
  __int64 v362; // rcx
  __m128i v363; // xmm0
  __int64 v364; // rax
  char *v365; // rsi
  __int64 v366; // r9
  char v367; // cl
  int v368; // edx
  __int64 v369; // r12
  __int64 v370; // r15
  __int64 v371; // rdx
  __int64 v372; // rax
  __int64 v373; // rsi
  __m128i v374; // xmm0
  __int64 v375; // rax
  char *v376; // rsi
  __int64 v377; // r9
  char v378; // r8
  char v379; // cl
  int v380; // edx
  __int64 v381; // r12
  __int64 v382; // r15
  __int64 v383; // rdx
  __int64 v384; // rax
  __int64 v385; // rsi
  __m128i v386; // xmm0
  __int64 v387; // rax
  char *v388; // rsi
  char v389; // cl
  int v390; // edx
  __int64 v391; // r9
  char v392; // r8
  __int64 v393; // r12
  __int64 v394; // r15
  __int64 v395; // rdx
  __int64 v396; // rax
  __int64 v397; // rsi
  __m128i v398; // xmm0
  __int64 v399; // rax
  char *v400; // rsi
  __int64 v401; // r9
  char v402; // r8
  char v403; // cl
  int v404; // edx
  __int64 v405; // r12
  __int64 v406; // r15
  __int64 v407; // rdx
  __int64 v408; // rax
  __int64 v409; // rsi
  __m128i v410; // xmm0
  __int64 v411; // rax
  char *v412; // rsi
  __int64 v413; // r9
  char v414; // r8
  char v415; // cl
  int v416; // edx
  __int64 v417; // r12
  __int64 v418; // r15
  __int64 v419; // rdx
  __int64 v420; // rax
  __int64 v421; // rsi
  __m128i v422; // xmm0
  __int64 v423; // rax
  char *v424; // rsi
  char v425; // r8
  __int64 v426; // r9
  char v427; // cl
  int v428; // edx
  __int64 v429; // r12
  __int64 v430; // r15
  __int64 v431; // rdx
  __int64 v432; // rax
  __int64 v433; // rsi
  __m128i v434; // xmm0
  __int64 v435; // rax
  char *v436; // rsi
  char v437; // cl
  __int64 v438; // r9
  char v439; // r8
  int v440; // edx
  __int64 v441; // r12
  __int64 v442; // r15
  __int64 v443; // rdx
  __int64 v444; // rax
  __int64 v445; // rsi
  __m128i v446; // xmm0
  __int64 v447; // rax
  char *v448; // rsi
  int v449; // edx
  __int64 v450; // r9
  char v451; // r8
  char v452; // cl
  __int64 v453; // r12
  __int64 v454; // r15
  __int64 v455; // rdx
  __int64 v456; // rax
  __int64 v457; // rsi
  __m128i v458; // xmm0
  __int64 v459; // rax
  char *v460; // rsi
  __int64 v461; // r9
  char v462; // r8
  char v463; // cl
  int v464; // edx
  __int64 v465; // rax
  __int64 v466; // rax
  __int64 v467; // [rsp-10h] [rbp-68h]
  __m128i v468; // [rsp+0h] [rbp-58h] BYREF
  __int64 v469; // [rsp+18h] [rbp-40h]

  v468 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_44ED0), (__m128i)(unsigned __int64)sub_FE80);
  v2 = operator new(0xDE0u);
  sub_17000(v2, a1 + 672);
  *(_QWORD *)(a1 + 664) = v2;
  v3 = &off_47BE0;
  v4 = 352;
  do
  {
    v6 = *(_QWORD *)(v2 + 24);
    v7 = *(_QWORD *)(v2 + 16);
    v8 = v6 + 1;
    if ( *(_QWORD *)(v2 + 32) < (unsigned __int64)(v6 + 1) )
    {
      v9 = qvector_reserve();
      v6 = *(_QWORD *)(v2 + 24);
      *(_QWORD *)(v2 + 16) = v9;
      v7 = v9;
      v8 = v6 + 1;
    }
    *(_QWORD *)(v2 + 24) = v8;
    v3 += 4;
    v5 = v7 + 40 * v6;
    *(_QWORD *)(v5 + 16) = v4;
    v4 += 16;
    *(_DWORD *)v5 = 1;
    *(_QWORD *)(v5 + 8) = -1;
    *(_QWORD *)(v5 + 24) = 10;
    *(_QWORD *)(v5 + 32) = 10;
    sub_13BC0(
      *(__int64 **)(v2 + 8),
      *(v3 - 4),
      *((_DWORD *)v3 - 6),
      *((_BYTE *)v3 - 19),
      *((_BYTE *)v3 - 20),
      (__int64)*(v3 - 2),
      (__int64)*(v3 - 1));
    v2 = *(_QWORD *)(a1 + 664);
  }
  while ( v4 != 480 );
  switch ( unk_47BCD )
  {
    case 2:
      v10 = 4;
      break;
    case 7:
      v10 = 8;
      break;
    case 1:
      v10 = 2;
      break;
    default:
LABEL_293:
      while ( !under_debugger )
LABEL_292:
        interr();
LABEL_354:
      BUG();
  }
  v11 = *(_QWORD *)(v2 + 24);
  v12 = *(_QWORD *)(v2 + 16);
  v13 = v11 + 1;
  if ( *(_QWORD *)(v2 + 32) < (unsigned __int64)(v11 + 1) )
  {
    v280 = qvector_reserve();
    v11 = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(v2 + 16) = v280;
    v12 = v280;
    v13 = v11 + 1;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_3AB80);
  *(_QWORD *)(v2 + 24) = v13;
  v15 = v12 + 40 * v11;
  *(_DWORD *)v15 = 0;
  v16 = off_47BC0;
  *(__m128i *)(v15 + 8) = si128;
  v17 = off_47BD0[0];
  v18 = unk_47BCC;
  v19 = unk_47BCD;
  v20 = unk_47BC8;
  *(_QWORD *)(v15 + 32) = v10;
  *(_QWORD *)(v15 + 24) = 2;
  sub_13BC0(*(__int64 **)(v2 + 8), v16, v20, v19, v18, (__int64)v17, unk_47BD8);
  v21 = *(_QWORD *)(a1 + 664);
  switch ( unk_47BAD )
  {
    case 2:
      v22 = 4;
      break;
    case 7:
      v22 = 8;
      break;
    case 1:
      v22 = 2;
      break;
    default:
      if ( !under_debugger )
        goto LABEL_292;
      goto LABEL_354;
  }
  v23 = *(_QWORD *)(v21 + 24);
  v24 = *(_QWORD *)(v21 + 16);
  v25 = v23 + 1;
  if ( *(_QWORD *)(v21 + 32) < (unsigned __int64)(v23 + 1) )
  {
    v285 = qvector_reserve();
    v23 = *(_QWORD *)(v21 + 24);
    *(_QWORD *)(v21 + 16) = v285;
    v24 = v285;
    v25 = v23 + 1;
  }
  v26 = _mm_load_si128((const __m128i *)&xmmword_3AB90);
  *(_QWORD *)(v21 + 24) = v25;
  v27 = v24 + 40 * v23;
  *(_DWORD *)v27 = 0;
  v28 = off_47BA0;
  *(__m128i *)(v27 + 8) = v26;
  v29 = unk_47BAD;
  v30 = unk_47BA8;
  v31 = off_47BB0;
  v32 = unk_47BAC;
  *(_QWORD *)(v27 + 32) = v22;
  *(_QWORD *)(v27 + 24) = 2;
  sub_13BC0(*(__int64 **)(v21 + 8), v28, v30, v29, v32, (__int64)v31, (__int64)off_47BB8);
  v33 = *(_QWORD *)(a1 + 664);
  v34 = *(_QWORD *)(v33 + 24);
  v35 = *(_QWORD *)(v33 + 16);
  v36 = v34 + 1;
  if ( *(_QWORD *)(v33 + 32) < (unsigned __int64)(v34 + 1) )
  {
    v284 = qvector_reserve();
    v34 = *(_QWORD *)(v33 + 24);
    *(_QWORD *)(v33 + 16) = v284;
    v35 = v284;
    v36 = v34 + 1;
  }
  *(_QWORD *)(v33 + 24) = v36;
  v37 = _mm_loadl_epi64((const __m128i *)&off_44ED8);
  v38 = (__m128i *)(v35 + 40 * v34);
  v38->m128i_i64[1] = -1;
  v38->m128i_i32[0] = 3;
  v38[1] = _mm_unpacklo_epi64(v37, (__m128i)(unsigned __int64)sub_FE00);
  v38[2].m128i_i64[0] = 0;
  sub_13BC0(*(__int64 **)(v33 + 8), off_47B80, unk_47B88, unk_47B8D, unk_47B8C, (__int64)off_47B90, (__int64)off_47B98);
  v39 = *(_QWORD *)(a1 + 664);
  switch ( unk_47B6D )
  {
    case 2:
      v40 = 4;
      break;
    case 7:
      v40 = 8;
      break;
    case 1:
      v40 = 2;
      break;
    default:
      if ( !under_debugger )
        goto LABEL_292;
      goto LABEL_354;
  }
  v41 = *(_QWORD *)(v39 + 24);
  v42 = *(_QWORD *)(v39 + 16);
  v43 = v41 + 1;
  v44 = v41;
  if ( *(_QWORD *)(v39 + 32) < (unsigned __int64)(v41 + 1) )
  {
    v279 = qvector_reserve();
    v44 = *(_QWORD *)(v39 + 24);
    *(_QWORD *)(v39 + 16) = v279;
    v42 = v279;
    v43 = v44 + 1;
  }
  v45 = _mm_load_si128((const __m128i *)&xmmword_3ABA0);
  *(_QWORD *)(v39 + 24) = v43;
  v46 = v42 + 40 * v44;
  *(_DWORD *)v46 = 0;
  v47 = off_47B60;
  *(__m128i *)(v46 + 8) = v45;
  v48 = unk_47B70;
  v49 = unk_47B6C;
  v50 = unk_47B6D;
  v51 = unk_47B68;
  *(_QWORD *)(v46 + 24) = 8;
  *(_QWORD *)(v46 + 32) = v40;
  sub_13BC0(*(__int64 **)(v39 + 8), v47, v51, v50, v49, v48, unk_47B78);
  *(_DWORD *)(a1 + 932) = v41;
  v52 = *(_QWORD *)(a1 + 664);
  switch ( unk_47B4D )
  {
    case 2:
      v53 = 4;
      break;
    case 7:
      v53 = 8;
      break;
    case 1:
      v53 = 2;
      break;
    default:
      if ( !under_debugger )
        goto LABEL_292;
      goto LABEL_354;
  }
  v54 = *(_QWORD *)(v52 + 24);
  v55 = *(_QWORD *)(v52 + 16);
  v56 = v54 + 1;
  v57 = v54;
  if ( *(_QWORD *)(v52 + 32) < (unsigned __int64)(v54 + 1) )
  {
    v281 = qvector_reserve();
    v57 = *(_QWORD *)(v52 + 24);
    *(_QWORD *)(v52 + 16) = v281;
    v55 = v281;
    v56 = v57 + 1;
  }
  v58 = _mm_load_si128((const __m128i *)&xmmword_3ABB0);
  *(_QWORD *)(v52 + 24) = v56;
  v59 = v55 + 40 * v57;
  *(_DWORD *)v59 = 0;
  v60 = off_47B40;
  *(__m128i *)(v59 + 8) = v58;
  v61 = unk_47B50;
  v62 = unk_47B4C;
  v63 = unk_47B4D;
  v64 = unk_47B48;
  *(_QWORD *)(v59 + 24) = 8;
  *(_QWORD *)(v59 + 32) = v53;
  sub_13BC0(*(__int64 **)(v52 + 8), v60, v64, v63, v62, v61, unk_47B58);
  *(_DWORD *)(a1 + 936) = v54;
  v65 = *(_QWORD *)(a1 + 664);
  switch ( unk_47B2D )
  {
    case 2:
      v66 = 4;
      break;
    case 7:
      v66 = 8;
      break;
    case 1:
      v66 = 2;
      break;
    default:
      if ( !under_debugger )
        goto LABEL_292;
      goto LABEL_354;
  }
  v67 = *(_QWORD *)(v65 + 24);
  v68 = *(_QWORD *)(v65 + 16);
  v69 = v67 + 1;
  v70 = v67;
  if ( *(_QWORD *)(v65 + 32) < (unsigned __int64)(v67 + 1) )
  {
    v282 = qvector_reserve();
    v70 = *(_QWORD *)(v65 + 24);
    *(_QWORD *)(v65 + 16) = v282;
    v68 = v282;
    v69 = v70 + 1;
  }
  v71 = _mm_load_si128((const __m128i *)&xmmword_3ABC0);
  *(_QWORD *)(v65 + 24) = v69;
  v72 = v68 + 40 * v70;
  *(_DWORD *)v72 = 0;
  v73 = off_47B20;
  *(__m128i *)(v72 + 8) = v71;
  v74 = unk_47B30;
  v75 = unk_47B2C;
  v76 = unk_47B2D;
  v77 = unk_47B28;
  *(_QWORD *)(v72 + 24) = 8;
  *(_QWORD *)(v72 + 32) = v66;
  sub_13BC0(*(__int64 **)(v65 + 8), v73, v77, v76, v75, v74, unk_47B38);
  *(_DWORD *)(a1 + 940) = v67;
  v78 = *(_QWORD *)(a1 + 664);
  switch ( unk_47B0D )
  {
    case 2:
      v79 = 4;
      break;
    case 7:
      v79 = 8;
      break;
    case 1:
      v79 = 2;
      break;
    default:
      if ( !under_debugger )
        goto LABEL_292;
      goto LABEL_354;
  }
  v80 = *(_QWORD *)(v78 + 24);
  v81 = *(_QWORD *)(v78 + 16);
  v82 = v80 + 1;
  v83 = v80;
  if ( *(_QWORD *)(v78 + 32) < (unsigned __int64)(v80 + 1) )
  {
    v288 = qvector_reserve();
    v83 = *(_QWORD *)(v78 + 24);
    *(_QWORD *)(v78 + 16) = v288;
    v81 = v288;
    v82 = v83 + 1;
  }
  v84 = _mm_load_si128((const __m128i *)&xmmword_3ABD0);
  *(_QWORD *)(v78 + 24) = v82;
  v85 = v81 + 40 * v83;
  *(_DWORD *)v85 = 0;
  v86 = off_47B00;
  *(__m128i *)(v85 + 8) = v84;
  v87 = unk_47B0D;
  v88 = unk_47B08;
  v89 = unk_47B10;
  v90 = unk_47B0C;
  *(_QWORD *)(v85 + 32) = v79;
  *(_QWORD *)(v85 + 24) = 8;
  sub_13BC0(*(__int64 **)(v78 + 8), v86, v88, v87, v90, v89, unk_47B18);
  *(_DWORD *)(a1 + 924) = v80;
  v91 = *(_QWORD *)(a1 + 664);
  switch ( unk_47AED )
  {
    case 2:
      v92 = 4;
      break;
    case 7:
      v92 = 8;
      break;
    case 1:
      v92 = 2;
      break;
    default:
      if ( !under_debugger )
        goto LABEL_292;
      goto LABEL_354;
  }
  v93 = *(_QWORD *)(v91 + 24);
  v94 = *(_QWORD *)(v91 + 16);
  v95 = v93 + 1;
  v96 = v93;
  if ( *(_QWORD *)(v91 + 32) < (unsigned __int64)(v93 + 1) )
  {
    v287 = qvector_reserve();
    v96 = *(_QWORD *)(v91 + 24);
    *(_QWORD *)(v91 + 16) = v287;
    v94 = v287;
    v95 = v96 + 1;
  }
  v97 = _mm_load_si128((const __m128i *)&xmmword_3ABE0);
  *(_QWORD *)(v91 + 24) = v95;
  v98 = v94 + 40 * v96;
  *(_DWORD *)v98 = 0;
  v99 = off_47AE0;
  *(__m128i *)(v98 + 8) = v97;
  v100 = unk_47AF0;
  v101 = unk_47AEC;
  v102 = unk_47AED;
  v103 = unk_47AE8;
  *(_QWORD *)(v98 + 32) = v92;
  *(_QWORD *)(v98 + 24) = 8;
  sub_13BC0(*(__int64 **)(v91 + 8), v99, v103, v102, v101, v100, unk_47AF8);
  *(_DWORD *)(a1 + 928) = v93;
  v104 = *(_QWORD *)(a1 + 664);
  switch ( unk_47ACD )
  {
    case 2:
      v105 = 4;
      break;
    case 7:
      v105 = 8;
      break;
    case 1:
      v105 = 2;
      break;
    default:
      if ( !under_debugger )
        goto LABEL_292;
      goto LABEL_354;
  }
  v106 = *(_QWORD *)(v104 + 24);
  v107 = *(_QWORD *)(v104 + 16);
  v108 = v106 + 1;
  v109 = v106;
  if ( *(_QWORD *)(v104 + 32) < (unsigned __int64)(v106 + 1) )
  {
    v286 = qvector_reserve();
    v109 = *(_QWORD *)(v104 + 24);
    *(_QWORD *)(v104 + 16) = v286;
    v107 = v286;
    v108 = v109 + 1;
  }
  v110 = _mm_load_si128((const __m128i *)&xmmword_3ABF0);
  *(_QWORD *)(v104 + 24) = v108;
  v111 = v107 + 40 * v109;
  *(_DWORD *)v111 = 0;
  v112 = off_47AC0;
  *(__m128i *)(v111 + 8) = v110;
  v113 = unk_47AD0;
  v114 = unk_47ACC;
  v115 = unk_47ACD;
  v116 = unk_47AC8;
  *(_QWORD *)(v111 + 24) = 8;
  *(_QWORD *)(v111 + 32) = v105;
  sub_13BC0(*(__int64 **)(v104 + 8), v112, v116, v115, v114, v113, unk_47AD8);
  *(_DWORD *)(a1 + 944) = v106;
  v117 = *(_DWORD *)(a1 + 276);
  v118 = *(_QWORD *)(a1 + 664);
  if ( v117 == 8 )
  {
    sub_1A4B0(*(_QWORD *)(a1 + 664), (__int64)&off_48020, 184, 8u, 0xFFFFFFFFFFFFFFFFLL);
    sub_1A4B0(*(_QWORD *)(a1 + 664), (__int64)&off_48000, 144, 8u, 0xFFFFFFFFFFFFFFFFLL);
    sub_1A4B0(*(_QWORD *)(a1 + 664), (__int64)&off_47FE0, 192, 8u, 0xFFFFFFFFFFFFFFFFLL);
    v277 = *(_QWORD *)(a1 + 664);
    switch ( unk_47FCD )
    {
      case 2:
        v278 = 4;
        break;
      case 7:
        v278 = 8;
        break;
      case 1:
        v278 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v299 = *(_QWORD *)(v277 + 24);
    v300 = *(_QWORD *)(v277 + 16);
    v301 = v299 + 1;
    if ( *(_QWORD *)(v277 + 32) < (unsigned __int64)(v299 + 1) )
    {
      v300 = qvector_reserve();
      v299 = *(_QWORD *)(v277 + 24);
      *(_QWORD *)(v277 + 16) = v300;
      v301 = v299 + 1;
    }
    v302 = _mm_load_si128((const __m128i *)&xmmword_3AC00);
    *(_QWORD *)(v277 + 24) = v301;
    v303 = v300 + 40 * v299;
    *(_DWORD *)v303 = 0;
    v304 = off_47FC0;
    *(__m128i *)(v303 + 8) = v302;
    v305 = xmmword_47FD0;
    v306 = unk_47FCC;
    v307 = unk_47FCD;
    v308 = unk_47FC8;
    *(_QWORD *)(v303 + 24) = 8;
    *(_QWORD *)(v303 + 32) = v278;
    sub_13BC0(*(__int64 **)(v277 + 8), v304, v308, v307, v306, v305, *((__int64 *)&xmmword_47FD0 + 1));
    v309 = *(_QWORD *)(a1 + 664);
    switch ( unk_47FAD )
    {
      case 2:
        v310 = 4;
        break;
      case 7:
        v310 = 8;
        break;
      case 1:
        v310 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v311 = *(_QWORD *)(v309 + 24);
    v312 = *(_QWORD *)(v309 + 16);
    v313 = v311 + 1;
    if ( *(_QWORD *)(v309 + 32) < (unsigned __int64)(v311 + 1) )
    {
      v312 = qvector_reserve();
      v311 = *(_QWORD *)(v309 + 24);
      *(_QWORD *)(v309 + 16) = v312;
      v313 = v311 + 1;
    }
    v314 = _mm_load_si128((const __m128i *)&xmmword_3AC10);
    *(_QWORD *)(v309 + 24) = v313;
    v315 = v312 + 40 * v311;
    *(_DWORD *)v315 = 0;
    v316 = off_47FA0;
    *(__m128i *)(v315 + 8) = v314;
    v317 = unk_47FAC;
    v318 = xmmword_47FB0;
    v319 = unk_47FAD;
    v320 = unk_47FA8;
    *(_QWORD *)(v315 + 24) = 8;
    *(_QWORD *)(v315 + 32) = v310;
    sub_13BC0(*(__int64 **)(v309 + 8), v316, v320, v319, v317, v318, *((__int64 *)&xmmword_47FB0 + 1));
    v321 = *(_QWORD *)(a1 + 664);
    switch ( unk_47F8D )
    {
      case 2:
        v322 = 4;
        break;
      case 7:
        v322 = 8;
        break;
      case 1:
        v322 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v323 = *(_QWORD *)(v321 + 24);
    v324 = *(_QWORD *)(v321 + 16);
    v325 = v323 + 1;
    if ( *(_QWORD *)(v321 + 32) < (unsigned __int64)(v323 + 1) )
    {
      v324 = qvector_reserve();
      v323 = *(_QWORD *)(v321 + 24);
      *(_QWORD *)(v321 + 16) = v324;
      v325 = v323 + 1;
    }
    v326 = _mm_load_si128((const __m128i *)&xmmword_3AC20);
    *(_QWORD *)(v321 + 24) = v325;
    v327 = v324 + 40 * v323;
    *(_DWORD *)v327 = 0;
    v328 = off_47F80;
    *(__m128i *)(v327 + 8) = v326;
    v329 = unk_47F8D;
    v330 = xmmword_47F90;
    v331 = unk_47F8C;
    v332 = unk_47F88;
    *(_QWORD *)(v327 + 24) = 8;
    *(_QWORD *)(v327 + 32) = v322;
    sub_13BC0(*(__int64 **)(v321 + 8), v328, v332, v329, v331, v330, *((__int64 *)&xmmword_47F90 + 1));
    v333 = *(_QWORD *)(a1 + 664);
    switch ( unk_47F6D )
    {
      case 2:
        v334 = 4;
        break;
      case 7:
        v334 = 8;
        break;
      case 1:
        v334 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v335 = *(_QWORD *)(v333 + 24);
    v336 = *(_QWORD *)(v333 + 16);
    v337 = v335 + 1;
    if ( *(_QWORD *)(v333 + 32) < (unsigned __int64)(v335 + 1) )
    {
      v336 = qvector_reserve();
      v335 = *(_QWORD *)(v333 + 24);
      *(_QWORD *)(v333 + 16) = v336;
      v337 = v335 + 1;
    }
    v338 = _mm_load_si128((const __m128i *)&xmmword_3AC30);
    *(_QWORD *)(v333 + 24) = v337;
    v339 = v336 + 40 * v335;
    *(_DWORD *)v339 = 0;
    v340 = off_47F60;
    *(__m128i *)(v339 + 8) = v338;
    v341 = unk_47F68;
    v342 = xmmword_47F70;
    v343 = unk_47F6C;
    v344 = unk_47F6D;
    *(_QWORD *)(v339 + 32) = v334;
    *(_QWORD *)(v339 + 24) = 8;
    sub_13BC0(*(__int64 **)(v333 + 8), v340, v341, v344, v343, v342, *((__int64 *)&xmmword_47F70 + 1));
    v345 = *(_QWORD *)(a1 + 664);
    switch ( unk_47F4D )
    {
      case 2:
        v346 = 4;
        break;
      case 7:
        v346 = 8;
        break;
      case 1:
        v346 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v347 = *(_QWORD *)(v345 + 24);
    v348 = *(_QWORD *)(v345 + 16);
    v349 = v347 + 1;
    v350 = v347;
    if ( *(_QWORD *)(v345 + 32) < (unsigned __int64)(v347 + 1) )
    {
      v469 = v346;
      v466 = qvector_reserve();
      v350 = *(_QWORD *)(v345 + 24);
      v346 = v469;
      *(_QWORD *)(v345 + 16) = v466;
      v348 = v466;
      v349 = v350 + 1;
    }
    v351 = _mm_load_si128((const __m128i *)&xmmword_3AC40);
    *(_QWORD *)(v345 + 24) = v349;
    v352 = v348 + 40 * v350;
    *(_DWORD *)v352 = 0;
    v353 = off_47F40;
    *(__m128i *)(v352 + 8) = v351;
    v354 = xmmword_47F50;
    v355 = unk_47F4D;
    *(_QWORD *)(v352 + 32) = v346;
    v356 = unk_47F48;
    *(_QWORD *)(v352 + 24) = 8;
    sub_13BC0(*(__int64 **)(v345 + 8), v353, v356, v355, unk_47F4C, v354, *((__int64 *)&xmmword_47F50 + 1));
    *(_DWORD *)(a1 + 780) = v347;
    v357 = *(_QWORD *)(a1 + 664);
    switch ( unk_47F2D )
    {
      case 2:
        v358 = 4;
        break;
      case 7:
        v358 = 8;
        break;
      case 1:
        v358 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v359 = *(_QWORD *)(v357 + 24);
    v360 = *(_QWORD *)(v357 + 16);
    v361 = v359 + 1;
    v362 = v359;
    if ( *(_QWORD *)(v357 + 32) < (unsigned __int64)(v359 + 1) )
    {
      v469 = v358;
      v465 = qvector_reserve();
      v362 = *(_QWORD *)(v357 + 24);
      v358 = v469;
      *(_QWORD *)(v357 + 16) = v465;
      v360 = v465;
      v361 = v362 + 1;
    }
    v363 = _mm_load_si128((const __m128i *)&xmmword_3AC50);
    *(_QWORD *)(v357 + 24) = v361;
    v364 = v360 + 40 * v362;
    *(_DWORD *)v364 = 0;
    v365 = off_47F20;
    *(__m128i *)(v364 + 8) = v363;
    v366 = xmmword_47F30;
    v367 = unk_47F2D;
    *(_QWORD *)(v364 + 32) = v358;
    v368 = unk_47F28;
    *(_QWORD *)(v364 + 24) = 8;
    sub_13BC0(*(__int64 **)(v357 + 8), v365, v368, v367, unk_47F2C, v366, *((__int64 *)&xmmword_47F30 + 1));
    *(_DWORD *)(a1 + 784) = v359;
    v369 = *(_QWORD *)(a1 + 664);
    switch ( unk_47F0D )
    {
      case 2:
        v370 = 4;
        break;
      case 7:
        v370 = 8;
        break;
      case 1:
        v370 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v371 = *(_QWORD *)(v369 + 24);
    v372 = *(_QWORD *)(v369 + 16);
    v373 = v371 + 1;
    if ( *(_QWORD *)(v369 + 32) < (unsigned __int64)(v371 + 1) )
    {
      v372 = qvector_reserve();
      v371 = *(_QWORD *)(v369 + 24);
      *(_QWORD *)(v369 + 16) = v372;
      v373 = v371 + 1;
    }
    v374 = _mm_load_si128((const __m128i *)&xmmword_3AC60);
    *(_QWORD *)(v369 + 24) = v373;
    v375 = v372 + 40 * v371;
    *(_DWORD *)v375 = 0;
    v376 = off_47F00;
    *(__m128i *)(v375 + 8) = v374;
    v377 = xmmword_47F10;
    v378 = unk_47F0C;
    v379 = unk_47F0D;
    v380 = unk_47F08;
    *(_QWORD *)(v375 + 24) = 8;
    *(_QWORD *)(v375 + 32) = v370;
    sub_13BC0(*(__int64 **)(v369 + 8), v376, v380, v379, v378, v377, *((__int64 *)&xmmword_47F10 + 1));
    v381 = *(_QWORD *)(a1 + 664);
    switch ( unk_47EED )
    {
      case 2:
        v382 = 4;
        break;
      case 7:
        v382 = 8;
        break;
      case 1:
        v382 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v383 = *(_QWORD *)(v381 + 24);
    v384 = *(_QWORD *)(v381 + 16);
    v385 = v383 + 1;
    if ( *(_QWORD *)(v381 + 32) < (unsigned __int64)(v383 + 1) )
    {
      v384 = qvector_reserve();
      v383 = *(_QWORD *)(v381 + 24);
      *(_QWORD *)(v381 + 16) = v384;
      v385 = v383 + 1;
    }
    v386 = _mm_load_si128((const __m128i *)&xmmword_3AC70);
    *(_QWORD *)(v381 + 24) = v385;
    v387 = v384 + 40 * v383;
    *(_DWORD *)v387 = 0;
    v388 = off_47EE0;
    *(__m128i *)(v387 + 8) = v386;
    v389 = unk_47EED;
    v390 = unk_47EE8;
    v391 = xmmword_47EF0;
    v392 = unk_47EEC;
    *(_QWORD *)(v387 + 32) = v382;
    *(_QWORD *)(v387 + 24) = 8;
    sub_13BC0(*(__int64 **)(v381 + 8), v388, v390, v389, v392, v391, *((__int64 *)&xmmword_47EF0 + 1));
    v393 = *(_QWORD *)(a1 + 664);
    switch ( unk_47ECD )
    {
      case 2:
        v394 = 4;
        break;
      case 7:
        v394 = 8;
        break;
      case 1:
        v394 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v395 = *(_QWORD *)(v393 + 24);
    v396 = *(_QWORD *)(v393 + 16);
    v397 = v395 + 1;
    if ( *(_QWORD *)(v393 + 32) < (unsigned __int64)(v395 + 1) )
    {
      v396 = qvector_reserve();
      v395 = *(_QWORD *)(v393 + 24);
      *(_QWORD *)(v393 + 16) = v396;
      v397 = v395 + 1;
    }
    v398 = _mm_load_si128((const __m128i *)&xmmword_3AC80);
    *(_QWORD *)(v393 + 24) = v397;
    v399 = v396 + 40 * v395;
    *(_DWORD *)v399 = 0;
    v400 = off_47EC0;
    *(__m128i *)(v399 + 8) = v398;
    v401 = xmmword_47ED0;
    v402 = unk_47ECC;
    v403 = unk_47ECD;
    v404 = unk_47EC8;
    *(_QWORD *)(v399 + 32) = v394;
    *(_QWORD *)(v399 + 24) = 8;
    sub_13BC0(*(__int64 **)(v393 + 8), v400, v404, v403, v402, v401, *((__int64 *)&xmmword_47ED0 + 1));
    v405 = *(_QWORD *)(a1 + 664);
    switch ( unk_47EAD )
    {
      case 2:
        v406 = 4;
        break;
      case 7:
        v406 = 8;
        break;
      case 1:
        v406 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v407 = *(_QWORD *)(v405 + 24);
    v408 = *(_QWORD *)(v405 + 16);
    v409 = v407 + 1;
    if ( *(_QWORD *)(v405 + 32) < (unsigned __int64)(v407 + 1) )
    {
      v408 = qvector_reserve();
      v407 = *(_QWORD *)(v405 + 24);
      *(_QWORD *)(v405 + 16) = v408;
      v409 = v407 + 1;
    }
    v410 = _mm_load_si128((const __m128i *)&xmmword_3AC90);
    *(_QWORD *)(v405 + 24) = v409;
    v411 = v408 + 40 * v407;
    *(_DWORD *)v411 = 0;
    v412 = off_47EA0;
    *(__m128i *)(v411 + 8) = v410;
    v413 = xmmword_47EB0;
    v414 = unk_47EAC;
    v415 = unk_47EAD;
    v416 = unk_47EA8;
    *(_QWORD *)(v411 + 24) = 8;
    *(_QWORD *)(v411 + 32) = v406;
    sub_13BC0(*(__int64 **)(v405 + 8), v412, v416, v415, v414, v413, *((__int64 *)&xmmword_47EB0 + 1));
    v417 = *(_QWORD *)(a1 + 664);
    switch ( unk_47E8D )
    {
      case 2:
        v418 = 4;
        break;
      case 7:
        v418 = 8;
        break;
      case 1:
        v418 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v419 = *(_QWORD *)(v417 + 24);
    v420 = *(_QWORD *)(v417 + 16);
    v421 = v419 + 1;
    if ( *(_QWORD *)(v417 + 32) < (unsigned __int64)(v419 + 1) )
    {
      v420 = qvector_reserve();
      v419 = *(_QWORD *)(v417 + 24);
      *(_QWORD *)(v417 + 16) = v420;
      v421 = v419 + 1;
    }
    v422 = _mm_load_si128((const __m128i *)&xmmword_3ACA0);
    *(_QWORD *)(v417 + 24) = v421;
    v423 = v420 + 40 * v419;
    *(_DWORD *)v423 = 0;
    v424 = off_47E80;
    *(__m128i *)(v423 + 8) = v422;
    v425 = unk_47E8C;
    v426 = xmmword_47E90;
    v427 = unk_47E8D;
    v428 = unk_47E88;
    *(_QWORD *)(v423 + 24) = 8;
    *(_QWORD *)(v423 + 32) = v418;
    sub_13BC0(*(__int64 **)(v417 + 8), v424, v428, v427, v425, v426, *((__int64 *)&xmmword_47E90 + 1));
    v429 = *(_QWORD *)(a1 + 664);
    switch ( unk_47E6D )
    {
      case 2:
        v430 = 4;
        break;
      case 7:
        v430 = 8;
        break;
      case 1:
        v430 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v431 = *(_QWORD *)(v429 + 24);
    v432 = *(_QWORD *)(v429 + 16);
    v433 = v431 + 1;
    if ( *(_QWORD *)(v429 + 32) < (unsigned __int64)(v431 + 1) )
    {
      v432 = qvector_reserve();
      v431 = *(_QWORD *)(v429 + 24);
      *(_QWORD *)(v429 + 16) = v432;
      v433 = v431 + 1;
    }
    v434 = _mm_load_si128((const __m128i *)&xmmword_3ACB0);
    *(_QWORD *)(v429 + 24) = v433;
    v435 = v432 + 40 * v431;
    *(_DWORD *)v435 = 0;
    v436 = off_47E60;
    *(__m128i *)(v435 + 8) = v434;
    v437 = unk_47E6D;
    v438 = xmmword_47E70;
    v439 = unk_47E6C;
    v440 = unk_47E68;
    *(_QWORD *)(v435 + 24) = 8;
    *(_QWORD *)(v435 + 32) = v430;
    sub_13BC0(*(__int64 **)(v429 + 8), v436, v440, v437, v439, v438, *((__int64 *)&xmmword_47E70 + 1));
    v441 = *(_QWORD *)(a1 + 664);
    switch ( unk_47E4D )
    {
      case 2:
        v442 = 4;
        break;
      case 7:
        v442 = 8;
        break;
      case 1:
        v442 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v443 = *(_QWORD *)(v441 + 24);
    v444 = *(_QWORD *)(v441 + 16);
    v445 = v443 + 1;
    if ( *(_QWORD *)(v441 + 32) < (unsigned __int64)(v443 + 1) )
    {
      v444 = qvector_reserve();
      v443 = *(_QWORD *)(v441 + 24);
      *(_QWORD *)(v441 + 16) = v444;
      v445 = v443 + 1;
    }
    v446 = _mm_load_si128((const __m128i *)&xmmword_3ACC0);
    *(_QWORD *)(v441 + 24) = v445;
    v447 = v444 + 40 * v443;
    *(_DWORD *)v447 = 0;
    v448 = off_47E40;
    *(__m128i *)(v447 + 8) = v446;
    v449 = unk_47E48;
    v450 = xmmword_47E50;
    v451 = unk_47E4C;
    v452 = unk_47E4D;
    *(_QWORD *)(v447 + 32) = v442;
    *(_QWORD *)(v447 + 24) = 8;
    sub_13BC0(*(__int64 **)(v441 + 8), v448, v449, v452, v451, v450, *((__int64 *)&xmmword_47E50 + 1));
    v453 = *(_QWORD *)(a1 + 664);
    switch ( unk_47E2D )
    {
      case 2:
        v454 = 4;
        break;
      case 7:
        v454 = 8;
        break;
      case 1:
        v454 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v455 = *(_QWORD *)(v453 + 24);
    v456 = *(_QWORD *)(v453 + 16);
    v457 = v455 + 1;
    if ( *(_QWORD *)(v453 + 32) < (unsigned __int64)(v455 + 1) )
    {
      v456 = qvector_reserve();
      v455 = *(_QWORD *)(v453 + 24);
      *(_QWORD *)(v453 + 16) = v456;
      v457 = v455 + 1;
    }
    v458 = _mm_load_si128((const __m128i *)&xmmword_3ACD0);
    *(_QWORD *)(v453 + 24) = v457;
    v459 = v456 + 40 * v455;
    *(_DWORD *)v459 = 0;
    v460 = off_47E20;
    *(__m128i *)(v459 + 8) = v458;
    v461 = xmmword_47E30;
    v462 = unk_47E2C;
    v463 = unk_47E2D;
    v464 = unk_47E28;
    *(_QWORD *)(v459 + 24) = 8;
    *(_QWORD *)(v459 + 32) = v454;
    sub_13BC0(*(__int64 **)(v453 + 8), v460, v464, v463, v462, v461, *((__int64 *)&xmmword_47E30 + 1));
  }
  else
  {
    switch ( unk_47E0D )
    {
      case 2:
        v119 = 4;
        break;
      case 7:
        v119 = 8;
        break;
      case 1:
        v119 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v120 = *(_QWORD *)(v118 + 24);
    v121 = *(_QWORD *)(v118 + 16);
    v122 = v120 + 1;
    if ( *(_QWORD *)(v118 + 32) < (unsigned __int64)(v120 + 1) )
    {
      v292 = qvector_reserve();
      v120 = *(_QWORD *)(v118 + 24);
      *(_QWORD *)(v118 + 16) = v292;
      v121 = v292;
      v122 = v120 + 1;
    }
    v123 = _mm_load_si128((const __m128i *)&xmmword_3ACE0);
    *(_QWORD *)(v118 + 24) = v122;
    v124 = v121 + 40 * v120;
    *(_DWORD *)v124 = 0;
    v125 = off_47E00;
    *(__m128i *)(v124 + 8) = v123;
    v126 = xmmword_47E10;
    v127 = unk_47E0C;
    v128 = unk_47E0D;
    v129 = unk_47E08;
    *(_QWORD *)(v124 + 24) = 8;
    *(_QWORD *)(v124 + 32) = v119;
    sub_13BC0(*(__int64 **)(v118 + 8), v125, v129, v128, v127, v126, *((__int64 *)&xmmword_47E10 + 1));
    v130 = *(_QWORD *)(a1 + 664);
    switch ( unk_47DED )
    {
      case 2:
        v131 = 4;
        break;
      case 7:
        v131 = 8;
        break;
      case 1:
        v131 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v132 = *(_QWORD *)(v130 + 24);
    v133 = *(_QWORD *)(v130 + 16);
    v134 = v132 + 1;
    if ( *(_QWORD *)(v130 + 32) < (unsigned __int64)(v132 + 1) )
    {
      v291 = qvector_reserve();
      v132 = *(_QWORD *)(v130 + 24);
      *(_QWORD *)(v130 + 16) = v291;
      v133 = v291;
      v134 = v132 + 1;
    }
    v135 = _mm_load_si128((const __m128i *)&xmmword_3ACF0);
    *(_QWORD *)(v130 + 24) = v134;
    v136 = v133 + 40 * v132;
    *(_DWORD *)v136 = 0;
    v137 = off_47DE0;
    *(__m128i *)(v136 + 8) = v135;
    v138 = unk_47DEC;
    v139 = xmmword_47DF0;
    v140 = unk_47DED;
    v141 = unk_47DE8;
    *(_QWORD *)(v136 + 24) = 8;
    *(_QWORD *)(v136 + 32) = v131;
    sub_13BC0(*(__int64 **)(v130 + 8), v137, v141, v140, v138, v139, *((__int64 *)&xmmword_47DF0 + 1));
    v142 = *(_QWORD *)(a1 + 664);
    switch ( unk_47DCD )
    {
      case 2:
        v143 = 4;
        break;
      case 7:
        v143 = 8;
        break;
      case 1:
        v143 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v144 = *(_QWORD *)(v142 + 24);
    v145 = *(_QWORD *)(v142 + 16);
    v146 = v144 + 1;
    if ( *(_QWORD *)(v142 + 32) < (unsigned __int64)(v144 + 1) )
    {
      v290 = qvector_reserve();
      v144 = *(_QWORD *)(v142 + 24);
      *(_QWORD *)(v142 + 16) = v290;
      v145 = v290;
      v146 = v144 + 1;
    }
    v147 = _mm_load_si128((const __m128i *)&xmmword_3AD00);
    *(_QWORD *)(v142 + 24) = v146;
    v148 = v145 + 40 * v144;
    *(_DWORD *)v148 = 0;
    v149 = off_47DC0;
    *(__m128i *)(v148 + 8) = v147;
    v150 = unk_47DCD;
    v151 = xmmword_47DD0;
    v152 = unk_47DCC;
    v153 = unk_47DC8;
    *(_QWORD *)(v148 + 24) = 8;
    *(_QWORD *)(v148 + 32) = v143;
    sub_13BC0(*(__int64 **)(v142 + 8), v149, v153, v150, v152, v151, *((__int64 *)&xmmword_47DD0 + 1));
    v154 = *(_QWORD *)(a1 + 664);
    switch ( unk_47DAD )
    {
      case 2:
        v155 = 4;
        break;
      case 7:
        v155 = 8;
        break;
      case 1:
        v155 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v156 = *(_QWORD *)(v154 + 24);
    v157 = *(_QWORD *)(v154 + 16);
    v158 = v156 + 1;
    if ( *(_QWORD *)(v154 + 32) < (unsigned __int64)(v156 + 1) )
    {
      v298 = qvector_reserve();
      v156 = *(_QWORD *)(v154 + 24);
      *(_QWORD *)(v154 + 16) = v298;
      v157 = v298;
      v158 = v156 + 1;
    }
    v159 = _mm_load_si128((const __m128i *)&xmmword_3AC00);
    *(_QWORD *)(v154 + 24) = v158;
    v160 = v157 + 40 * v156;
    *(_DWORD *)v160 = 0;
    v161 = off_47DA0;
    *(__m128i *)(v160 + 8) = v159;
    v162 = unk_47DA8;
    v163 = xmmword_47DB0;
    v164 = unk_47DAC;
    v165 = unk_47DAD;
    *(_QWORD *)(v160 + 32) = v155;
    *(_QWORD *)(v160 + 24) = 8;
    sub_13BC0(*(__int64 **)(v154 + 8), v161, v162, v165, v164, v163, *((__int64 *)&xmmword_47DB0 + 1));
    v166 = *(_QWORD *)(a1 + 664);
    switch ( unk_47D8D )
    {
      case 2:
        v167 = 4;
        break;
      case 7:
        v167 = 8;
        break;
      case 1:
        v167 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v168 = *(_QWORD *)(v166 + 24);
    v169 = *(_QWORD *)(v166 + 16);
    v170 = v168 + 1;
    if ( *(_QWORD *)(v166 + 32) < (unsigned __int64)(v168 + 1) )
    {
      v297 = qvector_reserve();
      v168 = *(_QWORD *)(v166 + 24);
      *(_QWORD *)(v166 + 16) = v297;
      v169 = v297;
      v170 = v168 + 1;
    }
    v171 = _mm_load_si128((const __m128i *)&xmmword_3AC10);
    *(_QWORD *)(v166 + 24) = v170;
    v172 = v169 + 40 * v168;
    *(_DWORD *)v172 = 0;
    v173 = off_47D80;
    *(__m128i *)(v172 + 8) = v171;
    v174 = xmmword_47D90;
    v175 = unk_47D8C;
    v176 = unk_47D8D;
    v177 = unk_47D88;
    *(_QWORD *)(v172 + 24) = 8;
    *(_QWORD *)(v172 + 32) = v167;
    sub_13BC0(*(__int64 **)(v166 + 8), v173, v177, v176, v175, v174, *((__int64 *)&xmmword_47D90 + 1));
    v178 = *(_QWORD *)(a1 + 664);
    switch ( unk_47D6D )
    {
      case 2:
        v179 = 4;
        break;
      case 7:
        v179 = 8;
        break;
      case 1:
        v179 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v180 = *(_QWORD *)(v178 + 24);
    v181 = *(_QWORD *)(v178 + 16);
    v182 = v180 + 1;
    if ( *(_QWORD *)(v178 + 32) < (unsigned __int64)(v180 + 1) )
    {
      v296 = qvector_reserve();
      v180 = *(_QWORD *)(v178 + 24);
      *(_QWORD *)(v178 + 16) = v296;
      v181 = v296;
      v182 = v180 + 1;
    }
    v183 = _mm_load_si128((const __m128i *)&xmmword_3AC20);
    *(_QWORD *)(v178 + 24) = v182;
    v184 = v181 + 40 * v180;
    *(_DWORD *)v184 = 0;
    v185 = off_47D60;
    *(__m128i *)(v184 + 8) = v183;
    v186 = xmmword_47D70;
    v187 = unk_47D6C;
    v188 = unk_47D6D;
    v189 = unk_47D68;
    *(_QWORD *)(v184 + 24) = 8;
    *(_QWORD *)(v184 + 32) = v179;
    sub_13BC0(*(__int64 **)(v178 + 8), v185, v189, v188, v187, v186, *((__int64 *)&xmmword_47D70 + 1));
    v190 = *(_QWORD *)(a1 + 664);
    switch ( unk_47D4D )
    {
      case 2:
        v191 = 4;
        break;
      case 7:
        v191 = 8;
        break;
      case 1:
        v191 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v192 = *(_QWORD *)(v190 + 24);
    v193 = *(_QWORD *)(v190 + 16);
    v194 = v192 + 1;
    if ( *(_QWORD *)(v190 + 32) < (unsigned __int64)(v192 + 1) )
    {
      v295 = qvector_reserve();
      v192 = *(_QWORD *)(v190 + 24);
      *(_QWORD *)(v190 + 16) = v295;
      v193 = v295;
      v194 = v192 + 1;
    }
    v195 = _mm_load_si128((const __m128i *)&xmmword_3AC30);
    *(_QWORD *)(v190 + 24) = v194;
    v196 = v193 + 40 * v192;
    *(_DWORD *)v196 = 0;
    v197 = off_47D40;
    *(__m128i *)(v196 + 8) = v195;
    v198 = xmmword_47D50;
    v199 = unk_47D4C;
    v200 = unk_47D4D;
    v201 = unk_47D48;
    *(_QWORD *)(v196 + 24) = 8;
    *(_QWORD *)(v196 + 32) = v191;
    sub_13BC0(*(__int64 **)(v190 + 8), v197, v201, v200, v199, v198, *((__int64 *)&xmmword_47D50 + 1));
    v202 = *(_QWORD *)(a1 + 664);
    switch ( unk_47D2D )
    {
      case 2:
        v203 = 4;
        break;
      case 7:
        v203 = 8;
        break;
      case 1:
        v203 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v204 = *(_QWORD *)(v202 + 24);
    v205 = *(_QWORD *)(v202 + 16);
    v206 = v204 + 1;
    v207 = v204;
    if ( *(_QWORD *)(v202 + 32) < (unsigned __int64)(v204 + 1) )
    {
      v469 = v203;
      v294 = qvector_reserve();
      v207 = *(_QWORD *)(v202 + 24);
      v203 = v469;
      *(_QWORD *)(v202 + 16) = v294;
      v205 = v294;
      v206 = v207 + 1;
    }
    v208 = _mm_load_si128((const __m128i *)&xmmword_3AC40);
    *(_QWORD *)(v202 + 24) = v206;
    v209 = v205 + 40 * v207;
    *(_DWORD *)v209 = 0;
    v210 = off_47D20;
    *(__m128i *)(v209 + 8) = v208;
    v211 = unk_47D2D;
    v212 = unk_47D28;
    *(_QWORD *)(v209 + 32) = v203;
    v213 = xmmword_47D30;
    *(_QWORD *)(v209 + 24) = 8;
    sub_13BC0(*(__int64 **)(v202 + 8), v210, v212, v211, unk_47D2C, v213, *((__int64 *)&xmmword_47D30 + 1));
    *(_DWORD *)(a1 + 780) = v204;
    v214 = *(_QWORD *)(a1 + 664);
    switch ( unk_47D0D )
    {
      case 2:
        v215 = 4;
        break;
      case 7:
        v215 = 8;
        break;
      case 1:
        v215 = 2;
        break;
      default:
        if ( !under_debugger )
          goto LABEL_292;
        goto LABEL_354;
    }
    v216 = *(_QWORD *)(v214 + 24);
    v217 = *(_QWORD *)(v214 + 16);
    v218 = v216 + 1;
    v219 = v216;
    if ( *(_QWORD *)(v214 + 32) < (unsigned __int64)(v216 + 1) )
    {
      v469 = v215;
      v293 = qvector_reserve();
      v219 = *(_QWORD *)(v214 + 24);
      v215 = v469;
      *(_QWORD *)(v214 + 16) = v293;
      v217 = v293;
      v218 = v219 + 1;
    }
    v220 = _mm_load_si128((const __m128i *)&xmmword_3AC50);
    *(_QWORD *)(v214 + 24) = v218;
    v221 = v217 + 40 * v219;
    *(_DWORD *)v221 = 0;
    v222 = off_47D00;
    *(__m128i *)(v221 + 8) = v220;
    v223 = xmmword_47D10;
    v224 = unk_47D0D;
    *(_QWORD *)(v221 + 32) = v215;
    v225 = unk_47D08;
    *(_QWORD *)(v221 + 24) = 8;
    sub_13BC0(*(__int64 **)(v214 + 8), v222, v225, v224, unk_47D0C, v223, *((__int64 *)&xmmword_47D10 + 1));
    *(_DWORD *)(a1 + 784) = v216;
  }
  v226 = *(_QWORD *)(a1 + 664);
  switch ( unk_47CED )
  {
    case 2:
      v227 = 4;
      break;
    case 7:
      v227 = 8;
      break;
    case 1:
      v227 = 2;
      break;
    default:
      if ( !under_debugger )
        goto LABEL_292;
      goto LABEL_354;
  }
  v228 = *(_QWORD *)(v226 + 24);
  v229 = *(_QWORD *)(v226 + 16);
  v230 = v228 + 1;
  v231 = v228;
  if ( *(_QWORD *)(v226 + 32) < (unsigned __int64)(v228 + 1) )
  {
    v469 = v227;
    v289 = qvector_reserve();
    v231 = *(_QWORD *)(v226 + 24);
    v227 = v469;
    *(_QWORD *)(v226 + 16) = v289;
    v229 = v289;
    v230 = v231 + 1;
  }
  v232 = _mm_load_si128((const __m128i *)&xmmword_3AD10);
  *(_QWORD *)(v226 + 24) = v230;
  v233 = v229 + 40 * v231;
  *(_DWORD *)v233 = 0;
  v234 = off_47CE0;
  *(__m128i *)(v233 + 8) = v232;
  v235 = off_47CF0;
  v236 = unk_47CED;
  *(_QWORD *)(v233 + 32) = v227;
  v237 = unk_47CE8;
  *(_QWORD *)(v233 + 24) = 8;
  sub_13BC0(*(__int64 **)(v226 + 8), v234, v237, v236, unk_47CEC, (__int64)v235, unk_47CF8);
  *(_DWORD *)(a1 + 920) = v228;
  v238 = &off_478C0;
  v239 = v117 != 8;
  v240 = 0;
  do
  {
    v241 = *(_QWORD *)(a1 + 664);
    v242 = *(_QWORD *)(v241 + 24);
    v243 = *(_QWORD *)(v241 + 16);
    v244 = v242 + 1;
    if ( *(_QWORD *)(v241 + 32) < (unsigned __int64)(v242 + 1) )
    {
      v266 = qvector_reserve();
      v242 = *(_QWORD *)(v241 + 24);
      *(_QWORD *)(v241 + 16) = v266;
      v243 = v266;
      v244 = v242 + 1;
    }
    *(_QWORD *)(v241 + 24) = v244;
    ++v240;
    v245 = v243 + 40 * v242;
    *(_QWORD *)(v245 + 16) = v4;
    v4 += 16;
    *(_DWORD *)v245 = 2;
    *(_QWORD *)(v245 + 8) = -1;
    *(_QWORD *)(v245 + 24) = 16;
    *(_QWORD *)(v245 + 32) = 16;
    sub_13BC0(
      *(__int64 **)(v241 + 8),
      *v238,
      *((_DWORD *)v238 + 2),
      *((_BYTE *)v238 + 13),
      *((_BYTE *)v238 + 12),
      (__int64)v238[2],
      (__int64)v238[3]);
    if ( v240 == 16 )
      break;
    v238 += 4;
  }
  while ( v240 <= 7 || !v239 );
  v246 = *(_QWORD *)(a1 + 664);
  switch ( unk_478AD )
  {
    case 2:
      v247 = 4;
      break;
    case 7:
      v247 = 8;
      break;
    case 1:
      v247 = 2;
      break;
    default:
      goto LABEL_293;
  }
  v248 = *(_QWORD *)(v246 + 24);
  v249 = *(_QWORD *)(v246 + 16);
  v250 = v248 + 1;
  if ( *(_QWORD *)(v246 + 32) < (unsigned __int64)(v248 + 1) )
  {
    v283 = qvector_reserve();
    v248 = *(_QWORD *)(v246 + 24);
    *(_QWORD *)(v246 + 16) = v283;
    v249 = v283;
    v250 = v248 + 1;
  }
  v251 = _mm_load_si128((const __m128i *)&xmmword_3AD20);
  *(_QWORD *)(v246 + 24) = v250;
  v252 = v249 + 40 * v248;
  *(_DWORD *)v252 = 0;
  v253 = off_478A0;
  *(__m128i *)(v252 + 8) = v251;
  v254 = unk_478AC;
  v255 = off_478B0;
  v256 = unk_478AD;
  v257 = unk_478A8;
  *(_QWORD *)(v252 + 32) = v247;
  v258 = 352;
  *(_QWORD *)(v252 + 24) = 4;
  sub_13BC0(*(__int64 **)(v246 + 8), v253, v257, v256, v254, (__int64)v255, (__int64)off_478B8);
  v259 = &off_477A0;
  do
  {
    v261 = *(_QWORD *)(a1 + 664);
    v262 = *(_QWORD *)(v261 + 24);
    v263 = *(_QWORD *)(v261 + 16);
    v264 = v262 + 1;
    if ( *(_QWORD *)(v261 + 32) < (unsigned __int64)(v262 + 1) )
    {
      v265 = qvector_reserve();
      v262 = *(_QWORD *)(v261 + 24);
      *(_QWORD *)(v261 + 16) = v265;
      v263 = v265;
      v264 = v262 + 1;
    }
    *(_QWORD *)(v261 + 24) = v264;
    v259 += 4;
    v260 = v263 + 40 * v262;
    *(_QWORD *)(v260 + 16) = v258;
    v258 += 16;
    *(_DWORD *)v260 = 2;
    *(_QWORD *)(v260 + 8) = -1;
    *(_QWORD *)(v260 + 24) = 8;
    *(_QWORD *)(v260 + 32) = 8;
    sub_13BC0(
      *(__int64 **)(v261 + 8),
      *(v259 - 4),
      *((_DWORD *)v259 - 6),
      *((_BYTE *)v259 - 19),
      *((_BYTE *)v259 - 20),
      (__int64)*(v259 - 2),
      (__int64)*(v259 - 1));
  }
  while ( v258 != 480 );
  v267 = &off_475A0;
  v268 = 0;
  do
  {
    v269 = *(_QWORD *)(a1 + 664);
    v270 = *(_QWORD *)(v269 + 24);
    v271 = *(_QWORD *)(v269 + 16);
    v272 = v270 + 1;
    if ( *(_QWORD *)(v269 + 32) < (unsigned __int64)(v270 + 1) )
    {
      v276 = qvector_reserve();
      v270 = *(_QWORD *)(v269 + 24);
      *(_QWORD *)(v269 + 16) = v276;
      v271 = v276;
      v272 = v270 + 1;
    }
    v273 = _mm_load_si128(&v468);
    *(_QWORD *)(v269 + 24) = v272;
    v274 = (__m128i *)(v271 + 40 * v270);
    v274[2].m128i_i64[0] = v268++;
    v274->m128i_i32[0] = 3;
    v274->m128i_i64[1] = -1;
    v274[1] = v273;
    sub_13BC0(
      *(__int64 **)(v269 + 8),
      *v267,
      *((_DWORD *)v267 + 2),
      *((_BYTE *)v267 + 13),
      *((_BYTE *)v267 + 12),
      (__int64)v267[2],
      (__int64)v267[3]);
    result = v467;
    if ( v268 == 16 )
      break;
    v267 += 4;
  }
  while ( v268 <= 7 || !v239 );
  return result;
}

