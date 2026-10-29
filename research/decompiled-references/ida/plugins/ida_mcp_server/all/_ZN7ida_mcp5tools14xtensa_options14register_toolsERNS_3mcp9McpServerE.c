unsigned __int64 __fastcall ida_mcp::tools::xtensa_options::register_tools(
        ida_mcp::tools::xtensa_options *this,
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
  __int64 *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i v17; // xmm0
  char v18; // si
  __int64 v19; // rdx
  __m128i si128; // xmm2
  __int64 *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // rbp
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 *v41; // rbp
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 *v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // rbp
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 *v56; // rbp
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 *v61; // rbp
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 *v66; // rbp
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 *v71; // rbp
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 *v76; // rbp
  __int64 v77; // rdx
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
  __int64 *v96; // rbp
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __m128i v101; // xmm0
  char v102; // si
  __int64 v103; // rdx
  __m128i *v104; // rbp
  char *v105; // rbp
  __int64 *v106; // rbp
  char *v107; // rbp
  __m128i v108; // xmm3
  __int64 *v109; // r12
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 *v114; // r12
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 *v122; // r12
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 *v127; // r12
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 *v132; // r12
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 *v137; // r12
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 *v145; // r12
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 *v150; // r12
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 *v155; // r12
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 *v160; // r12
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 *v165; // r12
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __m128i v170; // xmm0
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 *v180; // r12
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 *v185; // r12
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 *v190; // r12
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 *v198; // r12
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 *v203; // r12
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 v214; // rcx
  __int64 v215; // r8
  __int64 v216; // r9
  __int64 *v217; // r12
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // r8
  __int64 v221; // r9
  __int64 *v222; // r12
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  __int64 v226; // r9
  __int64 *v227; // r12
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 *v235; // r12
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // r8
  __int64 v239; // r9
  __int64 *v240; // r12
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // r9
  __int64 *v245; // r12
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // r9
  __int64 v250; // rcx
  __int64 v251; // r8
  __int64 v252; // r9
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  __int64 v256; // rcx
  __int64 v257; // r8
  __int64 v258; // r9
  __int64 *v259; // r12
  __int64 v260; // rdx
  __int64 v261; // rcx
  __int64 v262; // r8
  __int64 v263; // r9
  __int64 *v264; // r12
  __int64 v265; // rdx
  __int64 v266; // rcx
  __int64 v267; // r8
  __int64 v268; // r9
  __int64 v269; // rcx
  __int64 v270; // r8
  __int64 v271; // r9
  __int64 v272; // rcx
  __int64 v273; // r8
  __int64 v274; // r9
  __int64 v275; // rcx
  __int64 v276; // r8
  __int64 v277; // r9
  __int64 *v278; // r12
  __int64 v279; // rdx
  __int64 v280; // rcx
  __int64 v281; // r8
  __int64 v282; // r9
  __int64 *v283; // r12
  __int64 v284; // rdx
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  __int64 v288; // rcx
  __int64 v289; // r8
  __int64 v290; // r9
  __int64 v291; // rcx
  __int64 v292; // r8
  __int64 v293; // r9
  __int64 v294; // rcx
  __int64 v295; // r8
  __int64 v296; // r9
  __int64 v297; // rcx
  __int64 v298; // r8
  __int64 v299; // r9
  __int64 v300; // rcx
  __int64 v301; // r8
  __int64 v302; // r9
  __int64 v303; // rcx
  __int64 v304; // r8
  __int64 v305; // r9
  __int64 v306; // rcx
  __int64 v307; // r8
  __int64 v308; // r9
  char v309; // si
  __int64 v310; // rax
  __m128i *v311; // rbp
  __int64 *v312; // rbp
  __m128i *v313; // rbp
  __m128i v314; // xmm4
  int v316; // [rsp+0h] [rbp-878h]
  int v317; // [rsp+0h] [rbp-878h]
  int v318; // [rsp+0h] [rbp-878h]
  int v319; // [rsp+0h] [rbp-878h]
  int v320; // [rsp+0h] [rbp-878h]
  int v321; // [rsp+0h] [rbp-878h]
  int v322; // [rsp+0h] [rbp-878h]
  int v323; // [rsp+0h] [rbp-878h]
  int v324; // [rsp+0h] [rbp-878h]
  int v325; // [rsp+0h] [rbp-878h]
  int v326; // [rsp+0h] [rbp-878h]
  int v327; // [rsp+0h] [rbp-878h]
  int v328; // [rsp+0h] [rbp-878h]
  int v329; // [rsp+0h] [rbp-878h]
  int v330; // [rsp+0h] [rbp-878h]
  int v331; // [rsp+0h] [rbp-878h]
  int v332; // [rsp+0h] [rbp-878h]
  int v333; // [rsp+0h] [rbp-878h]
  int v334; // [rsp+0h] [rbp-878h]
  int v335; // [rsp+0h] [rbp-878h]
  int v336; // [rsp+0h] [rbp-878h]
  int v337; // [rsp+0h] [rbp-878h]
  int v338; // [rsp+0h] [rbp-878h]
  int v339; // [rsp+0h] [rbp-878h]
  int v340; // [rsp+0h] [rbp-878h]
  int v341; // [rsp+0h] [rbp-878h]
  int v342; // [rsp+0h] [rbp-878h]
  int v343; // [rsp+0h] [rbp-878h]
  int v344; // [rsp+0h] [rbp-878h]
  int v345; // [rsp+0h] [rbp-878h]
  int v346; // [rsp+0h] [rbp-878h]
  int v347; // [rsp+0h] [rbp-878h]
  int v348; // [rsp+0h] [rbp-878h]
  int v349; // [rsp+0h] [rbp-878h]
  int v350; // [rsp+0h] [rbp-878h]
  int v351; // [rsp+0h] [rbp-878h]
  int v352; // [rsp+0h] [rbp-878h]
  int v353; // [rsp+0h] [rbp-878h]
  int v354; // [rsp+0h] [rbp-878h]
  int v355; // [rsp+0h] [rbp-878h]
  int v356; // [rsp+0h] [rbp-878h]
  int v357; // [rsp+0h] [rbp-878h]
  int v358; // [rsp+0h] [rbp-878h]
  int v359; // [rsp+0h] [rbp-878h]
  int v360; // [rsp+0h] [rbp-878h]
  int v361; // [rsp+0h] [rbp-878h]
  int v362; // [rsp+0h] [rbp-878h]
  int v363; // [rsp+0h] [rbp-878h]
  int v364; // [rsp+0h] [rbp-878h]
  int v365; // [rsp+0h] [rbp-878h]
  int v366; // [rsp+0h] [rbp-878h]
  int v367; // [rsp+0h] [rbp-878h]
  int v368; // [rsp+0h] [rbp-878h]
  int v369; // [rsp+0h] [rbp-878h]
  int v370; // [rsp+0h] [rbp-878h]
  int v371; // [rsp+0h] [rbp-878h]
  int v372; // [rsp+0h] [rbp-878h]
  int v373; // [rsp+0h] [rbp-878h]
  int v374; // [rsp+0h] [rbp-878h]
  int v375; // [rsp+0h] [rbp-878h]
  int v376; // [rsp+0h] [rbp-878h]
  int v377; // [rsp+0h] [rbp-878h]
  int v378; // [rsp+0h] [rbp-878h]
  int v379; // [rsp+0h] [rbp-878h]
  int v380; // [rsp+0h] [rbp-878h]
  int v381; // [rsp+0h] [rbp-878h]
  int v382; // [rsp+0h] [rbp-878h]
  int v383; // [rsp+0h] [rbp-878h]
  int v384; // [rsp+8h] [rbp-870h]
  int v385; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v386; // [rsp+8h] [rbp-870h]
  int v387; // [rsp+8h] [rbp-870h]
  int v388; // [rsp+8h] [rbp-870h]
  int v389; // [rsp+8h] [rbp-870h]
  int v390; // [rsp+8h] [rbp-870h]
  int v391; // [rsp+8h] [rbp-870h]
  int v392; // [rsp+8h] [rbp-870h]
  int v393; // [rsp+8h] [rbp-870h]
  int v394; // [rsp+8h] [rbp-870h]
  int v395; // [rsp+8h] [rbp-870h]
  int v396; // [rsp+8h] [rbp-870h]
  int v397; // [rsp+8h] [rbp-870h]
  int v398; // [rsp+8h] [rbp-870h]
  int v399; // [rsp+8h] [rbp-870h]
  int v400; // [rsp+8h] [rbp-870h]
  int v401; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v402; // [rsp+8h] [rbp-870h]
  int v403; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v404; // [rsp+8h] [rbp-870h]
  int v405; // [rsp+8h] [rbp-870h]
  int v406; // [rsp+8h] [rbp-870h]
  int v407; // [rsp+8h] [rbp-870h]
  int v408; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v409; // [rsp+8h] [rbp-870h]
  int v410; // [rsp+8h] [rbp-870h]
  int v411; // [rsp+8h] [rbp-870h]
  int v412; // [rsp+8h] [rbp-870h]
  int v413; // [rsp+8h] [rbp-870h]
  int v414; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v415; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v416; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v417; // [rsp+8h] [rbp-870h]
  int v418; // [rsp+8h] [rbp-870h]
  int v419; // [rsp+8h] [rbp-870h]
  int v420; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v421; // [rsp+8h] [rbp-870h]
  int v422; // [rsp+8h] [rbp-870h]
  int v423; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v424; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v425; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v426; // [rsp+8h] [rbp-870h]
  int v427; // [rsp+8h] [rbp-870h]
  int v428; // [rsp+8h] [rbp-870h]
  int v429; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v430; // [rsp+8h] [rbp-870h]
  int v431; // [rsp+8h] [rbp-870h]
  int v432; // [rsp+8h] [rbp-870h]
  int v433; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v434; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v435; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v436; // [rsp+8h] [rbp-870h]
  int v437; // [rsp+8h] [rbp-870h]
  int v438; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v439; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v440; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v441; // [rsp+8h] [rbp-870h]
  int v442; // [rsp+8h] [rbp-870h]
  int v443; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v444; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v445; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v446; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v447; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v448; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v449; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v450; // [rsp+8h] [rbp-870h]
  ida_mcp::mcp::ToolDefinition *v451; // [rsp+8h] [rbp-870h]
  __int64 v452; // [rsp+10h] [rbp-868h]
  __int64 v453; // [rsp+10h] [rbp-868h]
  __int64 v454; // [rsp+10h] [rbp-868h]
  __int64 v455; // [rsp+10h] [rbp-868h]
  __int64 v456; // [rsp+10h] [rbp-868h]
  __int64 v457; // [rsp+10h] [rbp-868h]
  __int64 v458; // [rsp+10h] [rbp-868h]
  __int64 v459; // [rsp+10h] [rbp-868h]
  __int64 v460; // [rsp+10h] [rbp-868h]
  __int64 v461; // [rsp+10h] [rbp-868h]
  __int64 v462; // [rsp+10h] [rbp-868h]
  __int64 v463; // [rsp+10h] [rbp-868h]
  const __m128i *v464; // [rsp+10h] [rbp-868h]
  __int64 v465; // [rsp+10h] [rbp-868h]
  __int64 v466; // [rsp+10h] [rbp-868h]
  __int64 v467; // [rsp+10h] [rbp-868h]
  __int64 v468; // [rsp+10h] [rbp-868h]
  __int64 v469; // [rsp+10h] [rbp-868h]
  __int64 v470; // [rsp+10h] [rbp-868h]
  _QWORD *v471; // [rsp+10h] [rbp-868h]
  __int64 v472; // [rsp+10h] [rbp-868h]
  __int64 v473; // [rsp+10h] [rbp-868h]
  __int64 v474; // [rsp+10h] [rbp-868h]
  __int64 v475; // [rsp+10h] [rbp-868h]
  int v476; // [rsp+10h] [rbp-868h]
  __int64 v477; // [rsp+10h] [rbp-868h]
  __int64 v478; // [rsp+10h] [rbp-868h]
  __int64 v479; // [rsp+10h] [rbp-868h]
  __int64 v480; // [rsp+10h] [rbp-868h]
  __int64 v481; // [rsp+10h] [rbp-868h]
  int v482; // [rsp+10h] [rbp-868h]
  int v483; // [rsp+10h] [rbp-868h]
  int v484; // [rsp+10h] [rbp-868h]
  __int64 v485; // [rsp+10h] [rbp-868h]
  __int64 v486; // [rsp+10h] [rbp-868h]
  __int64 v487; // [rsp+10h] [rbp-868h]
  int v488; // [rsp+10h] [rbp-868h]
  __int64 v489; // [rsp+10h] [rbp-868h]
  __int64 v490; // [rsp+10h] [rbp-868h]
  int v491; // [rsp+10h] [rbp-868h]
  int v492; // [rsp+10h] [rbp-868h]
  int v493; // [rsp+10h] [rbp-868h]
  __int64 v494; // [rsp+10h] [rbp-868h]
  __int64 v495; // [rsp+10h] [rbp-868h]
  __int64 v496; // [rsp+10h] [rbp-868h]
  int v497; // [rsp+10h] [rbp-868h]
  __int64 v498; // [rsp+10h] [rbp-868h]
  __int64 v499; // [rsp+10h] [rbp-868h]
  __int64 v500; // [rsp+10h] [rbp-868h]
  int v501; // [rsp+10h] [rbp-868h]
  int v502; // [rsp+10h] [rbp-868h]
  int v503; // [rsp+10h] [rbp-868h]
  __int64 v504; // [rsp+10h] [rbp-868h]
  __int64 v505; // [rsp+10h] [rbp-868h]
  int v506; // [rsp+10h] [rbp-868h]
  int v507; // [rsp+10h] [rbp-868h]
  int v508; // [rsp+10h] [rbp-868h]
  __int64 v509; // [rsp+10h] [rbp-868h]
  __int64 v510; // [rsp+10h] [rbp-868h]
  int v511; // [rsp+10h] [rbp-868h]
  int v512; // [rsp+10h] [rbp-868h]
  int v513; // [rsp+10h] [rbp-868h]
  int v514; // [rsp+10h] [rbp-868h]
  int v515; // [rsp+10h] [rbp-868h]
  int v516; // [rsp+10h] [rbp-868h]
  __int64 v517; // [rsp+10h] [rbp-868h]
  int v518; // [rsp+18h] [rbp-860h]
  int v519; // [rsp+18h] [rbp-860h]
  int v520; // [rsp+18h] [rbp-860h]
  int v521; // [rsp+18h] [rbp-860h]
  _QWORD *v522; // [rsp+18h] [rbp-860h]
  int v523; // [rsp+18h] [rbp-860h]
  __int64 v524; // [rsp+18h] [rbp-860h]
  int v525; // [rsp+18h] [rbp-860h]
  int v526; // [rsp+18h] [rbp-860h]
  int v527; // [rsp+18h] [rbp-860h]
  int v528; // [rsp+18h] [rbp-860h]
  int v529; // [rsp+18h] [rbp-860h]
  int v530; // [rsp+18h] [rbp-860h]
  int v531; // [rsp+18h] [rbp-860h]
  int v532; // [rsp+18h] [rbp-860h]
  int v533; // [rsp+18h] [rbp-860h]
  int v534; // [rsp+18h] [rbp-860h]
  int v535; // [rsp+18h] [rbp-860h]
  int v536; // [rsp+18h] [rbp-860h]
  int v537; // [rsp+18h] [rbp-860h]
  int v538; // [rsp+18h] [rbp-860h]
  int v539; // [rsp+18h] [rbp-860h]
  int v540; // [rsp+20h] [rbp-858h]
  int v541; // [rsp+20h] [rbp-858h]
  int v542; // [rsp+20h] [rbp-858h]
  int v543; // [rsp+20h] [rbp-858h]
  int v544; // [rsp+20h] [rbp-858h]
  int v545; // [rsp+20h] [rbp-858h]
  int v546; // [rsp+20h] [rbp-858h]
  int v547; // [rsp+20h] [rbp-858h]
  int v548; // [rsp+20h] [rbp-858h]
  int v549; // [rsp+20h] [rbp-858h]
  int v550; // [rsp+20h] [rbp-858h]
  int v551; // [rsp+20h] [rbp-858h]
  int v552; // [rsp+20h] [rbp-858h]
  int v553; // [rsp+20h] [rbp-858h]
  int v554; // [rsp+20h] [rbp-858h]
  int v555; // [rsp+20h] [rbp-858h]
  int v556; // [rsp+20h] [rbp-858h]
  int v557; // [rsp+20h] [rbp-858h]
  int v558; // [rsp+20h] [rbp-858h]
  int v559; // [rsp+20h] [rbp-858h]
  int v560; // [rsp+20h] [rbp-858h]
  int v561; // [rsp+20h] [rbp-858h]
  int v562; // [rsp+28h] [rbp-850h]
  int v563; // [rsp+28h] [rbp-850h]
  int v564; // [rsp+28h] [rbp-850h]
  int v565; // [rsp+28h] [rbp-850h]
  int v566; // [rsp+28h] [rbp-850h]
  int v567; // [rsp+28h] [rbp-850h]
  int v568; // [rsp+28h] [rbp-850h]
  int v569; // [rsp+28h] [rbp-850h]
  int v570; // [rsp+28h] [rbp-850h]
  int v571; // [rsp+28h] [rbp-850h]
  int v572; // [rsp+28h] [rbp-850h]
  int v573; // [rsp+28h] [rbp-850h]
  int v574; // [rsp+28h] [rbp-850h]
  int v575; // [rsp+28h] [rbp-850h]
  int v576; // [rsp+28h] [rbp-850h]
  int v577; // [rsp+28h] [rbp-850h]
  int v578; // [rsp+28h] [rbp-850h]
  int v579; // [rsp+28h] [rbp-850h]
  int v580; // [rsp+28h] [rbp-850h]
  int v581; // [rsp+28h] [rbp-850h]
  int v582; // [rsp+28h] [rbp-850h]
  int v583; // [rsp+28h] [rbp-850h]
  __int64 v584; // [rsp+30h] [rbp-848h]
  __int64 v585; // [rsp+30h] [rbp-848h]
  __int64 v586; // [rsp+30h] [rbp-848h]
  __int64 v587; // [rsp+30h] [rbp-848h]
  __int64 v588; // [rsp+30h] [rbp-848h]
  __int64 v589; // [rsp+30h] [rbp-848h]
  __int64 v590; // [rsp+30h] [rbp-848h]
  __int64 v591; // [rsp+30h] [rbp-848h]
  __int64 v592; // [rsp+30h] [rbp-848h]
  __int64 v593; // [rsp+30h] [rbp-848h]
  __int64 v594; // [rsp+30h] [rbp-848h]
  __int64 v595; // [rsp+30h] [rbp-848h]
  __int64 v596; // [rsp+30h] [rbp-848h]
  __int64 v597; // [rsp+30h] [rbp-848h]
  __int64 v598; // [rsp+30h] [rbp-848h]
  __int64 v599; // [rsp+30h] [rbp-848h]
  __int64 v600; // [rsp+30h] [rbp-848h]
  __int64 v601; // [rsp+30h] [rbp-848h]
  __int64 v602; // [rsp+30h] [rbp-848h]
  __int64 v603; // [rsp+30h] [rbp-848h]
  __int64 v604; // [rsp+30h] [rbp-848h]
  __int64 v605; // [rsp+30h] [rbp-848h]
  int v606; // [rsp+38h] [rbp-840h]
  int v607; // [rsp+38h] [rbp-840h]
  int v608; // [rsp+38h] [rbp-840h]
  int v609; // [rsp+38h] [rbp-840h]
  int v610; // [rsp+38h] [rbp-840h]
  int v611; // [rsp+38h] [rbp-840h]
  int v612; // [rsp+38h] [rbp-840h]
  int v613; // [rsp+38h] [rbp-840h]
  int v614; // [rsp+38h] [rbp-840h]
  int v615; // [rsp+38h] [rbp-840h]
  int v616; // [rsp+38h] [rbp-840h]
  int v617; // [rsp+38h] [rbp-840h]
  int v618; // [rsp+38h] [rbp-840h]
  int v619; // [rsp+38h] [rbp-840h]
  int v620; // [rsp+38h] [rbp-840h]
  int v621; // [rsp+38h] [rbp-840h]
  int v622; // [rsp+38h] [rbp-840h]
  int v623; // [rsp+38h] [rbp-840h]
  int v624; // [rsp+38h] [rbp-840h]
  int v625; // [rsp+38h] [rbp-840h]
  int v626; // [rsp+38h] [rbp-840h]
  int v627; // [rsp+38h] [rbp-840h]
  int v628; // [rsp+40h] [rbp-838h]
  int v629; // [rsp+40h] [rbp-838h]
  int v630; // [rsp+40h] [rbp-838h]
  int v631; // [rsp+40h] [rbp-838h]
  int v632; // [rsp+40h] [rbp-838h]
  int v633; // [rsp+40h] [rbp-838h]
  int v634; // [rsp+40h] [rbp-838h]
  int v635; // [rsp+40h] [rbp-838h]
  int v636; // [rsp+40h] [rbp-838h]
  int v637; // [rsp+40h] [rbp-838h]
  int v638; // [rsp+40h] [rbp-838h]
  int v639; // [rsp+40h] [rbp-838h]
  int v640; // [rsp+40h] [rbp-838h]
  int v641; // [rsp+40h] [rbp-838h]
  int v642; // [rsp+40h] [rbp-838h]
  int v643; // [rsp+40h] [rbp-838h]
  int v644; // [rsp+40h] [rbp-838h]
  int v645; // [rsp+40h] [rbp-838h]
  int v646; // [rsp+40h] [rbp-838h]
  int v647; // [rsp+40h] [rbp-838h]
  int v648; // [rsp+40h] [rbp-838h]
  int v649; // [rsp+40h] [rbp-838h]
  int v650; // [rsp+48h] [rbp-830h]
  int v651; // [rsp+48h] [rbp-830h]
  int v652; // [rsp+48h] [rbp-830h]
  int v653; // [rsp+48h] [rbp-830h]
  int v654; // [rsp+48h] [rbp-830h]
  int v655; // [rsp+48h] [rbp-830h]
  int v656; // [rsp+48h] [rbp-830h]
  int v657; // [rsp+48h] [rbp-830h]
  int v658; // [rsp+48h] [rbp-830h]
  int v659; // [rsp+48h] [rbp-830h]
  int v660; // [rsp+48h] [rbp-830h]
  int v661; // [rsp+48h] [rbp-830h]
  int v662; // [rsp+48h] [rbp-830h]
  int v663; // [rsp+48h] [rbp-830h]
  int v664; // [rsp+48h] [rbp-830h]
  int v665; // [rsp+48h] [rbp-830h]
  int v666; // [rsp+48h] [rbp-830h]
  int v667; // [rsp+48h] [rbp-830h]
  int v668; // [rsp+48h] [rbp-830h]
  int v669; // [rsp+48h] [rbp-830h]
  int v670; // [rsp+48h] [rbp-830h]
  int v671; // [rsp+48h] [rbp-830h]
  int v672; // [rsp+50h] [rbp-828h]
  int v673; // [rsp+50h] [rbp-828h]
  int v674; // [rsp+50h] [rbp-828h]
  int v675; // [rsp+50h] [rbp-828h]
  int v676; // [rsp+50h] [rbp-828h]
  int v677; // [rsp+50h] [rbp-828h]
  int v678; // [rsp+50h] [rbp-828h]
  int v679; // [rsp+50h] [rbp-828h]
  int v680; // [rsp+50h] [rbp-828h]
  int v681; // [rsp+50h] [rbp-828h]
  int v682; // [rsp+50h] [rbp-828h]
  int v683; // [rsp+50h] [rbp-828h]
  int v684; // [rsp+50h] [rbp-828h]
  int v685; // [rsp+50h] [rbp-828h]
  int v686; // [rsp+50h] [rbp-828h]
  int v687; // [rsp+50h] [rbp-828h]
  int v688; // [rsp+50h] [rbp-828h]
  int v689; // [rsp+50h] [rbp-828h]
  int v690; // [rsp+50h] [rbp-828h]
  int v691; // [rsp+50h] [rbp-828h]
  int v692; // [rsp+50h] [rbp-828h]
  int v693; // [rsp+50h] [rbp-828h]
  char v694; // [rsp+58h] [rbp-820h]
  char v695; // [rsp+58h] [rbp-820h]
  char v696; // [rsp+58h] [rbp-820h]
  char v697; // [rsp+58h] [rbp-820h]
  char v698; // [rsp+58h] [rbp-820h]
  char v699; // [rsp+58h] [rbp-820h]
  char v700; // [rsp+58h] [rbp-820h]
  char v701; // [rsp+58h] [rbp-820h]
  char v702; // [rsp+58h] [rbp-820h]
  char v703; // [rsp+58h] [rbp-820h]
  char v704; // [rsp+58h] [rbp-820h]
  char v705; // [rsp+58h] [rbp-820h]
  char v706; // [rsp+58h] [rbp-820h]
  char v707; // [rsp+58h] [rbp-820h]
  char v708; // [rsp+58h] [rbp-820h]
  char v709; // [rsp+58h] [rbp-820h]
  char v710; // [rsp+58h] [rbp-820h]
  char v711; // [rsp+58h] [rbp-820h]
  char v712; // [rsp+58h] [rbp-820h]
  char v713; // [rsp+58h] [rbp-820h]
  char v714; // [rsp+58h] [rbp-820h]
  char v715; // [rsp+58h] [rbp-820h]
  __int64 v716; // [rsp+60h] [rbp-818h]
  __int64 v717; // [rsp+60h] [rbp-818h]
  __int64 v718; // [rsp+60h] [rbp-818h]
  __int64 v719; // [rsp+60h] [rbp-818h]
  __int64 v720; // [rsp+60h] [rbp-818h]
  __int64 v721; // [rsp+60h] [rbp-818h]
  __int64 v722; // [rsp+60h] [rbp-818h]
  __int64 v723; // [rsp+60h] [rbp-818h]
  __int64 v724; // [rsp+60h] [rbp-818h]
  __int64 v725; // [rsp+60h] [rbp-818h]
  __int64 v726; // [rsp+60h] [rbp-818h]
  __int64 v727; // [rsp+60h] [rbp-818h]
  __int64 v728; // [rsp+60h] [rbp-818h]
  __int64 v729; // [rsp+60h] [rbp-818h]
  __int64 v730; // [rsp+60h] [rbp-818h]
  __int64 v731; // [rsp+60h] [rbp-818h]
  __int64 v732; // [rsp+60h] [rbp-818h]
  __int64 v733; // [rsp+60h] [rbp-818h]
  __int64 v734; // [rsp+60h] [rbp-818h]
  __int64 v735; // [rsp+60h] [rbp-818h]
  __int64 v736; // [rsp+60h] [rbp-818h]
  __int64 v737; // [rsp+60h] [rbp-818h]
  int v738; // [rsp+68h] [rbp-810h]
  int v739; // [rsp+68h] [rbp-810h]
  int v740; // [rsp+68h] [rbp-810h]
  int v741; // [rsp+68h] [rbp-810h]
  int v742; // [rsp+68h] [rbp-810h]
  int v743; // [rsp+68h] [rbp-810h]
  int v744; // [rsp+68h] [rbp-810h]
  int v745; // [rsp+68h] [rbp-810h]
  int v746; // [rsp+68h] [rbp-810h]
  int v747; // [rsp+68h] [rbp-810h]
  int v748; // [rsp+68h] [rbp-810h]
  int v749; // [rsp+68h] [rbp-810h]
  int v750; // [rsp+68h] [rbp-810h]
  int v751; // [rsp+68h] [rbp-810h]
  int v752; // [rsp+68h] [rbp-810h]
  int v753; // [rsp+68h] [rbp-810h]
  int v754; // [rsp+68h] [rbp-810h]
  int v755; // [rsp+68h] [rbp-810h]
  int v756; // [rsp+68h] [rbp-810h]
  int v757; // [rsp+68h] [rbp-810h]
  int v758; // [rsp+68h] [rbp-810h]
  int v759; // [rsp+68h] [rbp-810h]
  __int64 v760; // [rsp+70h] [rbp-808h]
  __int64 v761; // [rsp+70h] [rbp-808h]
  __int64 v762; // [rsp+70h] [rbp-808h]
  __int64 v763; // [rsp+70h] [rbp-808h]
  __int64 v764; // [rsp+70h] [rbp-808h]
  __int64 v765; // [rsp+70h] [rbp-808h]
  __int64 v766; // [rsp+70h] [rbp-808h]
  __int64 v767; // [rsp+70h] [rbp-808h]
  __int64 v768; // [rsp+70h] [rbp-808h]
  __int64 v769; // [rsp+70h] [rbp-808h]
  __int64 v770; // [rsp+70h] [rbp-808h]
  __int64 v771; // [rsp+70h] [rbp-808h]
  __int64 v772; // [rsp+70h] [rbp-808h]
  __int64 v773; // [rsp+70h] [rbp-808h]
  __int64 v774; // [rsp+70h] [rbp-808h]
  __int64 v775; // [rsp+70h] [rbp-808h]
  __int64 v776; // [rsp+70h] [rbp-808h]
  __int64 v777; // [rsp+70h] [rbp-808h]
  __int64 v778; // [rsp+70h] [rbp-808h]
  __int64 v779; // [rsp+70h] [rbp-808h]
  __int64 v780; // [rsp+70h] [rbp-808h]
  __int64 v781; // [rsp+70h] [rbp-808h]
  __m128 v782; // [rsp+80h] [rbp-7F8h] BYREF
  ida_mcp::tools::xtensa_options *v783; // [rsp+90h] [rbp-7E8h]
  char *v784; // [rsp+98h] [rbp-7E0h]
  char *v785; // [rsp+A0h] [rbp-7D8h]
  const __m128i *v786; // [rsp+A8h] [rbp-7D0h]
  __int128 *v787; // [rsp+B0h] [rbp-7C8h]
  __int128 *v788; // [rsp+B8h] [rbp-7C0h]
  __int128 *v789; // [rsp+C0h] [rbp-7B8h]
  __int128 *v790; // [rsp+C8h] [rbp-7B0h]
  __int128 *v791; // [rsp+D0h] [rbp-7A8h]
  __int128 *v792; // [rsp+D8h] [rbp-7A0h]
  const __m128i *v793; // [rsp+E0h] [rbp-798h]
  __int128 *v794; // [rsp+E8h] [rbp-790h]
  __int128 *v795; // [rsp+F0h] [rbp-788h]
  __int128 *v796; // [rsp+F8h] [rbp-780h]
  const __m128i *v797; // [rsp+100h] [rbp-778h]
  __int128 *v798; // [rsp+108h] [rbp-770h]
  __int128 *v799; // [rsp+110h] [rbp-768h]
  __int64 *v800; // [rsp+118h] [rbp-760h]
  __int128 *v801; // [rsp+120h] [rbp-758h]
  __m128i *v802; // [rsp+128h] [rbp-750h]
  __int64 *v803; // [rsp+130h] [rbp-748h]
  __int64 *v804; // [rsp+138h] [rbp-740h]
  __int128 *v805; // [rsp+140h] [rbp-738h]
  char *v806; // [rsp+148h] [rbp-730h]
  char *v807; // [rsp+150h] [rbp-728h]
  char *v808; // [rsp+158h] [rbp-720h]
  char *v809; // [rsp+160h] [rbp-718h]
  char *v810; // [rsp+168h] [rbp-710h]
  char *v811; // [rsp+170h] [rbp-708h]
  char *v812; // [rsp+178h] [rbp-700h]
  char *v813; // [rsp+180h] [rbp-6F8h]
  char *v814; // [rsp+188h] [rbp-6F0h]
  __int128 *v815; // [rsp+190h] [rbp-6E8h]
  __int128 *v816; // [rsp+198h] [rbp-6E0h]
  __int128 *v817; // [rsp+1A0h] [rbp-6D8h]
  _OWORD *v818; // [rsp+1A8h] [rbp-6D0h]
  char *v819; // [rsp+1B0h] [rbp-6C8h]
  __int64 *v820; // [rsp+1B8h] [rbp-6C0h]
  char *v821; // [rsp+1C0h] [rbp-6B8h]
  __int8 *v822; // [rsp+1C8h] [rbp-6B0h]
  _BYTE *v823; // [rsp+1D0h] [rbp-6A8h]
  char *v824; // [rsp+1D8h] [rbp-6A0h]
  __int64 *v825; // [rsp+1E0h] [rbp-698h]
  char *v826; // [rsp+1E8h] [rbp-690h]
  char *v827; // [rsp+1F0h] [rbp-688h]
  char *v828; // [rsp+1F8h] [rbp-680h]
  __int64 *v829; // [rsp+200h] [rbp-678h]
  __int64 *v830; // [rsp+208h] [rbp-670h]
  __int64 *v831; // [rsp+210h] [rbp-668h]
  __int64 *v832; // [rsp+218h] [rbp-660h]
  _QWORD *v833; // [rsp+220h] [rbp-658h]
  _QWORD *v834; // [rsp+228h] [rbp-650h]
  _QWORD *v835; // [rsp+230h] [rbp-648h]
  __int64 *v836; // [rsp+238h] [rbp-640h]
  __int64 *v837; // [rsp+240h] [rbp-638h]
  char *v838; // [rsp+248h] [rbp-630h]
  char *v839; // [rsp+250h] [rbp-628h]
  char *v840; // [rsp+258h] [rbp-620h]
  __m128i v841; // [rsp+260h] [rbp-618h] BYREF
  __int64 v842; // [rsp+270h] [rbp-608h] BYREF
  __int64 v843; // [rsp+278h] [rbp-600h] BYREF
  _QWORD v844[4]; // [rsp+280h] [rbp-5F8h] BYREF
  char v845[8]; // [rsp+2A0h] [rbp-5D8h] BYREF
  __int128 v846; // [rsp+2A8h] [rbp-5D0h] BYREF
  char v847; // [rsp+2B8h] [rbp-5C0h]
  __int128 v848; // [rsp+2C0h] [rbp-5B8h] BYREF
  char v849[8]; // [rsp+2D0h] [rbp-5A8h] BYREF
  __int128 v850; // [rsp+2D8h] [rbp-5A0h] BYREF
  char v851; // [rsp+2E8h] [rbp-590h]
  __int128 v852; // [rsp+2F0h] [rbp-588h] BYREF
  char v853[8]; // [rsp+300h] [rbp-578h] BYREF
  _OWORD v854[2]; // [rsp+308h] [rbp-570h] BYREF
  __int64 v855; // [rsp+328h] [rbp-550h]
  __int64 v856; // [rsp+330h] [rbp-548h] BYREF
  char v857; // [rsp+338h] [rbp-540h] BYREF
  __int64 v858; // [rsp+340h] [rbp-538h]
  _QWORD v859[3]; // [rsp+348h] [rbp-530h] BYREF
  char v860; // [rsp+360h] [rbp-518h] BYREF
  __int128 v861; // [rsp+368h] [rbp-510h] BYREF
  __int64 v862; // [rsp+378h] [rbp-500h] BYREF
  __int128 v863; // [rsp+380h] [rbp-4F8h] BYREF
  char v864; // [rsp+390h] [rbp-4E8h] BYREF
  __int128 v865; // [rsp+398h] [rbp-4E0h] BYREF
  char v866; // [rsp+3A8h] [rbp-4D0h]
  __int128 v867; // [rsp+3B0h] [rbp-4C8h] BYREF
  char v868; // [rsp+3C0h] [rbp-4B8h] BYREF
  __int128 v869; // [rsp+3C8h] [rbp-4B0h] BYREF
  char v870; // [rsp+3D8h] [rbp-4A0h]
  __int128 v871; // [rsp+3E0h] [rbp-498h] BYREF
  __m128i v872; // [rsp+3F0h] [rbp-488h] BYREF
  __int64 v873; // [rsp+400h] [rbp-478h]
  __int64 v874; // [rsp+408h] [rbp-470h] BYREF
  char v875; // [rsp+410h] [rbp-468h] BYREF
  __int64 v876; // [rsp+418h] [rbp-460h]
  char v877; // [rsp+420h] [rbp-458h] BYREF
  __int128 v878; // [rsp+428h] [rbp-450h] BYREF
  __int64 v879; // [rsp+438h] [rbp-440h] BYREF
  char v880; // [rsp+440h] [rbp-438h] BYREF
  __int64 v881; // [rsp+448h] [rbp-430h]
  char v882; // [rsp+450h] [rbp-428h] BYREF
  __int128 v883; // [rsp+458h] [rbp-420h] BYREF
  char v884; // [rsp+468h] [rbp-410h]
  __int128 v885; // [rsp+470h] [rbp-408h] BYREF
  char v886; // [rsp+480h] [rbp-3F8h] BYREF
  __int128 v887; // [rsp+488h] [rbp-3F0h] BYREF
  __int64 v888; // [rsp+498h] [rbp-3E0h]
  __int128 v889; // [rsp+4A0h] [rbp-3D8h] BYREF
  char v890; // [rsp+4B0h] [rbp-3C8h] BYREF
  __int128 v891; // [rsp+4B8h] [rbp-3C0h] BYREF
  __int64 v892; // [rsp+4C8h] [rbp-3B0h] BYREF
  __int128 v893; // [rsp+4D0h] [rbp-3A8h] BYREF
  char v894; // [rsp+4E0h] [rbp-398h] BYREF
  __int128 v895; // [rsp+4E8h] [rbp-390h] BYREF
  __int64 v896; // [rsp+4F8h] [rbp-380h] BYREF
  __int128 v897; // [rsp+500h] [rbp-378h] BYREF
  char v898; // [rsp+510h] [rbp-368h] BYREF
  __int128 v899; // [rsp+518h] [rbp-360h] BYREF
  char v900; // [rsp+528h] [rbp-350h] BYREF
  char v901; // [rsp+530h] [rbp-348h] BYREF
  __int64 v902; // [rsp+538h] [rbp-340h]
  char v903; // [rsp+540h] [rbp-338h] BYREF
  __int128 v904; // [rsp+548h] [rbp-330h] BYREF
  __int64 v905; // [rsp+558h] [rbp-320h]
  __int64 v906; // [rsp+560h] [rbp-318h] BYREF
  __int64 v907; // [rsp+568h] [rbp-310h]
  char v908; // [rsp+570h] [rbp-308h] BYREF
  __int128 v909; // [rsp+578h] [rbp-300h] BYREF
  __int64 v910; // [rsp+588h] [rbp-2F0h]
  __int128 v911; // [rsp+590h] [rbp-2E8h] BYREF
  char v912; // [rsp+5A0h] [rbp-2D8h] BYREF
  __int128 v913; // [rsp+5A8h] [rbp-2D0h] BYREF
  __int64 v914; // [rsp+5B8h] [rbp-2C0h] BYREF
  char v915; // [rsp+5C0h] [rbp-2B8h] BYREF
  __int64 v916; // [rsp+5C8h] [rbp-2B0h]
  char v917; // [rsp+5D0h] [rbp-2A8h] BYREF
  __int128 v918; // [rsp+5D8h] [rbp-2A0h] BYREF
  __int64 v919; // [rsp+5E8h] [rbp-290h] BYREF
  char v920; // [rsp+5F0h] [rbp-288h] BYREF
  __int64 v921; // [rsp+5F8h] [rbp-280h]
  char v922; // [rsp+600h] [rbp-278h] BYREF
  __int128 v923; // [rsp+608h] [rbp-270h] BYREF
  __m128i v924; // [rsp+618h] [rbp-260h] BYREF
  __int64 v925; // [rsp+628h] [rbp-250h]
  __int64 v926; // [rsp+630h] [rbp-248h] BYREF
  __int64 v927; // [rsp+640h] [rbp-238h]
  __int64 v928; // [rsp+648h] [rbp-230h] BYREF
  __int64 v929; // [rsp+658h] [rbp-220h]
  _QWORD v930[3]; // [rsp+660h] [rbp-218h] BYREF
  char v931; // [rsp+678h] [rbp-200h] BYREF
  __int64 v932; // [rsp+680h] [rbp-1F8h] BYREF
  __int128 v933; // [rsp+688h] [rbp-1F0h] BYREF
  __int64 v934; // [rsp+698h] [rbp-1E0h] BYREF
  __int128 v935; // [rsp+6A0h] [rbp-1D8h]
  _QWORD v936[2]; // [rsp+6B0h] [rbp-1C8h] BYREF
  __int64 v937; // [rsp+6C0h] [rbp-1B8h]
  char v938; // [rsp+6C8h] [rbp-1B0h] BYREF
  __int64 v939; // [rsp+6D0h] [rbp-1A8h] BYREF
  __int128 v940; // [rsp+6D8h] [rbp-1A0h] BYREF
  _BYTE v941[24]; // [rsp+6E8h] [rbp-190h] BYREF
  __int64 v942; // [rsp+700h] [rbp-178h] BYREF
  __int128 v943; // [rsp+708h] [rbp-170h]
  char v944; // [rsp+718h] [rbp-160h] BYREF
  __int128 v945; // [rsp+720h] [rbp-158h]
  __m128i v946; // [rsp+730h] [rbp-148h] BYREF
  __m128i v947; // [rsp+740h] [rbp-138h] BYREF
  __int64 v948; // [rsp+758h] [rbp-120h]
  _QWORD v949[2]; // [rsp+760h] [rbp-118h] BYREF
  __int64 v950; // [rsp+770h] [rbp-108h]
  _BYTE v951[16]; // [rsp+778h] [rbp-100h] BYREF
  __int64 v952; // [rsp+788h] [rbp-F0h]
  _BYTE *v953; // [rsp+790h] [rbp-E8h] BYREF
  __int64 v954; // [rsp+798h] [rbp-E0h]
  _BYTE v955[16]; // [rsp+7A0h] [rbp-D8h] BYREF
  _BYTE *v956; // [rsp+7B0h] [rbp-C8h] BYREF
  __int64 v957; // [rsp+7B8h] [rbp-C0h]
  _BYTE v958[16]; // [rsp+7C0h] [rbp-B8h] BYREF
  char v959; // [rsp+7D0h] [rbp-A8h]
  __int64 v960; // [rsp+7D8h] [rbp-A0h]
  char v961; // [rsp+7F0h] [rbp-88h]
  char v962; // [rsp+828h] [rbp-50h]
  unsigned __int64 v963; // [rsp+838h] [rbp-40h]

  v783 = this;
  v963 = __readfsqword(0x28u);
  v953 = v955;
  v954 = 0;
  v955[0] = 0;
  v956 = v958;
  v957 = 0;
  v958[0] = 0;
  v959 = 0;
  v960 = 0;
  v961 = 0;
  v962 = 0;
  std::string::_M_replace();
  v801 = (__int128 *)&v956;
  std::string::_M_replace();
  *(_QWORD *)&v933 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v932) = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "type", v3, v4, v5, v6, v316, (int)&v953, (__int64)&v933);
  LOBYTE(v934) = 0;
  *(_QWORD *)&v935 = 0;
  v933 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v934) = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "object", v8, v9, v10, v11, v317, v384, v452);
  v935 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v946,
    (const __m128i *)&v932);
  v947.m128i_i64[0] = 0;
  LOBYTE(v939) = 0;
  *(_QWORD *)&v940 = 0;
  v790 = &v940;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v939) = 3;
  v12 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v12, "properties", v13, v14, v15, v16, v318, v385, v453);
  v940 = (unsigned __int64)v12;
  v802 = &v841;
  v782 = _mm_loadh_ps((const double *)&std::_Function_handler<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> ()(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&),nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> (*)(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)>::_M_invoke);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v17 = _mm_load_si128(&v841);
  *(_QWORD *)&v941[16] = 0;
  v800 = &v947.m128i_i64[1];
  *(__m128i *)v941 = v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v947.m128i_i64[1],
    (const __m128i *)&v939);
  v948 = 0;
  LOBYTE(v842) = 0;
  v803 = &v842;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v842,
    &v946);
  v18 = v959;
  v19 = v843;
  v959 = v842;
  LOBYTE(v842) = v18;
  v843 = v960;
  v960 = v19;
  v804 = &v843;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v823 = &v941[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  si128 = _mm_load_si128((const __m128i *)&v782);
  v946.m128i_i64[1] = 0;
  v946.m128i_i64[0] = (__int64)ida_mcp::tools::xtensa_options::`anonymous namespace'::handle_get_xtensa_features;
  v947 = si128;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v947.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v947.m128i_i64[0])(&v946, &v946, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition(v386);
  v953 = v955;
  v954 = 0;
  v955[0] = 0;
  v956 = v958;
  v957 = 0;
  v958[0] = 0;
  v959 = 0;
  v960 = 0;
  v961 = 0;
  v962 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v860 = 0;
  *(_QWORD *)&v861 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v860 = 3;
  v21 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v21, "type", v22, v23, v24, v25, v319, (int)v386, v454);
  LOBYTE(v862) = 0;
  v791 = &v863;
  *(_QWORD *)&v863 = 0;
  v861 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v862) = 3;
  v26 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v26, "object", v27, v28, v29, v30, v320, v387, v455);
  v812 = &v860;
  v863 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v946,
    (const __m128i *)&v860);
  v947.m128i_i64[0] = 0;
  v917 = 0;
  *(_QWORD *)&v918 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v917 = 3;
  v31 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v31, "properties", v32, v33, v34, v35, v321, v388, v456);
  v786 = (const __m128i *)&v877;
  v918 = (unsigned __int64)v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v878 + 1) = 0;
  v864 = 0;
  *(_QWORD *)&v865 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v864 = 3;
  v36 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v36, "type", v37, v38, v39, v40, v322, v389, v457);
  v866 = 0;
  *(_QWORD *)&v867 = 0;
  v865 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v866 = 3;
  v41 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v41, "string", v42, v43, v44, v45, v323, v390, v458);
  v813 = &v864;
  v867 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v872,
    (const __m128i *)&v864);
  v873 = 0;
  v868 = 0;
  *(_QWORD *)&v869 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v868 = 3;
  v46 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v46, "description", v47, v48, v49, v50, v324, v391, v459);
  v870 = 0;
  *(_QWORD *)&v871 = 0;
  v869 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v870 = 3;
  v51 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v51,
    "Feature name: code_density, windowed, loop, mac16, boolean, debug, exception, interrupt, hp_interrupt, int_mul32, ...",
    v52,
    v53,
    v54,
    v55,
    v325,
    v392,
    v460);
  v814 = &v868;
  v836 = &v874;
  v871 = (unsigned __int64)v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v874,
    (const __m128i *)&v868);
  v876 = 0;
  v837 = &v879;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v879,
    &v872);
  v881 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v939,
    v786);
  *((_QWORD *)&v940 + 1) = 0;
  v894 = 0;
  *(_QWORD *)&v895 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v894 = 3;
  v56 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v56, "enable", v57, v58, v59, v60, v326, v393, v461);
  v882 = 0;
  *(_QWORD *)&v883 = 0;
  v895 = (unsigned __int64)v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v882 = 3;
  v61 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v61, "type", v62, v63, v64, v65, v327, v394, v462);
  v883 = (unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v885 + 1) = 0;
  v809 = &v882;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v926,
    (const __m128i *)&v882);
  v927 = 0;
  v793 = (const __m128i *)&v886;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v887 + 1) = 0;
  v888 = 4;
  v889 = 1u;
  v831 = &v928;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v928,
    v793);
  v929 = 0;
  v890 = 0;
  *(_QWORD *)&v891 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v890 = 3;
  v66 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v66, "description", v67, v68, v69, v70, v328, v395, (__int64)&v926);
  LOBYTE(v892) = 0;
  v787 = &v893;
  *(_QWORD *)&v893 = 0;
  v891 = (unsigned __int64)v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v892) = 3;
  v71 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v71,
    "Set to false to disable instead of enable",
    v72,
    v73,
    v74,
    v75,
    v329,
    v396,
    v463);
  v810 = &v890;
  v893 = (unsigned __int64)v71;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v930,
    (const __m128i *)&v890);
  v930[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v896,
    v464);
  *((_QWORD *)&v897 + 1) = 0;
  v807 = &v894;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v941,
    (const __m128i *)&v894);
  *(_QWORD *)&v941[16] = 0;
  v912 = 0;
  *(_QWORD *)&v913 = 0;
  v805 = &v913;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v912 = 3;
  v76 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v76, "reanalyse", v77, v78, v79, v80, v330, v397, (__int64)v464);
  v898 = 0;
  *(_QWORD *)&v899 = 0;
  v913 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v898 = 3;
  v81 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v81, "type", v82, v83, v84, v85, v331, v398, v465);
  v828 = &v900;
  v899 = (unsigned __int64)v81;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v902 = 0;
  v811 = &v898;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v932,
    (const __m128i *)&v898);
  *((_QWORD *)&v933 + 1) = 0;
  v797 = (const __m128i *)&v903;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v904 + 1) = 0;
  v905 = 4;
  v906 = 1;
  v907 = 0;
  v832 = &v934;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v934,
    v797);
  *((_QWORD *)&v935 + 1) = 0;
  v908 = 0;
  *(_QWORD *)&v909 = 0;
  v788 = &v909;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v908 = 3;
  v86 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v86, "description", v87, v88, v89, v90, v332, v399, v466);
  LOBYTE(v910) = 0;
  v789 = &v911;
  *(_QWORD *)&v911 = 0;
  v909 = (unsigned __int64)v86;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v910) = 3;
  v91 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v91,
    "Re-plan analysis on all code segments after changing",
    v92,
    v93,
    v94,
    v95,
    v333,
    v400,
    v467);
  v785 = &v908;
  v833 = v936;
  v911 = (unsigned __int64)v91;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v936,
    (const __m128i *)&v908);
  v937 = 0;
  v829 = &v914;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v914,
    (const __m128i *)&v932);
  v916 = 0;
  v784 = &v912;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v942,
    (const __m128i *)&v912);
  *((_QWORD *)&v943 + 1) = 0;
  v830 = &v919;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v919,
    (const __m128i *)&v939);
  v921 = 0;
  v806 = &v917;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v800,
    (const __m128i *)&v917);
  v948 = 0;
  v922 = 0;
  *(_QWORD *)&v923 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v922 = 3;
  v96 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v96, "required", v97, v98, v99, v100, v334, v401, v468);
  v923 = (unsigned __int64)v96;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v858 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v101 = _mm_load_si128(&v841);
  v925 = 0;
  v808 = &v922;
  v834 = v949;
  v924 = v101;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v949,
    (const __m128i *)&v922);
  v950 = 0;
  LOBYTE(v842) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v803,
    &v946);
  v102 = v959;
  v103 = v843;
  v959 = v842;
  LOBYTE(v842) = v102;
  v843 = v960;
  v960 = v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v835 = v951;
  v104 = (__m128i *)v951;
  do
  {
    v104 = (__m128i *)((char *)v104 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v104 != &v946 );
  v105 = &v944;
  v822 = &v924.m128i_i8[8];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v824 = &v857;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v821 = &v920;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v105 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v105 != (char *)&v939 );
  v106 = (__int64 *)&v938;
  v838 = &v915;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v106 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v106 != &v932 );
  v107 = &v931;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v820 = &v906;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v798 = &v904;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v819 = &v901;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v796 = &v897;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v107 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v107 != (char *)v469 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v795 = &v889;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v794 = &v887;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v792 = &v885;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v827 = &v880;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v799 = &v878;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v826 = &v875;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v825 = &v872.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v108 = _mm_load_si128((const __m128i *)&v782);
  v946.m128i_i64[1] = 0;
  v946.m128i_i64[0] = (__int64)ida_mcp::tools::xtensa_options::`anonymous namespace'::handle_enable_xtensa_feature;
  v947 = v108;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v947.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v947.m128i_i64[0])(&v946, &v946, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition(v402);
  v953 = v955;
  v954 = 0;
  v955[0] = 0;
  v956 = v958;
  v957 = 0;
  v958[0] = 0;
  v959 = 0;
  v960 = 0;
  v961 = 0;
  v962 = 0;
  std::string::_M_replace();
  std::string::_M_replace();
  v845[0] = 0;
  v801 = &v846;
  *(_QWORD *)&v846 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v845[0] = 3;
  v109 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v109, "type", v110, v111, v112, v113, v335, (int)v402, v469);
  v847 = 0;
  v815 = &v848;
  *(_QWORD *)&v848 = 0;
  v846 = (unsigned __int64)v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v847 = 3;
  v114 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v114, "object", v115, v116, v117, v118, v336, v403, v470);
  v839 = v845;
  v848 = (unsigned __int64)v114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v471,
    (__int64)v845,
    2,
    v119,
    v120,
    v121,
    v337,
    (__int64)v404,
    (int)v471,
    (int)&v872,
    (int)&v883,
    (int)&v891,
    (__int64)&v895,
    (int)&v899,
    (int)&v918,
    (int)&v923,
    (int)&v861,
    (char)&v865,
    (__int64)&v867,
    (int)&v869,
    (__int64)&v871);
  v927 = 0;
  v922 = 0;
  *(_QWORD *)&v923 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v922 = 3;
  v122 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v122, "properties", v123, v124, v125, v126, v338, v405, v472);
  v860 = 0;
  *(_QWORD *)&v861 = 0;
  v923 = (unsigned __int64)v122;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v860 = 3;
  v127 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v127, "preset", v128, v129, v130, v131, v339, v406, v473);
  v849[0] = 0;
  v816 = &v850;
  *(_QWORD *)&v850 = 0;
  v861 = (unsigned __int64)v127;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v849[0] = 3;
  v132 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v132, "type", v133, v134, v135, v136, v340, v407, v474);
  v851 = 0;
  v817 = &v852;
  *(_QWORD *)&v852 = 0;
  v850 = (unsigned __int64)v132;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v851 = 3;
  v137 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v137, "string", v138, v139, v140, v141, v341, v408, v475);
  v840 = v849;
  v852 = (unsigned __int64)v137;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v856,
    (__int64)v849,
    2,
    v142,
    v143,
    v144,
    v342,
    (__int64)v409,
    v476,
    v518,
    v540,
    v562,
    v584,
    v606,
    v628,
    v650,
    v672,
    v694,
    v716,
    v738,
    v760);
  v858 = 0;
  v853[0] = 0;
  *(_QWORD *)&v854[0] = 0;
  v818 = v854;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v853[0] = 3;
  v145 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v145, "enum", v146, v147, v148, v149, v343, v410, v477);
  LOBYTE(v939) = 0;
  *(_QWORD *)&v940 = 0;
  v854[0] = (unsigned __int64)v145;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v939) = 3;
  v150 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v150, "wifi", v151, v152, v153, v154, v344, v411, v478);
  v941[0] = 0;
  *(_QWORD *)&v941[8] = 0;
  v940 = (unsigned __int64)v150;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v941[0] = 3;
  v155 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v155, "be200", v156, v157, v158, v159, v345, v412, v479);
  LOBYTE(v942) = 0;
  *(_QWORD *)&v943 = 0;
  *(_OWORD *)&v941[8] = (unsigned __int64)v155;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v942) = 3;
  v160 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v160, "esp32", v161, v162, v163, v164, v346, v413, v480);
  v944 = 0;
  *(_QWORD *)&v945 = 0;
  v943 = (unsigned __int64)v160;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v944 = 3;
  v165 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v165, "none", v166, v167, v168, v169, v347, v414, v481);
  v841.m128i_i8[0] = 0;
  v841.m128i_i64[1] = 0;
  v945 = (unsigned __int64)v165;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v170 = _mm_load_si128(&v841);
  v855 = 0;
  v854[1] = v170;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v859,
    (__int64)v853,
    2,
    v171,
    v172,
    v173,
    v348,
    (__int64)v415,
    v482,
    v519,
    v541,
    v563,
    v585,
    v607,
    v629,
    v651,
    v673,
    v695,
    v717,
    v739,
    v761);
  v859[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v862,
    (__int64)&v856,
    2,
    v174,
    v175,
    v176,
    v349,
    (__int64)v416,
    v483,
    v520,
    v542,
    v564,
    v586,
    v608,
    v630,
    v652,
    v674,
    v696,
    v718,
    v740,
    v762);
  *((_QWORD *)&v863 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v946,
    (__int64)v812,
    2,
    v177,
    v178,
    v179,
    v350,
    (__int64)v417,
    v484,
    v521,
    v543,
    v565,
    v587,
    v609,
    v631,
    v653,
    v675,
    v697,
    v719,
    v741,
    v763);
  v947.m128i_i64[0] = 0;
  v877 = 0;
  *(_QWORD *)&v878 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v877 = 3;
  v180 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v180, "flags_hex", v181, v182, v183, v184, v351, v418, v485);
  v864 = 0;
  *(_QWORD *)&v865 = 0;
  v878 = (unsigned __int64)v180;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v864 = 3;
  v185 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v185, "type", v186, v187, v188, v189, v352, v419, v486);
  v866 = 0;
  *(_QWORD *)&v867 = 0;
  v865 = (unsigned __int64)v185;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v866 = 3;
  v190 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v190, "string", v191, v192, v193, v194, v353, v420, v487);
  v867 = (unsigned __int64)v190;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v522,
    (__int64)v813,
    2,
    v195,
    v196,
    v197,
    v354,
    (__int64)v421,
    v488,
    (int)v522,
    v544,
    v566,
    v588,
    v610,
    v632,
    v654,
    v676,
    v698,
    v720,
    v742,
    v764);
  v873 = 0;
  v868 = 0;
  *(_QWORD *)&v869 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v868 = 3;
  v198 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v198, "description", v199, v200, v201, v202, v355, v422, v489);
  v870 = 0;
  *(_QWORD *)&v871 = 0;
  v869 = (unsigned __int64)v198;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v870 = 3;
  v203 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v203, "e.g. '0x0305047c'", v204, v205, v206, v207, v356, v423, v490);
  v871 = (unsigned __int64)v203;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v836,
    (__int64)v814,
    2,
    v208,
    v209,
    v210,
    v357,
    (__int64)v424,
    v491,
    v523,
    v545,
    v567,
    v589,
    v611,
    v633,
    v655,
    v677,
    v699,
    v721,
    v743,
    v765);
  v876 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v837,
    v524,
    2,
    v211,
    v212,
    v213,
    v358,
    (__int64)v425,
    v492,
    v524,
    v546,
    v568,
    v590,
    v612,
    v634,
    v656,
    v678,
    v700,
    v722,
    v744,
    v766);
  v881 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v800,
    (__int64)v786,
    2,
    v214,
    v215,
    v216,
    v359,
    (__int64)v426,
    v493,
    v525,
    v547,
    v569,
    v591,
    v613,
    v635,
    v657,
    v679,
    v701,
    v723,
    v745,
    v767);
  v948 = 0;
  v898 = 0;
  *(_QWORD *)&v899 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v898 = 3;
  v217 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v217, "features", v218, v219, v220, v221, v360, v427, v494);
  v882 = 0;
  *(_QWORD *)&v883 = 0;
  v899 = (unsigned __int64)v217;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v882 = 3;
  v222 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v222, "type", v223, v224, v225, v226, v361, v428, v495);
  v884 = 0;
  *(_QWORD *)&v885 = 0;
  v883 = (unsigned __int64)v222;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v884 = 3;
  v227 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v227, "array", v228, v229, v230, v231, v362, v429, v496);
  v885 = (unsigned __int64)v227;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v932,
    (__int64)v809,
    2,
    v232,
    v233,
    v234,
    v363,
    (__int64)v430,
    v497,
    v526,
    v548,
    v570,
    v592,
    v614,
    v636,
    v658,
    v680,
    v702,
    v724,
    v746,
    v768);
  *((_QWORD *)&v933 + 1) = 0;
  v890 = 0;
  *(_QWORD *)&v891 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v890 = 3;
  v235 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v235, "items", v236, v237, v238, v239, v364, v431, v498);
  v886 = 0;
  *(_QWORD *)&v887 = 0;
  v891 = (unsigned __int64)v235;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v886 = 3;
  v240 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v240, "type", v241, v242, v243, v244, v365, v432, v499);
  LOBYTE(v888) = 0;
  *(_QWORD *)&v889 = 0;
  v887 = (unsigned __int64)v240;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v888) = 3;
  v245 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v245, "string", v246, v247, v248, v249, v366, v433, v500);
  v889 = (unsigned __int64)v245;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v844,
    (__int64)v793,
    2,
    v250,
    v251,
    v252,
    v367,
    (__int64)v434,
    v501,
    v527,
    v549,
    v571,
    v593,
    v615,
    v637,
    v659,
    v681,
    v703,
    v725,
    v747,
    v769);
  v844[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v892,
    (__int64)v844,
    1,
    v253,
    v254,
    v255,
    v368,
    (__int64)v435,
    v502,
    v528,
    v550,
    v572,
    v594,
    v616,
    v638,
    v660,
    v682,
    v704,
    v726,
    v748,
    v770);
  *((_QWORD *)&v893 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v832,
    (__int64)v810,
    2,
    v256,
    v257,
    v258,
    v369,
    (__int64)v436,
    v503,
    v529,
    v551,
    v573,
    v595,
    v617,
    v639,
    v661,
    v683,
    v705,
    v727,
    v749,
    v771);
  *((_QWORD *)&v935 + 1) = 0;
  v894 = 0;
  *(_QWORD *)&v895 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v894 = 3;
  v259 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v259, "description", v260, v261, v262, v263, v370, v437, v504);
  LOBYTE(v896) = 0;
  *(_QWORD *)&v897 = 0;
  v895 = (unsigned __int64)v259;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v896) = 3;
  v264 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v264,
    "List of feature names to enable (all others disabled)",
    v265,
    v266,
    v267,
    v268,
    v371,
    v438,
    v505);
  v897 = (unsigned __int64)v264;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v833,
    (__int64)v807,
    2,
    v269,
    v270,
    v271,
    v372,
    (__int64)v439,
    v506,
    v530,
    v552,
    v574,
    v596,
    v618,
    v640,
    v662,
    v684,
    v706,
    v728,
    v750,
    v772);
  v937 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v828,
    (__int64)&v932,
    3,
    v272,
    v273,
    v274,
    v373,
    (__int64)v440,
    v507,
    v531,
    v553,
    v575,
    v597,
    v619,
    v641,
    v663,
    v685,
    v707,
    v729,
    v751,
    v773);
  v902 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v834,
    (__int64)v811,
    2,
    v275,
    v276,
    v277,
    v374,
    (__int64)v441,
    v508,
    v532,
    v554,
    v576,
    v598,
    v620,
    v642,
    v664,
    v686,
    v708,
    v730,
    v752,
    v774);
  v950 = 0;
  v917 = 0;
  *(_QWORD *)&v918 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v917 = 3;
  v278 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v278, "reanalyse", v279, v280, v281, v282, v375, v442, v509);
  v903 = 0;
  *(_QWORD *)&v904 = 0;
  v918 = (unsigned __int64)v278;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v903 = 3;
  v283 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v283, "type", v284, v285, v286, v287, v376, v443, v510);
  v904 = (unsigned __int64)v283;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v907 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v784,
    (__int64)v797,
    2,
    v288,
    v289,
    v290,
    v377,
    (__int64)v444,
    v511,
    v533,
    v555,
    v577,
    v599,
    v621,
    v643,
    v665,
    v687,
    v709,
    v731,
    v753,
    v775);
  *((_QWORD *)&v913 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v909 + 1) = 0;
  v910 = 4;
  v911 = 1u;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v829,
    (__int64)v785,
    2,
    v291,
    v292,
    v293,
    v378,
    (__int64)v445,
    v512,
    v534,
    v556,
    v578,
    v600,
    v622,
    v644,
    v666,
    v688,
    v710,
    v732,
    v754,
    v776);
  v916 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v830,
    (__int64)v784,
    2,
    v294,
    v295,
    v296,
    v379,
    (__int64)v446,
    v513,
    v535,
    v557,
    v579,
    v601,
    v623,
    v645,
    v667,
    v689,
    v711,
    v733,
    v755,
    v777);
  v921 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v835,
    (__int64)v806,
    2,
    v297,
    v298,
    v299,
    v380,
    (__int64)v447,
    v514,
    v536,
    v558,
    v580,
    v602,
    v624,
    v646,
    v668,
    v690,
    v712,
    v734,
    v756,
    v778);
  v952 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v924,
    (__int64)&v946,
    4,
    v300,
    v301,
    v302,
    v381,
    (__int64)v448,
    v515,
    v537,
    v559,
    v581,
    v603,
    v625,
    v647,
    v669,
    v691,
    v713,
    v735,
    v757,
    v779);
  v925 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v831,
    (__int64)v808,
    2,
    v303,
    v304,
    v305,
    v382,
    (__int64)v449,
    v516,
    v538,
    v560,
    v582,
    v604,
    v626,
    v648,
    v670,
    v692,
    v714,
    v736,
    v758,
    v780);
  v929 = 0;
  LOBYTE(v842) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v803,
    v517,
    2,
    v306,
    v307,
    v308,
    v383,
    (__int64)v450,
    v517,
    v539,
    v561,
    v583,
    v605,
    v627,
    v649,
    v671,
    v693,
    v715,
    v737,
    v759,
    v781);
  v309 = v959;
  v959 = v842;
  v310 = v960;
  LOBYTE(v842) = v309;
  v960 = v843;
  v843 = v310;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v311 = (__m128i *)v451;
  do
  {
    v311 = (__m128i *)((char *)v311 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v311 != &v946 );
  v312 = (__int64 *)&v938;
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
    v312 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v312 != &v932 );
  v313 = &v946;
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
  do
  {
    v313 = (__m128i *)((char *)v313 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v313 != (__m128i *)&v939 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v314 = _mm_load_si128((const __m128i *)&v782);
  v946.m128i_i64[1] = 0;
  v946.m128i_i64[0] = (__int64)ida_mcp::tools::xtensa_options::`anonymous namespace'::handle_set_xtensa_features;
  v947 = v314;
  ida_mcp::mcp::McpServer::register_tool();
  if ( v947.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v947.m128i_i64[0])(&v946, &v946, 3);
  ida_mcp::mcp::ToolDefinition::~ToolDefinition(v451);
  return v963 - __readfsqword(0x28u);
}

