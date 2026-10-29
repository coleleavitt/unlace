unsigned __int64 __fastcall ida_mcp::tools::function_context::register_tools(
        ida_mcp::tools::function_context *this,
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
  __int64 *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rbx
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
  __int64 *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 *v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 *v80; // rbx
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
  __int64 *v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 *v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 *v104; // rbx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 *v112; // rbx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 *v117; // rbx
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
  __int64 *v131; // rbx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 *v136; // rbx
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 *v141; // rbx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 *v149; // rbx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 *v154; // rbx
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 *v174; // rbx
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 *v179; // rbx
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  __m128i v184; // xmm0
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  char v191; // si
  char *v192; // rbx
  __int64 v193; // rax
  void **v194; // rbx
  __m128i si128; // xmm2
  int v197; // [rsp+0h] [rbp-6D8h]
  int v198; // [rsp+0h] [rbp-6D8h]
  int v199; // [rsp+0h] [rbp-6D8h]
  int v200; // [rsp+0h] [rbp-6D8h]
  int v201; // [rsp+0h] [rbp-6D8h]
  int v202; // [rsp+0h] [rbp-6D8h]
  int v203; // [rsp+0h] [rbp-6D8h]
  int v204; // [rsp+0h] [rbp-6D8h]
  int v205; // [rsp+0h] [rbp-6D8h]
  int v206; // [rsp+0h] [rbp-6D8h]
  int v207; // [rsp+0h] [rbp-6D8h]
  int v208; // [rsp+0h] [rbp-6D8h]
  int v209; // [rsp+0h] [rbp-6D8h]
  int v210; // [rsp+0h] [rbp-6D8h]
  int v211; // [rsp+0h] [rbp-6D8h]
  int v212; // [rsp+0h] [rbp-6D8h]
  int v213; // [rsp+0h] [rbp-6D8h]
  int v214; // [rsp+0h] [rbp-6D8h]
  int v215; // [rsp+0h] [rbp-6D8h]
  __int64 v216; // [rsp+0h] [rbp-6D8h]
  int v217; // [rsp+0h] [rbp-6D8h]
  int v218; // [rsp+0h] [rbp-6D8h]
  int v219; // [rsp+0h] [rbp-6D8h]
  int v220; // [rsp+0h] [rbp-6D8h]
  int v221; // [rsp+0h] [rbp-6D8h]
  int v222; // [rsp+0h] [rbp-6D8h]
  int v223; // [rsp+0h] [rbp-6D8h]
  int v224; // [rsp+0h] [rbp-6D8h]
  int v225; // [rsp+0h] [rbp-6D8h]
  int v226; // [rsp+0h] [rbp-6D8h]
  int v227; // [rsp+0h] [rbp-6D8h]
  int v228; // [rsp+0h] [rbp-6D8h]
  int v229; // [rsp+0h] [rbp-6D8h]
  int v230; // [rsp+0h] [rbp-6D8h]
  int v231; // [rsp+0h] [rbp-6D8h]
  int v232; // [rsp+0h] [rbp-6D8h]
  int v233; // [rsp+0h] [rbp-6D8h]
  int v234; // [rsp+0h] [rbp-6D8h]
  int v235; // [rsp+0h] [rbp-6D8h]
  int v236; // [rsp+0h] [rbp-6D8h]
  int v237; // [rsp+0h] [rbp-6D8h]
  int v238; // [rsp+0h] [rbp-6D8h]
  int v239; // [rsp+0h] [rbp-6D8h]
  int v240; // [rsp+0h] [rbp-6D8h]
  int v241; // [rsp+0h] [rbp-6D8h]
  int v242; // [rsp+8h] [rbp-6D0h]
  int v243; // [rsp+8h] [rbp-6D0h]
  __int64 v244; // [rsp+8h] [rbp-6D0h]
  int v245; // [rsp+8h] [rbp-6D0h]
  int v246; // [rsp+8h] [rbp-6D0h]
  int v247; // [rsp+8h] [rbp-6D0h]
  int v248; // [rsp+8h] [rbp-6D0h]
  __int64 v249; // [rsp+8h] [rbp-6D0h]
  int v250; // [rsp+8h] [rbp-6D0h]
  int v251; // [rsp+8h] [rbp-6D0h]
  __int64 v252; // [rsp+8h] [rbp-6D0h]
  __int64 v253; // [rsp+8h] [rbp-6D0h]
  __int64 v254; // [rsp+8h] [rbp-6D0h]
  int v255; // [rsp+8h] [rbp-6D0h]
  int v256; // [rsp+8h] [rbp-6D0h]
  int v257; // [rsp+8h] [rbp-6D0h]
  __int64 v258; // [rsp+8h] [rbp-6D0h]
  int v259; // [rsp+8h] [rbp-6D0h]
  int v260; // [rsp+8h] [rbp-6D0h]
  __int64 v261; // [rsp+8h] [rbp-6D0h]
  __int64 v262; // [rsp+8h] [rbp-6D0h]
  __int64 v263; // [rsp+8h] [rbp-6D0h]
  int v264; // [rsp+8h] [rbp-6D0h]
  int v265; // [rsp+8h] [rbp-6D0h]
  int v266; // [rsp+8h] [rbp-6D0h]
  int v267; // [rsp+8h] [rbp-6D0h]
  int v268; // [rsp+8h] [rbp-6D0h]
  __int64 v269; // [rsp+8h] [rbp-6D0h]
  __int64 v270; // [rsp+8h] [rbp-6D0h]
  __int64 v271; // [rsp+8h] [rbp-6D0h]
  int v272; // [rsp+8h] [rbp-6D0h]
  int v273; // [rsp+8h] [rbp-6D0h]
  int v274; // [rsp+8h] [rbp-6D0h]
  __int64 v275; // [rsp+8h] [rbp-6D0h]
  int v276; // [rsp+8h] [rbp-6D0h]
  int v277; // [rsp+8h] [rbp-6D0h]
  __int64 v278; // [rsp+8h] [rbp-6D0h]
  __int64 v279; // [rsp+8h] [rbp-6D0h]
  __int64 v280; // [rsp+8h] [rbp-6D0h]
  __int64 v281; // [rsp+8h] [rbp-6D0h]
  __int64 v282; // [rsp+8h] [rbp-6D0h]
  int v283; // [rsp+8h] [rbp-6D0h]
  int v284; // [rsp+8h] [rbp-6D0h]
  __int64 v285; // [rsp+8h] [rbp-6D0h]
  __int64 v286; // [rsp+8h] [rbp-6D0h]
  __int64 v287; // [rsp+10h] [rbp-6C8h]
  __int64 v288; // [rsp+10h] [rbp-6C8h]
  int v289; // [rsp+10h] [rbp-6C8h]
  __int64 v290; // [rsp+10h] [rbp-6C8h]
  __int64 v291; // [rsp+10h] [rbp-6C8h]
  __int64 v292; // [rsp+10h] [rbp-6C8h]
  __int64 v293; // [rsp+10h] [rbp-6C8h]
  int v294; // [rsp+10h] [rbp-6C8h]
  __int64 v295; // [rsp+10h] [rbp-6C8h]
  __int64 v296; // [rsp+10h] [rbp-6C8h]
  int v297; // [rsp+10h] [rbp-6C8h]
  int v298; // [rsp+10h] [rbp-6C8h]
  int v299; // [rsp+10h] [rbp-6C8h]
  __int64 v300; // [rsp+10h] [rbp-6C8h]
  __int64 v301; // [rsp+10h] [rbp-6C8h]
  __int64 v302; // [rsp+10h] [rbp-6C8h]
  int v303; // [rsp+10h] [rbp-6C8h]
  __int64 v304; // [rsp+10h] [rbp-6C8h]
  __int64 v305; // [rsp+10h] [rbp-6C8h]
  int v306; // [rsp+10h] [rbp-6C8h]
  int v307; // [rsp+10h] [rbp-6C8h]
  int v308; // [rsp+10h] [rbp-6C8h]
  __int64 v309; // [rsp+10h] [rbp-6C8h]
  __int64 v310; // [rsp+10h] [rbp-6C8h]
  __int64 v311; // [rsp+10h] [rbp-6C8h]
  int v312; // [rsp+10h] [rbp-6C8h]
  __int64 v313; // [rsp+10h] [rbp-6C8h]
  __int64 v314; // [rsp+10h] [rbp-6C8h]
  int v315; // [rsp+10h] [rbp-6C8h]
  int v316; // [rsp+10h] [rbp-6C8h]
  int v317; // [rsp+10h] [rbp-6C8h]
  __int64 v318; // [rsp+10h] [rbp-6C8h]
  __int64 v319; // [rsp+10h] [rbp-6C8h]
  __int64 v320; // [rsp+10h] [rbp-6C8h]
  __int64 v321; // [rsp+10h] [rbp-6C8h]
  __int64 v322; // [rsp+10h] [rbp-6C8h]
  int v323; // [rsp+10h] [rbp-6C8h]
  __int64 v324; // [rsp+10h] [rbp-6C8h]
  int v325; // [rsp+10h] [rbp-6C8h]
  int v326; // [rsp+10h] [rbp-6C8h]
  int v327; // [rsp+10h] [rbp-6C8h]
  __int64 v328; // [rsp+10h] [rbp-6C8h]
  __int64 v329; // [rsp+10h] [rbp-6C8h]
  int v330; // [rsp+10h] [rbp-6C8h]
  int v331; // [rsp+10h] [rbp-6C8h]
  int v332; // [rsp+18h] [rbp-6C0h]
  int v333; // [rsp+18h] [rbp-6C0h]
  __int64 v334; // [rsp+18h] [rbp-6C0h]
  int v335; // [rsp+18h] [rbp-6C0h]
  int v336; // [rsp+18h] [rbp-6C0h]
  int v337; // [rsp+18h] [rbp-6C0h]
  int v338; // [rsp+18h] [rbp-6C0h]
  int v339; // [rsp+18h] [rbp-6C0h]
  int v340; // [rsp+18h] [rbp-6C0h]
  int v341; // [rsp+18h] [rbp-6C0h]
  int v342; // [rsp+18h] [rbp-6C0h]
  int v343; // [rsp+18h] [rbp-6C0h]
  int v344; // [rsp+18h] [rbp-6C0h]
  int v345; // [rsp+18h] [rbp-6C0h]
  int v346; // [rsp+18h] [rbp-6C0h]
  int v347; // [rsp+18h] [rbp-6C0h]
  int v348; // [rsp+18h] [rbp-6C0h]
  int v349; // [rsp+18h] [rbp-6C0h]
  int v350; // [rsp+18h] [rbp-6C0h]
  int v351; // [rsp+18h] [rbp-6C0h]
  int v352; // [rsp+20h] [rbp-6B8h]
  int v353; // [rsp+20h] [rbp-6B8h]
  int v354; // [rsp+20h] [rbp-6B8h]
  int v355; // [rsp+20h] [rbp-6B8h]
  int v356; // [rsp+20h] [rbp-6B8h]
  int v357; // [rsp+20h] [rbp-6B8h]
  int v358; // [rsp+20h] [rbp-6B8h]
  int v359; // [rsp+20h] [rbp-6B8h]
  int v360; // [rsp+20h] [rbp-6B8h]
  int v361; // [rsp+20h] [rbp-6B8h]
  int v362; // [rsp+20h] [rbp-6B8h]
  int v363; // [rsp+20h] [rbp-6B8h]
  int v364; // [rsp+20h] [rbp-6B8h]
  int v365; // [rsp+20h] [rbp-6B8h]
  int v366; // [rsp+20h] [rbp-6B8h]
  int v367; // [rsp+20h] [rbp-6B8h]
  int v368; // [rsp+20h] [rbp-6B8h]
  int v369; // [rsp+20h] [rbp-6B8h]
  int v370; // [rsp+20h] [rbp-6B8h]
  int v371; // [rsp+20h] [rbp-6B8h]
  int v372; // [rsp+28h] [rbp-6B0h]
  int v373; // [rsp+28h] [rbp-6B0h]
  int v374; // [rsp+28h] [rbp-6B0h]
  int v375; // [rsp+28h] [rbp-6B0h]
  int v376; // [rsp+28h] [rbp-6B0h]
  int v377; // [rsp+28h] [rbp-6B0h]
  int v378; // [rsp+28h] [rbp-6B0h]
  int v379; // [rsp+28h] [rbp-6B0h]
  int v380; // [rsp+28h] [rbp-6B0h]
  int v381; // [rsp+28h] [rbp-6B0h]
  int v382; // [rsp+28h] [rbp-6B0h]
  int v383; // [rsp+28h] [rbp-6B0h]
  int v384; // [rsp+28h] [rbp-6B0h]
  int v385; // [rsp+28h] [rbp-6B0h]
  int v386; // [rsp+28h] [rbp-6B0h]
  int v387; // [rsp+28h] [rbp-6B0h]
  int v388; // [rsp+28h] [rbp-6B0h]
  int v389; // [rsp+28h] [rbp-6B0h]
  int v390; // [rsp+28h] [rbp-6B0h]
  int v391; // [rsp+28h] [rbp-6B0h]
  __int64 v392; // [rsp+30h] [rbp-6A8h]
  __int64 v393; // [rsp+30h] [rbp-6A8h]
  __int64 v394; // [rsp+30h] [rbp-6A8h]
  __int64 v395; // [rsp+30h] [rbp-6A8h]
  __int64 v396; // [rsp+30h] [rbp-6A8h]
  __int64 v397; // [rsp+30h] [rbp-6A8h]
  __int64 v398; // [rsp+30h] [rbp-6A8h]
  __int64 v399; // [rsp+30h] [rbp-6A8h]
  __int64 v400; // [rsp+30h] [rbp-6A8h]
  __int64 v401; // [rsp+30h] [rbp-6A8h]
  __int64 v402; // [rsp+30h] [rbp-6A8h]
  __int64 v403; // [rsp+30h] [rbp-6A8h]
  __int64 v404; // [rsp+30h] [rbp-6A8h]
  __int64 v405; // [rsp+30h] [rbp-6A8h]
  __int64 v406; // [rsp+30h] [rbp-6A8h]
  __int64 v407; // [rsp+30h] [rbp-6A8h]
  __int64 v408; // [rsp+30h] [rbp-6A8h]
  __int64 v409; // [rsp+30h] [rbp-6A8h]
  __int64 v410; // [rsp+30h] [rbp-6A8h]
  __int64 v411; // [rsp+30h] [rbp-6A8h]
  int v412; // [rsp+38h] [rbp-6A0h]
  int v413; // [rsp+38h] [rbp-6A0h]
  int v414; // [rsp+38h] [rbp-6A0h]
  int v415; // [rsp+38h] [rbp-6A0h]
  int v416; // [rsp+38h] [rbp-6A0h]
  int v417; // [rsp+38h] [rbp-6A0h]
  int v418; // [rsp+38h] [rbp-6A0h]
  int v419; // [rsp+38h] [rbp-6A0h]
  int v420; // [rsp+38h] [rbp-6A0h]
  int v421; // [rsp+38h] [rbp-6A0h]
  int v422; // [rsp+38h] [rbp-6A0h]
  int v423; // [rsp+38h] [rbp-6A0h]
  int v424; // [rsp+38h] [rbp-6A0h]
  int v425; // [rsp+38h] [rbp-6A0h]
  int v426; // [rsp+38h] [rbp-6A0h]
  int v427; // [rsp+38h] [rbp-6A0h]
  int v428; // [rsp+38h] [rbp-6A0h]
  int v429; // [rsp+38h] [rbp-6A0h]
  int v430; // [rsp+38h] [rbp-6A0h]
  int v431; // [rsp+38h] [rbp-6A0h]
  int v432; // [rsp+40h] [rbp-698h]
  int v433; // [rsp+40h] [rbp-698h]
  int v434; // [rsp+40h] [rbp-698h]
  int v435; // [rsp+40h] [rbp-698h]
  int v436; // [rsp+40h] [rbp-698h]
  int v437; // [rsp+40h] [rbp-698h]
  int v438; // [rsp+40h] [rbp-698h]
  int v439; // [rsp+40h] [rbp-698h]
  int v440; // [rsp+40h] [rbp-698h]
  int v441; // [rsp+40h] [rbp-698h]
  int v442; // [rsp+40h] [rbp-698h]
  int v443; // [rsp+40h] [rbp-698h]
  int v444; // [rsp+40h] [rbp-698h]
  int v445; // [rsp+40h] [rbp-698h]
  int v446; // [rsp+40h] [rbp-698h]
  int v447; // [rsp+40h] [rbp-698h]
  int v448; // [rsp+40h] [rbp-698h]
  int v449; // [rsp+40h] [rbp-698h]
  int v450; // [rsp+40h] [rbp-698h]
  int v451; // [rsp+40h] [rbp-698h]
  int v452; // [rsp+48h] [rbp-690h]
  int v453; // [rsp+48h] [rbp-690h]
  int v454; // [rsp+48h] [rbp-690h]
  int v455; // [rsp+48h] [rbp-690h]
  int v456; // [rsp+48h] [rbp-690h]
  int v457; // [rsp+48h] [rbp-690h]
  int v458; // [rsp+48h] [rbp-690h]
  int v459; // [rsp+48h] [rbp-690h]
  int v460; // [rsp+48h] [rbp-690h]
  int v461; // [rsp+48h] [rbp-690h]
  int v462; // [rsp+48h] [rbp-690h]
  int v463; // [rsp+48h] [rbp-690h]
  int v464; // [rsp+48h] [rbp-690h]
  int v465; // [rsp+48h] [rbp-690h]
  int v466; // [rsp+48h] [rbp-690h]
  int v467; // [rsp+48h] [rbp-690h]
  int v468; // [rsp+48h] [rbp-690h]
  int v469; // [rsp+48h] [rbp-690h]
  int v470; // [rsp+48h] [rbp-690h]
  int v471; // [rsp+48h] [rbp-690h]
  int v472; // [rsp+50h] [rbp-688h]
  int v473; // [rsp+50h] [rbp-688h]
  int v474; // [rsp+50h] [rbp-688h]
  int v475; // [rsp+50h] [rbp-688h]
  int v476; // [rsp+50h] [rbp-688h]
  int v477; // [rsp+50h] [rbp-688h]
  int v478; // [rsp+50h] [rbp-688h]
  int v479; // [rsp+50h] [rbp-688h]
  int v480; // [rsp+50h] [rbp-688h]
  int v481; // [rsp+50h] [rbp-688h]
  int v482; // [rsp+50h] [rbp-688h]
  int v483; // [rsp+50h] [rbp-688h]
  int v484; // [rsp+50h] [rbp-688h]
  int v485; // [rsp+50h] [rbp-688h]
  int v486; // [rsp+50h] [rbp-688h]
  int v487; // [rsp+50h] [rbp-688h]
  int v488; // [rsp+50h] [rbp-688h]
  int v489; // [rsp+50h] [rbp-688h]
  int v490; // [rsp+50h] [rbp-688h]
  int v491; // [rsp+50h] [rbp-688h]
  char v492; // [rsp+58h] [rbp-680h]
  char v493; // [rsp+58h] [rbp-680h]
  char v494; // [rsp+58h] [rbp-680h]
  char v495; // [rsp+58h] [rbp-680h]
  char v496; // [rsp+58h] [rbp-680h]
  char v497; // [rsp+58h] [rbp-680h]
  char v498; // [rsp+58h] [rbp-680h]
  char v499; // [rsp+58h] [rbp-680h]
  char v500; // [rsp+58h] [rbp-680h]
  char v501; // [rsp+58h] [rbp-680h]
  char v502; // [rsp+58h] [rbp-680h]
  char v503; // [rsp+58h] [rbp-680h]
  char v504; // [rsp+58h] [rbp-680h]
  char v505; // [rsp+58h] [rbp-680h]
  char v506; // [rsp+58h] [rbp-680h]
  char v507; // [rsp+58h] [rbp-680h]
  char v508; // [rsp+58h] [rbp-680h]
  char v509; // [rsp+58h] [rbp-680h]
  char v510; // [rsp+58h] [rbp-680h]
  char v511; // [rsp+58h] [rbp-680h]
  __int64 v512; // [rsp+60h] [rbp-678h]
  __int64 v513; // [rsp+60h] [rbp-678h]
  __int64 v514; // [rsp+60h] [rbp-678h]
  __int64 v515; // [rsp+60h] [rbp-678h]
  __int64 v516; // [rsp+60h] [rbp-678h]
  __int64 v517; // [rsp+60h] [rbp-678h]
  __int64 v518; // [rsp+60h] [rbp-678h]
  __int64 v519; // [rsp+60h] [rbp-678h]
  __int64 v520; // [rsp+60h] [rbp-678h]
  __int64 v521; // [rsp+60h] [rbp-678h]
  __int64 v522; // [rsp+60h] [rbp-678h]
  __int64 v523; // [rsp+60h] [rbp-678h]
  __int64 v524; // [rsp+60h] [rbp-678h]
  __int64 v525; // [rsp+60h] [rbp-678h]
  __int64 v526; // [rsp+60h] [rbp-678h]
  __int64 v527; // [rsp+60h] [rbp-678h]
  __int64 v528; // [rsp+60h] [rbp-678h]
  __int64 v529; // [rsp+60h] [rbp-678h]
  __int64 v530; // [rsp+60h] [rbp-678h]
  __int64 v531; // [rsp+60h] [rbp-678h]
  int v532; // [rsp+68h] [rbp-670h]
  int v533; // [rsp+68h] [rbp-670h]
  int v534; // [rsp+68h] [rbp-670h]
  int v535; // [rsp+68h] [rbp-670h]
  int v536; // [rsp+68h] [rbp-670h]
  int v537; // [rsp+68h] [rbp-670h]
  int v538; // [rsp+68h] [rbp-670h]
  int v539; // [rsp+68h] [rbp-670h]
  int v540; // [rsp+68h] [rbp-670h]
  int v541; // [rsp+68h] [rbp-670h]
  int v542; // [rsp+68h] [rbp-670h]
  int v543; // [rsp+68h] [rbp-670h]
  int v544; // [rsp+68h] [rbp-670h]
  int v545; // [rsp+68h] [rbp-670h]
  int v546; // [rsp+68h] [rbp-670h]
  int v547; // [rsp+68h] [rbp-670h]
  int v548; // [rsp+68h] [rbp-670h]
  int v549; // [rsp+68h] [rbp-670h]
  int v550; // [rsp+68h] [rbp-670h]
  int v551; // [rsp+68h] [rbp-670h]
  __int64 v552; // [rsp+70h] [rbp-668h]
  __int64 v553; // [rsp+70h] [rbp-668h]
  __int64 v554; // [rsp+70h] [rbp-668h]
  __int64 v555; // [rsp+70h] [rbp-668h]
  __int64 v556; // [rsp+70h] [rbp-668h]
  __int64 v557; // [rsp+70h] [rbp-668h]
  __int64 v558; // [rsp+70h] [rbp-668h]
  __int64 v559; // [rsp+70h] [rbp-668h]
  __int64 v560; // [rsp+70h] [rbp-668h]
  __int64 v561; // [rsp+70h] [rbp-668h]
  __int64 v562; // [rsp+70h] [rbp-668h]
  __int64 v563; // [rsp+70h] [rbp-668h]
  __int64 v564; // [rsp+70h] [rbp-668h]
  __int64 v565; // [rsp+70h] [rbp-668h]
  __int64 v566; // [rsp+70h] [rbp-668h]
  __int64 v567; // [rsp+70h] [rbp-668h]
  __int64 v568; // [rsp+70h] [rbp-668h]
  __int64 v569; // [rsp+70h] [rbp-668h]
  __int64 v570; // [rsp+70h] [rbp-668h]
  __int64 v571; // [rsp+70h] [rbp-668h]
  __m128 v572; // [rsp+E0h] [rbp-5F8h] BYREF
  __int128 *v573; // [rsp+F0h] [rbp-5E8h]
  ida_mcp::tools::function_context *v574; // [rsp+F8h] [rbp-5E0h]
  char *v575; // [rsp+100h] [rbp-5D8h]
  char *v576; // [rsp+108h] [rbp-5D0h]
  char *v577; // [rsp+110h] [rbp-5C8h]
  char *v578; // [rsp+118h] [rbp-5C0h]
  char *v579; // [rsp+120h] [rbp-5B8h]
  char *v580; // [rsp+128h] [rbp-5B0h]
  char *v581; // [rsp+130h] [rbp-5A8h]
  char *v582; // [rsp+138h] [rbp-5A0h]
  char *v583; // [rsp+140h] [rbp-598h]
  char *v584; // [rsp+148h] [rbp-590h]
  char *v585; // [rsp+150h] [rbp-588h]
  char *v586; // [rsp+158h] [rbp-580h]
  char *v587; // [rsp+160h] [rbp-578h]
  char *v588; // [rsp+168h] [rbp-570h]
  __m128i v589; // [rsp+170h] [rbp-568h] BYREF
  __int64 v590; // [rsp+180h] [rbp-558h] BYREF
  __int64 v591; // [rsp+188h] [rbp-550h]
  char v592; // [rsp+190h] [rbp-548h]
  __int128 v593; // [rsp+198h] [rbp-540h]
  char v594[8]; // [rsp+1B0h] [rbp-528h] BYREF
  __int128 v595; // [rsp+1B8h] [rbp-520h]
  char v596; // [rsp+1C8h] [rbp-510h]
  __int128 v597; // [rsp+1D0h] [rbp-508h]
  char v598[8]; // [rsp+1E0h] [rbp-4F8h] BYREF
  __int128 v599; // [rsp+1E8h] [rbp-4F0h]
  char v600; // [rsp+1F8h] [rbp-4E0h]
  __int128 v601; // [rsp+200h] [rbp-4D8h]
  char v602[8]; // [rsp+210h] [rbp-4C8h] BYREF
  __int128 v603; // [rsp+218h] [rbp-4C0h]
  char v604; // [rsp+228h] [rbp-4B0h]
  __int128 v605; // [rsp+230h] [rbp-4A8h]
  _QWORD v606[3]; // [rsp+240h] [rbp-498h] BYREF
  _QWORD v607[3]; // [rsp+258h] [rbp-480h] BYREF
  char v608[8]; // [rsp+270h] [rbp-468h] BYREF
  __int128 v609; // [rsp+278h] [rbp-460h]
  _QWORD v610[3]; // [rsp+288h] [rbp-450h] BYREF
  char v611[8]; // [rsp+2A0h] [rbp-438h] BYREF
  __int128 v612; // [rsp+2A8h] [rbp-430h]
  char v613; // [rsp+2B8h] [rbp-420h]
  __int128 v614; // [rsp+2C0h] [rbp-418h]
  char v615[8]; // [rsp+2D0h] [rbp-408h] BYREF
  __int128 v616; // [rsp+2D8h] [rbp-400h] BYREF
  char v617; // [rsp+2E8h] [rbp-3F0h]
  __int128 v618; // [rsp+2F0h] [rbp-3E8h] BYREF
  _QWORD v619[3]; // [rsp+300h] [rbp-3D8h] BYREF
  _QWORD v620[3]; // [rsp+318h] [rbp-3C0h] BYREF
  char v621[8]; // [rsp+330h] [rbp-3A8h] BYREF
  __int128 v622; // [rsp+338h] [rbp-3A0h] BYREF
  _QWORD v623[3]; // [rsp+348h] [rbp-390h] BYREF
  char v624[8]; // [rsp+360h] [rbp-378h] BYREF
  __int128 v625; // [rsp+368h] [rbp-370h] BYREF
  char v626; // [rsp+378h] [rbp-360h]
  __int128 v627; // [rsp+380h] [rbp-358h] BYREF
  char v628[8]; // [rsp+390h] [rbp-348h] BYREF
  __int128 v629; // [rsp+398h] [rbp-340h] BYREF
  char v630; // [rsp+3A8h] [rbp-330h]
  __int128 v631; // [rsp+3B0h] [rbp-328h] BYREF
  _QWORD v632[3]; // [rsp+3C0h] [rbp-318h] BYREF
  _QWORD v633[3]; // [rsp+3D8h] [rbp-300h] BYREF
  char v634[8]; // [rsp+3F0h] [rbp-2E8h] BYREF
  __int128 v635; // [rsp+3F8h] [rbp-2E0h] BYREF
  _QWORD v636[3]; // [rsp+408h] [rbp-2D0h] BYREF
  char v637[8]; // [rsp+420h] [rbp-2B8h] BYREF
  __int128 v638; // [rsp+428h] [rbp-2B0h] BYREF
  char v639; // [rsp+438h] [rbp-2A0h]
  __int128 v640; // [rsp+440h] [rbp-298h] BYREF
  char v641[8]; // [rsp+450h] [rbp-288h] BYREF
  __int128 v642; // [rsp+458h] [rbp-280h] BYREF
  char v643; // [rsp+468h] [rbp-270h]
  __int128 v644; // [rsp+470h] [rbp-268h] BYREF
  _QWORD v645[3]; // [rsp+480h] [rbp-258h] BYREF
  _QWORD v646[3]; // [rsp+498h] [rbp-240h] BYREF
  char v647[8]; // [rsp+4B0h] [rbp-228h] BYREF
  __int128 v648; // [rsp+4B8h] [rbp-220h]
  _QWORD v649[3]; // [rsp+4C8h] [rbp-210h] BYREF
  char v650[8]; // [rsp+4E0h] [rbp-1F8h] BYREF
  __int128 v651; // [rsp+4E8h] [rbp-1F0h]
  _QWORD v652[3]; // [rsp+4F8h] [rbp-1E0h] BYREF
  char v653[8]; // [rsp+510h] [rbp-1C8h] BYREF
  __int128 v654; // [rsp+518h] [rbp-1C0h]
  __m128i v655; // [rsp+528h] [rbp-1B0h]
  __int64 v656; // [rsp+538h] [rbp-1A0h]
  _QWORD v657[3]; // [rsp+540h] [rbp-198h] BYREF
  _QWORD v658[3]; // [rsp+558h] [rbp-180h] BYREF
  _QWORD v659[3]; // [rsp+570h] [rbp-168h] BYREF
  char v660; // [rsp+588h] [rbp-150h] BYREF
  _QWORD v661[2]; // [rsp+590h] [rbp-148h] BYREF
  __m128i v662; // [rsp+5A0h] [rbp-138h] BYREF
  __int64 v663; // [rsp+5B8h] [rbp-120h]
  _QWORD v664[3]; // [rsp+5C0h] [rbp-118h] BYREF
  void *v665[3]; // [rsp+5D8h] [rbp-100h] BYREF
  void *v666[2]; // [rsp+5F0h] [rbp-E8h] BYREF
  _QWORD v667[2]; // [rsp+600h] [rbp-D8h] BYREF
  void *v668; // [rsp+610h] [rbp-C8h]
  __int64 v669; // [rsp+618h] [rbp-C0h]
  _QWORD v670[2]; // [rsp+620h] [rbp-B8h] BYREF
  char v671; // [rsp+630h] [rbp-A8h]
  __int64 v672; // [rsp+638h] [rbp-A0h]
  char v673; // [rsp+650h] [rbp-88h]
  char v674; // [rsp+678h] [rbp-60h]
  char v675; // [rsp+688h] [rbp-50h]
  unsigned __int64 v676; // [rsp+698h] [rbp-40h]

  v574 = this;
  v676 = __readfsqword(0x28u);
  v666[0] = v667;
  v666[1] = nullptr;
  LOBYTE(v667[0]) = 0;
  v668 = v670;
  v669 = 0;
  LOBYTE(v670[0]) = 0;
  v671 = 0;
  v672 = 0;
  v673 = 0;
  v675 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  *(_QWORD *)&v595 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v594[0] = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "type", v3, v4, v5, v6, v197, v242, v287);
  v596 = 0;
  *(_QWORD *)&v597 = 0;
  v595 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v596 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "object", v8, v9, v10, v11, v198, v243, v288);
  v584 = v594;
  v597 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v657,
    (__int64)v594,
    2,
    v12,
    v13,
    v14,
    v199,
    v244,
    v289,
    v332,
    v352,
    v372,
    v392,
    v412,
    v432,
    v452,
    v472,
    v492,
    v512,
    v532,
    v552);
  v657[2] = 0;
  v650[0] = 0;
  *(_QWORD *)&v651 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v650[0] = 3;
  v15 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v15, "properties", v16, v17, v18, v19, v200, v245, v290);
  v608[0] = 0;
  *(_QWORD *)&v609 = 0;
  v651 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v608[0] = 3;
  v20 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v20, "address", v21, v22, v23, v24, v201, v246, v291);
  v598[0] = 0;
  *(_QWORD *)&v599 = 0;
  v609 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v598[0] = 3;
  v25 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v25, "type", v26, v27, v28, v29, v202, v247, v292);
  v600 = 0;
  *(_QWORD *)&v601 = 0;
  v599 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v600 = 3;
  v30 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v30, "string", v31, v32, v33, v34, v203, v248, v293);
  v585 = v598;
  v601 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v606,
    (__int64)v598,
    2,
    v35,
    v36,
    v37,
    v204,
    v249,
    v294,
    (int)v606,
    v353,
    v373,
    v393,
    v413,
    v433,
    v453,
    v473,
    v493,
    v513,
    v533,
    v553);
  v606[2] = 0;
  v602[0] = 0;
  *(_QWORD *)&v603 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v602[0] = 3;
  v38 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v38, "description", v39, v40, v41, v42, v205, v250, v295);
  v604 = 0;
  *(_QWORD *)&v605 = 0;
  v603 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v604 = 3;
  v43 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v43, "Hex address", v44, v45, v46, v47, v206, v251, v296);
  v586 = v602;
  v605 = (unsigned __int64)v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v607,
    (__int64)v602,
    2,
    v48,
    v49,
    v50,
    v207,
    v252,
    v297,
    v333,
    v354,
    v374,
    v394,
    v414,
    v434,
    v454,
    v474,
    v494,
    v514,
    v534,
    v554);
  v607[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v610,
    v334,
    2,
    v51,
    v52,
    v53,
    v208,
    v253,
    v298,
    v334,
    v355,
    v375,
    v395,
    v415,
    v435,
    v455,
    v475,
    v495,
    v515,
    v535,
    v555);
  v610[2] = 0;
  v579 = v608;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v661,
    (__int64)v608,
    2,
    v54,
    v55,
    v56,
    v209,
    v254,
    v299,
    v335,
    v356,
    v376,
    v396,
    v416,
    v436,
    v456,
    v476,
    v496,
    v516,
    v536,
    v556);
  v662.m128i_i64[0] = 0;
  v621[0] = 0;
  *(_QWORD *)&v622 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v621[0] = 3;
  v57 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v57, "include_xrefs", v58, v59, v60, v61, v210, v255, v300);
  v611[0] = 0;
  *(_QWORD *)&v612 = 0;
  v622 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v611[0] = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v62, "type", v63, v64, v65, v66, v211, v256, v301);
  v613 = 0;
  *(_QWORD *)&v614 = 0;
  v612 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v613 = 3;
  v67 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v67, "boolean", v68, v69, v70, v71, v212, v257, v302);
  v587 = v611;
  v614 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v619,
    (__int64)v611,
    2,
    v72,
    v73,
    v74,
    (int)v619,
    v258,
    v303,
    v336,
    v357,
    (int)&v622,
    v397,
    v417,
    v437,
    v457,
    v477,
    v497,
    v517,
    v537,
    v557);
  v619[2] = 0;
  v615[0] = 0;
  *(_QWORD *)&v616 = 0;
  v573 = &v616;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v615[0] = 3;
  v75 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v75, "description", v76, v77, v78, v79, v213, v259, v304);
  v617 = 0;
  *(_QWORD *)&v618 = 0;
  v616 = (unsigned __int64)v75;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v617 = 3;
  v80 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v80, "Include xrefs", v81, v82, v83, v84, v214, v260, v305);
  v588 = v615;
  v618 = (unsigned __int64)v80;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v620,
    (__int64)v615,
    2,
    v85,
    v86,
    v87,
    v215,
    v261,
    v306,
    v337,
    (int)&v618,
    v377,
    v398,
    v418,
    v438,
    v458,
    v478,
    v498,
    v518,
    v538,
    v558);
  v620[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v623,
    v216,
    2,
    v88,
    v89,
    v90,
    v216,
    v262,
    v307,
    v338,
    v358,
    v378,
    v399,
    v419,
    v439,
    v459,
    v479,
    v499,
    v519,
    v539,
    v559);
  v623[2] = 0;
  v576 = v621;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v662.m128i_i64[1],
    (__int64)v621,
    2,
    v91,
    v92,
    v93,
    v217,
    v263,
    v308,
    v339,
    v359,
    v379,
    v400,
    v420,
    v440,
    v460,
    v480,
    v500,
    v520,
    v540,
    v560);
  v663 = 0;
  v634[0] = 0;
  *(_QWORD *)&v635 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v634[0] = 3;
  v94 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v94, "max_depth", v95, v96, v97, v98, v218, v264, v309);
  v624[0] = 0;
  *(_QWORD *)&v625 = 0;
  v635 = (unsigned __int64)v94;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v624[0] = 3;
  v99 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v99, "type", v100, v101, v102, v103, v219, v265, v310);
  v626 = 0;
  *(_QWORD *)&v627 = 0;
  v625 = (unsigned __int64)v99;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v626 = 3;
  v104 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v104, "number", v105, v106, v107, v108, v220, v266, v311);
  v580 = v624;
  v627 = (unsigned __int64)v104;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v632,
    (__int64)v624,
    2,
    v109,
    v110,
    v111,
    v221,
    (__int64)v632,
    v312,
    v340,
    v360,
    v380,
    (__int64)&v625,
    (int)&v627,
    v441,
    v461,
    (int)&v635,
    v501,
    v521,
    v541,
    v561);
  v632[2] = 0;
  v628[0] = 0;
  *(_QWORD *)&v629 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v628[0] = 3;
  v112 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v112, "description", v113, v114, v115, v116, v222, v267, v313);
  v630 = 0;
  *(_QWORD *)&v631 = 0;
  v629 = (unsigned __int64)v112;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v630 = 3;
  v117 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v117, "Max depth", v118, v119, v120, v121, v223, v268, v314);
  v581 = v628;
  v631 = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v633,
    (__int64)v628,
    2,
    v122,
    v123,
    v124,
    v224,
    v269,
    v315,
    v341,
    v361,
    v381,
    v401,
    v421,
    (int)&v629,
    (int)&v631,
    v481,
    v502,
    v522,
    v542,
    v562);
  v633[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v636,
    v270,
    2,
    v125,
    v126,
    v127,
    v225,
    v270,
    v316,
    v342,
    v362,
    v382,
    v402,
    v422,
    v442,
    v462,
    v482,
    v503,
    v523,
    v543,
    v563);
  v636[2] = 0;
  v577 = v634;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v664,
    (__int64)v634,
    2,
    v128,
    v129,
    v130,
    v226,
    v271,
    v317,
    v343,
    v363,
    v383,
    v403,
    v423,
    v443,
    v463,
    v483,
    v504,
    v524,
    v544,
    v564);
  v664[2] = 0;
  v647[0] = 0;
  *(_QWORD *)&v648 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v647[0] = 3;
  v131 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v131,
    "include_decompilation",
    v132,
    v133,
    v134,
    v135,
    v227,
    v272,
    v318);
  v637[0] = 0;
  *(_QWORD *)&v638 = 0;
  v648 = (unsigned __int64)v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v637[0] = 3;
  v136 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v136, "type", v137, v138, v139, v140, v228, v273, v319);
  v639 = 0;
  *(_QWORD *)&v640 = 0;
  v638 = (unsigned __int64)v136;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v639 = 3;
  v141 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v141, "boolean", v142, v143, v144, v145, v229, v274, v320);
  v582 = v637;
  v640 = (unsigned __int64)v141;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v645,
    (__int64)v637,
    2,
    v146,
    v147,
    v148,
    v230,
    v275,
    (int)v645,
    v344,
    v364,
    v384,
    v404,
    v424,
    v444,
    v464,
    v484,
    (char)&v638,
    (__int64)&v640,
    v545,
    v565);
  v645[2] = 0;
  v641[0] = 0;
  *(_QWORD *)&v642 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v641[0] = 3;
  v149 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v149, "description", v150, v151, v152, v153, v231, v276, v321);
  v643 = 0;
  *(_QWORD *)&v644 = 0;
  v642 = (unsigned __int64)v149;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v643 = 3;
  v154 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v154,
    "Include decompilation",
    v155,
    v156,
    v157,
    v158,
    v232,
    v277,
    v322);
  v583 = v641;
  v644 = (unsigned __int64)v154;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v646,
    (__int64)v641,
    2,
    v159,
    v160,
    v161,
    v233,
    v278,
    v323,
    v345,
    v365,
    v385,
    v405,
    v425,
    v445,
    v465,
    v485,
    v505,
    v525,
    (int)&v642,
    (__int64)&v644);
  v646[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v649,
    v324,
    2,
    v162,
    v163,
    v164,
    v234,
    v279,
    v324,
    v346,
    v366,
    v386,
    v406,
    v426,
    v446,
    v466,
    v486,
    v506,
    v526,
    v546,
    v566);
  v649[2] = 0;
  v578 = v647;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v665,
    (__int64)v647,
    2,
    v165,
    v166,
    v167,
    v235,
    v280,
    v325,
    v347,
    v367,
    v387,
    v407,
    v427,
    v447,
    v467,
    v487,
    v507,
    v527,
    v547,
    v567);
  v665[2] = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v652,
    (__int64)v661,
    4,
    v168,
    v169,
    v170,
    v236,
    v281,
    v326,
    v348,
    v368,
    v388,
    v408,
    v428,
    v448,
    v468,
    v488,
    v508,
    v528,
    v548,
    v568);
  v652[2] = 0;
  v575 = v650;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v658,
    (__int64)v650,
    2,
    v171,
    v172,
    v173,
    v237,
    v282,
    v327,
    v349,
    v369,
    v389,
    v409,
    v429,
    v449,
    v469,
    v489,
    v509,
    v529,
    v549,
    v569);
  v658[2] = 0;
  v653[0] = 0;
  *(_QWORD *)&v654 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v653[0] = 3;
  v174 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v174, "required", v175, v176, v177, v178, v238, v283, v328);
  *(_QWORD *)&v593 = 0;
  v654 = (unsigned __int64)v174;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v592 = 3;
  v179 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v179, "address", v180, v181, v182, v183, v239, v284, v329);
  v593 = (unsigned __int64)v179;
  v572 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v184 = _mm_load_si128(&v589);
  v656 = 0;
  v655 = v184;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v659,
    (__int64)v653,
    2,
    v185,
    v186,
    v187,
    v240,
    v285,
    v330,
    v350,
    v370,
    v390,
    v410,
    v430,
    v450,
    v470,
    v490,
    v510,
    v530,
    v550,
    v570);
  v659[2] = 0;
  LOBYTE(v590) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v590,
    (__int64)v657,
    3,
    v188,
    v189,
    v190,
    v241,
    v286,
    v331,
    v351,
    v371,
    v391,
    v411,
    v431,
    v451,
    v471,
    v491,
    v511,
    v531,
    v551,
    v571);
  v191 = v671;
  v192 = &v660;
  v671 = v590;
  v193 = v672;
  LOBYTE(v590) = v191;
  v672 = v591;
  v591 = v193;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v192 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v192 != (char *)v657 );
  v194 = v666;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v194 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v194 != v661 );
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
  si128 = _mm_load_si128((const __m128i *)&v572);
  v661[1] = 0;
  v661[0] = ida_mcp::tools::function_context::`anonymous namespace'::handle_get_function_context;
  v662 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v662.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v662.m128i_i64[0])(v661, v661, 3);
  if ( v675 )
  {
    v675 = 0;
    if ( v674 )
    {
      v674 = 0;
      std::string::_M_dispose();
    }
  }
  if ( v673 )
  {
    v673 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v668 != v670 )
    operator delete(v668, v670[0] + 1LL);
  if ( v666[0] != v667 )
    operator delete(v666[0], v667[0] + 1LL);
  return v676 - __readfsqword(0x28u);
}

