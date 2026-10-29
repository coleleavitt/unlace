unsigned __int64 __fastcall ida_mcp::tools::hexrays::register_tools(
        ida_mcp::tools::hexrays *this,
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
  __int64 *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __m128 v39; // xmm1
  __m128i v40; // xmm0
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  char v44; // si
  __int64 v45; // rdx
  __int128 *v46; // r13
  __m128i v47; // xmm2
  __int64 *v48; // r13
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // r13
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 *v58; // r13
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 *v63; // r13
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 *v68; // r13
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 *v73; // r13
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 *v79; // r13
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  __int64 *v85; // r13
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 *v90; // r13
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  __int64 *v96; // r13
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 *v101; // r13
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 *v106; // r13
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 *v113; // r13
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rax
  __int64 *v119; // r13
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 *v126; // r13
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  void **v146; // r13
  char v147; // si
  __int64 v148; // rax
  __m128i v149; // xmm3
  __int64 *v150; // r13
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 *v155; // r13
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 *v163; // r13
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rax
  __int64 *v169; // r13
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 *v174; // r13
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rax
  __int64 *v183; // r13
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 *v203; // r13
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 v208; // rax
  __m128i v209; // xmm0
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // r9
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  char v216; // si
  __int64 v217; // rax
  __int128 *v218; // r13
  int v220; // [rsp+0h] [rbp-6F8h]
  int v221; // [rsp+0h] [rbp-6F8h]
  int v222; // [rsp+0h] [rbp-6F8h]
  int v223; // [rsp+0h] [rbp-6F8h]
  int v224; // [rsp+0h] [rbp-6F8h]
  int v225; // [rsp+0h] [rbp-6F8h]
  int v226; // [rsp+0h] [rbp-6F8h]
  int v227; // [rsp+0h] [rbp-6F8h]
  int v228; // [rsp+0h] [rbp-6F8h]
  int v229; // [rsp+0h] [rbp-6F8h]
  int v230; // [rsp+0h] [rbp-6F8h]
  int v231; // [rsp+0h] [rbp-6F8h]
  int v232; // [rsp+0h] [rbp-6F8h]
  int v233; // [rsp+0h] [rbp-6F8h]
  int v234; // [rsp+0h] [rbp-6F8h]
  int v235; // [rsp+0h] [rbp-6F8h]
  int v236; // [rsp+0h] [rbp-6F8h]
  int v237; // [rsp+0h] [rbp-6F8h]
  int v238; // [rsp+0h] [rbp-6F8h]
  int v239; // [rsp+0h] [rbp-6F8h]
  int v240; // [rsp+0h] [rbp-6F8h]
  int v241; // [rsp+0h] [rbp-6F8h]
  int v242; // [rsp+0h] [rbp-6F8h]
  int v243; // [rsp+0h] [rbp-6F8h]
  int v244; // [rsp+0h] [rbp-6F8h]
  int v245; // [rsp+0h] [rbp-6F8h]
  int v246; // [rsp+0h] [rbp-6F8h]
  int v247; // [rsp+0h] [rbp-6F8h]
  int v248; // [rsp+0h] [rbp-6F8h]
  int v249; // [rsp+0h] [rbp-6F8h]
  int v250; // [rsp+0h] [rbp-6F8h]
  int v251; // [rsp+0h] [rbp-6F8h]
  int v252; // [rsp+0h] [rbp-6F8h]
  int v253; // [rsp+0h] [rbp-6F8h]
  int v254; // [rsp+0h] [rbp-6F8h]
  int v255; // [rsp+0h] [rbp-6F8h]
  int v256; // [rsp+0h] [rbp-6F8h]
  int v257; // [rsp+0h] [rbp-6F8h]
  int v258; // [rsp+0h] [rbp-6F8h]
  int v259; // [rsp+0h] [rbp-6F8h]
  int v260; // [rsp+0h] [rbp-6F8h]
  int v261; // [rsp+0h] [rbp-6F8h]
  int v262; // [rsp+0h] [rbp-6F8h]
  int v263; // [rsp+0h] [rbp-6F8h]
  int v264; // [rsp+8h] [rbp-6F0h]
  int v265; // [rsp+8h] [rbp-6F0h]
  int v266; // [rsp+8h] [rbp-6F0h]
  int v267; // [rsp+8h] [rbp-6F0h]
  int v268; // [rsp+8h] [rbp-6F0h]
  __int64 v269; // [rsp+8h] [rbp-6F0h]
  int v270; // [rsp+8h] [rbp-6F0h]
  int v271; // [rsp+8h] [rbp-6F0h]
  int v272; // [rsp+8h] [rbp-6F0h]
  int v273; // [rsp+8h] [rbp-6F0h]
  int v274; // [rsp+8h] [rbp-6F0h]
  int v275; // [rsp+8h] [rbp-6F0h]
  int v276; // [rsp+8h] [rbp-6F0h]
  int v277; // [rsp+8h] [rbp-6F0h]
  int v278; // [rsp+8h] [rbp-6F0h]
  int v279; // [rsp+8h] [rbp-6F0h]
  int v280; // [rsp+8h] [rbp-6F0h]
  int v281; // [rsp+8h] [rbp-6F0h]
  int v282; // [rsp+8h] [rbp-6F0h]
  int v283; // [rsp+8h] [rbp-6F0h]
  int v284; // [rsp+8h] [rbp-6F0h]
  int v285; // [rsp+8h] [rbp-6F0h]
  __int64 v286; // [rsp+8h] [rbp-6F0h]
  __int64 v287; // [rsp+8h] [rbp-6F0h]
  __int64 v288; // [rsp+8h] [rbp-6F0h]
  __int64 v289; // [rsp+8h] [rbp-6F0h]
  __int64 v290; // [rsp+8h] [rbp-6F0h]
  int v291; // [rsp+8h] [rbp-6F0h]
  int v292; // [rsp+8h] [rbp-6F0h]
  __int64 v293; // [rsp+8h] [rbp-6F0h]
  int v294; // [rsp+8h] [rbp-6F0h]
  int v295; // [rsp+8h] [rbp-6F0h]
  int v296; // [rsp+8h] [rbp-6F0h]
  __int64 v297; // [rsp+8h] [rbp-6F0h]
  int v298; // [rsp+8h] [rbp-6F0h]
  __int64 v299; // [rsp+8h] [rbp-6F0h]
  __int64 v300; // [rsp+8h] [rbp-6F0h]
  __int64 v301; // [rsp+8h] [rbp-6F0h]
  __int64 v302; // [rsp+8h] [rbp-6F0h]
  __int64 v303; // [rsp+8h] [rbp-6F0h]
  int v304; // [rsp+8h] [rbp-6F0h]
  __int64 v305; // [rsp+8h] [rbp-6F0h]
  __int64 v306; // [rsp+8h] [rbp-6F0h]
  __int64 v307; // [rsp+10h] [rbp-6E8h]
  __int64 v308; // [rsp+10h] [rbp-6E8h]
  __int64 v309; // [rsp+10h] [rbp-6E8h]
  __int64 v310; // [rsp+10h] [rbp-6E8h]
  int v311; // [rsp+10h] [rbp-6E8h]
  __int64 v312; // [rsp+10h] [rbp-6E8h]
  int v313; // [rsp+10h] [rbp-6E8h]
  __int64 v314; // [rsp+10h] [rbp-6E8h]
  __int64 v315; // [rsp+10h] [rbp-6E8h]
  __int64 v316; // [rsp+10h] [rbp-6E8h]
  __int64 v317; // [rsp+10h] [rbp-6E8h]
  __int64 v318; // [rsp+10h] [rbp-6E8h]
  __int64 v319; // [rsp+10h] [rbp-6E8h]
  __int64 v320; // [rsp+10h] [rbp-6E8h]
  __int64 v321; // [rsp+10h] [rbp-6E8h]
  __int64 v322; // [rsp+10h] [rbp-6E8h]
  __int64 v323; // [rsp+10h] [rbp-6E8h]
  __int64 v324; // [rsp+10h] [rbp-6E8h]
  __int64 v325; // [rsp+10h] [rbp-6E8h]
  __int64 v326; // [rsp+10h] [rbp-6E8h]
  __int64 v327; // [rsp+10h] [rbp-6E8h]
  __int64 v328; // [rsp+10h] [rbp-6E8h]
  int v329; // [rsp+10h] [rbp-6E8h]
  int v330; // [rsp+10h] [rbp-6E8h]
  int v331; // [rsp+10h] [rbp-6E8h]
  int v332; // [rsp+10h] [rbp-6E8h]
  int v333; // [rsp+10h] [rbp-6E8h]
  __int64 v334; // [rsp+10h] [rbp-6E8h]
  __int64 v335; // [rsp+10h] [rbp-6E8h]
  int v336; // [rsp+10h] [rbp-6E8h]
  __int64 v337; // [rsp+10h] [rbp-6E8h]
  __int64 v338; // [rsp+10h] [rbp-6E8h]
  __int64 v339; // [rsp+10h] [rbp-6E8h]
  int v340; // [rsp+10h] [rbp-6E8h]
  __int64 v341; // [rsp+10h] [rbp-6E8h]
  int v342; // [rsp+10h] [rbp-6E8h]
  int v343; // [rsp+10h] [rbp-6E8h]
  int v344; // [rsp+10h] [rbp-6E8h]
  int v345; // [rsp+10h] [rbp-6E8h]
  int v346; // [rsp+10h] [rbp-6E8h]
  __int64 v347; // [rsp+10h] [rbp-6E8h]
  int v348; // [rsp+10h] [rbp-6E8h]
  int v349; // [rsp+10h] [rbp-6E8h]
  int v350; // [rsp+18h] [rbp-6E0h]
  int v351; // [rsp+18h] [rbp-6E0h]
  int v352; // [rsp+18h] [rbp-6E0h]
  int v353; // [rsp+18h] [rbp-6E0h]
  int v354; // [rsp+18h] [rbp-6E0h]
  int v355; // [rsp+18h] [rbp-6E0h]
  int v356; // [rsp+18h] [rbp-6E0h]
  int v357; // [rsp+18h] [rbp-6E0h]
  int v358; // [rsp+18h] [rbp-6E0h]
  int v359; // [rsp+18h] [rbp-6E0h]
  int v360; // [rsp+18h] [rbp-6E0h]
  int v361; // [rsp+18h] [rbp-6E0h]
  int v362; // [rsp+18h] [rbp-6E0h]
  int v363; // [rsp+18h] [rbp-6E0h]
  int v364; // [rsp+18h] [rbp-6E0h]
  int v365; // [rsp+20h] [rbp-6D8h]
  int v366; // [rsp+20h] [rbp-6D8h]
  int v367; // [rsp+20h] [rbp-6D8h]
  int v368; // [rsp+20h] [rbp-6D8h]
  int v369; // [rsp+20h] [rbp-6D8h]
  int v370; // [rsp+20h] [rbp-6D8h]
  int v371; // [rsp+20h] [rbp-6D8h]
  int v372; // [rsp+20h] [rbp-6D8h]
  int v373; // [rsp+20h] [rbp-6D8h]
  int v374; // [rsp+20h] [rbp-6D8h]
  int v375; // [rsp+20h] [rbp-6D8h]
  int v376; // [rsp+20h] [rbp-6D8h]
  int v377; // [rsp+20h] [rbp-6D8h]
  int v378; // [rsp+20h] [rbp-6D8h]
  int v379; // [rsp+20h] [rbp-6D8h]
  int v380; // [rsp+28h] [rbp-6D0h]
  int v381; // [rsp+28h] [rbp-6D0h]
  int v382; // [rsp+28h] [rbp-6D0h]
  int v383; // [rsp+28h] [rbp-6D0h]
  int v384; // [rsp+28h] [rbp-6D0h]
  int v385; // [rsp+28h] [rbp-6D0h]
  int v386; // [rsp+28h] [rbp-6D0h]
  int v387; // [rsp+28h] [rbp-6D0h]
  int v388; // [rsp+28h] [rbp-6D0h]
  int v389; // [rsp+28h] [rbp-6D0h]
  int v390; // [rsp+28h] [rbp-6D0h]
  int v391; // [rsp+28h] [rbp-6D0h]
  int v392; // [rsp+28h] [rbp-6D0h]
  int v393; // [rsp+28h] [rbp-6D0h]
  int v394; // [rsp+28h] [rbp-6D0h]
  __int64 v395; // [rsp+30h] [rbp-6C8h]
  __int64 v396; // [rsp+30h] [rbp-6C8h]
  __int64 v397; // [rsp+30h] [rbp-6C8h]
  __int64 v398; // [rsp+30h] [rbp-6C8h]
  __int64 v399; // [rsp+30h] [rbp-6C8h]
  __int64 v400; // [rsp+30h] [rbp-6C8h]
  __int64 v401; // [rsp+30h] [rbp-6C8h]
  __int64 v402; // [rsp+30h] [rbp-6C8h]
  __int64 v403; // [rsp+30h] [rbp-6C8h]
  __int64 v404; // [rsp+30h] [rbp-6C8h]
  __int64 v405; // [rsp+30h] [rbp-6C8h]
  __int64 v406; // [rsp+30h] [rbp-6C8h]
  __int64 v407; // [rsp+30h] [rbp-6C8h]
  __int64 v408; // [rsp+30h] [rbp-6C8h]
  __int64 v409; // [rsp+30h] [rbp-6C8h]
  int v410; // [rsp+38h] [rbp-6C0h]
  int v411; // [rsp+38h] [rbp-6C0h]
  int v412; // [rsp+38h] [rbp-6C0h]
  int v413; // [rsp+38h] [rbp-6C0h]
  int v414; // [rsp+38h] [rbp-6C0h]
  int v415; // [rsp+38h] [rbp-6C0h]
  int v416; // [rsp+38h] [rbp-6C0h]
  int v417; // [rsp+38h] [rbp-6C0h]
  int v418; // [rsp+38h] [rbp-6C0h]
  int v419; // [rsp+38h] [rbp-6C0h]
  int v420; // [rsp+38h] [rbp-6C0h]
  int v421; // [rsp+38h] [rbp-6C0h]
  int v422; // [rsp+38h] [rbp-6C0h]
  int v423; // [rsp+38h] [rbp-6C0h]
  int v424; // [rsp+38h] [rbp-6C0h]
  int v425; // [rsp+40h] [rbp-6B8h]
  int v426; // [rsp+40h] [rbp-6B8h]
  int v427; // [rsp+40h] [rbp-6B8h]
  int v428; // [rsp+40h] [rbp-6B8h]
  int v429; // [rsp+40h] [rbp-6B8h]
  int v430; // [rsp+40h] [rbp-6B8h]
  int v431; // [rsp+40h] [rbp-6B8h]
  int v432; // [rsp+40h] [rbp-6B8h]
  int v433; // [rsp+40h] [rbp-6B8h]
  int v434; // [rsp+40h] [rbp-6B8h]
  int v435; // [rsp+40h] [rbp-6B8h]
  int v436; // [rsp+40h] [rbp-6B8h]
  int v437; // [rsp+40h] [rbp-6B8h]
  int v438; // [rsp+40h] [rbp-6B8h]
  int v439; // [rsp+40h] [rbp-6B8h]
  int v440; // [rsp+48h] [rbp-6B0h]
  __m128i *v441; // [rsp+48h] [rbp-6B0h]
  int v442; // [rsp+48h] [rbp-6B0h]
  int v443; // [rsp+48h] [rbp-6B0h]
  int v444; // [rsp+48h] [rbp-6B0h]
  int v445; // [rsp+48h] [rbp-6B0h]
  int v446; // [rsp+48h] [rbp-6B0h]
  int v447; // [rsp+48h] [rbp-6B0h]
  int v448; // [rsp+48h] [rbp-6B0h]
  int v449; // [rsp+48h] [rbp-6B0h]
  _QWORD *v450; // [rsp+48h] [rbp-6B0h]
  __int64 v451; // [rsp+48h] [rbp-6B0h]
  int v452; // [rsp+48h] [rbp-6B0h]
  int v453; // [rsp+48h] [rbp-6B0h]
  int v454; // [rsp+48h] [rbp-6B0h]
  int v455; // [rsp+50h] [rbp-6A8h]
  int v456; // [rsp+50h] [rbp-6A8h]
  int v457; // [rsp+50h] [rbp-6A8h]
  int v458; // [rsp+50h] [rbp-6A8h]
  int v459; // [rsp+50h] [rbp-6A8h]
  int v460; // [rsp+50h] [rbp-6A8h]
  int v461; // [rsp+50h] [rbp-6A8h]
  int v462; // [rsp+50h] [rbp-6A8h]
  int v463; // [rsp+50h] [rbp-6A8h]
  int v464; // [rsp+50h] [rbp-6A8h]
  int v465; // [rsp+50h] [rbp-6A8h]
  int v466; // [rsp+50h] [rbp-6A8h]
  int v467; // [rsp+50h] [rbp-6A8h]
  int v468; // [rsp+50h] [rbp-6A8h]
  int v469; // [rsp+50h] [rbp-6A8h]
  char v470; // [rsp+58h] [rbp-6A0h]
  char v471; // [rsp+58h] [rbp-6A0h]
  char v472; // [rsp+58h] [rbp-6A0h]
  char v473; // [rsp+58h] [rbp-6A0h]
  char v474; // [rsp+58h] [rbp-6A0h]
  char v475; // [rsp+58h] [rbp-6A0h]
  char v476; // [rsp+58h] [rbp-6A0h]
  char v477; // [rsp+58h] [rbp-6A0h]
  char v478; // [rsp+58h] [rbp-6A0h]
  char v479; // [rsp+58h] [rbp-6A0h]
  char v480; // [rsp+58h] [rbp-6A0h]
  char v481; // [rsp+58h] [rbp-6A0h]
  char v482; // [rsp+58h] [rbp-6A0h]
  char v483; // [rsp+58h] [rbp-6A0h]
  char v484; // [rsp+58h] [rbp-6A0h]
  __int64 v485; // [rsp+60h] [rbp-698h]
  _QWORD *v486; // [rsp+60h] [rbp-698h]
  __int64 v487; // [rsp+60h] [rbp-698h]
  __int64 v488; // [rsp+60h] [rbp-698h]
  __int64 v489; // [rsp+60h] [rbp-698h]
  __int64 v490; // [rsp+60h] [rbp-698h]
  __int64 v491; // [rsp+60h] [rbp-698h]
  __int64 v492; // [rsp+60h] [rbp-698h]
  __int64 v493; // [rsp+60h] [rbp-698h]
  __int64 v494; // [rsp+60h] [rbp-698h]
  __int64 v495; // [rsp+60h] [rbp-698h]
  __int64 v496; // [rsp+60h] [rbp-698h]
  __int64 v497; // [rsp+60h] [rbp-698h]
  __int64 v498; // [rsp+60h] [rbp-698h]
  __int64 v499; // [rsp+60h] [rbp-698h]
  int v500; // [rsp+68h] [rbp-690h]
  int v501; // [rsp+68h] [rbp-690h]
  int v502; // [rsp+68h] [rbp-690h]
  int v503; // [rsp+68h] [rbp-690h]
  int v504; // [rsp+68h] [rbp-690h]
  int v505; // [rsp+68h] [rbp-690h]
  int v506; // [rsp+68h] [rbp-690h]
  int v507; // [rsp+68h] [rbp-690h]
  int v508; // [rsp+68h] [rbp-690h]
  int v509; // [rsp+68h] [rbp-690h]
  int v510; // [rsp+68h] [rbp-690h]
  int v511; // [rsp+68h] [rbp-690h]
  int v512; // [rsp+68h] [rbp-690h]
  int v513; // [rsp+68h] [rbp-690h]
  int v514; // [rsp+68h] [rbp-690h]
  __int64 v515; // [rsp+70h] [rbp-688h]
  __int64 v516; // [rsp+70h] [rbp-688h]
  __int64 v517; // [rsp+70h] [rbp-688h]
  __int64 v518; // [rsp+70h] [rbp-688h]
  __int64 v519; // [rsp+70h] [rbp-688h]
  __int64 v520; // [rsp+70h] [rbp-688h]
  __int64 v521; // [rsp+70h] [rbp-688h]
  __int64 v522; // [rsp+70h] [rbp-688h]
  __int64 v523; // [rsp+70h] [rbp-688h]
  __int64 v524; // [rsp+70h] [rbp-688h]
  __int64 v525; // [rsp+70h] [rbp-688h]
  __int64 v526; // [rsp+70h] [rbp-688h]
  __int64 v527; // [rsp+70h] [rbp-688h]
  __int64 v528; // [rsp+70h] [rbp-688h]
  __int64 v529; // [rsp+70h] [rbp-688h]
  __m128i v530; // [rsp+D0h] [rbp-628h] BYREF
  __int128 *v531; // [rsp+E0h] [rbp-618h]
  __int64 *v532; // [rsp+E8h] [rbp-610h]
  __int64 *v533; // [rsp+F0h] [rbp-608h]
  __int64 *v534; // [rsp+F8h] [rbp-600h]
  __int64 *v535; // [rsp+100h] [rbp-5F8h]
  _QWORD *v536; // [rsp+108h] [rbp-5F0h]
  void **v537; // [rsp+110h] [rbp-5E8h]
  __int64 *v538; // [rsp+118h] [rbp-5E0h]
  __int64 *v539; // [rsp+120h] [rbp-5D8h]
  __int64 *v540; // [rsp+128h] [rbp-5D0h]
  const __m128i *v541; // [rsp+130h] [rbp-5C8h]
  const __m128i *v542; // [rsp+138h] [rbp-5C0h]
  __int128 *v543; // [rsp+140h] [rbp-5B8h]
  __int128 *v544; // [rsp+148h] [rbp-5B0h]
  __int128 *v545; // [rsp+150h] [rbp-5A8h]
  __int128 *v546; // [rsp+158h] [rbp-5A0h]
  __int128 *v547; // [rsp+160h] [rbp-598h]
  __int128 *v548; // [rsp+168h] [rbp-590h]
  __int128 *v549; // [rsp+170h] [rbp-588h]
  __int128 *v550; // [rsp+178h] [rbp-580h]
  __int128 *v551; // [rsp+180h] [rbp-578h]
  __int128 *v552; // [rsp+188h] [rbp-570h]
  __int128 *v553; // [rsp+190h] [rbp-568h]
  __int128 *v554; // [rsp+198h] [rbp-560h]
  __int128 *v555; // [rsp+1A0h] [rbp-558h]
  __int128 *v556; // [rsp+1A8h] [rbp-550h]
  __int128 *v557; // [rsp+1B0h] [rbp-548h]
  __m128i *v558; // [rsp+1B8h] [rbp-540h]
  char *v559; // [rsp+1C0h] [rbp-538h]
  char *v560; // [rsp+1C8h] [rbp-530h]
  char *v561; // [rsp+1D0h] [rbp-528h]
  char *v562; // [rsp+1D8h] [rbp-520h]
  char *v563; // [rsp+1E0h] [rbp-518h]
  char *v564; // [rsp+1E8h] [rbp-510h]
  char *v565; // [rsp+1F0h] [rbp-508h]
  char *v566; // [rsp+1F8h] [rbp-500h]
  __m128i v567; // [rsp+200h] [rbp-4F8h] BYREF
  __int64 v568; // [rsp+210h] [rbp-4E8h] BYREF
  __int64 v569; // [rsp+218h] [rbp-4E0h] BYREF
  char v570; // [rsp+220h] [rbp-4D8h] BYREF
  __int128 v571; // [rsp+228h] [rbp-4D0h] BYREF
  char v572; // [rsp+238h] [rbp-4C0h]
  __int128 v573; // [rsp+240h] [rbp-4B8h] BYREF
  char v574; // [rsp+250h] [rbp-4A8h] BYREF
  __int128 v575; // [rsp+258h] [rbp-4A0h] BYREF
  char v576; // [rsp+268h] [rbp-490h]
  __int128 v577; // [rsp+270h] [rbp-488h] BYREF
  char v578; // [rsp+280h] [rbp-478h] BYREF
  __int128 v579; // [rsp+288h] [rbp-470h] BYREF
  char v580; // [rsp+298h] [rbp-460h]
  __int128 v581; // [rsp+2A0h] [rbp-458h] BYREF
  _QWORD v582[3]; // [rsp+2B0h] [rbp-448h] BYREF
  _QWORD v583[3]; // [rsp+2C8h] [rbp-430h] BYREF
  char v584; // [rsp+2E0h] [rbp-418h] BYREF
  __int128 v585; // [rsp+2E8h] [rbp-410h] BYREF
  _QWORD v586[3]; // [rsp+2F8h] [rbp-400h] BYREF
  char v587; // [rsp+310h] [rbp-3E8h] BYREF
  __int128 v588; // [rsp+318h] [rbp-3E0h] BYREF
  char v589; // [rsp+328h] [rbp-3D0h]
  __int128 v590; // [rsp+330h] [rbp-3C8h] BYREF
  char v591; // [rsp+340h] [rbp-3B8h] BYREF
  __int128 v592; // [rsp+348h] [rbp-3B0h] BYREF
  char v593; // [rsp+358h] [rbp-3A0h]
  __int128 v594; // [rsp+360h] [rbp-398h] BYREF
  _QWORD v595[3]; // [rsp+370h] [rbp-388h] BYREF
  _QWORD v596[3]; // [rsp+388h] [rbp-370h] BYREF
  char v597; // [rsp+3A0h] [rbp-358h] BYREF
  __int128 v598; // [rsp+3A8h] [rbp-350h] BYREF
  _QWORD v599[3]; // [rsp+3B8h] [rbp-340h] BYREF
  char v600; // [rsp+3D0h] [rbp-328h] BYREF
  __int128 v601; // [rsp+3D8h] [rbp-320h] BYREF
  char v602; // [rsp+3E8h] [rbp-310h]
  __int128 v603; // [rsp+3F0h] [rbp-308h] BYREF
  char v604; // [rsp+400h] [rbp-2F8h] BYREF
  __int128 v605; // [rsp+408h] [rbp-2F0h] BYREF
  char v606; // [rsp+418h] [rbp-2E0h]
  __int128 v607; // [rsp+420h] [rbp-2D8h] BYREF
  __int64 v608; // [rsp+430h] [rbp-2C8h] BYREF
  __int64 v609; // [rsp+440h] [rbp-2B8h]
  _QWORD v610[3]; // [rsp+448h] [rbp-2B0h] BYREF
  char v611; // [rsp+460h] [rbp-298h] BYREF
  __int128 v612; // [rsp+468h] [rbp-290h] BYREF
  __int64 v613; // [rsp+478h] [rbp-280h] BYREF
  __int128 v614; // [rsp+480h] [rbp-278h] BYREF
  char v615; // [rsp+490h] [rbp-268h] BYREF
  __int128 v616; // [rsp+498h] [rbp-260h] BYREF
  char v617; // [rsp+4A8h] [rbp-250h]
  __int128 v618; // [rsp+4B0h] [rbp-248h] BYREF
  char v619; // [rsp+4C0h] [rbp-238h] BYREF
  __int128 v620; // [rsp+4C8h] [rbp-230h] BYREF
  char v621; // [rsp+4D8h] [rbp-220h]
  __int128 v622; // [rsp+4E0h] [rbp-218h] BYREF
  __m128i v623; // [rsp+4F0h] [rbp-208h] BYREF
  __int64 v624; // [rsp+500h] [rbp-1F8h]
  __int64 v625; // [rsp+508h] [rbp-1F0h] BYREF
  __int64 v626; // [rsp+518h] [rbp-1E0h]
  char v627; // [rsp+520h] [rbp-1D8h] BYREF
  __int128 v628; // [rsp+528h] [rbp-1D0h] BYREF
  __int64 v629; // [rsp+538h] [rbp-1C0h] BYREF
  __int64 v630; // [rsp+548h] [rbp-1B0h]
  char v631; // [rsp+550h] [rbp-1A8h] BYREF
  __int128 v632; // [rsp+558h] [rbp-1A0h] BYREF
  __int64 v633; // [rsp+568h] [rbp-190h] BYREF
  __int64 v634; // [rsp+578h] [rbp-180h]
  char v635; // [rsp+580h] [rbp-178h] BYREF
  __int128 v636; // [rsp+588h] [rbp-170h] BYREF
  __m128i v637; // [rsp+598h] [rbp-160h] BYREF
  __int64 v638; // [rsp+5A8h] [rbp-150h]
  __int128 v639; // [rsp+5B0h] [rbp-148h] BYREF
  __m128i v640; // [rsp+5C0h] [rbp-138h] BYREF
  __int64 v641; // [rsp+5D8h] [rbp-120h]
  _QWORD v642[2]; // [rsp+5E0h] [rbp-118h] BYREF
  __int64 v643; // [rsp+5F0h] [rbp-108h]
  _BYTE v644[16]; // [rsp+5F8h] [rbp-100h] BYREF
  __int64 v645; // [rsp+608h] [rbp-F0h]
  void *v646; // [rsp+610h] [rbp-E8h] BYREF
  __int64 v647; // [rsp+618h] [rbp-E0h]
  _QWORD v648[2]; // [rsp+620h] [rbp-D8h] BYREF
  void *v649; // [rsp+630h] [rbp-C8h] BYREF
  __int64 v650; // [rsp+638h] [rbp-C0h]
  _QWORD v651[2]; // [rsp+640h] [rbp-B8h] BYREF
  char v652; // [rsp+650h] [rbp-A8h]
  __int64 v653; // [rsp+658h] [rbp-A0h] BYREF
  char v654; // [rsp+670h] [rbp-88h]
  ida_mcp::tools::hexrays *v655; // [rsp+678h] [rbp-80h]
  _QWORD v656[2]; // [rsp+688h] [rbp-70h] BYREF
  char v657; // [rsp+698h] [rbp-60h]
  char v658; // [rsp+6A8h] [rbp-50h]
  unsigned __int64 v659; // [rsp+6B8h] [rbp-40h]

  v659 = __readfsqword(0x28u);
  v646 = v648;
  v647 = 0;
  LOBYTE(v648[0]) = 0;
  v649 = v651;
  v650 = 0;
  LOBYTE(v651[0]) = 0;
  v652 = 0;
  v653 = 0;
  v654 = 0;
  v658 = 0;
  std::string::_M_replace();
  v537 = &v649;
  std::string::_M_replace();
  *(_QWORD *)&v612 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v611 = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "type", v3, v4, v5, v6, v220, v264, (__int64)&v612);
  LOBYTE(v613) = 0;
  *(_QWORD *)&v614 = 0;
  v612 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v613) = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "object", v8, v9, v10, v11, v221, v265, v307);
  v614 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v639,
    (const __m128i *)&v611);
  v640.m128i_i64[0] = 0;
  v631 = 0;
  *(_QWORD *)&v632 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v631 = 3;
  v12 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v12, "properties", v13, v14, v15, v16, v222, v266, v308);
  v627 = 0;
  *(_QWORD *)&v628 = 0;
  v632 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v627 = 3;
  v17 = operator new(0x20u);
  strcpy((char *)(v17 + 16), "address");
  *(_QWORD *)v17 = v17 + 16;
  *(_QWORD *)(v17 + 8) = 7;
  v615 = 0;
  *(_QWORD *)&v616 = 0;
  v628 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v615 = 3;
  v18 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v18, "type", v19, v20, v21, v22, v223, v267, v309);
  v617 = 0;
  *(_QWORD *)&v618 = 0;
  v616 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v617 = 3;
  v23 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v23, "string", v24, v25, v26, v27, v224, v268, v310);
  v618 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v623,
    (const __m128i *)&v615);
  v624 = 0;
  v619 = 0;
  *(_QWORD *)&v620 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v619 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  strcpy((char *)(v28 + 16), "description");
  *(_QWORD *)(v28 + 8) = 11;
  v621 = 0;
  *(_QWORD *)&v622 = 0;
  v620 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v621 = 3;
  v29 = operator new(0x20u);
  *(_QWORD *)v29 = v29 + 16;
  strcpy((char *)(v29 + 16), "Hex address");
  *(_QWORD *)(v29 + 8) = 11;
  v532 = &v625;
  v622 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v625,
    (const __m128i *)&v619);
  v626 = 0;
  v533 = &v629;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v629,
    &v623);
  v630 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v608,
    (const __m128i *)&v627);
  v609 = 0;
  v534 = &v633;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v633,
    (__int64)&v608,
    1,
    v30,
    v31,
    v32,
    v225,
    v269,
    v311,
    (int)&v616,
    (int)&v618,
    (int)&v620,
    (__int64)&v622,
    (int)&v628,
    (int)&v632,
    (int)&v608,
    (int)&v614,
    v470,
    v485,
    (int)this,
    v515);
  v634 = 0;
  v535 = &v640.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v640.m128i_i64[1],
    (const __m128i *)&v631);
  v641 = 0;
  v635 = 0;
  *(_QWORD *)&v636 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v635 = 3;
  v33 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v33, "required", v34, v35, v36, v37, v226, v270, v312);
  *(_QWORD *)&v605 = 0;
  v636 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v604 = 3;
  v38 = operator new(0x20u);
  *(_QWORD *)v38 = v38 + 16;
  strcpy((char *)(v38 + 16), "address");
  v39 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  *(_QWORD *)(v38 + 8) = 7;
  v558 = &v567;
  v530 = (__m128i)v39;
  v605 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v40 = _mm_load_si128(&v567);
  v638 = 0;
  v536 = v642;
  v637 = v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v642,
    (const __m128i *)&v635);
  v643 = 0;
  LOBYTE(v568) = 0;
  v539 = &v568;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v568,
    (__int64)&v639,
    3,
    v41,
    v42,
    v43,
    v227,
    (__int64)&v605,
    v313,
    v350,
    v365,
    v380,
    v395,
    v410,
    v425,
    v440,
    v455,
    (char)&v636,
    (__int64)&v635,
    v500,
    (__int64)&v631);
  v44 = v652;
  v45 = v569;
  v652 = v568;
  LOBYTE(v568) = v44;
  v569 = v653;
  v540 = &v569;
  v653 = v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v531 = (__int128 *)v644;
  v46 = (__int128 *)v644;
  do
  {
    v46 = (__int128 *)((char *)v46 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v46 != &v639 );
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
  v47 = _mm_load_si128(&v530);
  *((_QWORD *)&v639 + 1) = 0;
  *(_QWORD *)&v639 = ida_mcp::tools::hexrays::decompile_function;
  v640 = v47;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v640.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v640.m128i_i64[0])(&v639, &v639, 3);
  if ( v658 && v657 && v655 != (ida_mcp::tools::hexrays *)v656 )
    operator delete(v655, v656[0] + 1LL);
  if ( v654 )
  {
    v654 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v538 = &v653;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v649 != v651 )
    operator delete(v649, v651[0] + 1LL);
  if ( v646 != v648 )
    operator delete(v646, v648[0] + 1LL);
  v646 = v648;
  v647 = 0;
  LOBYTE(v648[0]) = 0;
  v649 = v651;
  v650 = 0;
  LOBYTE(v651[0]) = 0;
  v652 = 0;
  v653 = 0;
  v654 = 0;
  v658 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v570 = 0;
  v545 = &v571;
  *(_QWORD *)&v571 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v570 = 3;
  v48 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v48, "type", v49, v50, v51, v52, v228, v271, v314);
  v572 = 0;
  v546 = &v573;
  *(_QWORD *)&v573 = 0;
  v571 = (unsigned __int64)v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v572 = 3;
  v53 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v53, "object", v54, v55, v56, v57, v229, v272, v315);
  v561 = &v570;
  v573 = (unsigned __int64)v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v486,
    (const __m128i *)&v570);
  *((_QWORD *)&v636 + 1) = 0;
  v631 = 0;
  *(_QWORD *)&v632 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v631 = 3;
  v58 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v58, "properties", v59, v60, v61, v62, v230, v273, v316);
  v584 = 0;
  v551 = &v585;
  *(_QWORD *)&v585 = 0;
  v632 = (unsigned __int64)v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v584 = 3;
  v63 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v63, "output_dir", v64, v65, v66, v67, v231, v274, v317);
  v574 = 0;
  v547 = &v575;
  *(_QWORD *)&v575 = 0;
  v585 = (unsigned __int64)v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v574 = 3;
  v68 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v68, "type", v69, v70, v71, v72, v232, v275, v318);
  v576 = 0;
  v548 = &v577;
  *(_QWORD *)&v577 = 0;
  v575 = (unsigned __int64)v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v576 = 3;
  v73 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v73, "string", v74, v75, v76, v77, v233, v276, v319);
  v562 = &v574;
  v541 = (const __m128i *)v582;
  v577 = (unsigned __int64)v73;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v582,
    (const __m128i *)&v574);
  v582[2] = 0;
  v578 = 0;
  *(_QWORD *)&v579 = 0;
  v549 = &v579;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v578 = 3;
  v78 = operator new(0x20u);
  *(_QWORD *)v78 = v78 + 16;
  strcpy((char *)(v78 + 16), "description");
  *(_QWORD *)(v78 + 8) = 11;
  v580 = 0;
  *(_QWORD *)&v581 = 0;
  v550 = &v581;
  v579 = (unsigned __int64)v78;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v580 = 3;
  v79 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v79,
    "Output directory path. Defaults to current working directory if not specified.",
    v80,
    v81,
    v82,
    v83,
    v234,
    v277,
    v320);
  v563 = &v578;
  v581 = (unsigned __int64)v79;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v583,
    (const __m128i *)&v578);
  v583[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v586,
    v541);
  v586[2] = 0;
  v559 = &v584;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v639,
    (const __m128i *)&v584);
  v640.m128i_i64[0] = 0;
  v597 = 0;
  *(_QWORD *)&v598 = 0;
  v556 = &v598;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v597 = 3;
  v84 = operator new(0x20u);
  *(_QWORD *)v84 = v84 + 16;
  strcpy((char *)(v84 + 16), "name_filter");
  *(_QWORD *)(v84 + 8) = 11;
  v587 = 0;
  *(_QWORD *)&v588 = 0;
  v552 = &v588;
  v598 = (unsigned __int64)v84;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v587 = 3;
  v85 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v85, "type", v86, v87, v88, v89, v235, v278, v321);
  v589 = 0;
  v553 = &v590;
  *(_QWORD *)&v590 = 0;
  v588 = (unsigned __int64)v85;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v589 = 3;
  v90 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v90, "string", v91, v92, v93, v94, v236, v279, v322);
  v564 = &v587;
  v542 = (const __m128i *)v595;
  v590 = (unsigned __int64)v90;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v595,
    (const __m128i *)&v587);
  v595[2] = 0;
  v591 = 0;
  *(_QWORD *)&v592 = 0;
  v554 = &v592;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v591 = 3;
  v95 = operator new(0x20u);
  *(_QWORD *)v95 = v95 + 16;
  strcpy((char *)(v95 + 16), "description");
  *(_QWORD *)(v95 + 8) = 11;
  v593 = 0;
  *(_QWORD *)&v594 = 0;
  v555 = &v594;
  v592 = (unsigned __int64)v95;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v593 = 3;
  v96 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v96,
    "Optional regex pattern to filter functions by name. Only functions matching this pattern will be exported.",
    v97,
    v98,
    v99,
    v100,
    v237,
    v280,
    v323);
  v565 = &v591;
  v594 = (unsigned __int64)v96;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v596,
    (const __m128i *)&v591);
  v596[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v599,
    v542);
  v599[2] = 0;
  v560 = &v597;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v535,
    (const __m128i *)&v597);
  v641 = 0;
  v611 = 0;
  *(_QWORD *)&v612 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v611 = 3;
  v101 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v101, "skip_library", v102, v103, v104, v105, v238, v281, v324);
  v600 = 0;
  v557 = &v601;
  *(_QWORD *)&v601 = 0;
  v612 = (unsigned __int64)v101;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v600 = 3;
  v106 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v106, "type", v107, v108, v109, v110, v239, v282, v325);
  v602 = 0;
  v543 = &v603;
  *(_QWORD *)&v603 = 0;
  v601 = (unsigned __int64)v106;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v602 = 3;
  v111 = operator new(0x20u);
  strcpy((char *)(v111 + 16), "boolean");
  *(_QWORD *)v111 = v111 + 16;
  *(_QWORD *)(v111 + 8) = 7;
  v566 = &v600;
  v603 = (unsigned __int64)v111;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v441,
    (const __m128i *)&v600);
  v609 = 0;
  v604 = 0;
  *(_QWORD *)&v605 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v604 = 3;
  v112 = operator new(0x20u);
  *(_QWORD *)v112 = v112 + 16;
  strcpy((char *)(v112 + 16), "description");
  *(_QWORD *)(v112 + 8) = 11;
  v606 = 0;
  *(_QWORD *)&v607 = 0;
  v544 = &v607;
  v605 = (unsigned __int64)v112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v606 = 3;
  v113 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v113,
    "Skip library functions (default: true)",
    v114,
    v115,
    v116,
    v117,
    v240,
    v283,
    v326);
  v607 = (unsigned __int64)v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v610,
    (const __m128i *)&v604);
  v610[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v613,
    v441);
  *((_QWORD *)&v614 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v536,
    (const __m128i *)&v611);
  v643 = 0;
  v627 = 0;
  *(_QWORD *)&v628 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v627 = 3;
  v118 = operator new(0x20u);
  *(_QWORD *)v118 = v118 + 16;
  strcpy((char *)(v118 + 16), "skip_thunks");
  *(_QWORD *)(v118 + 8) = 11;
  v615 = 0;
  *(_QWORD *)&v616 = 0;
  v628 = (unsigned __int64)v118;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v615 = 3;
  v119 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v119, "type", v120, v121, v122, v123, v241, v284, v327);
  v617 = 0;
  *(_QWORD *)&v618 = 0;
  v616 = (unsigned __int64)v119;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v617 = 3;
  v124 = operator new(0x20u);
  *(_QWORD *)v124 = v124 + 16;
  strcpy((char *)(v124 + 16), "boolean");
  *(_QWORD *)(v124 + 8) = 7;
  v618 = (unsigned __int64)v124;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v623,
    (const __m128i *)&v615);
  v624 = 0;
  v619 = 0;
  *(_QWORD *)&v620 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v619 = 3;
  v125 = operator new(0x20u);
  *(_QWORD *)v125 = v125 + 16;
  strcpy((char *)(v125 + 16), "description");
  *(_QWORD *)(v125 + 8) = 11;
  v621 = 0;
  *(_QWORD *)&v622 = 0;
  v620 = (unsigned __int64)v125;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v621 = 3;
  v126 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v126,
    "Skip thunk functions (default: true)",
    v127,
    v128,
    v129,
    v130,
    v242,
    v285,
    v328);
  v622 = (unsigned __int64)v126;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v532,
    (const __m128i *)&v619);
  v626 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v533,
    (__int64)&v623,
    2,
    v131,
    v132,
    v133,
    v243,
    v286,
    v329,
    v351,
    v366,
    v381,
    v396,
    v411,
    v426,
    (int)v441,
    v456,
    v471,
    (__int64)v486,
    v501,
    v516);
  v630 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v531,
    (__int64)&v627,
    2,
    v134,
    v135,
    v136,
    v244,
    v287,
    v330,
    v352,
    v367,
    v382,
    v397,
    v412,
    v427,
    v442,
    v457,
    v472,
    v487,
    v502,
    v517);
  v645 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v534,
    (__int64)&v639,
    4,
    v137,
    v138,
    v139,
    v245,
    v288,
    v331,
    v353,
    v368,
    v383,
    v398,
    v413,
    v428,
    v443,
    v458,
    v473,
    v488,
    v503,
    v518);
  v634 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v637,
    v519,
    2,
    v140,
    v141,
    v142,
    v246,
    v289,
    v332,
    v354,
    v369,
    v384,
    v399,
    v414,
    v429,
    v444,
    v459,
    v474,
    v489,
    v504,
    v519);
  v638 = 0;
  LOBYTE(v568) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v539,
    v490,
    2,
    v143,
    v144,
    v145,
    v247,
    v290,
    v333,
    v355,
    v370,
    v385,
    v400,
    v415,
    v430,
    v445,
    v460,
    v475,
    v490,
    v505,
    v520);
  v146 = &v646;
  v147 = v652;
  v652 = v568;
  v148 = v653;
  LOBYTE(v568) = v147;
  v653 = v569;
  v569 = v148;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v146 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v146 != (void **)&v639 );
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
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v149 = _mm_load_si128(&v530);
  *((_QWORD *)&v639 + 1) = 0;
  *(_QWORD *)&v639 = ida_mcp::tools::hexrays::export_all_decompiled;
  v640 = v149;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v640.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v640.m128i_i64[0])(&v639, &v639, 3);
  if ( v658 && v657 && v655 != (ida_mcp::tools::hexrays *)v656 )
    operator delete(v655, v656[0] + 1LL);
  if ( v654 )
  {
    v654 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v649 != v651 )
    operator delete(v649, v651[0] + 1LL);
  if ( v646 != v648 )
    operator delete(v646, v648[0] + 1LL);
  v646 = v648;
  v647 = 0;
  LOBYTE(v648[0]) = 0;
  v649 = v651;
  v650 = 0;
  LOBYTE(v651[0]) = 0;
  v652 = 0;
  v653 = 0;
  v654 = 0;
  v658 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v611 = 0;
  *(_QWORD *)&v612 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v611 = 3;
  v150 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v150, "type", v151, v152, v153, v154, v248, v291, v334);
  LOBYTE(v613) = 0;
  *(_QWORD *)&v614 = 0;
  v612 = (unsigned __int64)v150;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v613) = 3;
  v155 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v155, "object", v156, v157, v158, v159, v249, v292, v335);
  v614 = (unsigned __int64)v155;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v639,
    (__int64)&v611,
    2,
    v160,
    v161,
    v162,
    v250,
    v293,
    v336,
    v356,
    v371,
    v386,
    v401,
    v416,
    v431,
    v446,
    v461,
    v476,
    v491,
    v506,
    v521);
  v640.m128i_i64[0] = 0;
  v631 = 0;
  *(_QWORD *)&v632 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v631 = 3;
  v163 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v163, "properties", v164, v165, v166, v167, v251, v294, v337);
  v627 = 0;
  *(_QWORD *)&v628 = 0;
  v632 = (unsigned __int64)v163;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v627 = 3;
  v168 = operator new(0x20u);
  *(_QWORD *)v168 = v168 + 16;
  strcpy((char *)(v168 + 16), "address");
  *(_QWORD *)(v168 + 8) = 7;
  v615 = 0;
  *(_QWORD *)&v616 = 0;
  v628 = (unsigned __int64)v168;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v615 = 3;
  v169 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v169, "type", v170, v171, v172, v173, v252, v295, v338);
  v617 = 0;
  *(_QWORD *)&v618 = 0;
  v616 = (unsigned __int64)v169;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v617 = 3;
  v174 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v174, "string", v175, v176, v177, v178, v253, v296, v339);
  v618 = (unsigned __int64)v174;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v623,
    (__int64)&v615,
    2,
    v179,
    v180,
    v181,
    v254,
    v297,
    v340,
    v357,
    v372,
    v387,
    v402,
    v417,
    v432,
    v447,
    v462,
    v477,
    v492,
    v507,
    v522);
  v624 = 0;
  v619 = 0;
  *(_QWORD *)&v620 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v619 = 3;
  v182 = operator new(0x20u);
  *(_QWORD *)v182 = v182 + 16;
  strcpy((char *)(v182 + 16), "description");
  *(_QWORD *)(v182 + 8) = 11;
  v621 = 0;
  *(_QWORD *)&v622 = 0;
  v620 = (unsigned __int64)v182;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v621 = 3;
  v183 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v183,
    "Function address (hex)",
    v184,
    v185,
    v186,
    v187,
    v255,
    v298,
    v341);
  v622 = (unsigned __int64)v183;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v532,
    (__int64)&v619,
    2,
    v188,
    v189,
    v190,
    v256,
    v299,
    v342,
    v358,
    v373,
    v388,
    v403,
    v418,
    v433,
    v448,
    v463,
    v478,
    v493,
    v508,
    v523);
  v626 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v533,
    (__int64)&v623,
    2,
    v191,
    v192,
    v193,
    v257,
    v300,
    v343,
    v359,
    v374,
    v389,
    v404,
    v419,
    v434,
    v449,
    v464,
    v479,
    v494,
    v509,
    v524);
  v630 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v450,
    (__int64)&v627,
    2,
    v194,
    v195,
    v196,
    v258,
    v301,
    v344,
    v360,
    v375,
    v390,
    v405,
    v420,
    v435,
    (int)v450,
    v465,
    v480,
    v495,
    v510,
    v525);
  v609 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v534,
    v451,
    1,
    v197,
    v198,
    v199,
    v259,
    v302,
    v345,
    v361,
    v376,
    v391,
    v406,
    v421,
    v436,
    v451,
    v466,
    v481,
    v496,
    v511,
    v526);
  v634 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v535,
    v527,
    2,
    v200,
    v201,
    v202,
    v260,
    v303,
    v346,
    v362,
    v377,
    v392,
    v407,
    v422,
    v437,
    v452,
    v467,
    v482,
    v497,
    v512,
    v527);
  v641 = 0;
  v635 = 0;
  *(_QWORD *)&v636 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v635 = 3;
  v203 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v203, "required", v204, v205, v206, v207, v261, v304, v347);
  v604 = 0;
  *(_QWORD *)&v605 = 0;
  v636 = (unsigned __int64)v203;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v604 = 3;
  v208 = operator new(0x20u);
  *(_QWORD *)v208 = v208 + 16;
  strcpy((char *)(v208 + 16), "address");
  *(_QWORD *)(v208 + 8) = 7;
  v605 = (unsigned __int64)v208;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v209 = _mm_load_si128(&v567);
  v638 = 0;
  v637 = v209;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v536,
    v498,
    2,
    v210,
    v211,
    v212,
    v262,
    v305,
    v348,
    v363,
    v378,
    v393,
    v408,
    v423,
    v438,
    v453,
    v468,
    v483,
    v498,
    v513,
    v528);
  v643 = 0;
  LOBYTE(v568) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v539,
    (__int64)&v639,
    3,
    v213,
    v214,
    v215,
    v263,
    v306,
    v349,
    v364,
    v379,
    v394,
    v409,
    v424,
    v439,
    v454,
    v469,
    v484,
    v499,
    v514,
    v529);
  v216 = v652;
  v652 = v568;
  v217 = v653;
  LOBYTE(v568) = v216;
  v653 = v569;
  v569 = v217;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v218 = v531;
  do
  {
    v218 = (__int128 *)((char *)v218 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v218 != &v639 );
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
  v639 = 0;
  v640 = _mm_unpacklo_epi64(
           _mm_loadl_epi64((const __m128i *)&off_443900),
           (__m128i)(unsigned __int64)std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),ida_mcp::tools::hexrays::register_tools(ida_mcp::mcp::McpServer &)::{lambda(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)#1}>::_M_invoke);
  ida_mcp::mcp::McpServer::register_tool();
  if ( v640.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v640.m128i_i64[0])(&v639, &v639, 3);
  if ( v658 && v657 && v655 != (ida_mcp::tools::hexrays *)v656 )
    operator delete(v655, v656[0] + 1LL);
  if ( v654 )
  {
    v654 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v649 != v651 )
    operator delete(v649, v651[0] + 1LL);
  if ( v646 != v648 )
    operator delete(v646, v648[0] + 1LL);
  return v659 - __readfsqword(0x28u);
}

