unsigned __int64 __fastcall ida_mcp::tools::instructions::register_tools(
        ida_mcp::tools::instructions *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __m128 v19; // xmm1
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // si
  void **v25; // r15
  __int64 v26; // rdx
  __m128i v27; // xmm2
  __int64 v28; // rax
  __int64 v29; // rax
  const __m128i *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  const __m128i *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i v44; // xmm0
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  void **v48; // r15
  __int64 v49; // rax
  __m128i v50; // xmm3
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 *v61; // r15
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 *v77; // r15
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rsi
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  __int64 v103; // rax
  __m128i v104; // xmm0
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  void **v111; // r15
  __int64 v112; // rax
  __m128i v113; // xmm4
  int v115; // [rsp+0h] [rbp-528h]
  int v116; // [rsp+0h] [rbp-528h]
  int v117; // [rsp+0h] [rbp-528h]
  int v118; // [rsp+0h] [rbp-528h]
  int v119; // [rsp+0h] [rbp-528h]
  int v120; // [rsp+0h] [rbp-528h]
  int v121; // [rsp+0h] [rbp-528h]
  int v122; // [rsp+0h] [rbp-528h]
  int v123; // [rsp+0h] [rbp-528h]
  int v124; // [rsp+0h] [rbp-528h]
  int v125; // [rsp+0h] [rbp-528h]
  int v126; // [rsp+0h] [rbp-528h]
  int v127; // [rsp+0h] [rbp-528h]
  int v128; // [rsp+0h] [rbp-528h]
  int v129; // [rsp+0h] [rbp-528h]
  int v130; // [rsp+0h] [rbp-528h]
  int v131; // [rsp+0h] [rbp-528h]
  int v132; // [rsp+0h] [rbp-528h]
  __int64 v133; // [rsp+8h] [rbp-520h]
  __int64 v134; // [rsp+8h] [rbp-520h]
  __int64 v135; // [rsp+8h] [rbp-520h]
  __int64 v136; // [rsp+8h] [rbp-520h]
  __int64 v137; // [rsp+8h] [rbp-520h]
  int v138; // [rsp+8h] [rbp-520h]
  __int64 v139; // [rsp+8h] [rbp-520h]
  __int64 v140; // [rsp+8h] [rbp-520h]
  __int64 v141; // [rsp+8h] [rbp-520h]
  int v142; // [rsp+8h] [rbp-520h]
  __int64 v143; // [rsp+8h] [rbp-520h]
  __int64 v144; // [rsp+8h] [rbp-520h]
  __int64 v145; // [rsp+8h] [rbp-520h]
  __int64 v146; // [rsp+8h] [rbp-520h]
  __int64 v147; // [rsp+8h] [rbp-520h]
  __int64 v148; // [rsp+8h] [rbp-520h]
  __int64 v149; // [rsp+8h] [rbp-520h]
  __int64 v150; // [rsp+8h] [rbp-520h]
  int v151; // [rsp+10h] [rbp-518h]
  int v152; // [rsp+10h] [rbp-518h]
  int v153; // [rsp+10h] [rbp-518h]
  int v154; // [rsp+10h] [rbp-518h]
  int v155; // [rsp+10h] [rbp-518h]
  __int64 v156; // [rsp+10h] [rbp-518h]
  int v157; // [rsp+10h] [rbp-518h]
  int v158; // [rsp+10h] [rbp-518h]
  int v159; // [rsp+10h] [rbp-518h]
  __int64 v160; // [rsp+10h] [rbp-518h]
  int v161; // [rsp+10h] [rbp-518h]
  int v162; // [rsp+10h] [rbp-518h]
  int v163; // [rsp+10h] [rbp-518h]
  int v164; // [rsp+10h] [rbp-518h]
  int v165; // [rsp+10h] [rbp-518h]
  int v166; // [rsp+10h] [rbp-518h]
  int v167; // [rsp+10h] [rbp-518h]
  int v168; // [rsp+10h] [rbp-518h]
  int v169; // [rsp+18h] [rbp-510h]
  int v170; // [rsp+18h] [rbp-510h]
  int v171; // [rsp+18h] [rbp-510h]
  int v172; // [rsp+18h] [rbp-510h]
  int v173; // [rsp+18h] [rbp-510h]
  int v174; // [rsp+18h] [rbp-510h]
  int v175; // [rsp+18h] [rbp-510h]
  int v176; // [rsp+18h] [rbp-510h]
  int v177; // [rsp+18h] [rbp-510h]
  int v178; // [rsp+18h] [rbp-510h]
  int v179; // [rsp+18h] [rbp-510h]
  int v180; // [rsp+18h] [rbp-510h]
  int v181; // [rsp+18h] [rbp-510h]
  int v182; // [rsp+18h] [rbp-510h]
  int v183; // [rsp+18h] [rbp-510h]
  int v184; // [rsp+20h] [rbp-508h]
  int v185; // [rsp+20h] [rbp-508h]
  int v186; // [rsp+20h] [rbp-508h]
  int v187; // [rsp+20h] [rbp-508h]
  int v188; // [rsp+20h] [rbp-508h]
  int v189; // [rsp+20h] [rbp-508h]
  int v190; // [rsp+20h] [rbp-508h]
  int v191; // [rsp+20h] [rbp-508h]
  int v192; // [rsp+20h] [rbp-508h]
  int v193; // [rsp+20h] [rbp-508h]
  int v194; // [rsp+20h] [rbp-508h]
  int v195; // [rsp+20h] [rbp-508h]
  int v196; // [rsp+20h] [rbp-508h]
  int v197; // [rsp+20h] [rbp-508h]
  int v198; // [rsp+20h] [rbp-508h]
  int v199; // [rsp+28h] [rbp-500h]
  __m128i *v200; // [rsp+28h] [rbp-500h]
  int v201; // [rsp+28h] [rbp-500h]
  int v202; // [rsp+28h] [rbp-500h]
  int v203; // [rsp+28h] [rbp-500h]
  int v204; // [rsp+28h] [rbp-500h]
  int v205; // [rsp+28h] [rbp-500h]
  int v206; // [rsp+28h] [rbp-500h]
  int v207; // [rsp+28h] [rbp-500h]
  int v208; // [rsp+28h] [rbp-500h]
  __int64 v209; // [rsp+28h] [rbp-500h]
  int v210; // [rsp+28h] [rbp-500h]
  int v211; // [rsp+28h] [rbp-500h]
  int v212; // [rsp+28h] [rbp-500h]
  int v213; // [rsp+28h] [rbp-500h]
  __int64 v214; // [rsp+30h] [rbp-4F8h]
  __int64 v215; // [rsp+30h] [rbp-4F8h]
  __int64 v216; // [rsp+30h] [rbp-4F8h]
  __int64 v217; // [rsp+30h] [rbp-4F8h]
  __int64 v218; // [rsp+30h] [rbp-4F8h]
  __int64 v219; // [rsp+30h] [rbp-4F8h]
  __int64 v220; // [rsp+30h] [rbp-4F8h]
  __int64 v221; // [rsp+30h] [rbp-4F8h]
  __int64 v222; // [rsp+30h] [rbp-4F8h]
  __int64 v223; // [rsp+30h] [rbp-4F8h]
  __int64 v224; // [rsp+30h] [rbp-4F8h]
  __int64 v225; // [rsp+30h] [rbp-4F8h]
  __int64 v226; // [rsp+30h] [rbp-4F8h]
  __int64 v227; // [rsp+30h] [rbp-4F8h]
  __int64 v228; // [rsp+30h] [rbp-4F8h]
  int v229; // [rsp+38h] [rbp-4F0h]
  int v230; // [rsp+38h] [rbp-4F0h]
  int v231; // [rsp+38h] [rbp-4F0h]
  int v232; // [rsp+38h] [rbp-4F0h]
  int v233; // [rsp+38h] [rbp-4F0h]
  int v234; // [rsp+38h] [rbp-4F0h]
  int v235; // [rsp+38h] [rbp-4F0h]
  int v236; // [rsp+38h] [rbp-4F0h]
  int v237; // [rsp+38h] [rbp-4F0h]
  int v238; // [rsp+38h] [rbp-4F0h]
  int v239; // [rsp+38h] [rbp-4F0h]
  int v240; // [rsp+38h] [rbp-4F0h]
  int v241; // [rsp+38h] [rbp-4F0h]
  int v242; // [rsp+38h] [rbp-4F0h]
  int v243; // [rsp+38h] [rbp-4F0h]
  int v244; // [rsp+40h] [rbp-4E8h]
  int v245; // [rsp+40h] [rbp-4E8h]
  int v246; // [rsp+40h] [rbp-4E8h]
  int v247; // [rsp+40h] [rbp-4E8h]
  int v248; // [rsp+40h] [rbp-4E8h]
  int v249; // [rsp+40h] [rbp-4E8h]
  int v250; // [rsp+40h] [rbp-4E8h]
  int v251; // [rsp+40h] [rbp-4E8h]
  int v252; // [rsp+40h] [rbp-4E8h]
  int v253; // [rsp+40h] [rbp-4E8h]
  int v254; // [rsp+40h] [rbp-4E8h]
  int v255; // [rsp+40h] [rbp-4E8h]
  int v256; // [rsp+40h] [rbp-4E8h]
  int v257; // [rsp+40h] [rbp-4E8h]
  int v258; // [rsp+40h] [rbp-4E8h]
  int v259; // [rsp+48h] [rbp-4E0h]
  int v260; // [rsp+48h] [rbp-4E0h]
  int v261; // [rsp+48h] [rbp-4E0h]
  int v262; // [rsp+48h] [rbp-4E0h]
  int v263; // [rsp+48h] [rbp-4E0h]
  int v264; // [rsp+48h] [rbp-4E0h]
  int v265; // [rsp+48h] [rbp-4E0h]
  int v266; // [rsp+48h] [rbp-4E0h]
  int v267; // [rsp+48h] [rbp-4E0h]
  int v268; // [rsp+48h] [rbp-4E0h]
  int v269; // [rsp+48h] [rbp-4E0h]
  int v270; // [rsp+48h] [rbp-4E0h]
  int v271; // [rsp+48h] [rbp-4E0h]
  int v272; // [rsp+48h] [rbp-4E0h]
  int v273; // [rsp+48h] [rbp-4E0h]
  int v274; // [rsp+50h] [rbp-4D8h]
  _QWORD *v275; // [rsp+50h] [rbp-4D8h]
  int v276; // [rsp+50h] [rbp-4D8h]
  int v277; // [rsp+50h] [rbp-4D8h]
  int v278; // [rsp+50h] [rbp-4D8h]
  int v279; // [rsp+50h] [rbp-4D8h]
  __int64 v280; // [rsp+50h] [rbp-4D8h]
  int v281; // [rsp+50h] [rbp-4D8h]
  int v282; // [rsp+50h] [rbp-4D8h]
  int v283; // [rsp+50h] [rbp-4D8h]
  int v284; // [rsp+50h] [rbp-4D8h]
  int v285; // [rsp+50h] [rbp-4D8h]
  int v286; // [rsp+50h] [rbp-4D8h]
  int v287; // [rsp+50h] [rbp-4D8h]
  int v288; // [rsp+50h] [rbp-4D8h]
  char v289; // [rsp+58h] [rbp-4D0h]
  const __m128i *v290; // [rsp+58h] [rbp-4D0h]
  char v291; // [rsp+58h] [rbp-4D0h]
  char v292; // [rsp+58h] [rbp-4D0h]
  char v293; // [rsp+58h] [rbp-4D0h]
  char v294; // [rsp+58h] [rbp-4D0h]
  _QWORD *v295; // [rsp+58h] [rbp-4D0h]
  char v296; // [rsp+58h] [rbp-4D0h]
  char v297; // [rsp+58h] [rbp-4D0h]
  char v298; // [rsp+58h] [rbp-4D0h]
  char v299; // [rsp+58h] [rbp-4D0h]
  __int64 v300; // [rsp+58h] [rbp-4D0h]
  char v301; // [rsp+58h] [rbp-4D0h]
  char v302; // [rsp+58h] [rbp-4D0h]
  char v303; // [rsp+58h] [rbp-4D0h]
  __int64 v304; // [rsp+60h] [rbp-4C8h]
  const __m128i *v305; // [rsp+60h] [rbp-4C8h]
  __int64 v306; // [rsp+60h] [rbp-4C8h]
  __int64 v307; // [rsp+60h] [rbp-4C8h]
  __int64 v308; // [rsp+60h] [rbp-4C8h]
  __int64 v309; // [rsp+60h] [rbp-4C8h]
  __int64 v310; // [rsp+60h] [rbp-4C8h]
  _QWORD *v311; // [rsp+60h] [rbp-4C8h]
  __int64 v312; // [rsp+60h] [rbp-4C8h]
  __int64 v313; // [rsp+60h] [rbp-4C8h]
  __int64 v314; // [rsp+60h] [rbp-4C8h]
  __int64 v315; // [rsp+60h] [rbp-4C8h]
  __int64 v316; // [rsp+60h] [rbp-4C8h]
  __int64 v317; // [rsp+60h] [rbp-4C8h]
  __int64 v318; // [rsp+60h] [rbp-4C8h]
  int v319; // [rsp+68h] [rbp-4C0h]
  int v320; // [rsp+68h] [rbp-4C0h]
  int v321; // [rsp+68h] [rbp-4C0h]
  int v322; // [rsp+68h] [rbp-4C0h]
  int v323; // [rsp+68h] [rbp-4C0h]
  int v324; // [rsp+68h] [rbp-4C0h]
  int v325; // [rsp+68h] [rbp-4C0h]
  int v326; // [rsp+68h] [rbp-4C0h]
  int v327; // [rsp+68h] [rbp-4C0h]
  int v328; // [rsp+68h] [rbp-4C0h]
  int v329; // [rsp+68h] [rbp-4C0h]
  int v330; // [rsp+68h] [rbp-4C0h]
  int v331; // [rsp+68h] [rbp-4C0h]
  int v332; // [rsp+68h] [rbp-4C0h]
  int v333; // [rsp+68h] [rbp-4C0h]
  __int64 v334; // [rsp+70h] [rbp-4B8h]
  __int64 v335; // [rsp+70h] [rbp-4B8h]
  __int64 v336; // [rsp+70h] [rbp-4B8h]
  __int64 v337; // [rsp+70h] [rbp-4B8h]
  __int64 v338; // [rsp+70h] [rbp-4B8h]
  __int64 v339; // [rsp+70h] [rbp-4B8h]
  __int64 v340; // [rsp+70h] [rbp-4B8h]
  __int64 v341; // [rsp+70h] [rbp-4B8h]
  __int64 v342; // [rsp+70h] [rbp-4B8h]
  __int64 v343; // [rsp+70h] [rbp-4B8h]
  __int64 v344; // [rsp+70h] [rbp-4B8h]
  __int64 v345; // [rsp+70h] [rbp-4B8h]
  __int64 v346; // [rsp+70h] [rbp-4B8h]
  __int64 v347; // [rsp+70h] [rbp-4B8h]
  __int64 v348; // [rsp+70h] [rbp-4B8h]
  __m128i v349; // [rsp+80h] [rbp-4A8h] BYREF
  ida_mcp::tools::instructions *v350; // [rsp+90h] [rbp-498h]
  const __m128i *v351; // [rsp+98h] [rbp-490h]
  const __m128i *v352; // [rsp+A0h] [rbp-488h]
  char *v353; // [rsp+A8h] [rbp-480h]
  char *v354; // [rsp+B0h] [rbp-478h]
  char *v355; // [rsp+B8h] [rbp-470h]
  char *v356; // [rsp+C0h] [rbp-468h]
  char *v357; // [rsp+C8h] [rbp-460h]
  __int8 *v358; // [rsp+D0h] [rbp-458h]
  void **v359; // [rsp+D8h] [rbp-450h]
  __int64 *v360; // [rsp+E0h] [rbp-448h]
  __m128i *v361; // [rsp+E8h] [rbp-440h]
  __int64 *v362; // [rsp+F0h] [rbp-438h]
  __int64 *v363; // [rsp+F8h] [rbp-430h]
  __int64 *v364; // [rsp+100h] [rbp-428h]
  __int64 *v365; // [rsp+108h] [rbp-420h]
  __int64 *v366; // [rsp+110h] [rbp-418h]
  __int64 *v367; // [rsp+118h] [rbp-410h]
  _QWORD *v368; // [rsp+120h] [rbp-408h]
  __int128 *v369; // [rsp+128h] [rbp-400h]
  __int128 *v370; // [rsp+130h] [rbp-3F8h]
  __int128 *v371; // [rsp+138h] [rbp-3F0h]
  __int128 *v372; // [rsp+140h] [rbp-3E8h]
  __int128 *v373; // [rsp+148h] [rbp-3E0h]
  __int128 *v374; // [rsp+150h] [rbp-3D8h]
  char *v375; // [rsp+158h] [rbp-3D0h]
  char *v376; // [rsp+160h] [rbp-3C8h]
  char *v377; // [rsp+168h] [rbp-3C0h]
  __m128i v378; // [rsp+170h] [rbp-3B8h] BYREF
  __int64 v379; // [rsp+180h] [rbp-3A8h] BYREF
  __int64 v380; // [rsp+188h] [rbp-3A0h] BYREF
  char v381; // [rsp+190h] [rbp-398h]
  __int128 v382; // [rsp+198h] [rbp-390h] BYREF
  char v383; // [rsp+1B0h] [rbp-378h] BYREF
  __int128 v384; // [rsp+1B8h] [rbp-370h] BYREF
  char v385; // [rsp+1C8h] [rbp-360h]
  __int128 v386; // [rsp+1D0h] [rbp-358h] BYREF
  char v387[8]; // [rsp+1E0h] [rbp-348h] BYREF
  __int128 v388; // [rsp+1E8h] [rbp-340h] BYREF
  char v389; // [rsp+1F8h] [rbp-330h]
  __int128 v390; // [rsp+200h] [rbp-328h] BYREF
  char v391[8]; // [rsp+210h] [rbp-318h] BYREF
  __int128 v392; // [rsp+218h] [rbp-310h] BYREF
  char v393; // [rsp+228h] [rbp-300h]
  __int128 v394; // [rsp+230h] [rbp-2F8h] BYREF
  __int64 v395; // [rsp+240h] [rbp-2E8h] BYREF
  __int128 v396; // [rsp+248h] [rbp-2E0h] BYREF
  _QWORD v397[3]; // [rsp+258h] [rbp-2D0h] BYREF
  __int64 v398; // [rsp+270h] [rbp-2B8h] BYREF
  __int128 v399; // [rsp+278h] [rbp-2B0h] BYREF
  _QWORD v400[3]; // [rsp+288h] [rbp-2A0h] BYREF
  char v401; // [rsp+2A0h] [rbp-288h] BYREF
  __int128 v402; // [rsp+2A8h] [rbp-280h] BYREF
  char v403; // [rsp+2B8h] [rbp-270h]
  __int128 v404; // [rsp+2C0h] [rbp-268h] BYREF
  char v405; // [rsp+2D0h] [rbp-258h] BYREF
  __int128 v406; // [rsp+2D8h] [rbp-250h] BYREF
  char v407; // [rsp+2E8h] [rbp-240h]
  __int128 v408; // [rsp+2F0h] [rbp-238h] BYREF
  char v409; // [rsp+300h] [rbp-228h] BYREF
  __int128 v410; // [rsp+308h] [rbp-220h] BYREF
  __int64 v411; // [rsp+318h] [rbp-210h] BYREF
  __int128 v412; // [rsp+320h] [rbp-208h] BYREF
  __int64 v413; // [rsp+330h] [rbp-1F8h] BYREF
  __int128 v414; // [rsp+338h] [rbp-1F0h] BYREF
  __int64 v415; // [rsp+348h] [rbp-1E0h] BYREF
  char v416; // [rsp+350h] [rbp-1D8h] BYREF
  __int64 v417; // [rsp+358h] [rbp-1D0h]
  char v418; // [rsp+360h] [rbp-1C8h] BYREF
  __int128 v419; // [rsp+368h] [rbp-1C0h] BYREF
  __int64 v420; // [rsp+378h] [rbp-1B0h] BYREF
  char v421; // [rsp+380h] [rbp-1A8h] BYREF
  __int64 v422; // [rsp+388h] [rbp-1A0h]
  char v423; // [rsp+390h] [rbp-198h] BYREF
  __int128 v424; // [rsp+398h] [rbp-190h]
  __int64 v425; // [rsp+3A8h] [rbp-180h] BYREF
  char v426; // [rsp+3B0h] [rbp-178h] BYREF
  __int64 v427; // [rsp+3B8h] [rbp-170h]
  char v428; // [rsp+3C0h] [rbp-168h] BYREF
  __int128 v429; // [rsp+3C8h] [rbp-160h]
  __m128i v430; // [rsp+3D8h] [rbp-150h] BYREF
  __int64 v431; // [rsp+3E8h] [rbp-140h]
  void *v432; // [rsp+3F0h] [rbp-138h] BYREF
  __int64 v433; // [rsp+3F8h] [rbp-130h]
  __m128i v434; // [rsp+400h] [rbp-128h] BYREF
  __int64 v435; // [rsp+418h] [rbp-110h]
  _QWORD v436[2]; // [rsp+420h] [rbp-108h] BYREF
  __int64 v437; // [rsp+430h] [rbp-F8h]
  char v438; // [rsp+438h] [rbp-F0h] BYREF
  void *v439; // [rsp+440h] [rbp-E8h] BYREF
  __int64 v440; // [rsp+448h] [rbp-E0h]
  _QWORD v441[2]; // [rsp+450h] [rbp-D8h] BYREF
  void *v442; // [rsp+460h] [rbp-C8h] BYREF
  __int64 v443; // [rsp+468h] [rbp-C0h]
  _QWORD v444[2]; // [rsp+470h] [rbp-B8h] BYREF
  char v445; // [rsp+480h] [rbp-A8h]
  __int64 v446; // [rsp+488h] [rbp-A0h] BYREF
  char v447; // [rsp+4A0h] [rbp-88h]
  ida_mcp::tools::instructions *v448; // [rsp+4A8h] [rbp-80h]
  _QWORD v449[2]; // [rsp+4B8h] [rbp-70h] BYREF
  char v450; // [rsp+4C8h] [rbp-60h]
  char v451; // [rsp+4D8h] [rbp-50h]
  unsigned __int64 v452; // [rsp+4E8h] [rbp-40h]

  v350 = this;
  v452 = __readfsqword(0x28u);
  v439 = v441;
  v440 = 0;
  LOBYTE(v441[0]) = 0;
  v442 = v444;
  v443 = 0;
  LOBYTE(v444[0]) = 0;
  v445 = 0;
  v446 = 0;
  v447 = 0;
  v451 = 0;
  std::string::_M_replace();
  v359 = &v442;
  std::string::_M_replace();
  *(_QWORD *)&v402 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v401 = 3;
  v2 = operator new(0x20u);
  *(_QWORD *)v2 = v2 + 16;
  strcpy((char *)(v2 + 16), "type");
  *(_QWORD *)(v2 + 8) = 4;
  v403 = 0;
  *(_QWORD *)&v404 = 0;
  v402 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v403 = 3;
  v3 = operator new(0x20u);
  *(_QWORD *)v3 = v3 + 16;
  strcpy((char *)(v3 + 16), "object");
  *(_QWORD *)(v3 + 8) = 6;
  v353 = &v401;
  v404 = (unsigned __int64)v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v432,
    (const __m128i *)&v401);
  v434.m128i_i64[0] = 0;
  v423 = 0;
  *(_QWORD *)&v424 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v423 = 3;
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = v4 + 16;
  strcpy((char *)(v4 + 16), "properties");
  *(_QWORD *)(v4 + 8) = 10;
  v418 = 0;
  *(_QWORD *)&v419 = 0;
  v424 = (unsigned __int64)v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v418 = 3;
  v5 = operator new(0x20u);
  strcpy((char *)(v5 + 16), "address");
  *(_QWORD *)v5 = v5 + 16;
  *(_QWORD *)(v5 + 8) = 7;
  v405 = 0;
  *(_QWORD *)&v406 = 0;
  v419 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v405 = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "type");
  *(_QWORD *)(v6 + 8) = 4;
  v407 = 0;
  *(_QWORD *)&v408 = 0;
  v406 = (unsigned __int64)v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v407 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v7,
    "string",
    v8,
    v9,
    v10,
    v11,
    (int)&v402,
    (int)&v404,
    (__int64)&v406);
  v354 = &v405;
  v408 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v413,
    (const __m128i *)&v405);
  *((_QWORD *)&v414 + 1) = 0;
  v409 = 0;
  *(_QWORD *)&v410 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v409 = 3;
  v12 = operator new(0x20u);
  *(_QWORD *)v12 = v12 + 16;
  strcpy((char *)(v12 + 16), "description");
  *(_QWORD *)(v12 + 8) = 11;
  LOBYTE(v411) = 0;
  *(_QWORD *)&v412 = 0;
  v410 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v411) = 3;
  v13 = operator new(0x20u);
  *(_QWORD *)v13 = v13 + 16;
  strcpy((char *)(v13 + 16), "Hex address");
  *(_QWORD *)(v13 + 8) = 11;
  v364 = &v415;
  v412 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v415,
    (const __m128i *)&v409);
  v417 = 0;
  v365 = &v420;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v420,
    (const __m128i *)&v413);
  v422 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v398,
    (const __m128i *)&v418);
  *((_QWORD *)&v399 + 1) = 0;
  v366 = &v425;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v425,
    (__int64)&v398,
    1,
    v14,
    v15,
    v16,
    v115,
    v133,
    v151,
    (int)&v408,
    (int)&v439,
    (int)&v413,
    v214,
    (int)&v410,
    (int)&v412,
    (int)&v419,
    (int)&v398,
    (char)&v418,
    (__int64)&v409,
    v319,
    v334);
  v427 = 0;
  v351 = (const __m128i *)&v423;
  v367 = &v434.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v434.m128i_i64[1],
    (const __m128i *)&v423);
  v435 = 0;
  v428 = 0;
  *(_QWORD *)&v429 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v428 = 3;
  v17 = operator new(0x20u);
  *(_QWORD *)v17 = v17 + 16;
  strcpy((char *)(v17 + 16), "required");
  *(_QWORD *)(v17 + 8) = 8;
  *(_QWORD *)&v396 = 0;
  v429 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v395) = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "address");
  v19 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v18 + 8) = 7;
  v361 = &v378;
  v349 = (__m128i)v19;
  v396 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v20 = _mm_load_si128(&v378);
  v431 = 0;
  v352 = (const __m128i *)&v428;
  v368 = v436;
  v430 = v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v436,
    (const __m128i *)&v428);
  v437 = 0;
  LOBYTE(v379) = 0;
  v362 = &v379;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v379,
    (__int64)&v432,
    3,
    v21,
    v22,
    v23,
    v116,
    v134,
    v152,
    v169,
    v184,
    v199,
    (__int64)&v396,
    v229,
    v244,
    v259,
    v274,
    v289,
    v304,
    v320,
    v335);
  v24 = v445;
  v25 = (void **)&v438;
  v26 = v380;
  v445 = v379;
  LOBYTE(v379) = v24;
  v380 = v446;
  v446 = v26;
  v363 = &v380;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v25 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v25 != &v432 );
  v358 = &v430.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v357 = &v426;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v356 = &v421;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v355 = &v416;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v27 = _mm_load_si128(&v349);
  v433 = 0;
  v432 = ida_mcp::tools::instructions::`anonymous namespace'::handle_decode_insn;
  v434 = v27;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v434.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v434.m128i_i64[0])(&v432, &v432, 3);
  if ( v451 && v450 && v448 != (ida_mcp::tools::instructions *)v449 )
    operator delete(v448, v449[0] + 1LL);
  if ( v447 )
  {
    v447 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v360 = &v446;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v442 != v444 )
    operator delete(v442, v444[0] + 1LL);
  if ( v439 != v441 )
    operator delete(v439, v441[0] + 1LL);
  v439 = v441;
  v440 = 0;
  LOBYTE(v441[0]) = 0;
  v442 = v444;
  v443 = 0;
  LOBYTE(v444[0]) = 0;
  v445 = 0;
  v446 = 0;
  v447 = 0;
  v451 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v401 = 0;
  *(_QWORD *)&v402 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v401 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  strcpy((char *)(v28 + 16), "type");
  *(_QWORD *)(v28 + 8) = 4;
  v403 = 0;
  *(_QWORD *)&v404 = 0;
  v402 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v403 = 3;
  v29 = operator new(0x20u);
  *(_QWORD *)v29 = v29 + 16;
  v30 = (const __m128i *)v353;
  strcpy((char *)(v29 + 16), "object");
  *(_QWORD *)(v29 + 8) = 6;
  v404 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v432,
    v30);
  v434.m128i_i64[0] = 0;
  v423 = 0;
  *(_QWORD *)&v424 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v423 = 3;
  v31 = operator new(0x20u);
  *(_QWORD *)v31 = v31 + 16;
  strcpy((char *)(v31 + 16), "properties");
  *(_QWORD *)(v31 + 8) = 10;
  v418 = 0;
  *(_QWORD *)&v419 = 0;
  v424 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v418 = 3;
  v32 = operator new(0x20u);
  *(_QWORD *)v32 = v32 + 16;
  strcpy((char *)(v32 + 16), "address");
  *(_QWORD *)(v32 + 8) = 7;
  v405 = 0;
  *(_QWORD *)&v406 = 0;
  v419 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v405 = 3;
  v33 = operator new(0x20u);
  *(_QWORD *)v33 = v33 + 16;
  strcpy((char *)(v33 + 16), "type");
  *(_QWORD *)(v33 + 8) = 4;
  v407 = 0;
  *(_QWORD *)&v408 = 0;
  v406 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v407 = 3;
  v34 = operator new(0x20u);
  v35 = (const __m128i *)v354;
  *(_QWORD *)v34 = v34 + 16;
  strcpy((char *)(v34 + 16), "string");
  *(_QWORD *)(v34 + 8) = 6;
  v408 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v200,
    v35);
  *((_QWORD *)&v414 + 1) = 0;
  v409 = 0;
  *(_QWORD *)&v410 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v409 = 3;
  v36 = operator new(0x20u);
  *(_QWORD *)v36 = v36 + 16;
  strcpy((char *)(v36 + 16), "description");
  *(_QWORD *)(v36 + 8) = 11;
  LOBYTE(v411) = 0;
  *(_QWORD *)&v412 = 0;
  v410 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v411) = 3;
  v37 = operator new(0x20u);
  *(_QWORD *)v37 = v37 + 16;
  v38 = v364;
  strcpy((char *)(v37 + 16), "Hex address");
  *(_QWORD *)(v37 + 8) = 11;
  v412 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v38,
    v305);
  v417 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v365,
    v200);
  v422 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v275,
    v290);
  *((_QWORD *)&v399 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v366,
    (__int64)v275,
    1,
    v39,
    v40,
    v41,
    v117,
    v135,
    v153,
    v170,
    v185,
    (int)v200,
    v215,
    v230,
    v245,
    v260,
    (int)v275,
    (char)v290,
    (__int64)v305,
    (int)&v399,
    (__int64)&v414);
  v427 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v367,
    v351);
  v435 = 0;
  v428 = 0;
  *(_QWORD *)&v429 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v428 = 3;
  v42 = operator new(0x20u);
  *(_QWORD *)v42 = v42 + 16;
  strcpy((char *)(v42 + 16), "required");
  *(_QWORD *)(v42 + 8) = 8;
  LOBYTE(v395) = 0;
  *(_QWORD *)&v396 = 0;
  v429 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v395) = 3;
  v43 = operator new(0x20u);
  *(_QWORD *)v43 = v43 + 16;
  strcpy((char *)(v43 + 16), "address");
  *(_QWORD *)(v43 + 8) = 7;
  v396 = (unsigned __int64)v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v44 = _mm_load_si128(&v378);
  v431 = 0;
  v430 = v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v368,
    v352);
  v437 = 0;
  LOBYTE(v379) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v362,
    (__int64)&v432,
    3,
    v45,
    v46,
    v47,
    v118,
    v136,
    v154,
    v171,
    v186,
    v201,
    v216,
    v231,
    v246,
    v261,
    v276,
    v291,
    v306,
    v321,
    v336);
  LOBYTE(v35) = v445;
  v48 = (void **)&v438;
  v445 = v379;
  v49 = v446;
  LOBYTE(v379) = (_BYTE)v35;
  v446 = v380;
  v380 = v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v48 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v48 != &v432 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v50 = _mm_load_si128(&v349);
  v433 = 0;
  v432 = ida_mcp::tools::instructions::`anonymous namespace'::handle_print_insn;
  v434 = v50;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v434.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v434.m128i_i64[0])(&v432, &v432, 3);
  if ( v451 && v450 && v448 != (ida_mcp::tools::instructions *)v449 )
    operator delete(v448, v449[0] + 1LL);
  if ( v447 )
  {
    v447 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v442 != v444 )
    operator delete(v442, v444[0] + 1LL);
  if ( v439 != v441 )
    operator delete(v439, v441[0] + 1LL);
  v439 = v441;
  v440 = 0;
  LOBYTE(v441[0]) = 0;
  v442 = v444;
  v443 = 0;
  LOBYTE(v444[0]) = 0;
  v445 = 0;
  v446 = 0;
  v447 = 0;
  v451 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v383 = 0;
  v369 = &v384;
  *(_QWORD *)&v384 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v383 = 3;
  v51 = operator new(0x20u);
  *(_QWORD *)v51 = v51 + 16;
  strcpy((char *)(v51 + 16), "type");
  *(_QWORD *)(v51 + 8) = 4;
  v385 = 0;
  *(_QWORD *)&v386 = 0;
  v370 = &v386;
  v384 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v385 = 3;
  v52 = operator new(0x20u);
  *(_QWORD *)v52 = v52 + 16;
  strcpy((char *)(v52 + 16), "object");
  *(_QWORD *)(v52 + 8) = 6;
  v375 = &v383;
  v386 = (unsigned __int64)v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v432,
    (const __m128i *)&v383);
  v434.m128i_i64[0] = 0;
  v423 = 0;
  *(_QWORD *)&v424 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v423 = 3;
  v53 = operator new(0x20u);
  *(_QWORD *)v53 = v53 + 16;
  strcpy((char *)(v53 + 16), "properties");
  *(_QWORD *)(v53 + 8) = 10;
  LOBYTE(v398) = 0;
  *(_QWORD *)&v399 = 0;
  v424 = (unsigned __int64)v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v398) = 3;
  v54 = operator new(0x20u);
  strcpy((char *)(v54 + 16), "address");
  *(_QWORD *)v54 = v54 + 16;
  *(_QWORD *)(v54 + 8) = 7;
  v387[0] = 0;
  *(_QWORD *)&v388 = 0;
  v371 = &v388;
  v399 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v387[0] = 3;
  v55 = operator new(0x20u);
  *(_QWORD *)v55 = v55 + 16;
  strcpy((char *)(v55 + 16), "type");
  *(_QWORD *)(v55 + 8) = 4;
  v389 = 0;
  *(_QWORD *)&v390 = 0;
  v372 = &v390;
  v388 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v389 = 3;
  v56 = operator new(0x20u);
  strcpy((char *)(v56 + 16), "string");
  *(_QWORD *)v56 = v56 + 16;
  *(_QWORD *)(v56 + 8) = 6;
  v376 = v387;
  v390 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v395,
    (__int64)v387,
    2,
    v57,
    v58,
    v59,
    v119,
    v137,
    v155,
    v172,
    v187,
    v202,
    v217,
    v232,
    v247,
    v262,
    v277,
    v292,
    v307,
    v322,
    v337);
  *((_QWORD *)&v396 + 1) = 0;
  v391[0] = 0;
  *(_QWORD *)&v392 = 0;
  v373 = &v392;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v391[0] = 3;
  v60 = operator new(0x20u);
  *(_QWORD *)v60 = v60 + 16;
  strcpy((char *)(v60 + 16), "description");
  *(_QWORD *)(v60 + 8) = 11;
  v393 = 0;
  *(_QWORD *)&v394 = 0;
  v374 = &v394;
  v392 = (unsigned __int64)v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v393 = 3;
  v61 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v61, "Hex address", v62, v63, v64, v65, v120, v138, v156);
  v377 = v391;
  v394 = (unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v397,
    (__int64)v391,
    2,
    v66,
    v67,
    v68,
    v121,
    v139,
    v157,
    v173,
    v188,
    v203,
    v218,
    v233,
    v248,
    v263,
    v278,
    v293,
    v308,
    v323,
    v338);
  v397[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v400,
    (__int64)&v395,
    2,
    v69,
    v70,
    v71,
    v122,
    v140,
    v158,
    v174,
    v189,
    v204,
    v219,
    v234,
    v249,
    v264,
    v279,
    v294,
    v309,
    v324,
    v339);
  v400[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v295,
    v280,
    2,
    v72,
    v73,
    v74,
    v123,
    v141,
    v159,
    v175,
    v190,
    v205,
    v220,
    v235,
    v250,
    v265,
    v280,
    (char)v295,
    v310,
    v325,
    v340);
  *((_QWORD *)&v419 + 1) = 0;
  LOBYTE(v413) = 0;
  *(_QWORD *)&v414 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v413) = 3;
  v75 = operator new(0x20u);
  *(_QWORD *)v75 = v75 + 16;
  strcpy((char *)(v75 + 16), "operand_index");
  *(_QWORD *)(v75 + 8) = 13;
  v401 = 0;
  *(_QWORD *)&v402 = 0;
  v414 = (unsigned __int64)v75;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v401 = 3;
  v76 = operator new(0x20u);
  *(_QWORD *)v76 = v76 + 16;
  strcpy((char *)(v76 + 16), "type");
  *(_QWORD *)(v76 + 8) = 4;
  v403 = 0;
  *(_QWORD *)&v404 = 0;
  v402 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v403 = 3;
  v77 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v77, "number", v78, v79, v80, v81, v124, v142, v160);
  v404 = (unsigned __int64)v77;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v311,
    (__int64)v353,
    2,
    v82,
    v83,
    v84,
    v125,
    v143,
    v161,
    v176,
    v191,
    v206,
    v221,
    v236,
    v251,
    v266,
    v281,
    v296,
    (__int64)v311,
    v326,
    v341);
  *((_QWORD *)&v410 + 1) = 0;
  v405 = 0;
  *(_QWORD *)&v406 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v405 = 3;
  v85 = operator new(0x20u);
  *(_QWORD *)v85 = v85 + 16;
  strcpy((char *)(v85 + 16), "description");
  *(_QWORD *)(v85 + 8) = 11;
  v407 = 0;
  *(_QWORD *)&v408 = 0;
  v406 = (unsigned __int64)v85;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v407 = 3;
  v86 = operator new(0x20u);
  strcpy((char *)(v86 + 16), "Operand index");
  v87 = (__int64)v354;
  *(_QWORD *)v86 = v86 + 16;
  *(_QWORD *)(v86 + 8) = 13;
  v408 = (unsigned __int64)v86;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v411,
    v87,
    2,
    0x7865646E6920646ELL,
    v88,
    v89,
    v126,
    v144,
    v162,
    v177,
    v192,
    v207,
    v222,
    v237,
    v252,
    v267,
    v282,
    v297,
    v312,
    v327,
    v342);
  *((_QWORD *)&v412 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v364,
    v313,
    2,
    v90,
    v91,
    v92,
    v127,
    v145,
    v163,
    v178,
    v193,
    v208,
    v223,
    v238,
    v253,
    v268,
    v283,
    v298,
    v313,
    v328,
    v343);
  v417 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v365,
    v209,
    2,
    v93,
    v94,
    v95,
    v128,
    v146,
    v164,
    v179,
    v194,
    v209,
    v224,
    v239,
    v254,
    v269,
    v284,
    v299,
    v314,
    v329,
    v344);
  v422 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v366,
    v300,
    2,
    v96,
    v97,
    v98,
    v129,
    v147,
    v165,
    v180,
    v195,
    v210,
    v225,
    v240,
    v255,
    v270,
    v285,
    v300,
    v315,
    v330,
    v345);
  v427 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v367,
    (__int64)v351,
    2,
    v99,
    v100,
    v101,
    v130,
    v148,
    v166,
    v181,
    v196,
    v211,
    v226,
    v241,
    v256,
    v271,
    v286,
    v301,
    v316,
    v331,
    v346);
  v435 = 0;
  v428 = 0;
  *(_QWORD *)&v429 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v428 = 3;
  v102 = operator new(0x20u);
  *(_QWORD *)v102 = v102 + 16;
  strcpy((char *)(v102 + 16), "required");
  *(_QWORD *)(v102 + 8) = 8;
  v381 = 0;
  *(_QWORD *)&v382 = 0;
  v359 = (void **)&v382;
  v429 = (unsigned __int64)v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v381 = 3;
  v103 = operator new(0x20u);
  *(_QWORD *)v103 = v103 + 16;
  strcpy((char *)(v103 + 16), "address");
  *(_QWORD *)(v103 + 8) = 7;
  v382 = (unsigned __int64)v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v104 = _mm_load_si128(&v378);
  v431 = 0;
  v430 = v104;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v368,
    (__int64)v352,
    2,
    v105,
    v106,
    v107,
    v131,
    v149,
    v167,
    v182,
    v197,
    v212,
    v227,
    v242,
    v257,
    v272,
    v287,
    v302,
    v317,
    v332,
    v347);
  v437 = 0;
  LOBYTE(v379) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v362,
    (__int64)&v432,
    3,
    v108,
    v109,
    v110,
    v132,
    v150,
    v168,
    v183,
    v198,
    v213,
    v228,
    v243,
    v258,
    v273,
    v288,
    v303,
    v318,
    v333,
    v348);
  LOBYTE(v87) = v445;
  v111 = (void **)&v438;
  v445 = v379;
  v112 = v446;
  LOBYTE(v379) = v87;
  v446 = v380;
  v380 = v112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v111 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v111 != &v432 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v113 = _mm_load_si128(&v349);
  v433 = 0;
  v432 = ida_mcp::tools::instructions::`anonymous namespace'::handle_get_operand_info;
  v434 = v113;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v434.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v434.m128i_i64[0])(&v432, &v432, 3);
  if ( v451 && v450 && v448 != (ida_mcp::tools::instructions *)v449 )
    operator delete(v448, v449[0] + 1LL);
  if ( v447 )
  {
    v447 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v442 != v444 )
    operator delete(v442, v444[0] + 1LL);
  if ( v439 != v441 )
    operator delete(v439, v441[0] + 1LL);
  return v452 - __readfsqword(0x28u);
}

