unsigned __int64 __fastcall ida_mcp::tools::source_info::register_tools(
        ida_mcp::tools::source_info *this,
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
  __int64 *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 *v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __m128i v47; // xmm0
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  char v51; // si
  void **v52; // r13
  __int64 v53; // rdx
  __m128i si128; // xmm2
  __int64 v55; // rax
  __int64 v56; // rax
  const __m128i *v57; // rsi
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
  __int64 v73; // rax
  const __m128i *v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  const __m128i *v77; // rsi
  __int64 *v78; // rdi
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 *v83; // r13
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __m128i v88; // xmm0
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  void **v92; // r13
  __int64 v93; // rax
  __m128i v94; // xmm3
  __int64 *v95; // r13
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  const __m128i *v101; // rsi
  __int64 *v102; // r13
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __m128i v107; // xmm0
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rax
  __m128i v115; // xmm4
  __int64 *v116; // r13
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 *v121; // r13
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 *v129; // r13
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __m128i v134; // xmm0
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  char v141; // si
  __int64 v142; // rax
  __m128i v143; // xmm5
  __int64 *v144; // r13
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rax
  __int64 v150; // rsi
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 *v153; // r13
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 *v158; // r13
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 *v163; // r13
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rax
  __int64 v169; // rsi
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 *v173; // r13
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 *v178; // r13
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 *v198; // r13
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 *v203; // r13
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  __m128i v208; // xmm0
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  void **v215; // r13
  __int64 v216; // rax
  __m128i v217; // xmm6
  int v219; // [rsp+0h] [rbp-428h]
  int v220; // [rsp+0h] [rbp-428h]
  int v221; // [rsp+0h] [rbp-428h]
  int v222; // [rsp+0h] [rbp-428h]
  int v223; // [rsp+0h] [rbp-428h]
  int v224; // [rsp+0h] [rbp-428h]
  int v225; // [rsp+0h] [rbp-428h]
  int v226; // [rsp+0h] [rbp-428h]
  int v227; // [rsp+0h] [rbp-428h]
  int v228; // [rsp+0h] [rbp-428h]
  int v229; // [rsp+0h] [rbp-428h]
  int v230; // [rsp+0h] [rbp-428h]
  int v231; // [rsp+0h] [rbp-428h]
  int v232; // [rsp+0h] [rbp-428h]
  int v233; // [rsp+0h] [rbp-428h]
  int v234; // [rsp+0h] [rbp-428h]
  int v235; // [rsp+0h] [rbp-428h]
  int v236; // [rsp+0h] [rbp-428h]
  int v237; // [rsp+0h] [rbp-428h]
  int v238; // [rsp+0h] [rbp-428h]
  int v239; // [rsp+0h] [rbp-428h]
  int v240; // [rsp+0h] [rbp-428h]
  int v241; // [rsp+0h] [rbp-428h]
  int v242; // [rsp+0h] [rbp-428h]
  int v243; // [rsp+0h] [rbp-428h]
  int v244; // [rsp+0h] [rbp-428h]
  int v245; // [rsp+0h] [rbp-428h]
  int v246; // [rsp+0h] [rbp-428h]
  int v247; // [rsp+0h] [rbp-428h]
  int v248; // [rsp+0h] [rbp-428h]
  int v249; // [rsp+0h] [rbp-428h]
  int v250; // [rsp+0h] [rbp-428h]
  int v251; // [rsp+0h] [rbp-428h]
  int v252; // [rsp+0h] [rbp-428h]
  int v253; // [rsp+0h] [rbp-428h]
  int v254; // [rsp+0h] [rbp-428h]
  int v255; // [rsp+0h] [rbp-428h]
  int v256; // [rsp+0h] [rbp-428h]
  int v257; // [rsp+0h] [rbp-428h]
  int v258; // [rsp+0h] [rbp-428h]
  int v259; // [rsp+0h] [rbp-428h]
  int v260; // [rsp+0h] [rbp-428h]
  int v261; // [rsp+0h] [rbp-428h]
  int v262; // [rsp+8h] [rbp-420h]
  int v263; // [rsp+8h] [rbp-420h]
  int v264; // [rsp+8h] [rbp-420h]
  int v265; // [rsp+8h] [rbp-420h]
  int v266; // [rsp+8h] [rbp-420h]
  int v267; // [rsp+8h] [rbp-420h]
  __int64 v268; // [rsp+8h] [rbp-420h]
  int v269; // [rsp+8h] [rbp-420h]
  __int64 v270; // [rsp+8h] [rbp-420h]
  int v271; // [rsp+8h] [rbp-420h]
  int v272; // [rsp+8h] [rbp-420h]
  int v273; // [rsp+8h] [rbp-420h]
  __int64 v274; // [rsp+8h] [rbp-420h]
  int v275; // [rsp+8h] [rbp-420h]
  __int64 v276; // [rsp+8h] [rbp-420h]
  int v277; // [rsp+8h] [rbp-420h]
  int v278; // [rsp+8h] [rbp-420h]
  __int64 v279; // [rsp+8h] [rbp-420h]
  __int64 v280; // [rsp+8h] [rbp-420h]
  int v281; // [rsp+8h] [rbp-420h]
  int v282; // [rsp+8h] [rbp-420h]
  __int64 v283; // [rsp+8h] [rbp-420h]
  int v284; // [rsp+8h] [rbp-420h]
  __int64 v285; // [rsp+8h] [rbp-420h]
  __int64 v286; // [rsp+8h] [rbp-420h]
  int v287; // [rsp+8h] [rbp-420h]
  __int64 v288; // [rsp+8h] [rbp-420h]
  int v289; // [rsp+8h] [rbp-420h]
  int v290; // [rsp+8h] [rbp-420h]
  int v291; // [rsp+8h] [rbp-420h]
  __int64 v292; // [rsp+8h] [rbp-420h]
  int v293; // [rsp+8h] [rbp-420h]
  int v294; // [rsp+8h] [rbp-420h]
  __int64 v295; // [rsp+8h] [rbp-420h]
  __int64 v296; // [rsp+8h] [rbp-420h]
  __int64 v297; // [rsp+8h] [rbp-420h]
  __int64 v298; // [rsp+8h] [rbp-420h]
  __int64 v299; // [rsp+8h] [rbp-420h]
  int v300; // [rsp+8h] [rbp-420h]
  int v301; // [rsp+8h] [rbp-420h]
  __int64 v302; // [rsp+8h] [rbp-420h]
  __int64 v303; // [rsp+8h] [rbp-420h]
  __int64 v304; // [rsp+10h] [rbp-418h]
  __int64 v305; // [rsp+10h] [rbp-418h]
  __int64 v306; // [rsp+10h] [rbp-418h]
  __int64 v307; // [rsp+10h] [rbp-418h]
  __int64 v308; // [rsp+10h] [rbp-418h]
  __int64 v309; // [rsp+10h] [rbp-418h]
  __int64 v310; // [rsp+10h] [rbp-418h]
  int v311; // [rsp+10h] [rbp-418h]
  __int64 v312; // [rsp+10h] [rbp-418h]
  int v313; // [rsp+10h] [rbp-418h]
  __int64 v314; // [rsp+10h] [rbp-418h]
  __int64 v315; // [rsp+10h] [rbp-418h]
  int v316; // [rsp+10h] [rbp-418h]
  __int64 v317; // [rsp+10h] [rbp-418h]
  int v318; // [rsp+10h] [rbp-418h]
  __int64 v319; // [rsp+10h] [rbp-418h]
  __int64 v320; // [rsp+10h] [rbp-418h]
  int v321; // [rsp+10h] [rbp-418h]
  int v322; // [rsp+10h] [rbp-418h]
  __int64 v323; // [rsp+10h] [rbp-418h]
  __int64 v324; // [rsp+10h] [rbp-418h]
  int v325; // [rsp+10h] [rbp-418h]
  __int64 v326; // [rsp+10h] [rbp-418h]
  int v327; // [rsp+10h] [rbp-418h]
  int v328; // [rsp+10h] [rbp-418h]
  __int64 v329; // [rsp+10h] [rbp-418h]
  int v330; // [rsp+10h] [rbp-418h]
  __int64 v331; // [rsp+10h] [rbp-418h]
  __int64 v332; // [rsp+10h] [rbp-418h]
  __int64 v333; // [rsp+10h] [rbp-418h]
  int v334; // [rsp+10h] [rbp-418h]
  __int64 v335; // [rsp+10h] [rbp-418h]
  __int64 v336; // [rsp+10h] [rbp-418h]
  int v337; // [rsp+10h] [rbp-418h]
  int v338; // [rsp+10h] [rbp-418h]
  int v339; // [rsp+10h] [rbp-418h]
  int v340; // [rsp+10h] [rbp-418h]
  int v341; // [rsp+10h] [rbp-418h]
  __int64 v342; // [rsp+10h] [rbp-418h]
  __int64 v343; // [rsp+10h] [rbp-418h]
  int v344; // [rsp+10h] [rbp-418h]
  int v345; // [rsp+10h] [rbp-418h]
  int v346; // [rsp+18h] [rbp-410h]
  __m128i *v347; // [rsp+18h] [rbp-410h]
  int v348; // [rsp+18h] [rbp-410h]
  int v349; // [rsp+18h] [rbp-410h]
  int v350; // [rsp+18h] [rbp-410h]
  int v351; // [rsp+18h] [rbp-410h]
  int v352; // [rsp+18h] [rbp-410h]
  int v353; // [rsp+18h] [rbp-410h]
  int v354; // [rsp+18h] [rbp-410h]
  _QWORD *v355; // [rsp+18h] [rbp-410h]
  int v356; // [rsp+18h] [rbp-410h]
  __int64 v357; // [rsp+18h] [rbp-410h]
  int v358; // [rsp+18h] [rbp-410h]
  int v359; // [rsp+18h] [rbp-410h]
  int v360; // [rsp+18h] [rbp-410h]
  int v361; // [rsp+18h] [rbp-410h]
  int v362; // [rsp+18h] [rbp-410h]
  int v363; // [rsp+20h] [rbp-408h]
  int v364; // [rsp+20h] [rbp-408h]
  int v365; // [rsp+20h] [rbp-408h]
  int v366; // [rsp+20h] [rbp-408h]
  int v367; // [rsp+20h] [rbp-408h]
  int v368; // [rsp+20h] [rbp-408h]
  int v369; // [rsp+20h] [rbp-408h]
  int v370; // [rsp+20h] [rbp-408h]
  int v371; // [rsp+20h] [rbp-408h]
  int v372; // [rsp+20h] [rbp-408h]
  int v373; // [rsp+20h] [rbp-408h]
  int v374; // [rsp+20h] [rbp-408h]
  int v375; // [rsp+20h] [rbp-408h]
  int v376; // [rsp+20h] [rbp-408h]
  int v377; // [rsp+20h] [rbp-408h]
  int v378; // [rsp+20h] [rbp-408h]
  int v379; // [rsp+20h] [rbp-408h]
  int v380; // [rsp+28h] [rbp-400h]
  int v381; // [rsp+28h] [rbp-400h]
  int v382; // [rsp+28h] [rbp-400h]
  int v383; // [rsp+28h] [rbp-400h]
  int v384; // [rsp+28h] [rbp-400h]
  int v385; // [rsp+28h] [rbp-400h]
  int v386; // [rsp+28h] [rbp-400h]
  int v387; // [rsp+28h] [rbp-400h]
  int v388; // [rsp+28h] [rbp-400h]
  int v389; // [rsp+28h] [rbp-400h]
  int v390; // [rsp+28h] [rbp-400h]
  int v391; // [rsp+28h] [rbp-400h]
  int v392; // [rsp+28h] [rbp-400h]
  int v393; // [rsp+28h] [rbp-400h]
  int v394; // [rsp+28h] [rbp-400h]
  int v395; // [rsp+28h] [rbp-400h]
  int v396; // [rsp+28h] [rbp-400h]
  __int64 v397; // [rsp+30h] [rbp-3F8h]
  __int64 v398; // [rsp+30h] [rbp-3F8h]
  __int64 v399; // [rsp+30h] [rbp-3F8h]
  __int64 v400; // [rsp+30h] [rbp-3F8h]
  __int64 v401; // [rsp+30h] [rbp-3F8h]
  __int64 v402; // [rsp+30h] [rbp-3F8h]
  __int64 v403; // [rsp+30h] [rbp-3F8h]
  __int64 v404; // [rsp+30h] [rbp-3F8h]
  __int64 v405; // [rsp+30h] [rbp-3F8h]
  __int64 v406; // [rsp+30h] [rbp-3F8h]
  __int64 v407; // [rsp+30h] [rbp-3F8h]
  __int64 v408; // [rsp+30h] [rbp-3F8h]
  __int64 v409; // [rsp+30h] [rbp-3F8h]
  __int64 v410; // [rsp+30h] [rbp-3F8h]
  __int64 v411; // [rsp+30h] [rbp-3F8h]
  __int64 v412; // [rsp+30h] [rbp-3F8h]
  __int64 v413; // [rsp+30h] [rbp-3F8h]
  int v414; // [rsp+38h] [rbp-3F0h]
  int v415; // [rsp+38h] [rbp-3F0h]
  int v416; // [rsp+38h] [rbp-3F0h]
  int v417; // [rsp+38h] [rbp-3F0h]
  int v418; // [rsp+38h] [rbp-3F0h]
  int v419; // [rsp+38h] [rbp-3F0h]
  int v420; // [rsp+38h] [rbp-3F0h]
  int v421; // [rsp+38h] [rbp-3F0h]
  int v422; // [rsp+38h] [rbp-3F0h]
  int v423; // [rsp+38h] [rbp-3F0h]
  int v424; // [rsp+38h] [rbp-3F0h]
  int v425; // [rsp+38h] [rbp-3F0h]
  int v426; // [rsp+38h] [rbp-3F0h]
  int v427; // [rsp+38h] [rbp-3F0h]
  int v428; // [rsp+38h] [rbp-3F0h]
  int v429; // [rsp+38h] [rbp-3F0h]
  int v430; // [rsp+38h] [rbp-3F0h]
  int v431; // [rsp+40h] [rbp-3E8h]
  int v432; // [rsp+40h] [rbp-3E8h]
  int v433; // [rsp+40h] [rbp-3E8h]
  int v434; // [rsp+40h] [rbp-3E8h]
  int v435; // [rsp+40h] [rbp-3E8h]
  int v436; // [rsp+40h] [rbp-3E8h]
  int v437; // [rsp+40h] [rbp-3E8h]
  int v438; // [rsp+40h] [rbp-3E8h]
  int v439; // [rsp+40h] [rbp-3E8h]
  int v440; // [rsp+40h] [rbp-3E8h]
  int v441; // [rsp+40h] [rbp-3E8h]
  int v442; // [rsp+40h] [rbp-3E8h]
  int v443; // [rsp+40h] [rbp-3E8h]
  int v444; // [rsp+40h] [rbp-3E8h]
  int v445; // [rsp+40h] [rbp-3E8h]
  int v446; // [rsp+40h] [rbp-3E8h]
  int v447; // [rsp+40h] [rbp-3E8h]
  int v448; // [rsp+48h] [rbp-3E0h]
  int v449; // [rsp+48h] [rbp-3E0h]
  int v450; // [rsp+48h] [rbp-3E0h]
  int v451; // [rsp+48h] [rbp-3E0h]
  int v452; // [rsp+48h] [rbp-3E0h]
  int v453; // [rsp+48h] [rbp-3E0h]
  int v454; // [rsp+48h] [rbp-3E0h]
  int v455; // [rsp+48h] [rbp-3E0h]
  int v456; // [rsp+48h] [rbp-3E0h]
  int v457; // [rsp+48h] [rbp-3E0h]
  int v458; // [rsp+48h] [rbp-3E0h]
  int v459; // [rsp+48h] [rbp-3E0h]
  int v460; // [rsp+48h] [rbp-3E0h]
  int v461; // [rsp+48h] [rbp-3E0h]
  int v462; // [rsp+48h] [rbp-3E0h]
  int v463; // [rsp+48h] [rbp-3E0h]
  int v464; // [rsp+48h] [rbp-3E0h]
  int v465; // [rsp+50h] [rbp-3D8h]
  int v466; // [rsp+50h] [rbp-3D8h]
  int v467; // [rsp+50h] [rbp-3D8h]
  int v468; // [rsp+50h] [rbp-3D8h]
  int v469; // [rsp+50h] [rbp-3D8h]
  int v470; // [rsp+50h] [rbp-3D8h]
  int v471; // [rsp+50h] [rbp-3D8h]
  int v472; // [rsp+50h] [rbp-3D8h]
  int v473; // [rsp+50h] [rbp-3D8h]
  int v474; // [rsp+50h] [rbp-3D8h]
  int v475; // [rsp+50h] [rbp-3D8h]
  int v476; // [rsp+50h] [rbp-3D8h]
  int v477; // [rsp+50h] [rbp-3D8h]
  int v478; // [rsp+50h] [rbp-3D8h]
  int v479; // [rsp+50h] [rbp-3D8h]
  int v480; // [rsp+50h] [rbp-3D8h]
  int v481; // [rsp+50h] [rbp-3D8h]
  char v482; // [rsp+58h] [rbp-3D0h]
  char v483; // [rsp+58h] [rbp-3D0h]
  char v484; // [rsp+58h] [rbp-3D0h]
  char v485; // [rsp+58h] [rbp-3D0h]
  char v486; // [rsp+58h] [rbp-3D0h]
  char v487; // [rsp+58h] [rbp-3D0h]
  char v488; // [rsp+58h] [rbp-3D0h]
  char v489; // [rsp+58h] [rbp-3D0h]
  char v490; // [rsp+58h] [rbp-3D0h]
  char v491; // [rsp+58h] [rbp-3D0h]
  char v492; // [rsp+58h] [rbp-3D0h]
  char v493; // [rsp+58h] [rbp-3D0h]
  char v494; // [rsp+58h] [rbp-3D0h]
  char v495; // [rsp+58h] [rbp-3D0h]
  char v496; // [rsp+58h] [rbp-3D0h]
  char v497; // [rsp+58h] [rbp-3D0h]
  char v498; // [rsp+58h] [rbp-3D0h]
  __m128 v499; // [rsp+60h] [rbp-3C8h] BYREF
  _QWORD *v500; // [rsp+70h] [rbp-3B8h]
  ida_mcp::tools::source_info *v501; // [rsp+78h] [rbp-3B0h]
  const __m128i *v502; // [rsp+80h] [rbp-3A8h]
  const __m128i *v503; // [rsp+88h] [rbp-3A0h]
  __int8 *v504; // [rsp+90h] [rbp-398h]
  __m128i *v505; // [rsp+98h] [rbp-390h]
  __int64 *v506; // [rsp+A0h] [rbp-388h]
  __int64 *v507; // [rsp+A8h] [rbp-380h]
  __int64 *v508; // [rsp+B0h] [rbp-378h]
  void **v509; // [rsp+B8h] [rbp-370h]
  __int64 *v510; // [rsp+C0h] [rbp-368h]
  const __m128i *v511; // [rsp+C8h] [rbp-360h]
  char *v512; // [rsp+D0h] [rbp-358h]
  char *v513; // [rsp+D8h] [rbp-350h]
  char *v514; // [rsp+E0h] [rbp-348h]
  char *v515; // [rsp+E8h] [rbp-340h]
  __int64 *v516; // [rsp+F0h] [rbp-338h]
  char *v517; // [rsp+F8h] [rbp-330h]
  char *v518; // [rsp+100h] [rbp-328h]
  char *v519; // [rsp+108h] [rbp-320h]
  __int64 *v520; // [rsp+110h] [rbp-318h]
  __int64 *v521; // [rsp+118h] [rbp-310h]
  __int64 *v522; // [rsp+120h] [rbp-308h]
  _QWORD *v523; // [rsp+128h] [rbp-300h]
  __int64 *v524; // [rsp+130h] [rbp-2F8h]
  char *v525; // [rsp+138h] [rbp-2F0h]
  __m128i v526; // [rsp+140h] [rbp-2E8h] BYREF
  __int64 v527; // [rsp+150h] [rbp-2D8h] BYREF
  __int64 v528; // [rsp+158h] [rbp-2D0h] BYREF
  char v529; // [rsp+160h] [rbp-2C8h] BYREF
  __int128 v530; // [rsp+168h] [rbp-2C0h] BYREF
  __int64 v531; // [rsp+180h] [rbp-2A8h] BYREF
  char v532; // [rsp+188h] [rbp-2A0h] BYREF
  __int64 v533; // [rsp+190h] [rbp-298h]
  char v534; // [rsp+1A0h] [rbp-288h] BYREF
  __int128 v535; // [rsp+1A8h] [rbp-280h] BYREF
  char v536; // [rsp+1B8h] [rbp-270h]
  __int128 v537; // [rsp+1C0h] [rbp-268h] BYREF
  char v538; // [rsp+1D0h] [rbp-258h] BYREF
  __int128 v539; // [rsp+1D8h] [rbp-250h] BYREF
  char v540; // [rsp+1E8h] [rbp-240h]
  __int128 v541; // [rsp+1F0h] [rbp-238h] BYREF
  char v542; // [rsp+200h] [rbp-228h] BYREF
  __int128 v543; // [rsp+208h] [rbp-220h] BYREF
  char v544; // [rsp+218h] [rbp-210h]
  __int128 v545; // [rsp+220h] [rbp-208h] BYREF
  __m128i v546; // [rsp+230h] [rbp-1F8h] BYREF
  __int64 v547; // [rsp+240h] [rbp-1E8h]
  __int64 v548; // [rsp+248h] [rbp-1E0h] BYREF
  char v549; // [rsp+250h] [rbp-1D8h] BYREF
  __int64 v550; // [rsp+258h] [rbp-1D0h]
  char v551; // [rsp+260h] [rbp-1C8h] BYREF
  __int128 v552; // [rsp+268h] [rbp-1C0h] BYREF
  __int64 v553; // [rsp+278h] [rbp-1B0h] BYREF
  char v554; // [rsp+280h] [rbp-1A8h] BYREF
  __int64 v555; // [rsp+288h] [rbp-1A0h]
  char v556; // [rsp+290h] [rbp-198h] BYREF
  __int128 v557; // [rsp+298h] [rbp-190h]
  __int64 v558; // [rsp+2A8h] [rbp-180h] BYREF
  __int128 v559; // [rsp+2B0h] [rbp-178h] BYREF
  char v560; // [rsp+2C0h] [rbp-168h] BYREF
  __int128 v561; // [rsp+2C8h] [rbp-160h]
  __m128i v562; // [rsp+2D8h] [rbp-150h] BYREF
  __int64 v563; // [rsp+2E8h] [rbp-140h]
  void *v564; // [rsp+2F0h] [rbp-138h] BYREF
  __int64 v565; // [rsp+2F8h] [rbp-130h] BYREF
  __m128i v566; // [rsp+300h] [rbp-128h] BYREF
  char v567; // [rsp+310h] [rbp-118h] BYREF
  __int64 v568; // [rsp+318h] [rbp-110h]
  _QWORD v569[2]; // [rsp+320h] [rbp-108h] BYREF
  __int64 v570; // [rsp+330h] [rbp-F8h]
  char v571; // [rsp+338h] [rbp-F0h] BYREF
  void *v572; // [rsp+340h] [rbp-E8h] BYREF
  __int64 v573; // [rsp+348h] [rbp-E0h]
  _QWORD v574[2]; // [rsp+350h] [rbp-D8h] BYREF
  void *v575; // [rsp+360h] [rbp-C8h] BYREF
  __int64 v576; // [rsp+368h] [rbp-C0h]
  _QWORD v577[2]; // [rsp+370h] [rbp-B8h] BYREF
  char v578; // [rsp+380h] [rbp-A8h]
  __int64 v579; // [rsp+388h] [rbp-A0h] BYREF
  char v580; // [rsp+3A0h] [rbp-88h]
  ida_mcp::tools::source_info *v581; // [rsp+3A8h] [rbp-80h]
  _QWORD v582[2]; // [rsp+3B8h] [rbp-70h] BYREF
  char v583; // [rsp+3C8h] [rbp-60h]
  char v584; // [rsp+3D8h] [rbp-50h]
  unsigned __int64 v585; // [rsp+3E8h] [rbp-40h]

  v501 = this;
  v585 = __readfsqword(0x28u);
  v572 = v574;
  v573 = 0;
  LOBYTE(v574[0]) = 0;
  v575 = v577;
  v576 = 0;
  LOBYTE(v577[0]) = 0;
  v578 = 0;
  v579 = 0;
  v580 = 0;
  v584 = 0;
  std::string::_M_replace();
  v509 = &v575;
  std::string::_M_replace();
  *(_QWORD *)&v535 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v534 = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "type", v3, v4, v5, v6, v219, (int)&v572, v304);
  v536 = 0;
  *(_QWORD *)&v537 = 0;
  v535 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v536 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "object", v8, v9, v10, v11, v220, v262, v305);
  v512 = &v534;
  v537 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v564,
    (const __m128i *)&v534);
  v566.m128i_i64[0] = 0;
  v556 = 0;
  *(_QWORD *)&v557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v556 = 3;
  v12 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v12, "properties", v13, v14, v15, v16, v221, v263, v306);
  v551 = 0;
  *(_QWORD *)&v552 = 0;
  v557 = (unsigned __int64)v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v551 = 3;
  v17 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v17, "address", v18, v19, v20, v21, v222, v264, v307);
  v538 = 0;
  *(_QWORD *)&v539 = 0;
  v552 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v538 = 3;
  v22 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v22, "type", v23, v24, v25, v26, v223, v265, v308);
  v540 = 0;
  *(_QWORD *)&v541 = 0;
  v539 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v540 = 3;
  v27 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v27, "string", v28, v29, v30, v31, v224, v266, v309);
  v513 = &v538;
  v541 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v546,
    (const __m128i *)&v538);
  v547 = 0;
  v542 = 0;
  *(_QWORD *)&v543 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v542 = 3;
  v32 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v32, "description", v33, v34, v35, v36, v225, v267, v310);
  v544 = 0;
  *(_QWORD *)&v545 = 0;
  v543 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v544 = 3;
  v37 = operator new(0x20u);
  *(_QWORD *)v37 = v37 + 16;
  strcpy((char *)(v37 + 16), "Hex address");
  *(_QWORD *)(v37 + 8) = 11;
  v514 = &v542;
  v520 = &v548;
  v545 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v548,
    (const __m128i *)&v542);
  v550 = 0;
  v521 = &v553;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v553,
    &v546);
  v555 = 0;
  v511 = (const __m128i *)&v551;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v531,
    (const __m128i *)&v551);
  v533 = 0;
  v522 = &v558;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v558,
    (__int64)&v531,
    1,
    v38,
    v39,
    v40,
    v226,
    v268,
    v311,
    (int)&v546,
    v363,
    (int)&v535,
    (__int64)&v537,
    (int)&v539,
    (int)&v541,
    (int)&v543,
    (int)&v545,
    (char)&v552,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)&v531);
  *((_QWORD *)&v559 + 1) = 0;
  v502 = (const __m128i *)&v556;
  v508 = &v566.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v566.m128i_i64[1],
    (const __m128i *)&v556);
  v568 = 0;
  v560 = 0;
  *(_QWORD *)&v561 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v560 = 3;
  v41 = operator new(0x20u);
  *(_QWORD *)v41 = v41 + 16;
  strcpy((char *)(v41 + 16), "required");
  *(_QWORD *)(v41 + 8) = 8;
  *(_QWORD *)&v530 = 0;
  v561 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v529 = 3;
  v42 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v42, "address", v43, v44, v45, v46, v227, v269, v312);
  v519 = &v529;
  v505 = &v526;
  v499 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  v530 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v47 = _mm_load_si128(&v526);
  v563 = 0;
  v503 = (const __m128i *)&v560;
  v523 = v569;
  v562 = v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v569,
    (const __m128i *)&v560);
  v570 = 0;
  LOBYTE(v527) = 0;
  v506 = &v527;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v527,
    (__int64)&v564,
    3,
    v48,
    v49,
    v50,
    v228,
    v270,
    v313,
    v346,
    (int)&v530,
    v380,
    v397,
    v414,
    v431,
    v448,
    v465,
    v482,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  v51 = v578;
  v52 = (void **)&v571;
  v53 = v528;
  v578 = v527;
  LOBYTE(v527) = v51;
  v528 = v579;
  v579 = v53;
  v507 = &v528;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v52 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v52 != &v564 );
  v504 = &v562.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v515 = &v532;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v518 = &v554;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v517 = &v549;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v516 = &v546.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v499);
  v565 = 0;
  v564 = ida_mcp::tools::source_info::`anonymous namespace'::handle_get_source_file;
  v566 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v566.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v566.m128i_i64[0])(&v564, &v564, 3);
  if ( v584 && v583 && v581 != (ida_mcp::tools::source_info *)v582 )
    operator delete(v581, v582[0] + 1LL);
  if ( v580 )
  {
    v580 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v510 = &v579;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v575 != v577 )
    operator delete(v575, v577[0] + 1LL);
  if ( v572 != v574 )
    operator delete(v572, v574[0] + 1LL);
  v572 = v574;
  v573 = 0;
  LOBYTE(v574[0]) = 0;
  v575 = v577;
  v576 = 0;
  LOBYTE(v577[0]) = 0;
  v578 = 0;
  v579 = 0;
  v580 = 0;
  v584 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v534 = 0;
  *(_QWORD *)&v535 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v534 = 3;
  v55 = operator new(0x20u);
  *(_QWORD *)v55 = v55 + 16;
  strcpy((char *)(v55 + 16), "type");
  *(_QWORD *)(v55 + 8) = 4;
  v536 = 0;
  *(_QWORD *)&v537 = 0;
  v535 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v536 = 3;
  v56 = operator new(0x20u);
  *(_QWORD *)v56 = v56 + 16;
  v57 = (const __m128i *)v512;
  strcpy((char *)(v56 + 16), "object");
  *(_QWORD *)(v56 + 8) = 6;
  v537 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v564,
    v57);
  v566.m128i_i64[0] = 0;
  v556 = 0;
  *(_QWORD *)&v557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v556 = 3;
  v58 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v58, "properties", v59, v60, v61, v62, v229, v271, (__int64)&v559);
  v551 = 0;
  *(_QWORD *)&v552 = 0;
  v557 = (unsigned __int64)v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v551 = 3;
  v63 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v63, "address", v64, v65, v66, v67, v230, v272, v314);
  v538 = 0;
  *(_QWORD *)&v539 = 0;
  v552 = (unsigned __int64)v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v538 = 3;
  v68 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v68, "type", v69, v70, v71, v72, v231, v273, v315);
  v540 = 0;
  *(_QWORD *)&v541 = 0;
  v539 = (unsigned __int64)v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v540 = 3;
  v73 = operator new(0x20u);
  v74 = (const __m128i *)v513;
  *(_QWORD *)v73 = v73 + 16;
  strcpy((char *)(v73 + 16), "string");
  *(_QWORD *)(v73 + 8) = 6;
  v541 = (unsigned __int64)v73;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v347,
    v74);
  v547 = 0;
  v542 = 0;
  *(_QWORD *)&v543 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v542 = 3;
  v75 = operator new(0x20u);
  *(_QWORD *)v75 = v75 + 16;
  strcpy((char *)(v75 + 16), "description");
  *(_QWORD *)(v75 + 8) = 11;
  v544 = 0;
  *(_QWORD *)&v545 = 0;
  v543 = (unsigned __int64)v75;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v544 = 3;
  v76 = operator new(0x20u);
  v77 = (const __m128i *)v514;
  *(_QWORD *)v76 = v76 + 16;
  v78 = v520;
  strcpy((char *)(v76 + 16), "Hex address");
  *(_QWORD *)(v76 + 8) = 11;
  v545 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v78,
    v77);
  v550 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v521,
    v347);
  v555 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v500,
    v511);
  v533 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v522,
    (__int64)v500,
    1,
    v79,
    v80,
    v81,
    v232,
    v274,
    v316,
    (int)v347,
    v364,
    v381,
    v398,
    v415,
    v432,
    v449,
    v466,
    v483,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  *((_QWORD *)&v559 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v508,
    v502);
  v568 = 0;
  v560 = 0;
  *(_QWORD *)&v561 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v560 = 3;
  v82 = operator new(0x20u);
  *(_QWORD *)v82 = v82 + 16;
  strcpy((char *)(v82 + 16), "required");
  *(_QWORD *)(v82 + 8) = 8;
  v529 = 0;
  *(_QWORD *)&v530 = 0;
  v561 = (unsigned __int64)v82;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v529 = 3;
  v83 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v83, "address", v84, v85, v86, v87, v233, v275, v317);
  v530 = (unsigned __int64)v83;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v88 = _mm_load_si128(&v526);
  v563 = 0;
  v562 = v88;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v523,
    v503);
  v570 = 0;
  LOBYTE(v527) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v506,
    (__int64)&v564,
    3,
    v89,
    v90,
    v91,
    v234,
    v276,
    v318,
    v348,
    v365,
    v382,
    v399,
    v416,
    v433,
    v450,
    v467,
    v484,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  LOBYTE(v77) = v578;
  v92 = (void **)&v571;
  v578 = v527;
  v93 = v579;
  LOBYTE(v527) = (_BYTE)v77;
  v579 = v528;
  v528 = v93;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v92 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v92 != &v564 );
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
  v94 = _mm_load_si128((const __m128i *)&v499);
  v565 = 0;
  v564 = ida_mcp::tools::source_info::`anonymous namespace'::handle_get_source_line;
  v566 = v94;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v566.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v566.m128i_i64[0])(&v564, &v564, 3);
  if ( v584 && v583 && v581 != (ida_mcp::tools::source_info *)v582 )
    operator delete(v581, v582[0] + 1LL);
  if ( v580 )
  {
    v580 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v575 != v577 )
    operator delete(v575, v577[0] + 1LL);
  if ( v572 != v574 )
    operator delete(v572, v574[0] + 1LL);
  v572 = v574;
  v573 = 0;
  LOBYTE(v574[0]) = 0;
  v575 = v577;
  v576 = 0;
  LOBYTE(v577[0]) = 0;
  v578 = 0;
  v579 = 0;
  v580 = 0;
  v584 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v556 = 0;
  *(_QWORD *)&v557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v556 = 3;
  v95 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v95, "type", v96, v97, v98, v99, v235, v277, v319);
  LOBYTE(v558) = 0;
  *(_QWORD *)&v559 = 0;
  v557 = (unsigned __int64)v95;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v558) = 3;
  v100 = operator new(0x20u);
  *(_QWORD *)v100 = v100 + 16;
  v101 = v502;
  strcpy((char *)(v100 + 16), "object");
  *(_QWORD *)(v100 + 8) = 6;
  v559 = (unsigned __int64)v100;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v564,
    v101);
  v566.m128i_i64[0] = 0;
  v560 = 0;
  *(_QWORD *)&v561 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v560 = 3;
  v102 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v102, "properties", v103, v104, v105, v106, v236, v278, v320);
  v561 = (unsigned __int64)v102;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v107 = _mm_load_si128(&v526);
  v563 = 0;
  v562 = v107;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v508,
    (__int64)v503,
    2,
    v108,
    v109,
    v110,
    v237,
    v279,
    v321,
    v349,
    v366,
    v383,
    v400,
    v417,
    v434,
    v451,
    v468,
    v485,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  v568 = 0;
  LOBYTE(v527) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v506,
    (__int64)&v564,
    2,
    v111,
    v112,
    v113,
    v238,
    v280,
    v322,
    v350,
    v367,
    v384,
    v401,
    v418,
    v435,
    v452,
    v469,
    v486,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  LOBYTE(v101) = v578;
  v578 = v527;
  v114 = v579;
  LOBYTE(v527) = (_BYTE)v101;
  v579 = v528;
  v528 = v114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v525 = &v567;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v524 = &v565;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v115 = _mm_load_si128((const __m128i *)&v499);
  v565 = 0;
  v564 = ida_mcp::tools::source_info::`anonymous namespace'::handle_get_input_file_info;
  v566 = v115;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v566.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v566.m128i_i64[0])(&v564, &v564, 3);
  if ( v584 && v583 && v581 != (ida_mcp::tools::source_info *)v582 )
    operator delete(v581, v582[0] + 1LL);
  if ( v580 )
  {
    v580 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v575 != v577 )
    operator delete(v575, v577[0] + 1LL);
  if ( v572 != v574 )
    operator delete(v572, v574[0] + 1LL);
  v572 = v574;
  v573 = 0;
  LOBYTE(v574[0]) = 0;
  v575 = v577;
  v576 = 0;
  LOBYTE(v577[0]) = 0;
  v578 = 0;
  v579 = 0;
  v580 = 0;
  v584 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v556 = 0;
  *(_QWORD *)&v557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v556 = 3;
  v116 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v116, "type", v117, v118, v119, v120, v239, v281, v323);
  LOBYTE(v558) = 0;
  *(_QWORD *)&v559 = 0;
  v557 = (unsigned __int64)v116;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v558) = 3;
  v121 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v121, "object", v122, v123, v124, v125, v240, v282, v324);
  v559 = (unsigned __int64)v121;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v564,
    (__int64)v502,
    2,
    v126,
    v127,
    v128,
    v241,
    v283,
    v325,
    v351,
    v368,
    v385,
    v402,
    v419,
    v436,
    v453,
    v470,
    v487,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  v566.m128i_i64[0] = 0;
  v560 = 0;
  *(_QWORD *)&v561 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v560 = 3;
  v129 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v129, "properties", v130, v131, v132, v133, v242, v284, v326);
  v561 = (unsigned __int64)v129;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v134 = _mm_load_si128(&v526);
  v563 = 0;
  v562 = v134;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v508,
    (__int64)v503,
    2,
    v135,
    v136,
    v137,
    v243,
    v285,
    v327,
    v352,
    v369,
    v386,
    v403,
    v420,
    v437,
    v454,
    v471,
    v488,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  v568 = 0;
  LOBYTE(v527) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v506,
    (__int64)&v564,
    2,
    v138,
    v139,
    v140,
    v244,
    v286,
    v328,
    v353,
    v370,
    v387,
    v404,
    v421,
    v438,
    v455,
    v472,
    v489,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  v141 = v578;
  v578 = v527;
  v142 = v579;
  LOBYTE(v527) = v141;
  v579 = v528;
  v528 = v142;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v143 = _mm_load_si128((const __m128i *)&v499);
  v565 = 0;
  v564 = ida_mcp::tools::source_info::`anonymous namespace'::handle_get_idb_path;
  v566 = v143;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v566.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v566.m128i_i64[0])(&v564, &v564, 3);
  if ( v584 && v583 && v581 != (ida_mcp::tools::source_info *)v582 )
    operator delete(v581, v582[0] + 1LL);
  if ( v580 )
  {
    v580 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v575 != v577 )
    operator delete(v575, v577[0] + 1LL);
  if ( v572 != v574 )
    operator delete(v572, v574[0] + 1LL);
  v572 = v574;
  v573 = 0;
  LOBYTE(v574[0]) = 0;
  v575 = v577;
  v576 = 0;
  LOBYTE(v577[0]) = 0;
  v578 = 0;
  v579 = 0;
  v580 = 0;
  v584 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v534 = 0;
  *(_QWORD *)&v535 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v534 = 3;
  v144 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v144, "type", v145, v146, v147, v148, v245, v287, v329);
  v536 = 0;
  *(_QWORD *)&v537 = 0;
  v535 = (unsigned __int64)v144;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v536 = 3;
  v149 = operator new(0x20u);
  *(_QWORD *)v149 = v149 + 16;
  v150 = (__int64)v512;
  strcpy((char *)(v149 + 16), "object");
  *(_QWORD *)(v149 + 8) = 6;
  v537 = (unsigned __int64)v149;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v564,
    v150,
    2,
    29795,
    v151,
    v152,
    v246,
    v288,
    v330,
    v354,
    v371,
    v388,
    v405,
    v422,
    v439,
    v456,
    v473,
    v490,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  v566.m128i_i64[0] = 0;
  v556 = 0;
  *(_QWORD *)&v557 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v556 = 3;
  v153 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v153, "properties", v154, v155, v156, v157, v247, v289, v331);
  v551 = 0;
  *(_QWORD *)&v552 = 0;
  v557 = (unsigned __int64)v153;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v551 = 3;
  v158 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v158, "address", v159, v160, v161, v162, v248, v290, v332);
  v538 = 0;
  *(_QWORD *)&v539 = 0;
  v552 = (unsigned __int64)v158;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v538 = 3;
  v163 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v163, "type", v164, v165, v166, v167, v249, v291, v333);
  v540 = 0;
  *(_QWORD *)&v541 = 0;
  v539 = (unsigned __int64)v163;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v540 = 3;
  v168 = operator new(0x20u);
  strcpy((char *)(v168 + 16), "string");
  v169 = (__int64)v513;
  *(_QWORD *)v168 = v168 + 16;
  *(_QWORD *)(v168 + 8) = 6;
  v541 = (unsigned __int64)v168;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v355,
    v169,
    2,
    v170,
    v171,
    v172,
    v250,
    v292,
    v334,
    (int)v355,
    v372,
    v389,
    v406,
    v423,
    v440,
    v457,
    v474,
    v491,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  v547 = 0;
  v542 = 0;
  *(_QWORD *)&v543 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v542 = 3;
  v173 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v173, "description", v174, v175, v176, v177, v251, v293, v335);
  v544 = 0;
  *(_QWORD *)&v545 = 0;
  v543 = (unsigned __int64)v173;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v544 = 3;
  v178 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v178,
    "Address within function",
    v179,
    v180,
    v181,
    v182,
    v252,
    v294,
    v336);
  v545 = (unsigned __int64)v178;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v520,
    (__int64)v514,
    2,
    v183,
    v184,
    v185,
    v253,
    v295,
    v337,
    v356,
    v373,
    v390,
    v407,
    v424,
    v441,
    v458,
    v475,
    v492,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  v550 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v521,
    v357,
    2,
    v186,
    v187,
    v188,
    v254,
    v296,
    v338,
    v357,
    v374,
    v391,
    v408,
    v425,
    v442,
    v459,
    v476,
    v493,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  v555 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v500,
    (__int64)v511,
    2,
    v189,
    v190,
    v191,
    v255,
    v297,
    v339,
    v358,
    v375,
    v392,
    v409,
    v426,
    v443,
    v460,
    v477,
    v494,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  v533 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v522,
    (__int64)v500,
    1,
    v192,
    v193,
    v194,
    v256,
    v298,
    v340,
    v359,
    v376,
    v393,
    v410,
    v427,
    v444,
    v461,
    v478,
    v495,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  *((_QWORD *)&v559 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v508,
    (__int64)v502,
    2,
    v195,
    v196,
    v197,
    v257,
    v299,
    v341,
    v360,
    v377,
    v394,
    v411,
    v428,
    v445,
    v462,
    v479,
    v496,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  v568 = 0;
  v560 = 0;
  *(_QWORD *)&v561 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v560 = 3;
  v198 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v198, "required", v199, v200, v201, v202, v258, v300, v342);
  v529 = 0;
  *(_QWORD *)&v530 = 0;
  v561 = (unsigned __int64)v198;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v529 = 3;
  v203 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v203, "address", v204, v205, v206, v207, v259, v301, v343);
  v530 = (unsigned __int64)v203;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v208 = _mm_load_si128(&v526);
  v563 = 0;
  v562 = v208;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v523,
    (__int64)v503,
    2,
    v209,
    v210,
    v211,
    v260,
    v302,
    v344,
    v361,
    v378,
    v395,
    v412,
    v429,
    v446,
    v463,
    v480,
    v497,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  v570 = 0;
  LOBYTE(v527) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v506,
    (__int64)&v564,
    3,
    v212,
    v213,
    v214,
    v261,
    v303,
    v345,
    v362,
    v379,
    v396,
    v413,
    v430,
    v447,
    v464,
    v481,
    v498,
    v499.m128_i64[0],
    v499.m128_i32[2],
    (__int64)v500);
  LOBYTE(v169) = v578;
  v215 = (void **)&v571;
  v578 = v527;
  v216 = v579;
  LOBYTE(v527) = v169;
  v579 = v528;
  v528 = v216;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v215 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v215 != &v564 );
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
  v217 = _mm_load_si128((const __m128i *)&v499);
  v565 = 0;
  v564 = ida_mcp::tools::source_info::`anonymous namespace'::handle_get_tryblks;
  v566 = v217;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v566.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v566.m128i_i64[0])(&v564, &v564, 3);
  if ( v584 && v583 && v581 != (ida_mcp::tools::source_info *)v582 )
    operator delete(v581, v582[0] + 1LL);
  if ( v580 )
  {
    v580 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v575 != v577 )
    operator delete(v575, v577[0] + 1LL);
  if ( v572 != v574 )
    operator delete(v572, v574[0] + 1LL);
  return v585 - __readfsqword(0x28u);
}

