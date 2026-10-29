unsigned __int64 __fastcall sub_AE00(
        __int64 *a1,
        char a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  double v16; // xmm0_8
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r13
  __m128 v20; // xmm0
  __m128 v21; // xmm7
  int v22; // edx
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  const char *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  __int64 v35; // rsi
  __int64 v36; // rdx
  int v38; // edx
  __int16 v39; // r8
  int v40; // r14d
  __int64 v41; // r13
  __int64 v42; // r12
  __int64 v43; // r11
  __int64 v44; // r10
  __int64 v45; // r9
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 (__fastcall **v51)(); // rbx
  unsigned __int64 v52; // r13
  __m128 v53; // xmm0
  __int64 v54; // r8
  __int64 v55; // r9
  __m128 v56; // xmm4
  __m128 v57; // xmm5
  const char *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __m128 v62; // xmm4
  __m128 v63; // xmm5
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __m128 v68; // xmm4
  __m128 v69; // xmm5
  __int64 v70; // rcx
  __int32 v71; // edx
  __int64 v72; // r8
  unsigned int v73; // edx
  int v74; // r15d
  __int64 v75; // r12
  int v76; // r14d
  unsigned __int64 v77; // rcx
  int v78; // eax
  int v79; // ebp
  char v80; // al
  char *v81; // rsi
  unsigned __int64 v82; // rbp
  char *v83; // rsi
  size_t v84; // r8
  __m256i *v85; // rsi
  unsigned __int64 v86; // rbp
  int v87; // ebx
  char *v88; // rdi
  char *v89; // rdx
  __int64 v90; // r15
  __int64 v91; // r12
  __int64 v92; // rax
  __int64 v93; // rdx
  size_t v94; // rax
  bool v95; // zf
  int v96; // eax
  __int64 v97; // rax
  __int64 v98; // rbp
  __int64 v99; // rdx
  char *v100; // rbx
  char *v101; // rbx
  size_t v102; // rbp
  __int64 v103; // r10
  size_t v104; // rax
  char *v105; // rsi
  size_t v106; // rdx
  __int64 v107; // rax
  double v108; // xmm0_8
  unsigned __int64 v109; // rbx
  unsigned __int64 v110; // r13
  int v111; // edx
  int v112; // eax
  __int64 v113; // r8
  __int64 v114; // r9
  __m128 v115; // xmm4
  __m128 v116; // xmm5
  const char *v117; // rax
  int v118; // eax
  __int64 v119; // rbx
  __int64 v120; // r8
  char *v121; // rbp
  char *v122; // rax
  size_t v123; // r14
  __int64 *v124; // rdi
  unsigned int v125; // r13d
  size_t v126; // rax
  __int64 v127; // r12
  size_t v128; // rbx
  char *v129; // rax
  __m256i *v130; // r12
  __int64 v131; // rbx
  char *v132; // rax
  unsigned int v133; // r14d
  __int64 v134; // r13
  char *v135; // rbp
  __int64 v136; // rax
  const char *v137; // rsi
  const char *v138; // rdi
  unsigned int v139; // eax
  unsigned __int32 v140; // r13d
  char *v141; // rcx
  unsigned __int32 v142; // eax
  const char *v143; // rsi
  const char *v144; // rdi
  int v145; // eax
  int v146; // ebx
  unsigned __int64 v147; // rax
  int v148; // r13d
  char *v149; // rax
  __int64 j; // r13
  unsigned int *v151; // rbx
  __int64 v152; // rax
  unsigned int *k; // r14
  __int64 v154; // r12
  const char *v155; // rsi
  __int64 v156; // rbp
  const char *v157; // rdi
  __int64 v158; // r14
  __int64 v159; // rbp
  unsigned __int64 v160; // r15
  __int64 v161; // r12
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rax
  unsigned __int64 v165; // r12
  unsigned __int64 v166; // r15
  unsigned __int64 v167; // r9
  __int64 v168; // rsi
  __int64 v169; // rax
  size_t v170; // rdx
  __int64 v171; // r9
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rdi
  __int64 v175; // rbp
  __int64 v176; // r15
  __int64 v177; // r14
  __int64 *v178; // r12
  __int64 v179; // rdi
  __int64 v180; // rdi
  __int64 v181; // rdi
  __int64 v182; // rbp
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rbp
  __m128 v187; // xmm0
  int v188; // eax
  char *v189; // rbx
  __int64 v190; // rdi
  __int64 v191; // rax
  char *v192; // rbp
  __int64 v193; // r14
  char *v194; // r12
  __int64 v195; // rax
  __m128i v196; // xmm0
  __int64 v197; // rax
  __m128i v198; // xmm0
  __int64 v199; // rax
  __int64 v200; // rdi
  __int64 v201; // rdi
  bool v202; // cf
  __int64 v203; // rdx
  __int64 v204; // rax
  __int64 v205; // rbx
  __int64 v206; // r12
  char *v207; // r13
  __int64 v208; // rdi
  __int64 v209; // rdi
  __int64 v210; // rcx
  char *v211; // rax
  signed __int64 v212; // rdx
  __int64 v213; // rcx
  __m128i v214; // xmm0
  __int64 v215; // rcx
  __m128i v216; // xmm0
  __int64 v217; // rcx
  __int64 v218; // rcx
  __int64 v219; // rcx
  _OWORD *v220; // rax
  __int64 *v221; // rsi
  __int64 v222; // rdi
  __int64 v223; // rax
  __int64 v224; // rdx
  char *v225; // rbx
  _BOOL8 v226; // rsi
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  __m128 v231; // xmm4
  __m128 v232; // xmm5
  const char *v233; // rsi
  __m128i *v234; // rbx
  __int64 v235; // rdi
  char *v236; // rdi
  __int64 v237; // r12
  __int64 v238; // rbx
  char *v239; // rbp
  __int64 v240; // rdi
  __int64 v241; // rdi
  __int64 v242; // rdi
  __int64 v243; // rdx
  __int64 v244; // rax
  __int64 v245; // rax
  unsigned int v246; // ebx
  __int64 v247; // rax
  __int64 v248; // rdx
  bool v249; // cc
  unsigned __int8 v250; // al
  __int64 (__fastcall **v251)(); // rbx
  unsigned __int64 v252; // r13
  __int64 v253; // r13
  __int64 v254; // rax
  char *v255; // rcx
  __m128i v256; // xmm0
  __int32 v257; // r8d
  __int64 v258; // rdx
  __m128i si128; // xmm7
  char *v260; // rax
  __int64 v261; // rax
  __int64 v262; // rdx
  const char *v263; // rcx
  __m256i *v264; // r13
  __int64 v265; // rbx
  unsigned __int64 v266; // xmm0_8
  __int64 v267; // rdi
  char *v268; // rsi
  __m256i *v269; // rdi
  int i; // ebx
  int v271; // eax
  unsigned __int64 v272; // rdx
  unsigned __int64 v273; // rcx
  __int64 v274; // rdx
  unsigned int v275; // edx
  int v276; // r13d
  __int64 v277; // r8
  __int64 v278; // rbp
  __int64 v279; // r14
  __int64 *v280; // r15
  __int64 v281; // rdi
  __int64 v282; // rdi
  __int64 v283; // rcx
  _QWORD *v284; // rax
  __int64 v285; // rdx
  __int64 v286; // rcx
  __m128i v287; // xmm0
  __int64 v288; // rcx
  __m128i v289; // xmm0
  __int64 v290; // rcx
  _OWORD *v291; // rax
  __int64 v292; // rax
  __int64 *v293; // r14
  __int64 v294; // rdx
  __int64 v295; // rcx
  __int64 v296; // r8
  __int64 v297; // r9
  __m128 v298; // xmm4
  __m128 v299; // xmm5
  __int128 *v300; // rbx
  __int64 v301; // rdi
  __int64 *v302; // rdi
  __int64 v303; // r13
  __int64 v304; // r12
  __int64 v305; // rbp
  __int64 *v306; // rbx
  __int64 v307; // rdi
  __int64 v308; // rdi
  _QWORD *v309; // rbx
  _QWORD *v310; // rbp
  __int64 v311; // rdi
  __int64 v312; // r9
  __int64 v313; // r8
  unsigned __int64 v314; // r13
  unsigned __int64 v315; // r12
  __int64 v316; // r9
  __int64 v317; // r8
  unsigned __int64 v318; // r13
  unsigned __int64 v319; // r12
  unsigned int v320; // eax
  const char *v321; // rsi
  __int64 v322; // rax
  __int64 v323; // rbx
  char v324; // [rsp+0h] [rbp-F38h]
  char v325; // [rsp+0h] [rbp-F38h]
  char v326; // [rsp+0h] [rbp-F38h]
  char v327; // [rsp+0h] [rbp-F38h]
  __int64 v329; // [rsp+8h] [rbp-F30h]
  __int64 v330; // [rsp+10h] [rbp-F28h]
  int v331; // [rsp+10h] [rbp-F28h]
  char *v332; // [rsp+10h] [rbp-F28h]
  const char *v333; // [rsp+10h] [rbp-F28h]
  __int64 v334; // [rsp+10h] [rbp-F28h]
  __int64 ph; // [rsp+18h] [rbp-F20h]
  __int64 v336; // [rsp+18h] [rbp-F20h]
  unsigned __int64 v337; // [rsp+18h] [rbp-F20h]
  __int64 v338; // [rsp+20h] [rbp-F18h]
  size_t v339; // [rsp+20h] [rbp-F18h]
  size_t v340; // [rsp+20h] [rbp-F18h]
  unsigned __int64 v341; // [rsp+20h] [rbp-F18h]
  __int64 v342; // [rsp+20h] [rbp-F18h]
  __int64 v343; // [rsp+20h] [rbp-F18h]
  int s2; // [rsp+28h] [rbp-F10h]
  char *s2a; // [rsp+28h] [rbp-F10h]
  char *s2b; // [rsp+28h] [rbp-F10h]
  char *s2e; // [rsp+28h] [rbp-F10h]
  unsigned __int64 *s2c; // [rsp+28h] [rbp-F10h]
  unsigned __int32 s2d; // [rsp+28h] [rbp-F10h]
  size_t n[2]; // [rsp+30h] [rbp-F08h] BYREF
  __m256i *v351; // [rsp+40h] [rbp-EF8h]
  __m256i *v352; // [rsp+48h] [rbp-EF0h]
  unsigned int v353; // [rsp+54h] [rbp-EE4h]
  char *v354; // [rsp+58h] [rbp-EE0h]
  int v355; // [rsp+60h] [rbp-ED8h]
  unsigned int v356; // [rsp+64h] [rbp-ED4h]
  __int64 v357; // [rsp+68h] [rbp-ED0h]
  __int64 *v358; // [rsp+70h] [rbp-EC8h]
  char *v359; // [rsp+78h] [rbp-EC0h]
  unsigned int v360; // [rsp+8Ch] [rbp-EACh] BYREF
  int v361; // [rsp+90h] [rbp-EA8h] BYREF
  unsigned int v362; // [rsp+98h] [rbp-EA0h]
  unsigned int v363; // [rsp+9Ch] [rbp-E9Ch]
  unsigned int v364; // [rsp+A0h] [rbp-E98h]
  unsigned int v365; // [rsp+A4h] [rbp-E94h]
  __int64 v366; // [rsp+B0h] [rbp-E88h] BYREF
  __int128 v367; // [rsp+B8h] [rbp-E80h]
  __int64 v368; // [rsp+D0h] [rbp-E68h] BYREF
  __int128 v369; // [rsp+D8h] [rbp-E60h]
  __int64 v370; // [rsp+F0h] [rbp-E48h] BYREF
  __int128 v371; // [rsp+F8h] [rbp-E40h]
  char *v372; // [rsp+110h] [rbp-E28h] BYREF
  __m128i v373; // [rsp+118h] [rbp-E20h] BYREF
  char *v374; // [rsp+128h] [rbp-E10h] BYREF
  __int128 v375; // [rsp+130h] [rbp-E08h]
  __m256i v376; // [rsp+140h] [rbp-DF8h] BYREF
  __int64 *v377; // [rsp+160h] [rbp-DD8h]
  __int64 v378; // [rsp+168h] [rbp-DD0h] BYREF
  void *v379; // [rsp+170h] [rbp-DC8h]
  __int64 *v380; // [rsp+178h] [rbp-DC0h]
  __int64 *v381; // [rsp+180h] [rbp-DB8h]
  __int64 v382; // [rsp+188h] [rbp-DB0h]
  __int64 v383; // [rsp+190h] [rbp-DA8h]
  int v384; // [rsp+198h] [rbp-DA0h]
  __int64 v385; // [rsp+1A0h] [rbp-D98h]
  __int128 v386; // [rsp+1A8h] [rbp-D90h]
  __int64 *v387; // [rsp+1B8h] [rbp-D80h] BYREF
  __int128 v388; // [rsp+1C0h] [rbp-D78h]
  _BYTE v389[16]; // [rsp+1D0h] [rbp-D68h] BYREF
  int v390; // [rsp+1E0h] [rbp-D58h]
  int v391; // [rsp+1E4h] [rbp-D54h]
  _QWORD v392[16]; // [rsp+1E8h] [rbp-D50h] BYREF
  int v393; // [rsp+268h] [rbp-CD0h]
  _QWORD v394[2]; // [rsp+270h] [rbp-CC8h] BYREF
  __int128 v395; // [rsp+280h] [rbp-CB8h]
  __int64 v396; // [rsp+290h] [rbp-CA8h]
  __int64 v397; // [rsp+298h] [rbp-CA0h]
  __int64 v398; // [rsp+2A0h] [rbp-C98h]
  __int128 v399; // [rsp+2A8h] [rbp-C90h]
  __int128 v400; // [rsp+2B8h] [rbp-C80h]
  __int128 v401; // [rsp+2C8h] [rbp-C70h]
  __int128 v402; // [rsp+2D8h] [rbp-C60h]
  __int128 v403; // [rsp+2E8h] [rbp-C50h]
  __int128 v404; // [rsp+2F8h] [rbp-C40h]
  __int128 v405; // [rsp+308h] [rbp-C30h]
  __int128 v406; // [rsp+318h] [rbp-C20h]
  unsigned __int64 v407; // [rsp+328h] [rbp-C10h]
  _QWORD v408[2]; // [rsp+330h] [rbp-C08h] BYREF
  __int128 v409; // [rsp+340h] [rbp-BF8h]
  __int64 v410; // [rsp+350h] [rbp-BE8h]
  __int64 v411; // [rsp+358h] [rbp-BE0h]
  __int64 v412; // [rsp+360h] [rbp-BD8h]
  __int128 v413; // [rsp+368h] [rbp-BD0h]
  __int128 v414; // [rsp+378h] [rbp-BC0h]
  __int128 v415; // [rsp+388h] [rbp-BB0h]
  __int128 v416; // [rsp+398h] [rbp-BA0h]
  __int128 v417; // [rsp+3A8h] [rbp-B90h]
  __int128 v418; // [rsp+3B8h] [rbp-B80h]
  __int128 v419; // [rsp+3C8h] [rbp-B70h]
  __int128 v420; // [rsp+3D8h] [rbp-B60h]
  unsigned __int64 v421; // [rsp+3E8h] [rbp-B50h]
  _QWORD v422[2]; // [rsp+3F0h] [rbp-B48h] BYREF
  __int128 v423; // [rsp+400h] [rbp-B38h]
  __int64 v424; // [rsp+410h] [rbp-B28h]
  __int64 v425; // [rsp+418h] [rbp-B20h]
  __int64 v426; // [rsp+420h] [rbp-B18h]
  __int128 v427; // [rsp+428h] [rbp-B10h]
  __int128 v428; // [rsp+438h] [rbp-B00h]
  __int128 v429; // [rsp+448h] [rbp-AF0h]
  __int128 v430; // [rsp+458h] [rbp-AE0h]
  __int128 v431; // [rsp+468h] [rbp-AD0h]
  __int128 v432; // [rsp+478h] [rbp-AC0h]
  __int128 v433; // [rsp+488h] [rbp-AB0h]
  __int128 v434; // [rsp+498h] [rbp-AA0h]
  unsigned __int64 v435; // [rsp+4A8h] [rbp-A90h]
  _QWORD v436[2]; // [rsp+4B0h] [rbp-A88h] BYREF
  __int128 v437; // [rsp+4C0h] [rbp-A78h]
  __int64 v438; // [rsp+4D0h] [rbp-A68h]
  __int64 v439; // [rsp+4D8h] [rbp-A60h]
  __int64 v440; // [rsp+4E0h] [rbp-A58h]
  __int128 v441; // [rsp+4E8h] [rbp-A50h]
  __int128 v442; // [rsp+4F8h] [rbp-A40h]
  __int128 v443; // [rsp+508h] [rbp-A30h]
  __int128 v444; // [rsp+518h] [rbp-A20h]
  __int128 v445; // [rsp+528h] [rbp-A10h]
  __int128 v446; // [rsp+538h] [rbp-A00h]
  __int128 v447; // [rsp+548h] [rbp-9F0h]
  __int128 v448; // [rsp+558h] [rbp-9E0h]
  unsigned __int64 v449; // [rsp+568h] [rbp-9D0h]
  __int64 (__fastcall **v450)(); // [rsp+570h] [rbp-9C8h] BYREF
  __int64 v451; // [rsp+578h] [rbp-9C0h]
  __int128 v452; // [rsp+580h] [rbp-9B8h]
  __int64 v453; // [rsp+590h] [rbp-9A8h]
  __int64 v454; // [rsp+598h] [rbp-9A0h]
  __int64 v455; // [rsp+5A0h] [rbp-998h]
  _OWORD v456[6]; // [rsp+5A8h] [rbp-990h] BYREF
  __int128 v457; // [rsp+608h] [rbp-930h] BYREF
  __int128 v458; // [rsp+618h] [rbp-920h] BYREF
  __int64 **v459; // [rsp+628h] [rbp-910h]
  unsigned __int64 v460; // [rsp+630h] [rbp-908h] BYREF
  __int64 v461; // [rsp+638h] [rbp-900h]
  __int128 v462; // [rsp+640h] [rbp-8F8h]
  __int64 v463; // [rsp+650h] [rbp-8E8h]
  __int64 v464; // [rsp+658h] [rbp-8E0h]
  __int64 v465; // [rsp+660h] [rbp-8D8h]
  __m128i v466; // [rsp+668h] [rbp-8D0h] BYREF
  __int128 v467; // [rsp+678h] [rbp-8C0h] BYREF
  __int128 v468; // [rsp+688h] [rbp-8B0h]
  __int128 v469; // [rsp+698h] [rbp-8A0h]
  __int128 v470; // [rsp+6A8h] [rbp-890h]
  __int128 v471; // [rsp+6B8h] [rbp-880h]
  __int128 v472; // [rsp+6C8h] [rbp-870h] BYREF
  __int128 v473; // [rsp+6D8h] [rbp-860h] BYREF
  char **v474; // [rsp+6E8h] [rbp-850h]
  char v475[1024]; // [rsp+6F0h] [rbp-848h] BYREF
  char s1[1024]; // [rsp+AF0h] [rbp-448h] BYREF
  _BYTE v477[8]; // [rsp+EF0h] [rbp-48h] BYREF
  unsigned __int64 v478; // [rsp+EF8h] [rbp-40h]

  v478 = __readfsqword(0x28u);
  ph = get_ph();
  LOBYTE(v353) = a2 | sub_70D0(a1, (__int64)v389, v10, v11, v12);
  if ( v390 == 1129271365 )
  {
    v38 = HIDWORD(v392[2]);
    if ( (v392[2] & 0xF00000800000000LL) != 0 )
    {
      if ( (HIDWORD(v392[2]) & 0xF000000u) > 0x1FFFFFF )
      {
        if ( WORD1(v392[12]) != 4096 )
        {
          if ( (unsigned __int16)(WORD1(v392[12]) - 0x2000) <= 2u )
            goto LABEL_20;
LABEL_273:
          sub_5350((__int64)"The input file is for unknown processor %x");
          if ( *(_DWORD *)(ph + 4) == -1 )
            goto LABEL_348;
LABEL_21:
          netnode_check(&qword_132C8, "$ epoc", 0, 1);
          netnode_supset(qword_132C8, -1, v389, 156, 83);
          if ( (v392[2] & 0xF00000000000000LL) != 0 )
          {
            v250 = getinf(38, -1, v47, v48, v49, v50);
            setinf(38, v250 | 4u);
            v376.m256i_i64[0] = 1;
            netnode_supset(qword_132C8, -1, &v376, 8, 65);
          }
          v51 = (__int64 (__fastcall **)())HIDWORD(v392[6]);
          v52 = (unsigned int)(LODWORD(v392[3]) + HIDWORD(v392[6]));
          sub_5C70((const char *)a1, HIDWORD(v392[6]), v52, HIDWORD(v392[9]), v353, a3, *(double *)a4.m128_u64);
          set_selector(1, 0);
          v53 = (__m128)-1LL;
          v453 = 0;
          v459 = (__int64 **)0xFFFFFFFF00000000LL;
          v455 = 1;
          v450 = v51;
          v451 = v52;
          v454 = 16777729;
          v452 = 0;
          memset(v456, 255, sizeof(v456));
          v457 = -1;
          v458 = -1;
          LOBYTE(v351) = add_segm_ex(&v450, ".text", "CODE", 33);
          if ( !(_BYTE)v351 )
            goto LABEL_348;
          setinf(93, v51);
          if ( LODWORD(v392[10]) )
          {
            v251 = (__int64 (__fastcall **)())LODWORD(v392[7]);
            v252 = (unsigned int)(HIDWORD(v392[3]) + LODWORD(v392[7]));
            sub_5C70((const char *)a1, LODWORD(v392[7]), v252, LODWORD(v392[10]), v353, NAN, *(double *)a4.m128_u64);
            set_selector(2, 0);
            v53 = (__m128)-1LL;
            a5 = 0;
            v463 = 0;
            v474 = (char **)0xFFFFFFFF00000000LL;
            v465 = 2;
            v460 = (unsigned __int64)v251;
            v461 = v252;
            v464 = 16777729;
            v462 = 0;
            v466 = (__m128i)-1LL;
            v467 = -1;
            v468 = -1;
            v469 = -1;
            v470 = -1;
            v471 = -1;
            v472 = -1;
            v473 = -1;
            if ( !(unsigned __int8)add_segm_ex(&v460, ".data", "DATA", 33) )
              goto LABEL_348;
          }
          *(double *)v53.m128_u64 = create_filename_cmt();
          sub_5070(
            (__int64)"Version     : %d.%d.%d",
            (unsigned int)SLOBYTE(v392[1]),
            (unsigned int)SBYTE1(v392[1]),
            (unsigned int)SWORD1(v392[1]),
            v54,
            v55,
            v53,
            a4,
            a5,
            a6,
            v56,
            v57,
            a9,
            a10,
            v324);
          v58 = sub_40F0(LOWORD(v392[12]), (__int64)v475);
          sub_5070(
            (__int64)"Priority    : %d (%s)",
            LOWORD(v392[12]),
            (__int64)v58,
            v59,
            v60,
            v61,
            v53,
            a4,
            a5,
            a6,
            v62,
            v63,
            a9,
            a10,
            v326);
          if ( LODWORD(v392[8]) )
          {
            v70 = LODWORD(v392[8]);
            v71 = HIDWORD(v392[8]);
            a1[3] = LODWORD(v392[8]);
            v72 = a1[1];
            v376.m256i_i32[0] = v71;
            if ( !(unsigned __int8)sub_A300(0, v376.m256i_i32, 4u, v70, v72) )
              sub_58B0(
                (__int64)"%s is incorrect, maximum possible value is %u%s",
                "Number of exports",
                v376.m256i_i32[0],
                "");
            if ( (HIDWORD(v392[2]) & 0xF000000u) > 0x1FFFFFF )
              v73 = 0;
            else
              v73 = HIDWORD(v392[6]);
            sub_5750(ph, a1, v73, HIDWORD(v392[8]), (v392[2] & 0x200000000LL) == 0);
          }
          v74 = HIDWORD(v392[10]);
          if ( !HIDWORD(v392[10]) )
            goto LABEL_152;
          v75 = SHIDWORD(v392[10]);
          v76 = v392[9];
          v331 = HIDWORD(v392[6]);
          a1[3] = SHIDWORD(v392[10]);
          if ( (unsigned __int64)v74 > 0xFFFFFFFFFFFFFFFBLL )
          {
            v268 = "6";
            if ( (v392[2] & 0xF00000000000000LL) != 0 )
              v268 = "9";
            sub_5070(
              (__int64)"EPOC Version: %s",
              (__int64)v268,
              v64,
              v65,
              v66,
              v67,
              v53,
              a4,
              a5,
              a6,
              v68,
              v69,
              a9,
              a10,
              v327);
            a1[3] = v74;
            goto LABEL_152;
          }
          v77 = v74 + 4LL;
          if ( a1[1] < v77 || (v78 = *(_DWORD *)(*a1 + v74), a1[3] = v77, v78 <= 0) || (v79 = 0, SHIDWORD(v392[7]) <= 0) )
          {
LABEL_89:
            if ( (v392[2] & 0xF00000000000000LL) == 0 )
            {
LABEL_290:
              v81 = "6";
              goto LABEL_91;
            }
          }
          else
          {
            n[0] = v74 + 4LL;
            while ( 1 )
            {
              if ( sub_78F0(a1, v376.m256i_i8, 8) != 8 )
              {
                v75 = v74;
                v77 = n[0];
                v80 = (char)v351;
                goto LABEL_40;
              }
              sub_7B60(a1, v74 + v376.m256i_i32[0], s1, 1024, v66);
              if ( !strcasecmp(s1, "euser[100000C1].dll") )
                break;
              if ( ++v79 >= SHIDWORD(v392[7]) )
              {
                v75 = v74;
                v77 = n[0];
                goto LABEL_89;
              }
            }
            v75 = v74;
            v80 = 0;
            v77 = n[0];
LABEL_40:
            if ( (v392[2] & 0xF00000000000000LL) == 0 )
            {
              if ( v80 )
                goto LABEL_290;
              LOBYTE(v351) = 0;
              v81 = "1-5";
LABEL_91:
              s2a = (char *)v77;
              sub_5070(
                (__int64)"EPOC Version: %s",
                (__int64)v81,
                v64,
                v77,
                v66,
                v67,
                v53,
                a4,
                a5,
                a6,
                v68,
                v69,
                a9,
                a10,
                v327);
              a1[3] = v75;
              v341 = a1[1];
              if ( v341 < (unsigned __int64)s2a || (v118 = *(_DWORD *)(*a1 + v75), a1[3] = (__int64)s2a, v118 <= 0) )
              {
LABEL_152:
                if ( LODWORD(v392[11]) )
                  sub_79D0(a1, v392[11], 1, SHIDWORD(v392[6]));
                if ( LODWORD(v392[10]) && HIDWORD(v392[11]) )
                  sub_79D0(a1, SHIDWORD(v392[11]), 2, v392[7]);
                v158 = HIDWORD(v392[6]);
                v329 = (unsigned int)(LODWORD(v392[3]) + HIDWORD(v392[6]));
                while ( 1 )
                {
                  memset(&v376, 0, 24);
                  v376.m256i_i64[0] = qvector_reserve(&v376, 0, 1, 80);
                  v159 = v376.m256i_i64[0] + 80 * v376.m256i_i64[1];
                  *(_OWORD *)(v159 + 8) = 0;
                  *(_QWORD *)v159 = 0;
                  *(_QWORD *)(v159 + 24) = 0;
                  *(_QWORD *)(v159 + 48) = 0;
                  *(_DWORD *)(v159 + 72) = -1;
                  *(_OWORD *)(v159 + 32) = 0;
                  *(_OWORD *)(v159 + 56) = 0;
                  ++v376.m256i_i64[1];
                  v160 = *(_QWORD *)(v159 + 8);
                  v161 = v160 + 12;
                  if ( v160 >= 0xFFFFFFFFFFFFFFF4LL )
                  {
                    v161 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                  else
                  {
                    v162 = qvector_reserve(v159, *(_QWORD *)v159, v160 + 12, 1);
                    v163 = *(_QWORD *)(v159 + 8);
                    *(_QWORD *)v159 = v162;
                    memset((void *)(v162 + v163), 0, v160 + 12 - v163);
                  }
                  v164 = *(_QWORD *)v159;
                  *(_QWORD *)(v159 + 8) = v161;
                  *(_QWORD *)(v164 + v160) = -450891772;
                  *(_DWORD *)(v164 + v160 + 8) = -450891772;
                  v165 = *(_QWORD *)(v159 + 32);
                  v166 = v165 + 12;
                  v167 = v165 + 12;
                  if ( v165 >= 0xFFFFFFFFFFFFFFF4LL )
                  {
                    v171 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                  else
                  {
                    v168 = *(_QWORD *)(v159 + 24);
                    v169 = *(_QWORD *)(v159 + 32);
                    v170 = 12;
                    if ( *(_QWORD *)(v159 + 40) < v166 )
                    {
                      v247 = qvector_reserve(v159 + 24, v168, v166, 1);
                      *(_QWORD *)(v159 + 24) = v247;
                      v168 = v247;
                      v169 = *(_QWORD *)(v159 + 32);
                      v167 = v165 + 12;
                      v170 = v166 - v169;
                    }
                    v334 = v167;
                    memset((void *)(v168 + v169), 0, v170);
                    v171 = v334;
                  }
                  v172 = *(_QWORD *)(v159 + 24);
                  *(_QWORD *)(v159 + 32) = v171;
                  *(_QWORD *)(v172 + v165) = 0xFFFFFFFFLL;
                  *(_DWORD *)(v172 + v165 + 8) = -1;
                  v173 = bin_search(v158, v329, &v376, 3, 0);
                  v174 = v376.m256i_i64[0];
                  v175 = v173;
                  if ( v376.m256i_i64[0] )
                  {
                    v176 = v376.m256i_i64[1];
                    if ( v376.m256i_i64[1] )
                    {
                      v177 = 0;
                      do
                      {
                        v178 = (__int64 *)(v174 + 80 * v177);
                        v179 = v178[6];
                        if ( v179 )
                        {
                          v178[7] = 0;
                          qfree(v179);
                        }
                        v180 = v178[3];
                        if ( v180 )
                        {
                          v178[4] = 0;
                          qfree(v180);
                        }
                        v181 = *v178;
                        if ( *v178 )
                        {
                          v178[1] = 0;
                          qfree(v181);
                        }
                        ++v177;
                        v174 = v376.m256i_i64[0];
                      }
                      while ( v176 != v177 );
                    }
                    v376.m256i_i64[1] = 0;
                    qfree(v174);
                  }
                  if ( v175 == -1 )
                    break;
                  if ( (v175 & 3) == 0 )
                  {
                    while ( (unsigned int)get_dword(v175) == -450891772 )
                    {
                      create_insn(v175, 0);
                      auto_mark_range(v175, v175 + 1, 20);
                      auto_mark_range(v175, v175 + 1, 30);
                      v175 += 8;
                    }
                    break;
                  }
                  v158 = v175 + 1;
                }
                v246 = HIDWORD(v392[6]) + LODWORD(v392[6]);
                setinf(14, 1);
                setinf(15, v246 & 0xFFFFFFFE);
                if ( (*(_BYTE *)(ph + 12) & 8) != 0 )
                  sub_5690(0x57u, v246, v246 & 1);
                return v478 - __readfsqword(0x28u);
              }
              v376.m256i_i32[2] = 0;
              v352 = (__m256i *)&v376.m256i_u64[1];
              v376.m256i_i64[3] = (__int64)&v376.m256i_i64[1];
              v377 = &v376.m256i_i64[1];
              v376.m256i_i64[2] = 0;
              v378 = 0;
              v353 = (HIDWORD(v392[2]) << 24) & 0x10000000;
              if ( (v392[2] & 0xF00000000000000LL) != 0 )
                v353 = HIDWORD(v392[2]) & 0xF0000000;
              LODWORD(v368) = HIDWORD(v392[7]);
              v358 = &v368;
              if ( !(unsigned __int8)sub_A300(0, (int *)&v368, 8u, (__int64)s2a, v341) )
                sub_58B0((__int64)"%s is incorrect, maximum possible value is %u%s", "Number of DLLs", v368, "");
              v356 = v76 + v331;
              if ( SHIDWORD(v392[7]) <= 0 )
              {
                v119 = v356;
                goto LABEL_134;
              }
              v119 = (unsigned int)(v76 + v331);
              v355 = 0;
              v359 = (char *)&v370;
LABEL_98:
              if ( sub_78F0(a1, v359, 8) != 8 )
                goto LABEL_134;
              v121 = s1;
              v357 = a1[3];
              sub_7B60(a1, v74 + (int)v370, s1, 1024, v120);
              LODWORD(v366) = 0;
              v122 = strchr(s1, 91);
              if ( v122 )
                qsscanf(v122 + 1, "%x", &v366);
              v332 = strrchr(s1, 123);
              if ( !v332 )
              {
                v332 = strrchr(s1, 91);
                if ( !v332 )
                {
                  v332 = strrchr(s1, 46);
                  if ( !v332 )
                    v332 = &s1[strlen(s1)];
                }
              }
              v123 = (unsigned int)v119;
              sub_4FB0((unsigned int)v119, 1u, (__int64)"\nImports from %s\n", s1);
              v124 = v358;
              v368 = -1;
              *v332 = 0;
              netnode_check(v124, 0, 0, 1);
              v372 = nullptr;
              v125 = v366;
              v373 = 0;
              v126 = strlen(s1);
              v127 = v126 + 1;
              v128 = v126;
              v129 = (char *)qvector_reserve(&v372, 0, v126 + 1, 1);
              v373.m128i_i64[0] = v127;
              v372 = v129;
              memmove(v129, s1, v128);
              v130 = v352;
              v372[v128] = 0;
              LODWORD(v375) = v125;
              v374 = (char *)v368;
              if ( !v376.m256i_i64[2] )
                goto LABEL_277;
              v131 = v373.m128i_i64[0];
              n[0] = v123;
              v132 = (char *)::s1;
              v354 = s1;
              v133 = v125;
              v130 = v352;
              v134 = v376.m256i_i64[2];
              v135 = v372;
              if ( v373.m128i_i64[0] )
                v132 = v372;
              s2b = v132;
              while ( 1 )
              {
                while ( 1 )
                {
                  v139 = *(_DWORD *)(v134 + 64);
                  if ( v139 < v133 )
                    goto LABEL_113;
                  if ( v133 >= v139 )
                    break;
LABEL_111:
                  v130 = (__m256i *)v134;
                  v134 = *(_QWORD *)(v134 + 16);
                  if ( !v134 )
                    goto LABEL_114;
                }
                v136 = *(_QWORD *)(v134 + 40);
                if ( v131 )
                {
                  v137 = v135;
                  v138 = ::s1;
                  if ( !v136 )
                    goto LABEL_110;
                }
                else if ( !v136 )
                {
                  goto LABEL_111;
                }
                v138 = *(const char **)(v134 + 32);
                v137 = s2b;
LABEL_110:
                if ( strcmp(v138, v137) >= 0 )
                  goto LABEL_111;
LABEL_113:
                v134 = *(_QWORD *)(v134 + 24);
                if ( !v134 )
                {
LABEL_114:
                  v140 = v133;
                  v141 = v135;
                  v123 = n[0];
                  v121 = v354;
                  if ( v130 == v352 )
                    goto LABEL_277;
                  v142 = v130[2].m256i_u32[0];
                  if ( v140 < v142 )
                    goto LABEL_277;
                  if ( v142 < v140 )
                    goto LABEL_121;
                  if ( v130[1].m256i_i64[1] )
                  {
                    v143 = (const char *)v130[1].m256i_i64[0];
                    v144 = ::s1;
                    if ( v131 )
                      goto LABEL_119;
LABEL_120:
                    s2e = v141;
                    v145 = strcmp(v144, v143);
                    v141 = s2e;
                    if ( v145 >= 0 )
                      goto LABEL_121;
LABEL_277:
                    v253 = (__int64)v130;
                    v254 = operator new(0x98u);
                    v255 = v372;
                    v130 = (__m256i *)v254;
                    v256 = _mm_loadu_si128(&v373);
                    v257 = v375;
                    v258 = v254 + 32;
                    si128 = _mm_load_si128((const __m128i *)&xmmword_FDA0);
                    *(_QWORD *)(v254 + 32) = v372;
                    *(__m128i *)(v254 + 40) = v256;
                    v260 = v374;
                    v130[2].m256i_i32[0] = v257;
                    v130[1].m256i_i64[3] = (__int64)v260;
                    v130[3].m256i_i64[3] = (__int64)&v130[3].m256i_i64[1];
                    v130[4].m256i_i64[0] = (__int64)&v130[3].m256i_i64[1];
                    v373 = 0;
                    *(_OWORD *)&v130[2].m256i_u64[1] = 0;
                    *(_OWORD *)&v130[2].m256i_u64[3] = 0;
                    *(_OWORD *)&v130[3].m256i_u64[1] = 0;
                    *(__m128i *)&v130[4].m256i_u64[1] = si128;
                    v354 = v255;
                    v372 = nullptr;
                    s2d = v257;
                    *(__m128i *)n = v256;
                    v261 = sub_AB70(&v376, v253, v258);
                    v263 = v354;
                    v264 = (__m256i *)v261;
                    v265 = v262;
                    if ( v262 )
                    {
                      if ( v261 || (v266 = _mm_load_si128((const __m128i *)n).m128i_u64[0], v352 == (__m256i *)v262) )
                      {
                        v267 = 1;
                      }
                      else
                      {
                        v320 = *(_DWORD *)(v262 + 64);
                        v267 = 1;
                        if ( s2d >= v320 )
                        {
                          v267 = 0;
                          if ( v320 >= s2d )
                          {
                            v321 = ::s1;
                            if ( *(_QWORD *)(v262 + 40) )
                              v321 = *(const char **)(v262 + 32);
                            if ( !v266 )
                              v263 = ::s1;
                            v267 = (unsigned int)strcmp(v263, v321) >> 31;
                          }
                        }
                      }
                      std::_Rb_tree_insert_and_rebalance(v267, v130, v265, v352);
                      v141 = v372;
                      ++v378;
                      goto LABEL_121;
                    }
                    if ( v130 )
                    {
                      if ( v354 )
                      {
                        v130[1].m256i_i64[1] = 0;
                        qfree(v263);
                      }
                      v269 = v130;
                      v130 = v264;
                      operator delete(v269, 0x98u);
                      v141 = v372;
                      goto LABEL_121;
                    }
                    v130 = (__m256i *)v261;
                    s2c = (unsigned __int64 *)(v261 + 72);
                  }
                  else
                  {
                    v143 = ::s1;
                    if ( v131 )
                    {
LABEL_119:
                      v144 = v141;
                      goto LABEL_120;
                    }
LABEL_121:
                    s2c = &v130[2].m256i_u64[1];
                    if ( v141 )
                    {
                      v373.m128i_i64[0] = 0;
                      qfree(v141);
                    }
                  }
                  v130[4].m256i_i64[2] = v123;
                  sub_8950(0, (int *)&v370 + 1, 4u, (__int64)"Number of imports", a1[3], v341);
                  if ( v353 == 0x10000000 )
                  {
                    for ( i = 0; i < SHIDWORD(v370); ++i )
                    {
                      v271 = 0;
                      v272 = a1[3];
                      v273 = a1[1];
                      if ( v272 <= 0xFFFFFFFFFFFFFFFBLL && v273 >= v272 + 4 )
                      {
                        v271 = *(_DWORD *)(*a1 + v272);
                        a1[3] = v272 + 4;
                      }
                      v274 = (unsigned int)(HIDWORD(v392[9]) + v271);
                      if ( v273 < v274 + 4 )
                        sub_58B0((__int64)"Wrong imports");
                      LODWORD(v354) = HIDWORD(v392[6]) + v271;
                      v275 = *(_DWORD *)(*a1 + v274);
                      v276 = (unsigned __int16)v275;
                      LODWORD(n[0]) = HIWORD(v275);
                      qsnprintf(v332, v477 - v332, "_%d", (unsigned __int16)v275);
                      sub_A520(s2c, v368, v276, v121, n[0], (unsigned int)v354);
                    }
                  }
                  else
                  {
                    if ( SHIDWORD(v370) > 0 )
                    {
                      v146 = 0;
                      v147 = a1[3];
                      n[0] = v477 - v332;
                      do
                      {
                        v148 = 0;
                        if ( v147 <= 0xFFFFFFFFFFFFFFFBLL && a1[1] >= v147 + 4 )
                        {
                          v148 = *(_DWORD *)(*a1 + v147);
                          a1[3] = v147 + 4;
                        }
                        qsnprintf(v332, n[0], "_%u", v148);
                        sub_A520(s2c, v368, v148, v121, 0, -1);
                        v147 = a1[3];
                        if ( v147 >= v341 )
                          break;
                        ++v146;
                      }
                      while ( v146 < SHIDWORD(v370) );
                    }
                    if ( v353 == 0x20000000 )
                    {
                      sub_51D0((__int64)"pe2 imports");
                      a1[3] = v357;
                    }
                  }
                  ++v355;
                  v119 = v130[4].m256i_u32[4];
                  if ( v355 >= SHIDWORD(v392[7]) )
                  {
LABEL_134:
                    if ( (word_132D0 & 0x20) != 0 )
                    {
                      set_selector(3, 0);
                      v474 = (char **)0xFFFFFFFF00000000LL;
                      v462 = 0;
                      v460 = v356;
                      v463 = 0;
                      v465 = 3;
                      v461 = v119;
                      v464 = 16777729;
                      v466 = (__m128i)-1LL;
                      v467 = -1;
                      v468 = -1;
                      v469 = -1;
                      v470 = -1;
                      v471 = -1;
                      v472 = -1;
                      v473 = -1;
                      if ( !(unsigned __int8)add_segm_ex(&v460, ".idata", "XTRN", 33) )
                        sub_58B0(0);
                      if ( (unsigned __int8)is_mapped(v119) )
                      {
                        v322 = getseg(v119);
                        v323 = v322;
                        if ( v322 )
                        {
                          *(_BYTE *)(v322 + 184) = 3;
                          set_segm_class(v322, "DATA", 0);
                          set_segm_name(v323, ".rdata", 0);
                        }
                      }
                      v333 = "epoc9";
                      if ( v353 != 0x10000000 )
                      {
                        v149 = "epoc6";
                        if ( !(_BYTE)v351 )
                          v149 = "epoc";
                        v333 = v149;
                      }
                      for ( j = v376.m256i_i64[3]; (__m256i *)j != v352; j = std::_Rb_tree_increment(j) )
                      {
                        v151 = *(unsigned int **)(j + 72);
                        v152 = 12LL * *(_QWORD *)(j + 80);
                        for ( k = &v151[v152]; k != v151; v151 += 12 )
                        {
                          v154 = *v151;
                          v155 = ::s1;
                          if ( *((_QWORD *)v151 + 3) )
                            v155 = *((const char **)v151 + 2);
                          set_name(*v151, v155, 7424);
                          v156 = *((_QWORD *)v151 + 1);
                          if ( v156 != -1 )
                          {
                            put_dword(*((_QWORD *)v151 + 1), v154 + (int)v151[11]);
                            create_data(v156, 0x20000000, 4, -1);
                            op_offset(v156, 0, 2, -1, 0, (int)v151[11]);
                            v372 = (_BYTE *)(&dword_0 + 1);
                            netnode_supset(qword_132C8, v156, &v372, 8, 65);
                          }
                          create_data(v154, 0x20000000, 4, -1);
                        }
                        v157 = ::s1;
                        if ( *(_QWORD *)(j + 40) )
                          v157 = *(const char **)(j + 32);
                        import_module(v157, 0, *(_QWORD *)(j + 56), 0, v333);
                      }
                    }
                    sub_4810((void *)v376.m256i_i64[2]);
                    goto LABEL_152;
                  }
                  goto LABEL_98;
                }
              }
            }
            LOBYTE(v351) = v80;
          }
          v81 = "9";
          goto LABEL_91;
        }
LABEL_270:
        a3 = set_processor_type("metapc", 1);
        goto LABEL_21;
      }
    }
    else
    {
      v39 = v392[12];
      v40 = v392[1];
      v41 = *(_QWORD *)((char *)&v392[1] + 4);
      v390 = 1129271365;
      a5 = (__m128)_mm_load_si128((const __m128i *)&v392[3]);
      v42 = v392[7];
      v43 = v392[8];
      v44 = v392[9];
      v45 = v392[10];
      v46 = v392[11];
      a4 = (__m128)_mm_loadl_epi64((const __m128i *)&v392[5]);
      a3 = *(double *)&v392[6];
      memset(v392, 0, sizeof(v392));
      LODWORD(v392[1]) = v40;
      *(_QWORD *)((char *)&v392[1] + 4) = v41;
      HIDWORD(v392[2]) = v38;
      v392[7] = v42;
      v392[8] = v43;
      v392[9] = v44;
      v393 = 0;
      v392[10] = v45;
      v392[11] = v46;
      LOWORD(v392[12]) = v39;
      WORD1(v392[12]) = v391;
      *(__m128 *)&v392[3] = a5;
      v392[5] = a4.m128_u64[0];
      *(double *)&v392[6] = a3;
    }
    if ( v391 != 4096 )
    {
      if ( (unsigned int)(v391 - 0x2000) <= 2 )
      {
LABEL_20:
        a3 = set_processor_type("arm:ARMv6", 1);
        goto LABEL_21;
      }
      goto LABEL_273;
    }
    goto LABEL_270;
  }
  if ( (unsigned __int64)a1[1] <= 0x77 )
    sub_5BD0(a1, v389, v13);
  v14 = *a1;
  v15 = *(_DWORD *)*a1;
  v330 = *a1;
  if ( (unsigned int)(v15 - 268435577) <= 1 )
  {
    if ( (*(_DWORD *)(v14 + 88) & 0xE0) == 0x20 )
    {
      v16 = set_processor_type("arm:ARMv6", 1);
      v17 = v14;
      v18 = *(unsigned int *)(v14 + 20);
      v19 = (unsigned int)(*(_DWORD *)(v17 + 32) + v18);
      sub_5C70((const char *)a1, v18, v19, 0x78u, 0, v16, *(double *)a4.m128_u64);
      set_selector(1, 0);
      v20 = (__m128)-1LL;
      v394[0] = v18;
      v21 = 0;
      v396 = 0;
      v407 = 0xFFFFFFFF00000000LL;
      v398 = 1;
      v394[1] = v19;
      v397 = 16777729;
      v395 = 0;
      v399 = -1;
      v400 = -1;
      v401 = -1;
      v402 = -1;
      v403 = -1;
      v404 = -1;
      v405 = -1;
      v406 = -1;
      if ( !(unsigned __int8)add_segm_ex(v394, ".text", "CODE", 33) )
        goto LABEL_348;
      v22 = *(_DWORD *)(v330 + 36);
      if ( v22 )
      {
        v314 = *(unsigned int *)(v330 + 24);
        v315 = (unsigned int)(v22 + v314);
        sub_5C70(
          (const char *)a1,
          v314,
          v315,
          *(_DWORD *)(v330 + 24) - *(_DWORD *)(v330 + 20) + 120LL,
          0,
          NAN,
          *(double *)a4.m128_u64);
        set_selector(2, 0);
        v20 = (__m128)-1LL;
        v21 = 0;
        v410 = 0;
        v421 = 0xFFFFFFFF00000000LL;
        v412 = 2;
        v408[0] = v314;
        v408[1] = v315;
        v411 = 16777729;
        v409 = 0;
        v413 = -1;
        v414 = -1;
        v415 = -1;
        v416 = -1;
        v417 = -1;
        v418 = -1;
        v419 = -1;
        v420 = -1;
        if ( !(unsigned __int8)add_segm_ex(v408, ".data", "DATA", 33) )
          goto LABEL_348;
      }
      v23 = *(_DWORD *)(v330 + 64);
      if ( v23 )
      {
        v312 = a1[1];
        v313 = v23 + 120 - *(_DWORD *)(v330 + 20);
        a1[3] = v313;
        v376.m256i_i32[0] = *(_DWORD *)(v330 + 60);
        sub_8950(0, v376.m256i_i32, 4u, (__int64)"Number of exports", v313, v312);
        sub_5750(ph, a1, 0, v376.m256i_u32[0], (*(_BYTE *)(v330 + 88) & 2) == 0);
      }
      *(double *)v20.m128_u64 = create_filename_cmt();
      v24 = v330;
      sub_5070(
        (__int64)"Version     : %d.%d.%d",
        (unsigned int)*(char *)(v330 + 84),
        (unsigned int)*(char *)(v330 + 85),
        (unsigned int)*(__int16 *)(v330 + 86),
        v25,
        v26,
        v20,
        a4,
        a5,
        a6,
        v27,
        v28,
        a9,
        v21,
        v324);
      v29 = sub_40F0(*(_DWORD *)(v330 + 92), (__int64)s1);
      v35 = *(unsigned int *)(v330 + 92);
      v36 = (__int64)v29;
LABEL_14:
      sub_5070((__int64)"Priority    : %d (%s)", v35, v36, v30, v31, v32, v20, a4, a5, a6, v33, v34, a9, v21, v325);
      if ( *(_DWORD *)(v24 + 16) )
      {
        setinf(14, 1);
        setinf(15, *(_DWORD *)(v330 + 16) & 0xFFFFFFFE);
        if ( (*(_BYTE *)(ph + 12) & 8) != 0 )
          sub_5690(0x57u, *(unsigned int *)(v330 + 16), *(_DWORD *)(v330 + 16) & 1);
      }
      return v478 - __readfsqword(0x28u);
    }
    v108 = set_processor_type("arm:ARMv6", 1);
    v109 = *(unsigned int *)(v330 + 20);
    v110 = (unsigned int)(*(_DWORD *)(v330 + 32) + *(_DWORD *)(v330 + 20));
    sub_5C70((const char *)a1, v109, v110, 0x64u, 0, v108, *(double *)a4.m128_u64);
    set_selector(1, 0);
    v20 = (__m128)-1LL;
    v422[0] = v109;
    v21 = 0;
    v424 = 0;
    v435 = 0xFFFFFFFF00000000LL;
    v426 = 1;
    v422[1] = v110;
    v425 = 16777729;
    v423 = 0;
    v427 = -1;
    v428 = -1;
    v429 = -1;
    v430 = -1;
    v431 = -1;
    v432 = -1;
    v433 = -1;
    v434 = -1;
    if ( (unsigned __int8)add_segm_ex(v422, ".text", "CODE", 33) )
    {
      v111 = *(_DWORD *)(v330 + 36);
      if ( !v111
        || (v318 = *(unsigned int *)(v330 + 24),
            v319 = (unsigned int)(v111 + v318),
            sub_5C70(
              (const char *)a1,
              v318,
              v319,
              *(_DWORD *)(v330 + 24) - *(_DWORD *)(v330 + 20) + 100LL,
              0,
              NAN,
              *(double *)a4.m128_u64),
            set_selector(2, 0),
            v20 = (__m128)-1LL,
            a5 = 0,
            v438 = 0,
            v449 = 0xFFFFFFFF00000000LL,
            v440 = 2,
            v436[0] = v318,
            v436[1] = v319,
            v439 = 16777729,
            v437 = 0,
            v441 = -1,
            v442 = -1,
            v443 = -1,
            v444 = -1,
            v445 = -1,
            v446 = -1,
            v447 = -1,
            v448 = -1,
            (unsigned __int8)add_segm_ex(v436, ".data", "DATA", 33)) )
      {
        v112 = *(_DWORD *)(v330 + 64);
        if ( v112 )
        {
          v316 = a1[1];
          v317 = v112 + 100 - *(_DWORD *)(v330 + 20);
          a1[3] = v317;
          v376.m256i_i32[0] = *(_DWORD *)(v330 + 60);
          sub_8950(0, v376.m256i_i32, 4u, (__int64)"Number of exports", v317, v316);
          sub_5750(ph, a1, 0, v376.m256i_u32[0], (*(_BYTE *)(v330 + 80) & 2) == 0);
        }
        *(double *)v20.m128_u64 = create_filename_cmt();
        v24 = v330;
        sub_5070(
          (__int64)"Version     : %d.%d.%d",
          (unsigned int)*(char *)(v330 + 76),
          (unsigned int)*(char *)(v330 + 77),
          (unsigned int)*(__int16 *)(v330 + 78),
          v113,
          v114,
          v20,
          a4,
          a5,
          a6,
          v115,
          v116,
          a9,
          (__m128)0LL,
          v324);
        v117 = sub_40F0(*(_DWORD *)(v330 + 84), (__int64)s1);
        v35 = *(unsigned int *)(v330 + 84);
        v36 = (__int64)v117;
        goto LABEL_14;
      }
    }
LABEL_348:
    sub_58B0(0);
  }
  if ( v15 != 270539386 )
  {
    v372 = nullptr;
    v374 = nullptr;
    v373 = 0;
    v375 = 0;
LABEL_6:
    if ( !*(_WORD *)(v330 + 18) )
      goto LABEL_7;
    a1[3] = *(unsigned int *)(v330 + 48);
    v82 = *(unsigned __int16 *)(v330 + 18);
    if ( 2 * v82 < v82 )
      sub_58B0((__int64)"Corrupted file");
    if ( *(_WORD *)(v330 + 18) )
    {
      v374 = (char *)qvector_reserve(&v374, 0, *(unsigned __int16 *)(v330 + 18), 2);
      memset(&v374[2 * v375], 0, 2 * (v82 - v375));
      *(_QWORD *)&v375 = v82;
      v83 = v374;
    }
    else
    {
      v83 = nullptr;
    }
    sub_78F0(a1, v83, 2 * v82);
    v85 = (__m256i *)*(unsigned int *)(v330 + 52);
    a1[3] = (__int64)v85;
    if ( *(_WORD *)(v330 + 20) )
    {
      s2 = 0;
      v351 = (__m256i *)&v360;
      v352 = &v376;
      while ( 1 )
      {
        v85 = v351;
        if ( sub_78F0(a1, v351->m256i_i8, 4) != 4 )
          goto LABEL_205;
        if ( v360 != 2 )
          break;
        v85 = v352;
        v242 = (__int64)a1;
        sub_78F0(a1, v352->m256i_i8, 4);
        v244 = 8 * v376.m256i_i32[0] * (unsigned int)*(unsigned __int16 *)(v330 + 18) + 16;
        v202 = __CFADD__(a1[3], v244);
        v245 = a1[3] + v244;
        if ( v202 )
          goto LABEL_381;
        a1[3] = v245;
LABEL_204:
        if ( ++s2 >= *(unsigned __int16 *)(v330 + 20) )
          goto LABEL_205;
      }
      if ( v360 > 2 )
      {
        if ( v360 - 3 <= 1 )
        {
          v85 = v352;
          sub_78F0(a1, v352->m256i_i8, 4);
          if ( __CFADD__(a1[3], v376.m256i_u32[0]) )
            sub_5BD0(a1, v352, v203);
          a1[3] += v376.m256i_u32[0];
        }
        goto LABEL_204;
      }
      sub_78F0(a1, (char *)&v361, 24);
      s1[0] = 0;
      if ( v362 )
        sub_4E60(a1, s1, v363, v362, *(_BYTE *)(v330 + 36) & 1);
      if ( v364 )
        sub_4E60(a1, s1, v365, v364, *(_BYTE *)(v330 + 36) & 1);
      v86 = 1;
      v87 = 1;
      if ( v360 == 1 )
      {
        v87 = *(unsigned __int16 *)(v330 + 18);
        v86 = *(unsigned __int16 *)(v330 + 18);
      }
      v366 = 0;
      v367 = 0;
      v368 = 0;
      v370 = 0;
      v369 = 0;
      v371 = 0;
      sub_8880(a1, (__int64)&v366, v86);
      v85 = (__m256i *)&v368;
      v88 = (char *)a1;
      sub_8880(a1, (__int64)&v368, v86);
      if ( *(_DWORD *)(v330 + 32) == 200 )
      {
        v85 = (__m256i *)&v370;
        v88 = (char *)a1;
        sub_8880(a1, (__int64)&v370, v86);
        v337 = a1[3];
        if ( v337 >= 0xFFFFFFFFFFFFFFF8LL )
          sub_5BD0(a1, &v370, v89);
        a1[3] = v337 + 8;
      }
      v90 = 0;
      v336 = 2LL * v87;
      if ( !v87 )
      {
LABEL_250:
        if ( v370 )
        {
          *(_QWORD *)&v371 = 0;
          qfree(v370);
        }
        if ( v368 )
        {
          *(_QWORD *)&v369 = 0;
          qfree(v368);
        }
        if ( v366 )
        {
          *(_QWORD *)&v367 = 0;
          qfree(v366);
        }
        goto LABEL_204;
      }
      while ( !*(_DWORD *)(v366 + 2 * v90) )
      {
LABEL_66:
        v90 += 2;
        if ( v90 == v336 )
          goto LABEL_250;
      }
      if ( (unsigned __int64)*(int *)(v368 + 2 * v90) <= 0x43 )
        sub_5BD0(v88, v85, v89);
      v98 = v373.m128i_i64[1];
      v97 = v373.m128i_i64[0];
      v99 = v373.m128i_i64[0] + 1;
      if ( v373.m128i_i64[1] < (unsigned __int64)(v373.m128i_i64[0] + 1) )
      {
        v85 = nullptr;
        v100 = (char *)qvector_reserve(&v372, 0, v99, 72);
        v191 = v373.m128i_i64[1];
        v373.m128i_i64[1] = v98;
        v192 = v372;
        v343 = v191;
        v193 = v373.m128i_i64[0] - 1;
        if ( v373.m128i_i64[0] - 1 >= 0 )
        {
          v194 = v100;
          do
          {
            v195 = *(_QWORD *)v192;
            v196 = _mm_loadu_si128((const __m128i *)(v192 + 8));
            a6 = 0;
            *(_QWORD *)v192 = 0;
            *(_OWORD *)(v192 + 8) = 0;
            *(_QWORD *)v194 = v195;
            *(__m128i *)(v194 + 8) = v196;
            v197 = *((_QWORD *)v192 + 3);
            v198 = _mm_loadu_si128((const __m128i *)v192 + 2);
            *((_QWORD *)v192 + 3) = 0;
            *((_QWORD *)v194 + 3) = v197;
            *((__m128i *)v194 + 2) = v198;
            v199 = *((_QWORD *)v192 + 6);
            *((_QWORD *)v192 + 5) = 0;
            *((_QWORD *)v194 + 6) = v199;
            *((_QWORD *)v194 + 7) = *((_QWORD *)v192 + 7);
            *((_QWORD *)v194 + 8) = *((_QWORD *)v192 + 8);
            v200 = *((_QWORD *)v192 + 3);
            if ( v200 )
            {
              *((_QWORD *)v192 + 4) = 0;
              qfree(v200);
            }
            v201 = *(_QWORD *)v192;
            if ( *(_QWORD *)v192 )
            {
              *((_QWORD *)v192 + 1) = 0;
              qfree(v201);
            }
            v192 += 72;
            v194 += 72;
            v202 = v193-- == 0;
          }
          while ( !v202 );
          v192 = v372;
        }
        v88 = v192;
        qfree(v192);
        v372 = v100;
        v373.m128i_i64[1] = v343;
        v97 = v373.m128i_i64[0];
      }
      else
      {
        v100 = v372;
      }
      v101 = &v100[72 * v97];
      *(_QWORD *)v101 = 0;
      *((_QWORD *)v101 + 3) = 0;
      *((_QWORD *)v101 + 6) = 0;
      *(_OWORD *)(v101 + 8) = 0;
      *((_OWORD *)v101 + 2) = 0;
      ++v373.m128i_i64[0];
      if ( *(_DWORD *)(v330 + 32) != 200 || (*(_BYTE *)(v330 + 36) & 8) != 0 )
      {
        v102 = *(int *)(v366 + 2 * v90);
        v103 = *(int *)(v368 + 2 * v90);
        if ( __CFADD__(v103, v102) || (v85 = (__m256i *)a1, a1[1] < v103 + v102) )
          sub_5BD0(v88, v85, v99);
        v338 = *(int *)(v368 + 2 * v90);
        if ( *(_DWORD *)(v366 + 2 * v90) )
        {
          v91 = *a1;
          v92 = qvector_reserve(v101 + 24, 0, v102, 1);
          v93 = *((_QWORD *)v101 + 4);
          *((_QWORD *)v101 + 3) = v92;
          memset((void *)(v92 + v93), 0, v102 - v93);
          *((_QWORD *)v101 + 4) = v102;
          v85 = (__m256i *)(v91 + v338);
          memcpy(*((void **)v101 + 3), (const void *)(v91 + v338), v102);
          goto LABEL_61;
        }
      }
      else
      {
        v182 = *(int *)(v370 + 2 * v90);
        if ( (int)v182 > 0 )
        {
          v183 = qvector_reserve(v101 + 24, 0, *(int *)(v370 + 2 * v90), 1);
          v184 = *((_QWORD *)v101 + 4);
          *((_QWORD *)v101 + 3) = v183;
          memset((void *)(v183 + v184), 0, v182 - v184);
          *((_QWORD *)v101 + 4) = v182;
          v85 = (__m256i *)a1;
          v185 = a1[3];
          a1[3] = *(int *)(v368 + 2 * v90);
          v186 = *((_QWORD *)v101 + 4);
          if ( !v186
            || (v85 = (__m256i *)sub_4910,
                v342 = v185,
                v187 = _mm_loadh_ps((const double *)v101 + 3),
                v376.m256i_i64[2] = *((_QWORD *)v101 + 4),
                *(__m128 *)v376.m256i_i8 = v187,
                v188 = zip_inflate(v352, sub_4910, sub_3E70),
                v185 = v342,
                v188) )
          {
            v186 = 0;
          }
          a1[3] = v185;
          if ( *((_QWORD *)v101 + 4) != v186 )
          {
            v85 = (__m256i *)s1;
            v88 = "sis: uncompression failed: %s\n";
            sub_54E0((__int64)"sis: uncompression failed: %s\n", s1);
            if ( v373.m128i_i64[0] )
            {
              v89 = v372;
              --v373.m128i_i64[0];
              v189 = &v372[72 * v373.m128i_i64[0]];
              v190 = *((_QWORD *)v189 + 3);
              if ( v190 )
              {
                *((_QWORD *)v189 + 4) = 0;
                qfree(v190);
              }
              v88 = *(char **)v189;
              if ( *(_QWORD *)v189 )
              {
                *((_QWORD *)v189 + 1) = 0;
                qfree(v88);
              }
            }
            goto LABEL_66;
          }
LABEL_61:
          v88 = s1;
          v94 = strlen(s1);
          v84 = v94;
          if ( !v94 )
          {
LABEL_62:
            *((_QWORD *)v101 + 1) = 0;
LABEL_63:
            v95 = v360 == 1;
            *((_DWORD *)v101 + 14) = v361;
            if ( v95 )
              v96 = *(unsigned __int16 *)&v374[v90];
            else
              v96 = *(unsigned __int16 *)v374;
            *((_DWORD *)v101 + 15) = v96;
            *((_DWORD *)v101 + 16) = *(_DWORD *)(v368 + 2 * v90);
            *((_DWORD *)v101 + 17) = *(_DWORD *)(v366 + 2 * v90);
            goto LABEL_66;
          }
          v105 = *(char **)v101;
          v106 = v94 + 1;
          v88 = *(char **)v101;
          if ( *((_QWORD *)v101 + 2) >= v94 + 1 )
          {
LABEL_78:
            *((_QWORD *)v101 + 1) = v106;
            v85 = (__m256i *)s1;
            v340 = v84;
            memmove(v88, s1, v84);
            v84 = v340;
            *(_BYTE *)(*(_QWORD *)v101 + v340) = 0;
            goto LABEL_63;
          }
LABEL_77:
          n[0] = v84;
          v339 = v106;
          v107 = qvector_reserve(v101, v105, v106, 1);
          v84 = n[0];
          v106 = v339;
          *(_QWORD *)v101 = v107;
          v88 = (char *)v107;
          goto LABEL_78;
        }
      }
      v88 = s1;
      v104 = strlen(s1);
      v84 = v104;
      if ( !v104 )
        goto LABEL_62;
      v105 = *(char **)v101;
      v106 = v104 + 1;
      goto LABEL_77;
    }
LABEL_205:
    v204 = v373.m128i_i64[0];
    v205 = v373.m128i_i64[0] - 1;
    if ( v373.m128i_i64[0] - 1 >= 0 )
    {
      v206 = 72 * v373.m128i_i64[0] - 72;
      do
      {
        while ( 1 )
        {
          v85 = nullptr;
          if ( !(unsigned __int8)sub_9830((__int64 *)&v372[v206 + 24], nullptr, nullptr) )
            break;
          --v205;
          v206 -= 72;
          if ( v205 == -1 )
            goto LABEL_218;
        }
        v207 = &v372[v206];
        v208 = *(_QWORD *)&v372[v206 + 24];
        if ( v208 )
        {
          *((_QWORD *)v207 + 4) = 0;
          qfree(v208);
        }
        v209 = *(_QWORD *)v207;
        if ( *(_QWORD *)v207 )
        {
          *((_QWORD *)v207 + 1) = 0;
          qfree(v209);
        }
        v210 = v373.m128i_i64[0];
        v211 = v207 + 72;
        v85 = (__m256i *)(9 * v373.m128i_i64[0]);
        v212 = 0x8E38E38E38E38E39LL * ((&v372[72 * v373.m128i_i64[0]] - v207) >> 3) - 2;
        if ( v212 >= 0 )
        {
          a4 = 0;
          do
          {
            v213 = *(_QWORD *)v211;
            v214 = _mm_loadu_si128((const __m128i *)(v211 + 8));
            *(_OWORD *)(v211 + 8) = 0;
            v211 += 72;
            *((_QWORD *)v211 - 9) = 0;
            *((_QWORD *)v211 - 18) = v213;
            v215 = *((_QWORD *)v211 - 6);
            *(__m128i *)(v211 - 136) = v214;
            v216 = _mm_loadu_si128((const __m128i *)(v211 - 40));
            *((_QWORD *)v211 - 15) = v215;
            v217 = *((_QWORD *)v211 - 3);
            *((_QWORD *)v211 - 6) = 0;
            *((_QWORD *)v211 - 12) = v217;
            v218 = *((_QWORD *)v211 - 2);
            *((__m128i *)v211 - 7) = v216;
            *((_QWORD *)v211 - 11) = v218;
            v219 = *((_QWORD *)v211 - 1);
            *((_QWORD *)v211 - 4) = 0;
            *((_QWORD *)v211 - 10) = v219;
            v202 = v212-- == 0;
          }
          while ( !v202 );
          v210 = v373.m128i_i64[0];
        }
        --v205;
        v206 -= 72;
        v373.m128i_i64[0] = v210 - 1;
      }
      while ( v205 != -1 );
LABEL_218:
      v204 = v373.m128i_i64[0];
    }
    if ( !v204 )
LABEL_7:
      sub_58B0((__int64)"Could not find any executable files inside SIS file");
    v463 = 0;
    v461 = 0x3FF000004LL;
    v464 = (__int64)"EPOC SIS CONTENTS (executable files only)";
    v462 = -1;
    v220 = (__int128 *)((char *)&v467 + 8);
    v460 = (unsigned __int64)&unk_12C00;
    LODWORD(v465) = 4;
    LODWORD(v467) = -1;
    v466 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_12BE8), (__m128i)(unsigned __int64)off_12BC0);
    do
    {
      *(_QWORD *)v220 = 0;
      v220 = (_OWORD *)((char *)v220 + 24);
      *(v220 - 1) = 0;
    }
    while ( (__int128 *)((char *)&v473 + 8) != v220 );
    DWORD2(v473) = 0;
    if ( ((HIDWORD(v461) >> 19) & 0x3F) == 0 )
      goto LABEL_225;
    if ( BYTE3(v461) == 0xFF )
    {
      BYTE3(v461) = ((HIDWORD(v461) >> 19) & 0x3F) - 1;
      HIDWORD(v461) &= 0xFE07FFFF;
LABEL_225:
      v221 = nullptr;
      v460 = (unsigned __int64)off_12A30;
      v222 = 16;
      v474 = &v372;
      v376.m256i_i64[0] = 0;
      v223 = callui(16, 0, &v460);
      if ( v223 < 0 || (unsigned __int64)v223 >= v373.m128i_i64[0] )
        sub_58B0(0, 0.0);
      v224 = 9 * v223;
      v225 = &v372[72 * v223];
      if ( (_BYTE)v353 )
      {
        v226 = 1;
LABEL_231:
        sub_AE00(v225 + 24, v226, 0.0);
        v233 = ::s1;
        if ( *((_QWORD *)v225 + 1) )
          v233 = *(const char **)v225;
        sub_5070(
          (__int64)"Module name : %s",
          (__int64)v233,
          v227,
          v228,
          v229,
          v230,
          (__m128)0LL,
          a4,
          a5,
          a6,
          v231,
          v232,
          (__m128)(unsigned __int64)off_12BC0,
          a10,
          v324);
        v460 = (unsigned __int64)&unk_12C00;
        v234 = (__m128i *)&v472;
        do
        {
          v235 = v234->m128i_i64[0];
          if ( v234->m128i_i64[0] )
          {
            v234->m128i_i64[1] = 0;
            qfree(v235);
          }
          v234 = (__m128i *)((char *)v234 - 24);
        }
        while ( &v466 != v234 );
        if ( v374 )
        {
          *(_QWORD *)&v375 = 0;
          qfree(v374);
        }
        v236 = v372;
        if ( v372 )
        {
          v237 = v373.m128i_i64[0];
          if ( v373.m128i_i64[0] )
          {
            v238 = 0;
            do
            {
              v239 = &v236[72 * v238];
              v240 = *((_QWORD *)v239 + 3);
              if ( v240 )
              {
                *((_QWORD *)v239 + 4) = 0;
                qfree(v240);
              }
              v241 = *(_QWORD *)v239;
              if ( *(_QWORD *)v239 )
              {
                *((_QWORD *)v239 + 1) = 0;
                qfree(v241);
              }
              ++v238;
              v236 = v372;
            }
            while ( v237 != v238 );
          }
          v373.m128i_i64[0] = 0;
          qfree(v236);
        }
        return v478 - __readfsqword(0x28u);
      }
      if ( (unsigned __int64)a1[1] > 0x43 )
      {
        v226 = 0;
        if ( *(_DWORD *)(*a1 + 32) == 200 )
          v226 = (*(_BYTE *)(*a1 + 36) & 8) == 0;
        goto LABEL_231;
      }
LABEL_377:
      sub_5BD0(v222, v221, v224);
    }
    if ( !under_debugger )
    {
      v242 = 3449;
      interr(3449, v85, HIDWORD(v461), ((HIDWORD(v461) >> 19) & 0x3F) - 1, v84);
LABEL_381:
      sub_5BD0(v242, v85, v243);
    }
LABEL_383:
    BUG();
  }
  if ( (unsigned int)sub_7D60(v330) != *(_DWORD *)(v330 + 12) )
  {
    v372 = nullptr;
    v374 = nullptr;
    v249 = (unsigned __int64)a1[1] <= 0x43;
    v373 = 0;
    v375 = 0;
    if ( v249 )
      sub_5BD0(v330, v389, v248);
    v330 = *a1;
    goto LABEL_6;
  }
  v221 = a1;
  v380 = &v378;
  a1[3] = 16;
  v381 = &v378;
  memset(&v376.m256i_u64[1], 0, 24);
  v376.m256i_i64[0] = (__int64)off_129E8;
  LODWORD(v378) = 0;
  v379 = nullptr;
  v382 = 0;
  v383 = 0xFFFFFFFFLL;
  v384 = 0;
  v385 = 0;
  v387 = nullptr;
  v386 = 0;
  v388 = 0;
  sub_7DE0(&v376, a1, 0);
  v278 = v388 - 1;
  if ( (__int64)v388 - 1 >= 0 )
  {
    v279 = 56 * v388 - 56;
    do
    {
      v221 = nullptr;
      if ( !(unsigned __int8)sub_9830((__int64 *)((char *)v387 + v279 + 24), nullptr, nullptr) )
      {
        v280 = (__int64 *)((char *)v387 + v279);
        v281 = *(__int64 *)((char *)v387 + v279 + 24);
        if ( v281 )
        {
          v280[4] = 0;
          qfree(v281);
        }
        v282 = *v280;
        if ( *v280 )
        {
          v280[1] = 0;
          qfree(v282);
        }
        v283 = v388;
        v221 = v387;
        v284 = v280 + 7;
        v285 = 0x6DB6DB6DB6DB6DB7LL * (&v387[7 * (_QWORD)v388] - v280) - 2;
        if ( v285 >= 0 )
        {
          a4 = 0;
          do
          {
            v286 = *v284;
            v287 = _mm_loadu_si128((const __m128i *)(v284 + 1));
            *(_OWORD *)(v284 + 1) = 0;
            v284 += 7;
            *(v284 - 7) = 0;
            *(v284 - 14) = v286;
            v288 = *(v284 - 4);
            *(__m128i *)(v284 - 13) = v287;
            v289 = _mm_loadu_si128((const __m128i *)(v284 - 3));
            *(v284 - 11) = v288;
            v290 = *(v284 - 1);
            *(v284 - 4) = 0;
            *((__m128i *)v284 - 5) = v289;
            *(v284 - 2) = 0;
            *(v284 - 8) = v290;
            v202 = v285-- == 0;
          }
          while ( !v202 );
          v283 = v388;
        }
        *(_QWORD *)&v388 = v283 - 1;
      }
      --v278;
      v279 -= 56;
    }
    while ( v278 != -1 );
  }
  v453 = 0;
  v451 = 0x3FF000004LL;
  v454 = (__int64)"EPOC SIS9 CONTENTS (executable files only)";
  v452 = -1;
  v291 = (_OWORD *)((char *)&v456[1] + 8);
  v450 = (__int64 (__fastcall **)())&unk_12C00;
  LODWORD(v455) = 2;
  LODWORD(v456[1]) = -1;
  v456[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_12BE0), (__m128i)(unsigned __int64)off_12BA0);
  do
  {
    *(_QWORD *)v291 = 0;
    v291 = (_OWORD *)((char *)v291 + 24);
    *(v291 - 1) = 0;
  }
  while ( (__int128 *)((char *)&v458 + 8) != v291 );
  DWORD2(v458) = 0;
  if ( ((HIDWORD(v451) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v451) != 0xFF )
    {
      if ( !under_debugger )
      {
        v222 = 3449;
        interr(3449, v221, (HIDWORD(v451) >> 19) & 0x3F, ((HIDWORD(v451) >> 19) & 0x3F) - 1, v277);
        goto LABEL_377;
      }
      goto LABEL_383;
    }
    BYTE3(v451) = ((HIDWORD(v451) >> 19) & 0x3F) - 1;
    HIDWORD(v451) &= 0xFE07FFFF;
  }
  v450 = off_12AF0;
  v459 = &v387;
  v372 = nullptr;
  v292 = callui(16, 0, &v450);
  if ( v292 < 0 || v292 >= (unsigned __int64)v388 )
    sub_58B0(0, 0.0);
  v293 = &v387[7 * v292];
  sub_AE00(v293 + 3, 1, 0.0);
  if ( (unsigned __int64)v293[1] > 1 )
    sub_5070(
      (__int64)"Module name : %s",
      *v293,
      v294,
      v295,
      v296,
      v297,
      (__m128)0LL,
      a4,
      a5,
      a6,
      v298,
      v299,
      (__m128)(unsigned __int64)off_12BA0,
      a10,
      v324);
  v450 = (__int64 (__fastcall **)())&unk_12C00;
  v300 = &v457;
  do
  {
    v301 = *(_QWORD *)v300;
    if ( *(_QWORD *)v300 )
    {
      *((_QWORD *)v300 + 1) = 0;
      qfree(v301);
    }
    v300 = (__int128 *)((char *)v300 - 24);
  }
  while ( v456 != v300 );
  v302 = v387;
  v376.m256i_i64[0] = (__int64)off_129E8;
  if ( v387 )
  {
    v303 = v388;
    if ( (_QWORD)v388 )
    {
      v304 = 0;
      v305 = 0;
      do
      {
        v306 = &v302[v304];
        v307 = v302[v304 + 3];
        if ( v307 )
        {
          v306[4] = 0;
          qfree(v307);
        }
        v308 = *v306;
        if ( *v306 )
        {
          v306[1] = 0;
          qfree(v308);
        }
        ++v305;
        v302 = v387;
        v304 += 7;
      }
      while ( v303 != v305 );
    }
    *(_QWORD *)&v388 = 0;
    qfree(v302);
  }
  if ( v385 )
  {
    *(_QWORD *)&v386 = 0;
    qfree(v385);
  }
  v309 = v379;
  if ( v379 )
  {
    do
    {
      v310 = v309;
      sub_4980((_QWORD *)v309[3]);
      v311 = v309[5];
      v309 = (_QWORD *)v309[2];
      if ( v311 )
      {
        v310[6] = 0;
        qfree(v311);
      }
      operator delete(v310, 0x40u);
    }
    while ( v309 );
  }
  v376.m256i_i64[0] = (__int64)&off_12D18;
  if ( v376.m256i_i64[1] )
  {
    v376.m256i_i64[2] = 0;
    qfree(v376.m256i_i64[1]);
  }
  return v478 - __readfsqword(0x28u);
}
