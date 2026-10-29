__int64 __fastcall sub_53980(__int64 a1, double a2, __m128i a3, __m128 a4)
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
  char *v44; // rsi
  unsigned __int64 v45; // rax
  size_t v46; // rcx
  __int64 v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rsi
  _BYTE *v50; // r8
  unsigned __int64 v51; // rdi
  _QWORD *v52; // rsi
  __int64 v53; // rax
  _BYTE *v54; // r8
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  _QWORD *v57; // rsi
  size_t v58; // r8
  _BYTE *v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // rdi
  _QWORD *v63; // rsi
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  _BYTE *v66; // r8
  __int64 v67; // rcx
  unsigned __int64 v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // r8
  _QWORD *v71; // rsi
  _BYTE *v72; // r8
  __int64 v73; // r9
  __int64 v74; // r11
  _QWORD *v75; // r8
  __int64 v76; // rax
  _BYTE *v77; // r10
  _QWORD *v78; // rsi
  unsigned __int64 v79; // rdx
  _QWORD *v80; // r8
  __int64 v81; // rsi
  __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  _BYTE *v84; // r8
  _QWORD *v85; // rsi
  __int64 v86; // rsi
  __int64 v87; // rcx
  unsigned __int64 v88; // rdx
  _QWORD *v89; // r8
  _BYTE *v90; // r8
  _QWORD *v91; // rsi
  __int64 v92; // rax
  int v93; // edx
  void *v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rax
  int v98; // edx
  unsigned int v99; // eax
  __m128i v100; // xmm0
  size_t v101; // r9
  char *v102; // r11
  unsigned __int64 v103; // r10
  char *v104; // rsi
  unsigned __int64 v105; // rax
  __int64 v106; // r9
  size_t v107; // r8
  __int64 *v108; // rcx
  _BYTE *v109; // r10
  __int64 v110; // rdx
  unsigned __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  _QWORD *v115; // rsi
  __int64 v116; // rcx
  unsigned __int64 v117; // rdx
  _BYTE *v118; // r8
  __int64 v119; // rsi
  unsigned __int64 v120; // rdx
  _QWORD *v121; // r8
  __int64 v122; // r14
  _QWORD *v123; // rbx
  __int64 v124; // rax
  _QWORD *v125; // rsi
  _BYTE *v126; // r12
  unsigned __int64 v127; // rdi
  __int64 v128; // rsi
  _QWORD *v129; // rbx
  _QWORD *v130; // rdi
  __int64 v131; // rcx
  unsigned __int64 v132; // rdx
  _BYTE *v133; // rbx
  __int64 v134; // rsi
  __int64 v135; // rcx
  _QWORD *v136; // rdi
  unsigned __int64 v137; // rdx
  _QWORD *v138; // rbx
  _BYTE *v139; // rbx
  __int64 v140; // rcx
  _QWORD *v141; // rdi
  unsigned __int64 v142; // rax
  _BYTE *v143; // rbx
  __int64 v144; // rcx
  _QWORD *v145; // rdi
  unsigned __int64 v146; // rdx
  _BYTE *v147; // rbx
  __int64 v148; // rcx
  _QWORD *v149; // rdi
  unsigned __int64 v150; // rdx
  _BYTE *v151; // rbx
  __m128i si128; // xmm0
  __int64 v153; // rax
  __int64 v154; // rdx
  __m128i v155; // xmm3
  size_t v156; // rdx
  __int64 v157; // rax
  _QWORD *v158; // rsi
  _BYTE *v159; // rbx
  unsigned __int64 v160; // rdi
  __int64 v161; // rdx
  __m128i v162; // xmm4
  size_t v163; // rdx
  __int64 v164; // rax
  _QWORD *v165; // rsi
  _BYTE *v166; // r12
  unsigned __int64 v167; // rdi
  __int64 v168; // rax
  const void *v169; // rbx
  size_t v170; // rax
  __int64 v171; // r12
  size_t v172; // r14
  size_t v173; // r9
  _BYTE *v174; // rsi
  size_t v175; // rdx
  __int64 v176; // rbx
  unsigned __int64 v177; // r12
  char *v178; // rsi
  __int64 v179; // rdx
  __m128i v180; // xmm5
  size_t v181; // rdx
  __int64 v182; // rax
  _QWORD *v183; // rsi
  __int64 v184; // rbx
  unsigned __int64 v185; // rdi
  __int64 v186; // rax
  _QWORD *v187; // rsi
  __int64 v188; // rax
  unsigned __int64 v189; // rdi
  __int64 v190; // rdx
  _QWORD *v191; // rdi
  __int64 v192; // rax
  unsigned __int64 v193; // rdx
  __int64 v194; // rdx
  _QWORD *v195; // rsi
  __int64 v196; // rax
  unsigned __int64 v197; // rdi
  _BYTE *v198; // rdx
  __int64 v199; // rax
  _QWORD *v200; // rsi
  _BYTE *v201; // rbx
  unsigned __int64 v202; // rdi
  _QWORD *v203; // rsi
  __int64 v204; // rax
  _BYTE *v205; // rbx
  unsigned __int64 v206; // rdi
  _WORD *i; // r12
  __int64 v208; // rax
  __int64 v209; // r14
  __int64 v210; // rbx
  __int64 v211; // r10
  char *v212; // rsi
  __int64 v213; // rdx
  size_t v214; // rbx
  __int64 v215; // r14
  unsigned __int64 v216; // rdx
  char *v217; // rsi
  __int64 v218; // rbx
  unsigned __int64 v219; // r12
  char *v220; // rsi
  _QWORD *v221; // rsi
  __int64 v222; // rax
  unsigned __int64 v223; // rdi
  _BYTE *v224; // rdx
  char *v225; // r14
  _BYTE *v226; // rsi
  unsigned __int64 v227; // rcx
  __int64 v228; // rbx
  size_t v229; // rax
  size_t v230; // r12
  size_t v231; // r10
  size_t v232; // rdx
  __int64 v233; // rbx
  unsigned __int64 v234; // rdx
  _BYTE *v235; // rsi
  unsigned __int64 v236; // rdx
  _QWORD *v237; // rsi
  __int64 v238; // rax
  unsigned __int64 v239; // rdi
  __int64 v240; // rdx
  _QWORD *v241; // rsi
  __int64 v242; // rax
  unsigned __int64 v243; // rdi
  _BYTE *v244; // rdx
  _BYTE *v245; // rsi
  __int64 v246; // rsi
  __int64 v247; // rax
  __int64 v248; // rax
  __int64 v249; // rax
  _QWORD *v250; // rsi
  _BYTE *v251; // r8
  __int64 v252; // rdx
  __int64 v253; // rax
  unsigned __int64 v254; // rdi
  _QWORD *v255; // rdi
  __int64 v256; // rax
  _BYTE *v257; // r8
  unsigned __int64 v258; // rdx
  __int64 v259; // rax
  int v260; // eax
  _QWORD *v261; // rsi
  __int64 v262; // rax
  __m128 v263; // xmm0
  unsigned __int64 v264; // rdi
  _BYTE *v265; // rdx
  __int64 v266; // rax
  __int64 v267; // rdi
  __int64 v268; // rbx
  bool v269; // cc
  __int64 v270; // rsi
  __int64 v271; // rbx
  _DWORD *v272; // rsi
  char v273; // al
  unsigned int v274; // ebx
  __int64 v275; // rax
  __int64 v276; // r14
  _DWORD *v277; // rsi
  char v278; // al
  __m128i *v279; // r13
  char *v280; // r12
  __int64 v281; // r14
  unsigned __int64 v282; // rax
  unsigned __int64 v283; // rdx
  __m128i *v284; // rdi
  unsigned __int64 v285; // rcx
  unsigned __int64 v286; // rdx
  __int64 *v287; // rax
  __int64 *v288; // rsi
  _QWORD *v289; // rdx
  char *v290; // rdi
  _QWORD *v291; // rax
  char *v292; // r14
  __int64 v293; // r12
  char *v294; // r13
  unsigned __int64 v295; // rdx
  char *v296; // r12
  unsigned __int64 v297; // rcx
  unsigned __int64 v298; // rdx
  char *v299; // rax
  char *v300; // rsi
  char *v301; // rax
  char *v302; // rcx
  __int64 v303; // rdx
  size_t v304; // r9
  unsigned __int64 v305; // r8
  size_t *v306; // rsi
  __int64 v307; // rax
  __int64 v308; // rax
  _QWORD *v309; // r8
  _QWORD *v311; // rsi
  _QWORD *v312; // rsi
  __int64 v313; // rbx
  _BYTE *v314; // rsi
  __int64 v315; // r14
  __int64 v316; // r12
  __int64 v317; // rax
  __int64 v318; // [rsp+0h] [rbp-1690h]
  __int64 v319; // [rsp+8h] [rbp-1688h]
  char *srca; // [rsp+18h] [rbp-1678h]
  void *src; // [rsp+18h] [rbp-1678h]
  unsigned __int64 v322; // [rsp+20h] [rbp-1670h]
  __int64 v323; // [rsp+20h] [rbp-1670h]
  unsigned __int64 v324; // [rsp+20h] [rbp-1670h]
  unsigned __int64 v325; // [rsp+20h] [rbp-1670h]
  __int64 v326; // [rsp+20h] [rbp-1670h]
  _QWORD *v327; // [rsp+20h] [rbp-1670h]
  size_t n; // [rsp+28h] [rbp-1668h]
  size_t nb; // [rsp+28h] [rbp-1668h]
  size_t nh; // [rsp+28h] [rbp-1668h]
  size_t nk; // [rsp+28h] [rbp-1668h]
  size_t nl; // [rsp+28h] [rbp-1668h]
  size_t na; // [rsp+28h] [rbp-1668h]
  size_t ng; // [rsp+28h] [rbp-1668h]
  size_t ni; // [rsp+28h] [rbp-1668h]
  size_t nc; // [rsp+28h] [rbp-1668h]
  size_t nj; // [rsp+28h] [rbp-1668h]
  size_t ne; // [rsp+28h] [rbp-1668h]
  size_t nd; // [rsp+28h] [rbp-1668h]
  size_t nf; // [rsp+28h] [rbp-1668h]
  __int64 v341; // [rsp+30h] [rbp-1660h]
  __int64 v342; // [rsp+30h] [rbp-1660h]
  __int64 v343; // [rsp+38h] [rbp-1658h]
  __int64 v344; // [rsp+38h] [rbp-1658h]
  __int64 v345; // [rsp+38h] [rbp-1658h]
  char v346; // [rsp+40h] [rbp-1650h]
  __int64 v347; // [rsp+40h] [rbp-1650h]
  __int64 v348; // [rsp+40h] [rbp-1650h]
  __int64 v349; // [rsp+48h] [rbp-1648h]
  size_t v350; // [rsp+48h] [rbp-1648h]
  __int64 v351; // [rsp+50h] [rbp-1640h]
  unsigned __int64 v352; // [rsp+50h] [rbp-1640h]
  __int64 v353; // [rsp+50h] [rbp-1640h]
  void *v354; // [rsp+50h] [rbp-1640h]
  unsigned __int64 v355; // [rsp+50h] [rbp-1640h]
  _BYTE *v356; // [rsp+50h] [rbp-1640h]
  size_t v357; // [rsp+50h] [rbp-1640h]
  __int64 v358; // [rsp+50h] [rbp-1640h]
  size_t v359; // [rsp+50h] [rbp-1640h]
  __int64 v360; // [rsp+50h] [rbp-1640h]
  __int64 v361; // [rsp+50h] [rbp-1640h]
  unsigned __int64 v362; // [rsp+50h] [rbp-1640h]
  __int64 v363; // [rsp+50h] [rbp-1640h]
  size_t v364; // [rsp+50h] [rbp-1640h]
  unsigned __int64 v365; // [rsp+50h] [rbp-1640h]
  unsigned __int64 v366; // [rsp+50h] [rbp-1640h]
  _BYTE *v367; // [rsp+50h] [rbp-1640h]
  _BYTE *v368; // [rsp+50h] [rbp-1640h]
  _BYTE *v369; // [rsp+50h] [rbp-1640h]
  _BYTE *v370; // [rsp+50h] [rbp-1640h]
  size_t v371; // [rsp+50h] [rbp-1640h]
  __int64 v372; // [rsp+50h] [rbp-1640h]
  __int64 v373; // [rsp+50h] [rbp-1640h]
  __int64 v374; // [rsp+58h] [rbp-1638h]
  unsigned __int64 v375; // [rsp+58h] [rbp-1638h]
  unsigned __int64 v376; // [rsp+58h] [rbp-1638h]
  size_t v377; // [rsp+58h] [rbp-1638h]
  unsigned __int64 v378; // [rsp+58h] [rbp-1638h]
  __int64 v379; // [rsp+60h] [rbp-1630h]
  _BYTE *v380; // [rsp+60h] [rbp-1630h]
  _BYTE *v381; // [rsp+60h] [rbp-1630h]
  __int64 v382; // [rsp+68h] [rbp-1628h]
  char *v383; // [rsp+68h] [rbp-1628h]
  void *v384; // [rsp+78h] [rbp-1618h] BYREF
  char *s; // [rsp+80h] [rbp-1610h] BYREF
  __int64 v386; // [rsp+88h] [rbp-1608h] BYREF
  void *v387; // [rsp+90h] [rbp-1600h]
  __int128 v388; // [rsp+98h] [rbp-15F8h]
  void *v389; // [rsp+B0h] [rbp-15E0h]
  __int128 v390; // [rsp+B8h] [rbp-15D8h]
  __int64 v391; // [rsp+D0h] [rbp-15C0h] BYREF
  __int128 v392; // [rsp+D8h] [rbp-15B8h]
  char *v393; // [rsp+F0h] [rbp-15A0h] BYREF
  __int128 v394; // [rsp+F8h] [rbp-1598h]
  char *v395; // [rsp+110h] [rbp-1580h]
  __int128 v396; // [rsp+118h] [rbp-1578h]
  _QWORD *v397; // [rsp+130h] [rbp-1560h]
  __int128 v398; // [rsp+138h] [rbp-1558h]
  _QWORD *v399; // [rsp+150h] [rbp-1540h]
  __int128 v400; // [rsp+158h] [rbp-1538h]
  __int64 v401; // [rsp+170h] [rbp-1520h] BYREF
  __int128 v402; // [rsp+178h] [rbp-1518h]
  _BYTE *v403; // [rsp+190h] [rbp-1500h] BYREF
  __int128 v404; // [rsp+198h] [rbp-14F8h]
  _QWORD v405[532]; // [rsp+1B0h] [rbp-14E0h] BYREF
  _BYTE v406[1032]; // [rsp+1250h] [rbp-440h] BYREF
  unsigned __int64 v407; // [rsp+1658h] [rbp-38h]

  v4 = a1;
  v407 = __readfsqword(0x28u);
  v387 = nullptr;
  v389 = nullptr;
  v391 = 0;
  v393 = nullptr;
  v395 = nullptr;
  memset(v405, 0, 0x1098u);
  v388 = 0;
  v397 = nullptr;
  v399 = nullptr;
  v390 = 0;
  v392 = 0;
  v394 = 0;
  v396 = 0;
  v398 = 0;
  v400 = 0;
  *(_BYTE *)(a1 + 56) = 0;
  v5 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 40) = 0;
  v5 *= 13;
  v6 = 8 * v5 + 1936;
  if ( 8 * v5 == -1936 )
  {
    n = 1936;
    v7 = 0;
    v319 = 1864;
    v318 = 856;
  }
  else
  {
    v391 = qvector_reserve();
    memset((void *)(v391 + v392), 0, v6 - v392);
    v7 = v391;
    *(_QWORD *)&v392 = v6;
    v318 = v391 + 856;
    v319 = v391 + 1864;
    n = v391 + 1936;
  }
  v8 = *(_QWORD *)(a1 + 192);
  if ( *(_WORD *)(v8 + 104) == 523 )
    v9 = *(_QWORD *)(v8 + 128);
  else
    v9 = *(unsigned int *)(v8 + 132);
  v10 = *(_QWORD *)(a1 + 112);
  v11 = v4 + 96;
  v349 = v4 + 96;
  if ( v4 + 96 == v10 )
  {
LABEL_328:
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
      if ( v349 == v10 )
      {
        v11 = v4 + 96;
        goto LABEL_328;
      }
    }
  }
  v14 = sub_4B8A0((_QWORD *)v4, "ntdll", 0);
  v374 = v14;
  v15 = sub_4B8A0((_QWORD *)v4, "kernel32", 0);
  v351 = v15;
  if ( !v14 || !v15 || v15 == v13 || v14 == v13 )
  {
    v346 = 0;
    v382 = 0;
  }
  else
  {
    v346 = 1;
    v382 = 3;
  }
  v16 = *(_QWORD *)(v4 + 128);
  v17 = v398;
  if ( (unsigned __int64)v398 < v16 )
  {
    v312 = v397;
    if ( *((_QWORD *)&v398 + 1) < v16 )
    {
      v397 = (_QWORD *)qvector_reserve();
      v312 = v397;
      v17 = v398;
    }
    memset(&v312[v17], 0, 8 * (v16 - v17));
    *(_QWORD *)&v398 = v16;
    v16 = *(_QWORD *)(v4 + 128);
  }
  else if ( v16 != (_QWORD)v398 )
  {
    *(_QWORD *)&v398 = *(_QWORD *)(v4 + 128);
  }
  v18 = v400;
  if ( (unsigned __int64)v400 < v16 )
  {
    v311 = v399;
    if ( *((_QWORD *)&v400 + 1) < v16 )
    {
      v399 = (_QWORD *)qvector_reserve();
      v311 = v399;
      v18 = v400;
    }
    memset(&v311[v18], 0, 8 * (v16 - v18));
    *(_QWORD *)&v400 = v16;
  }
  else if ( v16 != (_QWORD)v400 )
  {
    *(_QWORD *)&v400 = v16;
  }
  v19 = *(_QWORD *)(v4 + 112);
  v20 = v397;
  if ( v349 != v19 )
  {
    v341 = v4;
    v21 = v397;
    v22 = v382;
    v343 = v7;
    v23 = 0;
    while ( 1 )
    {
      v24 = n + 104LL * v23;
      if ( v346 )
      {
        v25 = *(_QWORD *)(v19 + 56);
        if ( v25 == v13 )
        {
          *v21 = v24;
          v21 = v397;
          v399[2] = v24;
          goto LABEL_28;
        }
        if ( v374 == v25 )
        {
          v306 = v399;
          v21[1] = v24;
          *v306 = v24;
          v21 = v397;
          goto LABEL_28;
        }
        if ( v351 == v25 )
        {
          v309 = v399;
          v21[2] = v24;
          v309[1] = v24;
          goto LABEL_28;
        }
      }
      v21[v22] = v24;
      v399[v22] = v24;
      v21 = v397;
      ++v22;
LABEL_28:
      ++v23;
      v19 = std::_Rb_tree_increment();
      if ( v349 == v19 )
      {
        v20 = v21;
        v7 = v343;
        v4 = v341;
        break;
      }
    }
  }
  v26 = v391;
  *(_QWORD *)(v7 + 1928) = 0;
  *(_BYTE *)(v7 + 1868) = 1;
  v27 = v387;
  *(_DWORD *)(v7 + 1864) = 72;
  *(_QWORD *)(v7 + 1872) = 0;
  *(_QWORD *)(v7 + 1880) = *v20 - v26;
  v347 = v7 + 1880;
  v28 = v388;
  v29 = (_BYTE *)(v7 + 1880 - v26);
  v403 = v29;
  v30 = v388 + 1;
  if ( &v403 >= v27 && &v403 < &v27[*((_QWORD *)&v388 + 1)] )
  {
    if ( *((_QWORD *)&v388 + 1) < v30 )
    {
      v387 = (void *)qvector_reserve();
      v27 = v387;
      v28 = v388;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v30 )
  {
    v387 = (void *)qvector_reserve();
    v27 = v387;
    v29 = v403;
    v28 = v388;
  }
  v27[v28] = v29;
  v31 = v391;
  v32 = v388 + 1;
  v33 = v387;
  v34 = v388 + 2;
  *(_QWORD *)&v388 = v388 + 1;
  *(_QWORD *)(v7 + 1896) = *v397 + 16LL - v391;
  v344 = v7 + 1896;
  v35 = (_BYTE *)(v7 + 1896 - v31);
  v403 = v35;
  if ( &v403 >= v33 && &v403 < &v33[*((_QWORD *)&v388 + 1)] )
  {
    if ( *((_QWORD *)&v388 + 1) < v34 )
    {
      v387 = (void *)qvector_reserve();
      v32 = v388;
      v33 = v387;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v34 )
  {
    v387 = (void *)qvector_reserve();
    v32 = v388;
    v33 = v387;
    v35 = v403;
  }
  v33[v32] = v35;
  v36 = v391;
  v37 = v388 + 1;
  v38 = v387;
  v39 = v388 + 2;
  *(_QWORD *)&v388 = v388 + 1;
  *(_QWORD *)(v7 + 1912) = *v399 + 32LL - v391;
  v342 = v7 + 1912;
  v40 = (_BYTE *)(v7 + 1912 - v36);
  v403 = v40;
  if ( &v403 >= v38 && &v403 < &v38[*((_QWORD *)&v388 + 1)] )
  {
    if ( *((_QWORD *)&v388 + 1) < v39 )
    {
      v387 = (void *)qvector_reserve();
      v37 = v388;
      v38 = v387;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v39 )
  {
    v387 = (void *)qvector_reserve();
    v37 = v388;
    v38 = v387;
    v40 = v403;
  }
  v38[v37] = v40;
  *(_QWORD *)&v388 = v388 + 1;
  v41 = *(_QWORD *)(v4 + 112);
  v379 = v392;
  if ( v349 == v41 )
  {
    v122 = 0x1FFFFFFFFFFFFFFFLL;
    goto LABEL_138;
  }
  v42 = 0;
  v43 = n + 72;
  while ( 1 )
  {
    v92 = *(_QWORD *)(v41 + 56);
    *(_QWORD *)(v43 - 16) = *(_QWORD *)(v92 + 820) + *(unsigned int *)(v92 + 120);
    *(_QWORD *)(v43 - 24) = *(_QWORD *)(v92 + 820);
    *(_WORD *)(v43 + 18) = 0;
    v93 = *(_DWORD *)(v92 + 160);
    *(_DWORD *)(v43 + 12) = 20480;
    *(_DWORD *)(v43 - 8) = v93;
    *(_DWORD *)(v43 + 28) = *(_DWORD *)(v92 + 88);
    utf8_utf16();
    v94 = &unk_61EC0;
    if ( (_QWORD)v396 )
      v94 = v395;
    v354 = v94;
    v95 = qstrrchr();
    v96 = v396;
    if ( !v95 || (v97 = (v95 - (__int64)v354) >> 1, v97 == -1) )
    {
      v100 = 0;
      v99 = 0;
    }
    else
    {
      v98 = v396 - 1;
      if ( !(_QWORD)v396 )
        v98 = 0;
      v99 = v98 - v97 - 1;
      v100 = _mm_cvtsi32_si128(v99);
    }
    a4 = (__m128)_mm_cvtsi32_si128(v396);
    a3 = _mm_shufflelo_epi16((__m128i)a4, 0);
    *(_DWORD *)(v43 - 4) = _mm_cvtsi128_si32(a3);
    v305 = v394;
    *(_WORD *)(v43 + 16) = -1;
    *(_DWORD *)(v43 + 4) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(v100, 0));
    *(_DWORD *)v43 = v305 + v379;
    *(_DWORD *)(v43 + 8) = v305 + v379 + 2 * ((unsigned __int16)v96 - 1 - v99);
    if ( v96 )
    {
      v101 = 2 * v96 - 2;
      v102 = v395;
      if ( 2 * v96 != 2 )
      {
        v103 = v305 + v101;
        if ( __CFADD__(v305, v101) )
        {
          if ( v305 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( v305 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v394 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_96;
          }
          v103 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v104 = v393;
        v105 = v305;
        if ( *((_QWORD *)&v394 + 1) < v103 )
        {
          v325 = v305;
          ng = 2 * v96 - 2;
          v366 = v103;
          v393 = (char *)qvector_reserve();
          v104 = v393;
          v102 = v395;
          v105 = v394;
          v305 = v325;
          v101 = ng;
          v103 = v366;
        }
        srca = v102;
        v322 = v305;
        nh = v101;
        v355 = v103;
        memset(&v104[v105], 0, v103 - v105);
        v101 = nh;
        v305 = v322;
        v102 = srca;
        *(_QWORD *)&v394 = v355;
LABEL_96:
        memcpy(&v393[v305], v102, v101);
        v305 = v394;
      }
    }
    v304 = v305 + 2;
    if ( v305 < 0xFFFFFFFFFFFFFFFELL )
    {
      v44 = v393;
      v45 = v305;
      v46 = 2;
      if ( *((_QWORD *)&v394 + 1) < v305 + 2 )
      {
        v324 = v305 + 2;
        na = v305;
        v365 = v305 + 2;
        v393 = (char *)qvector_reserve();
        v44 = v393;
        v45 = v394;
        v304 = v324;
        v305 = na;
        v46 = v365 - v394;
      }
      nb = v304;
      v352 = v305;
      memset(&v44[v45], 0, v46);
      v305 = v352;
      v47 = nb;
    }
    else
    {
      v47 = 0x7FFFFFFFFFFFFFFFLL;
    }
    *(_QWORD *)&v394 = v47;
    *(_WORD *)&v393[v305] = 0;
    v48 = v388;
    v49 = v387;
    v50 = (_BYTE *)(v43 + 8 - v391);
    v403 = v50;
    v51 = v388 + 1;
    if ( &v403 < v387 || &v403 >= (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
    {
      if ( *((_QWORD *)&v388 + 1) < v51 )
      {
        v387 = (void *)qvector_reserve();
        v49 = v387;
        v50 = v403;
        v48 = v388;
      }
    }
    else if ( *((_QWORD *)&v388 + 1) < v51 )
    {
      v387 = (void *)qvector_reserve();
      v49 = v387;
      v50 = (_BYTE *)(v43 + 8 - v391);
      v48 = v388;
    }
    v49[v48] = v50;
    v52 = v387;
    v53 = v388 + 1;
    v54 = (_BYTE *)(v43 - v391);
    v55 = v388 + 2;
    *(_QWORD *)&v388 = v388 + 1;
    v403 = (_BYTE *)(v43 - v391);
    if ( &v403 < v387 || &v403 >= (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
    {
      if ( *((_QWORD *)&v388 + 1) < v55 )
      {
        v387 = (void *)qvector_reserve();
        v52 = v387;
        v54 = v403;
        v53 = v388;
      }
    }
    else if ( *((_QWORD *)&v388 + 1) < v55 )
    {
      v387 = (void *)qvector_reserve();
      v52 = v387;
      v54 = (_BYTE *)(v43 - v391);
      v53 = v388;
    }
    v52[v53] = v54;
    *(_QWORD *)&v388 = v388 + 1;
    v56 = v391;
    v57 = v387;
    if ( v42 )
    {
      v106 = 8 * v42;
      v107 = v397[v42];
      v108 = &v397[v42 - 1];
      v109 = (_BYTE *)(v107 + 8 - v391);
      *(_QWORD *)(v107 + 8) = *v108 - v391;
      v110 = *v108;
      v111 = *((_QWORD *)&v388 + 1);
      v112 = v110 + 16 - v56;
      v113 = v388;
      *(_QWORD *)(v107 + 24) = v112;
      v403 = v109;
      v114 = v113 + 1;
      if ( &v403 < v57 || &v403 >= &v57[v111] )
      {
        if ( v111 < v114 )
        {
          v359 = v107;
          v387 = (void *)qvector_reserve();
          v57 = v387;
          v109 = v403;
          v113 = v388;
          v106 = 8 * v42;
          v107 = v359;
        }
      }
      else if ( v111 < v114 )
      {
        ni = v107;
        v368 = v109;
        v387 = (void *)qvector_reserve();
        v57 = v387;
        v106 = 8 * v42;
        v113 = v388;
        v107 = ni;
        v109 = v368;
      }
      v57[v113] = v109;
      v115 = v387;
      v116 = v388 + 1;
      v117 = v388 + 2;
      v403 = (_BYTE *)(v107 + 24 - v391);
      v118 = v403;
      *(_QWORD *)&v388 = v388 + 1;
      if ( &v403 < v387 || &v403 >= (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
      {
        if ( *((_QWORD *)&v388 + 1) < v117 )
        {
          v358 = v106;
          v387 = (void *)qvector_reserve();
          v116 = v388;
          v115 = v387;
          v118 = v403;
          v106 = v358;
        }
      }
      else if ( *((_QWORD *)&v388 + 1) < v117 )
      {
        nj = v106;
        v370 = v403;
        v387 = (void *)qvector_reserve();
        v116 = v388;
        v115 = v387;
        v106 = nj;
        v118 = v370;
      }
      v115[v116] = v118;
      v119 = v391;
      v67 = v388 + 1;
      v120 = v388 + 2;
      *(_QWORD *)&v388 = v388 + 1;
      v121 = (_QWORD *)(*(_QWORD *)((char *)v399 + v106) + 40LL);
      *v121 = *(_QWORD *)((char *)v399 + v106 - 8) + 32LL - v391;
      v72 = (char *)v121 - v119;
      v71 = v387;
      v403 = v72;
      if ( &v403 >= v387 && &v403 < (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
      {
        if ( *((_QWORD *)&v388 + 1) >= v120 )
          goto LABEL_67;
        goto LABEL_114;
      }
      if ( *((_QWORD *)&v388 + 1) < v120 )
      {
LABEL_118:
        v387 = (void *)qvector_reserve();
        v67 = v388;
        v71 = v387;
        v72 = v403;
      }
    }
    else
    {
      v58 = *v397;
      *(_QWORD *)(v58 + 8) = v347 - v391;
      v59 = (_BYTE *)(v58 + 8 - v56);
      v60 = v344 - v56;
      v61 = v388;
      *(_QWORD *)(v58 + 24) = v60;
      v403 = v59;
      v62 = v61 + 1;
      if ( &v403 < v57 || &v403 >= &v57[*((_QWORD *)&v388 + 1)] )
      {
        if ( *((_QWORD *)&v388 + 1) < v62 )
        {
          v357 = v58;
          v387 = (void *)qvector_reserve();
          v57 = v387;
          v59 = v403;
          v61 = v388;
          v58 = v357;
        }
      }
      else if ( *((_QWORD *)&v388 + 1) < v62 )
      {
        nc = v58;
        v369 = v59;
        v387 = (void *)qvector_reserve();
        v57 = v387;
        v58 = nc;
        v61 = v388;
        v59 = v369;
      }
      v57[v61] = v59;
      v63 = v387;
      v64 = v388 + 1;
      v65 = v388 + 2;
      v403 = (_BYTE *)(v58 + 24 - v391);
      v66 = v403;
      *(_QWORD *)&v388 = v388 + 1;
      if ( &v403 < v387 || &v403 >= (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
      {
        if ( *((_QWORD *)&v388 + 1) < v65 )
        {
          v387 = (void *)qvector_reserve();
          v64 = v388;
          v63 = v387;
          v66 = v403;
        }
      }
      else if ( *((_QWORD *)&v388 + 1) < v65 )
      {
        v367 = v403;
        v387 = (void *)qvector_reserve();
        v64 = v388;
        v63 = v387;
        v66 = v367;
      }
      v63[v64] = v66;
      v67 = v388 + 1;
      v68 = v388 + 2;
      *(_QWORD *)&v388 = v388 + 1;
      v69 = v391;
      v70 = (_QWORD *)(*v399 + 40LL);
      *v70 = v342 - v391;
      v71 = v387;
      v72 = (char *)v70 - v69;
      v403 = v72;
      if ( &v403 >= v387 && &v403 < (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
      {
        if ( *((_QWORD *)&v388 + 1) >= v68 )
          goto LABEL_67;
LABEL_114:
        v356 = v72;
        v387 = (void *)qvector_reserve();
        v67 = v388;
        v71 = v387;
        v72 = v356;
        goto LABEL_67;
      }
      if ( *((_QWORD *)&v388 + 1) < v68 )
        goto LABEL_118;
    }
LABEL_67:
    v71[v67] = v72;
    v73 = v42 + 1;
    *(_QWORD *)&v388 = v388 + 1;
    if ( v42 + 1 != *(_QWORD *)(v4 + 128) )
    {
      v74 = 8 * v73;
      v75 = (_QWORD *)v397[v73 - 1];
      *v75 = v397[v73] - v391;
      v76 = v388;
      v77 = (char *)v75 - v391;
      v78 = v387;
      v403 = (char *)v75 - v391;
      v79 = v388 + 1;
      if ( &v403 < v387 || &v403 >= (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
      {
        if ( *((_QWORD *)&v388 + 1) < v79 )
        {
          v323 = 8 * v73;
          nl = (size_t)v75;
          v387 = (void *)qvector_reserve();
          v78 = v387;
          v77 = v403;
          v76 = v388;
          v74 = v323;
          v75 = (_QWORD *)nl;
          v73 = v42 + 1;
        }
      }
      else if ( *((_QWORD *)&v388 + 1) < v79 )
      {
        src = (void *)(8 * v73);
        v327 = v75;
        nd = (size_t)v75 - v391;
        v387 = (void *)qvector_reserve();
        v78 = v387;
        v74 = (__int64)src;
        v76 = v388;
        v75 = v327;
        v77 = (_BYTE *)nd;
        v73 = v42 + 1;
      }
      v78[v76] = v77;
      v80 = v75 + 2;
      v81 = v391;
      v82 = v388 + 1;
      v83 = v388 + 2;
      *(_QWORD *)&v388 = v388 + 1;
      *v80 = v397[v73] + 16LL - v391;
      v84 = (char *)v80 - v81;
      v85 = v387;
      v403 = v84;
      if ( &v403 < v387 || &v403 >= (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
      {
        if ( *((_QWORD *)&v388 + 1) < v83 )
        {
          nk = v74;
          v361 = v73;
          v387 = (void *)qvector_reserve();
          v82 = v388;
          v85 = v387;
          v84 = v403;
          v74 = nk;
          v73 = v361;
        }
      }
      else if ( *((_QWORD *)&v388 + 1) < v83 )
      {
        v326 = v74;
        ne = (size_t)v84;
        v372 = v73;
        v387 = (void *)qvector_reserve();
        v82 = v388;
        v85 = v387;
        v74 = v326;
        v84 = (_BYTE *)ne;
        v73 = v372;
      }
      v85[v82] = v84;
      v86 = v391;
      v87 = v388 + 1;
      v88 = v388 + 2;
      *(_QWORD *)&v388 = v388 + 1;
      v89 = (_QWORD *)(*(_QWORD *)((char *)v399 + v74 - 8) + 32LL);
      *v89 = v399[v73] + 32LL - v391;
      v90 = (char *)v89 - v86;
      v91 = v387;
      v403 = v90;
      if ( &v403 < v387 || &v403 >= (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
      {
        if ( *((_QWORD *)&v388 + 1) < v88 )
        {
          v360 = v73;
          v387 = (void *)qvector_reserve();
          v87 = v388;
          v91 = v387;
          v90 = v403;
          v73 = v360;
        }
      }
      else if ( *((_QWORD *)&v388 + 1) < v88 )
      {
        nf = (size_t)v90;
        v373 = v73;
        v387 = (void *)qvector_reserve();
        v87 = v388;
        v91 = v387;
        v90 = (_BYTE *)nf;
        v73 = v373;
      }
      v91[v87] = v90;
      *(_QWORD *)&v388 = v388 + 1;
    }
    v353 = v73;
    v43 += 104LL;
    v41 = std::_Rb_tree_increment();
    if ( v349 == v41 )
      break;
    v42 = v353;
  }
  v122 = v42;
LABEL_138:
  v123 = (_QWORD *)v397[v122];
  *v123 = v347 - v391;
  v124 = v388;
  v125 = v387;
  v126 = (char *)v123 - v391;
  v403 = (char *)v123 - v391;
  v127 = v388 + 1;
  if ( &v403 >= v387 && &v403 < (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
  {
    if ( *((_QWORD *)&v388 + 1) < v127 )
    {
      v387 = (void *)qvector_reserve();
      v125 = v387;
      v124 = v388;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v127 )
  {
    v387 = (void *)qvector_reserve();
    v125 = v387;
    v126 = v403;
    v124 = v388;
  }
  v125[v124] = v126;
  v128 = v391;
  v129 = v123 + 2;
  v130 = v387;
  v131 = v388 + 1;
  v132 = v388 + 2;
  *v129 = v344 - v391;
  v133 = (char *)v129 - v128;
  *(_QWORD *)&v388 = v131;
  v403 = v133;
  if ( &v403 >= v130 && &v403 < &v130[*((_QWORD *)&v388 + 1)] )
  {
    if ( *((_QWORD *)&v388 + 1) < v132 )
    {
      v387 = (void *)qvector_reserve();
      v131 = v388;
      v130 = v387;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v132 )
  {
    v387 = (void *)qvector_reserve();
    v131 = v388;
    v130 = v387;
    v133 = v403;
  }
  v130[v131] = v133;
  v134 = v391;
  v135 = v388 + 1;
  v136 = v387;
  v137 = v388 + 2;
  *(_QWORD *)&v388 = v388 + 1;
  v138 = (_QWORD *)(v399[v122] + 32LL);
  *v138 = v342 - v391;
  v139 = (char *)v138 - v134;
  v403 = v139;
  if ( &v403 >= v136 && &v403 < &v136[*((_QWORD *)&v388 + 1)] )
  {
    if ( *((_QWORD *)&v388 + 1) < v137 )
    {
      v387 = (void *)qvector_reserve();
      v135 = v388;
      v136 = v387;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v137 )
  {
    v387 = (void *)qvector_reserve();
    v135 = v388;
    v136 = v387;
    v139 = v403;
  }
  v136[v135] = v139;
  v140 = v388 + 1;
  v141 = v387;
  v142 = v388 + 2;
  *(_QWORD *)&v388 = v388 + 1;
  v143 = (_BYTE *)(v7 + 1888 - v391);
  *(_QWORD *)(v7 + 1888) = v397[v122] - v391;
  v403 = v143;
  if ( &v403 >= v141 && &v403 < &v141[*((_QWORD *)&v388 + 1)] )
  {
    if ( *((_QWORD *)&v388 + 1) < v142 )
    {
      v387 = (void *)qvector_reserve();
      v140 = v388;
      v141 = v387;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v142 )
  {
    v387 = (void *)qvector_reserve();
    v140 = v388;
    v141 = v387;
    v143 = v403;
  }
  v141[v140] = v143;
  v144 = v388 + 1;
  v145 = v387;
  v146 = v388 + 2;
  *(_QWORD *)&v388 = v388 + 1;
  v147 = (_BYTE *)(v7 + 1904 - v391);
  *(_QWORD *)(v7 + 1904) = v397[v122] + 16LL - v391;
  v403 = v147;
  if ( &v403 >= v145 && &v403 < &v145[*((_QWORD *)&v388 + 1)] )
  {
    if ( *((_QWORD *)&v388 + 1) < v146 )
    {
      v387 = (void *)qvector_reserve();
      v144 = v388;
      v145 = v387;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v146 )
  {
    v387 = (void *)qvector_reserve();
    v144 = v388;
    v145 = v387;
    v147 = v403;
  }
  v145[v144] = v147;
  v148 = v388 + 1;
  v149 = v387;
  v150 = v388 + 2;
  *(_QWORD *)&v388 = v388 + 1;
  v151 = (_BYTE *)(v7 + 1920 - v391);
  *(_QWORD *)(v7 + 1920) = v399[v122] + 32LL - v391;
  v403 = v151;
  if ( &v403 >= v149 && &v403 < &v149[*((_QWORD *)&v388 + 1)] )
  {
    if ( *((_QWORD *)&v388 + 1) < v150 )
    {
      v387 = (void *)qvector_reserve();
      v148 = v388;
      v149 = v387;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v150 )
  {
    v387 = (void *)qvector_reserve();
    v148 = v388;
    v149 = v387;
    v151 = v403;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_61D60);
  v149[v148] = v151;
  *(_QWORD *)(v7 + 904) = 7;
  *(__m128i *)(v7 + 888) = si128;
  v153 = *(_QWORD *)(v4 + 72);
  *(_QWORD *)&v388 = v388 + 1;
  v345 = v153;
  utf8_utf16();
  v154 = v396;
  v155 = _mm_cvtsi32_si128(v396);
  *(_QWORD *)(v7 + 920) = v394 + v379;
  *(_DWORD *)(v7 + 912) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(v155, 0));
  v156 = 2 * v154;
  if ( v156 )
    sub_4ACC0((__int64 *)&v393, v395, v156);
  v157 = v388;
  v158 = v387;
  v159 = (_BYTE *)(v7 + 920 - v391);
  v403 = v159;
  v160 = v388 + 1;
  if ( &v403 >= v387 && &v403 < (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
  {
    if ( *((_QWORD *)&v388 + 1) < v160 )
    {
      v387 = (void *)qvector_reserve();
      v158 = v387;
      v157 = v388;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v160 )
  {
    v387 = (void *)qvector_reserve();
    v158 = v387;
    v159 = v403;
    v157 = v388;
  }
  v158[v157] = v159;
  *(_QWORD *)&v388 = v388 + 1;
  utf8_utf16();
  v161 = v396;
  v162 = _mm_cvtsi32_si128(v396);
  *(_QWORD *)(v7 + 960) = v394 + v379;
  *(_DWORD *)(v7 + 952) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(v162, 0));
  v163 = 2 * v161;
  if ( v163 )
    sub_4ACC0((__int64 *)&v393, v395, v163);
  v164 = v388;
  v165 = v387;
  v166 = (_BYTE *)(v7 + 960 - v391);
  v403 = v166;
  v167 = v388 + 1;
  if ( &v403 >= v387 && &v403 < (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
  {
    if ( *((_QWORD *)&v388 + 1) < v167 )
    {
      v387 = (void *)qvector_reserve();
      v165 = v387;
      v164 = v388;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v167 )
  {
    v387 = (void *)qvector_reserve();
    v165 = v387;
    v166 = v403;
    v164 = v388;
  }
  v165[v164] = v166;
  *(_QWORD *)&v388 = v388 + 1;
  v403 = nullptr;
  v404 = 0;
  sub_F490((__int64 *)&v403);
  v168 = v345;
  if ( *(_BYTE *)(v345 + 9360) )
  {
    v313 = v404;
    if ( (_QWORD)v404 )
    {
      v315 = v404 + 1;
      v316 = v404;
      v314 = v403;
      v313 = v404 - 1;
      if ( *((_QWORD *)&v404 + 1) >= (unsigned __int64)(v404 + 1) )
        goto LABEL_414;
    }
    else
    {
      v314 = v403;
      v315 = 2;
      v316 = 1;
      if ( *((_QWORD *)&v404 + 1) >= 2u )
      {
LABEL_414:
        *(_QWORD *)&v404 = v315;
        v168 = v345;
        v314[v316] = 0;
        v403[v313] = 32;
        goto LABEL_175;
      }
    }
    v403 = (_BYTE *)qvector_reserve();
    v314 = v403;
    goto LABEL_414;
  }
LABEL_175:
  v169 = (const void *)(v168 + 9360);
  v170 = strlen((const char *)(v168 + 9360));
  v171 = v404;
  v172 = v170;
  v173 = v170;
  if ( (_QWORD)v404 )
  {
    v171 = v404 - 1;
    v173 = v170 + v404 - 1;
  }
  v174 = v403;
  v175 = v173 + 1;
  if ( *((_QWORD *)&v404 + 1) < v173 + 1 )
  {
    v350 = v173;
    v371 = v173 + 1;
    v403 = (_BYTE *)qvector_reserve();
    v173 = v350;
    v174 = v403;
    v175 = v371;
  }
  *(_QWORD *)&v404 = v175;
  v174[v173] = 0;
  memmove(&v403[v171], v169, v172);
  qstrncpy();
  utf8_utf16();
  v176 = v396;
  v177 = 2;
  if ( (_QWORD)v396 )
  {
    v177 = v396 + 1;
    v176 = v396 - 1;
  }
  v178 = v395;
  if ( *((_QWORD *)&v396 + 1) < v177 )
  {
    v395 = (char *)qvector_reserve();
    v178 = v395;
  }
  *(_QWORD *)&v396 = v177;
  *(_WORD *)&v178[2 * v176] = 0;
  *(_WORD *)&v395[2 * v176 + 2] = 0;
  v179 = v396;
  v180 = _mm_cvtsi32_si128(v396);
  *(_QWORD *)(v7 + 976) = v394 + v379;
  *(_DWORD *)(v7 + 968) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(v180, 0));
  v181 = 2 * v179;
  if ( v181 )
    sub_4ACC0((__int64 *)&v393, v395, v181);
  v182 = v388;
  v183 = v387;
  v184 = v7 + 976 - v391;
  v401 = v184;
  v185 = v388 + 1;
  if ( &v401 >= v387 && &v401 < (__int64 *)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
  {
    if ( *((_QWORD *)&v388 + 1) < v185 )
    {
      v387 = (void *)qvector_reserve();
      v183 = v387;
      v182 = v388;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v185 )
  {
    v387 = (void *)qvector_reserve();
    v183 = v387;
    v184 = v401;
    v182 = v388;
  }
  v183[v182] = v184;
  v186 = *(_QWORD *)(v7 + 976);
  v187 = v389;
  v401 = 272;
  v405[34] = v186;
  v188 = v390;
  *(_QWORD *)&v388 = v388 + 1;
  v189 = v390 + 1;
  if ( &v401 >= v389 && &v401 < (__int64 *)((char *)v389 + 8 * *((_QWORD *)&v390 + 1)) )
  {
    if ( *((_QWORD *)&v390 + 1) < v189 )
    {
      v389 = (void *)qvector_reserve();
      v187 = v389;
      v188 = v390;
    }
    v187[v188] = 272;
  }
  else
  {
    if ( *((_QWORD *)&v390 + 1) < v189 )
    {
      v389 = (void *)qvector_reserve();
      v187 = v389;
      v190 = v401;
      v188 = v390;
    }
    else
    {
      v190 = 272;
    }
    v187[v188] = v190;
  }
  v191 = v389;
  v401 = 280;
  v192 = v390 + 1;
  v193 = v390 + 2;
  v405[35] = v394 + v379;
  *(_QWORD *)&v390 = v390 + 1;
  if ( &v401 >= v389 && &v401 < (__int64 *)((char *)v389 + 8 * *((_QWORD *)&v390 + 1)) )
  {
    if ( *((_QWORD *)&v390 + 1) < v193 )
    {
      v389 = (void *)qvector_reserve();
      v191 = v389;
      v192 = v390;
    }
    v191[v192] = 280;
  }
  else
  {
    if ( *((_QWORD *)&v390 + 1) < v193 )
    {
      v389 = (void *)qvector_reserve();
      v191 = v389;
      v194 = v401;
      v192 = v390;
    }
    else
    {
      v194 = 280;
    }
    v191[v192] = v194;
  }
  *(_QWORD *)&v390 = v390 + 1;
  if ( (_QWORD)v404 )
    sub_4ACC0((__int64 *)&v393, v403, v404);
  if ( v403 )
  {
    *(_QWORD *)&v404 = 0;
    qfree();
  }
  v403 = (_BYTE *)&qword_58;
  v405[11] = v394 + v379;
  v195 = v389;
  v196 = v390;
  v197 = v390 + 1;
  if ( &v403 >= v389 && &v403 < (_BYTE **)((char *)v389 + 8 * *((_QWORD *)&v390 + 1)) )
  {
    if ( *((_QWORD *)&v390 + 1) < v197 )
    {
      v389 = (void *)qvector_reserve();
      v195 = v389;
      v196 = v390;
    }
    v195[v196] = 88;
  }
  else
  {
    if ( *((_QWORD *)&v390 + 1) < v197 )
    {
      v389 = (void *)qvector_reserve();
      v195 = v389;
      v198 = v403;
      v196 = v390;
    }
    else
    {
      v198 = (_BYTE *)&qword_58;
    }
    v195[v196] = v198;
  }
  *(_QWORD *)&v390 = v390 + 1;
  LODWORD(v401) = v379 + v394 + 4;
  sub_4ACC0((__int64 *)&v393, &v401, 4u);
  v199 = v388;
  v200 = v387;
  v201 = (_BYTE *)(v394 + v379 - 4);
  v403 = v201;
  v202 = v388 + 1;
  if ( &v403 >= v387 && &v403 < (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
  {
    if ( *((_QWORD *)&v388 + 1) < v202 )
    {
      v387 = (void *)qvector_reserve();
      v200 = v387;
      v199 = v388;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v202 )
  {
    v387 = (void *)qvector_reserve();
    v200 = v387;
    v201 = v403;
    v199 = v388;
  }
  v200[v199] = v201;
  memset(v406, 0, 0x400u);
  *(_QWORD *)&v388 = v388 + 1;
  sub_4ACC0((__int64 *)&v393, v406, 0x400u);
  *(_QWORD *)(v7 + 984) = v394 + v379;
  v203 = v387;
  v204 = v388;
  v205 = (_BYTE *)(v7 + 984 - v391);
  v403 = v205;
  v206 = v388 + 1;
  if ( &v403 >= v387 && &v403 < (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
  {
    if ( *((_QWORD *)&v388 + 1) < v206 )
    {
      v387 = (void *)qvector_reserve();
      v203 = v387;
      v204 = v388;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v206 )
  {
    v387 = (void *)qvector_reserve();
    v203 = v387;
    v205 = v403;
    v204 = v388;
  }
  v203[v204] = v205;
  *(_QWORD *)&v388 = v388 + 1;
  v401 = 0;
  v402 = 0;
  sub_4C670(v4, (__int64 *)&v384, &s, &v401);
  if ( v395 )
  {
    *(_QWORD *)&v396 = 0;
    qfree();
    v395 = nullptr;
    *((_QWORD *)&v396 + 1) = 0;
  }
  for ( i = v384; *i; v384 = i )
  {
    v208 = qstrlen();
    v209 = v396;
    v210 = v208;
    v211 = v208;
    if ( (_QWORD)v396 )
    {
      v209 = v396 - 1;
      v211 = v208 + v396 - 1;
    }
    v212 = v395;
    v213 = v211 + 1;
    if ( *((_QWORD *)&v396 + 1) < (unsigned __int64)(v211 + 1) )
    {
      v348 = v211;
      v363 = v211 + 1;
      v395 = (char *)qvector_reserve();
      v211 = v348;
      v212 = v395;
      v213 = v363;
    }
    *(_QWORD *)&v396 = v213;
    v214 = 2 * v210;
    *(_WORD *)&v212[2 * v211] = 0;
    memmove(&v395[2 * v209], i, v214);
    v215 = v396;
    v216 = 2;
    if ( (_QWORD)v396 )
    {
      v216 = v396 + 1;
      v215 = v396 - 1;
    }
    v217 = v395;
    if ( *((_QWORD *)&v396 + 1) < v216 )
    {
      v362 = v216;
      v395 = (char *)qvector_reserve();
      v216 = v362;
      v217 = v395;
    }
    *(_QWORD *)&v396 = v216;
    i = (_WORD *)((char *)i + v214 + 2);
    *(_WORD *)&v217[2 * v215] = 0;
    *(_WORD *)&v395[2 * v215 + 2] = 0;
  }
  v218 = v396;
  v219 = 2;
  if ( (_QWORD)v396 )
  {
    v219 = v396 + 1;
    v218 = v396 - 1;
  }
  v220 = v395;
  if ( *((_QWORD *)&v396 + 1) < v219 )
  {
    v395 = (char *)qvector_reserve();
    v220 = v395;
  }
  *(_QWORD *)&v396 = v219;
  *(_WORD *)&v220[2 * v218] = 0;
  *(_WORD *)&v395[2 * v218 + 2] = 0;
  v221 = v389;
  v403 = (_BYTE *)&dword_120;
  v405[36] = v394 + v379;
  v222 = v390;
  v223 = v390 + 1;
  if ( &v403 >= v389 && &v403 < (_BYTE **)((char *)v389 + 8 * *((_QWORD *)&v390 + 1)) )
  {
    if ( *((_QWORD *)&v390 + 1) < v223 )
    {
      v389 = (void *)qvector_reserve();
      v221 = v389;
      v222 = v390;
    }
    v221[v222] = 288;
  }
  else
  {
    if ( *((_QWORD *)&v390 + 1) < v223 )
    {
      v389 = (void *)qvector_reserve();
      v221 = v389;
      v224 = v403;
      v222 = v390;
    }
    else
    {
      v224 = (_BYTE *)&dword_120;
    }
    v221[v222] = v224;
  }
  *(_QWORD *)&v390 = v390 + 1;
  if ( 2LL * (_QWORD)v396 )
    sub_4ACC0((__int64 *)&v393, v395, 2 * v396);
  v225 = s;
  v226 = nullptr;
  v403 = nullptr;
  v404 = 0;
  if ( !*s )
  {
    v236 = 2;
    v228 = 0;
LABEL_411:
    v378 = v236;
    v403 = (_BYTE *)qvector_reserve();
    v236 = v378;
    v226 = v403;
    goto LABEL_254;
  }
  v227 = 0;
  v228 = 0;
  do
  {
    v375 = v227;
    v229 = strlen(v225);
    v230 = v229;
    v231 = v229;
    if ( v228 )
    {
      --v228;
      v231 = v229 + v228;
    }
    v232 = v231 + 1;
    if ( v375 < v231 + 1 )
    {
      v364 = v231;
      v377 = v231 + 1;
      v403 = (_BYTE *)qvector_reserve();
      v231 = v364;
      v226 = v403;
      v232 = v377;
    }
    *(_QWORD *)&v404 = v232;
    v226[v231] = 0;
    memmove(&v403[v228], v225, v230);
    v233 = v404;
    v234 = 2;
    if ( (_QWORD)v404 )
    {
      v234 = v404 + 1;
      v233 = v404 - 1;
    }
    v235 = v403;
    if ( *((_QWORD *)&v404 + 1) < v234 )
    {
      v376 = v234;
      v403 = (_BYTE *)qvector_reserve();
      v234 = v376;
      v235 = v403;
    }
    *(_QWORD *)&v404 = v234;
    v225 += v230 + 1;
    v235[v233] = 0;
    v403[v233 + 1] = 0;
    v228 = v404;
    s = v225;
    v227 = *((_QWORD *)&v404 + 1);
    v226 = v403;
  }
  while ( *v225 );
  v236 = 2;
  if ( (_QWORD)v404 )
  {
    v236 = v404 + 1;
    v228 = v404 - 1;
  }
  if ( *((_QWORD *)&v404 + 1) < v236 )
    goto LABEL_411;
LABEL_254:
  *(_QWORD *)&v404 = v236;
  v226[v228] = 0;
  v403[v228 + 1] = 0;
  v237 = v389;
  v386 = 296;
  v405[37] = v394 + v379;
  v238 = v390;
  v239 = v390 + 1;
  if ( &v386 >= v389 && &v386 < (__int64 *)((char *)v389 + 8 * *((_QWORD *)&v390 + 1)) )
  {
    if ( *((_QWORD *)&v390 + 1) < v239 )
    {
      v389 = (void *)qvector_reserve();
      v237 = v389;
      v238 = v390;
    }
    v237[v238] = 296;
  }
  else
  {
    if ( *((_QWORD *)&v390 + 1) < v239 )
    {
      v389 = (void *)qvector_reserve();
      v237 = v389;
      v240 = v386;
      v238 = v390;
    }
    else
    {
      v240 = 296;
    }
    v237[v238] = v240;
  }
  *(_QWORD *)&v390 = v390 + 1;
  if ( (_QWORD)v404 )
    sub_4ACC0((__int64 *)&v393, v403, v404);
  if ( v403 )
  {
    *(_QWORD *)&v404 = 0;
    qfree();
  }
  if ( v401 )
  {
    *(_QWORD *)&v402 = 0;
    qfree();
  }
  v403 = (_BYTE *)off_130;
  v405[38] = v394 + v379;
  v241 = v389;
  v242 = v390;
  v243 = v390 + 1;
  if ( &v403 >= v389 && &v403 < (_BYTE **)((char *)v389 + 8 * *((_QWORD *)&v390 + 1)) )
  {
    if ( *((_QWORD *)&v390 + 1) < v243 )
    {
      v389 = (void *)qvector_reserve();
      v241 = v389;
      v242 = v390;
    }
    v241[v242] = 304;
  }
  else
  {
    if ( *((_QWORD *)&v390 + 1) < v243 )
    {
      v389 = (void *)qvector_reserve();
      v241 = v389;
      v244 = v403;
      v242 = v390;
    }
    else
    {
      v244 = (_BYTE *)off_130;
    }
    v241[v242] = v244;
  }
  *(_QWORD *)&v390 = v390 + 1;
  v403 = nullptr;
  v404 = 0;
  v403 = (_BYTE *)qvector_reserve();
  memset(&v403[v404], 0, 265 - v404);
  v245 = v403;
  *(_QWORD *)&v404 = 265;
  v403[264] = 0;
  sub_4ACC0((__int64 *)&v393, v245, 0x108u);
  if ( v403 )
  {
    *(_QWORD *)&v404 = 0;
    qfree();
  }
  v246 = *(_QWORD *)(v4 + 80);
  if ( *(_BYTE *)(v246 + 200)
    && !(unsigned int)sub_4FEA0(v4, (const char *)(v246 + 200), (__int64 *)&v403, &v401, 0.0, *(double *)a3.m128i_i64) )
  {
    v405[39] = &v403[(unsigned int)v401];
  }
  *(_QWORD *)(v7 + 8) = -1;
  *(_QWORD *)(v7 + 184) = 1;
  *(_QWORD *)(v7 + 280) = 0x100000005LL;
  *(_QWORD *)(v7 + 288) = 0x203000A28LL;
  v247 = *(_QWORD *)(v4 + 192);
  if ( *(_WORD *)(v247 + 104) == 523 )
    v248 = *(_QWORD *)(v247 + 128);
  else
    v248 = *(unsigned int *)(v247 + 132);
  *(_QWORD *)(v7 + 16) = v248;
  v249 = v391;
  v250 = v387;
  v251 = (_BYTE *)(v7 + 24 - v391);
  *(_QWORD *)(v7 + 24) = v319 - v391;
  v252 = v318 - v249;
  v253 = v388;
  *(_QWORD *)(v7 + 32) = v252;
  v403 = v251;
  v254 = v253 + 1;
  if ( &v403 >= v250 && &v403 < &v250[*((_QWORD *)&v388 + 1)] )
  {
    if ( *((_QWORD *)&v388 + 1) < v254 )
    {
      v381 = v251;
      v387 = (void *)qvector_reserve();
      v250 = v387;
      v251 = v381;
      v253 = v388;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v254 )
  {
    v387 = (void *)qvector_reserve();
    v250 = v387;
    v251 = v403;
    v253 = v388;
  }
  v250[v253] = v251;
  v255 = v387;
  v256 = v388 + 1;
  v257 = (_BYTE *)(v7 + 32 - v391);
  v258 = v388 + 2;
  *(_QWORD *)&v388 = v388 + 1;
  v403 = v257;
  if ( &v403 >= v387 && &v403 < (_BYTE **)((char *)v387 + 8 * *((_QWORD *)&v388 + 1)) )
  {
    if ( *((_QWORD *)&v388 + 1) < v258 )
    {
      v380 = (_BYTE *)(v7 + 32 - v391);
      v387 = (void *)qvector_reserve();
      v255 = v387;
      v257 = v380;
      v256 = v388;
    }
  }
  else if ( *((_QWORD *)&v388 + 1) < v258 )
  {
    v387 = (void *)qvector_reserve();
    v255 = v387;
    v257 = v403;
    v256 = v388;
  }
  v255[v256] = v257;
  v259 = 2147344384;
  *(_QWORD *)&v388 = v388 + 1;
  if ( *(_BYTE *)(v4 + 57) )
    v259 = 0x7FFFFFDE000LL;
  v405[6] = v259;
  v260 = *(_DWORD *)(v4 + 248);
  v261 = v389;
  LODWORD(v405[33]) = 1033;
  LODWORD(v405[8]) = v260;
  v405[9] = *(int *)(v4 + 252);
  v405[12] = v7 - v391;
  v262 = v390;
  v263 = _mm_loadh_ps((const double *)(v345 + 8256));
  v403 = (_BYTE *)&qword_60;
  *(__m128 *)&v405[1] = v263;
  v264 = v390 + 1;
  if ( &v403 >= v389 && &v403 < (_BYTE **)((char *)v389 + 8 * *((_QWORD *)&v390 + 1)) )
  {
    if ( *((_QWORD *)&v390 + 1) < v264 )
    {
      v389 = (void *)qvector_reserve();
      v261 = v389;
      v262 = v390;
    }
    v261[v262] = 96;
  }
  else
  {
    if ( *((_QWORD *)&v390 + 1) < v264 )
    {
      v389 = (void *)qvector_reserve();
      v261 = v389;
      v265 = v403;
      v262 = v390;
    }
    else
    {
      v265 = (_BYTE *)&qword_60;
    }
    v261[v262] = v265;
  }
  *(_QWORD *)&v390 = v390 + 1;
  if ( (_QWORD)v394 )
    sub_4ACC0(&v391, v393, v394);
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
    sub_E960((__int64)"--Mapping FS -----------------------------------------\n");
  v266 = 2147344384;
  if ( *(_BYTE *)(v4 + 57) )
    v266 = 0x7FFFFFDE000LL;
  v267 = *(_QWORD *)(v4 + 64);
  s = (char *)v266;
  if ( (unsigned int)sub_3C370(v267, (double *)&s, 0x2000u, 128, 1u, 0, (__int64)&v386, &v401, 0) )
    goto LABEL_383;
  v268 = v401;
  *(_DWORD *)(v401 + 112) |= 0x108u;
  v269 = *(_QWORD *)(v268 + 64) <= 3u;
  *(_BYTE *)(v268 + 105) = 6;
  v270 = *(_QWORD *)(v268 + 48);
  if ( v269 )
  {
    v308 = qvector_reserve();
    *(_QWORD *)(v268 + 48) = v308;
    v270 = v308;
  }
  *(_QWORD *)(v268 + 56) = 4;
  *(_WORD *)v270 = 18772;
  *(_BYTE *)(v270 + 2) = 66;
  *(_BYTE *)(*(_QWORD *)(v268 + 48) + 3LL) = 0;
  v271 = v401;
  v272 = *(_DWORD **)(v401 + 72);
  if ( *(_QWORD *)(v401 + 88) <= 4u )
  {
    v307 = qvector_reserve();
    *(_QWORD *)(v271 + 72) = v307;
    v272 = (_DWORD *)v307;
  }
  *(_QWORD *)(v271 + 80) = 5;
  *v272 = 1096040772;
  *(_BYTE *)(*(_QWORD *)(v271 + 72) + 4LL) = 0;
  v273 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 64) + 40LL))(*(_QWORD *)(v4 + 64));
  *(_BYTE *)(v401 + 104) = v273;
  s = nullptr;
  v274 = sub_3C370(
           *(_QWORD *)(v4 + 64),
           (double *)&s,
           (v392 + 4095) & 0xFFFFFFFFFFFFF000LL,
           128,
           1u,
           0,
           (__int64)&v403,
           &v401,
           0);
  if ( v274 )
  {
LABEL_383:
    sub_4D220(v4);
    v274 = 9;
  }
  else
  {
    v275 = v401;
    *(_DWORD *)(v401 + 112) |= 0x108u;
    v269 = *(_QWORD *)(v275 + 88) <= 4u;
    v276 = v275;
    *(_BYTE *)(v275 + 105) = 6;
    v277 = *(_DWORD **)(v275 + 72);
    *(_QWORD *)(v275 + 56) = 0;
    if ( v269 )
    {
      v317 = qvector_reserve();
      *(_QWORD *)(v276 + 72) = v317;
      v277 = (_DWORD *)v317;
    }
    *(_QWORD *)(v276 + 80) = 5;
    *v277 = 1096040772;
    *(_BYTE *)(*(_QWORD *)(v276 + 72) + 4LL) = 0;
    v278 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 64) + 40LL))(*(_QWORD *)(v4 + 64));
    v279 = (__m128i *)v387;
    *(_BYTE *)(v401 + 104) = v278;
    v280 = &v279->m128i_i8[8 * v388];
    v281 = 8 * v388;
    if ( v279 == (__m128i *)v280 )
    {
      v383 = s;
    }
    else
    {
      v282 = (8 * (__int64)v388) >> 3;
      if ( v282 )
      {
        _BitScanReverse64(&v283, v282);
        sub_4AB00(
          v279,
          (unsigned __int64 *)v279 + v388,
          2LL * (int)v283,
          *(double *)v263.m128_u64,
          *(double *)a3.m128i_i64,
          a4);
        if ( v281 > 128 )
        {
          sub_4A640(v279->m128i_i8, v279[8].m128i_i8);
          v284 = v279 + 8;
          do
          {
            v285 = v284->m128i_i64[0];
            v286 = v284[-1].m128i_u64[1];
            v287 = &v284[-1].m128i_i64[1];
            if ( v284->m128i_i64[0] >= v286 )
            {
              v288 = (__int64 *)v284;
            }
            else
            {
              do
              {
                v287[1] = v286;
                v288 = v287;
                v286 = *--v287;
              }
              while ( v285 < v286 );
            }
            *v288 = v285;
            v284 = (__m128i *)((char *)v284 + 8);
          }
          while ( v280 != (char *)v284 );
          goto LABEL_311;
        }
      }
      else
      {
        sub_4AB00(v279, (unsigned __int64 *)v279 + v388, -2, *(double *)v263.m128_u64, *(double *)a3.m128i_i64, a4);
      }
      sub_4A640(v279->m128i_i8, v280);
LABEL_311:
      v289 = v387;
      v383 = s;
      if ( 8LL * (_QWORD)v388 )
      {
        v290 = s;
        do
        {
          v291 = (_QWORD *)(v391 + *v289++);
          *v291 += v290;
        }
        while ( v289 != (_QWORD *)((char *)v387 + 8 * (_QWORD)v388) );
        v383 = v290;
      }
    }
    v292 = (char *)v389;
    v293 = 8 * v390;
    v294 = (char *)v389 + 8 * v390;
    if ( v389 != v294 )
    {
      if ( v293 >> 3 )
      {
        _BitScanReverse64(&v295, v293 >> 3);
        sub_4AB00(
          (__m128i *)v389,
          (unsigned __int64 *)v389 + v390,
          2LL * (int)v295,
          *(double *)v263.m128_u64,
          *(double *)a3.m128i_i64,
          a4);
        if ( v293 > 128 )
        {
          v296 = v292 + 128;
          sub_4A640(v292, v292 + 128);
          do
          {
            v297 = *(_QWORD *)v296;
            v298 = *((_QWORD *)v296 - 1);
            v299 = v296 - 8;
            if ( *(_QWORD *)v296 >= v298 )
            {
              v300 = v296;
            }
            else
            {
              do
              {
                *((_QWORD *)v299 + 1) = v298;
                v300 = v299;
                v298 = *((_QWORD *)v299 - 1);
                v299 -= 8;
              }
              while ( v297 < v298 );
            }
            v296 += 8;
            *(_QWORD *)v300 = v297;
          }
          while ( v294 != v296 );
          goto LABEL_322;
        }
      }
      else
      {
        sub_4AB00(
          (__m128i *)v389,
          (unsigned __int64 *)v389 + v390,
          -2,
          *(double *)v263.m128_u64,
          *(double *)a3.m128i_i64,
          a4);
      }
      sub_4A640(v292, v294);
LABEL_322:
      v301 = (char *)v389;
      v302 = (char *)v389 + 8 * v390;
      if ( 8LL * (_QWORD)v390 )
      {
        do
        {
          v303 = *(_QWORD *)v301;
          v301 += 8;
          *(_QWORD *)((char *)v405 + v303) += v383;
        }
        while ( v301 != v302 );
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))(**(_QWORD **)(v4 + 64) + 8LL))(
      *(_QWORD *)(v4 + 64),
      v386,
      v405,
      4248);
    (*(void (__fastcall **)(_QWORD, _BYTE *, __int64, _QWORD))(**(_QWORD **)(v4 + 64) + 8LL))(
      *(_QWORD *)(v4 + 64),
      v403,
      v391,
      v392);
  }
  if ( v399 )
  {
    *(_QWORD *)&v400 = 0;
    qfree();
  }
  if ( v397 )
  {
    *(_QWORD *)&v398 = 0;
    qfree();
  }
  if ( v395 )
  {
    *(_QWORD *)&v396 = 0;
    qfree();
  }
  if ( v393 )
  {
    *(_QWORD *)&v394 = 0;
    qfree();
  }
  if ( v391 )
  {
    *(_QWORD *)&v392 = 0;
    qfree();
  }
  if ( v389 )
  {
    *(_QWORD *)&v390 = 0;
    qfree();
  }
  if ( v387 )
  {
    *(_QWORD *)&v388 = 0;
    qfree();
  }
  return v274;
}

