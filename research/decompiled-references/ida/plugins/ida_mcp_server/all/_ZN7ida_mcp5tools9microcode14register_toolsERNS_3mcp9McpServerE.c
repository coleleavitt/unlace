unsigned __int64 __fastcall ida_mcp::tools::microcode::register_tools(
        ida_mcp::tools::microcode *this,
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
  __int64 *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // rbp
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
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 *v57; // rbp
  __int64 v58; // rdx
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
  __int64 *v75; // rbp
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 *v80; // rbp
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 *v94; // rbp
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 *v99; // rbp
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 *v104; // rbp
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 *v112; // rbp
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 *v117; // rbp
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 *v137; // rbp
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 *v142; // rbp
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __m128i v147; // xmm0
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  char v154; // si
  char *v155; // rbp
  __int64 v156; // rax
  char *v157; // rbp
  __m128i si128; // xmm2
  int v160; // [rsp+0h] [rbp-5C8h]
  int v161; // [rsp+0h] [rbp-5C8h]
  int v162; // [rsp+0h] [rbp-5C8h]
  int v163; // [rsp+0h] [rbp-5C8h]
  int v164; // [rsp+0h] [rbp-5C8h]
  int v165; // [rsp+0h] [rbp-5C8h]
  int v166; // [rsp+0h] [rbp-5C8h]
  int v167; // [rsp+0h] [rbp-5C8h]
  int v168; // [rsp+0h] [rbp-5C8h]
  int v169; // [rsp+0h] [rbp-5C8h]
  int v170; // [rsp+0h] [rbp-5C8h]
  int v171; // [rsp+0h] [rbp-5C8h]
  int v172; // [rsp+0h] [rbp-5C8h]
  int v173; // [rsp+0h] [rbp-5C8h]
  int v174; // [rsp+0h] [rbp-5C8h]
  int v175; // [rsp+0h] [rbp-5C8h]
  int v176; // [rsp+0h] [rbp-5C8h]
  int v177; // [rsp+0h] [rbp-5C8h]
  int v178; // [rsp+0h] [rbp-5C8h]
  int v179; // [rsp+0h] [rbp-5C8h]
  int v180; // [rsp+0h] [rbp-5C8h]
  int v181; // [rsp+0h] [rbp-5C8h]
  int v182; // [rsp+0h] [rbp-5C8h]
  int v183; // [rsp+0h] [rbp-5C8h]
  int v184; // [rsp+0h] [rbp-5C8h]
  int v185; // [rsp+0h] [rbp-5C8h]
  int v186; // [rsp+0h] [rbp-5C8h]
  int v187; // [rsp+0h] [rbp-5C8h]
  int v188; // [rsp+0h] [rbp-5C8h]
  int v189; // [rsp+0h] [rbp-5C8h]
  int v190; // [rsp+0h] [rbp-5C8h]
  int v191; // [rsp+0h] [rbp-5C8h]
  int v192; // [rsp+0h] [rbp-5C8h]
  int v193; // [rsp+0h] [rbp-5C8h]
  int v194; // [rsp+0h] [rbp-5C8h]
  int v195; // [rsp+0h] [rbp-5C8h]
  int v196; // [rsp+0h] [rbp-5C8h]
  int v197; // [rsp+8h] [rbp-5C0h]
  int v198; // [rsp+8h] [rbp-5C0h]
  __int64 v199; // [rsp+8h] [rbp-5C0h]
  int v200; // [rsp+8h] [rbp-5C0h]
  int v201; // [rsp+8h] [rbp-5C0h]
  int v202; // [rsp+8h] [rbp-5C0h]
  int v203; // [rsp+8h] [rbp-5C0h]
  int v204; // [rsp+8h] [rbp-5C0h]
  int v205; // [rsp+8h] [rbp-5C0h]
  __int64 v206; // [rsp+8h] [rbp-5C0h]
  __int64 v207; // [rsp+8h] [rbp-5C0h]
  __int64 v208; // [rsp+8h] [rbp-5C0h]
  int v209; // [rsp+8h] [rbp-5C0h]
  int v210; // [rsp+8h] [rbp-5C0h]
  int v211; // [rsp+8h] [rbp-5C0h]
  __int64 v212; // [rsp+8h] [rbp-5C0h]
  int v213; // [rsp+8h] [rbp-5C0h]
  int v214; // [rsp+8h] [rbp-5C0h]
  __int64 v215; // [rsp+8h] [rbp-5C0h]
  __int64 v216; // [rsp+8h] [rbp-5C0h]
  __int64 v217; // [rsp+8h] [rbp-5C0h]
  int v218; // [rsp+8h] [rbp-5C0h]
  int v219; // [rsp+8h] [rbp-5C0h]
  int v220; // [rsp+8h] [rbp-5C0h]
  __int64 v221; // [rsp+8h] [rbp-5C0h]
  int v222; // [rsp+8h] [rbp-5C0h]
  int v223; // [rsp+8h] [rbp-5C0h]
  __int64 v224; // [rsp+8h] [rbp-5C0h]
  __int64 v225; // [rsp+8h] [rbp-5C0h]
  __int64 v226; // [rsp+8h] [rbp-5C0h]
  __int64 v227; // [rsp+8h] [rbp-5C0h]
  __int64 v228; // [rsp+8h] [rbp-5C0h]
  int v229; // [rsp+8h] [rbp-5C0h]
  int v230; // [rsp+8h] [rbp-5C0h]
  __int64 v231; // [rsp+8h] [rbp-5C0h]
  __int64 v232; // [rsp+8h] [rbp-5C0h]
  __int64 v233; // [rsp+10h] [rbp-5B8h]
  __int64 v234; // [rsp+10h] [rbp-5B8h]
  int v235; // [rsp+10h] [rbp-5B8h]
  __int64 v236; // [rsp+10h] [rbp-5B8h]
  __int64 v237; // [rsp+10h] [rbp-5B8h]
  __int64 v238; // [rsp+10h] [rbp-5B8h]
  __int64 v239; // [rsp+10h] [rbp-5B8h]
  int v240; // [rsp+10h] [rbp-5B8h]
  __int64 v241; // [rsp+10h] [rbp-5B8h]
  __int64 v242; // [rsp+10h] [rbp-5B8h]
  int v243; // [rsp+10h] [rbp-5B8h]
  int v244; // [rsp+10h] [rbp-5B8h]
  int v245; // [rsp+10h] [rbp-5B8h]
  __int64 v246; // [rsp+10h] [rbp-5B8h]
  __int64 v247; // [rsp+10h] [rbp-5B8h]
  __int64 v248; // [rsp+10h] [rbp-5B8h]
  __int64 v249; // [rsp+10h] [rbp-5B8h]
  __int64 v250; // [rsp+10h] [rbp-5B8h]
  int v251; // [rsp+10h] [rbp-5B8h]
  __int64 v252; // [rsp+10h] [rbp-5B8h]
  int v253; // [rsp+10h] [rbp-5B8h]
  __int64 v254; // [rsp+10h] [rbp-5B8h]
  __int64 v255; // [rsp+10h] [rbp-5B8h]
  __int64 v256; // [rsp+10h] [rbp-5B8h]
  int v257; // [rsp+10h] [rbp-5B8h]
  __int64 v258; // [rsp+10h] [rbp-5B8h]
  __int64 v259; // [rsp+10h] [rbp-5B8h]
  int v260; // [rsp+10h] [rbp-5B8h]
  int v261; // [rsp+10h] [rbp-5B8h]
  int v262; // [rsp+10h] [rbp-5B8h]
  int v263; // [rsp+10h] [rbp-5B8h]
  int v264; // [rsp+10h] [rbp-5B8h]
  __int64 v265; // [rsp+10h] [rbp-5B8h]
  __int64 v266; // [rsp+10h] [rbp-5B8h]
  int v267; // [rsp+10h] [rbp-5B8h]
  int v268; // [rsp+10h] [rbp-5B8h]
  int v269; // [rsp+18h] [rbp-5B0h]
  int v270; // [rsp+18h] [rbp-5B0h]
  int v271; // [rsp+18h] [rbp-5B0h]
  int v272; // [rsp+18h] [rbp-5B0h]
  int v273; // [rsp+18h] [rbp-5B0h]
  int v274; // [rsp+18h] [rbp-5B0h]
  int v275; // [rsp+18h] [rbp-5B0h]
  int v276; // [rsp+18h] [rbp-5B0h]
  int v277; // [rsp+18h] [rbp-5B0h]
  int v278; // [rsp+18h] [rbp-5B0h]
  int v279; // [rsp+18h] [rbp-5B0h]
  int v280; // [rsp+18h] [rbp-5B0h]
  int v281; // [rsp+18h] [rbp-5B0h]
  int v282; // [rsp+18h] [rbp-5B0h]
  int v283; // [rsp+18h] [rbp-5B0h]
  int v284; // [rsp+18h] [rbp-5B0h]
  int v285; // [rsp+20h] [rbp-5A8h]
  int v286; // [rsp+20h] [rbp-5A8h]
  int v287; // [rsp+20h] [rbp-5A8h]
  int v288; // [rsp+20h] [rbp-5A8h]
  int v289; // [rsp+20h] [rbp-5A8h]
  int v290; // [rsp+20h] [rbp-5A8h]
  int v291; // [rsp+20h] [rbp-5A8h]
  int v292; // [rsp+20h] [rbp-5A8h]
  int v293; // [rsp+20h] [rbp-5A8h]
  int v294; // [rsp+20h] [rbp-5A8h]
  int v295; // [rsp+20h] [rbp-5A8h]
  int v296; // [rsp+20h] [rbp-5A8h]
  int v297; // [rsp+20h] [rbp-5A8h]
  int v298; // [rsp+20h] [rbp-5A8h]
  int v299; // [rsp+20h] [rbp-5A8h]
  int v300; // [rsp+20h] [rbp-5A8h]
  int v301; // [rsp+28h] [rbp-5A0h]
  int v302; // [rsp+28h] [rbp-5A0h]
  int v303; // [rsp+28h] [rbp-5A0h]
  int v304; // [rsp+28h] [rbp-5A0h]
  int v305; // [rsp+28h] [rbp-5A0h]
  int v306; // [rsp+28h] [rbp-5A0h]
  int v307; // [rsp+28h] [rbp-5A0h]
  int v308; // [rsp+28h] [rbp-5A0h]
  int v309; // [rsp+28h] [rbp-5A0h]
  int v310; // [rsp+28h] [rbp-5A0h]
  int v311; // [rsp+28h] [rbp-5A0h]
  int v312; // [rsp+28h] [rbp-5A0h]
  int v313; // [rsp+28h] [rbp-5A0h]
  int v314; // [rsp+28h] [rbp-5A0h]
  int v315; // [rsp+28h] [rbp-5A0h]
  int v316; // [rsp+28h] [rbp-5A0h]
  __int64 v317; // [rsp+30h] [rbp-598h]
  __int64 v318; // [rsp+30h] [rbp-598h]
  __int64 v319; // [rsp+30h] [rbp-598h]
  __int64 v320; // [rsp+30h] [rbp-598h]
  __int64 v321; // [rsp+30h] [rbp-598h]
  __int64 v322; // [rsp+30h] [rbp-598h]
  __int64 v323; // [rsp+30h] [rbp-598h]
  __int64 v324; // [rsp+30h] [rbp-598h]
  __int64 v325; // [rsp+30h] [rbp-598h]
  __int64 v326; // [rsp+30h] [rbp-598h]
  __int64 v327; // [rsp+30h] [rbp-598h]
  __int64 v328; // [rsp+30h] [rbp-598h]
  __int64 v329; // [rsp+30h] [rbp-598h]
  __int64 v330; // [rsp+30h] [rbp-598h]
  __int64 v331; // [rsp+30h] [rbp-598h]
  __int64 v332; // [rsp+30h] [rbp-598h]
  int v333; // [rsp+38h] [rbp-590h]
  int v334; // [rsp+38h] [rbp-590h]
  int v335; // [rsp+38h] [rbp-590h]
  int v336; // [rsp+38h] [rbp-590h]
  int v337; // [rsp+38h] [rbp-590h]
  int v338; // [rsp+38h] [rbp-590h]
  int v339; // [rsp+38h] [rbp-590h]
  int v340; // [rsp+38h] [rbp-590h]
  int v341; // [rsp+38h] [rbp-590h]
  int v342; // [rsp+38h] [rbp-590h]
  int v343; // [rsp+38h] [rbp-590h]
  int v344; // [rsp+38h] [rbp-590h]
  int v345; // [rsp+38h] [rbp-590h]
  int v346; // [rsp+38h] [rbp-590h]
  int v347; // [rsp+38h] [rbp-590h]
  int v348; // [rsp+38h] [rbp-590h]
  int v349; // [rsp+40h] [rbp-588h]
  int v350; // [rsp+40h] [rbp-588h]
  int v351; // [rsp+40h] [rbp-588h]
  int v352; // [rsp+40h] [rbp-588h]
  int v353; // [rsp+40h] [rbp-588h]
  int v354; // [rsp+40h] [rbp-588h]
  int v355; // [rsp+40h] [rbp-588h]
  int v356; // [rsp+40h] [rbp-588h]
  int v357; // [rsp+40h] [rbp-588h]
  int v358; // [rsp+40h] [rbp-588h]
  int v359; // [rsp+40h] [rbp-588h]
  int v360; // [rsp+40h] [rbp-588h]
  int v361; // [rsp+40h] [rbp-588h]
  int v362; // [rsp+40h] [rbp-588h]
  int v363; // [rsp+40h] [rbp-588h]
  int v364; // [rsp+40h] [rbp-588h]
  int v365; // [rsp+48h] [rbp-580h]
  int v366; // [rsp+48h] [rbp-580h]
  int v367; // [rsp+48h] [rbp-580h]
  int v368; // [rsp+48h] [rbp-580h]
  int v369; // [rsp+48h] [rbp-580h]
  int v370; // [rsp+48h] [rbp-580h]
  int v371; // [rsp+48h] [rbp-580h]
  int v372; // [rsp+48h] [rbp-580h]
  int v373; // [rsp+48h] [rbp-580h]
  int v374; // [rsp+48h] [rbp-580h]
  int v375; // [rsp+48h] [rbp-580h]
  int v376; // [rsp+48h] [rbp-580h]
  int v377; // [rsp+48h] [rbp-580h]
  int v378; // [rsp+48h] [rbp-580h]
  int v379; // [rsp+48h] [rbp-580h]
  int v380; // [rsp+48h] [rbp-580h]
  int v381; // [rsp+50h] [rbp-578h]
  int v382; // [rsp+50h] [rbp-578h]
  int v383; // [rsp+50h] [rbp-578h]
  int v384; // [rsp+50h] [rbp-578h]
  int v385; // [rsp+50h] [rbp-578h]
  int v386; // [rsp+50h] [rbp-578h]
  int v387; // [rsp+50h] [rbp-578h]
  int v388; // [rsp+50h] [rbp-578h]
  int v389; // [rsp+50h] [rbp-578h]
  int v390; // [rsp+50h] [rbp-578h]
  int v391; // [rsp+50h] [rbp-578h]
  int v392; // [rsp+50h] [rbp-578h]
  int v393; // [rsp+50h] [rbp-578h]
  int v394; // [rsp+50h] [rbp-578h]
  int v395; // [rsp+50h] [rbp-578h]
  int v396; // [rsp+50h] [rbp-578h]
  char v397; // [rsp+58h] [rbp-570h]
  char v398; // [rsp+58h] [rbp-570h]
  char v399; // [rsp+58h] [rbp-570h]
  char v400; // [rsp+58h] [rbp-570h]
  char v401; // [rsp+58h] [rbp-570h]
  char v402; // [rsp+58h] [rbp-570h]
  char v403; // [rsp+58h] [rbp-570h]
  char v404; // [rsp+58h] [rbp-570h]
  char v405; // [rsp+58h] [rbp-570h]
  char v406; // [rsp+58h] [rbp-570h]
  char v407; // [rsp+58h] [rbp-570h]
  char v408; // [rsp+58h] [rbp-570h]
  char v409; // [rsp+58h] [rbp-570h]
  char v410; // [rsp+58h] [rbp-570h]
  char v411; // [rsp+58h] [rbp-570h]
  char v412; // [rsp+58h] [rbp-570h]
  __int64 v413; // [rsp+60h] [rbp-568h]
  __int64 v414; // [rsp+60h] [rbp-568h]
  __int64 v415; // [rsp+60h] [rbp-568h]
  __int64 v416; // [rsp+60h] [rbp-568h]
  __int64 v417; // [rsp+60h] [rbp-568h]
  __int64 v418; // [rsp+60h] [rbp-568h]
  __int64 v419; // [rsp+60h] [rbp-568h]
  __int64 v420; // [rsp+60h] [rbp-568h]
  __int64 v421; // [rsp+60h] [rbp-568h]
  __int64 v422; // [rsp+60h] [rbp-568h]
  __int64 v423; // [rsp+60h] [rbp-568h]
  __int64 v424; // [rsp+60h] [rbp-568h]
  __int64 v425; // [rsp+60h] [rbp-568h]
  __int64 v426; // [rsp+60h] [rbp-568h]
  __int64 v427; // [rsp+60h] [rbp-568h]
  __int64 v428; // [rsp+60h] [rbp-568h]
  int v429; // [rsp+68h] [rbp-560h]
  int v430; // [rsp+68h] [rbp-560h]
  int v431; // [rsp+68h] [rbp-560h]
  int v432; // [rsp+68h] [rbp-560h]
  int v433; // [rsp+68h] [rbp-560h]
  int v434; // [rsp+68h] [rbp-560h]
  int v435; // [rsp+68h] [rbp-560h]
  int v436; // [rsp+68h] [rbp-560h]
  int v437; // [rsp+68h] [rbp-560h]
  int v438; // [rsp+68h] [rbp-560h]
  int v439; // [rsp+68h] [rbp-560h]
  int v440; // [rsp+68h] [rbp-560h]
  int v441; // [rsp+68h] [rbp-560h]
  int v442; // [rsp+68h] [rbp-560h]
  int v443; // [rsp+68h] [rbp-560h]
  int v444; // [rsp+68h] [rbp-560h]
  __int64 v445; // [rsp+70h] [rbp-558h]
  __int64 v446; // [rsp+70h] [rbp-558h]
  __int64 v447; // [rsp+70h] [rbp-558h]
  __int64 v448; // [rsp+70h] [rbp-558h]
  __int64 v449; // [rsp+70h] [rbp-558h]
  __int64 v450; // [rsp+70h] [rbp-558h]
  __int64 v451; // [rsp+70h] [rbp-558h]
  __int64 v452; // [rsp+70h] [rbp-558h]
  __int64 v453; // [rsp+70h] [rbp-558h]
  __int64 v454; // [rsp+70h] [rbp-558h]
  __int64 v455; // [rsp+70h] [rbp-558h]
  __int64 v456; // [rsp+70h] [rbp-558h]
  __int64 v457; // [rsp+70h] [rbp-558h]
  __int64 v458; // [rsp+70h] [rbp-558h]
  __int64 v459; // [rsp+70h] [rbp-558h]
  __int64 v460; // [rsp+70h] [rbp-558h]
  __m128 v461; // [rsp+B0h] [rbp-518h] BYREF
  _OWORD *v462; // [rsp+C0h] [rbp-508h]
  void **v463; // [rsp+C8h] [rbp-500h]
  ida_mcp::tools::microcode *v464; // [rsp+D0h] [rbp-4F8h]
  char *v465; // [rsp+D8h] [rbp-4F0h]
  char *v466; // [rsp+E0h] [rbp-4E8h]
  char *v467; // [rsp+E8h] [rbp-4E0h]
  char *v468; // [rsp+F0h] [rbp-4D8h]
  char *v469; // [rsp+F8h] [rbp-4D0h]
  char *v470; // [rsp+100h] [rbp-4C8h]
  char *v471; // [rsp+108h] [rbp-4C0h]
  char *v472; // [rsp+110h] [rbp-4B8h]
  char *v473; // [rsp+118h] [rbp-4B0h]
  char *v474; // [rsp+120h] [rbp-4A8h]
  char *v475; // [rsp+128h] [rbp-4A0h]
  __m128i v476; // [rsp+130h] [rbp-498h] BYREF
  __int64 v477; // [rsp+140h] [rbp-488h] BYREF
  __int64 v478; // [rsp+148h] [rbp-480h]
  char v479; // [rsp+150h] [rbp-478h]
  __int128 v480; // [rsp+158h] [rbp-470h] BYREF
  char v481[8]; // [rsp+170h] [rbp-458h] BYREF
  __int128 v482; // [rsp+178h] [rbp-450h] BYREF
  char v483; // [rsp+188h] [rbp-440h]
  __int128 v484; // [rsp+190h] [rbp-438h] BYREF
  char v485[8]; // [rsp+1A0h] [rbp-428h] BYREF
  __int128 v486; // [rsp+1A8h] [rbp-420h] BYREF
  char v487; // [rsp+1B8h] [rbp-410h]
  __int128 v488; // [rsp+1C0h] [rbp-408h] BYREF
  char v489[8]; // [rsp+1D0h] [rbp-3F8h] BYREF
  __int128 v490; // [rsp+1D8h] [rbp-3F0h] BYREF
  char v491; // [rsp+1E8h] [rbp-3E0h]
  __int128 v492; // [rsp+1F0h] [rbp-3D8h] BYREF
  _QWORD v493[3]; // [rsp+200h] [rbp-3C8h] BYREF
  _QWORD v494[3]; // [rsp+218h] [rbp-3B0h] BYREF
  char v495[8]; // [rsp+230h] [rbp-398h] BYREF
  __int128 v496; // [rsp+238h] [rbp-390h] BYREF
  _QWORD v497[3]; // [rsp+248h] [rbp-380h] BYREF
  char v498[8]; // [rsp+260h] [rbp-368h] BYREF
  __int128 v499; // [rsp+268h] [rbp-360h] BYREF
  char v500; // [rsp+278h] [rbp-350h]
  __int128 v501; // [rsp+280h] [rbp-348h] BYREF
  char v502[8]; // [rsp+290h] [rbp-338h] BYREF
  __int128 v503; // [rsp+298h] [rbp-330h] BYREF
  char v504; // [rsp+2A8h] [rbp-320h]
  __int128 v505; // [rsp+2B0h] [rbp-318h] BYREF
  _QWORD v506[3]; // [rsp+2C0h] [rbp-308h] BYREF
  _QWORD v507[3]; // [rsp+2D8h] [rbp-2F0h] BYREF
  char v508[8]; // [rsp+2F0h] [rbp-2D8h] BYREF
  __int128 v509; // [rsp+2F8h] [rbp-2D0h]
  _QWORD v510[3]; // [rsp+308h] [rbp-2C0h] BYREF
  char v511[8]; // [rsp+320h] [rbp-2A8h] BYREF
  __int128 v512; // [rsp+328h] [rbp-2A0h]
  char v513; // [rsp+338h] [rbp-290h]
  __int128 v514; // [rsp+340h] [rbp-288h]
  char v515[8]; // [rsp+350h] [rbp-278h] BYREF
  __int128 v516; // [rsp+358h] [rbp-270h]
  char v517; // [rsp+368h] [rbp-260h]
  __int128 v518; // [rsp+370h] [rbp-258h]
  _QWORD v519[3]; // [rsp+380h] [rbp-248h] BYREF
  _QWORD v520[3]; // [rsp+398h] [rbp-230h] BYREF
  char v521[8]; // [rsp+3B0h] [rbp-218h] BYREF
  __int128 v522; // [rsp+3B8h] [rbp-210h]
  _QWORD v523[3]; // [rsp+3C8h] [rbp-200h] BYREF
  char v524[8]; // [rsp+3E0h] [rbp-1E8h] BYREF
  __int128 v525; // [rsp+3E8h] [rbp-1E0h]
  _QWORD v526[3]; // [rsp+3F8h] [rbp-1D0h] BYREF
  char v527[8]; // [rsp+410h] [rbp-1B8h] BYREF
  _OWORD v528[2]; // [rsp+418h] [rbp-1B0h] BYREF
  __int64 v529; // [rsp+438h] [rbp-190h]
  _QWORD v530[3]; // [rsp+440h] [rbp-188h] BYREF
  _QWORD v531[3]; // [rsp+458h] [rbp-170h] BYREF
  _QWORD v532[3]; // [rsp+470h] [rbp-158h] BYREF
  char v533; // [rsp+488h] [rbp-140h] BYREF
  _QWORD v534[2]; // [rsp+490h] [rbp-138h] BYREF
  __m128i v535; // [rsp+4A0h] [rbp-128h] BYREF
  __int64 v536; // [rsp+4B8h] [rbp-110h]
  _QWORD v537[3]; // [rsp+4C0h] [rbp-108h] BYREF
  char v538; // [rsp+4D8h] [rbp-F0h] BYREF
  void *v539[2]; // [rsp+4E0h] [rbp-E8h] BYREF
  _QWORD v540[2]; // [rsp+4F0h] [rbp-D8h] BYREF
  void *v541; // [rsp+500h] [rbp-C8h]
  __int64 v542; // [rsp+508h] [rbp-C0h]
  _QWORD v543[2]; // [rsp+510h] [rbp-B8h] BYREF
  char v544; // [rsp+520h] [rbp-A8h]
  __int64 v545; // [rsp+528h] [rbp-A0h]
  char v546; // [rsp+540h] [rbp-88h]
  char v547; // [rsp+568h] [rbp-60h]
  char v548; // [rsp+578h] [rbp-50h]
  unsigned __int64 v549; // [rsp+588h] [rbp-40h]

  v464 = this;
  v549 = __readfsqword(0x28u);
  v539[0] = v540;
  v539[1] = nullptr;
  LOBYTE(v540[0]) = 0;
  v541 = v543;
  v542 = 0;
  LOBYTE(v543[0]) = 0;
  v463 = v539;
  v544 = 0;
  v545 = 0;
  v546 = 0;
  v548 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  *(_QWORD *)&v482 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v481[0] = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "type", v3, v4, v5, v6, v160, v197, v233);
  v483 = 0;
  *(_QWORD *)&v484 = 0;
  v482 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v483 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "object", v8, v9, v10, v11, v161, v198, v234);
  v469 = v481;
  v484 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v534,
    (__int64)v481,
    2,
    v12,
    v13,
    v14,
    v162,
    v199,
    v235,
    v269,
    (int)&v482,
    (int)&v484,
    v317,
    v333,
    v349,
    v365,
    v381,
    v397,
    v413,
    v429,
    v445);
  v535.m128i_i64[0] = 0;
  v524[0] = 0;
  *(_QWORD *)&v525 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v524[0] = 3;
  v15 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v15, "properties", v16, v17, v18, v19, v163, v200, v236);
  v495[0] = 0;
  *(_QWORD *)&v496 = 0;
  v525 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v495[0] = 3;
  v20 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v20, "address", v21, v22, v23, v24, v164, v201, v237);
  v485[0] = 0;
  *(_QWORD *)&v486 = 0;
  v496 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v485[0] = 3;
  v25 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v25, "type", v26, v27, v28, v29, v165, v202, v238);
  v487 = 0;
  *(_QWORD *)&v488 = 0;
  v486 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v487 = 3;
  v30 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v30, "string", v31, v32, v33, v34, v166, v203, v239);
  v470 = v485;
  v488 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v493,
    (__int64)v485,
    2,
    v35,
    v36,
    v37,
    v167,
    (__int64)v493,
    v240,
    v270,
    v285,
    v301,
    (__int64)&v486,
    (int)&v488,
    v350,
    v366,
    (int)&v496,
    v398,
    v414,
    v430,
    v446);
  v493[2] = 0;
  v489[0] = 0;
  *(_QWORD *)&v490 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v489[0] = 3;
  v38 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v38, "description", v39, v40, v41, v42, v168, v204, v241);
  v491 = 0;
  *(_QWORD *)&v492 = 0;
  v490 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v491 = 3;
  v43 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v43,
    "Hex address of function to generate microcode for",
    v44,
    v45,
    v46,
    v47,
    v169,
    v205,
    v242);
  v471 = v489;
  v492 = (unsigned __int64)v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v494,
    (__int64)v489,
    2,
    v48,
    v49,
    v50,
    v170,
    v206,
    v243,
    v271,
    v286,
    v302,
    v318,
    v334,
    (int)&v490,
    (int)&v492,
    v382,
    v399,
    v415,
    v431,
    v447);
  v494[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v497,
    v207,
    2,
    v51,
    v52,
    v53,
    v171,
    v207,
    v244,
    v272,
    v287,
    v303,
    v319,
    v335,
    v351,
    v367,
    v383,
    v400,
    v416,
    v432,
    v448);
  v497[2] = 0;
  v466 = v495;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v530,
    (__int64)v495,
    2,
    v54,
    v55,
    v56,
    v172,
    v208,
    v245,
    v273,
    v288,
    v304,
    v320,
    v336,
    v352,
    v368,
    v384,
    v401,
    v417,
    v433,
    v449);
  v530[2] = 0;
  v508[0] = 0;
  *(_QWORD *)&v509 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v508[0] = 3;
  v57 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v57, "maturity", v58, v59, v60, v61, v173, v209, v246);
  v498[0] = 0;
  *(_QWORD *)&v499 = 0;
  v509 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v498[0] = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v62, "type", v63, v64, v65, v66, v174, v210, v247);
  v500 = 0;
  *(_QWORD *)&v501 = 0;
  v499 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v500 = 3;
  v67 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v67, "integer", v68, v69, v70, v71, v175, v211, v248);
  v472 = v498;
  v501 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v506,
    (__int64)v498,
    2,
    v72,
    v73,
    v74,
    v176,
    v212,
    (int)v506,
    v274,
    v289,
    v305,
    v321,
    v337,
    v353,
    v369,
    v385,
    (char)&v499,
    (__int64)&v501,
    v434,
    v450);
  v506[2] = 0;
  v502[0] = 0;
  *(_QWORD *)&v503 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v502[0] = 3;
  v75 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v75, "description", v76, v77, v78, v79, v177, v213, v249);
  v504 = 0;
  *(_QWORD *)&v505 = 0;
  v503 = (unsigned __int64)v75;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v504 = 3;
  v80 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v80,
    "Microcode maturity level 1-8 (default: 7 = GLBOPT3). Lower = closer to raw assembly, higher = more optimized.",
    v81,
    v82,
    v83,
    v84,
    v178,
    v214,
    v250);
  v473 = v502;
  v505 = (unsigned __int64)v80;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v507,
    (__int64)v502,
    2,
    v85,
    v86,
    v87,
    v179,
    v215,
    v251,
    v275,
    v290,
    v306,
    v322,
    v338,
    v354,
    v370,
    v386,
    v402,
    v418,
    (int)&v503,
    (__int64)&v505);
  v507[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v510,
    v252,
    2,
    v88,
    v89,
    v90,
    v180,
    v216,
    v252,
    v276,
    v291,
    v307,
    v323,
    v339,
    v355,
    v371,
    v387,
    v403,
    v419,
    v435,
    v451);
  v510[2] = 0;
  v467 = v508;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v531,
    (__int64)v508,
    2,
    v91,
    v92,
    v93,
    v181,
    v217,
    v253,
    v277,
    v292,
    v308,
    v324,
    v340,
    v356,
    v372,
    v388,
    v404,
    v420,
    v436,
    v452);
  v531[2] = 0;
  v521[0] = 0;
  *(_QWORD *)&v522 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v521[0] = 3;
  v94 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v94, "max_instructions", v95, v96, v97, v98, v182, v218, v254);
  v511[0] = 0;
  *(_QWORD *)&v512 = 0;
  v522 = (unsigned __int64)v94;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v511[0] = 3;
  v99 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v99, "type", v100, v101, v102, v103, v183, v219, v255);
  v513 = 0;
  *(_QWORD *)&v514 = 0;
  v512 = (unsigned __int64)v99;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v513 = 3;
  v104 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v104, "integer", v105, v106, v107, v108, v184, v220, v256);
  v474 = v511;
  v514 = (unsigned __int64)v104;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v519,
    (__int64)v511,
    2,
    v109,
    v110,
    v111,
    v185,
    v221,
    v257,
    v278,
    v293,
    v309,
    v325,
    v341,
    v357,
    v373,
    v389,
    v405,
    v421,
    v437,
    v453);
  v519[2] = 0;
  v515[0] = 0;
  *(_QWORD *)&v516 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v515[0] = 3;
  v112 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v112, "description", v113, v114, v115, v116, v186, v222, v258);
  v517 = 0;
  *(_QWORD *)&v518 = 0;
  v516 = (unsigned __int64)v112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v517 = 3;
  v117 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v117,
    "Max number of microinstructions to return (default: 500). Prevents huge outputs.",
    v118,
    v119,
    v120,
    v121,
    v187,
    v223,
    v259);
  v475 = v515;
  v518 = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v520,
    (__int64)v515,
    2,
    v122,
    v123,
    v124,
    v188,
    v224,
    v260,
    v279,
    v294,
    v310,
    v326,
    v342,
    v358,
    v374,
    v390,
    v406,
    v422,
    v438,
    v454);
  v520[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v523,
    (__int64)v519,
    2,
    v125,
    v126,
    v127,
    v189,
    v225,
    v261,
    v280,
    v295,
    v311,
    v327,
    v343,
    v359,
    v375,
    v391,
    v407,
    v423,
    v439,
    v455);
  v523[2] = 0;
  v468 = v521;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v532,
    (__int64)v521,
    2,
    v128,
    v129,
    v130,
    v190,
    v226,
    v262,
    v281,
    v296,
    v312,
    v328,
    v344,
    v360,
    v376,
    v392,
    v408,
    v424,
    v440,
    v456);
  v532[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v526,
    (__int64)v530,
    3,
    v131,
    v132,
    v133,
    v191,
    v227,
    v263,
    v282,
    v297,
    v313,
    v329,
    v345,
    v361,
    v377,
    v393,
    v409,
    v425,
    v441,
    v457);
  v526[2] = 0;
  v465 = v524;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v535.m128i_i64[1],
    (__int64)v524,
    2,
    v134,
    v135,
    v136,
    v192,
    v228,
    v264,
    v283,
    v298,
    v314,
    v330,
    v346,
    v362,
    v378,
    v394,
    v410,
    v426,
    v442,
    v458);
  v536 = 0;
  v527[0] = 0;
  *(_QWORD *)&v528[0] = 0;
  v462 = v528;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v527[0] = 3;
  v137 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v137, "required", v138, v139, v140, v141, v193, v229, v265);
  *(_QWORD *)&v480 = 0;
  v528[0] = (unsigned __int64)v137;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v479 = 3;
  v142 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v142, "address", v143, v144, v145, v146, v194, v230, v266);
  v480 = (unsigned __int64)v142;
  v461 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v147 = _mm_load_si128(&v476);
  v529 = 0;
  v528[1] = v147;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v537,
    (__int64)v527,
    2,
    v148,
    v149,
    v150,
    v195,
    v231,
    v267,
    (int)&v480,
    v299,
    v315,
    v331,
    v347,
    v363,
    v379,
    v395,
    v411,
    v427,
    v443,
    v459);
  v537[2] = 0;
  LOBYTE(v477) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v477,
    (__int64)v534,
    3,
    v151,
    v152,
    v153,
    v196,
    v232,
    v268,
    v284,
    v300,
    v316,
    v332,
    v348,
    v364,
    v380,
    v396,
    v412,
    v428,
    v444,
    v460);
  v154 = v544;
  v155 = &v538;
  v544 = v477;
  v156 = v545;
  LOBYTE(v477) = v154;
  v545 = v478;
  v478 = v156;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v155 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v155 != (char *)v534 );
  v157 = &v533;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v157 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v157 != (char *)v530 );
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
  si128 = _mm_load_si128((const __m128i *)&v461);
  v534[1] = 0;
  v534[0] = ida_mcp::tools::microcode::`anonymous namespace'::get_microcode;
  v535 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v535.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v535.m128i_i64[0])(v534, v534, 3);
  if ( v548 )
  {
    v548 = 0;
    if ( v547 )
    {
      v547 = 0;
      std::string::_M_dispose();
    }
  }
  if ( v546 )
  {
    v546 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v541 != v543 )
    operator delete(v541, v543[0] + 1LL);
  if ( v539[0] != v540 )
    operator delete(v539[0], v540[0] + 1LL);
  return v549 - __readfsqword(0x28u);
}

