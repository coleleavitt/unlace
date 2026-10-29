unsigned __int64 __fastcall ida_mcp::tools::decompile_all::register_tools(
        ida_mcp::tools::decompile_all *this,
        ida_mcp::mcp::McpServer *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rbp
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // rbp
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // rbp
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 *v67; // rbp
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 *v81; // rbp
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 *v86; // rbp
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 *v91; // rbp
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 *v99; // r12
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 *v104; // r14
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  char *v127; // rbp
  char v128; // si
  __int64 v129; // rax
  __m128i si128; // xmm2
  int v132; // [rsp+0h] [rbp-4D8h]
  int v133; // [rsp+0h] [rbp-4D8h]
  int v134; // [rsp+0h] [rbp-4D8h]
  int v135; // [rsp+0h] [rbp-4D8h]
  int v136; // [rsp+0h] [rbp-4D8h]
  int v137; // [rsp+0h] [rbp-4D8h]
  int v138; // [rsp+0h] [rbp-4D8h]
  int v139; // [rsp+0h] [rbp-4D8h]
  int v140; // [rsp+0h] [rbp-4D8h]
  int v141; // [rsp+0h] [rbp-4D8h]
  int v142; // [rsp+0h] [rbp-4D8h]
  int v143; // [rsp+0h] [rbp-4D8h]
  int v144; // [rsp+0h] [rbp-4D8h]
  int v145; // [rsp+0h] [rbp-4D8h]
  int v146; // [rsp+0h] [rbp-4D8h]
  int v147; // [rsp+0h] [rbp-4D8h]
  int v148; // [rsp+0h] [rbp-4D8h]
  int v149; // [rsp+0h] [rbp-4D8h]
  int v150; // [rsp+0h] [rbp-4D8h]
  int v151; // [rsp+0h] [rbp-4D8h]
  int v152; // [rsp+0h] [rbp-4D8h]
  int v153; // [rsp+0h] [rbp-4D8h]
  int v154; // [rsp+0h] [rbp-4D8h]
  int v155; // [rsp+0h] [rbp-4D8h]
  int v156; // [rsp+0h] [rbp-4D8h]
  int v157; // [rsp+0h] [rbp-4D8h]
  int v158; // [rsp+0h] [rbp-4D8h]
  int v159; // [rsp+0h] [rbp-4D8h]
  int v160; // [rsp+0h] [rbp-4D8h]
  int v161; // [rsp+0h] [rbp-4D8h]
  int v162; // [rsp+0h] [rbp-4D8h]
  int v163; // [rsp+8h] [rbp-4D0h]
  int v164; // [rsp+8h] [rbp-4D0h]
  __int64 v165; // [rsp+8h] [rbp-4D0h]
  int v166; // [rsp+8h] [rbp-4D0h]
  int v167; // [rsp+8h] [rbp-4D0h]
  int v168; // [rsp+8h] [rbp-4D0h]
  int v169; // [rsp+8h] [rbp-4D0h]
  __int64 v170; // [rsp+8h] [rbp-4D0h]
  int v171; // [rsp+8h] [rbp-4D0h]
  int v172; // [rsp+8h] [rbp-4D0h]
  int v173; // [rsp+8h] [rbp-4D0h]
  __int64 v174; // [rsp+8h] [rbp-4D0h]
  __int64 v175; // [rsp+8h] [rbp-4D0h]
  __int64 v176; // [rsp+8h] [rbp-4D0h]
  int v177; // [rsp+8h] [rbp-4D0h]
  int v178; // [rsp+8h] [rbp-4D0h]
  __int64 v179; // [rsp+8h] [rbp-4D0h]
  __int64 v180; // [rsp+8h] [rbp-4D0h]
  int v181; // [rsp+8h] [rbp-4D0h]
  int v182; // [rsp+8h] [rbp-4D0h]
  int v183; // [rsp+8h] [rbp-4D0h]
  __int64 v184; // [rsp+8h] [rbp-4D0h]
  int v185; // [rsp+8h] [rbp-4D0h]
  int v186; // [rsp+8h] [rbp-4D0h]
  __int64 v187; // [rsp+8h] [rbp-4D0h]
  __int64 v188; // [rsp+8h] [rbp-4D0h]
  __int64 v189; // [rsp+8h] [rbp-4D0h]
  __int64 v190; // [rsp+8h] [rbp-4D0h]
  __int64 v191; // [rsp+8h] [rbp-4D0h]
  __int64 v192; // [rsp+8h] [rbp-4D0h]
  __int64 v193; // [rsp+10h] [rbp-4C8h]
  __int64 v194; // [rsp+10h] [rbp-4C8h]
  __int64 v195; // [rsp+10h] [rbp-4C8h]
  __int64 v196; // [rsp+10h] [rbp-4C8h]
  __int64 v197; // [rsp+10h] [rbp-4C8h]
  __int64 v198; // [rsp+10h] [rbp-4C8h]
  int v199; // [rsp+10h] [rbp-4C8h]
  __int64 v200; // [rsp+10h] [rbp-4C8h]
  __int64 v201; // [rsp+10h] [rbp-4C8h]
  __int64 v202; // [rsp+10h] [rbp-4C8h]
  int v203; // [rsp+10h] [rbp-4C8h]
  int v204; // [rsp+10h] [rbp-4C8h]
  int v205; // [rsp+10h] [rbp-4C8h]
  __int64 v206; // [rsp+10h] [rbp-4C8h]
  __int64 v207; // [rsp+10h] [rbp-4C8h]
  int v208; // [rsp+10h] [rbp-4C8h]
  int v209; // [rsp+10h] [rbp-4C8h]
  int v210; // [rsp+10h] [rbp-4C8h]
  __int64 v211; // [rsp+10h] [rbp-4C8h]
  __int64 v212; // [rsp+10h] [rbp-4C8h]
  __int64 v213; // [rsp+10h] [rbp-4C8h]
  int v214; // [rsp+10h] [rbp-4C8h]
  __int64 v215; // [rsp+10h] [rbp-4C8h]
  __int64 v216; // [rsp+10h] [rbp-4C8h]
  int v217; // [rsp+10h] [rbp-4C8h]
  int v218; // [rsp+10h] [rbp-4C8h]
  int v219; // [rsp+10h] [rbp-4C8h]
  int v220; // [rsp+10h] [rbp-4C8h]
  int v221; // [rsp+10h] [rbp-4C8h]
  __int64 v222; // [rsp+10h] [rbp-4C8h]
  int v223; // [rsp+18h] [rbp-4C0h]
  int v224; // [rsp+18h] [rbp-4C0h]
  int v225; // [rsp+18h] [rbp-4C0h]
  int v226; // [rsp+18h] [rbp-4C0h]
  int v227; // [rsp+18h] [rbp-4C0h]
  int v228; // [rsp+18h] [rbp-4C0h]
  int v229; // [rsp+18h] [rbp-4C0h]
  int v230; // [rsp+18h] [rbp-4C0h]
  int v231; // [rsp+18h] [rbp-4C0h]
  int v232; // [rsp+18h] [rbp-4C0h]
  int v233; // [rsp+18h] [rbp-4C0h]
  int v234; // [rsp+18h] [rbp-4C0h]
  int v235; // [rsp+18h] [rbp-4C0h]
  int v236; // [rsp+18h] [rbp-4C0h]
  int v237; // [rsp+20h] [rbp-4B8h]
  int v238; // [rsp+20h] [rbp-4B8h]
  int v239; // [rsp+20h] [rbp-4B8h]
  int v240; // [rsp+20h] [rbp-4B8h]
  int v241; // [rsp+20h] [rbp-4B8h]
  int v242; // [rsp+20h] [rbp-4B8h]
  int v243; // [rsp+20h] [rbp-4B8h]
  int v244; // [rsp+20h] [rbp-4B8h]
  int v245; // [rsp+20h] [rbp-4B8h]
  int v246; // [rsp+20h] [rbp-4B8h]
  int v247; // [rsp+20h] [rbp-4B8h]
  int v248; // [rsp+20h] [rbp-4B8h]
  int v249; // [rsp+20h] [rbp-4B8h]
  int v250; // [rsp+20h] [rbp-4B8h]
  int v251; // [rsp+28h] [rbp-4B0h]
  int v252; // [rsp+28h] [rbp-4B0h]
  int v253; // [rsp+28h] [rbp-4B0h]
  int v254; // [rsp+28h] [rbp-4B0h]
  int v255; // [rsp+28h] [rbp-4B0h]
  int v256; // [rsp+28h] [rbp-4B0h]
  int v257; // [rsp+28h] [rbp-4B0h]
  int v258; // [rsp+28h] [rbp-4B0h]
  int v259; // [rsp+28h] [rbp-4B0h]
  int v260; // [rsp+28h] [rbp-4B0h]
  int v261; // [rsp+28h] [rbp-4B0h]
  int v262; // [rsp+28h] [rbp-4B0h]
  int v263; // [rsp+28h] [rbp-4B0h]
  int v264; // [rsp+28h] [rbp-4B0h]
  int v265; // [rsp+30h] [rbp-4A8h]
  int v266; // [rsp+30h] [rbp-4A8h]
  int v267; // [rsp+30h] [rbp-4A8h]
  int v268; // [rsp+30h] [rbp-4A8h]
  int v269; // [rsp+30h] [rbp-4A8h]
  int v270; // [rsp+30h] [rbp-4A8h]
  int v271; // [rsp+30h] [rbp-4A8h]
  int v272; // [rsp+30h] [rbp-4A8h]
  int v273; // [rsp+30h] [rbp-4A8h]
  int v274; // [rsp+30h] [rbp-4A8h]
  int v275; // [rsp+30h] [rbp-4A8h]
  int v276; // [rsp+30h] [rbp-4A8h]
  int v277; // [rsp+30h] [rbp-4A8h]
  int v278; // [rsp+30h] [rbp-4A8h]
  __int64 v279; // [rsp+38h] [rbp-4A0h]
  __int64 v280; // [rsp+38h] [rbp-4A0h]
  __int64 v281; // [rsp+38h] [rbp-4A0h]
  __int64 v282; // [rsp+38h] [rbp-4A0h]
  __int64 v283; // [rsp+38h] [rbp-4A0h]
  __int64 v284; // [rsp+38h] [rbp-4A0h]
  __int64 v285; // [rsp+38h] [rbp-4A0h]
  __int64 v286; // [rsp+38h] [rbp-4A0h]
  __int64 v287; // [rsp+38h] [rbp-4A0h]
  __int64 v288; // [rsp+38h] [rbp-4A0h]
  __int64 v289; // [rsp+38h] [rbp-4A0h]
  __int64 v290; // [rsp+38h] [rbp-4A0h]
  __int64 v291; // [rsp+38h] [rbp-4A0h]
  __int64 v292; // [rsp+38h] [rbp-4A0h]
  int v293; // [rsp+40h] [rbp-498h]
  int v294; // [rsp+40h] [rbp-498h]
  int v295; // [rsp+40h] [rbp-498h]
  int v296; // [rsp+40h] [rbp-498h]
  int v297; // [rsp+40h] [rbp-498h]
  int v298; // [rsp+40h] [rbp-498h]
  int v299; // [rsp+40h] [rbp-498h]
  int v300; // [rsp+40h] [rbp-498h]
  int v301; // [rsp+40h] [rbp-498h]
  int v302; // [rsp+40h] [rbp-498h]
  int v303; // [rsp+40h] [rbp-498h]
  int v304; // [rsp+40h] [rbp-498h]
  int v305; // [rsp+40h] [rbp-498h]
  int v306; // [rsp+40h] [rbp-498h]
  int v307; // [rsp+48h] [rbp-490h]
  int v308; // [rsp+48h] [rbp-490h]
  int v309; // [rsp+48h] [rbp-490h]
  int v310; // [rsp+48h] [rbp-490h]
  int v311; // [rsp+48h] [rbp-490h]
  int v312; // [rsp+48h] [rbp-490h]
  int v313; // [rsp+48h] [rbp-490h]
  int v314; // [rsp+48h] [rbp-490h]
  int v315; // [rsp+48h] [rbp-490h]
  int v316; // [rsp+48h] [rbp-490h]
  int v317; // [rsp+48h] [rbp-490h]
  int v318; // [rsp+48h] [rbp-490h]
  int v319; // [rsp+48h] [rbp-490h]
  int v320; // [rsp+48h] [rbp-490h]
  int v321; // [rsp+50h] [rbp-488h]
  int v322; // [rsp+50h] [rbp-488h]
  int v323; // [rsp+50h] [rbp-488h]
  int v324; // [rsp+50h] [rbp-488h]
  int v325; // [rsp+50h] [rbp-488h]
  int v326; // [rsp+50h] [rbp-488h]
  int v327; // [rsp+50h] [rbp-488h]
  int v328; // [rsp+50h] [rbp-488h]
  int v329; // [rsp+50h] [rbp-488h]
  int v330; // [rsp+50h] [rbp-488h]
  int v331; // [rsp+50h] [rbp-488h]
  int v332; // [rsp+50h] [rbp-488h]
  int v333; // [rsp+50h] [rbp-488h]
  int v334; // [rsp+50h] [rbp-488h]
  char v335; // [rsp+58h] [rbp-480h]
  char v336; // [rsp+58h] [rbp-480h]
  char v337; // [rsp+58h] [rbp-480h]
  char v338; // [rsp+58h] [rbp-480h]
  char v339; // [rsp+58h] [rbp-480h]
  char v340; // [rsp+58h] [rbp-480h]
  char v341; // [rsp+58h] [rbp-480h]
  char v342; // [rsp+58h] [rbp-480h]
  char v343; // [rsp+58h] [rbp-480h]
  char v344; // [rsp+58h] [rbp-480h]
  char v345; // [rsp+58h] [rbp-480h]
  char v346; // [rsp+58h] [rbp-480h]
  char v347; // [rsp+58h] [rbp-480h]
  char v348; // [rsp+58h] [rbp-480h]
  __int64 v349; // [rsp+60h] [rbp-478h]
  __int64 v350; // [rsp+60h] [rbp-478h]
  __int64 v351; // [rsp+60h] [rbp-478h]
  __int64 v352; // [rsp+60h] [rbp-478h]
  __int64 v353; // [rsp+60h] [rbp-478h]
  __int64 v354; // [rsp+60h] [rbp-478h]
  __int64 v355; // [rsp+60h] [rbp-478h]
  __int64 v356; // [rsp+60h] [rbp-478h]
  __int64 v357; // [rsp+60h] [rbp-478h]
  __int64 v358; // [rsp+60h] [rbp-478h]
  __int64 v359; // [rsp+60h] [rbp-478h]
  __int64 v360; // [rsp+60h] [rbp-478h]
  __int64 v361; // [rsp+60h] [rbp-478h]
  __int64 v362; // [rsp+60h] [rbp-478h]
  int v363; // [rsp+68h] [rbp-470h]
  int v364; // [rsp+68h] [rbp-470h]
  int v365; // [rsp+68h] [rbp-470h]
  int v366; // [rsp+68h] [rbp-470h]
  int v367; // [rsp+68h] [rbp-470h]
  int v368; // [rsp+68h] [rbp-470h]
  int v369; // [rsp+68h] [rbp-470h]
  int v370; // [rsp+68h] [rbp-470h]
  int v371; // [rsp+68h] [rbp-470h]
  int v372; // [rsp+68h] [rbp-470h]
  int v373; // [rsp+68h] [rbp-470h]
  int v374; // [rsp+68h] [rbp-470h]
  int v375; // [rsp+68h] [rbp-470h]
  int v376; // [rsp+68h] [rbp-470h]
  __int64 v377; // [rsp+70h] [rbp-468h]
  __int64 v378; // [rsp+70h] [rbp-468h]
  __int64 v379; // [rsp+70h] [rbp-468h]
  __int64 v380; // [rsp+70h] [rbp-468h]
  __int64 v381; // [rsp+70h] [rbp-468h]
  __int64 v382; // [rsp+70h] [rbp-468h]
  __int64 v383; // [rsp+70h] [rbp-468h]
  __int64 v384; // [rsp+70h] [rbp-468h]
  __int64 v385; // [rsp+70h] [rbp-468h]
  __int64 v386; // [rsp+70h] [rbp-468h]
  __int64 v387; // [rsp+70h] [rbp-468h]
  __int64 v388; // [rsp+70h] [rbp-468h]
  __int64 v389; // [rsp+70h] [rbp-468h]
  __int64 v390; // [rsp+70h] [rbp-468h]
  __m128 v391; // [rsp+90h] [rbp-448h] BYREF
  void **v392; // [rsp+A0h] [rbp-438h]
  ida_mcp::tools::decompile_all *v393; // [rsp+A8h] [rbp-430h]
  char *v394; // [rsp+B0h] [rbp-428h]
  char *v395; // [rsp+B8h] [rbp-420h]
  char *v396; // [rsp+C0h] [rbp-418h]
  char *v397; // [rsp+C8h] [rbp-410h]
  char *v398; // [rsp+D0h] [rbp-408h]
  char *v399; // [rsp+D8h] [rbp-400h]
  char *v400; // [rsp+E0h] [rbp-3F8h]
  char *v401; // [rsp+E8h] [rbp-3F0h]
  char *v402; // [rsp+F0h] [rbp-3E8h]
  __int64 v403; // [rsp+100h] [rbp-3D8h] BYREF
  __int64 v404; // [rsp+108h] [rbp-3D0h]
  _QWORD v405[4]; // [rsp+110h] [rbp-3C8h] BYREF
  char v406[8]; // [rsp+130h] [rbp-3A8h] BYREF
  __int128 v407; // [rsp+138h] [rbp-3A0h] BYREF
  char v408; // [rsp+148h] [rbp-390h]
  __int128 v409; // [rsp+150h] [rbp-388h] BYREF
  char v410[8]; // [rsp+160h] [rbp-378h] BYREF
  __int128 v411; // [rsp+168h] [rbp-370h] BYREF
  char v412; // [rsp+178h] [rbp-360h]
  __int128 v413; // [rsp+180h] [rbp-358h]
  char v414[8]; // [rsp+190h] [rbp-348h] BYREF
  __int128 v415; // [rsp+198h] [rbp-340h]
  char v416; // [rsp+1A8h] [rbp-330h]
  __int128 v417; // [rsp+1B0h] [rbp-328h]
  char v418[8]; // [rsp+1C0h] [rbp-318h] BYREF
  __int128 v419; // [rsp+1C8h] [rbp-310h] BYREF
  _QWORD v420[3]; // [rsp+1D8h] [rbp-300h] BYREF
  char v421[8]; // [rsp+1F0h] [rbp-2E8h] BYREF
  __int128 v422; // [rsp+1F8h] [rbp-2E0h] BYREF
  char v423; // [rsp+208h] [rbp-2D0h]
  __int128 v424; // [rsp+210h] [rbp-2C8h] BYREF
  char v425[8]; // [rsp+220h] [rbp-2B8h] BYREF
  __int128 v426; // [rsp+228h] [rbp-2B0h] BYREF
  _QWORD v427[3]; // [rsp+238h] [rbp-2A0h] BYREF
  char v428[8]; // [rsp+250h] [rbp-288h] BYREF
  __int128 v429; // [rsp+258h] [rbp-280h] BYREF
  char v430; // [rsp+268h] [rbp-270h]
  __int128 v431; // [rsp+270h] [rbp-268h] BYREF
  char v432[8]; // [rsp+280h] [rbp-258h] BYREF
  __int128 v433; // [rsp+288h] [rbp-250h] BYREF
  char v434; // [rsp+298h] [rbp-240h]
  __int128 v435; // [rsp+2A0h] [rbp-238h]
  _QWORD v436[3]; // [rsp+2B0h] [rbp-228h] BYREF
  _QWORD v437[3]; // [rsp+2C8h] [rbp-210h] BYREF
  char v438[8]; // [rsp+2E0h] [rbp-1F8h] BYREF
  __int128 v439; // [rsp+2E8h] [rbp-1F0h] BYREF
  _QWORD v440[3]; // [rsp+2F8h] [rbp-1E0h] BYREF
  _QWORD v441[3]; // [rsp+310h] [rbp-1C8h] BYREF
  _QWORD v442[3]; // [rsp+328h] [rbp-1B0h] BYREF
  char v443[8]; // [rsp+340h] [rbp-198h] BYREF
  __int128 v444; // [rsp+348h] [rbp-190h] BYREF
  _QWORD v445[3]; // [rsp+358h] [rbp-180h] BYREF
  _QWORD v446[3]; // [rsp+370h] [rbp-168h] BYREF
  _QWORD v447[3]; // [rsp+388h] [rbp-150h] BYREF
  _QWORD v448[2]; // [rsp+3A0h] [rbp-138h] BYREF
  __m128i v449; // [rsp+3B0h] [rbp-128h] BYREF
  __int64 v450; // [rsp+3C8h] [rbp-110h]
  _QWORD v451[3]; // [rsp+3D0h] [rbp-108h] BYREF
  char v452; // [rsp+3E8h] [rbp-F0h] BYREF
  void *v453[2]; // [rsp+3F0h] [rbp-E8h] BYREF
  _QWORD v454[2]; // [rsp+400h] [rbp-D8h] BYREF
  void *v455; // [rsp+410h] [rbp-C8h]
  __int64 v456; // [rsp+418h] [rbp-C0h]
  _QWORD v457[2]; // [rsp+420h] [rbp-B8h] BYREF
  char v458; // [rsp+430h] [rbp-A8h]
  __int64 v459; // [rsp+438h] [rbp-A0h]
  char v460; // [rsp+450h] [rbp-88h]
  char v461; // [rsp+478h] [rbp-60h]
  char v462; // [rsp+488h] [rbp-50h]
  unsigned __int64 v463; // [rsp+498h] [rbp-40h]

  v393 = this;
  v463 = __readfsqword(0x28u);
  v453[0] = v454;
  v453[1] = nullptr;
  LOBYTE(v454[0]) = 0;
  v455 = v457;
  v456 = 0;
  LOBYTE(v457[0]) = 0;
  v392 = v453;
  v458 = 0;
  v459 = 0;
  v460 = 0;
  v462 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  *(_QWORD *)&v407 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v406[0] = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "type", v3, v4, v5, v6, v132, v163, v193);
  v408 = 0;
  *(_QWORD *)&v409 = 0;
  v407 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v408 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "object", v8, v9, v10, v11, v133, v164, v194);
  v400 = v406;
  v409 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v446,
    (__int64)v406,
    2,
    v12,
    v13,
    v14,
    v134,
    v165,
    (int)v446,
    v223,
    v237,
    v251,
    v265,
    v279,
    v293,
    v307,
    v321,
    v335,
    (__int64)&v407,
    (int)&v409,
    v377);
  v446[2] = 0;
  v443[0] = 0;
  *(_QWORD *)&v444 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v443[0] = 3;
  v15 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v15, "properties", v16, v17, v18, v19, v135, v166, v195);
  v425[0] = 0;
  *(_QWORD *)&v426 = 0;
  v444 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v425[0] = 3;
  v20 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v20, "addresses", v21, v22, v23, v24, v136, v167, v196);
  v410[0] = 0;
  *(_QWORD *)&v411 = 0;
  v426 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v410[0] = 3;
  v25 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v25, "type", v26, v27, v28, v29, v137, v168, v197);
  v412 = 0;
  *(_QWORD *)&v413 = 0;
  v411 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v412 = 3;
  v30 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v30, "array", v31, v32, v33, v34, v138, v169, v198);
  v401 = v410;
  v413 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v448,
    (__int64)v410,
    2,
    v35,
    v36,
    v37,
    v139,
    v170,
    v199,
    v224,
    v238,
    v252,
    (int)&v426,
    v280,
    v294,
    v308,
    v322,
    (char)&v444,
    v349,
    v363,
    (__int64)&v411);
  v449.m128i_i64[0] = 0;
  v418[0] = 0;
  *(_QWORD *)&v419 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v418[0] = 3;
  v38 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v38, "items", v39, v40, v41, v42, v140, v171, v200);
  v414[0] = 0;
  *(_QWORD *)&v415 = 0;
  v419 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v414[0] = 3;
  v43 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v43, "type", v44, v45, v46, v47, v141, v172, v201);
  v416 = 0;
  *(_QWORD *)&v417 = 0;
  v415 = (unsigned __int64)v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v416 = 3;
  v48 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v48, "string", v49, v50, v51, v52, v142, v173, v202);
  v402 = v414;
  v417 = (unsigned __int64)v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v405,
    (__int64)v414,
    2,
    v53,
    v54,
    v55,
    v143,
    v174,
    v203,
    (int)&v419,
    v239,
    v253,
    v266,
    v281,
    v295,
    v309,
    v323,
    v336,
    v350,
    v364,
    v378);
  v405[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v420,
    (__int64)v405,
    1,
    v56,
    v57,
    v58,
    v144,
    v175,
    v204,
    v225,
    v240,
    v254,
    v267,
    v282,
    v296,
    v310,
    v324,
    v337,
    v351,
    v365,
    v379);
  v420[2] = 0;
  v396 = v418;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v449.m128i_i64[1],
    (__int64)v418,
    2,
    v59,
    v60,
    v61,
    v145,
    v176,
    v205,
    v226,
    v241,
    v255,
    v268,
    v283,
    v297,
    v311,
    v325,
    v338,
    v352,
    v366,
    v380);
  v450 = 0;
  v421[0] = 0;
  *(_QWORD *)&v422 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v421[0] = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v62, "description", v63, v64, v65, v66, v146, v177, v206);
  v423 = 0;
  *(_QWORD *)&v424 = 0;
  v422 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v423 = 3;
  v67 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v67,
    "Optional list of hex addresses to decompile. If omitted, decompiles all non-lib functions.",
    v68,
    v69,
    v70,
    v71,
    v147,
    v178,
    v207);
  v397 = v421;
  v424 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v451,
    (__int64)v421,
    2,
    v72,
    v73,
    v74,
    v148,
    v179,
    v208,
    v227,
    (int)&v422,
    (int)&v424,
    v269,
    v284,
    v298,
    v312,
    v326,
    v339,
    v353,
    v367,
    v381);
  v451[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v427,
    (__int64)v448,
    3,
    v75,
    v76,
    v77,
    v149,
    v180,
    v209,
    v228,
    v242,
    v256,
    v270,
    v285,
    v299,
    v313,
    v327,
    v340,
    v354,
    v368,
    v382);
  v427[2] = 0;
  v395 = v425;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v441,
    (__int64)v425,
    2,
    v78,
    v79,
    v80,
    v150,
    (__int64)v441,
    v210,
    v229,
    v243,
    v257,
    v271,
    v286,
    v300,
    v314,
    v328,
    v341,
    v355,
    v369,
    v383);
  v441[2] = 0;
  v438[0] = 0;
  *(_QWORD *)&v439 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v438[0] = 3;
  v81 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v81, "max_size", v82, v83, v84, v85, v151, v181, v211);
  v428[0] = 0;
  *(_QWORD *)&v429 = 0;
  v439 = (unsigned __int64)v81;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v428[0] = 3;
  v86 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v86, "type", v87, v88, v89, v90, v152, v182, v212);
  v430 = 0;
  *(_QWORD *)&v431 = 0;
  v429 = (unsigned __int64)v86;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v430 = 3;
  v91 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v91, "integer", v92, v93, v94, v95, v153, v183, v213);
  v398 = v428;
  v431 = (unsigned __int64)v91;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v436,
    (__int64)v428,
    2,
    v96,
    v97,
    v98,
    v154,
    v184,
    v214,
    v230,
    v244,
    v258,
    v272,
    (__int64)&v429,
    (int)&v431,
    v315,
    (int)&v439,
    v342,
    v356,
    v370,
    v384);
  v436[2] = 0;
  v432[0] = 0;
  *(_QWORD *)&v433 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v432[0] = 3;
  v99 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v99, "description", v100, v101, v102, v103, v155, v185, v215);
  v434 = 0;
  v433 = (unsigned __int64)v99;
  *(_QWORD *)&v435 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v434 = 3;
  v104 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v104,
    "Max output size in bytes (default 4MB). Output is truncated if exceeded.",
    v105,
    v106,
    v107,
    v108,
    v156,
    v186,
    v216);
  v399 = v432;
  v391 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  v435 = (unsigned __int64)v104;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v437,
    (__int64)v432,
    2,
    v109,
    v110,
    v111,
    v157,
    v187,
    v217,
    v231,
    v245,
    v259,
    v273,
    v287,
    v301,
    (int)&v433,
    v329,
    v343,
    v357,
    v371,
    v385);
  v437[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v440,
    (__int64)v436,
    2,
    v112,
    v113,
    v114,
    v158,
    v188,
    v218,
    v232,
    v246,
    v260,
    v274,
    v288,
    v302,
    v316,
    v330,
    v344,
    v358,
    v372,
    v386);
  v440[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v442,
    (__int64)v438,
    2,
    v115,
    v116,
    v117,
    v159,
    v189,
    v219,
    v233,
    v247,
    v261,
    v275,
    v289,
    v303,
    v317,
    v331,
    v345,
    v359,
    v373,
    v387);
  v442[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v445,
    v190,
    2,
    v118,
    v119,
    v120,
    v160,
    v190,
    v220,
    v234,
    v248,
    v262,
    v276,
    v290,
    v304,
    v318,
    v332,
    v346,
    v360,
    v374,
    v388);
  v445[2] = 0;
  v394 = v443;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v447,
    (__int64)v443,
    2,
    v121,
    v122,
    v123,
    v161,
    v191,
    v221,
    v235,
    v249,
    v263,
    v277,
    v291,
    v305,
    v319,
    v333,
    v347,
    v361,
    v375,
    v389);
  v447[2] = 0;
  LOBYTE(v403) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v403,
    v222,
    2,
    v124,
    v125,
    v126,
    v162,
    v192,
    v222,
    v236,
    v250,
    v264,
    v278,
    v292,
    v306,
    v320,
    v334,
    v348,
    v362,
    v376,
    v390);
  v127 = &v452;
  v128 = v458;
  v458 = v403;
  v129 = v459;
  LOBYTE(v403) = v128;
  v459 = v404;
  v404 = v129;
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
  do
  {
    v127 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v127 != (char *)v448 );
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
  si128 = _mm_load_si128((const __m128i *)&v391);
  v448[1] = 0;
  v448[0] = ida_mcp::tools::decompile_all::`anonymous namespace'::batch_decompile;
  v449 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v449.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v449.m128i_i64[0])(v448, v448, 3);
  if ( v462 )
  {
    v462 = 0;
    if ( v461 )
    {
      v461 = 0;
      std::string::_M_dispose();
    }
  }
  if ( v460 )
  {
    v460 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v455 != v457 )
    operator delete(v455, v457[0] + 1LL);
  if ( v453[0] != v454 )
    operator delete(v453[0], v454[0] + 1LL);
  return v463 - __readfsqword(0x28u);
}

