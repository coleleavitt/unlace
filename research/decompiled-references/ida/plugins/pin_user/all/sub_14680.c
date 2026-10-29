__int64 __fastcall sub_14680(__int64 a1)
{
  char **v2; // r15
  __int64 v3; // r13
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbp
  const void *v8; // r12
  size_t v9; // rax
  size_t v10; // r14
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // rdi
  size_t v17; // rdx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __m128i si128; // xmm0
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdi
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __m128i v40; // xmm0
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rdi
  __m128i v47; // xmm0
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdi
  __m128i v54; // xmm0
  __int64 v55; // rax
  __int64 v56; // r13
  __int64 v57; // r14
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rdi
  __m128i v61; // xmm0
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rdi
  __m128i v68; // xmm0
  __int64 v69; // rax
  __int64 v70; // r13
  __int64 v71; // r14
  __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rdi
  __m128i v75; // xmm0
  __int64 v76; // rax
  __int64 v77; // r12
  __int64 v78; // r13
  __int64 v79; // rdx
  __int64 v80; // rsi
  __int64 v81; // rdi
  __m128i v82; // xmm0
  __int64 v83; // rax
  __int64 v84; // r12
  __int64 v85; // r13
  __int64 v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // rdi
  __m128i v89; // xmm0
  __int64 v90; // rax
  __int64 v91; // r12
  __int64 v92; // r13
  __int64 v93; // rdx
  __int64 v94; // rsi
  __int64 v95; // rdi
  __m128i v96; // xmm0
  __int64 v97; // rax
  __int64 v98; // r12
  __int64 v99; // r13
  __int64 v100; // rdx
  __int64 v101; // rsi
  __int64 v102; // rdi
  __int64 v103; // rax
  __int64 v104; // r12
  __int64 v105; // r13
  __int64 v106; // rdx
  __int64 v107; // rsi
  __int64 v108; // rdi
  __m128i v109; // xmm0
  __int64 v110; // rax
  __int64 v111; // r12
  __int64 v112; // r13
  __int64 v113; // rdx
  __int64 v114; // rsi
  __int64 v115; // rdi
  __m128i v116; // xmm0
  __int64 v117; // rax
  __int64 v118; // r12
  __int64 v119; // r13
  __int64 v120; // rdx
  __int64 v121; // rsi
  __int64 v122; // rdi
  __m128i v123; // xmm0
  __int64 v124; // rax
  __int64 v125; // r12
  __int64 v126; // r13
  __int64 v127; // rdx
  __int64 v128; // rsi
  __int64 v129; // rdi
  __m128i v130; // xmm0
  __int64 v131; // rax
  __int64 v132; // r12
  __int64 v133; // r13
  __int64 v134; // rdx
  __int64 v135; // rsi
  __int64 v136; // rdi
  __m128i v137; // xmm0
  __int64 v138; // rax
  int v139; // r13d
  __int64 v140; // r12
  __int64 v141; // r14
  __int64 v142; // rdx
  __int64 v143; // rsi
  __int64 v144; // rdi
  __m128i v145; // xmm0
  __int64 v146; // rax
  __int64 v147; // r12
  __int64 v148; // r14
  __int64 v149; // rdx
  __int64 v150; // rsi
  __int64 v151; // rdi
  __m128i v152; // xmm0
  __int64 v153; // rax
  __int64 v154; // r12
  __int64 v155; // r14
  __int64 v156; // rdx
  __int64 v157; // rsi
  __int64 v158; // rdi
  __m128i v159; // xmm0
  __int64 v160; // rax
  __int64 v161; // r12
  __int64 v162; // r14
  __int64 v163; // rdx
  __int64 v164; // rsi
  __int64 v165; // rdi
  __m128i v166; // xmm0
  __int64 v167; // rax
  __int64 v168; // r12
  __int64 v169; // r14
  __int64 v170; // rdx
  __int64 v171; // rsi
  __int64 v172; // rdi
  __m128i v173; // xmm0
  __int64 v174; // rax
  __int64 v175; // r12
  __int64 v176; // r14
  __int64 v177; // rdx
  __int64 v178; // rsi
  __int64 v179; // rdi
  __m128i v180; // xmm0
  __int64 v181; // rax
  __int64 v182; // r12
  __int64 v183; // r14
  __int64 v184; // rdx
  __int64 v185; // rsi
  __int64 v186; // rdi
  __m128i v187; // xmm0
  __int64 v188; // rax
  __int64 v189; // r12
  __int64 v190; // r14
  __int64 v191; // rdx
  __int64 v192; // rsi
  __int64 v193; // rdi
  __m128i v194; // xmm0
  __int64 v195; // rax
  __int64 v196; // r12
  __int64 v197; // r14
  __int64 v198; // rdx
  __int64 v199; // rsi
  __int64 v200; // rdi
  __m128i v201; // xmm0
  __int64 v202; // rax
  __int64 v203; // r12
  __int64 v204; // r14
  __int64 v205; // rdx
  __int64 v206; // rsi
  __int64 v207; // rdi
  __m128i v208; // xmm0
  __int64 v209; // rax
  __int64 v210; // r14
  __int64 v211; // r12
  __int64 v212; // rdx
  __int64 v213; // rsi
  __int64 v214; // rdi
  __m128i v215; // xmm0
  __int64 v216; // rax
  __int64 v217; // r14
  __int64 v218; // r15
  __int64 v219; // rdx
  __int64 v220; // rsi
  __int64 v221; // rdi
  __m128i v222; // xmm0
  __int64 v223; // rax
  __int64 v224; // r14
  __int64 v225; // r15
  __int64 v226; // rdx
  __int64 v227; // rsi
  __int64 v228; // rdi
  __m128i v229; // xmm0
  __int64 v230; // rax
  __int64 v231; // r14
  __int64 v232; // r15
  __int64 v233; // rdx
  __int64 v234; // rsi
  __int64 v235; // rdi
  __m128i v236; // xmm0
  __int64 v237; // rax
  __int64 v238; // r14
  __int64 v239; // r15
  __int64 v240; // rdx
  __int64 v241; // rsi
  __int64 v242; // rdi
  __m128i v243; // xmm0
  __int64 v244; // rax
  __int64 v245; // r14
  __int64 v246; // r15
  __int64 v247; // rdx
  __int64 v248; // rsi
  __int64 v249; // rdi
  __m128i v250; // xmm0
  __int64 v251; // rax
  __int64 v252; // r14
  __int64 v253; // r15
  __int64 v254; // rdx
  __int64 v255; // rsi
  __int64 v256; // rdi
  __m128i v257; // xmm0
  __int64 v258; // rax
  __int64 v259; // r14
  __int64 v260; // r15
  __int64 v261; // rdx
  __int64 v262; // rsi
  __int64 v263; // rdi
  __m128i v264; // xmm0
  __int64 v265; // rax
  __int64 v266; // r12
  __int64 v267; // r14
  __int64 v268; // rdx
  __int64 v269; // rsi
  __int64 v270; // rdi
  __m128i v271; // xmm0
  __int64 v272; // rax
  __int64 v273; // r14
  __int64 v274; // r12
  __int64 v275; // rdx
  __int64 v276; // rsi
  __int64 v277; // rdi
  __m128i v278; // xmm0
  __int64 v279; // rax
  __int64 v280; // r14
  __int64 v281; // r15
  __int64 v282; // rdx
  __int64 v283; // rsi
  __int64 v284; // rdi
  __m128i v285; // xmm0
  __int64 v286; // rax
  __int64 v287; // r14
  __int64 v288; // r15
  __int64 v289; // rdx
  __int64 v290; // rsi
  __int64 v291; // rdi
  __m128i v292; // xmm0
  __int64 v293; // rax
  __int64 v294; // r14
  __int64 v295; // r15
  __int64 v296; // rdx
  __int64 v297; // rsi
  __int64 v298; // rdi
  __m128i v299; // xmm0
  __int64 v300; // rax
  __int64 v301; // r14
  __int64 v302; // r15
  __int64 v303; // rdx
  __int64 v304; // rsi
  __int64 v305; // rdi
  __m128i v306; // xmm0
  __int64 v307; // rax
  __int64 v308; // r14
  __int64 v309; // r15
  __int64 v310; // rdx
  __int64 v311; // rsi
  __int64 v312; // rdi
  __m128i v313; // xmm0
  __int64 v314; // rax
  __int64 v315; // r14
  __int64 v316; // r15
  __int64 v317; // rdx
  __int64 v318; // rsi
  __int64 v319; // rdi
  __m128i v320; // xmm0
  __int64 v321; // rax
  __int64 v322; // r14
  __int64 v323; // r15
  __int64 v324; // rdx
  __int64 v325; // rsi
  __int64 v326; // rdi
  __m128i v327; // xmm0
  __int64 v328; // rax
  __int64 v329; // r14
  __int64 v330; // r12
  __int64 v331; // rdx
  __int64 v332; // rsi
  __int64 v333; // rdi
  __m128i v334; // xmm0
  __int64 v335; // rax
  __int64 v336; // r14
  __int64 v337; // r15
  __int64 v338; // rdx
  __int64 v339; // rsi
  __int64 v340; // rdi
  __m128i v341; // xmm0
  __int64 v342; // rax
  __int64 v343; // r14
  __int64 v344; // r15
  __int64 v345; // rdx
  __int64 v346; // rsi
  __int64 v347; // rdi
  __m128i v348; // xmm0
  __int64 v349; // rax
  __int64 v350; // r14
  __int64 v351; // r15
  __int64 v352; // rdx
  __int64 v353; // rsi
  __int64 v354; // rdi
  __m128i v355; // xmm0
  __int64 v356; // rax
  __int64 v357; // r14
  __int64 v358; // r15
  __int64 v359; // rdx
  __int64 v360; // rsi
  __int64 v361; // rdi
  __m128i v362; // xmm0
  __int64 v363; // rax
  __int64 v364; // r14
  __int64 v365; // r15
  __int64 v366; // rdx
  __int64 v367; // rsi
  __int64 v368; // rdi
  __m128i v369; // xmm0
  __int64 v370; // rax
  __int64 v371; // r14
  __int64 v372; // r15
  __int64 v373; // rdx
  __int64 v374; // rsi
  __int64 v375; // rdi
  __m128i v376; // xmm0
  __int64 v377; // rax
  __int64 v378; // r14
  __int64 v379; // r15
  __int64 v380; // rdx
  __int64 v381; // rsi
  __int64 v382; // rdi
  __m128i v383; // xmm0
  __int64 v384; // rax
  __int64 v386; // rax
  unsigned __int64 v387; // rsi
  __int64 v388; // rax
  __int64 v389; // rax
  __int64 v390; // rax
  __int64 v391; // rax
  __int64 v392; // rax
  __int64 v393; // rax
  __int64 v394; // rax
  __int64 v395; // rax
  __int64 v396; // rax
  __int64 v397; // rax
  __int64 v398; // rax
  __int64 v399; // r12
  __int64 v400; // r14
  __int64 v401; // rdx
  __int64 v402; // rax
  __int64 v403; // rsi
  __m128i v404; // xmm0
  __int64 v405; // rax
  __int64 v406; // r12
  __int64 v407; // r14
  __int64 v408; // rdx
  __int64 v409; // rax
  __int64 v410; // rsi
  __m128i v411; // xmm0
  __int64 v412; // rax
  __int64 v413; // r12
  __int64 v414; // r14
  __int64 v415; // rdx
  __int64 v416; // rax
  __int64 v417; // rsi
  __m128i v418; // xmm0
  __int64 v419; // rax
  __int64 v420; // r12
  __int64 v421; // r14
  __int64 v422; // rdx
  __int64 v423; // rax
  __int64 v424; // rsi
  __m128i v425; // xmm0
  __int64 v426; // rax
  __int64 v427; // r12
  __int64 v428; // r14
  __int64 v429; // rdx
  __int64 v430; // rax
  __int64 v431; // rsi
  __m128i v432; // xmm0
  __int64 v433; // rax
  __int64 v434; // r12
  __int64 v435; // r14
  __int64 v436; // rdx
  __int64 v437; // rax
  __int64 v438; // rsi
  __m128i v439; // xmm0
  __int64 v440; // rax
  __int64 v441; // r12
  __int64 v442; // r14
  __int64 v443; // rdx
  __int64 v444; // rax
  __int64 v445; // rsi
  __m128i v446; // xmm0
  __int64 v447; // rax
  __int64 v448; // r12
  __int64 v449; // r14
  __int64 v450; // rdx
  __int64 v451; // rax
  __int64 v452; // rsi
  __m128i v453; // xmm0
  __int64 v454; // rax
  __int64 v455; // r12
  __int64 v456; // r14
  __int64 v457; // rdx
  __int64 v458; // rax
  __int64 v459; // rsi
  __m128i v460; // xmm0
  __int64 v461; // rax
  __int64 v462; // r12
  __int64 v463; // r14
  __int64 v464; // rdx
  __int64 v465; // rax
  __int64 v466; // rsi
  __m128i v467; // xmm0
  __int64 v468; // rax
  __int64 v469; // rax
  __int64 v470; // rax
  __int64 v471; // rax
  __int64 v472; // rax
  __int64 v473; // rax
  __int64 v474; // rax
  __int64 v475; // rax
  __int64 v476; // rax
  __int64 v477; // rax
  __int64 v478; // rax
  __int64 v479; // rax
  __int64 v480; // rax
  __int64 v481; // rax
  __int64 v482; // rax
  __int64 v483; // rax
  __int64 v484; // rax
  __int64 v485; // rax
  __int64 v486; // rax
  __int64 v487; // rax
  __int64 v488; // rax
  __int64 v489; // rax
  __int64 v490; // rax
  __int64 v491; // rax
  __int64 v492; // rax
  __int64 v493; // rax
  __int64 v494; // rax
  __int64 v495; // rax
  __int64 v496; // rax
  __int64 v497; // rax
  __int64 v498; // rax
  __int64 v499; // rax
  __int64 v500; // rax
  __int64 v501; // rax
  __int64 v502; // rax
  __int64 v503; // rax
  __int64 v504; // rax
  __int64 v505; // rax
  __int64 v506; // rax
  __int64 v507; // rax
  __int64 v508; // rax
  __int64 v509; // rax
  __int64 v510; // rax
  __int64 v511; // rax
  __int64 v512; // rax
  __int64 v513; // rax
  size_t v514; // [rsp+10h] [rbp-68h]
  __int64 v515; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v516; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v517; // [rsp+38h] [rbp-40h]

  v517 = __readfsqword(0x28u);
  v2 = off_3C080;
  v3 = operator new(0x68u);
  *(_QWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 48) = 1;
  *(_QWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 64) = 0;
  *(_QWORD *)(v3 + 8) = a1 + 672;
  *(_QWORD *)(v3 + 40) = v3 + 88;
  *(_DWORD *)(v3 + 72) = 1065353216;
  *(_QWORD *)(v3 + 80) = 0;
  *(_QWORD *)(v3 + 88) = 0;
  *(_QWORD *)(v3 + 96) = 0;
  *(_QWORD *)v3 = &off_38AF0;
  *(_OWORD *)(v3 + 24) = 0;
  if ( off_3C080[0] )
  {
    do
    {
      v5 = *(_QWORD *)(a1 + 704);
      v6 = *(_QWORD *)(a1 + 696);
      if ( *(_QWORD *)(a1 + 712) < (unsigned __int64)(v5 + 1) )
      {
        v15 = qvector_reserve();
        *(_QWORD *)(a1 + 696) = v15;
        v5 = *(_QWORD *)(a1 + 704);
        v6 = v15;
      }
      ++v2;
      v7 = v6 + 24 * v5;
      *(_QWORD *)v7 = 0;
      *(_OWORD *)(v7 + 8) = 0;
      ++*(_QWORD *)(a1 + 704);
      v8 = *(v2 - 1);
      if ( v8 && (v9 = strlen(*(v2 - 1)), (v10 = v9) != 0) )
      {
        v16 = *(void **)v7;
        v17 = v9 + 1;
        if ( *(_QWORD *)(v7 + 16) < v9 + 1 )
        {
          v514 = v9 + 1;
          v389 = qvector_reserve();
          *(_QWORD *)v7 = v389;
          v17 = v514;
          v16 = (void *)v389;
        }
        *(_QWORD *)(v7 + 8) = v17;
        memmove(v16, v8, v10);
        *(_BYTE *)(*(_QWORD *)v7 + v10) = 0;
      }
      else
      {
        *(_QWORD *)(v7 + 8) = 0;
      }
      v11 = *(_QWORD *)v7;
      v388 = *(_QWORD *)(a1 + 728);
      v387 = *(_QWORD *)(a1 + 720);
      v12 = *(_QWORD *)(a1 + 736);
      v516 = v11;
      v13 = v388 + 1;
      if ( (unsigned __int64)&v516 < v387 || (unsigned __int64)&v516 >= v387 + 8 * v12 )
      {
        if ( v12 < v13 )
        {
          v14 = qvector_reserve();
          *(_QWORD *)(a1 + 720) = v14;
          v387 = v14;
          v11 = v516;
          v388 = *(_QWORD *)(a1 + 728);
        }
      }
      else if ( v12 < v13 )
      {
        v386 = qvector_reserve();
        *(_QWORD *)(a1 + 720) = v386;
        v387 = v386;
        v388 = *(_QWORD *)(a1 + 728);
      }
      *(_QWORD *)(v387 + 8 * v388) = v11;
      v4 = *(_QWORD *)(a1 + 728) + 1LL;
      *(_QWORD *)(a1 + 728) = v4;
    }
    while ( *v2 );
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 728);
  }
  v18 = *(_QWORD *)(a1 + 720);
  v19 = v4 + 1;
  v515 = 0;
  v20 = *(_QWORD *)(a1 + 736);
  if ( (unsigned __int64)&v515 >= v18 && (unsigned __int64)&v515 < v18 + 8 * v20 )
  {
    if ( v20 < v19 )
    {
      v513 = qvector_reserve();
      *(_QWORD *)(a1 + 720) = v513;
      v4 = *(_QWORD *)(a1 + 728);
      v18 = v513;
    }
    *(_QWORD *)(v18 + 8 * v4) = 0;
  }
  else
  {
    v21 = 0;
    if ( v20 < v19 )
    {
      v512 = qvector_reserve();
      *(_QWORD *)(a1 + 720) = v512;
      v18 = v512;
      v4 = *(_QWORD *)(a1 + 728);
      v21 = v515;
    }
    *(_QWORD *)(v18 + 8 * v4) = v21;
  }
  ++*(_QWORD *)(a1 + 728);
  v22 = *(_QWORD *)(v3 + 24);
  *(_DWORD *)(a1 + 768) = 1;
  *(_QWORD *)(a1 + 664) = v3;
  v516 = 24;
  *(_QWORD *)sub_14340((char **)(v3 + 40), &v516) = v22;
  v23 = *(_QWORD *)(v3 + 24);
  v24 = *(_QWORD *)(v3 + 16);
  v25 = v23 + 1;
  if ( *(_QWORD *)(v3 + 32) < (unsigned __int64)(v23 + 1) )
  {
    v511 = qvector_reserve();
    v23 = *(_QWORD *)(v3 + 24);
    *(_QWORD *)(v3 + 16) = v511;
    v24 = v511;
    v25 = v23 + 1;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_30200);
  *(_QWORD *)(v3 + 24) = v25;
  v27 = v24 + 40 * v23;
  *(__m128i *)(v27 + 8) = si128;
  *(_OWORD *)(v27 + 24) = 0;
  *(_DWORD *)v27 = 0;
  sub_12580(*(__int64 **)(v3 + 8), off_3BC20, unk_3BC28, unk_3BC2D, unk_3BC2C, unk_3BC30, unk_3BC38);
  v28 = *(_QWORD *)(a1 + 664);
  v516 = 25;
  v29 = *(_QWORD *)(v28 + 24);
  *(_QWORD *)sub_14340((char **)(v28 + 40), &v516) = v29;
  v30 = *(_QWORD *)(v28 + 24);
  v31 = *(_QWORD *)(v28 + 16);
  v32 = v30 + 1;
  if ( *(_QWORD *)(v28 + 32) < (unsigned __int64)(v30 + 1) )
  {
    v510 = qvector_reserve();
    v30 = *(_QWORD *)(v28 + 24);
    *(_QWORD *)(v28 + 16) = v510;
    v31 = v510;
    v32 = v30 + 1;
  }
  v33 = _mm_load_si128((const __m128i *)&xmmword_30210);
  *(_QWORD *)(v28 + 24) = v32;
  v34 = v31 + 40 * v30;
  *(__m128i *)(v34 + 8) = v33;
  *(_DWORD *)v34 = 0;
  *(_OWORD *)(v34 + 24) = 0;
  sub_12580(*(__int64 **)(v28 + 8), off_3BC40, unk_3BC48, unk_3BC4D, unk_3BC4C, unk_3BC50, unk_3BC58);
  v35 = *(_QWORD *)(a1 + 664);
  v516 = 26;
  v36 = *(_QWORD *)(v35 + 24);
  *(_QWORD *)sub_14340((char **)(v35 + 40), &v516) = v36;
  v37 = *(_QWORD *)(v35 + 24);
  v38 = *(_QWORD *)(v35 + 16);
  v39 = v37 + 1;
  if ( *(_QWORD *)(v35 + 32) < (unsigned __int64)(v37 + 1) )
  {
    v509 = qvector_reserve();
    v37 = *(_QWORD *)(v35 + 24);
    *(_QWORD *)(v35 + 16) = v509;
    v38 = v509;
    v39 = v37 + 1;
  }
  v40 = _mm_load_si128((const __m128i *)&xmmword_30220);
  *(_QWORD *)(v35 + 24) = v39;
  v41 = v38 + 40 * v37;
  *(__m128i *)(v41 + 8) = v40;
  *(_DWORD *)v41 = 0;
  *(_OWORD *)(v41 + 24) = 0;
  sub_12580(*(__int64 **)(v35 + 8), off_3BC60, unk_3BC68, unk_3BC6D, unk_3BC6C, unk_3BC70, unk_3BC78);
  v42 = *(_QWORD *)(a1 + 664);
  v516 = 27;
  v43 = *(_QWORD *)(v42 + 24);
  *(_QWORD *)sub_14340((char **)(v42 + 40), &v516) = v43;
  v44 = *(_QWORD *)(v42 + 24);
  v45 = *(_QWORD *)(v42 + 16);
  v46 = v44 + 1;
  if ( *(_QWORD *)(v42 + 32) < (unsigned __int64)(v44 + 1) )
  {
    v508 = qvector_reserve();
    v44 = *(_QWORD *)(v42 + 24);
    *(_QWORD *)(v42 + 16) = v508;
    v45 = v508;
    v46 = v44 + 1;
  }
  v47 = _mm_load_si128((const __m128i *)&xmmword_30230);
  *(_QWORD *)(v42 + 24) = v46;
  v48 = v45 + 40 * v44;
  *(__m128i *)(v48 + 8) = v47;
  *(_DWORD *)v48 = 0;
  *(_OWORD *)(v48 + 24) = 0;
  sub_12580(*(__int64 **)(v42 + 8), off_3BC80, unk_3BC88, unk_3BC8D, unk_3BC8C, unk_3BC90, unk_3BC98);
  v49 = *(_QWORD *)(a1 + 664);
  v516 = 28;
  v50 = *(_QWORD *)(v49 + 24);
  *(_QWORD *)sub_14340((char **)(v49 + 40), &v516) = v50;
  v51 = *(_QWORD *)(v49 + 24);
  v52 = *(_QWORD *)(v49 + 16);
  v53 = v51 + 1;
  if ( *(_QWORD *)(v49 + 32) < (unsigned __int64)(v51 + 1) )
  {
    v507 = qvector_reserve();
    v51 = *(_QWORD *)(v49 + 24);
    *(_QWORD *)(v49 + 16) = v507;
    v52 = v507;
    v53 = v51 + 1;
  }
  v54 = _mm_load_si128((const __m128i *)&xmmword_30240);
  *(_QWORD *)(v49 + 24) = v53;
  v55 = v52 + 40 * v51;
  *(__m128i *)(v55 + 8) = v54;
  *(_DWORD *)v55 = 0;
  *(_OWORD *)(v55 + 24) = 0;
  sub_12580(*(__int64 **)(v49 + 8), off_3BCA0, unk_3BCA8, unk_3BCAD, unk_3BCAC, unk_3BCB0, unk_3BCB8);
  v56 = *(_QWORD *)(a1 + 664);
  v516 = 29;
  v57 = *(_QWORD *)(v56 + 24);
  *(_QWORD *)sub_14340((char **)(v56 + 40), &v516) = v57;
  v58 = *(_QWORD *)(v56 + 24);
  v59 = *(_QWORD *)(v56 + 16);
  v60 = v58 + 1;
  if ( *(_QWORD *)(v56 + 32) < (unsigned __int64)(v58 + 1) )
  {
    v506 = qvector_reserve();
    v58 = *(_QWORD *)(v56 + 24);
    *(_QWORD *)(v56 + 16) = v506;
    v59 = v506;
    v60 = v58 + 1;
  }
  v61 = _mm_load_si128((const __m128i *)&xmmword_30250);
  *(_QWORD *)(v56 + 24) = v60;
  v62 = v59 + 40 * v58;
  *(__m128i *)(v62 + 8) = v61;
  *(_OWORD *)(v62 + 24) = 0;
  *(_DWORD *)v62 = 0;
  sub_12580(*(__int64 **)(v56 + 8), off_3BCC0, unk_3BCC8, unk_3BCCD, unk_3BCCC, unk_3BCD0, unk_3BCD8);
  v63 = *(_QWORD *)(a1 + 664);
  v516 = 30;
  v64 = *(_QWORD *)(v63 + 24);
  *(_QWORD *)sub_14340((char **)(v63 + 40), &v516) = v64;
  v65 = *(_QWORD *)(v63 + 24);
  v66 = *(_QWORD *)(v63 + 16);
  v67 = v65 + 1;
  if ( *(_QWORD *)(v63 + 32) < (unsigned __int64)(v65 + 1) )
  {
    v505 = qvector_reserve();
    v65 = *(_QWORD *)(v63 + 24);
    *(_QWORD *)(v63 + 16) = v505;
    v66 = v505;
    v67 = v65 + 1;
  }
  v68 = _mm_load_si128((const __m128i *)&xmmword_30260);
  *(_QWORD *)(v63 + 24) = v67;
  v69 = v66 + 40 * v65;
  *(__m128i *)(v69 + 8) = v68;
  *(_DWORD *)v69 = 0;
  *(_OWORD *)(v69 + 24) = 0;
  sub_12580(*(__int64 **)(v63 + 8), off_3BCE0, unk_3BCE8, unk_3BCED, unk_3BCEC, unk_3BCF0, unk_3BCF8);
  v70 = *(_QWORD *)(a1 + 664);
  v516 = 31;
  v71 = *(_QWORD *)(v70 + 24);
  *(_QWORD *)sub_14340((char **)(v70 + 40), &v516) = v71;
  v72 = *(_QWORD *)(v70 + 24);
  v73 = *(_QWORD *)(v70 + 16);
  v74 = v72 + 1;
  if ( *(_QWORD *)(v70 + 32) < (unsigned __int64)(v72 + 1) )
  {
    v504 = qvector_reserve();
    v72 = *(_QWORD *)(v70 + 24);
    *(_QWORD *)(v70 + 16) = v504;
    v73 = v504;
    v74 = v72 + 1;
  }
  v75 = _mm_load_si128((const __m128i *)&xmmword_30270);
  *(_QWORD *)(v70 + 24) = v74;
  v76 = v73 + 40 * v72;
  *(__m128i *)(v76 + 8) = v75;
  *(_DWORD *)v76 = 0;
  *(_OWORD *)(v76 + 24) = 0;
  sub_12580(*(__int64 **)(v70 + 8), off_3BD00, unk_3BD08, unk_3BD0D, unk_3BD0C, unk_3BD10, unk_3BD18);
  v77 = *(_QWORD *)(a1 + 664);
  v516 = 32;
  v78 = *(_QWORD *)(v77 + 24);
  *(_QWORD *)sub_14340((char **)(v77 + 40), &v516) = v78;
  v79 = *(_QWORD *)(v77 + 24);
  v80 = *(_QWORD *)(v77 + 16);
  v81 = v79 + 1;
  if ( *(_QWORD *)(v77 + 32) < (unsigned __int64)(v79 + 1) )
  {
    v503 = qvector_reserve();
    v79 = *(_QWORD *)(v77 + 24);
    *(_QWORD *)(v77 + 16) = v503;
    v80 = v503;
    v81 = v79 + 1;
  }
  v82 = _mm_load_si128((const __m128i *)&xmmword_30280);
  *(_QWORD *)(v77 + 24) = v81;
  v83 = v80 + 40 * v79;
  *(__m128i *)(v83 + 8) = v82;
  *(_DWORD *)v83 = 0;
  *(_OWORD *)(v83 + 24) = 0;
  sub_12580(*(__int64 **)(v77 + 8), off_3BC00, unk_3BC08, unk_3BC0D, unk_3BC0C, (__int64)off_3BC10, unk_3BC18);
  v84 = *(_QWORD *)(a1 + 664);
  v516 = 33;
  v85 = *(_QWORD *)(v84 + 24);
  *(_QWORD *)sub_14340((char **)(v84 + 40), &v516) = v85;
  v86 = *(_QWORD *)(v84 + 24);
  v87 = *(_QWORD *)(v84 + 16);
  v88 = v86 + 1;
  if ( *(_QWORD *)(v84 + 32) < (unsigned __int64)(v86 + 1) )
  {
    v502 = qvector_reserve();
    v86 = *(_QWORD *)(v84 + 24);
    *(_QWORD *)(v84 + 16) = v502;
    v87 = v502;
    v88 = v86 + 1;
  }
  v89 = _mm_load_si128((const __m128i *)&xmmword_30290);
  *(_QWORD *)(v84 + 24) = v88;
  v90 = v87 + 40 * v86;
  *(__m128i *)(v90 + 8) = v89;
  *(_DWORD *)v90 = 0;
  *(_OWORD *)(v90 + 24) = 0;
  sub_12580(*(__int64 **)(v84 + 8), off_3BBE0, unk_3BBE8, unk_3BBED, unk_3BBEC, (__int64)off_3BBF0, unk_3BBF8);
  v91 = *(_QWORD *)(a1 + 664);
  v516 = 34;
  v92 = *(_QWORD *)(v91 + 24);
  *(_QWORD *)sub_14340((char **)(v91 + 40), &v516) = v92;
  v93 = *(_QWORD *)(v91 + 24);
  v94 = *(_QWORD *)(v91 + 16);
  v95 = v93 + 1;
  if ( *(_QWORD *)(v91 + 32) < (unsigned __int64)(v93 + 1) )
  {
    v501 = qvector_reserve();
    v93 = *(_QWORD *)(v91 + 24);
    *(_QWORD *)(v91 + 16) = v501;
    v94 = v501;
    v95 = v93 + 1;
  }
  v96 = _mm_load_si128((const __m128i *)&xmmword_302A0);
  *(_QWORD *)(v91 + 24) = v95;
  v97 = v94 + 40 * v93;
  *(__m128i *)(v97 + 8) = v96;
  *(_DWORD *)v97 = 0;
  *(_OWORD *)(v97 + 24) = 0;
  sub_12580(*(__int64 **)(v91 + 8), off_3BBC0, unk_3BBC8, unk_3BBCD, unk_3BBCC, (__int64)off_3BBD0, unk_3BBD8);
  v98 = *(_QWORD *)(a1 + 664);
  v516 = 0;
  v99 = *(_QWORD *)(v98 + 24);
  *(_QWORD *)sub_14340((char **)(v98 + 40), &v516) = v99;
  v100 = *(_QWORD *)(v98 + 24);
  v101 = *(_QWORD *)(v98 + 16);
  v102 = v100 + 1;
  if ( *(_QWORD *)(v98 + 32) < (unsigned __int64)(v100 + 1) )
  {
    v500 = qvector_reserve();
    v100 = *(_QWORD *)(v98 + 24);
    *(_QWORD *)(v98 + 16) = v500;
    v101 = v500;
    v102 = v100 + 1;
  }
  *(_QWORD *)(v98 + 24) = v102;
  v103 = v101 + 40 * v100;
  *(_OWORD *)(v103 + 8) = 0;
  *(_DWORD *)v103 = 0;
  *(_OWORD *)(v103 + 24) = 0;
  sub_12580(*(__int64 **)(v98 + 8), off_3BBA0, unk_3BBA8, unk_3BBAD, unk_3BBAC, unk_3BBB0, unk_3BBB8);
  v104 = *(_QWORD *)(a1 + 664);
  *(_DWORD *)(a1 + 932) = v99;
  v516 = 1;
  v105 = *(_QWORD *)(v104 + 24);
  *(_QWORD *)sub_14340((char **)(v104 + 40), &v516) = v105;
  v106 = *(_QWORD *)(v104 + 24);
  v107 = *(_QWORD *)(v104 + 16);
  v108 = v106 + 1;
  if ( *(_QWORD *)(v104 + 32) < (unsigned __int64)(v106 + 1) )
  {
    v499 = qvector_reserve();
    v106 = *(_QWORD *)(v104 + 24);
    *(_QWORD *)(v104 + 16) = v499;
    v107 = v499;
    v108 = v106 + 1;
  }
  v109 = _mm_load_si128((const __m128i *)&xmmword_302B0);
  *(_QWORD *)(v104 + 24) = v108;
  v110 = v107 + 40 * v106;
  *(__m128i *)(v110 + 8) = v109;
  *(_DWORD *)v110 = 0;
  *(_OWORD *)(v110 + 24) = 0;
  sub_12580(*(__int64 **)(v104 + 8), off_3BB80, unk_3BB88, unk_3BB8D, unk_3BB8C, unk_3BB90, unk_3BB98);
  v111 = *(_QWORD *)(a1 + 664);
  *(_DWORD *)(a1 + 936) = v105;
  v516 = 2;
  v112 = *(_QWORD *)(v111 + 24);
  *(_QWORD *)sub_14340((char **)(v111 + 40), &v516) = v112;
  v113 = *(_QWORD *)(v111 + 24);
  v114 = *(_QWORD *)(v111 + 16);
  v115 = v113 + 1;
  if ( *(_QWORD *)(v111 + 32) < (unsigned __int64)(v113 + 1) )
  {
    v498 = qvector_reserve();
    v113 = *(_QWORD *)(v111 + 24);
    *(_QWORD *)(v111 + 16) = v498;
    v114 = v498;
    v115 = v113 + 1;
  }
  v116 = _mm_load_si128((const __m128i *)&xmmword_302C0);
  *(_QWORD *)(v111 + 24) = v115;
  v117 = v114 + 40 * v113;
  *(__m128i *)(v117 + 8) = v116;
  *(_DWORD *)v117 = 0;
  *(_OWORD *)(v117 + 24) = 0;
  sub_12580(*(__int64 **)(v111 + 8), off_3BB60, unk_3BB68, unk_3BB6D, unk_3BB6C, unk_3BB70, unk_3BB78);
  v118 = *(_QWORD *)(a1 + 664);
  *(_DWORD *)(a1 + 940) = v112;
  v516 = 3;
  v119 = *(_QWORD *)(v118 + 24);
  *(_QWORD *)sub_14340((char **)(v118 + 40), &v516) = v119;
  v120 = *(_QWORD *)(v118 + 24);
  v121 = *(_QWORD *)(v118 + 16);
  v122 = v120 + 1;
  if ( *(_QWORD *)(v118 + 32) < (unsigned __int64)(v120 + 1) )
  {
    v497 = qvector_reserve();
    v120 = *(_QWORD *)(v118 + 24);
    *(_QWORD *)(v118 + 16) = v497;
    v121 = v497;
    v122 = v120 + 1;
  }
  v123 = _mm_load_si128((const __m128i *)&xmmword_302D0);
  *(_QWORD *)(v118 + 24) = v122;
  v124 = v121 + 40 * v120;
  *(__m128i *)(v124 + 8) = v123;
  *(_DWORD *)v124 = 0;
  *(_OWORD *)(v124 + 24) = 0;
  sub_12580(*(__int64 **)(v118 + 8), off_3BB40, unk_3BB48, unk_3BB4D, unk_3BB4C, unk_3BB50, unk_3BB58);
  v125 = *(_QWORD *)(a1 + 664);
  *(_DWORD *)(a1 + 924) = v119;
  v516 = 4;
  v126 = *(_QWORD *)(v125 + 24);
  *(_QWORD *)sub_14340((char **)(v125 + 40), &v516) = v126;
  v127 = *(_QWORD *)(v125 + 24);
  v128 = *(_QWORD *)(v125 + 16);
  v129 = v127 + 1;
  if ( *(_QWORD *)(v125 + 32) < (unsigned __int64)(v127 + 1) )
  {
    v485 = qvector_reserve();
    v127 = *(_QWORD *)(v125 + 24);
    *(_QWORD *)(v125 + 16) = v485;
    v128 = v485;
    v129 = v127 + 1;
  }
  v130 = _mm_load_si128((const __m128i *)&xmmword_302E0);
  *(_QWORD *)(v125 + 24) = v129;
  v131 = v128 + 40 * v127;
  *(__m128i *)(v131 + 8) = v130;
  *(_DWORD *)v131 = 0;
  *(_OWORD *)(v131 + 24) = 0;
  sub_12580(*(__int64 **)(v125 + 8), off_3BB20, unk_3BB28, unk_3BB2D, unk_3BB2C, unk_3BB30, unk_3BB38);
  v132 = *(_QWORD *)(a1 + 664);
  *(_DWORD *)(a1 + 928) = v126;
  v516 = 5;
  v133 = *(_QWORD *)(v132 + 24);
  *(_QWORD *)sub_14340((char **)(v132 + 40), &v516) = v133;
  v134 = *(_QWORD *)(v132 + 24);
  v135 = *(_QWORD *)(v132 + 16);
  v136 = v134 + 1;
  if ( *(_QWORD *)(v132 + 32) < (unsigned __int64)(v134 + 1) )
  {
    v484 = qvector_reserve();
    v134 = *(_QWORD *)(v132 + 24);
    *(_QWORD *)(v132 + 16) = v484;
    v135 = v484;
    v136 = v134 + 1;
  }
  v137 = _mm_load_si128((const __m128i *)&xmmword_302F0);
  *(_QWORD *)(v132 + 24) = v136;
  v138 = v135 + 40 * v134;
  *(__m128i *)(v138 + 8) = v137;
  *(_DWORD *)v138 = 0;
  *(_OWORD *)(v138 + 24) = 0;
  sub_12580(*(__int64 **)(v132 + 8), off_3BB00, unk_3BB08, unk_3BB0D, unk_3BB0C, unk_3BB10, unk_3BB18);
  *(_DWORD *)(a1 + 944) = v133;
  v139 = *(_DWORD *)(a1 + 276);
  v140 = *(_QWORD *)(a1 + 664);
  if ( v139 == 8 )
  {
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3C060, 6u);
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3C040, 7u);
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3C020, 8u);
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3C000, 9u);
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3BFE0, 0xAu);
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3BFC0, 0xBu);
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3BFA0, 0xCu);
    v399 = *(_QWORD *)(a1 + 664);
    v516 = 13;
    v400 = *(_QWORD *)(v399 + 24);
    *(_QWORD *)sub_14340((char **)(v399 + 40), &v516) = v400;
    v401 = *(_QWORD *)(v399 + 24);
    v402 = *(_QWORD *)(v399 + 16);
    v403 = v401 + 1;
    if ( *(_QWORD *)(v399 + 32) < (unsigned __int64)(v401 + 1) )
    {
      v402 = qvector_reserve();
      v401 = *(_QWORD *)(v399 + 24);
      *(_QWORD *)(v399 + 16) = v402;
      v403 = v401 + 1;
    }
    v404 = _mm_load_si128((const __m128i *)&xmmword_30300);
    *(_QWORD *)(v399 + 24) = v403;
    v405 = v402 + 40 * v401;
    *(__m128i *)(v405 + 8) = v404;
    *(_DWORD *)v405 = 0;
    *(_OWORD *)(v405 + 24) = 0;
    sub_12580(
      *(__int64 **)(v399 + 8),
      off_3BF80,
      unk_3BF88,
      unk_3BF8D,
      unk_3BF8C,
      xmmword_3BF90,
      *((__int64 *)&xmmword_3BF90 + 1));
    v406 = *(_QWORD *)(a1 + 664);
    *(_DWORD *)(a1 + 780) = v400;
    v516 = 14;
    v407 = *(_QWORD *)(v406 + 24);
    *(_QWORD *)sub_14340((char **)(v406 + 40), &v516) = v407;
    v408 = *(_QWORD *)(v406 + 24);
    v409 = *(_QWORD *)(v406 + 16);
    v410 = v408 + 1;
    if ( *(_QWORD *)(v406 + 32) < (unsigned __int64)(v408 + 1) )
    {
      v409 = qvector_reserve();
      v408 = *(_QWORD *)(v406 + 24);
      *(_QWORD *)(v406 + 16) = v409;
      v410 = v408 + 1;
    }
    v411 = _mm_load_si128((const __m128i *)&xmmword_30310);
    *(_QWORD *)(v406 + 24) = v410;
    v412 = v409 + 40 * v408;
    *(__m128i *)(v412 + 8) = v411;
    *(_DWORD *)v412 = 0;
    *(_OWORD *)(v412 + 24) = 0;
    sub_12580(
      *(__int64 **)(v406 + 8),
      off_3BF60,
      unk_3BF68,
      unk_3BF6D,
      unk_3BF6C,
      xmmword_3BF70,
      *((__int64 *)&xmmword_3BF70 + 1));
    v413 = *(_QWORD *)(a1 + 664);
    *(_DWORD *)(a1 + 784) = v407;
    v516 = 16;
    v414 = *(_QWORD *)(v413 + 24);
    *(_QWORD *)sub_14340((char **)(v413 + 40), &v516) = v414;
    v415 = *(_QWORD *)(v413 + 24);
    v416 = *(_QWORD *)(v413 + 16);
    v417 = v415 + 1;
    if ( *(_QWORD *)(v413 + 32) < (unsigned __int64)(v415 + 1) )
    {
      v416 = qvector_reserve();
      v415 = *(_QWORD *)(v413 + 24);
      *(_QWORD *)(v413 + 16) = v416;
      v417 = v415 + 1;
    }
    v418 = _mm_load_si128((const __m128i *)&xmmword_30320);
    *(_QWORD *)(v413 + 24) = v417;
    v419 = v416 + 40 * v415;
    *(__m128i *)(v419 + 8) = v418;
    *(_DWORD *)v419 = 0;
    *(_OWORD *)(v419 + 24) = 0;
    sub_12580(
      *(__int64 **)(v413 + 8),
      off_3BF40,
      unk_3BF48,
      unk_3BF4D,
      unk_3BF4C,
      xmmword_3BF50,
      *((__int64 *)&xmmword_3BF50 + 1));
    v420 = *(_QWORD *)(a1 + 664);
    v516 = 17;
    v421 = *(_QWORD *)(v420 + 24);
    *(_QWORD *)sub_14340((char **)(v420 + 40), &v516) = v421;
    v422 = *(_QWORD *)(v420 + 24);
    v423 = *(_QWORD *)(v420 + 16);
    v424 = v422 + 1;
    if ( *(_QWORD *)(v420 + 32) < (unsigned __int64)(v422 + 1) )
    {
      v423 = qvector_reserve();
      v422 = *(_QWORD *)(v420 + 24);
      *(_QWORD *)(v420 + 16) = v423;
      v424 = v422 + 1;
    }
    v425 = _mm_load_si128((const __m128i *)&xmmword_30330);
    *(_QWORD *)(v420 + 24) = v424;
    v426 = v423 + 40 * v422;
    *(__m128i *)(v426 + 8) = v425;
    *(_DWORD *)v426 = 0;
    *(_OWORD *)(v426 + 24) = 0;
    sub_12580(
      *(__int64 **)(v420 + 8),
      off_3BF20,
      unk_3BF28,
      unk_3BF2D,
      unk_3BF2C,
      xmmword_3BF30,
      *((__int64 *)&xmmword_3BF30 + 1));
    v427 = *(_QWORD *)(a1 + 664);
    v516 = 18;
    v428 = *(_QWORD *)(v427 + 24);
    *(_QWORD *)sub_14340((char **)(v427 + 40), &v516) = v428;
    v429 = *(_QWORD *)(v427 + 24);
    v430 = *(_QWORD *)(v427 + 16);
    v431 = v429 + 1;
    if ( *(_QWORD *)(v427 + 32) < (unsigned __int64)(v429 + 1) )
    {
      v430 = qvector_reserve();
      v429 = *(_QWORD *)(v427 + 24);
      *(_QWORD *)(v427 + 16) = v430;
      v431 = v429 + 1;
    }
    v432 = _mm_load_si128((const __m128i *)&xmmword_30340);
    *(_QWORD *)(v427 + 24) = v431;
    v433 = v430 + 40 * v429;
    *(__m128i *)(v433 + 8) = v432;
    *(_DWORD *)v433 = 0;
    *(_OWORD *)(v433 + 24) = 0;
    sub_12580(
      *(__int64 **)(v427 + 8),
      off_3BF00,
      unk_3BF08,
      unk_3BF0D,
      unk_3BF0C,
      xmmword_3BF10,
      *((__int64 *)&xmmword_3BF10 + 1));
    v434 = *(_QWORD *)(a1 + 664);
    v516 = 19;
    v435 = *(_QWORD *)(v434 + 24);
    *(_QWORD *)sub_14340((char **)(v434 + 40), &v516) = v435;
    v436 = *(_QWORD *)(v434 + 24);
    v437 = *(_QWORD *)(v434 + 16);
    v438 = v436 + 1;
    if ( *(_QWORD *)(v434 + 32) < (unsigned __int64)(v436 + 1) )
    {
      v437 = qvector_reserve();
      v436 = *(_QWORD *)(v434 + 24);
      *(_QWORD *)(v434 + 16) = v437;
      v438 = v436 + 1;
    }
    v439 = _mm_load_si128((const __m128i *)&xmmword_30350);
    *(_QWORD *)(v434 + 24) = v438;
    v440 = v437 + 40 * v436;
    *(__m128i *)(v440 + 8) = v439;
    *(_DWORD *)v440 = 0;
    *(_OWORD *)(v440 + 24) = 0;
    sub_12580(
      *(__int64 **)(v434 + 8),
      off_3BEE0,
      unk_3BEE8,
      unk_3BEED,
      unk_3BEEC,
      xmmword_3BEF0,
      *((__int64 *)&xmmword_3BEF0 + 1));
    v441 = *(_QWORD *)(a1 + 664);
    v516 = 20;
    v442 = *(_QWORD *)(v441 + 24);
    *(_QWORD *)sub_14340((char **)(v441 + 40), &v516) = v442;
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
    v446 = _mm_load_si128((const __m128i *)&xmmword_30360);
    *(_QWORD *)(v441 + 24) = v445;
    v447 = v444 + 40 * v443;
    *(__m128i *)(v447 + 8) = v446;
    *(_DWORD *)v447 = 0;
    *(_OWORD *)(v447 + 24) = 0;
    sub_12580(
      *(__int64 **)(v441 + 8),
      off_3BEC0,
      unk_3BEC8,
      unk_3BECD,
      unk_3BECC,
      xmmword_3BED0,
      *((__int64 *)&xmmword_3BED0 + 1));
    v448 = *(_QWORD *)(a1 + 664);
    v516 = 21;
    v449 = *(_QWORD *)(v448 + 24);
    *(_QWORD *)sub_14340((char **)(v448 + 40), &v516) = v449;
    v450 = *(_QWORD *)(v448 + 24);
    v451 = *(_QWORD *)(v448 + 16);
    v452 = v450 + 1;
    if ( *(_QWORD *)(v448 + 32) < (unsigned __int64)(v450 + 1) )
    {
      v451 = qvector_reserve();
      v450 = *(_QWORD *)(v448 + 24);
      *(_QWORD *)(v448 + 16) = v451;
      v452 = v450 + 1;
    }
    v453 = _mm_load_si128((const __m128i *)&xmmword_30370);
    *(_QWORD *)(v448 + 24) = v452;
    v454 = v451 + 40 * v450;
    *(__m128i *)(v454 + 8) = v453;
    *(_DWORD *)v454 = 0;
    *(_OWORD *)(v454 + 24) = 0;
    sub_12580(
      *(__int64 **)(v448 + 8),
      off_3BEA0,
      unk_3BEA8,
      unk_3BEAD,
      unk_3BEAC,
      xmmword_3BEB0,
      *((__int64 *)&xmmword_3BEB0 + 1));
    v455 = *(_QWORD *)(a1 + 664);
    v516 = 22;
    v456 = *(_QWORD *)(v455 + 24);
    *(_QWORD *)sub_14340((char **)(v455 + 40), &v516) = v456;
    v457 = *(_QWORD *)(v455 + 24);
    v458 = *(_QWORD *)(v455 + 16);
    v459 = v457 + 1;
    if ( *(_QWORD *)(v455 + 32) < (unsigned __int64)(v457 + 1) )
    {
      v458 = qvector_reserve();
      v457 = *(_QWORD *)(v455 + 24);
      *(_QWORD *)(v455 + 16) = v458;
      v459 = v457 + 1;
    }
    v460 = _mm_load_si128((const __m128i *)&xmmword_30380);
    *(_QWORD *)(v455 + 24) = v459;
    v461 = v458 + 40 * v457;
    *(__m128i *)(v461 + 8) = v460;
    *(_DWORD *)v461 = 0;
    *(_OWORD *)(v461 + 24) = 0;
    sub_12580(
      *(__int64 **)(v455 + 8),
      off_3BE80,
      unk_3BE88,
      unk_3BE8D,
      unk_3BE8C,
      xmmword_3BE90,
      *((__int64 *)&xmmword_3BE90 + 1));
    v462 = *(_QWORD *)(a1 + 664);
    v516 = 23;
    v463 = *(_QWORD *)(v462 + 24);
    *(_QWORD *)sub_14340((char **)(v462 + 40), &v516) = v463;
    v464 = *(_QWORD *)(v462 + 24);
    v465 = *(_QWORD *)(v462 + 16);
    v466 = v464 + 1;
    if ( *(_QWORD *)(v462 + 32) < (unsigned __int64)(v464 + 1) )
    {
      v465 = qvector_reserve();
      v464 = *(_QWORD *)(v462 + 24);
      *(_QWORD *)(v462 + 16) = v465;
      v466 = v464 + 1;
    }
    v467 = _mm_load_si128((const __m128i *)&xmmword_30390);
    *(_QWORD *)(v462 + 24) = v466;
    v468 = v465 + 40 * v464;
    *(__m128i *)(v468 + 8) = v467;
    *(_DWORD *)v468 = 0;
    *(_OWORD *)(v468 + 24) = 0;
    sub_12580(
      *(__int64 **)(v462 + 8),
      off_3BE60,
      unk_3BE68,
      unk_3BE6D,
      unk_3BE6C,
      xmmword_3BE70,
      *((__int64 *)&xmmword_3BE70 + 1));
  }
  else
  {
    v516 = 6;
    v141 = *(_QWORD *)(v140 + 24);
    *(_QWORD *)sub_14340((char **)(v140 + 40), &v516) = v141;
    v142 = *(_QWORD *)(v140 + 24);
    v143 = *(_QWORD *)(v140 + 16);
    v144 = v142 + 1;
    if ( *(_QWORD *)(v140 + 32) < (unsigned __int64)(v142 + 1) )
    {
      v395 = qvector_reserve();
      v142 = *(_QWORD *)(v140 + 24);
      *(_QWORD *)(v140 + 16) = v395;
      v143 = v395;
      v144 = v142 + 1;
    }
    v145 = _mm_load_si128((const __m128i *)&xmmword_303A0);
    *(_QWORD *)(v140 + 24) = v144;
    v146 = v143 + 40 * v142;
    *(__m128i *)(v146 + 8) = v145;
    *(_DWORD *)v146 = 0;
    *(_OWORD *)(v146 + 24) = 0;
    sub_12580(
      *(__int64 **)(v140 + 8),
      off_3BE40,
      unk_3BE48,
      unk_3BE4D,
      unk_3BE4C,
      xmmword_3BE50,
      *((__int64 *)&xmmword_3BE50 + 1));
    v147 = *(_QWORD *)(a1 + 664);
    v516 = 7;
    v148 = *(_QWORD *)(v147 + 24);
    *(_QWORD *)sub_14340((char **)(v147 + 40), &v516) = v148;
    v149 = *(_QWORD *)(v147 + 24);
    v150 = *(_QWORD *)(v147 + 16);
    v151 = v149 + 1;
    if ( *(_QWORD *)(v147 + 32) < (unsigned __int64)(v149 + 1) )
    {
      v394 = qvector_reserve();
      v149 = *(_QWORD *)(v147 + 24);
      *(_QWORD *)(v147 + 16) = v394;
      v150 = v394;
      v151 = v149 + 1;
    }
    v152 = _mm_load_si128((const __m128i *)&xmmword_303B0);
    *(_QWORD *)(v147 + 24) = v151;
    v153 = v150 + 40 * v149;
    *(__m128i *)(v153 + 8) = v152;
    *(_DWORD *)v153 = 0;
    *(_OWORD *)(v153 + 24) = 0;
    sub_12580(
      *(__int64 **)(v147 + 8),
      off_3BE20,
      unk_3BE28,
      unk_3BE2D,
      unk_3BE2C,
      xmmword_3BE30,
      *((__int64 *)&xmmword_3BE30 + 1));
    v154 = *(_QWORD *)(a1 + 664);
    v516 = 8;
    v155 = *(_QWORD *)(v154 + 24);
    *(_QWORD *)sub_14340((char **)(v154 + 40), &v516) = v155;
    v156 = *(_QWORD *)(v154 + 24);
    v157 = *(_QWORD *)(v154 + 16);
    v158 = v156 + 1;
    if ( *(_QWORD *)(v154 + 32) < (unsigned __int64)(v156 + 1) )
    {
      v393 = qvector_reserve();
      v156 = *(_QWORD *)(v154 + 24);
      *(_QWORD *)(v154 + 16) = v393;
      v157 = v393;
      v158 = v156 + 1;
    }
    v159 = _mm_load_si128((const __m128i *)&xmmword_303C0);
    *(_QWORD *)(v154 + 24) = v158;
    v160 = v157 + 40 * v156;
    *(__m128i *)(v160 + 8) = v159;
    *(_DWORD *)v160 = 0;
    *(_OWORD *)(v160 + 24) = 0;
    sub_12580(
      *(__int64 **)(v154 + 8),
      off_3BE00,
      unk_3BE08,
      unk_3BE0D,
      unk_3BE0C,
      xmmword_3BE10,
      *((__int64 *)&xmmword_3BE10 + 1));
    v161 = *(_QWORD *)(a1 + 664);
    v516 = 9;
    v162 = *(_QWORD *)(v161 + 24);
    *(_QWORD *)sub_14340((char **)(v161 + 40), &v516) = v162;
    v163 = *(_QWORD *)(v161 + 24);
    v164 = *(_QWORD *)(v161 + 16);
    v165 = v163 + 1;
    if ( *(_QWORD *)(v161 + 32) < (unsigned __int64)(v163 + 1) )
    {
      v392 = qvector_reserve();
      v163 = *(_QWORD *)(v161 + 24);
      *(_QWORD *)(v161 + 16) = v392;
      v164 = v392;
      v165 = v163 + 1;
    }
    v166 = _mm_load_si128((const __m128i *)&xmmword_303D0);
    *(_QWORD *)(v161 + 24) = v165;
    v167 = v164 + 40 * v163;
    *(__m128i *)(v167 + 8) = v166;
    *(_DWORD *)v167 = 0;
    *(_OWORD *)(v167 + 24) = 0;
    sub_12580(
      *(__int64 **)(v161 + 8),
      off_3BDE0,
      unk_3BDE8,
      unk_3BDED,
      unk_3BDEC,
      xmmword_3BDF0,
      *((__int64 *)&xmmword_3BDF0 + 1));
    v168 = *(_QWORD *)(a1 + 664);
    v516 = 10;
    v169 = *(_QWORD *)(v168 + 24);
    *(_QWORD *)sub_14340((char **)(v168 + 40), &v516) = v169;
    v170 = *(_QWORD *)(v168 + 24);
    v171 = *(_QWORD *)(v168 + 16);
    v172 = v170 + 1;
    if ( *(_QWORD *)(v168 + 32) < (unsigned __int64)(v170 + 1) )
    {
      v391 = qvector_reserve();
      v170 = *(_QWORD *)(v168 + 24);
      *(_QWORD *)(v168 + 16) = v391;
      v171 = v391;
      v172 = v170 + 1;
    }
    v173 = _mm_load_si128((const __m128i *)&xmmword_303E0);
    *(_QWORD *)(v168 + 24) = v172;
    v174 = v171 + 40 * v170;
    *(__m128i *)(v174 + 8) = v173;
    *(_DWORD *)v174 = 0;
    *(_OWORD *)(v174 + 24) = 0;
    sub_12580(
      *(__int64 **)(v168 + 8),
      off_3BDC0,
      unk_3BDC8,
      unk_3BDCD,
      unk_3BDCC,
      xmmword_3BDD0,
      *((__int64 *)&xmmword_3BDD0 + 1));
    v175 = *(_QWORD *)(a1 + 664);
    v516 = 11;
    v176 = *(_QWORD *)(v175 + 24);
    *(_QWORD *)sub_14340((char **)(v175 + 40), &v516) = v176;
    v177 = *(_QWORD *)(v175 + 24);
    v178 = *(_QWORD *)(v175 + 16);
    v179 = v177 + 1;
    if ( *(_QWORD *)(v175 + 32) < (unsigned __int64)(v177 + 1) )
    {
      v397 = qvector_reserve();
      v177 = *(_QWORD *)(v175 + 24);
      *(_QWORD *)(v175 + 16) = v397;
      v178 = v397;
      v179 = v177 + 1;
    }
    v180 = _mm_load_si128((const __m128i *)&xmmword_303F0);
    *(_QWORD *)(v175 + 24) = v179;
    v181 = v178 + 40 * v177;
    *(__m128i *)(v181 + 8) = v180;
    *(_DWORD *)v181 = 0;
    *(_OWORD *)(v181 + 24) = 0;
    sub_12580(
      *(__int64 **)(v175 + 8),
      off_3BDA0,
      unk_3BDA8,
      unk_3BDAD,
      unk_3BDAC,
      xmmword_3BDB0,
      *((__int64 *)&xmmword_3BDB0 + 1));
    v182 = *(_QWORD *)(a1 + 664);
    v516 = 12;
    v183 = *(_QWORD *)(v182 + 24);
    *(_QWORD *)sub_14340((char **)(v182 + 40), &v516) = v183;
    v184 = *(_QWORD *)(v182 + 24);
    v185 = *(_QWORD *)(v182 + 16);
    v186 = v184 + 1;
    if ( *(_QWORD *)(v182 + 32) < (unsigned __int64)(v184 + 1) )
    {
      v396 = qvector_reserve();
      v184 = *(_QWORD *)(v182 + 24);
      *(_QWORD *)(v182 + 16) = v396;
      v185 = v396;
      v186 = v184 + 1;
    }
    v187 = _mm_load_si128((const __m128i *)&xmmword_30400);
    *(_QWORD *)(v182 + 24) = v186;
    v188 = v185 + 40 * v184;
    *(__m128i *)(v188 + 8) = v187;
    *(_DWORD *)v188 = 0;
    *(_OWORD *)(v188 + 24) = 0;
    sub_12580(
      *(__int64 **)(v182 + 8),
      off_3BD80,
      unk_3BD88,
      unk_3BD8D,
      unk_3BD8C,
      xmmword_3BD90,
      *((__int64 *)&xmmword_3BD90 + 1));
    v189 = *(_QWORD *)(a1 + 664);
    v516 = 13;
    v190 = *(_QWORD *)(v189 + 24);
    *(_QWORD *)sub_14340((char **)(v189 + 40), &v516) = v190;
    v191 = *(_QWORD *)(v189 + 24);
    v192 = *(_QWORD *)(v189 + 16);
    v193 = v191 + 1;
    if ( *(_QWORD *)(v189 + 32) < (unsigned __int64)(v191 + 1) )
    {
      v398 = qvector_reserve();
      v191 = *(_QWORD *)(v189 + 24);
      *(_QWORD *)(v189 + 16) = v398;
      v192 = v398;
      v193 = v191 + 1;
    }
    v194 = _mm_load_si128((const __m128i *)&xmmword_30300);
    *(_QWORD *)(v189 + 24) = v193;
    v195 = v192 + 40 * v191;
    *(__m128i *)(v195 + 8) = v194;
    *(_DWORD *)v195 = 0;
    *(_OWORD *)(v195 + 24) = 0;
    sub_12580(
      *(__int64 **)(v189 + 8),
      off_3BD60,
      unk_3BD68,
      unk_3BD6D,
      unk_3BD6C,
      xmmword_3BD70,
      *((__int64 *)&xmmword_3BD70 + 1));
    v196 = *(_QWORD *)(a1 + 664);
    *(_DWORD *)(a1 + 780) = v190;
    v516 = 14;
    v197 = *(_QWORD *)(v196 + 24);
    *(_QWORD *)sub_14340((char **)(v196 + 40), &v516) = v197;
    v198 = *(_QWORD *)(v196 + 24);
    v199 = *(_QWORD *)(v196 + 16);
    v200 = v198 + 1;
    if ( *(_QWORD *)(v196 + 32) < (unsigned __int64)(v198 + 1) )
    {
      v390 = qvector_reserve();
      v198 = *(_QWORD *)(v196 + 24);
      *(_QWORD *)(v196 + 16) = v390;
      v199 = v390;
      v200 = v198 + 1;
    }
    v201 = _mm_load_si128((const __m128i *)&xmmword_30310);
    *(_QWORD *)(v196 + 24) = v200;
    v202 = v199 + 40 * v198;
    *(__m128i *)(v202 + 8) = v201;
    *(_DWORD *)v202 = 0;
    *(_OWORD *)(v202 + 24) = 0;
    sub_12580(
      *(__int64 **)(v196 + 8),
      off_3BD40,
      unk_3BD48,
      unk_3BD4D,
      unk_3BD4C,
      xmmword_3BD50,
      *((__int64 *)&xmmword_3BD50 + 1));
    *(_DWORD *)(a1 + 784) = v197;
  }
  v203 = *(_QWORD *)(a1 + 664);
  v516 = 15;
  v204 = *(_QWORD *)(v203 + 24);
  *(_QWORD *)sub_14340((char **)(v203 + 40), &v516) = v204;
  v205 = *(_QWORD *)(v203 + 24);
  v206 = *(_QWORD *)(v203 + 16);
  v207 = v205 + 1;
  if ( *(_QWORD *)(v203 + 32) < (unsigned __int64)(v205 + 1) )
  {
    v489 = qvector_reserve();
    v205 = *(_QWORD *)(v203 + 24);
    *(_QWORD *)(v203 + 16) = v489;
    v206 = v489;
    v207 = v205 + 1;
  }
  v208 = _mm_load_si128((const __m128i *)&xmmword_30410);
  *(_QWORD *)(v203 + 24) = v207;
  v209 = v206 + 40 * v205;
  *(__m128i *)(v209 + 8) = v208;
  *(_DWORD *)v209 = 0;
  *(_OWORD *)(v209 + 24) = 0;
  sub_12580(*(__int64 **)(v203 + 8), off_3BD20, unk_3BD28, unk_3BD2D, unk_3BD2C, (__int64)off_3BD30, unk_3BD38);
  *(_DWORD *)(a1 + 920) = v204;
  v210 = *(_QWORD *)(a1 + 664);
  v516 = 36;
  v211 = *(_QWORD *)(v210 + 24);
  *(_QWORD *)sub_14340((char **)(v210 + 40), &v516) = v211;
  v212 = *(_QWORD *)(v210 + 24);
  v213 = *(_QWORD *)(v210 + 16);
  v214 = v212 + 1;
  if ( *(_QWORD *)(v210 + 32) < (unsigned __int64)(v212 + 1) )
  {
    v488 = qvector_reserve();
    v212 = *(_QWORD *)(v210 + 24);
    *(_QWORD *)(v210 + 16) = v488;
    v213 = v488;
    v214 = v212 + 1;
  }
  v215 = _mm_load_si128((const __m128i *)&xmmword_30420);
  *(_QWORD *)(v210 + 24) = v214;
  v216 = v213 + 40 * v212;
  *(__m128i *)(v216 + 8) = v215;
  *(_OWORD *)(v216 + 24) = 0;
  *(_DWORD *)v216 = 0;
  sub_12580(
    *(__int64 **)(v210 + 8),
    off_3B900,
    unk_3B908,
    unk_3B90D,
    unk_3B90C,
    (__int64)off_3B910,
    *(__int64 *)algn_3B918);
  v217 = *(_QWORD *)(a1 + 664);
  v516 = 37;
  v218 = *(_QWORD *)(v217 + 24);
  *(_QWORD *)sub_14340((char **)(v217 + 40), &v516) = v218;
  v219 = *(_QWORD *)(v217 + 24);
  v220 = *(_QWORD *)(v217 + 16);
  v221 = v219 + 1;
  if ( *(_QWORD *)(v217 + 32) < (unsigned __int64)(v219 + 1) )
  {
    v487 = qvector_reserve();
    v219 = *(_QWORD *)(v217 + 24);
    *(_QWORD *)(v217 + 16) = v487;
    v220 = v487;
    v221 = v219 + 1;
  }
  v222 = _mm_load_si128((const __m128i *)&xmmword_30430);
  *(_QWORD *)(v217 + 24) = v221;
  v223 = v220 + 40 * v219;
  *(__m128i *)(v223 + 8) = v222;
  *(_DWORD *)v223 = 0;
  *(_OWORD *)(v223 + 24) = 0;
  sub_12580(
    *(__int64 **)(v217 + 8),
    off_3B920,
    unk_3B928,
    unk_3B92D,
    unk_3B92C,
    (__int64)off_3B930,
    *(__int64 *)algn_3B938);
  v224 = *(_QWORD *)(a1 + 664);
  v516 = 38;
  v225 = *(_QWORD *)(v224 + 24);
  *(_QWORD *)sub_14340((char **)(v224 + 40), &v516) = v225;
  v226 = *(_QWORD *)(v224 + 24);
  v227 = *(_QWORD *)(v224 + 16);
  v228 = v226 + 1;
  if ( *(_QWORD *)(v224 + 32) < (unsigned __int64)(v226 + 1) )
  {
    v486 = qvector_reserve();
    v226 = *(_QWORD *)(v224 + 24);
    *(_QWORD *)(v224 + 16) = v486;
    v227 = v486;
    v228 = v226 + 1;
  }
  v229 = _mm_load_si128((const __m128i *)&xmmword_30440);
  *(_QWORD *)(v224 + 24) = v228;
  v230 = v227 + 40 * v226;
  *(__m128i *)(v230 + 8) = v229;
  *(_DWORD *)v230 = 0;
  *(_OWORD *)(v230 + 24) = 0;
  sub_12580(
    *(__int64 **)(v224 + 8),
    off_3B940,
    unk_3B948,
    unk_3B94D,
    unk_3B94C,
    (__int64)off_3B950,
    *(__int64 *)algn_3B958);
  v231 = *(_QWORD *)(a1 + 664);
  v516 = 39;
  v232 = *(_QWORD *)(v231 + 24);
  *(_QWORD *)sub_14340((char **)(v231 + 40), &v516) = v232;
  v233 = *(_QWORD *)(v231 + 24);
  v234 = *(_QWORD *)(v231 + 16);
  v235 = v233 + 1;
  if ( *(_QWORD *)(v231 + 32) < (unsigned __int64)(v233 + 1) )
  {
    v483 = qvector_reserve();
    v233 = *(_QWORD *)(v231 + 24);
    *(_QWORD *)(v231 + 16) = v483;
    v234 = v483;
    v235 = v233 + 1;
  }
  v236 = _mm_load_si128((const __m128i *)&xmmword_30450);
  *(_QWORD *)(v231 + 24) = v235;
  v237 = v234 + 40 * v233;
  *(__m128i *)(v237 + 8) = v236;
  *(_DWORD *)v237 = 0;
  *(_OWORD *)(v237 + 24) = 0;
  sub_12580(
    *(__int64 **)(v231 + 8),
    off_3B960,
    unk_3B968,
    unk_3B96D,
    unk_3B96C,
    (__int64)off_3B970,
    *(__int64 *)algn_3B978);
  v238 = *(_QWORD *)(a1 + 664);
  v516 = 40;
  v239 = *(_QWORD *)(v238 + 24);
  *(_QWORD *)sub_14340((char **)(v238 + 40), &v516) = v239;
  v240 = *(_QWORD *)(v238 + 24);
  v241 = *(_QWORD *)(v238 + 16);
  v242 = v240 + 1;
  if ( *(_QWORD *)(v238 + 32) < (unsigned __int64)(v240 + 1) )
  {
    v482 = qvector_reserve();
    v240 = *(_QWORD *)(v238 + 24);
    *(_QWORD *)(v238 + 16) = v482;
    v241 = v482;
    v242 = v240 + 1;
  }
  v243 = _mm_load_si128((const __m128i *)&xmmword_30460);
  *(_QWORD *)(v238 + 24) = v242;
  v244 = v241 + 40 * v240;
  *(__m128i *)(v244 + 8) = v243;
  *(_OWORD *)(v244 + 24) = 0;
  *(_DWORD *)v244 = 0;
  sub_12580(
    *(__int64 **)(v238 + 8),
    off_3B980,
    unk_3B988,
    unk_3B98D,
    unk_3B98C,
    (__int64)off_3B990,
    *(__int64 *)algn_3B998);
  v245 = *(_QWORD *)(a1 + 664);
  v516 = 41;
  v246 = *(_QWORD *)(v245 + 24);
  *(_QWORD *)sub_14340((char **)(v245 + 40), &v516) = v246;
  v247 = *(_QWORD *)(v245 + 24);
  v248 = *(_QWORD *)(v245 + 16);
  v249 = v247 + 1;
  if ( *(_QWORD *)(v245 + 32) < (unsigned __int64)(v247 + 1) )
  {
    v481 = qvector_reserve();
    v247 = *(_QWORD *)(v245 + 24);
    *(_QWORD *)(v245 + 16) = v481;
    v248 = v481;
    v249 = v247 + 1;
  }
  v250 = _mm_load_si128((const __m128i *)&xmmword_30470);
  *(_QWORD *)(v245 + 24) = v249;
  v251 = v248 + 40 * v247;
  *(__m128i *)(v251 + 8) = v250;
  *(_OWORD *)(v251 + 24) = 0;
  *(_DWORD *)v251 = 0;
  sub_12580(
    *(__int64 **)(v245 + 8),
    off_3B9A0,
    unk_3B9A8,
    unk_3B9AD,
    unk_3B9AC,
    (__int64)off_3B9B0,
    *(__int64 *)algn_3B9B8);
  v252 = *(_QWORD *)(a1 + 664);
  v516 = 42;
  v253 = *(_QWORD *)(v252 + 24);
  *(_QWORD *)sub_14340((char **)(v252 + 40), &v516) = v253;
  v254 = *(_QWORD *)(v252 + 24);
  v255 = *(_QWORD *)(v252 + 16);
  v256 = v254 + 1;
  if ( *(_QWORD *)(v252 + 32) < (unsigned __int64)(v254 + 1) )
  {
    v480 = qvector_reserve();
    v254 = *(_QWORD *)(v252 + 24);
    *(_QWORD *)(v252 + 16) = v480;
    v255 = v480;
    v256 = v254 + 1;
  }
  v257 = _mm_load_si128((const __m128i *)&xmmword_30480);
  *(_QWORD *)(v252 + 24) = v256;
  v258 = v255 + 40 * v254;
  *(__m128i *)(v258 + 8) = v257;
  *(_DWORD *)v258 = 0;
  *(_OWORD *)(v258 + 24) = 0;
  sub_12580(
    *(__int64 **)(v252 + 8),
    off_3B9C0,
    unk_3B9C8,
    unk_3B9CD,
    unk_3B9CC,
    (__int64)off_3B9D0,
    *(__int64 *)algn_3B9D8);
  v259 = *(_QWORD *)(a1 + 664);
  v516 = 43;
  v260 = *(_QWORD *)(v259 + 24);
  *(_QWORD *)sub_14340((char **)(v259 + 40), &v516) = v260;
  v261 = *(_QWORD *)(v259 + 24);
  v262 = *(_QWORD *)(v259 + 16);
  v263 = v261 + 1;
  if ( *(_QWORD *)(v259 + 32) < (unsigned __int64)(v261 + 1) )
  {
    v479 = qvector_reserve();
    v261 = *(_QWORD *)(v259 + 24);
    *(_QWORD *)(v259 + 16) = v479;
    v262 = v479;
    v263 = v261 + 1;
  }
  v264 = _mm_load_si128((const __m128i *)&xmmword_30490);
  *(_QWORD *)(v259 + 24) = v263;
  v265 = v262 + 40 * v261;
  *(__m128i *)(v265 + 8) = v264;
  *(_DWORD *)v265 = 0;
  *(_OWORD *)(v265 + 24) = 0;
  sub_12580(
    *(__int64 **)(v259 + 8),
    off_3B9E0,
    unk_3B9E8,
    unk_3B9ED,
    unk_3B9EC,
    (__int64)off_3B9F0,
    *(__int64 *)algn_3B9F8);
  if ( v139 == 8 )
  {
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3BA00, 0x2Cu);
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3BA20, 0x2Du);
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3BA40, 0x2Eu);
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3BA60, 0x2Fu);
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3BA80, 0x30u);
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3BAA0, 0x31u);
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3BAC0, 0x32u);
    sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3BAE0, 0x33u);
  }
  v266 = *(_QWORD *)(a1 + 664);
  v516 = 35;
  v267 = *(_QWORD *)(v266 + 24);
  *(_QWORD *)sub_14340((char **)(v266 + 40), &v516) = v267;
  v268 = *(_QWORD *)(v266 + 24);
  v269 = *(_QWORD *)(v266 + 16);
  v270 = v268 + 1;
  if ( *(_QWORD *)(v266 + 32) < (unsigned __int64)(v268 + 1) )
  {
    v478 = qvector_reserve();
    v268 = *(_QWORD *)(v266 + 24);
    *(_QWORD *)(v266 + 16) = v478;
    v269 = v478;
    v270 = v268 + 1;
  }
  v271 = _mm_load_si128((const __m128i *)&xmmword_304A0);
  *(_QWORD *)(v266 + 24) = v270;
  v272 = v269 + 40 * v268;
  *(__m128i *)(v272 + 8) = v271;
  *(_DWORD *)v272 = 0;
  *(_OWORD *)(v272 + 24) = 0;
  sub_12580(*(__int64 **)(v266 + 8), off_3B8E0, unk_3B8E8, unk_3B8ED, unk_3B8EC, (__int64)off_3B8F0, unk_3B8F8);
  v273 = *(_QWORD *)(a1 + 664);
  v516 = 52;
  v274 = *(_QWORD *)(v273 + 24);
  *(_QWORD *)sub_14340((char **)(v273 + 40), &v516) = v274;
  v275 = *(_QWORD *)(v273 + 24);
  v276 = *(_QWORD *)(v273 + 16);
  v277 = v275 + 1;
  if ( *(_QWORD *)(v273 + 32) < (unsigned __int64)(v275 + 1) )
  {
    v477 = qvector_reserve();
    v275 = *(_QWORD *)(v273 + 24);
    *(_QWORD *)(v273 + 16) = v477;
    v276 = v477;
    v277 = v275 + 1;
  }
  v278 = _mm_load_si128((const __m128i *)&xmmword_304B0);
  *(_QWORD *)(v273 + 24) = v277;
  v279 = v276 + 40 * v275;
  *(__m128i *)(v279 + 8) = v278;
  *(_OWORD *)(v279 + 24) = 0;
  *(_DWORD *)v279 = 0;
  sub_12580(
    *(__int64 **)(v273 + 8),
    off_3B7E0,
    unk_3B7E8,
    unk_3B7ED,
    unk_3B7EC,
    (__int64)off_3B7F0,
    *(__int64 *)algn_3B7F8);
  v280 = *(_QWORD *)(a1 + 664);
  v516 = 53;
  v281 = *(_QWORD *)(v280 + 24);
  *(_QWORD *)sub_14340((char **)(v280 + 40), &v516) = v281;
  v282 = *(_QWORD *)(v280 + 24);
  v283 = *(_QWORD *)(v280 + 16);
  v284 = v282 + 1;
  if ( *(_QWORD *)(v280 + 32) < (unsigned __int64)(v282 + 1) )
  {
    v476 = qvector_reserve();
    v282 = *(_QWORD *)(v280 + 24);
    *(_QWORD *)(v280 + 16) = v476;
    v283 = v476;
    v284 = v282 + 1;
  }
  v285 = _mm_load_si128((const __m128i *)&xmmword_304C0);
  *(_QWORD *)(v280 + 24) = v284;
  v286 = v283 + 40 * v282;
  *(__m128i *)(v286 + 8) = v285;
  *(_OWORD *)(v286 + 24) = 0;
  *(_DWORD *)v286 = 0;
  sub_12580(
    *(__int64 **)(v280 + 8),
    off_3B800,
    unk_3B808,
    unk_3B80D,
    unk_3B80C,
    (__int64)off_3B810,
    *(__int64 *)algn_3B818);
  v287 = *(_QWORD *)(a1 + 664);
  v516 = 54;
  v288 = *(_QWORD *)(v287 + 24);
  *(_QWORD *)sub_14340((char **)(v287 + 40), &v516) = v288;
  v289 = *(_QWORD *)(v287 + 24);
  v290 = *(_QWORD *)(v287 + 16);
  v291 = v289 + 1;
  if ( *(_QWORD *)(v287 + 32) < (unsigned __int64)(v289 + 1) )
  {
    v475 = qvector_reserve();
    v289 = *(_QWORD *)(v287 + 24);
    *(_QWORD *)(v287 + 16) = v475;
    v290 = v475;
    v291 = v289 + 1;
  }
  v292 = _mm_load_si128((const __m128i *)&xmmword_304D0);
  *(_QWORD *)(v287 + 24) = v291;
  v293 = v290 + 40 * v289;
  *(__m128i *)(v293 + 8) = v292;
  *(_DWORD *)v293 = 0;
  *(_OWORD *)(v293 + 24) = 0;
  sub_12580(
    *(__int64 **)(v287 + 8),
    off_3B820,
    unk_3B828,
    unk_3B82D,
    unk_3B82C,
    (__int64)off_3B830,
    *(__int64 *)algn_3B838);
  v294 = *(_QWORD *)(a1 + 664);
  v516 = 55;
  v295 = *(_QWORD *)(v294 + 24);
  *(_QWORD *)sub_14340((char **)(v294 + 40), &v516) = v295;
  v296 = *(_QWORD *)(v294 + 24);
  v297 = *(_QWORD *)(v294 + 16);
  v298 = v296 + 1;
  if ( *(_QWORD *)(v294 + 32) < (unsigned __int64)(v296 + 1) )
  {
    v474 = qvector_reserve();
    v296 = *(_QWORD *)(v294 + 24);
    *(_QWORD *)(v294 + 16) = v474;
    v297 = v474;
    v298 = v296 + 1;
  }
  v299 = _mm_load_si128((const __m128i *)&xmmword_304E0);
  *(_QWORD *)(v294 + 24) = v298;
  v300 = v297 + 40 * v296;
  *(__m128i *)(v300 + 8) = v299;
  *(_DWORD *)v300 = 0;
  *(_OWORD *)(v300 + 24) = 0;
  sub_12580(
    *(__int64 **)(v294 + 8),
    off_3B840,
    unk_3B848,
    unk_3B84D,
    unk_3B84C,
    (__int64)off_3B850,
    *(__int64 *)algn_3B858);
  v301 = *(_QWORD *)(a1 + 664);
  v516 = 56;
  v302 = *(_QWORD *)(v301 + 24);
  *(_QWORD *)sub_14340((char **)(v301 + 40), &v516) = v302;
  v303 = *(_QWORD *)(v301 + 24);
  v304 = *(_QWORD *)(v301 + 16);
  v305 = v303 + 1;
  if ( *(_QWORD *)(v301 + 32) < (unsigned __int64)(v303 + 1) )
  {
    v473 = qvector_reserve();
    v303 = *(_QWORD *)(v301 + 24);
    *(_QWORD *)(v301 + 16) = v473;
    v304 = v473;
    v305 = v303 + 1;
  }
  v306 = _mm_load_si128((const __m128i *)&xmmword_304F0);
  *(_QWORD *)(v301 + 24) = v305;
  v307 = v304 + 40 * v303;
  *(__m128i *)(v307 + 8) = v306;
  *(_DWORD *)v307 = 0;
  *(_OWORD *)(v307 + 24) = 0;
  sub_12580(
    *(__int64 **)(v301 + 8),
    off_3B860,
    unk_3B868,
    unk_3B86D,
    unk_3B86C,
    (__int64)off_3B870,
    *(__int64 *)algn_3B878);
  v308 = *(_QWORD *)(a1 + 664);
  v516 = 57;
  v309 = *(_QWORD *)(v308 + 24);
  *(_QWORD *)sub_14340((char **)(v308 + 40), &v516) = v309;
  v310 = *(_QWORD *)(v308 + 24);
  v311 = *(_QWORD *)(v308 + 16);
  v312 = v310 + 1;
  if ( *(_QWORD *)(v308 + 32) < (unsigned __int64)(v310 + 1) )
  {
    v472 = qvector_reserve();
    v310 = *(_QWORD *)(v308 + 24);
    *(_QWORD *)(v308 + 16) = v472;
    v311 = v472;
    v312 = v310 + 1;
  }
  v313 = _mm_load_si128((const __m128i *)&xmmword_30500);
  *(_QWORD *)(v308 + 24) = v312;
  v314 = v311 + 40 * v310;
  *(__m128i *)(v314 + 8) = v313;
  *(_OWORD *)(v314 + 24) = 0;
  *(_DWORD *)v314 = 0;
  sub_12580(
    *(__int64 **)(v308 + 8),
    off_3B880,
    unk_3B888,
    unk_3B88D,
    unk_3B88C,
    (__int64)off_3B890,
    *(__int64 *)algn_3B898);
  v315 = *(_QWORD *)(a1 + 664);
  v516 = 58;
  v316 = *(_QWORD *)(v315 + 24);
  *(_QWORD *)sub_14340((char **)(v315 + 40), &v516) = v316;
  v317 = *(_QWORD *)(v315 + 24);
  v318 = *(_QWORD *)(v315 + 16);
  v319 = v317 + 1;
  if ( *(_QWORD *)(v315 + 32) < (unsigned __int64)(v317 + 1) )
  {
    v471 = qvector_reserve();
    v317 = *(_QWORD *)(v315 + 24);
    *(_QWORD *)(v315 + 16) = v471;
    v318 = v471;
    v319 = v317 + 1;
  }
  v320 = _mm_load_si128((const __m128i *)&xmmword_30510);
  *(_QWORD *)(v315 + 24) = v319;
  v321 = v318 + 40 * v317;
  *(__m128i *)(v321 + 8) = v320;
  *(_OWORD *)(v321 + 24) = 0;
  *(_DWORD *)v321 = 0;
  sub_12580(
    *(__int64 **)(v315 + 8),
    off_3B8A0,
    unk_3B8A8,
    unk_3B8AD,
    unk_3B8AC,
    (__int64)off_3B8B0,
    *(__int64 *)algn_3B8B8);
  v322 = *(_QWORD *)(a1 + 664);
  v516 = 59;
  v323 = *(_QWORD *)(v322 + 24);
  *(_QWORD *)sub_14340((char **)(v322 + 40), &v516) = v323;
  v324 = *(_QWORD *)(v322 + 24);
  v325 = *(_QWORD *)(v322 + 16);
  v326 = v324 + 1;
  if ( *(_QWORD *)(v322 + 32) < (unsigned __int64)(v324 + 1) )
  {
    v470 = qvector_reserve();
    v324 = *(_QWORD *)(v322 + 24);
    *(_QWORD *)(v322 + 16) = v470;
    v325 = v470;
    v326 = v324 + 1;
  }
  v327 = _mm_load_si128((const __m128i *)&xmmword_30520);
  *(_QWORD *)(v322 + 24) = v326;
  v328 = v325 + 40 * v324;
  *(__m128i *)(v328 + 8) = v327;
  *(_DWORD *)v328 = 0;
  *(_OWORD *)(v328 + 24) = 0;
  sub_12580(
    *(__int64 **)(v322 + 8),
    off_3B8C0,
    unk_3B8C8,
    unk_3B8CD,
    unk_3B8CC,
    (__int64)off_3B8D0,
    *(__int64 *)algn_3B8D8);
  v329 = *(_QWORD *)(a1 + 664);
  v516 = 60;
  v330 = *(_QWORD *)(v329 + 24);
  *(_QWORD *)sub_14340((char **)(v329 + 40), &v516) = v330;
  v331 = *(_QWORD *)(v329 + 24);
  v332 = *(_QWORD *)(v329 + 16);
  v333 = v331 + 1;
  if ( *(_QWORD *)(v329 + 32) < (unsigned __int64)(v331 + 1) )
  {
    v469 = qvector_reserve();
    v331 = *(_QWORD *)(v329 + 24);
    *(_QWORD *)(v329 + 16) = v469;
    v332 = v469;
    v333 = v331 + 1;
  }
  v334 = _mm_load_si128((const __m128i *)&xmmword_30530);
  *(_QWORD *)(v329 + 24) = v333;
  v335 = v332 + 40 * v331;
  *(__m128i *)(v335 + 8) = v334;
  *(_DWORD *)v335 = 0;
  *(_OWORD *)(v335 + 24) = 0;
  sub_12580(
    *(__int64 **)(v329 + 8),
    off_3B5E0,
    unk_3B5E8,
    unk_3B5ED,
    unk_3B5EC,
    (__int64)off_3B5F0,
    *(__int64 *)algn_3B5F8);
  v336 = *(_QWORD *)(a1 + 664);
  v516 = 61;
  v337 = *(_QWORD *)(v336 + 24);
  *(_QWORD *)sub_14340((char **)(v336 + 40), &v516) = v337;
  v338 = *(_QWORD *)(v336 + 24);
  v339 = *(_QWORD *)(v336 + 16);
  v340 = v338 + 1;
  if ( *(_QWORD *)(v336 + 32) < (unsigned __int64)(v338 + 1) )
  {
    v496 = qvector_reserve();
    v338 = *(_QWORD *)(v336 + 24);
    *(_QWORD *)(v336 + 16) = v496;
    v339 = v496;
    v340 = v338 + 1;
  }
  v341 = _mm_load_si128((const __m128i *)&xmmword_30540);
  *(_QWORD *)(v336 + 24) = v340;
  v342 = v339 + 40 * v338;
  *(__m128i *)(v342 + 8) = v341;
  *(_DWORD *)v342 = 0;
  *(_OWORD *)(v342 + 24) = 0;
  sub_12580(
    *(__int64 **)(v336 + 8),
    off_3B600,
    unk_3B608,
    unk_3B60D,
    unk_3B60C,
    (__int64)off_3B610,
    *(__int64 *)algn_3B618);
  v343 = *(_QWORD *)(a1 + 664);
  v516 = 62;
  v344 = *(_QWORD *)(v343 + 24);
  *(_QWORD *)sub_14340((char **)(v343 + 40), &v516) = v344;
  v345 = *(_QWORD *)(v343 + 24);
  v346 = *(_QWORD *)(v343 + 16);
  v347 = v345 + 1;
  if ( *(_QWORD *)(v343 + 32) < (unsigned __int64)(v345 + 1) )
  {
    v495 = qvector_reserve();
    v345 = *(_QWORD *)(v343 + 24);
    *(_QWORD *)(v343 + 16) = v495;
    v346 = v495;
    v347 = v345 + 1;
  }
  v348 = _mm_load_si128((const __m128i *)&xmmword_30550);
  *(_QWORD *)(v343 + 24) = v347;
  v349 = v346 + 40 * v345;
  *(__m128i *)(v349 + 8) = v348;
  *(_OWORD *)(v349 + 24) = 0;
  *(_DWORD *)v349 = 0;
  sub_12580(
    *(__int64 **)(v343 + 8),
    off_3B620,
    unk_3B628,
    unk_3B62D,
    unk_3B62C,
    (__int64)off_3B630,
    *(__int64 *)algn_3B638);
  v350 = *(_QWORD *)(a1 + 664);
  v516 = 63;
  v351 = *(_QWORD *)(v350 + 24);
  *(_QWORD *)sub_14340((char **)(v350 + 40), &v516) = v351;
  v352 = *(_QWORD *)(v350 + 24);
  v353 = *(_QWORD *)(v350 + 16);
  v354 = v352 + 1;
  if ( *(_QWORD *)(v350 + 32) < (unsigned __int64)(v352 + 1) )
  {
    v494 = qvector_reserve();
    v352 = *(_QWORD *)(v350 + 24);
    *(_QWORD *)(v350 + 16) = v494;
    v353 = v494;
    v354 = v352 + 1;
  }
  v355 = _mm_load_si128((const __m128i *)&xmmword_30560);
  *(_QWORD *)(v350 + 24) = v354;
  v356 = v353 + 40 * v352;
  *(__m128i *)(v356 + 8) = v355;
  *(_OWORD *)(v356 + 24) = 0;
  *(_DWORD *)v356 = 0;
  sub_12580(
    *(__int64 **)(v350 + 8),
    off_3B640,
    unk_3B648,
    unk_3B64D,
    unk_3B64C,
    (__int64)off_3B650,
    *(__int64 *)algn_3B658);
  v357 = *(_QWORD *)(a1 + 664);
  v516 = 64;
  v358 = *(_QWORD *)(v357 + 24);
  *(_QWORD *)sub_14340((char **)(v357 + 40), &v516) = v358;
  v359 = *(_QWORD *)(v357 + 24);
  v360 = *(_QWORD *)(v357 + 16);
  v361 = v359 + 1;
  if ( *(_QWORD *)(v357 + 32) < (unsigned __int64)(v359 + 1) )
  {
    v493 = qvector_reserve();
    v359 = *(_QWORD *)(v357 + 24);
    *(_QWORD *)(v357 + 16) = v493;
    v360 = v493;
    v361 = v359 + 1;
  }
  v362 = _mm_load_si128((const __m128i *)&xmmword_30570);
  *(_QWORD *)(v357 + 24) = v361;
  v363 = v360 + 40 * v359;
  *(__m128i *)(v363 + 8) = v362;
  *(_DWORD *)v363 = 0;
  *(_OWORD *)(v363 + 24) = 0;
  sub_12580(
    *(__int64 **)(v357 + 8),
    off_3B660,
    unk_3B668,
    unk_3B66D,
    unk_3B66C,
    (__int64)off_3B670,
    *(__int64 *)algn_3B678);
  v364 = *(_QWORD *)(a1 + 664);
  v516 = 65;
  v365 = *(_QWORD *)(v364 + 24);
  *(_QWORD *)sub_14340((char **)(v364 + 40), &v516) = v365;
  v366 = *(_QWORD *)(v364 + 24);
  v367 = *(_QWORD *)(v364 + 16);
  v368 = v366 + 1;
  if ( *(_QWORD *)(v364 + 32) < (unsigned __int64)(v366 + 1) )
  {
    v492 = qvector_reserve();
    v366 = *(_QWORD *)(v364 + 24);
    *(_QWORD *)(v364 + 16) = v492;
    v367 = v492;
    v368 = v366 + 1;
  }
  v369 = _mm_load_si128((const __m128i *)&xmmword_30580);
  *(_QWORD *)(v364 + 24) = v368;
  v370 = v367 + 40 * v366;
  *(__m128i *)(v370 + 8) = v369;
  *(_DWORD *)v370 = 0;
  *(_OWORD *)(v370 + 24) = 0;
  sub_12580(
    *(__int64 **)(v364 + 8),
    off_3B680,
    unk_3B688,
    unk_3B68D,
    unk_3B68C,
    (__int64)off_3B690,
    *(__int64 *)algn_3B698);
  v371 = *(_QWORD *)(a1 + 664);
  v516 = 66;
  v372 = *(_QWORD *)(v371 + 24);
  *(_QWORD *)sub_14340((char **)(v371 + 40), &v516) = v372;
  v373 = *(_QWORD *)(v371 + 24);
  v374 = *(_QWORD *)(v371 + 16);
  v375 = v373 + 1;
  if ( *(_QWORD *)(v371 + 32) < (unsigned __int64)(v373 + 1) )
  {
    v491 = qvector_reserve();
    v373 = *(_QWORD *)(v371 + 24);
    *(_QWORD *)(v371 + 16) = v491;
    v374 = v491;
    v375 = v373 + 1;
  }
  v376 = _mm_load_si128((const __m128i *)&xmmword_30590);
  *(_QWORD *)(v371 + 24) = v375;
  v377 = v374 + 40 * v373;
  *(__m128i *)(v377 + 8) = v376;
  *(_DWORD *)v377 = 0;
  *(_OWORD *)(v377 + 24) = 0;
  sub_12580(
    *(__int64 **)(v371 + 8),
    off_3B6A0,
    unk_3B6A8,
    unk_3B6AD,
    unk_3B6AC,
    (__int64)off_3B6B0,
    *(__int64 *)algn_3B6B8);
  v378 = *(_QWORD *)(a1 + 664);
  v516 = 67;
  v379 = *(_QWORD *)(v378 + 24);
  *(_QWORD *)sub_14340((char **)(v378 + 40), &v516) = v379;
  v380 = *(_QWORD *)(v378 + 24);
  v381 = *(_QWORD *)(v378 + 16);
  v382 = v380 + 1;
  if ( *(_QWORD *)(v378 + 32) < (unsigned __int64)(v380 + 1) )
  {
    v490 = qvector_reserve();
    v380 = *(_QWORD *)(v378 + 24);
    *(_QWORD *)(v378 + 16) = v490;
    v381 = v490;
    v382 = v380 + 1;
  }
  v383 = _mm_load_si128((const __m128i *)&xmmword_305A0);
  *(_QWORD *)(v378 + 24) = v382;
  v384 = v381 + 40 * v380;
  *(__m128i *)(v384 + 8) = v383;
  *(_DWORD *)v384 = 0;
  *(_OWORD *)(v384 + 24) = 0;
  sub_12580(
    *(__int64 **)(v378 + 8),
    off_3B6C0,
    unk_3B6C8,
    unk_3B6CD,
    unk_3B6CC,
    (__int64)off_3B6D0,
    *(__int64 *)algn_3B6D8);
  if ( v139 != 8 )
    return v517 - __readfsqword(0x28u);
  sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3B6E0, 0x44u);
  sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3B700, 0x45u);
  sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3B720, 0x46u);
  sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3B740, 0x47u);
  sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3B760, 0x48u);
  sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3B780, 0x49u);
  sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3B7A0, 0x4Au);
  return sub_145A0(*(_QWORD *)(a1 + 664), (__int64)&off_3B7C0, 0x4Bu);
}

