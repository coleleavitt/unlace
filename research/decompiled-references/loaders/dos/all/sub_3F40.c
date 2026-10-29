unsigned __int64 __fastcall sub_3F40(
        __int64 a1,
        __int64 a2,
        const char *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 sreg; // rbx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // ebp
  __int64 v47; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // eax
  __int64 v54; // rax
  unsigned int v55; // ebp
  const char *v56; // rsi
  int v57; // edx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // eax
  int v62; // edx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int8 v67; // al
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rsi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  int v98; // ebx
  __int64 v99; // r13
  const char *v100; // rsi
  int v101; // eax
  __int64 v102; // r8
  __int64 v103; // r9
  unsigned __int64 v104; // rdx
  __int64 v105; // rcx
  unsigned __int64 v106; // rsi
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  unsigned __int64 v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  const char *v125; // rbx
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rbx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rsi
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rsi
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rsi
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rsi
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // r12
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rax
  const char *v162; // rsi
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rbx
  __int64 v168; // rax
  __int64 selector; // rax
  const char *v170; // rsi
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // r12
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  __int64 v184; // rax
  const char *v185; // rsi
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  __int16 v190; // ax
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  unsigned __int64 addr; // rbx
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  unsigned __int64 i; // r12
  unsigned __int64 *v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int64 v204; // r8
  __int64 v205; // r9
  __int64 v206; // rbp
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // rbx
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 v216; // r9
  __m128 v217; // xmm4
  __m128 v218; // xmm5
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // rbx
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // r8
  __int64 v227; // r9
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  __m128 v231; // xmm4
  __m128 v232; // xmm5
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // r9
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // r8
  __int64 v240; // r9
  __int64 v241; // rbx
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // r8
  __int64 v245; // r9
  __int64 v246; // rbx
  char byte; // al
  __int64 v248; // rdx
  __int64 v249; // rcx
  __int64 v250; // r8
  __int64 v251; // r9
  __int64 v252; // r12
  __int64 v253; // rdx
  __int64 v254; // rcx
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // r13
  __int64 v258; // rbx
  unsigned __int64 v259; // rbp
  __int64 v260; // r14
  __int64 v261; // rax
  __int64 v262; // rcx
  void *v263; // rbp
  __int64 v264; // rax
  __int64 v265; // rdi
  __int64 v266; // r13
  __int64 v267; // r12
  __int64 v268; // rbp
  _QWORD *v269; // rbx
  __int64 v270; // rax
  __int64 v271; // rax
  __int64 v272; // rax
  __int64 v273; // rax
  unsigned int v274; // ebx
  __int64 v275; // rax
  __int64 v276; // r12
  __int64 v277; // rdx
  __int64 v278; // rcx
  __int64 v279; // r8
  __int64 v280; // r9
  __int64 v281; // rax
  __int64 segm_by_sel; // rax
  __int16 v283; // ax
  __int64 v284; // rdx
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  int v288; // r12d
  __int64 v289; // r15
  __int64 v290; // rdx
  __int64 v291; // rcx
  __int64 v292; // r8
  __int64 v293; // r9
  __int16 v294; // ax
  unsigned __int64 v295; // rbx
  __int64 v296; // rdx
  __int64 v297; // rcx
  __int64 v298; // r8
  __int64 v299; // r9
  __int64 v300; // r12
  __int64 v301; // rdx
  __int64 v302; // rcx
  __int64 v303; // r8
  __int64 v304; // r9
  __int64 v305; // rax
  __int64 v306; // rdx
  __int64 v307; // rcx
  __int64 v308; // r8
  __int64 v309; // r9
  __int64 v310; // rdx
  __int64 v311; // rcx
  __int64 v312; // r8
  __int64 v313; // r9
  __int64 v314; // rax
  __int64 v315; // rax
  char v316; // bp
  unsigned __int8 v317; // al
  char v318; // al
  __int64 v319; // rdi
  unsigned __int16 v320; // ax
  __int64 *v321; // rax
  __int64 word; // rbp
  unsigned __int16 v323; // ax
  __int64 v324; // rbx
  __int64 v325; // rdx
  __int64 v326; // rcx
  __int64 v327; // r8
  __int64 v328; // r9
  __int16 v329; // ax
  __int64 v330; // [rsp+0h] [rbp-D8h]
  char v331; // [rsp+0h] [rbp-D8h]
  __int64 v332; // [rsp+0h] [rbp-D8h]
  __int64 ph; // [rsp+8h] [rbp-D0h]
  char v335; // [rsp+1Ch] [rbp-BCh]
  int v336; // [rsp+20h] [rbp-B8h]
  unsigned int v337; // [rsp+24h] [rbp-B4h]
  __int64 v338; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v339; // [rsp+30h] [rbp-A8h]
  __int64 v340; // [rsp+38h] [rbp-A0h]
  __int64 v341; // [rsp+40h] [rbp-98h] BYREF
  __int64 v342; // [rsp+48h] [rbp-90h] BYREF
  __int64 v343; // [rsp+50h] [rbp-88h] BYREF
  __int128 v344; // [rsp+58h] [rbp-80h]
  _BYTE v345[2]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int16 v346; // [rsp+72h] [rbp-66h]
  unsigned __int16 v347; // [rsp+74h] [rbp-64h]
  unsigned __int16 v348; // [rsp+76h] [rbp-62h]
  unsigned __int16 v349; // [rsp+78h] [rbp-60h]
  unsigned __int16 v350; // [rsp+7Eh] [rbp-5Ah]
  unsigned __int16 v351; // [rsp+80h] [rbp-58h]
  unsigned __int16 v352; // [rsp+84h] [rbp-54h]
  unsigned __int16 v353; // [rsp+86h] [rbp-52h]
  unsigned __int16 v354; // [rsp+88h] [rbp-50h]
  __int16 v355; // [rsp+8Ah] [rbp-4Eh]
  _WORD v356[2]; // [rsp+94h] [rbp-44h] BYREF
  unsigned __int64 v357; // [rsp+98h] [rbp-40h]

  v335 = a2;
  v357 = __readfsqword(0x28u);
  v336 = 0;
  v338 = -1;
  v339 = -1;
  v337 = 0;
  ph = get_ph();
  if ( _setjmp(env) )
    goto LABEL_2;
  v55 = 0;
  setinf_flag(3, 2, 0);
  set_processor_type("metapc", 1);
  v56 = "MS-DOS executable (perhaps overlayed)";
  v57 = strcasecmp(a3, "MS-DOS executable (perhaps overlayed)");
  v61 = 3;
  if ( v57 )
  {
    v56 = "MS-DOS executable (EXE)";
    v62 = strcasecmp(a3, "MS-DOS executable (EXE)");
    v61 = 2;
    if ( v62 )
    {
      v56 = "MS-DOS SYS-file (perhaps device driver)";
      v61 = strcasecmp(a3, "MS-DOS SYS-file (perhaps device driver)") == 0;
    }
  }
  v336 = v61;
  callui(25, v56, &callui, v58, v59, v60, a1, ph, a3);
  v67 = getinf(99, v56, v63, v64, v65, v66) & 0xF0;
  if ( v336 > 1 )
  {
    setinf(58, v67 | 6u);
    lread(v330, v345, 28);
    if ( v348 || (int)sub_32C0(1u, (__int64)"HIDECANCEL\nPossibly packed file, continue?") > 0 )
    {
      setinf(13, v350);
      setinf(14, v353);
      setinf(17, v351);
      v68 = v352;
      setinf(15, v352);
      if ( (unsigned __int64)getinf(14, v68, v69, v70, v71, v72) > 0xFFEF
        || (unsigned __int64)getinf(13, v68, v73, v74, v75, v76) > 0xFFEF )
      {
        if ( (unsigned __int64)getinf(12, v68, v73, v74, v75, v76) <= 0xF )
        {
          v68 = 16;
          setinf(12, 16);
        }
        if ( (unsigned __int64)getinf(14, v68, v233, v234, v235, v236) > 0xFFEF )
        {
          v68 = (__int16)getinf(14, v68, v237, v238, v239, v240);
          setinf(14, v68);
        }
        if ( (unsigned __int64)getinf(13, v68, v237, v238, v239, v240) > 0xFFEF )
        {
          v68 = (__int16)getinf(13, v68, v73, v74, v75, v76);
          setinf(13, v68);
        }
      }
      v77 = getinf(13, v68, v73, v74, v75, v76);
      v82 = v77 + getinf(12, v68, v78, v79, v80, v81);
      setinf(13, v82);
      v87 = getinf(14, v82, v83, v84, v85, v86);
      v92 = v87 + getinf(12, v82, v88, v89, v90, v91);
      setinf(14, v92);
      v97 = getinf(12, v92, v93, v94, v95, v96);
      setinf(19, 16 * v97);
      v98 = 16 * (32 * v347 - v349);
      if ( v346 )
        v98 = v98 + v346 - 512;
      v99 = v98;
      netnode_check(&v338, "$ IDALDR node for unload $", 0, 1);
      v100 = v345;
      netnode_set(v338, v345, 28);
      v101 = qlsize(v330);
      v104 = v101 - 16 * (unsigned int)v349;
      v105 = (unsigned int)v336;
      if ( v104 <= v98 )
      {
        v99 = v104;
LABEL_34:
        v106 = getinf(19, v100, v104, v105, v102, v103) + v99;
        setinf(20, v106);
        v111 = getinf(17, v106, v107, v108, v109, v110);
        v116 = 16 * getinf(13, v106, v112, v113, v114, v115) + v111;
        if ( getinf(20, v106, v117, v118, v119, v120) < v116 )
        {
          v106 = v116;
          setinf(20, v116);
        }
        sub_31F0((__int64)"Reading relocation table...\n");
        if ( v348 )
        {
          v106 = v354;
          qlseek(v330, v354, 0);
          if ( v348 )
          {
            v288 = 0;
            do
            {
              lread(v330, v356, 4);
              v289 = v356[0];
              v294 = getinf(12, v356, v290, v291, v292, v293);
              v295 = v289 + 16LL * (unsigned __int16)(v294 + v356[1]);
              if ( v295 >= getinf(20, v356, v296, v297, v298, v299) )
                sub_3450();
              v106 = v295;
              ++v288;
              v341 = 1;
              netnode_supset(v338, v295, &v341, 8, 65);
            }
            while ( v348 > v288 );
          }
        }
        v125 = (const char *)(16 * v349);
        if ( v336 == 3 )
        {
          v106 = (unsigned __int64)v345;
          v337 = sub_5B10(v330, v345);
        }
        goto LABEL_43;
      }
      if ( v336 != 2 )
        goto LABEL_34;
      v100 = "HIDECANCEL\nThe input file has extra information at the end\n(tail %Xh, loaded %ah), continue?";
      if ( (int)sub_32C0(
                  1u,
                  (__int64)"HIDECANCEL\n"
                           "The input file has extra information at the end\n"
                           "(tail %Xh, loaded %ah), continue?",
                  v104,
                  *(double *)a4.m128_u64) > 0 )
        goto LABEL_34;
    }
    sub_33A0(0);
  }
  setinf(58, v67 | 2u);
  if ( v336 )
  {
    setinf(15, -1);
    v136 = 16 * getinf(12, -1, v284, v285, v286, v287);
  }
  else
  {
    setinf(15, 256);
    v131 = getinf(15, 256, v127, v128, v129, v130);
    v136 = 16 * getinf(12, 256, v132, v133, v134, v135) + v131;
  }
  setinf(19, v136);
  v125 = nullptr;
  v141 = getinf(12, v136, v137, v138, v139, v140);
  setinf(14, v141);
  v99 = qlsize(v330);
  v106 = v99 + getinf(19, v141, v142, v143, v144, v145);
  setinf(20, v106);
LABEL_43:
  v146 = getinf(19, v106, v121, v122, v123, v124);
  setinf(21, v146);
  v151 = getinf(20, v146, v147, v148, v149, v150);
  setinf(22, v151);
  v156 = v99 + getinf(19, v151, v152, v153, v154, v155);
  v161 = getinf(19, v151, v157, v158, v159, v160);
  v162 = v125;
  file2base(v330, v125, v161, v156, 1);
  if ( v337 != 2 )
  {
    if ( v336 == 3 || (v335 & 1) != 0 )
    {
      v167 = v338;
      v168 = getinf(14, v162, v163, v164, v165, v166);
      selector = find_selector(v168);
      v170 = "CODE";
      sub_34E0(selector, "CODE");
      if ( v336 <= 1 )
      {
        v300 = getinf(21, "CODE", v171, v172, v173, v174);
        v305 = getinf(21, "CODE", v301, v302, v303, v304);
        set_segm_start(v305, v300, 1);
        v170 = (const char *)getinf(21, v300, v306, v307, v308, v309);
        setinf(19, v170);
        v314 = getinf(19, v170, v310, v311, v312, v313);
        v315 = getseg(v314);
        if ( v315 )
        {
          *(_WORD *)(v315 + 44) |= 1u;
          update_segm(v315);
        }
      }
      if ( getinf(13, v170, v171, v172, v173, v174) == -1
        || (v179 = getinf(13, v170, v175, v176, v177, v178), v179 == getinf(14, v170, v180, v181, v182, v183)) )
      {
        v276 = getinf(14, v170, v175, v176, v177, v178);
        v281 = getinf(14, v170, v277, v278, v279, v280);
        segm_by_sel = get_segm_by_sel(v281);
        v185 = (_BYTE *)(&qword_18 + 7);
        set_default_sreg_value(segm_by_sel, 31, v276);
      }
      else
      {
        v184 = getinf(13, v170, v175, v176, v177, v178);
        v185 = "STACK";
        sub_34E0(v184, "STACK");
      }
      v190 = getinf(12, v185, v186, v187, v188, v189);
      v162 = (_BYTE *)(&dword_0 + 1);
      sub_3670(v190, 1, v167);
      addr = getinf(21, 1, v191, v192, v193, v194);
      for ( i = getinf(22, 1, v196, v197, v198, v199); addr < i; ++v55 )
      {
        while ( 1 )
        {
          v201 = (unsigned __int64 *)getnseg(v55);
          if ( v201 )
          {
            if ( addr >= *v201 )
              break;
          }
          sub_31F0(
            (__int64)"Dummy segment at 0x%a (next segment at 0x%a)\n",
            *(double *)a4.m128_u64,
            *(double *)a5.m128_u64);
          v162 = "DUMMY";
          sub_34E0((unsigned int)(addr >> 4), "DUMMY");
          if ( addr >= i )
            goto LABEL_58;
        }
        addr = v201[1];
        if ( !(unsigned __int8)is_mapped(addr) )
          addr = next_addr(addr);
      }
    }
    else
    {
      v283 = getinf(12, v125, v163, v164, v165, v166);
      v162 = nullptr;
      sub_3670(v283, 0, v338);
    }
  }
LABEL_58:
  create_filename_cmt();
  v206 = getinf(20, v162, v202, v203, v204, v205);
  v211 = getinf(19, v162, v207, v208, v209, v210);
  a2 = getinf(12, v162, v212, v213, v214, v215);
  sub_2F80(
    (__int64)"Base Address: %ah Range: %ah-%ah Loaded length: %ah",
    a2,
    v211,
    v206,
    v99,
    v216,
    a4,
    a5,
    a6,
    a7,
    v217,
    v218,
    a10,
    a11,
    v330);
  if ( v336 > 1 )
  {
    v340 = 0;
    v223 = getinf(15, a2, v219, v220, v221, v222);
    a2 = getinf(14, a2, v224, v225, v226, v227);
    sub_2F80((__int64)"Entry Point : %a:%a", a2, v223, v228, v229, v230, a4, a5, a6, a7, v231, v232, a10, a11, v331);
    if ( v336 == 2 )
    {
      v340 = sub_5CA0();
      if ( v340 )
        v336 = 3;
    }
    if ( v336 == 3 )
    {
      if ( v337 == 2 )
      {
        v339 = sub_7A70(v332);
        v329 = getinf(12, a2, v325, v326, v327, v328);
        a2 = 0;
        sub_3670(v329, 0, v338);
      }
      else if ( v337 > 2 )
      {
        if ( v337 == 3 )
        {
          a2 = v355 == 0;
          v339 = sub_5EC0(v332, a2);
        }
      }
      else
      {
        if ( v337 )
          v340 = v332;
        sub_7610(v340);
        if ( !v337 )
          close_linput(v340);
      }
    }
    else
    {
      a2 = -1;
      v342 = v336;
      netnode_supset(v338, -1, &v342, 8, 65);
    }
  }
LABEL_2:
  v11 = v339;
  if ( v339 != -1 )
  {
    v12 = get_segm_by_sel(v339);
LABEL_4:
    set_segm_class(v12, "DATA", 0);
    set_segm_name(v12, "dseg", 0);
LABEL_5:
    a2 = 4;
    sub_31F0((__int64)"Default DS register: 0x%*a\n", 4, *(double *)a4.m128_u64);
    set_default_dataseg(v11);
    goto LABEL_6;
  }
  sub_31F0((__int64)"Searching for the data segment...\n");
  v53 = getinf(5, a2, v49, v50, v51, v52);
  if ( v53 != 22 )
  {
    if ( v53 != 23 )
      goto LABEL_6;
    v54 = getinf(14, a2, v13, v14, v15, v16);
    v11 = find_selector(v54);
    goto LABEL_5;
  }
  v241 = getinf(15, a2, v13, v14, v15, v16);
  v246 = 16 * getinf(14, a2, v242, v243, v244, v245) + v241;
  if ( (unsigned __int8)get_byte(v246) == 0x9A )
  {
    word = (unsigned __int16)get_word(v246 + 1);
    v323 = get_word(v246 + 3);
    a2 = 4;
    v246 = 16 * sel2para(v323) + word;
    setinf(52, 4);
  }
  byte = get_byte(v246);
  if ( (byte & 0xF8) == 0xB8
    && ((v316 = byte & 7, (unsigned __int8)get_byte(v246 + 3) == 0x8E)
     && (v318 = get_byte(v246 + 4), (v318 & 0xF8) == 0xD8)
     && v316 == (v318 & 7)
     || (unsigned __int8)get_byte(v246 + 3) == 46
     && (unsigned __int8)get_byte(v246 + 4) == 0x89
     && (v317 = get_byte(v246 + 5), (v317 & 0x8F) == 6)
     && v316 == ((v317 >> 3) & 7)) )
  {
    v319 = v246 + 1;
  }
  else
  {
    if ( (unsigned __int8)get_byte(v246) != 0xE9
      || (v324 = (unsigned __int16)get_word(v246 + 1) + v246, (unsigned __int8)get_byte(v324 + 3) != 0xFB)
      || (unsigned __int8)get_byte(v324 + 4) != 0xB9 )
    {
      sub_31F0((__int64)"Looking for '%s'...\n", " - Copyright");
      v252 = getinf(20, " - Copyright", v248, v249, v250, v251);
      v257 = getinf(19, " - Copyright", v253, v254, v255, v256);
      v344 = 0;
      v343 = 0;
      a4.m128_u64[0] = 0;
      v343 = qvector_reserve(&v343, 0, 1, 80);
      v258 = v343 + 80 * v344;
      *(_OWORD *)(v258 + 8) = 0;
      *(_QWORD *)v258 = 0;
      *(_QWORD *)&v344 = v344 + 1;
      v259 = *(_QWORD *)(v258 + 8);
      *(_QWORD *)(v258 + 24) = 0;
      *(_QWORD *)(v258 + 48) = 0;
      *(_DWORD *)(v258 + 72) = -1;
      *(_OWORD *)(v258 + 32) = 0;
      v260 = v259 + 12;
      *(_OWORD *)(v258 + 56) = 0;
      if ( v259 >= 0xFFFFFFFFFFFFFFF4LL )
      {
        v260 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v261 = qvector_reserve(v258, *(_QWORD *)v258, v259 + 12, 1);
        v262 = *(_QWORD *)(v258 + 8);
        *(_QWORD *)v258 = v261;
        memset((void *)(v261 + v262), 0, v259 + 12 - v262);
      }
      v263 = (void *)(*(_QWORD *)v258 + v259);
      *(_QWORD *)(v258 + 8) = v260;
      a2 = v252;
      qmemcpy(v263, " - Copyright", 12);
      v264 = bin_search(v257, v252, &v343, 1, 0);
      v265 = v343;
      v266 = v264;
      if ( v343 )
      {
        v267 = v344;
        if ( (_QWORD)v344 )
        {
          v268 = 0;
          do
          {
            v269 = (_QWORD *)(v265 + 80 * v268);
            if ( v269[6] )
            {
              v269[7] = 0;
              qfree();
            }
            if ( v269[3] )
            {
              v269[4] = 0;
              qfree();
            }
            if ( *v269 )
            {
              v269[1] = 0;
              qfree();
            }
            ++v268;
            v265 = v343;
          }
          while ( v267 != v268 );
        }
        *(_QWORD *)&v344 = 0;
        qfree();
      }
      goto LABEL_86;
    }
    v319 = v324 + 5;
  }
  v320 = get_word(v319);
  v321 = (__int64 *)get_segm_by_sel(v320);
  if ( !v321 )
    goto LABEL_6;
  v266 = *v321;
LABEL_86:
  if ( v266 != -1 )
  {
    v270 = getseg(v266);
    v12 = v270;
    if ( v270 )
    {
      *(_BYTE *)(v270 + 40) = 3;
      v11 = *(_QWORD *)(v270 + 48);
      goto LABEL_4;
    }
  }
LABEL_6:
  if ( v339 != -1 && v337 == 3 )
  {
    v271 = getinf(14, a2, v13, v14, v15, v16);
    v272 = find_selector(v271);
    v273 = get_segm_by_sel(v272);
    if ( v273 )
    {
      a2 = *(unsigned int *)(ph + 84);
      set_default_sreg_value(v273, a2, *(_QWORD *)(v273 + 48));
    }
  }
  v17 = getinf(15, a2, v13, v14, v15, v16);
  v22 = -1;
  if ( v17 != -1 )
  {
    v23 = getinf(15, -1, v18, v19, v20, v21);
    v28 = getinf(14, -1, v24, v25, v26, v27);
    v22 = 16 * sel2para(v28) + v23;
  }
  setinf(16, v22);
  if ( getinf(15, v22, v29, v30, v31, v32) != -1 )
  {
    if ( v336 <= 1 )
    {
      v126 = getinf(14, v22, v33, v34, v35, v36);
      sreg = find_selector(v126);
    }
    else if ( (unsigned __int8)getinf(52, v22, v33, v34, v35, v36) == 4 )
    {
      v274 = *(_DWORD *)(ph + 84);
      v275 = getinf(16, v22, v37, v38, v39, v40);
      v22 = v274;
      sreg = get_sreg(v275, v274);
    }
    else
    {
      sreg = getinf(12, v22, v37, v38, v39, v40) - 16;
    }
    v46 = *(_DWORD *)(ph + 84);
    v47 = getinf(16, v22, v41, v42, v44, v45);
    v22 = v46;
    split_sreg_range(v47, v46, sreg, 4, 1);
  }
  if ( (unsigned int)getinf(5, v22, v33, v34, v35, v36) == 23 )
    setinf(23, 256);
  return v357 - __readfsqword(0x28u);
}
