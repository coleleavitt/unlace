__int64 __fastcall sub_4FF80(__int64 a1, double a2, __m128i a3, __m128 a4)
{
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  size_t *v20; // r14
  size_t *v21; // r15
  __int64 v22; // r14
  int v23; // r13d
  size_t v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  _QWORD *v27; // rsi
  __int64 v28; // rax
  _BYTE *v29; // r12
  unsigned __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rcx
  _QWORD *v33; // rdi
  unsigned __int64 v34; // rdx
  _BYTE *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rcx
  _QWORD *v38; // rdi
  unsigned __int64 v39; // rdx
  _BYTE *v40; // r12
  __int64 v41; // r12
  __int64 v42; // r14
  size_t v43; // rbx
  size_t v44; // r8
  _QWORD *v45; // rsi
  _BYTE *v46; // r9
  __int64 v47; // rax
  unsigned __int64 v48; // rdi
  _QWORD *v49; // rsi
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  _BYTE *v52; // r8
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  _DWORD *v56; // r8
  _QWORD *v57; // rsi
  _BYTE *v58; // r8
  __int64 v59; // r9
  __int64 v60; // r11
  _DWORD *v61; // r8
  __int64 v62; // rax
  _BYTE *v63; // r10
  _QWORD *v64; // rsi
  unsigned __int64 v65; // rdx
  _DWORD *v66; // r8
  __int64 v67; // rdx
  _QWORD *v68; // rsi
  __int64 v69; // rax
  _BYTE *v70; // r8
  unsigned __int64 v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  _DWORD *v75; // r8
  _BYTE *v76; // r8
  _QWORD *v77; // rsi
  _DWORD *v78; // rax
  int v79; // edx
  void *v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  int v84; // edx
  unsigned int v85; // eax
  __m128i v86; // xmm0
  unsigned __int64 v87; // r8
  size_t v88; // r9
  char *v89; // r11
  unsigned __int64 v90; // r10
  char *v91; // rsi
  unsigned __int64 v92; // rax
  size_t v93; // r9
  char *v94; // rsi
  unsigned __int64 v95; // rax
  size_t v96; // rcx
  __int64 v97; // r9
  __int64 v98; // rax
  _QWORD *v99; // rsi
  _BYTE *v100; // r8
  unsigned __int64 v101; // rdi
  unsigned __int64 v102; // rdx
  __int64 v103; // r9
  size_t v104; // r8
  _QWORD *v105; // rsi
  _BYTE *v106; // r10
  __int64 v107; // rax
  unsigned __int64 v108; // rdx
  _QWORD *v109; // rsi
  __int64 v110; // rcx
  unsigned __int64 v111; // rdx
  _BYTE *v112; // r8
  __int64 v113; // rsi
  unsigned __int64 v114; // rdx
  _DWORD *v115; // r8
  __int64 v116; // r14
  _DWORD *v117; // rbx
  __int64 v118; // rax
  _QWORD *v119; // rsi
  _BYTE *v120; // r12
  unsigned __int64 v121; // rdi
  __int64 v122; // rdx
  _DWORD *v123; // rbx
  _QWORD *v124; // rsi
  __int64 v125; // rax
  _BYTE *v126; // rbx
  unsigned __int64 v127; // r8
  __int64 v128; // rsi
  __int64 v129; // rcx
  _QWORD *v130; // rdi
  unsigned __int64 v131; // rdx
  _DWORD *v132; // rbx
  _BYTE *v133; // rbx
  __int64 v134; // rcx
  _QWORD *v135; // rdi
  unsigned __int64 v136; // rax
  _BYTE *v137; // rbx
  __int64 v138; // rcx
  _QWORD *v139; // rdi
  unsigned __int64 v140; // rdx
  _BYTE *v141; // rbx
  __int64 v142; // rcx
  _QWORD *v143; // rdi
  unsigned __int64 v144; // rdx
  _BYTE *v145; // rbx
  __int64 v146; // rax
  __int64 v147; // rdx
  __m128i v148; // xmm3
  size_t v149; // rdx
  __int64 v150; // rax
  _QWORD *v151; // rsi
  _BYTE *v152; // rbx
  unsigned __int64 v153; // rdi
  __int64 v154; // rdx
  __m128i v155; // xmm4
  size_t v156; // rdx
  __int64 v157; // rax
  _QWORD *v158; // rsi
  _BYTE *v159; // r12
  unsigned __int64 v160; // rdi
  __int64 v161; // rax
  const void *v162; // rbx
  size_t v163; // rax
  __int64 v164; // r12
  size_t v165; // r14
  size_t v166; // r9
  _BYTE *v167; // rsi
  size_t v168; // rdx
  __int64 v169; // rbx
  unsigned __int64 v170; // r12
  char *v171; // rsi
  __int64 v172; // rdx
  __m128i v173; // xmm5
  size_t v174; // rdx
  __int64 v175; // rax
  _QWORD *v176; // rsi
  __int64 v177; // rbx
  unsigned __int64 v178; // rdi
  int v179; // eax
  _QWORD *v180; // rsi
  __int64 v181; // rax
  unsigned __int64 v182; // rdi
  __int64 v183; // rdx
  _QWORD *v184; // rdi
  __int64 v185; // rax
  unsigned __int64 v186; // rdx
  __int64 v187; // rdx
  _QWORD *v188; // rsi
  __int64 v189; // rax
  unsigned __int64 v190; // rdi
  _BYTE *v191; // rdx
  __int64 v192; // rax
  _QWORD *v193; // rsi
  _BYTE *v194; // rbx
  unsigned __int64 v195; // rdi
  _QWORD *v196; // rsi
  __int64 v197; // rax
  _BYTE *v198; // rbx
  unsigned __int64 v199; // rdi
  _WORD *i; // r12
  size_t v201; // rbx
  __int64 v202; // r14
  unsigned __int64 v203; // rdx
  char *v204; // rsi
  __int64 v205; // rax
  __int64 v206; // r14
  __int64 v207; // rbx
  __int64 v208; // r10
  char *v209; // rsi
  __int64 v210; // rdx
  __int64 v211; // rbx
  unsigned __int64 v212; // r12
  char *v213; // rsi
  _QWORD *v214; // rsi
  __int64 v215; // rax
  unsigned __int64 v216; // rdi
  _BYTE *v217; // rdx
  char *v218; // r12
  _BYTE *v219; // rsi
  unsigned __int64 v220; // rcx
  __int64 v221; // rbx
  __int64 v222; // rbx
  unsigned __int64 v223; // rdx
  _BYTE *v224; // rsi
  size_t v225; // rax
  size_t v226; // r14
  size_t v227; // r10
  size_t v228; // rdx
  unsigned __int64 v229; // rdx
  _QWORD *v230; // rsi
  __int64 v231; // rax
  unsigned __int64 v232; // rdi
  __int64 v233; // rdx
  _QWORD *v234; // rsi
  __int64 v235; // rax
  unsigned __int64 v236; // rdi
  _BYTE *v237; // rdx
  _BYTE *v238; // rsi
  __int64 v239; // rsi
  __int64 v240; // rax
  int v241; // eax
  int v242; // eax
  _QWORD *v243; // rsi
  _BYTE *v244; // r8
  int v245; // edx
  __int64 v246; // rax
  unsigned __int64 v247; // rdi
  _QWORD *v248; // rdi
  __int64 v249; // rax
  _BYTE *v250; // r8
  unsigned __int64 v251; // rdx
  char *v252; // rcx
  int v253; // eax
  __int64 v254; // rax
  int v255; // edx
  char *v256; // rsi
  __int64 v257; // rax
  int v258; // edx
  __int64 v259; // rax
  unsigned __int64 v260; // rdi
  _BYTE *v261; // rdx
  __int64 v262; // rdx
  __int64 v263; // rax
  __int64 v264; // rdi
  __int64 v265; // rbx
  bool v266; // cc
  __int64 v267; // rsi
  __int64 v268; // rbx
  _DWORD *v269; // rsi
  char v270; // al
  unsigned int v271; // ebx
  __int64 v272; // rdi
  char v273; // al
  __m128i *v274; // r13
  char *v275; // r12
  __int64 v276; // r14
  unsigned __int64 v277; // rax
  unsigned __int64 v278; // rdx
  __m128i *v279; // rdi
  unsigned __int64 v280; // rcx
  unsigned __int64 v281; // rdx
  __int64 *v282; // rax
  __int64 *v283; // rsi
  _QWORD *v284; // rdx
  char *v285; // rdi
  _QWORD *v286; // rax
  char *v287; // r14
  __int64 v288; // r12
  char *v289; // r13
  unsigned __int64 v290; // rdx
  char *v291; // r12
  unsigned __int64 v292; // rcx
  unsigned __int64 v293; // rdx
  char *v294; // rax
  char *v295; // rsi
  char *v296; // rax
  char *v297; // rcx
  __int64 v298; // rdx
  _QWORD *v299; // rsi
  _BYTE *v300; // r8
  __int64 v301; // rax
  size_t *v302; // rsi
  __int64 v303; // rax
  __int64 v304; // rax
  _QWORD *v305; // r8
  _QWORD *v307; // rsi
  _QWORD *v308; // rsi
  __int64 v309; // rbx
  _BYTE *v310; // rsi
  __int64 v311; // r14
  __int64 v312; // r12
  int v313; // [rsp+0h] [rbp-1520h]
  int v314; // [rsp+8h] [rbp-1518h]
  char *srca; // [rsp+18h] [rbp-1508h]
  void *src; // [rsp+18h] [rbp-1508h]
  unsigned __int64 v317; // [rsp+20h] [rbp-1500h]
  __int64 v318; // [rsp+20h] [rbp-1500h]
  unsigned __int64 v319; // [rsp+20h] [rbp-1500h]
  unsigned __int64 v320; // [rsp+20h] [rbp-1500h]
  __int64 v321; // [rsp+20h] [rbp-1500h]
  _DWORD *v322; // [rsp+20h] [rbp-1500h]
  size_t n; // [rsp+28h] [rbp-14F8h]
  size_t nf; // [rsp+28h] [rbp-14F8h]
  size_t nh; // [rsp+28h] [rbp-14F8h]
  size_t nk; // [rsp+28h] [rbp-14F8h]
  size_t nl; // [rsp+28h] [rbp-14F8h]
  size_t ng; // [rsp+28h] [rbp-14F8h]
  size_t ne; // [rsp+28h] [rbp-14F8h]
  size_t ni; // [rsp+28h] [rbp-14F8h]
  size_t nj; // [rsp+28h] [rbp-14F8h]
  size_t na; // [rsp+28h] [rbp-14F8h]
  size_t nd; // [rsp+28h] [rbp-14F8h]
  size_t nc; // [rsp+28h] [rbp-14F8h]
  size_t nb; // [rsp+28h] [rbp-14F8h]
  __int64 v336; // [rsp+30h] [rbp-14F0h]
  int v337; // [rsp+30h] [rbp-14F0h]
  __int64 v338; // [rsp+38h] [rbp-14E8h]
  int v339; // [rsp+38h] [rbp-14E8h]
  __int64 v340; // [rsp+38h] [rbp-14E8h]
  char v341; // [rsp+40h] [rbp-14E0h]
  int v342; // [rsp+40h] [rbp-14E0h]
  __int64 v343; // [rsp+40h] [rbp-14E0h]
  __int64 v344; // [rsp+48h] [rbp-14D8h]
  size_t v345; // [rsp+48h] [rbp-14D8h]
  __int64 v346; // [rsp+50h] [rbp-14D0h]
  __int64 v347; // [rsp+50h] [rbp-14D0h]
  void *v348; // [rsp+50h] [rbp-14D0h]
  unsigned __int64 v349; // [rsp+50h] [rbp-14D0h]
  unsigned __int64 v350; // [rsp+50h] [rbp-14D0h]
  _BYTE *v351; // [rsp+50h] [rbp-14D0h]
  size_t v352; // [rsp+50h] [rbp-14D0h]
  __int64 v353; // [rsp+50h] [rbp-14D0h]
  size_t v354; // [rsp+50h] [rbp-14D0h]
  __int64 v355; // [rsp+50h] [rbp-14D0h]
  __int64 v356; // [rsp+50h] [rbp-14D0h]
  __int64 v357; // [rsp+50h] [rbp-14D0h]
  unsigned __int64 v358; // [rsp+50h] [rbp-14D0h]
  size_t v359; // [rsp+50h] [rbp-14D0h]
  unsigned __int64 v360; // [rsp+50h] [rbp-14D0h]
  unsigned __int64 v361; // [rsp+50h] [rbp-14D0h]
  _BYTE *v362; // [rsp+50h] [rbp-14D0h]
  _BYTE *v363; // [rsp+50h] [rbp-14D0h]
  _BYTE *v364; // [rsp+50h] [rbp-14D0h]
  _BYTE *v365; // [rsp+50h] [rbp-14D0h]
  size_t v366; // [rsp+50h] [rbp-14D0h]
  __int64 v367; // [rsp+50h] [rbp-14D0h]
  __int64 v368; // [rsp+50h] [rbp-14D0h]
  __int64 v369; // [rsp+58h] [rbp-14C8h]
  unsigned __int64 v370; // [rsp+58h] [rbp-14C8h]
  size_t v371; // [rsp+58h] [rbp-14C8h]
  unsigned __int64 v372; // [rsp+58h] [rbp-14C8h]
  unsigned __int64 v373; // [rsp+58h] [rbp-14C8h]
  __int64 v374; // [rsp+60h] [rbp-14C0h]
  _BYTE *v375; // [rsp+60h] [rbp-14C0h]
  _BYTE *v376; // [rsp+60h] [rbp-14C0h]
  __int64 v377; // [rsp+68h] [rbp-14B8h]
  char *v378; // [rsp+68h] [rbp-14B8h]
  void *v379; // [rsp+78h] [rbp-14A8h] BYREF
  char *s; // [rsp+80h] [rbp-14A0h] BYREF
  __int64 v381; // [rsp+88h] [rbp-1498h] BYREF
  void *v382; // [rsp+90h] [rbp-1490h]
  __int128 v383; // [rsp+98h] [rbp-1488h]
  void *v384; // [rsp+B0h] [rbp-1470h]
  __int128 v385; // [rsp+B8h] [rbp-1468h]
  __int64 v386; // [rsp+D0h] [rbp-1450h] BYREF
  __int128 v387; // [rsp+D8h] [rbp-1448h]
  char *v388; // [rsp+F0h] [rbp-1430h] BYREF
  __int128 v389; // [rsp+F8h] [rbp-1428h]
  char *v390; // [rsp+110h] [rbp-1410h]
  __int128 v391; // [rsp+118h] [rbp-1408h]
  _QWORD *v392; // [rsp+130h] [rbp-13F0h]
  __int128 v393; // [rsp+138h] [rbp-13E8h]
  _QWORD *v394; // [rsp+150h] [rbp-13D0h]
  __int128 v395; // [rsp+158h] [rbp-13C8h]
  __int64 v396; // [rsp+170h] [rbp-13B0h] BYREF
  __int128 v397; // [rsp+178h] [rbp-13A8h]
  _BYTE *v398; // [rsp+190h] [rbp-1390h] BYREF
  __int128 v399; // [rsp+198h] [rbp-1388h]
  _QWORD v400[485]; // [rsp+1B0h] [rbp-1370h] BYREF
  int v401; // [rsp+10D8h] [rbp-448h]
  _BYTE v402[1032]; // [rsp+10E0h] [rbp-440h] BYREF
  unsigned __int64 v403; // [rsp+14E8h] [rbp-38h]

  v4 = a1;
  v403 = __readfsqword(0x28u);
  v382 = nullptr;
  v384 = nullptr;
  v386 = 0;
  v388 = nullptr;
  v390 = nullptr;
  memset(v400, 0, sizeof(v400));
  v383 = 0;
  v392 = nullptr;
  v394 = nullptr;
  v385 = 0;
  v387 = 0;
  v389 = 0;
  v401 = 0;
  v391 = 0;
  v393 = 0;
  v395 = 0;
  v5 = *(_QWORD *)(a1 + 128);
  *(_BYTE *)(a1 + 56) = 0;
  v5 *= 9;
  *(_QWORD *)(a1 + 40) = 0;
  v6 = 8 * v5 + 1216;
  if ( 8 * v5 == -1216 )
  {
    n = 1216;
    v7 = 0;
    v313 = 1176;
    v314 = 520;
  }
  else
  {
    v386 = qvector_reserve();
    memset((void *)(v386 + v387), 0, v6 - v387);
    v7 = v386;
    *(_QWORD *)&v387 = v6;
    v314 = v386 + 520;
    v313 = v386 + 1176;
    n = v386 + 1216;
  }
  v8 = *(_QWORD *)(a1 + 192);
  if ( *(_WORD *)(v8 + 104) == 523 )
    v9 = *(_QWORD *)(v8 + 128);
  else
    v9 = *(unsigned int *)(v8 + 132);
  v10 = *(_QWORD *)(a1 + 112);
  v11 = v4 + 96;
  v344 = v4 + 96;
  if ( v4 + 96 == v10 )
  {
LABEL_326:
    v13 = *(_QWORD *)(v11 + 56);
  }
  else
  {
    v12 = v9;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v10 + 56);
      if ( v12 == *(_QWORD *)(v13 + 820) )
        break;
      v10 = std::_Rb_tree_increment();
      if ( v344 == v10 )
      {
        v11 = v4 + 96;
        goto LABEL_326;
      }
    }
  }
  v14 = sub_4B8A0((_QWORD *)v4, "ntdll", 0);
  v369 = v14;
  v15 = sub_4B8A0((_QWORD *)v4, "kernel32", 0);
  v346 = v15;
  if ( !v14 || !v15 || v15 == v13 || v14 == v13 )
  {
    v341 = 0;
    v377 = 0;
  }
  else
  {
    v341 = 1;
    v377 = 3;
  }
  v16 = *(_QWORD *)(v4 + 128);
  v17 = v393;
  if ( (unsigned __int64)v393 < v16 )
  {
    v308 = v392;
    if ( *((_QWORD *)&v393 + 1) < v16 )
    {
      v392 = (_QWORD *)qvector_reserve();
      v308 = v392;
      v17 = v393;
    }
    memset(&v308[v17], 0, 8 * (v16 - v17));
    *(_QWORD *)&v393 = v16;
    v16 = *(_QWORD *)(v4 + 128);
  }
  else if ( v16 != (_QWORD)v393 )
  {
    *(_QWORD *)&v393 = *(_QWORD *)(v4 + 128);
  }
  v18 = v395;
  if ( (unsigned __int64)v395 < v16 )
  {
    v307 = v394;
    if ( *((_QWORD *)&v395 + 1) < v16 )
    {
      v394 = (_QWORD *)qvector_reserve();
      v307 = v394;
      v18 = v395;
    }
    memset(&v307[v18], 0, 8 * (v16 - v18));
    *(_QWORD *)&v395 = v16;
  }
  else if ( v16 != (_QWORD)v395 )
  {
    *(_QWORD *)&v395 = v16;
  }
  v19 = *(_QWORD *)(v4 + 112);
  v20 = v392;
  if ( v344 != v19 )
  {
    v336 = v4;
    v21 = v392;
    v22 = v377;
    v338 = v7;
    v23 = 0;
    while ( 1 )
    {
      v24 = n + 72LL * v23;
      if ( v341 )
      {
        v25 = *(_QWORD *)(v19 + 56);
        if ( v13 == v25 )
        {
          *v21 = v24;
          v21 = v392;
          v394[2] = v24;
          goto LABEL_28;
        }
        if ( v369 == v25 )
        {
          v302 = v394;
          v21[1] = v24;
          *v302 = v24;
          v21 = v392;
          goto LABEL_28;
        }
        if ( v346 == v25 )
        {
          v305 = v394;
          v21[2] = v24;
          v305[1] = v24;
          goto LABEL_28;
        }
      }
      v21[v22] = v24;
      v394[v22] = v24;
      v21 = v392;
      ++v22;
LABEL_28:
      ++v23;
      v19 = std::_Rb_tree_increment();
      if ( v344 == v19 )
      {
        v20 = v21;
        v7 = v338;
        v4 = v336;
        break;
      }
    }
  }
  v26 = v386;
  *(_DWORD *)(v7 + 1212) = 0;
  v27 = v382;
  *(_DWORD *)(v7 + 1184) = 0;
  *(_QWORD *)(v7 + 1176) = 0x100000028LL;
  *(_DWORD *)(v7 + 1188) = *v20 - v26;
  v342 = v7 + 1188;
  v28 = v383;
  v29 = (_BYTE *)(v7 + 1188 - v26);
  v398 = v29;
  v30 = v383 + 1;
  if ( &v398 >= v27 && &v398 < &v27[*((_QWORD *)&v383 + 1)] )
  {
    if ( *((_QWORD *)&v383 + 1) < v30 )
    {
      v382 = (void *)qvector_reserve();
      v27 = v382;
      v28 = v383;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v30 )
  {
    v382 = (void *)qvector_reserve();
    v27 = v382;
    v29 = v398;
    v28 = v383;
  }
  v27[v28] = v29;
  v31 = v386;
  v32 = v383 + 1;
  v33 = v382;
  v34 = v383 + 2;
  *(_QWORD *)&v383 = v383 + 1;
  *(_DWORD *)(v7 + 1196) = *v392 + 8 - v386;
  v339 = v7 + 1196;
  v35 = (_BYTE *)(v7 + 1196 - v31);
  v398 = v35;
  if ( &v398 >= v33 && &v398 < &v33[*((_QWORD *)&v383 + 1)] )
  {
    if ( *((_QWORD *)&v383 + 1) < v34 )
    {
      v382 = (void *)qvector_reserve();
      v32 = v383;
      v33 = v382;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v34 )
  {
    v382 = (void *)qvector_reserve();
    v32 = v383;
    v33 = v382;
    v35 = v398;
  }
  v33[v32] = v35;
  v36 = v386;
  v37 = v383 + 1;
  v38 = v382;
  v39 = v383 + 2;
  *(_QWORD *)&v383 = v383 + 1;
  *(_DWORD *)(v7 + 1204) = *v394 + 16 - v386;
  v337 = v7 + 1204;
  v40 = (_BYTE *)(v7 + 1204 - v36);
  v398 = v40;
  if ( &v398 >= v38 && &v398 < &v38[*((_QWORD *)&v383 + 1)] )
  {
    if ( *((_QWORD *)&v383 + 1) < v39 )
    {
      v382 = (void *)qvector_reserve();
      v37 = v383;
      v38 = v382;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v39 )
  {
    v382 = (void *)qvector_reserve();
    v37 = v383;
    v38 = v382;
    v40 = v398;
  }
  v38[v37] = v40;
  *(_QWORD *)&v383 = v383 + 1;
  v41 = *(_QWORD *)(v4 + 112);
  v374 = v387;
  if ( v344 == v41 )
  {
    v116 = 0x1FFFFFFFFFFFFFFFLL;
    goto LABEL_138;
  }
  v42 = 0;
  v43 = n + 40;
  while ( 1 )
  {
    v78 = *(_DWORD **)(v41 + 56);
    *(_DWORD *)(v43 - 12) = v78[205] + v78[30];
    *(_DWORD *)(v43 - 16) = *(_QWORD *)(v78 + 205);
    *(_WORD *)(v43 + 18) = 0;
    v79 = v78[40];
    *(_DWORD *)(v43 + 12) = 20480;
    *(_DWORD *)(v43 - 8) = v79;
    *(_DWORD *)(v43 + 28) = v78[22];
    utf8_utf16();
    v80 = &unk_61EC0;
    if ( (_QWORD)v391 )
      v80 = v390;
    v348 = v80;
    v81 = qstrrchr();
    v82 = v391;
    if ( !v81 || (v83 = (v81 - (__int64)v348) >> 1, v83 == -1) )
    {
      v86 = 0;
      v85 = 0;
    }
    else
    {
      v84 = v391 - 1;
      if ( !(_QWORD)v391 )
        v84 = 0;
      v85 = v84 - v83 - 1;
      v86 = _mm_cvtsi32_si128(v85);
    }
    a4 = (__m128)_mm_cvtsi32_si128(v391);
    a3 = _mm_shufflelo_epi16((__m128i)a4, 0);
    *(_DWORD *)(v43 - 4) = _mm_cvtsi128_si32(a3);
    v87 = v389;
    *(_WORD *)(v43 + 16) = -1;
    *(_DWORD *)(v43 + 4) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(v86, 0));
    *(_DWORD *)v43 = v87 + v374;
    *(_DWORD *)(v43 + 8) = v87 + v374 + 2 * ((unsigned __int16)v82 - 1 - v85);
    if ( v82 )
    {
      v88 = 2 * v82 - 2;
      v89 = v390;
      if ( 2 * v82 != 2 )
      {
        v90 = v87 + v88;
        if ( __CFADD__(v87, v88) )
        {
          if ( v87 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( v87 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v389 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_88;
          }
          v90 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v91 = v388;
        v92 = v87;
        if ( *((_QWORD *)&v389 + 1) < v90 )
        {
          v320 = v87;
          ne = 2 * v82 - 2;
          v361 = v90;
          v388 = (char *)qvector_reserve();
          v91 = v388;
          v89 = v390;
          v92 = v389;
          v87 = v320;
          v88 = ne;
          v90 = v361;
        }
        srca = v89;
        v317 = v87;
        nf = v88;
        v349 = v90;
        memset(&v91[v92], 0, v90 - v92);
        v88 = nf;
        v87 = v317;
        v89 = srca;
        *(_QWORD *)&v389 = v349;
LABEL_88:
        memcpy(&v388[v87], v89, v88);
        v87 = v389;
      }
    }
    v93 = v87 + 2;
    if ( v87 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v97 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v94 = v388;
      v95 = v87;
      v96 = 2;
      if ( *((_QWORD *)&v389 + 1) < v87 + 2 )
      {
        v319 = v87 + 2;
        ng = v87;
        v360 = v87 + 2;
        v388 = (char *)qvector_reserve();
        v94 = v388;
        v95 = v389;
        v93 = v319;
        v87 = ng;
        v96 = v360 - v389;
      }
      nh = v93;
      v350 = v87;
      memset(&v94[v95], 0, v96);
      v87 = v350;
      v97 = nh;
    }
    *(_QWORD *)&v389 = v97;
    *(_WORD *)&v388[v87] = 0;
    v98 = v383;
    v99 = v382;
    v100 = (_BYTE *)(v43 + 8 - v386);
    v398 = v100;
    v101 = v383 + 1;
    if ( &v398 < v382 || &v398 >= (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
    {
      if ( *((_QWORD *)&v383 + 1) < v101 )
      {
        v382 = (void *)qvector_reserve();
        v99 = v382;
        v100 = v398;
        v98 = v383;
      }
    }
    else if ( *((_QWORD *)&v383 + 1) < v101 )
    {
      v382 = (void *)qvector_reserve();
      v99 = v382;
      v100 = (_BYTE *)(v43 + 8 - v386);
      v98 = v383;
    }
    v99[v98] = v100;
    v299 = v382;
    v301 = v383 + 1;
    v300 = (_BYTE *)(v43 - v386);
    v102 = v383 + 2;
    *(_QWORD *)&v383 = v383 + 1;
    v398 = (_BYTE *)(v43 - v386);
    if ( &v398 < v382 || &v398 >= (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
    {
      if ( *((_QWORD *)&v383 + 1) < v102 )
      {
        v382 = (void *)qvector_reserve();
        v299 = v382;
        v300 = v398;
        v301 = v383;
      }
    }
    else if ( *((_QWORD *)&v383 + 1) < v102 )
    {
      v382 = (void *)qvector_reserve();
      v299 = v382;
      v300 = (_BYTE *)(v43 - v386);
      v301 = v383;
    }
    v299[v301] = v300;
    *(_QWORD *)&v383 = v383 + 1;
    if ( v42 )
    {
      v103 = 8 * v42;
      v104 = v392[v42];
      *(_DWORD *)(v104 + 4) = v392[v42 - 1] - v386;
      v105 = v382;
      v106 = (_BYTE *)(v104 + 4 - v386);
      *(_DWORD *)(v104 + 12) = v392[v42 - 1] + 8 - v386;
      v107 = v383;
      v398 = v106;
      v108 = v383 + 1;
      if ( &v398 < v105 || &v398 >= &v105[*((_QWORD *)&v383 + 1)] )
      {
        if ( *((_QWORD *)&v383 + 1) < v108 )
        {
          v354 = v104;
          v382 = (void *)qvector_reserve();
          v105 = v382;
          v106 = v398;
          v107 = v383;
          v103 = 8 * v42;
          v104 = v354;
        }
      }
      else if ( *((_QWORD *)&v383 + 1) < v108 )
      {
        ni = v104;
        v363 = v106;
        v382 = (void *)qvector_reserve();
        v105 = v382;
        v103 = 8 * v42;
        v107 = v383;
        v104 = ni;
        v106 = v363;
      }
      v105[v107] = v106;
      v109 = v382;
      v110 = v383 + 1;
      v111 = v383 + 2;
      v398 = (_BYTE *)(v104 + 12 - v386);
      v112 = v398;
      *(_QWORD *)&v383 = v383 + 1;
      if ( &v398 < v382 || &v398 >= (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
      {
        if ( *((_QWORD *)&v383 + 1) < v111 )
        {
          v353 = v103;
          v382 = (void *)qvector_reserve();
          v110 = v383;
          v109 = v382;
          v112 = v398;
          v103 = v353;
        }
      }
      else if ( *((_QWORD *)&v383 + 1) < v111 )
      {
        nj = v103;
        v364 = v398;
        v382 = (void *)qvector_reserve();
        v110 = v383;
        v109 = v382;
        v103 = nj;
        v112 = v364;
      }
      v109[v110] = v112;
      v113 = v386;
      v53 = v383 + 1;
      v114 = v383 + 2;
      *(_QWORD *)&v383 = v383 + 1;
      v115 = (_DWORD *)(*(_QWORD *)((char *)v394 + v103) + 20LL);
      *v115 = *(_QWORD *)((char *)v394 + v103 - 8) + 16 - v386;
      v58 = (char *)v115 - v113;
      v57 = v382;
      v398 = v58;
      if ( &v398 >= v382 && &v398 < (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
      {
        if ( *((_QWORD *)&v383 + 1) >= v114 )
          goto LABEL_59;
        goto LABEL_114;
      }
      if ( *((_QWORD *)&v383 + 1) < v114 )
      {
LABEL_118:
        v382 = (void *)qvector_reserve();
        v53 = v383;
        v57 = v382;
        v58 = v398;
      }
    }
    else
    {
      v44 = *v392;
      *(_DWORD *)(v44 + 4) = v342 - v386;
      v45 = v382;
      v46 = (_BYTE *)(v44 + 4 - v386);
      *(_DWORD *)(v44 + 12) = v339 - v386;
      v47 = v383;
      v398 = v46;
      v48 = v383 + 1;
      if ( &v398 < v45 || &v398 >= &v45[*((_QWORD *)&v383 + 1)] )
      {
        if ( *((_QWORD *)&v383 + 1) < v48 )
        {
          v352 = v44;
          v382 = (void *)qvector_reserve();
          v45 = v382;
          v46 = v398;
          v47 = v383;
          v44 = v352;
        }
      }
      else if ( *((_QWORD *)&v383 + 1) < v48 )
      {
        na = v44;
        v365 = v46;
        v382 = (void *)qvector_reserve();
        v45 = v382;
        v44 = na;
        v47 = v383;
        v46 = v365;
      }
      v45[v47] = v46;
      v49 = v382;
      v50 = v383 + 1;
      v51 = v383 + 2;
      v398 = (_BYTE *)(v44 + 12 - v386);
      v52 = v398;
      *(_QWORD *)&v383 = v383 + 1;
      if ( &v398 < v382 || &v398 >= (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
      {
        if ( *((_QWORD *)&v383 + 1) < v51 )
        {
          v382 = (void *)qvector_reserve();
          v50 = v383;
          v49 = v382;
          v52 = v398;
        }
      }
      else if ( *((_QWORD *)&v383 + 1) < v51 )
      {
        v362 = v398;
        v382 = (void *)qvector_reserve();
        v50 = v383;
        v49 = v382;
        v52 = v362;
      }
      v49[v50] = v52;
      v53 = v383 + 1;
      v54 = v383 + 2;
      *(_QWORD *)&v383 = v383 + 1;
      v55 = v386;
      v56 = (_DWORD *)(*v394 + 20LL);
      *v56 = v337 - v386;
      v57 = v382;
      v58 = (char *)v56 - v55;
      v398 = v58;
      if ( &v398 >= v382 && &v398 < (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
      {
        if ( *((_QWORD *)&v383 + 1) >= v54 )
          goto LABEL_59;
LABEL_114:
        v351 = v58;
        v382 = (void *)qvector_reserve();
        v53 = v383;
        v57 = v382;
        v58 = v351;
        goto LABEL_59;
      }
      if ( *((_QWORD *)&v383 + 1) < v54 )
        goto LABEL_118;
    }
LABEL_59:
    v57[v53] = v58;
    v59 = v42 + 1;
    *(_QWORD *)&v383 = v383 + 1;
    if ( v42 + 1 != *(_QWORD *)(v4 + 128) )
    {
      v60 = 8 * v59;
      v61 = (_DWORD *)v392[v59 - 1];
      *v61 = v392[v59] - v386;
      v62 = v383;
      v63 = (char *)v61 - v386;
      v64 = v382;
      v398 = (char *)v61 - v386;
      v65 = v383 + 1;
      if ( &v398 < v382 || &v398 >= (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
      {
        if ( *((_QWORD *)&v383 + 1) < v65 )
        {
          v318 = 8 * v59;
          nl = (size_t)v61;
          v382 = (void *)qvector_reserve();
          v64 = v382;
          v63 = v398;
          v62 = v383;
          v60 = v318;
          v61 = (_DWORD *)nl;
          v59 = v42 + 1;
        }
      }
      else if ( *((_QWORD *)&v383 + 1) < v65 )
      {
        src = (void *)(8 * v59);
        v322 = v61;
        nb = (size_t)v61 - v386;
        v382 = (void *)qvector_reserve();
        v64 = v382;
        v60 = (__int64)src;
        v62 = v383;
        v61 = v322;
        v63 = (_BYTE *)nb;
        v59 = v42 + 1;
      }
      v64[v62] = v63;
      v66 = v61 + 2;
      *(_QWORD *)&v383 = v383 + 1;
      v67 = v386;
      v68 = v382;
      *v66 = v392[v59] + 8 - v386;
      v69 = v383;
      v70 = (char *)v66 - v67;
      v398 = v70;
      v71 = v383 + 1;
      if ( &v398 < v68 || &v398 >= &v68[*((_QWORD *)&v383 + 1)] )
      {
        if ( *((_QWORD *)&v383 + 1) < v71 )
        {
          nk = v60;
          v356 = v59;
          v382 = (void *)qvector_reserve();
          v68 = v382;
          v70 = v398;
          v69 = v383;
          v60 = nk;
          v59 = v356;
        }
      }
      else if ( *((_QWORD *)&v383 + 1) < v71 )
      {
        v321 = v60;
        nc = (size_t)v70;
        v368 = v59;
        v382 = (void *)qvector_reserve();
        v68 = v382;
        v60 = v321;
        v69 = v383;
        v70 = (_BYTE *)nc;
        v59 = v368;
      }
      v68[v69] = v70;
      v72 = v386;
      v73 = v383 + 1;
      v74 = v383 + 2;
      *(_QWORD *)&v383 = v383 + 1;
      v75 = (_DWORD *)(*(_QWORD *)((char *)v394 + v60 - 8) + 16LL);
      *v75 = v394[v59] + 16 - v386;
      v76 = (char *)v75 - v72;
      v77 = v382;
      v398 = v76;
      if ( &v398 < v382 || &v398 >= (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
      {
        if ( *((_QWORD *)&v383 + 1) < v74 )
        {
          v355 = v59;
          v382 = (void *)qvector_reserve();
          v73 = v383;
          v77 = v382;
          v76 = v398;
          v59 = v355;
        }
      }
      else if ( *((_QWORD *)&v383 + 1) < v74 )
      {
        nd = (size_t)v76;
        v367 = v59;
        v382 = (void *)qvector_reserve();
        v73 = v383;
        v77 = v382;
        v76 = (_BYTE *)nd;
        v59 = v367;
      }
      v77[v73] = v76;
      *(_QWORD *)&v383 = v383 + 1;
    }
    v347 = v59;
    v43 += 72LL;
    v41 = std::_Rb_tree_increment();
    if ( v344 == v41 )
      break;
    v42 = v347;
  }
  v116 = v42;
LABEL_138:
  v117 = (_DWORD *)v392[v116];
  *v117 = v342 - v386;
  v118 = v383;
  v119 = v382;
  v120 = (char *)v117 - v386;
  v398 = (char *)v117 - v386;
  v121 = v383 + 1;
  if ( &v398 >= v382 && &v398 < (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
  {
    if ( *((_QWORD *)&v383 + 1) < v121 )
    {
      v382 = (void *)qvector_reserve();
      v119 = v382;
      v118 = v383;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v121 )
  {
    v382 = (void *)qvector_reserve();
    v119 = v382;
    v120 = v398;
    v118 = v383;
  }
  v119[v118] = v120;
  v122 = v386;
  v123 = v117 + 2;
  *(_QWORD *)&v383 = v383 + 1;
  v124 = v382;
  *v123 = v339 - v386;
  v125 = v383;
  v126 = (char *)v123 - v122;
  v398 = v126;
  v127 = v383 + 1;
  if ( &v398 >= v124 && &v398 < &v124[*((_QWORD *)&v383 + 1)] )
  {
    if ( *((_QWORD *)&v383 + 1) < v127 )
    {
      v382 = (void *)qvector_reserve();
      v124 = v382;
      v125 = v383;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v127 )
  {
    v382 = (void *)qvector_reserve();
    v124 = v382;
    v126 = v398;
    v125 = v383;
  }
  v124[v125] = v126;
  v128 = v386;
  v129 = v383 + 1;
  v130 = v382;
  v131 = v383 + 2;
  *(_QWORD *)&v383 = v383 + 1;
  v132 = (_DWORD *)(v394[v116] + 16LL);
  *v132 = v337 - v386;
  v133 = (char *)v132 - v128;
  v398 = v133;
  if ( &v398 >= v130 && &v398 < &v130[*((_QWORD *)&v383 + 1)] )
  {
    if ( *((_QWORD *)&v383 + 1) < v131 )
    {
      v382 = (void *)qvector_reserve();
      v129 = v383;
      v130 = v382;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v131 )
  {
    v382 = (void *)qvector_reserve();
    v129 = v383;
    v130 = v382;
    v133 = v398;
  }
  v130[v129] = v133;
  v134 = v383 + 1;
  v135 = v382;
  v136 = v383 + 2;
  *(_QWORD *)&v383 = v383 + 1;
  v137 = (_BYTE *)(v7 + 1192 - v386);
  *(_DWORD *)(v7 + 1192) = v392[v116] - v386;
  v398 = v137;
  if ( &v398 >= v135 && &v398 < &v135[*((_QWORD *)&v383 + 1)] )
  {
    if ( *((_QWORD *)&v383 + 1) < v136 )
    {
      v382 = (void *)qvector_reserve();
      v134 = v383;
      v135 = v382;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v136 )
  {
    v382 = (void *)qvector_reserve();
    v134 = v383;
    v135 = v382;
    v137 = v398;
  }
  v135[v134] = v137;
  v138 = v383 + 1;
  v139 = v382;
  v140 = v383 + 2;
  *(_QWORD *)&v383 = v383 + 1;
  v141 = (_BYTE *)(v7 + 1200 - v386);
  *(_DWORD *)(v7 + 1200) = v392[v116] + 8 - v386;
  v398 = v141;
  if ( &v398 >= v139 && &v398 < &v139[*((_QWORD *)&v383 + 1)] )
  {
    if ( *((_QWORD *)&v383 + 1) < v140 )
    {
      v382 = (void *)qvector_reserve();
      v138 = v383;
      v139 = v382;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v140 )
  {
    v382 = (void *)qvector_reserve();
    v138 = v383;
    v139 = v382;
    v141 = v398;
  }
  v139[v138] = v141;
  v142 = v383 + 1;
  v143 = v382;
  v144 = v383 + 2;
  *(_QWORD *)&v383 = v383 + 1;
  v145 = (_BYTE *)(v7 + 1208 - v386);
  *(_DWORD *)(v7 + 1208) = v394[v116] + 16 - v386;
  v398 = v145;
  if ( &v398 >= v143 && &v398 < &v143[*((_QWORD *)&v383 + 1)] )
  {
    if ( *((_QWORD *)&v383 + 1) < v144 )
    {
      v382 = (void *)qvector_reserve();
      v142 = v383;
      v143 = v382;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v144 )
  {
    v382 = (void *)qvector_reserve();
    v142 = v383;
    v143 = v382;
    v145 = v398;
  }
  v143[v142] = v145;
  *(_DWORD *)(v7 + 552) = 7;
  *(_QWORD *)(v7 + 544) = 0x700000003LL;
  v146 = *(_QWORD *)(v4 + 72);
  *(_QWORD *)&v383 = v383 + 1;
  v340 = v146;
  utf8_utf16();
  v147 = v391;
  v148 = _mm_cvtsi32_si128(v391);
  *(_DWORD *)(v7 + 560) = v389 + v374;
  *(_DWORD *)(v7 + 556) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(v148, 0));
  v149 = 2 * v147;
  if ( v149 )
    sub_4ACC0((__int64 *)&v388, v390, v149);
  v150 = v383;
  v151 = v382;
  v152 = (_BYTE *)(v7 + 560 - v386);
  v398 = v152;
  v153 = v383 + 1;
  if ( &v398 >= v382 && &v398 < (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
  {
    if ( *((_QWORD *)&v383 + 1) < v153 )
    {
      v382 = (void *)qvector_reserve();
      v151 = v382;
      v150 = v383;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v153 )
  {
    v382 = (void *)qvector_reserve();
    v151 = v382;
    v152 = v398;
    v150 = v383;
  }
  v151[v150] = v152;
  *(_QWORD *)&v383 = v383 + 1;
  utf8_utf16();
  v154 = v391;
  v155 = _mm_cvtsi32_si128(v391);
  *(_DWORD *)(v7 + 580) = v389 + v374;
  *(_DWORD *)(v7 + 576) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(v155, 0));
  v156 = 2 * v154;
  if ( v156 )
    sub_4ACC0((__int64 *)&v388, v390, v156);
  v157 = v383;
  v158 = v382;
  v159 = (_BYTE *)(v7 + 580 - v386);
  v398 = v159;
  v160 = v383 + 1;
  if ( &v398 >= v382 && &v398 < (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
  {
    if ( *((_QWORD *)&v383 + 1) < v160 )
    {
      v382 = (void *)qvector_reserve();
      v158 = v382;
      v157 = v383;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v160 )
  {
    v382 = (void *)qvector_reserve();
    v158 = v382;
    v159 = v398;
    v157 = v383;
  }
  v158[v157] = v159;
  *(_QWORD *)&v383 = v383 + 1;
  v398 = nullptr;
  v399 = 0;
  sub_F490((__int64 *)&v398);
  v161 = v340;
  if ( *(_BYTE *)(v340 + 9360) )
  {
    v309 = v399;
    if ( (_QWORD)v399 )
    {
      v311 = v399 + 1;
      v312 = v399;
      v310 = v398;
      v309 = v399 - 1;
      if ( *((_QWORD *)&v399 + 1) >= (unsigned __int64)(v399 + 1) )
        goto LABEL_412;
    }
    else
    {
      v310 = v398;
      v311 = 2;
      v312 = 1;
      if ( *((_QWORD *)&v399 + 1) >= 2u )
      {
LABEL_412:
        *(_QWORD *)&v399 = v311;
        v161 = v340;
        v310[v312] = 0;
        v398[v309] = 32;
        goto LABEL_175;
      }
    }
    v398 = (_BYTE *)qvector_reserve();
    v310 = v398;
    goto LABEL_412;
  }
LABEL_175:
  v162 = (const void *)(v161 + 9360);
  v163 = strlen((const char *)(v161 + 9360));
  v164 = v399;
  v165 = v163;
  v166 = v163;
  if ( (_QWORD)v399 )
  {
    v164 = v399 - 1;
    v166 = v163 + v399 - 1;
  }
  v167 = v398;
  v168 = v166 + 1;
  if ( *((_QWORD *)&v399 + 1) < v166 + 1 )
  {
    v345 = v166;
    v366 = v166 + 1;
    v398 = (_BYTE *)qvector_reserve();
    v166 = v345;
    v167 = v398;
    v168 = v366;
  }
  *(_QWORD *)&v399 = v168;
  v167[v166] = 0;
  memmove(&v398[v164], v162, v165);
  qstrncpy();
  utf8_utf16();
  v169 = v391;
  v170 = 2;
  if ( (_QWORD)v391 )
  {
    v170 = v391 + 1;
    v169 = v391 - 1;
  }
  v171 = v390;
  if ( *((_QWORD *)&v391 + 1) < v170 )
  {
    v390 = (char *)qvector_reserve();
    v171 = v390;
  }
  *(_QWORD *)&v391 = v170;
  *(_WORD *)&v171[2 * v169] = 0;
  *(_WORD *)&v390[2 * v169 + 2] = 0;
  v172 = v391;
  v173 = _mm_cvtsi32_si128(v391);
  *(_DWORD *)(v7 + 588) = v389 + v374;
  *(_DWORD *)(v7 + 584) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(v173, 0));
  v174 = 2 * v172;
  if ( v174 )
    sub_4ACC0((__int64 *)&v388, v390, v174);
  v175 = v383;
  v176 = v382;
  v177 = v7 + 588 - v386;
  v396 = v177;
  v178 = v383 + 1;
  if ( &v396 >= v382 && &v396 < (__int64 *)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
  {
    if ( *((_QWORD *)&v383 + 1) < v178 )
    {
      v382 = (void *)qvector_reserve();
      v176 = v382;
      v175 = v383;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v178 )
  {
    v382 = (void *)qvector_reserve();
    v176 = v382;
    v177 = v396;
    v175 = v383;
  }
  v176[v175] = v177;
  v179 = *(_DWORD *)(v7 + 588);
  v180 = v384;
  v396 = 204;
  HIDWORD(v400[25]) = v179;
  v181 = v385;
  *(_QWORD *)&v383 = v383 + 1;
  v182 = v385 + 1;
  if ( &v396 >= v384 && &v396 < (__int64 *)((char *)v384 + 8 * *((_QWORD *)&v385 + 1)) )
  {
    if ( *((_QWORD *)&v385 + 1) < v182 )
    {
      v384 = (void *)qvector_reserve();
      v180 = v384;
      v181 = v385;
    }
    v180[v181] = 204;
  }
  else
  {
    if ( *((_QWORD *)&v385 + 1) < v182 )
    {
      v384 = (void *)qvector_reserve();
      v180 = v384;
      v183 = v396;
      v181 = v385;
    }
    else
    {
      v183 = 204;
    }
    v180[v181] = v183;
  }
  v184 = v384;
  v396 = 208;
  v185 = v385 + 1;
  v186 = v385 + 2;
  LODWORD(v400[26]) = v389 + v374;
  *(_QWORD *)&v385 = v385 + 1;
  if ( &v396 >= v384 && &v396 < (__int64 *)((char *)v384 + 8 * *((_QWORD *)&v385 + 1)) )
  {
    if ( *((_QWORD *)&v385 + 1) < v186 )
    {
      v384 = (void *)qvector_reserve();
      v184 = v384;
      v185 = v385;
    }
    v184[v185] = 208;
  }
  else
  {
    if ( *((_QWORD *)&v385 + 1) < v186 )
    {
      v384 = (void *)qvector_reserve();
      v184 = v384;
      v187 = v396;
      v185 = v385;
    }
    else
    {
      v187 = 208;
    }
    v184[v185] = v187;
  }
  *(_QWORD *)&v385 = v385 + 1;
  if ( (_QWORD)v399 )
    sub_4ACC0((__int64 *)&v388, v398, v399);
  if ( v398 )
  {
    *(_QWORD *)&v399 = 0;
    qfree();
  }
  v398 = (_BYTE *)(&qword_28 + 4);
  HIDWORD(v400[5]) = v389 + v374;
  v188 = v384;
  v189 = v385;
  v190 = v385 + 1;
  if ( &v398 >= v384 && &v398 < (_BYTE **)((char *)v384 + 8 * *((_QWORD *)&v385 + 1)) )
  {
    if ( *((_QWORD *)&v385 + 1) < v190 )
    {
      v384 = (void *)qvector_reserve();
      v188 = v384;
      v189 = v385;
    }
    v188[v189] = 44;
  }
  else
  {
    if ( *((_QWORD *)&v385 + 1) < v190 )
    {
      v384 = (void *)qvector_reserve();
      v188 = v384;
      v191 = v398;
      v189 = v385;
    }
    else
    {
      v191 = (_BYTE *)(&qword_28 + 4);
    }
    v188[v189] = v191;
  }
  *(_QWORD *)&v385 = v385 + 1;
  LODWORD(v396) = v374 + v389 + 4;
  sub_4ACC0((__int64 *)&v388, &v396, 4u);
  v192 = v383;
  v193 = v382;
  v194 = (_BYTE *)(v389 + v374 - 4);
  v398 = v194;
  v195 = v383 + 1;
  if ( &v398 >= v382 && &v398 < (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
  {
    if ( *((_QWORD *)&v383 + 1) < v195 )
    {
      v382 = (void *)qvector_reserve();
      v193 = v382;
      v192 = v383;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v195 )
  {
    v382 = (void *)qvector_reserve();
    v193 = v382;
    v194 = v398;
    v192 = v383;
  }
  v193[v192] = v194;
  memset(v402, 0, 0x400u);
  *(_QWORD *)&v383 = v383 + 1;
  sub_4ACC0((__int64 *)&v388, v402, 0x400u);
  *(_DWORD *)(v7 + 592) = v389 + v374;
  v196 = v382;
  v197 = v383;
  v198 = (_BYTE *)(v7 + 592 - v386);
  v398 = v198;
  v199 = v383 + 1;
  if ( &v398 >= v382 && &v398 < (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
  {
    if ( *((_QWORD *)&v383 + 1) < v199 )
    {
      v382 = (void *)qvector_reserve();
      v196 = v382;
      v197 = v383;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v199 )
  {
    v382 = (void *)qvector_reserve();
    v196 = v382;
    v198 = v398;
    v197 = v383;
  }
  v196[v197] = v198;
  *(_QWORD *)&v383 = v383 + 1;
  v396 = 0;
  v397 = 0;
  sub_4C670(v4, (__int64 *)&v379, &s, &v396);
  if ( v390 )
  {
    *(_QWORD *)&v391 = 0;
    qfree();
    v390 = nullptr;
    *((_QWORD *)&v391 + 1) = 0;
  }
  for ( i = v379; *i; v379 = i )
  {
    v205 = qstrlen();
    v206 = v391;
    v207 = v205;
    v208 = v205;
    if ( (_QWORD)v391 )
    {
      v206 = v391 - 1;
      v208 = v205 + v391 - 1;
    }
    v209 = v390;
    v210 = v208 + 1;
    if ( *((_QWORD *)&v391 + 1) < (unsigned __int64)(v208 + 1) )
    {
      v343 = v208;
      v357 = v208 + 1;
      v390 = (char *)qvector_reserve();
      v208 = v343;
      v209 = v390;
      v210 = v357;
    }
    *(_QWORD *)&v391 = v210;
    v201 = 2 * v207;
    *(_WORD *)&v209[2 * v208] = 0;
    memmove(&v390[2 * v206], i, v201);
    v202 = v391;
    v203 = 2;
    if ( (_QWORD)v391 )
    {
      v203 = v391 + 1;
      v202 = v391 - 1;
    }
    v204 = v390;
    if ( *((_QWORD *)&v391 + 1) < v203 )
    {
      v358 = v203;
      v390 = (char *)qvector_reserve();
      v203 = v358;
      v204 = v390;
    }
    *(_QWORD *)&v391 = v203;
    i = (_WORD *)((char *)i + v201 + 2);
    *(_WORD *)&v204[2 * v202] = 0;
    *(_WORD *)&v390[2 * v202 + 2] = 0;
  }
  v211 = v391;
  v212 = 2;
  if ( (_QWORD)v391 )
  {
    v212 = v391 + 1;
    v211 = v391 - 1;
  }
  v213 = v390;
  if ( *((_QWORD *)&v391 + 1) < v212 )
  {
    v390 = (char *)qvector_reserve();
    v213 = v390;
  }
  *(_QWORD *)&v391 = v212;
  *(_WORD *)&v213[2 * v211] = 0;
  *(_WORD *)&v390[2 * v211 + 2] = 0;
  v214 = v384;
  v398 = (_BYTE *)(&qword_D0 + 4);
  HIDWORD(v400[26]) = v389 + v374;
  v215 = v385;
  v216 = v385 + 1;
  if ( &v398 >= v384 && &v398 < (_BYTE **)((char *)v384 + 8 * *((_QWORD *)&v385 + 1)) )
  {
    if ( *((_QWORD *)&v385 + 1) < v216 )
    {
      v384 = (void *)qvector_reserve();
      v214 = v384;
      v215 = v385;
    }
    v214[v215] = 212;
  }
  else
  {
    if ( *((_QWORD *)&v385 + 1) < v216 )
    {
      v384 = (void *)qvector_reserve();
      v214 = v384;
      v217 = v398;
      v215 = v385;
    }
    else
    {
      v217 = (_BYTE *)(&qword_D0 + 4);
    }
    v214[v215] = v217;
  }
  *(_QWORD *)&v385 = v385 + 1;
  if ( 2LL * (_QWORD)v391 )
    sub_4ACC0((__int64 *)&v388, v390, 2 * v391);
  v218 = s;
  v219 = nullptr;
  v398 = nullptr;
  v399 = 0;
  if ( !*s )
  {
    v229 = 2;
    v221 = 0;
LABEL_403:
    v373 = v229;
    v398 = (_BYTE *)qvector_reserve();
    v229 = v373;
    v219 = v398;
    goto LABEL_254;
  }
  v220 = 0;
  v221 = 0;
  do
  {
    v370 = v220;
    v225 = strlen(v218);
    v226 = v225;
    v227 = v225;
    if ( v221 )
    {
      --v221;
      v227 = v225 + v221;
    }
    v228 = v227 + 1;
    if ( v370 < v227 + 1 )
    {
      v359 = v227;
      v371 = v227 + 1;
      v398 = (_BYTE *)qvector_reserve();
      v227 = v359;
      v219 = v398;
      v228 = v371;
    }
    *(_QWORD *)&v399 = v228;
    v219[v227] = 0;
    memmove(&v398[v221], v218, v226);
    v222 = v399;
    v223 = 2;
    if ( (_QWORD)v399 )
    {
      v223 = v399 + 1;
      v222 = v399 - 1;
    }
    v224 = v398;
    if ( *((_QWORD *)&v399 + 1) < v223 )
    {
      v372 = v223;
      v398 = (_BYTE *)qvector_reserve();
      v223 = v372;
      v224 = v398;
    }
    *(_QWORD *)&v399 = v223;
    v218 += v226 + 1;
    v224[v222] = 0;
    v398[v222 + 1] = 0;
    v221 = v399;
    s = v218;
    v220 = *((_QWORD *)&v399 + 1);
    v219 = v398;
  }
  while ( *v218 );
  v229 = 2;
  if ( (_QWORD)v399 )
  {
    v229 = v399 + 1;
    v221 = v399 - 1;
  }
  if ( *((_QWORD *)&v399 + 1) < v229 )
    goto LABEL_403;
LABEL_254:
  *(_QWORD *)&v399 = v229;
  v219[v221] = 0;
  v398[v221 + 1] = 0;
  v230 = v384;
  v381 = 216;
  LODWORD(v400[27]) = v389 + v374;
  v231 = v385;
  v232 = v385 + 1;
  if ( &v381 >= v384 && &v381 < (__int64 *)((char *)v384 + 8 * *((_QWORD *)&v385 + 1)) )
  {
    if ( *((_QWORD *)&v385 + 1) < v232 )
    {
      v384 = (void *)qvector_reserve();
      v230 = v384;
      v231 = v385;
    }
    v230[v231] = 216;
  }
  else
  {
    if ( *((_QWORD *)&v385 + 1) < v232 )
    {
      v384 = (void *)qvector_reserve();
      v230 = v384;
      v233 = v381;
      v231 = v385;
    }
    else
    {
      v233 = 216;
    }
    v230[v231] = v233;
  }
  *(_QWORD *)&v385 = v385 + 1;
  if ( (_QWORD)v399 )
    sub_4ACC0((__int64 *)&v388, v398, v399);
  if ( v398 )
  {
    *(_QWORD *)&v399 = 0;
    qfree();
  }
  if ( v396 )
  {
    *(_QWORD *)&v397 = 0;
    qfree();
  }
  v398 = (_BYTE *)(&qword_D8 + 4);
  HIDWORD(v400[27]) = v389 + v374;
  v234 = v384;
  v235 = v385;
  v236 = v385 + 1;
  if ( &v398 >= v384 && &v398 < (_BYTE **)((char *)v384 + 8 * *((_QWORD *)&v385 + 1)) )
  {
    if ( *((_QWORD *)&v385 + 1) < v236 )
    {
      v384 = (void *)qvector_reserve();
      v234 = v384;
      v235 = v385;
    }
    v234[v235] = 220;
  }
  else
  {
    if ( *((_QWORD *)&v385 + 1) < v236 )
    {
      v384 = (void *)qvector_reserve();
      v234 = v384;
      v237 = v398;
      v235 = v385;
    }
    else
    {
      v237 = (_BYTE *)(&qword_D8 + 4);
    }
    v234[v235] = v237;
  }
  *(_QWORD *)&v385 = v385 + 1;
  v398 = nullptr;
  v399 = 0;
  v398 = (_BYTE *)qvector_reserve();
  memset(&v398[v399], 0, 133 - v399);
  v238 = v398;
  *(_QWORD *)&v399 = 133;
  v398[132] = 0;
  sub_4ACC0((__int64 *)&v388, v238, 0x84u);
  if ( v398 )
  {
    *(_QWORD *)&v399 = 0;
    qfree();
  }
  v239 = *(_QWORD *)(v4 + 80);
  if ( *(_BYTE *)(v239 + 200)
    && !(unsigned int)sub_4FEA0(v4, (const char *)(v239 + 200), (__int64 *)&v398, &v396, 0.0, *(double *)a3.m128i_i64) )
  {
    LODWORD(v400[28]) = (_DWORD)v398 + v396;
  }
  *(_QWORD *)(v7 + 100) = 1;
  *(_DWORD *)(v7 + 4) = -1;
  *(_QWORD *)(v7 + 160) = 0x100000005LL;
  *(_QWORD *)(v7 + 168) = 0x203000A28LL;
  v240 = *(_QWORD *)(v4 + 192);
  if ( *(_WORD *)(v240 + 104) == 523 )
    v241 = *(_DWORD *)(v240 + 128);
  else
    v241 = *(_DWORD *)(v240 + 132);
  *(_DWORD *)(v7 + 8) = v241;
  v242 = v386;
  v243 = v382;
  v244 = (_BYTE *)(v7 + 12 - v386);
  *(_DWORD *)(v7 + 12) = v313 - v386;
  v245 = v314 - v242;
  v246 = v383;
  *(_DWORD *)(v7 + 16) = v245;
  v398 = v244;
  v247 = v246 + 1;
  if ( &v398 >= v243 && &v398 < &v243[*((_QWORD *)&v383 + 1)] )
  {
    if ( *((_QWORD *)&v383 + 1) < v247 )
    {
      v376 = v244;
      v382 = (void *)qvector_reserve();
      v243 = v382;
      v244 = v376;
      v246 = v383;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v247 )
  {
    v382 = (void *)qvector_reserve();
    v243 = v382;
    v244 = v398;
    v246 = v383;
  }
  v243[v246] = v244;
  v248 = v382;
  v249 = v383 + 1;
  v250 = (_BYTE *)(v7 + 16 - v386);
  v251 = v383 + 2;
  v252 = *((char **)&v383 + 1);
  *(_QWORD *)&v383 = v383 + 1;
  v398 = v250;
  if ( &v398 >= v382 && &v398 < (_BYTE **)((char *)v382 + 8 * *((_QWORD *)&v383 + 1)) )
  {
    if ( *((_QWORD *)&v383 + 1) < v251 )
    {
      v375 = (_BYTE *)(v7 + 16 - v386);
      v382 = (void *)qvector_reserve();
      v248 = v382;
      v250 = v375;
      v249 = v383;
    }
  }
  else if ( *((_QWORD *)&v383 + 1) < v251 )
  {
    v382 = (void *)qvector_reserve();
    v248 = v382;
    v250 = v398;
    v249 = v383;
  }
  v248[v249] = v250;
  v253 = 2147344384;
  *(_QWORD *)&v383 = v383 + 1;
  if ( *(_BYTE *)(v4 + 57) )
    v253 = -139264;
  LODWORD(v400[3]) = v253;
  v254 = *(_QWORD *)(v4 + 248);
  v255 = *(_DWORD *)(v4 + 256);
  v256 = (char *)v384;
  HIDWORD(v400[24]) = 1033;
  v400[4] = v254;
  v257 = *(_QWORD *)(v340 + 8256);
  LODWORD(v400[6]) = v7 - v386;
  v398 = (_BYTE *)&dword_30;
  v258 = v257 + v255;
  LODWORD(v400[1]) = v257;
  v259 = v385;
  HIDWORD(v400[0]) = v258;
  v260 = v385 + 1;
  if ( &v398 >= v384 && (v252 = (char *)v384 + 8 * *((_QWORD *)&v385 + 1), &v398 < (_BYTE **)v252) )
  {
    if ( *((_QWORD *)&v385 + 1) < v260 )
    {
      v384 = (void *)qvector_reserve();
      v256 = (char *)v384;
      v259 = v385;
    }
    *(_QWORD *)&v256[8 * v259] = 48;
  }
  else
  {
    if ( *((_QWORD *)&v385 + 1) < v260 )
    {
      v384 = (void *)qvector_reserve();
      v256 = (char *)v384;
      v261 = v398;
      v259 = v385;
    }
    else
    {
      v261 = (_BYTE *)&dword_30;
    }
    *(_QWORD *)&v256[8 * v259] = v261;
  }
  v262 = v389;
  *(_QWORD *)&v385 = v385 + 1;
  if ( (_QWORD)v389 )
  {
    v256 = v388;
    sub_4ACC0(&v386, v388, v389);
  }
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
    sub_E960((__int64)"--Mapping FS -----------------------------------------\n", v256, v262, v252);
  v263 = 2147344384;
  if ( *(_BYTE *)(v4 + 57) )
    v263 = 0x7FFFFFDE000LL;
  v264 = *(_QWORD *)(v4 + 64);
  s = (char *)v263;
  if ( (unsigned int)sub_3C370(v264, (double *)&s, 0x1000u, 128, 1u, 0, (__int64)&v381, &v396, 0) )
    goto LABEL_381;
  v265 = v396;
  *(_DWORD *)(v396 + 112) |= 0x108u;
  v266 = *(_QWORD *)(v265 + 64) <= 3u;
  *(_BYTE *)(v265 + 105) = 6;
  v267 = *(_QWORD *)(v265 + 48);
  if ( v266 )
  {
    v304 = qvector_reserve();
    *(_QWORD *)(v265 + 48) = v304;
    v267 = v304;
  }
  *(_QWORD *)(v265 + 56) = 4;
  *(_WORD *)v267 = 18772;
  *(_BYTE *)(v267 + 2) = 66;
  *(_BYTE *)(*(_QWORD *)(v265 + 48) + 3LL) = 0;
  v268 = v396;
  v269 = *(_DWORD **)(v396 + 72);
  if ( *(_QWORD *)(v396 + 88) <= 4u )
  {
    v303 = qvector_reserve();
    *(_QWORD *)(v268 + 72) = v303;
    v269 = (_DWORD *)v303;
  }
  *(_QWORD *)(v268 + 80) = 5;
  *v269 = 1096040772;
  *(_BYTE *)(*(_QWORD *)(v268 + 72) + 4LL) = 0;
  v270 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 64) + 40LL))(*(_QWORD *)(v4 + 64));
  *(_BYTE *)(v396 + 104) = v270;
  s = nullptr;
  v271 = sub_3C370(
           *(_QWORD *)(v4 + 64),
           (double *)&s,
           (v387 + 4095) & 0xFFFFFFFFFFFFF000LL,
           128,
           1u,
           0,
           (__int64)&v398,
           &v396,
           0);
  if ( v271 )
  {
LABEL_381:
    sub_4D220(v4);
    v271 = 9;
  }
  else
  {
    v272 = v396;
    *(_DWORD *)(v396 + 112) |= 0x108u;
    v272 += 72;
    *(_BYTE *)(v272 + 33) = 6;
    *(_QWORD *)(v272 - 16) = 0;
    sub_4AD80(v272, "DATA");
    v273 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 64) + 40LL))(*(_QWORD *)(v4 + 64));
    v274 = (__m128i *)v382;
    *(_BYTE *)(v396 + 104) = v273;
    v275 = &v274->m128i_i8[8 * v383];
    v276 = 8 * v383;
    if ( v274 == (__m128i *)v275 )
    {
      v378 = s;
    }
    else
    {
      v277 = (8 * (__int64)v383) >> 3;
      if ( v277 )
      {
        _BitScanReverse64(&v278, v277);
        sub_4AB00(v274, (unsigned __int64 *)v274 + v383, 2LL * (int)v278, 0.0, *(double *)a3.m128i_i64, a4);
        if ( v276 > 128 )
        {
          sub_4A640(v274->m128i_i8, v274[8].m128i_i8);
          v279 = v274 + 8;
          do
          {
            v280 = v279->m128i_i64[0];
            v281 = v279[-1].m128i_u64[1];
            v282 = &v279[-1].m128i_i64[1];
            if ( v279->m128i_i64[0] >= v281 )
            {
              v283 = (__int64 *)v279;
            }
            else
            {
              do
              {
                v282[1] = v281;
                v283 = v282;
                v281 = *--v282;
              }
              while ( v280 < v281 );
            }
            *v283 = v280;
            v279 = (__m128i *)((char *)v279 + 8);
          }
          while ( v275 != (char *)v279 );
          goto LABEL_309;
        }
      }
      else
      {
        sub_4AB00(v274, (unsigned __int64 *)v274 + v383, -2, 0.0, *(double *)a3.m128i_i64, a4);
      }
      sub_4A640(v274->m128i_i8, v275);
LABEL_309:
      v284 = v382;
      v378 = s;
      if ( 8LL * (_QWORD)v383 )
      {
        v285 = s;
        do
        {
          v286 = (_QWORD *)(v386 + *v284++);
          *v286 += v285;
        }
        while ( v284 != (_QWORD *)((char *)v382 + 8 * (_QWORD)v383) );
        v378 = v285;
      }
    }
    v287 = (char *)v384;
    v288 = 8 * v385;
    v289 = (char *)v384 + 8 * v385;
    if ( v384 != v289 )
    {
      if ( v288 >> 3 )
      {
        _BitScanReverse64(&v290, v288 >> 3);
        sub_4AB00((__m128i *)v384, (unsigned __int64 *)v384 + v385, 2LL * (int)v290, 0.0, *(double *)a3.m128i_i64, a4);
        if ( v288 > 128 )
        {
          v291 = v287 + 128;
          sub_4A640(v287, v287 + 128);
          do
          {
            v292 = *(_QWORD *)v291;
            v293 = *((_QWORD *)v291 - 1);
            v294 = v291 - 8;
            if ( *(_QWORD *)v291 >= v293 )
            {
              v295 = v291;
            }
            else
            {
              do
              {
                *((_QWORD *)v294 + 1) = v293;
                v295 = v294;
                v293 = *((_QWORD *)v294 - 1);
                v294 -= 8;
              }
              while ( v292 < v293 );
            }
            v291 += 8;
            *(_QWORD *)v295 = v292;
          }
          while ( v289 != v291 );
          goto LABEL_320;
        }
      }
      else
      {
        sub_4AB00((__m128i *)v384, (unsigned __int64 *)v384 + v385, -2, 0.0, *(double *)a3.m128i_i64, a4);
      }
      sub_4A640(v287, v289);
LABEL_320:
      v296 = (char *)v384;
      v297 = (char *)v384 + 8 * v385;
      if ( 8LL * (_QWORD)v385 )
      {
        do
        {
          v298 = *(_QWORD *)v296;
          v296 += 8;
          *(_QWORD *)((char *)v400 + v298) += v378;
        }
        while ( v296 != v297 );
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))(**(_QWORD **)(v4 + 64) + 8LL))(
      *(_QWORD *)(v4 + 64),
      v381,
      v400,
      3884);
    (*(void (__fastcall **)(_QWORD, _BYTE *, __int64, _QWORD))(**(_QWORD **)(v4 + 64) + 8LL))(
      *(_QWORD *)(v4 + 64),
      v398,
      v386,
      v387);
  }
  if ( v394 )
  {
    *(_QWORD *)&v395 = 0;
    qfree();
  }
  if ( v392 )
  {
    *(_QWORD *)&v393 = 0;
    qfree();
  }
  if ( v390 )
  {
    *(_QWORD *)&v391 = 0;
    qfree();
  }
  if ( v388 )
  {
    *(_QWORD *)&v389 = 0;
    qfree();
  }
  if ( v386 )
  {
    *(_QWORD *)&v387 = 0;
    qfree();
  }
  if ( v384 )
  {
    *(_QWORD *)&v385 = 0;
    qfree();
  }
  if ( v382 )
  {
    *(_QWORD *)&v383 = 0;
    qfree();
  }
  return v271;
}

