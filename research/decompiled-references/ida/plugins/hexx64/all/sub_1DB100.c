__int64 __fastcall sub_1DB100(__int64 a1, __int64 a2, signed int a3, unsigned __int64 **a4, int a5, char a6, double a7)
{
  _QWORD *exception; // rdi
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rax
  __m128i *v12; // rax
  __m128i si128; // xmm0
  __int32 v14; // ecx
  unsigned __int64 v15; // rax
  __int32 v16; // edi
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  __m128i v22; // xmm0
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // r13
  __int64 v26; // rax
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __int64 v29; // rax
  int v30; // edx
  char v32; // bl
  void **v33; // r15
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  signed int v36; // eax
  __m128i v37; // xmm0
  unsigned int v38; // r13d
  __int32 v39; // eax
  const __m128i *v40; // r12
  unsigned __int64 **v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // r15
  __int64 v44; // r13
  __int64 v45; // r12
  _QWORD *v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rdi
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  __m128i *v52; // rax
  __m128 v53; // xmm1
  __m128i *v54; // rax
  void *v55; // r15
  __m128i v56; // xmm0
  unsigned __int64 *v57; // rdi
  __int64 v58; // rdx
  __m128i v59; // xmm0
  __int64 v60; // rsi
  int v61; // eax
  unsigned __int64 *v62; // rax
  unsigned int v63; // ebx
  _QWORD *v64; // rcx
  _QWORD *v65; // rdi
  __int64 v66; // rsi
  unsigned __int64 v67; // rsi
  __int64 v68; // r8
  int v69; // r9d
  signed int v70; // r13d
  unsigned int v71; // ebx
  unsigned int v72; // eax
  __int64 v73; // r15
  __int64 v74; // rax
  __int64 v75; // r15
  unsigned __int8 *v76; // rdx
  __int64 v77; // r15
  __int64 v78; // rdx
  __int64 v79; // r12
  unsigned int v80; // eax
  unsigned __int64 *v81; // rcx
  unsigned __int64 v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rcx
  int v85; // ecx
  __int64 v86; // rcx
  unsigned __int64 v87; // r12
  __int64 func; // rax
  unsigned __int64 v89; // r13
  __int64 v90; // rcx
  unsigned __int64 **v91; // rax
  char *v92; // r13
  char *v93; // rdx
  unsigned __int64 **v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // r15
  __int64 v98; // r12
  __int64 v99; // rbx
  _QWORD *v100; // r13
  __int64 v101; // rdi
  __int64 v102; // rdi
  __int64 v103; // rdi
  __int64 v104; // r15
  __int64 v105; // r12
  __int64 v106; // rbx
  _QWORD *v107; // r13
  __int64 v108; // rdi
  __int64 v109; // rdi
  __int64 v110; // rdi
  __int64 v111; // r13
  __int32 v112; // r15d
  __int64 v113; // r12
  _QWORD *v114; // rbx
  __int64 v115; // rdi
  __int64 v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rdx
  unsigned int v120; // r15d
  __int64 v121; // rsi
  __int64 v122; // rdi
  __int64 v123; // r14
  __int32 v124; // r15d
  __int64 v125; // r13
  __int64 v126; // r12
  _QWORD *v127; // rbx
  __int64 v128; // rdi
  __int64 v129; // rdi
  __int64 v130; // rsi
  __int64 v131; // rdx
  __int64 v132; // r12
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int32 *v135; // rbx
  __int64 v136; // rsi
  __int32 v137; // eax
  __int64 v138; // rax
  __int64 v139; // rsi
  unsigned __int32 v140; // r13d
  int v141; // eax
  int v142; // r13d
  __int64 v143; // rax
  __int64 v144; // rsi
  unsigned __int64 v145; // r12
  _QWORD *v146; // rax
  unsigned __int8 *v147; // rdi
  unsigned __int64 v148; // rdx
  __int64 v149; // r15
  __int64 v150; // rcx
  unsigned int v151; // edx
  __int64 v152; // rax
  unsigned __int64 v153; // rax
  int v154; // edx
  __int64 v155; // rcx
  __int64 v156; // r15
  unsigned __int64 v157; // rax
  __int32 v158; // r9d
  unsigned __int64 v159; // rax
  unsigned __int64 v160; // rdx
  __m128i *v161; // rsi
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rbx
  void *v165; // r15
  __m128i v166; // xmm0
  __m128i v167; // xmm0
  unsigned __int64 v168; // rbx
  void *v169; // r15
  __m128i v170; // xmm0
  __m128 v171; // xmm1
  __m128i v172; // xmm0
  __m128i v173; // xmm0
  __m128i v174; // xmm0
  unsigned __int64 v175; // rbx
  void *v176; // r15
  __m128i v177; // xmm0
  unsigned __int64 v178; // rbx
  void *v179; // r15
  __m128i v180; // xmm0
  unsigned __int64 v181; // rbx
  void *v182; // r15
  __m128i v183; // xmm0
  const void **v184; // rsi
  __int64 v185; // rdx
  __int64 v186; // rcx
  unsigned __int64 v187; // rbx
  void *v188; // r12
  __m128i v189; // xmm0
  unsigned __int64 v190; // rbx
  void *v191; // r12
  __m128i v192; // xmm0
  __int64 v193; // rdx
  __int64 v194; // rcx
  unsigned __int64 v195; // rbx
  void *v196; // r12
  __m128i v197; // xmm0
  __int64 v198; // rsi
  unsigned __int64 *v199; // rax
  _QWORD *v200; // rcx
  _QWORD *v201; // rdx
  unsigned __int64 v202; // rbx
  unsigned __int64 v203; // r12
  __int64 *v204; // rdi
  __int64 *v205; // rdi
  unsigned __int64 *v206; // rax
  __m128i v207; // xmm0
  __int64 v208; // r12
  __int64 v209; // rbx
  __int64 v210; // rbx
  __m128i v211; // xmm0
  __int64 v212; // rbx
  __m128i v213; // xmm0
  __m128i v214; // xmm0
  __m128i v215; // xmm0
  __m128i v216; // xmm0
  __int64 v217; // rbx
  __int64 v218; // rbx
  __int64 v219; // rbx
  void *v220; // rsi
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 v223; // rbx
  __int64 v224; // rbx
  __int64 v225; // rbx
  unsigned __int64 **v226; // r12
  __m128i v227; // xmm0
  __m128i v228; // xmm0
  __m128i v229; // xmm0
  __m128i v230; // xmm0
  __m128i v231; // xmm0
  __m128i v232; // xmm1
  __m128i v233; // xmm1
  __m128i v234; // xmm1
  __m128i v235; // xmm1
  __m128i v236; // xmm1
  __m128i v237; // xmm1
  __m128i v238; // xmm1
  __m128i v239; // xmm1
  __m128i v240; // xmm1
  __m128i v241; // xmm1
  __int64 v242; // rax
  __m128i v243; // xmm1
  __m128i v244; // xmm0
  __m128i v245; // xmm1
  __m128i v246; // xmm1
  __m128i v247; // xmm0
  __m128i v248; // xmm0
  __m128i v249; // xmm0
  __int64 v250; // rdi
  __int64 v251; // r15
  __int64 v252; // rbx
  _QWORD *v253; // r12
  __int64 v254; // rdi
  __int64 v255; // rdi
  __int64 v256; // rdi
  __int64 v257; // r15
  __int64 v258; // rbx
  _QWORD *v259; // r12
  __int64 v260; // rdi
  __int64 v261; // rdi
  __int64 v262; // rdi
  __int64 v263; // r13
  __int64 v264; // rbx
  __int64 v265; // r15
  _QWORD *v266; // r12
  __int64 v267; // rdi
  __int64 v268; // rdi
  __int64 v269; // rdi
  __int64 v270; // r13
  __int64 v271; // rbx
  __int64 v272; // r15
  _QWORD *v273; // r12
  __int64 v274; // rdi
  __int64 v275; // rdi
  __int64 v276; // rdi
  __int64 v277; // r12
  __int64 v278; // r15
  _QWORD *v279; // rbx
  __int64 v280; // rdi
  __int64 v281; // rdi
  __int64 v282; // rax
  __int64 v283; // rax
  unsigned __int64 **v284; // rax
  unsigned __int64 tinfo_size; // r13
  void *v286; // rax
  void *v287; // rax
  void *v288; // rax
  void *v289; // rax
  void *v290; // rax
  unsigned __int64 *v291; // rax
  __m128i v292; // xmm0
  _BYTE *v293; // rcx
  void *v294; // rax
  void *v295; // rax
  void *v296; // rax
  void *v297; // rax
  __int64 v298; // r15
  __int64 v299; // rbx
  __int64 v300; // r12
  __int64 v301; // rdx
  __int64 v302; // rax
  __int64 v303; // rbx
  char *v304; // rax
  const void *v305; // rsi
  char *v306; // r15
  __int64 v307; // rcx
  int v308; // eax
  __int64 v309; // rdx
  void *v310; // rax
  void *v311; // rax
  void *v312; // rax
  void *v313; // rax
  __int64 v314; // rdi
  __int64 v315; // [rsp+8h] [rbp-E18h]
  __int64 v316; // [rsp+10h] [rbp-E10h]
  __int64 i; // [rsp+38h] [rbp-DE8h]
  __int64 v318; // [rsp+40h] [rbp-DE0h]
  __int64 v319; // [rsp+40h] [rbp-DE0h]
  char n; // [rsp+48h] [rbp-DD8h]
  size_t nb; // [rsp+48h] [rbp-DD8h]
  size_t na; // [rsp+48h] [rbp-DD8h]
  bool v323; // [rsp+50h] [rbp-DD0h]
  bool v324; // [rsp+50h] [rbp-DD0h]
  unsigned __int64 *v325; // [rsp+58h] [rbp-DC8h]
  unsigned int v326; // [rsp+58h] [rbp-DC8h]
  unsigned __int64 v327; // [rsp+60h] [rbp-DC0h]
  __int64 *v328; // [rsp+68h] [rbp-DB8h]
  __int32 v330; // [rsp+70h] [rbp-DB0h]
  __int64 v331; // [rsp+78h] [rbp-DA8h]
  __m128i v332; // [rsp+80h] [rbp-DA0h] BYREF
  unsigned __int64 **v333; // [rsp+90h] [rbp-D90h]
  __int64 v334; // [rsp+98h] [rbp-D88h]
  unsigned __int64 v335; // [rsp+A0h] [rbp-D80h]
  unsigned __int64 **v336; // [rsp+A8h] [rbp-D78h]
  unsigned int v337; // [rsp+B0h] [rbp-D70h]
  unsigned int v338; // [rsp+B4h] [rbp-D6Ch]
  unsigned __int64 *v339; // [rsp+B8h] [rbp-D68h]
  __m128i v340; // [rsp+C0h] [rbp-D60h] BYREF
  __int64 v341[2]; // [rsp+D0h] [rbp-D50h] BYREF
  _QWORD v342[2]; // [rsp+E0h] [rbp-D40h] BYREF
  unsigned __int64 v343; // [rsp+F0h] [rbp-D30h] BYREF
  __int128 v344; // [rsp+F8h] [rbp-D28h]
  __int64 v345; // [rsp+110h] [rbp-D10h]
  _BYTE v346[24]; // [rsp+118h] [rbp-D08h] BYREF
  int v347; // [rsp+130h] [rbp-CF0h]
  unsigned __int64 *v348; // [rsp+140h] [rbp-CE0h] BYREF
  _QWORD *v349; // [rsp+148h] [rbp-CD8h]
  __int128 v350; // [rsp+150h] [rbp-CD0h]
  __int64 v351; // [rsp+160h] [rbp-CC0h]
  __int64 v352; // [rsp+168h] [rbp-CB8h]
  __int64 v353; // [rsp+170h] [rbp-CB0h]
  unsigned __int64 **v354; // [rsp+178h] [rbp-CA8h]
  void **v355; // [rsp+180h] [rbp-CA0h]
  __int64 v356; // [rsp+188h] [rbp-C98h] BYREF
  __int128 v357; // [rsp+190h] [rbp-C90h]
  __int64 v358; // [rsp+1A0h] [rbp-C80h] BYREF
  __int128 v359; // [rsp+1A8h] [rbp-C78h]
  __int64 v360; // [rsp+1B8h] [rbp-C68h]
  unsigned __int64 v361; // [rsp+1C0h] [rbp-C60h]
  bool v362; // [rsp+1C8h] [rbp-C58h]
  char v363; // [rsp+1C9h] [rbp-C57h]
  char v364; // [rsp+1CAh] [rbp-C56h]
  __int64 (__fastcall **v365)(); // [rsp+1D0h] [rbp-C50h] BYREF
  char v366; // [rsp+1D8h] [rbp-C48h]
  __int64 v367; // [rsp+1E0h] [rbp-C40h]
  __int128 v368; // [rsp+1E8h] [rbp-C38h]
  __int128 v369; // [rsp+1F8h] [rbp-C28h]
  __int64 *v370; // [rsp+208h] [rbp-C18h]
  int v371; // [rsp+210h] [rbp-C10h]
  __int64 v372; // [rsp+218h] [rbp-C08h]
  __int128 v373; // [rsp+220h] [rbp-C00h]
  int v374; // [rsp+230h] [rbp-BF0h]
  __m128i v375; // [rsp+240h] [rbp-BE0h] BYREF
  __int128 v376; // [rsp+250h] [rbp-BD0h]
  __int128 v377; // [rsp+260h] [rbp-BC0h]
  __int64 v378; // [rsp+270h] [rbp-BB0h]
  __int128 v379; // [rsp+278h] [rbp-BA8h]
  __int128 v380; // [rsp+288h] [rbp-B98h]
  __int64 v381; // [rsp+298h] [rbp-B88h]
  int v382; // [rsp+2A0h] [rbp-B80h]
  __int128 v383; // [rsp+2A8h] [rbp-B78h]
  __int128 v384; // [rsp+2B8h] [rbp-B68h]
  __int64 v385; // [rsp+2C8h] [rbp-B58h]
  __int64 v386; // [rsp+2D0h] [rbp-B50h]
  __int128 v387; // [rsp+2D8h] [rbp-B48h]
  __int64 v388; // [rsp+2E8h] [rbp-B38h]
  __int64 v389; // [rsp+2F0h] [rbp-B30h]
  __int128 v390; // [rsp+2F8h] [rbp-B28h]
  __int64 v391; // [rsp+308h] [rbp-B18h]
  __int128 v392; // [rsp+310h] [rbp-B10h]
  __int64 v393; // [rsp+320h] [rbp-B00h]
  __int128 v394; // [rsp+328h] [rbp-AF8h]
  __int64 v395; // [rsp+338h] [rbp-AE8h]
  __int64 v396; // [rsp+340h] [rbp-AE0h]
  __int64 v397; // [rsp+348h] [rbp-AD8h]
  __int128 v398; // [rsp+350h] [rbp-AD0h]
  int v399; // [rsp+360h] [rbp-AC0h]
  __int64 v400; // [rsp+368h] [rbp-AB8h]
  __int128 v401; // [rsp+370h] [rbp-AB0h]
  __int64 v402; // [rsp+380h] [rbp-AA0h]
  __int128 v403; // [rsp+388h] [rbp-A98h]
  __int64 v404; // [rsp+398h] [rbp-A88h]
  __int128 v405; // [rsp+3A0h] [rbp-A80h]
  unsigned __int64 *v406[2]; // [rsp+3B0h] [rbp-A70h] BYREF
  char v407; // [rsp+3C0h] [rbp-A60h] BYREF
  __m128i v408; // [rsp+480h] [rbp-9A0h] BYREF
  __m128i v409; // [rsp+490h] [rbp-990h]
  __int128 v410; // [rsp+4A0h] [rbp-980h] BYREF
  __int64 v411; // [rsp+4B0h] [rbp-970h]
  __m128i v412; // [rsp+4B8h] [rbp-968h] BYREF
  __m128i v413; // [rsp+4C8h] [rbp-958h] BYREF
  __int64 v414; // [rsp+4D8h] [rbp-948h]
  int v415; // [rsp+4E0h] [rbp-940h]
  __m128i v416; // [rsp+4E8h] [rbp-938h] BYREF
  __m128i v417; // [rsp+4F8h] [rbp-928h] BYREF
  __int64 v418; // [rsp+508h] [rbp-918h]
  void *v419; // [rsp+510h] [rbp-910h]
  __int128 v420; // [rsp+518h] [rbp-908h]
  __int64 v421; // [rsp+528h] [rbp-8F8h]
  void *v422; // [rsp+530h] [rbp-8F0h]
  __int128 v423; // [rsp+538h] [rbp-8E8h]
  void *v424; // [rsp+548h] [rbp-8D8h]
  __int128 v425; // [rsp+550h] [rbp-8D0h]
  void *v426; // [rsp+560h] [rbp-8C0h]
  __int128 v427; // [rsp+568h] [rbp-8B8h]
  const void *v428[2]; // [rsp+578h] [rbp-8A8h] BYREF
  void *v429; // [rsp+588h] [rbp-898h]
  __int128 v430; // [rsp+590h] [rbp-890h]
  int v431; // [rsp+5A0h] [rbp-880h]
  void *v432; // [rsp+5A8h] [rbp-878h]
  __int128 v433; // [rsp+5B0h] [rbp-870h]
  __int64 v434; // [rsp+5C0h] [rbp-860h] BYREF
  __int128 v435; // [rsp+5C8h] [rbp-858h]
  void *src; // [rsp+5D8h] [rbp-848h]
  __int128 v437; // [rsp+5E0h] [rbp-840h]
  unsigned __int64 *v438[2]; // [rsp+5F0h] [rbp-830h] BYREF
  __m128i v439; // [rsp+600h] [rbp-820h] BYREF
  __m128i v440; // [rsp+610h] [rbp-810h] BYREF
  __m128i v441; // [rsp+620h] [rbp-800h] BYREF
  __m128i v442; // [rsp+630h] [rbp-7F0h] BYREF
  __m128i v443; // [rsp+640h] [rbp-7E0h] BYREF
  __m128i v444; // [rsp+650h] [rbp-7D0h] BYREF
  __m128i v445; // [rsp+660h] [rbp-7C0h] BYREF
  __m128i v446; // [rsp+670h] [rbp-7B0h] BYREF
  __m128i v447; // [rsp+680h] [rbp-7A0h] BYREF
  __m128i v448; // [rsp+690h] [rbp-790h] BYREF
  __m128i v449; // [rsp+6A0h] [rbp-780h] BYREF
  __m128i v450; // [rsp+6B0h] [rbp-770h] BYREF
  void *v451[2]; // [rsp+6C0h] [rbp-760h] BYREF
  __m128i v452; // [rsp+6D0h] [rbp-750h]
  __m128i v453; // [rsp+6E0h] [rbp-740h] BYREF
  __int64 v454; // [rsp+6F0h] [rbp-730h]
  __m128i v455; // [rsp+6F8h] [rbp-728h] BYREF
  __m128i v456; // [rsp+708h] [rbp-718h] BYREF
  __int64 v457; // [rsp+718h] [rbp-708h]
  int v458; // [rsp+720h] [rbp-700h]
  __m128i v459; // [rsp+728h] [rbp-6F8h] BYREF
  __m128i v460; // [rsp+738h] [rbp-6E8h] BYREF
  __int64 v461; // [rsp+748h] [rbp-6D8h]
  void *v462; // [rsp+750h] [rbp-6D0h]
  __m128i v463; // [rsp+758h] [rbp-6C8h]
  __int64 v464; // [rsp+768h] [rbp-6B8h]
  void *v465; // [rsp+770h] [rbp-6B0h]
  __m128i v466; // [rsp+778h] [rbp-6A8h]
  void *v467; // [rsp+788h] [rbp-698h]
  __m128i v468; // [rsp+790h] [rbp-690h]
  void *v469; // [rsp+7A0h] [rbp-680h]
  __m128i v470; // [rsp+7A8h] [rbp-678h]
  __int64 v471[2]; // [rsp+7B8h] [rbp-668h] BYREF
  void *v472; // [rsp+7C8h] [rbp-658h]
  __m128i v473; // [rsp+7D0h] [rbp-650h]
  int v474; // [rsp+7E0h] [rbp-640h]
  void *v475; // [rsp+7E8h] [rbp-638h]
  __m128i v476; // [rsp+7F0h] [rbp-630h]
  __int64 v477; // [rsp+800h] [rbp-620h] BYREF
  __int128 v478; // [rsp+808h] [rbp-618h]
  void *v479; // [rsp+818h] [rbp-608h]
  __m128i v480; // [rsp+820h] [rbp-600h]
  unsigned __int64 *v481; // [rsp+830h] [rbp-5F0h] BYREF
  _QWORD *v482; // [rsp+838h] [rbp-5E8h]
  __m128i v483; // [rsp+840h] [rbp-5E0h] BYREF
  __m128i v484; // [rsp+850h] [rbp-5D0h] BYREF
  __m128i v485; // [rsp+860h] [rbp-5C0h] BYREF
  __m128i v486; // [rsp+870h] [rbp-5B0h] BYREF
  __m128i v487; // [rsp+880h] [rbp-5A0h] BYREF
  __m128i v488; // [rsp+890h] [rbp-590h] BYREF
  __m128i v489; // [rsp+8A0h] [rbp-580h] BYREF
  __m128i v490; // [rsp+8B0h] [rbp-570h] BYREF
  __m128i v491; // [rsp+8C0h] [rbp-560h] BYREF
  __m128i v492; // [rsp+8D0h] [rbp-550h] BYREF
  __m128i v493; // [rsp+8E0h] [rbp-540h] BYREF
  __m128i v494; // [rsp+8F0h] [rbp-530h] BYREF
  __int64 v495; // [rsp+900h] [rbp-520h] BYREF
  __int64 v496; // [rsp+908h] [rbp-518h]
  int v497; // [rsp+910h] [rbp-510h]
  unsigned __int64 v498; // [rsp+920h] [rbp-500h]
  __m128i v499; // [rsp+928h] [rbp-4F8h] BYREF
  __m128i v500; // [rsp+938h] [rbp-4E8h] BYREF
  __m128i v501; // [rsp+948h] [rbp-4D8h] BYREF
  __int64 v502; // [rsp+958h] [rbp-4C8h]
  __m128i v503; // [rsp+960h] [rbp-4C0h] BYREF
  __m128i v504; // [rsp+970h] [rbp-4B0h] BYREF
  __int64 v505; // [rsp+980h] [rbp-4A0h]
  int v506; // [rsp+988h] [rbp-498h]
  __m128i v507; // [rsp+990h] [rbp-490h] BYREF
  __m128i v508; // [rsp+9A0h] [rbp-480h] BYREF
  __int64 v509; // [rsp+9B0h] [rbp-470h]
  __int64 v510; // [rsp+9B8h] [rbp-468h]
  __m128i v511; // [rsp+9C0h] [rbp-460h] BYREF
  __int64 v512; // [rsp+9D0h] [rbp-450h]
  __int64 v513; // [rsp+9D8h] [rbp-448h]
  __m128i v514; // [rsp+9E0h] [rbp-440h] BYREF
  __int64 v515; // [rsp+9F0h] [rbp-430h]
  __m128i v516; // [rsp+9F8h] [rbp-428h] BYREF
  void *v517; // [rsp+A08h] [rbp-418h]
  __m128i v518; // [rsp+A10h] [rbp-410h] BYREF
  __int64 v519[2]; // [rsp+A20h] [rbp-400h] BYREF
  __int64 v520; // [rsp+A30h] [rbp-3F0h]
  __m128i v521; // [rsp+A38h] [rbp-3E8h] BYREF
  int v522; // [rsp+A48h] [rbp-3D8h]
  __int64 v523; // [rsp+A50h] [rbp-3D0h]
  __m128i v524; // [rsp+A58h] [rbp-3C8h] BYREF
  __int64 v525; // [rsp+A68h] [rbp-3B8h]
  __m128i v526; // [rsp+A70h] [rbp-3B0h] BYREF
  void *v527; // [rsp+A80h] [rbp-3A0h]
  __m128i v528; // [rsp+A88h] [rbp-398h] BYREF
  unsigned __int64 *v529; // [rsp+A98h] [rbp-388h] BYREF
  unsigned __int64 *v530; // [rsp+AA0h] [rbp-380h]
  __m128i v531; // [rsp+AA8h] [rbp-378h] BYREF
  __m128i v532; // [rsp+AB8h] [rbp-368h] BYREF
  __m128i v533; // [rsp+AC8h] [rbp-358h] BYREF
  __m128i v534; // [rsp+AD8h] [rbp-348h] BYREF
  __m128i v535; // [rsp+AE8h] [rbp-338h] BYREF
  __m128i v536; // [rsp+AF8h] [rbp-328h] BYREF
  __m128i v537; // [rsp+B08h] [rbp-318h] BYREF
  __m128i v538; // [rsp+B18h] [rbp-308h] BYREF
  __m128i v539; // [rsp+B28h] [rbp-2F8h] BYREF
  __m128i v540; // [rsp+B38h] [rbp-2E8h] BYREF
  __m128i v541; // [rsp+B48h] [rbp-2D8h] BYREF
  __m128i v542; // [rsp+B58h] [rbp-2C8h] BYREF
  __int64 v543; // [rsp+B68h] [rbp-2B8h]
  __int64 v544; // [rsp+B70h] [rbp-2B0h]
  int v545; // [rsp+B78h] [rbp-2A8h]
  unsigned __int64 v546; // [rsp+B80h] [rbp-2A0h] BYREF
  __m128i v547; // [rsp+B88h] [rbp-298h]
  __m128i v548; // [rsp+B98h] [rbp-288h]
  __m128i v549; // [rsp+BA8h] [rbp-278h]
  __int64 v550; // [rsp+BB8h] [rbp-268h]
  __m128i v551; // [rsp+BC0h] [rbp-260h]
  __m128i v552; // [rsp+BD0h] [rbp-250h]
  __int64 v553; // [rsp+BE0h] [rbp-240h]
  int v554; // [rsp+BE8h] [rbp-238h]
  __m128i v555; // [rsp+BF0h] [rbp-230h]
  __m128i v556; // [rsp+C00h] [rbp-220h]
  __int64 v557; // [rsp+C10h] [rbp-210h]
  __int64 v558; // [rsp+C18h] [rbp-208h]
  __m128i v559; // [rsp+C20h] [rbp-200h]
  __int64 v560; // [rsp+C30h] [rbp-1F0h]
  __int64 v561; // [rsp+C38h] [rbp-1E8h]
  __m128i v562; // [rsp+C40h] [rbp-1E0h]
  __int64 v563; // [rsp+C50h] [rbp-1D0h]
  __m128i v564; // [rsp+C58h] [rbp-1C8h]
  __int64 v565; // [rsp+C68h] [rbp-1B8h]
  __m128i v566; // [rsp+C70h] [rbp-1B0h]
  __int64 v567; // [rsp+C80h] [rbp-1A0h] BYREF
  __int64 v568; // [rsp+C90h] [rbp-190h]
  __m128i v569; // [rsp+C98h] [rbp-188h]
  int v570; // [rsp+CA8h] [rbp-178h]
  __int64 v571; // [rsp+CB0h] [rbp-170h]
  __m128i v572; // [rsp+CB8h] [rbp-168h]
  __int64 v573; // [rsp+CC8h] [rbp-158h]
  __m128i v574; // [rsp+CD0h] [rbp-150h]
  __int64 v575; // [rsp+CE0h] [rbp-140h]
  __m128i v576; // [rsp+CE8h] [rbp-138h]
  unsigned __int64 *v577[2]; // [rsp+CF8h] [rbp-128h] BYREF
  __m128i v578; // [rsp+D08h] [rbp-118h]
  __m128i v579; // [rsp+D18h] [rbp-108h]
  __m128i v580; // [rsp+D28h] [rbp-F8h]
  __m128i v581; // [rsp+D38h] [rbp-E8h]
  __m128i v582; // [rsp+D48h] [rbp-D8h]
  __m128i v583; // [rsp+D58h] [rbp-C8h]
  __m128i v584; // [rsp+D68h] [rbp-B8h]
  __m128i v585; // [rsp+D78h] [rbp-A8h]
  __m128i v586; // [rsp+D88h] [rbp-98h]
  __m128i v587; // [rsp+D98h] [rbp-88h]
  __m128i v588; // [rsp+DA8h] [rbp-78h]
  __m128i v589; // [rsp+DB8h] [rbp-68h]
  __int64 v590; // [rsp+DC8h] [rbp-58h]
  __int64 v591; // [rsp+DD0h] [rbp-50h]
  int v592; // [rsp+DD8h] [rbp-48h]
  unsigned __int64 v593; // [rsp+DE8h] [rbp-38h]

  v334 = a2;
  v338 = a3;
  v336 = a4;
  v593 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 64) <= a3 )
  {
    v340.m128i_i32[0] = -4;
    return v340.m128i_u32[0];
  }
  LODWORD(v339) = a6 & 1;
  if ( (a6 & 1) == 0 && *(_QWORD *)(a1 + 1480) > 1u )
  {
    v340.m128i_i32[0] = -22;
    return v340.m128i_u32[0];
  }
  sub_1CF3F0(v336);
  v340.m128i_i32[0] = sub_33E140(*(_QWORD *)(a1 + 1496), 0x14u, v334, v338, v336);
  if ( !v340.m128i_i32[0] )
  {
    v333 = *(unsigned __int64 ***)(v334 + 816);
    if ( !v333 )
    {
      v94 = (unsigned __int64 **)qalloc();
      v333 = v94;
      if ( !v94 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v95 = v334;
      *v94 = nullptr;
      v94[1] = nullptr;
      v94[2] = nullptr;
      *(_QWORD *)(v95 + 816) = v94;
      *(_DWORD *)(v95 + 824) = *(_DWORD *)(a1 + 64);
    }
    v337 = *(_DWORD *)(a1 + 64);
    if ( v338 >= v337 )
      sub_1D36D0(a7);
    v318 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v338);
    v331 = *(_QWORD *)(v318 + 56);
    v10 = *v336;
    v328 = (__int64 *)*v336;
    if ( !*v336 )
    {
      if ( !v336[2] )
      {
        v340.m128i_i32[0] = -26;
        v30 = v337;
        goto LABEL_30;
      }
      v10 = v336[1];
    }
    v11 = *v10;
    v454 = -1;
    *(_OWORD *)v451 = 0;
    v327 = v11;
    v12 = &v483;
    v452 = 0;
    v455 = 0;
    v456 = 0;
    v459 = 0;
    v460 = 0;
    v463 = 0;
    v466 = 0;
    v468 = 0;
    v470 = 0;
    v473 = 0;
    v476 = 0;
    v478 = 0;
    v457 = 0;
    v458 = 0;
    v461 = 0;
    v462 = nullptr;
    v464 = 0;
    v465 = nullptr;
    v467 = nullptr;
    v469 = nullptr;
    v471[0] = 0;
    v471[1] = 0;
    v472 = nullptr;
    v474 = -1;
    v475 = nullptr;
    v477 = 0;
    v479 = nullptr;
    v453 = (__m128i)-1LL;
    v480 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    v14 = v340.m128i_i32[0];
    v481 = nullptr;
    v482 = nullptr;
    do
    {
      v12[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v12 += 2;
      v12[-2] = si128;
      v12[-1].m128i_i64[1] = 0;
    }
    while ( v12 != (__m128i *)&v495 );
    v340.m128i_i32[0] = v14;
    v495 = 0;
    v496 = -1;
    v497 = -1;
    v325 = *v333;
    if ( !*v333 )
      goto LABEL_17;
    v335 = **v333;
    v15 = v335 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v335 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v32 = 0;
      LOBYTE(v335) = 0;
      if ( *(_DWORD *)v331 == 55 && (_DWORD)elf_gnu_hash_indexes == -1 )
      {
        v18 = 24;
        goto LABEL_300;
      }
      goto LABEL_36;
    }
    if ( (*(_BYTE *)v15 & 2) != 0 )
      goto LABEL_17;
    v16 = v14;
    while ( 1 )
    {
      v17 = *(_QWORD *)(v15 + 24);
      v18 = v15 + 24;
      if ( v327 >= v17 )
        break;
      v15 = *(_QWORD *)(v15 + 8);
LABEL_16:
      if ( (*(_BYTE *)v15 & 2) != 0 )
        goto LABEL_17;
    }
    if ( v17 < v327 )
    {
      v15 = *(_QWORD *)(v15 + 16);
      goto LABEL_16;
    }
    v340.m128i_i32[0] = v16;
    if ( v325 != (unsigned __int64 *)v15 )
    {
      v32 = 0;
      LOBYTE(v335) = 0;
      if ( *(_DWORD *)v331 == 55 && *(_DWORD *)(v15 + 624) == -1 )
      {
LABEL_300:
        *(_BYTE *)(v331 + 32) = 7;
        *(_DWORD *)(v331 + 40) = *(_DWORD *)(v18 + 592);
        sub_66FA0(a1, 0);
LABEL_248:
        if ( v481 )
        {
          sub_82C40(&v481);
          if ( v481 )
            qfree((__int64)v481);
        }
        if ( v479 )
        {
          v480.m128i_i64[0] = 0;
          qfree((__int64)v479);
        }
        v122 = v477;
        if ( v477 )
        {
          v123 = v478;
          if ( (_QWORD)v478 )
          {
            v124 = v340.m128i_i32[0];
            v125 = 0;
            v126 = 0;
            do
            {
              v127 = (_QWORD *)(v122 + v125);
              clear_tinfo_t();
              v128 = *(_QWORD *)(v122 + v125 + 56);
              if ( v128 )
              {
                v127[8] = 0;
                qfree(v128);
              }
              v129 = v127[4];
              if ( v129 )
              {
                v127[5] = 0;
                qfree(v129);
              }
              ++v126;
              v125 += 104;
              cleanup_argloc();
              v122 = v477;
            }
            while ( v123 != v126 );
            v340.m128i_i32[0] = v124;
          }
          *(_QWORD *)&v478 = 0;
          qfree(v122);
        }
        if ( v475 )
        {
          v476.m128i_i64[0] = 0;
          qfree((__int64)v475);
        }
        if ( v472 )
        {
          v473.m128i_i64[0] = 0;
          qfree((__int64)v472);
        }
        qfree(v471[0]);
        if ( v469 )
        {
          v470.m128i_i64[0] = 0;
          qfree((__int64)v469);
        }
        if ( v467 )
        {
          v468.m128i_i64[0] = 0;
          qfree((__int64)v467);
        }
        if ( v465 )
        {
          v466.m128i_i64[0] = 0;
          qfree((__int64)v465);
        }
        if ( v462 )
        {
          v463.m128i_i64[0] = 0;
          qfree((__int64)v462);
        }
        if ( v451[1] )
        {
          v452.m128i_i64[0] = 0;
          qfree((__int64)v451[1]);
        }
        return v340.m128i_u32[0];
      }
LABEL_36:
      v33 = (void **)(v15 + 32);
LABEL_37:
      v34 = v334;
      v35 = (unsigned __int64)v33[72] + *(_QWORD *)(v334 + 808);
      *(_QWORD *)(v334 + 808) = v35;
      if ( (int)(*(_DWORD *)(*(_QWORD *)(a1 + 1496) + 652LL) << 10) < v35 )
      {
        v340.m128i_i32[0] = -29;
        goto LABEL_58;
      }
      v326 = v338 + 1;
      v323 = *(_DWORD *)v331 != 55;
      if ( *(_DWORD *)v331 != 55 )
      {
        v36 = *(_DWORD *)(v34 + 824);
        if ( v36 > (int)v338 && v36 <= (int)(v338 + 1) )
        {
          v282 = sub_68FD0(a1, *(_QWORD *)(v331 + 24), *(_QWORD *)(v318 + 40), 1, *(double *)si128.m128i_i64);
          if ( !v282 )
          {
            v340.m128i_i32[0] = -22;
            goto LABEL_58;
          }
          v326 = *(_DWORD *)(v282 + 72);
        }
      }
      v37 = 0;
      v348 = (unsigned __int64 *)off_4DEAC8;
      v350 = 0u;
      v354 = v333;
      v364 = v335 | v32 ^ 1;
      v351 = 0;
      v352 = 0;
      v353 = 0;
      v355 = v33;
      v356 = 0;
      v358 = 0;
      v360 = 0;
      v362 = v323;
      v363 = v32;
      v349 = (_QWORD *)a1;
      n = v323 & v32;
      v357 = 0;
      v359 = 0;
      v361 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v337), _mm_cvtsi32_si128(v326)).m128i_u64[0];
      if ( (a6 & 1) != 0 && (v323 & (unsigned __int8)v32) != 0 )
      {
        if ( v337 >= *(_DWORD *)(a1 + 64) )
          sub_1D36D0(0.0);
        if ( !v328 )
          goto LABEL_295;
        v130 = (__int64)&v343;
        v131 = *v328;
        v319 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v337);
        v132 = *(_QWORD *)(*(_QWORD *)(v319 + 64) + 1504LL);
        v333 = *(unsigned __int64 ***)(v319 + 64);
        v343 = 0;
        v344 = 0;
        (*(void (__fastcall **)(__int64, unsigned __int64 *, __int64))(*(_QWORD *)v132 + 368LL))(v132, &v343, v131);
        v135 = (__int32 *)v343;
        v335 = v343 + 4 * v344;
        if ( v343 == v335 )
          goto LABEL_291;
        v332.m128i_i64[0] = v132 + 224;
        while ( 1 )
        {
          v130 = (unsigned int)*v135;
          v340.m128i_i32[0] = *v135;
          v140 = v340.m128i_i32[0];
          if ( sub_64930(v332.m128i_i64[0], v340.m128i_i32[0]) )
          {
            v141 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v132 + 32LL))(v132, v140);
            v142 = v141;
            if ( v141 <= 0 )
            {
              if ( !under_debugger )
                sub_383060(0xCE00u, 0.0);
              goto LABEL_566;
            }
            v130 = v141;
            v158 = sub_138140(v333, v141, 1, 0.0);
            if ( v158 == -1 )
            {
LABEL_290:
              v335 = v343;
LABEL_291:
              if ( v335 )
              {
                *(_QWORD *)&v344 = 0;
                qfree(v335);
              }
              v145 = 0;
              v335 = 0;
              for ( i = *v328; v145 < (unsigned __int64)v357; ++v145 )
              {
                v146 = (_QWORD *)j__qalloc_or_throw(80, v130, v133, v134);
                v146[4] = 0xFFFFFFFF00000000LL;
                v146[5] = 0;
                v146[6] = 0xFFFFFFFF00000000LL;
                v146[7] = 0;
                v146[8] = 0xFFFFFFFF00000000LL;
                v146[9] = 0;
                v333 = (unsigned __int64 **)(v146 + 4);
                v340.m128i_i64[0] = (__int64)v146;
                v332.m128i_i64[0] = (__int64)(v146 + 8);
                sub_330970((__int64)v146, i);
                v147 = (unsigned __int8 *)v333;
                *(_DWORD *)v340.m128i_i64[0] = 4;
                sub_125180(v147, (unsigned __int8 *)(v356 + 16 * v145));
                sub_125180((unsigned __int8 *)v332.m128i_i64[0], (unsigned __int8 *)(v358 + 16 * v145));
                v130 = v340.m128i_i64[0];
                v335 = (unsigned __int64)sub_A3160(v319, v340.m128i_i64[0], v335, 0.0);
              }
LABEL_295:
              v38 = *((_DWORD *)v33 + 146);
              v41 = &v348;
              if ( *((_DWORD *)v33 + 147) <= (signed int)v38 )
              {
LABEL_141:
                *((_DWORD *)v33 + 148) = v326;
                goto LABEL_142;
              }
LABEL_44:
              v340.m128i_i64[0] = (__int64)&v348;
              while ( v38 < *(_DWORD *)(a1 + 64) )
              {
                v40 = *(const __m128i **)(*(_QWORD *)(a1 + 528) + 8LL * v38);
                if ( !v363 )
                {
                  v360 = -*(_QWORD *)(v349[184] + 40 * v40[32].m128i_i64[0] + 8);
                  v40 = (const __m128i *)sub_69310((__int64)v349, (__int64)v40, *((_DWORD *)v349 + 16), 0, 0.0);
                }
                v41 = (unsigned __int64 **)v340.m128i_i64[0];
                if ( v364 )
                  sub_1D9190(v340.m128i_i64[0], (unsigned __int64 *)&v40[2], 0);
                if ( (unsigned int)sub_11F830(v40, v340.m128i_i64[0]) )
                {
                  v340.m128i_i32[0] = -22;
                  goto LABEL_57;
                }
                if ( v364 )
                {
                  sub_1D9190(v340.m128i_i64[0], &v40[2].m128i_u64[1], 0);
                  v49 = v40[2].m128i_u64[0];
                  if ( v49 >= v40[2].m128i_i64[1] )
                  {
                    v50 = v40[3].m128i_i64[1];
                    if ( v50 )
                      v49 = *(_QWORD *)(v50 + 24);
                    v332.m128i_i64[0] = v49;
                    v335 = sub_330F80(v349, v49);
                    v51 = get_item_end() - v335;
                    if ( v51 > 4 )
                      v51 = 4;
                    v40[2].m128i_i64[1] = v332.m128i_i64[0] + v51;
                  }
                }
                v39 = v40[1].m128i_i32[2];
                BYTE1(v39) &= ~2u;
                if ( (_DWORD)v339 )
                {
                  v39 |= 0x40080u;
                  v40[1].m128i_i32[2] = v39;
                  v40[32].m128i_i64[0] = *(_QWORD *)(a1 + 1480);
                }
                else
                {
                  LOBYTE(v39) = v39 | 0x80;
                }
                ++v38;
                v40[1].m128i_i32[2] = v39 | 0x20000;
                if ( *((_DWORD *)v33 + 147) <= (signed int)v38 )
                  goto LABEL_140;
              }
              if ( !under_debugger )
                sub_383060(0xCDEFu, 0.0);
LABEL_566:
              BUG();
            }
            v143 = v357;
            v144 = v356;
            if ( *((_QWORD *)&v357 + 1) < (unsigned __int64)(v357 + 1) )
            {
              v330 = v158;
              v356 = qvector_reserve((__int64)&v356, v356, v357 + 1, 16);
              v144 = v356;
              v158 = v330;
              v143 = v357;
            }
            v136 = 16 * v143 + v144;
            *(_QWORD *)v136 = 0xFFFFFFFF00000000LL;
            v137 = v340.m128i_i32[0];
            *(_QWORD *)(v136 + 8) = 0;
            *(_QWORD *)&v357 = v357 + 1;
            *(_BYTE *)v136 = 1;
            *(_DWORD *)(v136 + 8) = v137;
            *(_DWORD *)(v136 + 4) = v142;
            v138 = v359;
            v139 = v358;
            v133 = v359 + 1;
            if ( *((_QWORD *)&v359 + 1) < (unsigned __int64)(v359 + 1) )
            {
              v340.m128i_i32[0] = v158;
              v358 = qvector_reserve((__int64)&v358, v358, v133, 16);
              v139 = v358;
              v158 = v340.m128i_i32[0];
              v138 = v359;
            }
            v130 = 16 * v138 + v139;
            *(_QWORD *)v130 = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v130 + 8) = 0;
            *(_QWORD *)&v359 = v359 + 1;
            *(_BYTE *)v130 = 1;
            *(_DWORD *)(v130 + 8) = v158;
            *(_DWORD *)(v130 + 4) = v142;
          }
          if ( (__int32 *)v335 == ++v135 )
            goto LABEL_290;
        }
      }
      v38 = *((_DWORD *)v33 + 146);
      if ( (signed int)v38 < *((_DWORD *)v33 + 147) )
        goto LABEL_44;
      v41 = &v348;
LABEL_140:
      if ( n )
        goto LABEL_141;
LABEL_142:
      if ( *(_DWORD *)v331 != 55 )
        *(_DWORD *)v331 = 55;
      v85 = v337;
      *(_BYTE *)(v331 + 32) = 7;
      *(_DWORD *)(v331 + 40) = v85;
      sub_1D5AE0(a1, v85, 0.0);
      if ( (_DWORD)v339 )
      {
        sub_1CD300(v342, v341, (__int64 *)v33 + 37);
        if ( v341[0] < 0 )
        {
          v341[0] = 0;
          v333 = nullptr;
        }
        else
        {
          v333 = (unsigned __int64 **)v341[0];
        }
        v87 = (unsigned __int64)v33[14] + *((int *)v33 + 23);
        v332.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
        if ( v328 )
        {
          v343 = 0;
          v340.m128i_i64[0] = v328[4] + *((unsigned __int16 *)v328 + 20);
          v339 = &v343;
          if ( (unsigned __int8)get_func_frame() && (tinfo_size = get_tinfo_size(), v340.m128i_i64[0] < tinfo_size) )
            v335 = tinfo_size - v340.m128i_i64[0];
          else
            v335 = 0;
          v37 = 0;
          v345 = 0;
          *(_OWORD *)&v346[8] = 0;
          func_tail_iterator_set();
          if ( !v345 )
            goto LABEL_528;
          *(_DWORD *)v346 = 0;
          if ( *(int *)(v345 + 128) <= 0 )
          {
LABEL_158:
            v91 = (unsigned __int64 **)v335;
            if ( (unsigned __int64)v333 >= v335 )
              v91 = v333;
            v92 = (char *)v91 + v340.m128i_i64[0];
            lock_func_range();
          }
          else
          {
            while ( 1 )
            {
              func = get_func();
              if ( func )
              {
                v89 = *(_QWORD *)(func + 32) + *(unsigned __int16 *)(func + 40);
                v90 = v340.m128i_i64[0];
                if ( v340.m128i_i64[0] < v89 )
                  v90 = *(_QWORD *)(func + 32) + *(unsigned __int16 *)(func + 40);
                v340.m128i_i64[0] = v90;
                if ( (unsigned __int8)get_func_frame() )
                {
                  v159 = get_tinfo_size();
                  v160 = v159 - v89;
                  if ( v335 >= v159 - v89 )
                    v160 = v335;
                  if ( v89 >= v159 )
                    v160 = v335;
                  v335 = v160;
                }
              }
              if ( !v345 )
                break;
              if ( *(_DWORD *)(v345 + 128) <= *(_DWORD *)v346 + 1 )
                goto LABEL_158;
              ++*(_DWORD *)v346;
            }
LABEL_528:
            v284 = (unsigned __int64 **)v335;
            if ( (unsigned __int64)v333 >= v335 )
              v284 = v333;
            v92 = (char *)v284 + v340.m128i_i64[0];
          }
          clear_tinfo_t();
        }
        else
        {
          v92 = nullptr;
        }
        v93 = &v92[v332.m128i_i32[0] - 1];
        if ( v87 < (unsigned __int64)v33[7] + ((unsigned __int64)v93 & -v332.m128i_i32[0]) )
          v87 = (unsigned __int64)v33[7] + ((unsigned __int64)v93 & -v332.m128i_i32[0]);
      }
      else
      {
        v87 = 0;
      }
      v340.m128i_i32[0] = sub_1D9EC0((__int64)v41, *(_QWORD *)(v331 + 24), v87, v86, v37);
      if ( v340.m128i_i32[0] )
      {
LABEL_57:
        sub_1D48D0(v41);
        goto LABEL_58;
      }
      nullsub_115();
      v117 = *(_QWORD *)(a1 + 1456);
      v118 = *(_QWORD *)(a1 + 1448);
      v119 = v117 + 1;
      if ( *(_QWORD *)(a1 + 1464) < (unsigned __int64)(v117 + 1) )
      {
        v283 = qvector_reserve(a1 + 1448, v118, v119, 16);
        *(_QWORD *)(a1 + 1448) = v283;
        v118 = v283;
        v117 = *(_QWORD *)(a1 + 1456);
        v119 = v117 + 1;
      }
      v120 = v337;
      *(_QWORD *)(a1 + 1456) = v119;
      v121 = 16 * v117 + v118;
      *(_DWORD *)v121 = v120;
      *(_DWORD *)(v121 + 4) = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(v121 + 8) = v326;
      *(_BYTE *)(v121 + 12) = v323;
      sub_66FA0(a1, 0);
      v340.m128i_i32[0] = sub_33E140(*(_QWORD *)(a1 + 1496), 0x15u, v334, v338, v336, v120, *(unsigned int *)(a1 + 64));
      sub_1D48D0(v41);
      goto LABEL_248;
    }
LABEL_17:
    if ( (*(_BYTE *)(a1 + 5) & 0x20) == 0 )
      sub_66FA0(a1, 0);
    v345 = 0;
    v347 = -1;
    memset(v346, 0, sizeof(v346));
    sub_332990((_QWORD *)(a1 + 8));
    v341[0] = 0;
    v365 = off_4DD9D8;
    v341[1] = 0;
    v366 = 0;
    v367 = 0;
    v370 = nullptr;
    v371 = 0;
    v372 = 0;
    v374 = 0;
    v368 = 0;
    v369 = 0;
    v373 = 0;
    if ( v328 )
    {
      v370 = v328;
      v369 = -1;
      create_qflow_chart();
    }
    else
    {
      create_multirange_qflow_chart();
    }
    v19 = v341;
    sub_1D3620((__int64 *)&v365, v341, *(double *)si128.m128i_i64);
    v21 = v374;
    *(_DWORD *)(a1 + 4) |= 0x2000u;
    v22 = _mm_load_si128((const __m128i *)&xmmword_424800);
    if ( v21 <= 0 )
    {
      LOBYTE(v335) = 0;
      v24 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      LOBYTE(v335) = 0;
      v23 = 0;
      do
      {
        v25 = v372 + (v23 << 6);
        if ( !(_BYTE)v335 )
        {
          LOBYTE(v335) = rangeset_t_has_common();
          v22 = _mm_load_si128((const __m128i *)&xmmword_424800);
        }
        v26 = *(_QWORD *)(a1 + 24);
        v27 = _mm_loadl_epi64((const __m128i *)v25);
        v28 = _mm_loadl_epi64((const __m128i *)(v25 + 8));
        v19 = *(__int64 **)(a1 + 16);
        if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v26 + 1) )
        {
          v332.m128i_i64[0] = v28.m128i_i64[0];
          v340.m128i_i64[0] = v27.m128i_i64[0];
          v29 = qvector_reserve(a1 + 16, (__int64)v19, v26 + 1, 16);
          *(_QWORD *)(a1 + 16) = v29;
          v19 = (__int64 *)v29;
          v26 = *(_QWORD *)(a1 + 24);
          v22 = _mm_load_si128((const __m128i *)&xmmword_424800);
          v28 = _mm_loadl_epi64(&v332);
          v27 = _mm_loadl_epi64(&v340);
        }
        ++v23;
        *(__m128i *)&v19[2 * v26] = _mm_unpacklo_epi64(v27, v28);
        v24 = *(_QWORD *)(a1 + 24) + 1LL;
        *(_QWORD *)(a1 + 24) = v24;
      }
      while ( v374 > (int)v23 );
    }
    v378 = -1;
    v381 = 0;
    v52 = (__m128i *)&v407;
    v382 = 0;
    v385 = 0;
    v386 = 0;
    v388 = 0;
    v389 = 0;
    v391 = 0;
    v393 = 0;
    v395 = 0;
    v396 = 0;
    v397 = 0;
    v399 = -1;
    v400 = 0;
    v402 = 0;
    v404 = 0;
    v406[0] = nullptr;
    v375 = 0;
    v376 = 0;
    v377 = -1;
    v379 = 0;
    v380 = 0;
    v383 = 0;
    v384 = 0;
    v387 = 0;
    v390 = 0;
    v392 = 0;
    v394 = 0;
    v398 = 0;
    v401 = 0;
    v403 = 0;
    v405 = 0;
    v406[1] = nullptr;
    do
    {
      v52[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v52 += 2;
      v52[-2] = v22;
      v52[-1].m128i_i64[1] = 0;
    }
    while ( &v408 != v52 );
    v53 = 0;
    v408.m128i_i64[1] = 0;
    v411 = -1;
    v54 = &v439;
    v414 = 0;
    v415 = 0;
    v418 = 0;
    v419 = nullptr;
    v421 = 0;
    v422 = nullptr;
    v424 = nullptr;
    v426 = nullptr;
    v428[0] = nullptr;
    v428[1] = nullptr;
    v429 = nullptr;
    v431 = -1;
    v432 = nullptr;
    v434 = 0;
    src = nullptr;
    v438[0] = nullptr;
    v409 = 0;
    v410 = -1;
    v412 = 0;
    v413 = 0;
    v416 = 0;
    v417 = 0;
    v420 = 0;
    v423 = 0;
    v425 = 0;
    v427 = 0;
    v430 = 0;
    v433 = 0;
    v435 = 0;
    v437 = 0;
    v438[1] = nullptr;
    do
    {
      v54[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v54 += 2;
      v54[-2] = v22;
      v54[-1].m128i_i64[1] = 0;
    }
    while ( v451 != (void **)v54 );
    v55 = nullptr;
    v408.m128i_i64[0] = *(_QWORD *)(a1 + 8);
    if ( v24 )
    {
      v55 = (void *)qalloc_or_throw(16 * v24, (__int64)v19, (__int64)v451, v20);
      memcpy(v55, *(const void **)(a1 + 16), 16 * v24);
    }
    v56 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
    if ( v408.m128i_i64[1] )
    {
      v340 = v56;
      v409.m128i_i64[0] = 0;
      qfree(v408.m128i_i64[1]);
      v56 = _mm_load_si128(&v340);
    }
    v408.m128i_i64[1] = (__int64)v55;
    v409 = v56;
    if ( v408.m128i_i64[0] )
    {
      v56 = 0;
      v348 = nullptr;
      v350 = 0;
      func_tail_iterator_set();
      v57 = v348;
      LODWORD(v349) = -1;
      if ( v348 )
      {
        v58 = v409.m128i_i64[0];
        while ( 1 )
        {
          v59 = _mm_loadl_epi64((const __m128i *)v57);
          v53 = (__m128)_mm_loadl_epi64((const __m128i *)(v57 + 1));
          v60 = v408.m128i_i64[1];
          if ( v409.m128i_i64[1] < (unsigned __int64)(v58 + 1) )
          {
            v332.m128i_i64[0] = v53.m128_u64[0];
            v340.m128i_i64[0] = v59.m128i_i64[0];
            v408.m128i_i64[1] = qvector_reserve((__int64)&v408.m128i_i64[1], v408.m128i_i64[1], v58 + 1, 16);
            v58 = v409.m128i_i64[0];
            v60 = v408.m128i_i64[1];
            v53 = (__m128)_mm_loadl_epi64(&v332);
            v59 = _mm_loadl_epi64(&v340);
          }
          v56 = _mm_unpacklo_epi64(v59, (__m128i)v53);
          *(__m128i *)(v60 + 16 * v58) = v56;
          v57 = v348;
          v58 = ++v409.m128i_i64[0];
          if ( !v348 )
            goto LABEL_110;
          v61 = (_DWORD)v349 + 1;
          if ( *((_DWORD *)v348 + 32) <= (int)v349 + 1 )
            break;
          LODWORD(v349) = (_DWORD)v349 + 1;
          if ( v61 >= 0 )
            v57 = (unsigned __int64 *)(v348[17] + 16LL * v61);
        }
        lock_func_range();
      }
    }
LABEL_110:
    v62 = *v336;
    v408.m128i_i64[0] = (__int64)v62;
    if ( !v62 )
      v62 = (unsigned __int64 *)v408.m128i_i64[1];
    *(_QWORD *)&v410 = *v62;
    sub_1D84D0(a1, v408.m128i_i8, &v375, v20);
    v63 = a5 | 0x80000000;
    v340.m128i_i32[0] = sub_33E140(*(_QWORD *)(a1 + 1496), 0, &v365, a1, v341, v63);
    if ( v340.m128i_i32[0] )
      goto LABEL_169;
    v340.m128i_i32[0] = sub_1CF000(a1, (__int64)&v365, (__int64)v341, v328, *(double *)v56.m128i_i64, v53);
    if ( v340.m128i_i32[0] )
      goto LABEL_169;
    v65 = *(_QWORD **)(a1 + 1504);
    if ( (*(_BYTE *)(a1 + 112) & 0x10) != 0 )
    {
      v66 = v65[5];
      if ( v66 )
      {
        *(_DWORD *)(a1 + 1184) = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*v65 + 48LL))(v65, v66, 0);
        v65 = *(_QWORD **)(a1 + 1504);
      }
    }
    sub_2B7DE0((__int64)v65, a1 + 1312, v327);
    v67 = v334;
    v340.m128i_i32[0] = sub_1D7070(a1, v334, (__int64)&v365, v341, v328, v63, v56, v53, (__m128)-1LL);
    if ( v340.m128i_i32[0] )
    {
LABEL_169:
      sub_1D84D0(a1, v375.m128i_i8, &v408, (__int64)v64);
      goto LABEL_170;
    }
    v70 = *(_DWORD *)(a1 + 64);
    v71 = v337;
    if ( v70 > (int)v337 )
    {
      v64 = v342;
      v72 = *(_DWORD *)(a1 + 64);
      v332.m128i_i64[0] = (__int64)v342;
      while ( 1 )
      {
        if ( v71 >= v72 )
        {
          if ( !under_debugger )
            sub_383060(0xCDEFu, *(double *)v56.m128i_i64);
          goto LABEL_566;
        }
        v76 = *(unsigned __int8 **)(a1 + 528);
        v77 = *(_QWORD *)&v76[8 * v71];
        sub_B62C0(v77, v67, v76, (__int64)v64, v68, v69, *(double *)v56.m128i_i64);
        v79 = *(_QWORD *)(v77 + 56);
        if ( !v79 )
          goto LABEL_124;
        v80 = *(_DWORD *)v79;
        if ( *(_DWORD *)v79 <= 0x34u )
        {
          v64 = (_QWORD *)(v79 + 64);
          v340.m128i_i64[0] = v79 + 64;
          if ( v80 <= 0x29 )
            goto LABEL_124;
        }
        else
        {
          if ( v80 != 55 )
            goto LABEL_124;
          v340.m128i_i64[0] = v79 + 32;
        }
        v73 = v340.m128i_i64[0];
        sub_123A40(v332.m128i_i64[0], (unsigned __int8 *)v340.m128i_i64[0], v78, (__int64)v64);
        v67 = *(_QWORD *)(v79 + 24);
        v74 = sub_1D36F0(a1, v67, v73, 0, *(double *)v56.m128i_i64);
        v75 = v74;
        if ( !v74 )
        {
          v67 = *(_QWORD *)(v340.m128i_i64[0] + 8);
          if ( !(unsigned __int8)sub_332920(a1 + 8, v67) )
            goto LABEL_123;
LABEL_135:
          sub_66FA0(a1, 0);
          sub_69F20(a1, v337, v70);
          v83 = v332.m128i_i64[0];
          *(_QWORD *)(a1 + 488) = *(_QWORD *)(v79 + 24);
          sub_11CDA0(v83);
          sub_1D84D0(a1, v375.m128i_i8, &v408, v84);
          v340.m128i_i32[0] = -22;
LABEL_170:
          if ( v438[0] )
          {
            sub_82C40(v438);
            if ( v438[0] )
              qfree((__int64)v438[0]);
          }
          if ( src )
          {
            *(_QWORD *)&v437 = 0;
            qfree((__int64)src);
          }
          v96 = v434;
          if ( v434 )
          {
            v97 = v435;
            if ( (_QWORD)v435 )
            {
              v98 = 0;
              v99 = 0;
              do
              {
                v100 = (_QWORD *)(v96 + v98);
                clear_tinfo_t();
                v101 = *(_QWORD *)(v96 + v98 + 56);
                if ( v101 )
                {
                  v100[8] = 0;
                  qfree(v101);
                }
                v102 = v100[4];
                if ( v102 )
                {
                  v100[5] = 0;
                  qfree(v102);
                }
                ++v99;
                v98 += 104;
                cleanup_argloc();
                v96 = v434;
              }
              while ( v97 != v99 );
            }
            *(_QWORD *)&v435 = 0;
            qfree(v96);
          }
          if ( v432 )
          {
            *(_QWORD *)&v433 = 0;
            qfree((__int64)v432);
          }
          if ( v429 )
          {
            *(_QWORD *)&v430 = 0;
            qfree((__int64)v429);
          }
          qfree((__int64)v428[0]);
          if ( v426 )
          {
            *(_QWORD *)&v427 = 0;
            qfree((__int64)v426);
          }
          if ( v424 )
          {
            *(_QWORD *)&v425 = 0;
            qfree((__int64)v424);
          }
          if ( v422 )
          {
            *(_QWORD *)&v423 = 0;
            qfree((__int64)v422);
          }
          if ( v419 )
          {
            *(_QWORD *)&v420 = 0;
            qfree((__int64)v419);
          }
          if ( v408.m128i_i64[1] )
          {
            v409.m128i_i64[0] = 0;
            qfree(v408.m128i_i64[1]);
          }
          if ( v406[0] )
          {
            sub_82C40(v406);
            if ( v406[0] )
              qfree((__int64)v406[0]);
          }
          if ( v404 )
          {
            *(_QWORD *)&v405 = 0;
            qfree(v404);
          }
          v103 = v402;
          if ( v402 )
          {
            v104 = v403;
            if ( (_QWORD)v403 )
            {
              v105 = 0;
              v106 = 0;
              do
              {
                v107 = (_QWORD *)(v103 + v105);
                clear_tinfo_t();
                v108 = *(_QWORD *)(v103 + v105 + 56);
                if ( v108 )
                {
                  v107[8] = 0;
                  qfree(v108);
                }
                v109 = v107[4];
                if ( v109 )
                {
                  v107[5] = 0;
                  qfree(v109);
                }
                ++v106;
                v105 += 104;
                cleanup_argloc();
                v103 = v402;
              }
              while ( v104 != v106 );
            }
            *(_QWORD *)&v403 = 0;
            qfree(v103);
          }
          if ( v400 )
          {
            *(_QWORD *)&v401 = 0;
            qfree(v400);
          }
          if ( v397 )
          {
            *(_QWORD *)&v398 = 0;
            qfree(v397);
          }
          qfree(v395);
          if ( v393 )
          {
            *(_QWORD *)&v394 = 0;
            qfree(v393);
          }
          if ( v391 )
          {
            *(_QWORD *)&v392 = 0;
            qfree(v391);
          }
          if ( v389 )
          {
            *(_QWORD *)&v390 = 0;
            qfree(v389);
          }
          if ( v386 )
          {
            *(_QWORD *)&v387 = 0;
            qfree(v386);
          }
          if ( v375.m128i_i64[1] )
          {
            *(_QWORD *)&v376 = 0;
            qfree(v375.m128i_i64[1]);
          }
          v110 = v372;
          v365 = off_4DD9D8;
          if ( v372 )
          {
            v111 = v373;
            if ( (_QWORD)v373 )
            {
              v112 = v340.m128i_i32[0];
              v113 = 0;
              do
              {
                v114 = (_QWORD *)(v110 + (v113 << 6));
                v115 = v114[5];
                if ( v115 )
                {
                  v114[6] = 0;
                  qfree(v115);
                }
                v116 = v114[2];
                if ( v116 )
                {
                  v114[3] = 0;
                  qfree(v116);
                }
                ++v113;
                v110 = v372;
              }
              while ( v111 != v113 );
              v340.m128i_i32[0] = v112;
            }
            *(_QWORD *)&v373 = 0;
            qfree(v110);
          }
          if ( v367 )
          {
            *(_QWORD *)&v368 = 0;
            qfree(v367);
          }
          qfree(v341[0]);
          if ( v345 )
          {
            *(_QWORD *)v346 = 0;
            qfree(v345);
          }
LABEL_58:
          if ( v481 )
          {
            sub_82C40(&v481);
            if ( v481 )
              qfree((__int64)v481);
          }
          if ( v479 )
          {
            v480.m128i_i64[0] = 0;
            qfree((__int64)v479);
          }
          v42 = v477;
          if ( v477 )
          {
            v43 = v478;
            if ( (_QWORD)v478 )
            {
              v44 = 0;
              v45 = 0;
              do
              {
                v46 = (_QWORD *)(v42 + v44);
                clear_tinfo_t();
                v47 = *(_QWORD *)(v42 + v44 + 56);
                if ( v47 )
                {
                  v46[8] = 0;
                  qfree(v47);
                }
                v48 = v46[4];
                if ( v48 )
                {
                  v46[5] = 0;
                  qfree(v48);
                }
                ++v45;
                v44 += 104;
                cleanup_argloc();
                v42 = v477;
              }
              while ( v43 != v45 );
            }
            *(_QWORD *)&v478 = 0;
            qfree(v42);
          }
          if ( v475 )
          {
            v476.m128i_i64[0] = 0;
            qfree((__int64)v475);
          }
          if ( v472 )
          {
            v473.m128i_i64[0] = 0;
            qfree((__int64)v472);
          }
          qfree(v471[0]);
          if ( v469 )
          {
            v470.m128i_i64[0] = 0;
            qfree((__int64)v469);
          }
          if ( v467 )
          {
            v468.m128i_i64[0] = 0;
            qfree((__int64)v467);
          }
          if ( v465 )
          {
            v466.m128i_i64[0] = 0;
            qfree((__int64)v465);
          }
          if ( v462 )
          {
            v463.m128i_i64[0] = 0;
            qfree((__int64)v462);
          }
          if ( v451[1] )
          {
            v452.m128i_i64[0] = 0;
            qfree((__int64)v451[1]);
          }
          v30 = *(_DWORD *)(a1 + 64);
LABEL_30:
          sub_69F20(a1, v337, v30);
          return v340.m128i_u32[0];
        }
        v324 = v70 <= *(_DWORD *)(v74 + 72) || (int)v337 > *(_DWORD *)(v74 + 72);
        if ( !v324 )
          goto LABEL_123;
        v67 = v332.m128i_i64[0];
        sub_125180((unsigned __int8 *)v340.m128i_i64[0], (unsigned __int8 *)v332.m128i_i64[0]);
        v81 = *v333;
        if ( !*v333 )
          goto LABEL_134;
        v82 = *v81 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v82 )
          goto LABEL_123;
        if ( (*(_BYTE *)(*v81 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_134;
        v67 = *(_QWORD *)(v75 + 32);
        while ( 1 )
        {
          v148 = *(_QWORD *)(v82 + 24);
          if ( v67 >= v148 )
            break;
          v82 = *(_QWORD *)(v82 + 8);
LABEL_304:
          if ( (*(_BYTE *)v82 & 2) != 0 )
            goto LABEL_134;
        }
        if ( v148 < v67 )
          break;
        if ( v81 != (unsigned __int64 *)v82 )
          goto LABEL_123;
LABEL_134:
        if ( *(_BYTE *)v340.m128i_i64[0] != 6 )
          goto LABEL_135;
        v149 = v340.m128i_i64[0];
        sub_339C80(*(_QWORD *)(a1 + 1504), v340.m128i_i64[0]);
        v150 = *(_QWORD *)(v149 + 8);
        v316 = v150;
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) == v150 || v150 == -1 )
          goto LABEL_135;
        v315 = 0;
        v151 = v337;
        while ( 2 )
        {
          if ( v151 >= *(_DWORD *)(a1 + 64) )
          {
            if ( !under_debugger )
              sub_383060(0xCDEFu, *(double *)v56.m128i_i64);
            goto LABEL_566;
          }
          v155 = *(_QWORD *)(a1 + 528);
          LODWORD(v335) = v151;
          v156 = *(_QWORD *)(v155 + 8LL * v151);
          v67 = *(_QWORD *)(v156 + 32);
          v157 = sub_330F80((_QWORD *)a1, v67);
          v154 = v335;
          if ( v316 != v157 )
          {
            v152 = *(_QWORD *)(v156 + 48);
            if ( !v152
              || (v67 = *(_QWORD *)(v152 + 24), v153 = sub_330F80((_QWORD *)a1, v67), v154 = v335, v316 != v153) )
            {
LABEL_317:
              v151 = v154 + 1;
              if ( v70 == v151 )
                goto LABEL_538;
              continue;
            }
          }
          break;
        }
        if ( (*(_BYTE *)(v156 + 24) & 2) != 0 )
        {
          if ( v315 )
            v156 = v315;
          v315 = v156;
          goto LABEL_317;
        }
        v315 = v156;
LABEL_538:
        if ( !v315 )
          goto LABEL_135;
        v293 = (_BYTE *)v340.m128i_i64[0];
        *(_DWORD *)(v340.m128i_i64[0] + 8) = *(_DWORD *)(v315 + 72);
        *v293 = 7;
        LOBYTE(v335) = v324;
LABEL_123:
        sub_11CDA0(v332.m128i_i64[0]);
LABEL_124:
        if ( v70 == ++v71 )
          goto LABEL_329;
        v72 = *(_DWORD *)(a1 + 64);
      }
      v82 = *(_QWORD *)(v82 + 16);
      goto LABEL_304;
    }
LABEL_329:
    v161 = &v375;
    sub_1D84D0(a1, v375.m128i_i8, &v408, (__int64)v64);
    v164 = v409.m128i_i64[0];
    v165 = nullptr;
    v451[0] = (void *)v408.m128i_i64[0];
    if ( v409.m128i_i64[0] )
    {
      v290 = (void *)qalloc_or_throw(16 * v409.m128i_i64[0], (__int64)&v375, v162, v163);
      v161 = (__m128i *)v408.m128i_i64[1];
      v165 = v290;
      memcpy(v290, (const void *)v408.m128i_i64[1], 16 * v164);
    }
    v166 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v164, (__m128i)(unsigned __int64)v164);
    if ( v451[1] )
    {
      v340 = v166;
      v452.m128i_i64[0] = 0;
      qfree((__int64)v451[1]);
      v166 = _mm_load_si128(&v340);
    }
    v452 = v166;
    v167 = _mm_loadu_si128(&v412);
    v168 = v420;
    v451[1] = v165;
    v169 = nullptr;
    v454 = v411;
    v455 = v167;
    v170 = _mm_loadu_si128(&v413);
    v171 = _mm_loadh_ps((const double *)&v410 + 1);
    v457 = v414;
    v456 = v170;
    v172 = _mm_loadu_si128(&v416);
    v458 = v415;
    v459 = v172;
    v173 = _mm_loadu_si128(&v417);
    v461 = v418;
    v453 = (__m128i)v171;
    v460 = v173;
    if ( (_QWORD)v420 )
    {
      v289 = (void *)qalloc_or_throw(40 * v420, (__int64)v161, v162, v163);
      v161 = (__m128i *)v419;
      v169 = v289;
      memcpy(v289, v419, 40 * v168);
    }
    v174 = _mm_unpacklo_epi64((__m128i)v168, (__m128i)v168);
    if ( v462 )
    {
      v340 = v174;
      v463.m128i_i64[0] = 0;
      qfree((__int64)v462);
      v174 = _mm_load_si128(&v340);
    }
    v175 = v423;
    v462 = v169;
    v176 = nullptr;
    v463 = v174;
    v464 = v421;
    if ( (_QWORD)v423 )
    {
      v288 = (void *)qalloc_or_throw(16 * v423, (__int64)v161, v162, v163);
      v161 = (__m128i *)v422;
      v176 = v288;
      memcpy(v288, v422, 16 * v175);
    }
    v177 = _mm_unpacklo_epi64((__m128i)v175, (__m128i)v175);
    if ( v465 )
    {
      v340 = v177;
      v466.m128i_i64[0] = 0;
      qfree((__int64)v465);
      v177 = _mm_load_si128(&v340);
    }
    v178 = v425;
    v465 = v176;
    v179 = nullptr;
    v466 = v177;
    if ( (_QWORD)v425 )
    {
      v287 = (void *)qalloc_or_throw(16 * v425, (__int64)v161, v162, v163);
      v161 = (__m128i *)v424;
      v179 = v287;
      memcpy(v287, v424, 16 * v178);
    }
    v180 = _mm_unpacklo_epi64((__m128i)v178, (__m128i)v178);
    if ( v467 )
    {
      v340 = v180;
      v468.m128i_i64[0] = 0;
      qfree((__int64)v467);
      v180 = _mm_load_si128(&v340);
    }
    v181 = v427;
    v467 = v179;
    v182 = nullptr;
    v468 = v180;
    if ( (_QWORD)v427 )
    {
      v182 = (void *)qalloc_or_throw(16 * v427, (__int64)v161, v162, v163);
      memcpy(v182, v426, 16 * v181);
    }
    v183 = _mm_unpacklo_epi64((__m128i)v181, (__m128i)v181);
    if ( v469 )
    {
      v340 = v183;
      v470.m128i_i64[0] = 0;
      qfree((__int64)v469);
      v183 = _mm_load_si128(&v340);
    }
    v184 = v428;
    v469 = v182;
    v340.m128i_i64[0] = (__int64)v471;
    v470 = v183;
    sub_648D0(v471, v428, *(double *)v183.m128i_i64);
    v187 = v430;
    v188 = nullptr;
    if ( (_QWORD)v430 )
    {
      v286 = (void *)qalloc_or_throw(16 * v430, (__int64)v428, v185, v186);
      v184 = (const void **)v429;
      v188 = v286;
      memcpy(v286, v429, 16 * v187);
    }
    v189 = _mm_unpacklo_epi64((__m128i)v187, (__m128i)v187);
    if ( v472 )
    {
      v332 = v189;
      v473.m128i_i64[0] = 0;
      qfree((__int64)v472);
      v189 = _mm_load_si128(&v332);
    }
    v190 = v433;
    v472 = v188;
    v191 = nullptr;
    v473 = v189;
    v474 = v431;
    if ( (_QWORD)v433 )
    {
      v191 = (void *)qalloc_or_throw(16 * v433, (__int64)v184, v185, v186);
      memcpy(v191, v432, 16 * v190);
    }
    v192 = _mm_unpacklo_epi64((__m128i)v190, (__m128i)v190);
    if ( v475 )
    {
      v332 = v192;
      v476.m128i_i64[0] = 0;
      qfree((__int64)v475);
      v192 = _mm_load_si128(&v332);
    }
    v475 = v191;
    v476 = v192;
    sub_1D41E0(&v477, (__int64)&v434, v185, v186);
    v195 = v437;
    v196 = nullptr;
    if ( (_QWORD)v437 )
    {
      v196 = (void *)qalloc_or_throw(4 * v437, (__int64)&v434, v193, v194);
      memcpy(v196, src, 4 * v195);
    }
    v197 = _mm_unpacklo_epi64((__m128i)v195, (__m128i)v195);
    if ( v479 )
    {
      v332 = v197;
      v480.m128i_i64[0] = 0;
      qfree((__int64)v479);
      v197 = _mm_load_si128(&v332);
    }
    v479 = v196;
    v198 = (__int64)v438;
    v480 = v197;
    sub_1D82C0(&v348, (__int64)v438);
    v199 = v481;
    v200 = v349;
    v481 = v348;
    v201 = v482;
    v348 = v199;
    v482 = v349;
    v349 = v201;
    if ( !v199 )
    {
LABEL_374:
      v483 = _mm_load_si128(&v439);
      v484 = _mm_load_si128(&v440);
      v485 = _mm_load_si128(&v441);
      v486 = _mm_load_si128(&v442);
      v487 = _mm_load_si128(&v443);
      v488 = _mm_load_si128(&v444);
      v489 = _mm_load_si128(&v445);
      v490 = _mm_load_si128(&v446);
      v491 = _mm_load_si128(&v447);
      v492 = _mm_load_si128(&v448);
      v493 = _mm_load_si128(&v449);
      v494 = _mm_load_si128(&v450);
      if ( v374 <= 0 )
      {
        v209 = 0;
      }
      else
      {
        v208 = 0;
        v209 = 0;
        do
        {
          v198 = (unsigned int)v208;
          if ( sub_64930(v341, v208) )
            v209 = *(_QWORD *)(v372 + (v208 << 6) + 8) + v209 - *(_QWORD *)(v372 + (v208 << 6));
          ++v208;
        }
        while ( v374 > (int)v208 );
      }
      v495 = v209;
      si128.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v337), _mm_cvtsi32_si128(v70)).m128i_u64[0];
      v496 = si128.m128i_i64[0];
      if ( (a6 & 2) == 0 )
      {
        v210 = v452.m128i_i64[0];
        v500 = 0;
        v498 = v327;
        v499 = (__m128i)(unsigned __int64)v451[0];
        if ( v452.m128i_i64[0] )
        {
          v296 = (void *)qalloc_or_throw(16 * v452.m128i_i64[0], v198, (__int64)v201, (__int64)v200);
          v198 = (__int64)v451[1];
          v499.m128i_i64[1] = (__int64)v296;
          v500.m128i_i64[1] = v210;
          memcpy(v296, v451[1], 16 * v210);
          v500.m128i_i64[0] = v210;
        }
        v211 = _mm_load_si128(&v453);
        v510 = 0;
        v212 = v463.m128i_i64[0];
        v501 = v211;
        v213 = _mm_loadu_si128(&v455);
        v502 = v454;
        v503 = v213;
        v214 = _mm_loadu_si128(&v456);
        v505 = v457;
        v504 = v214;
        v215 = _mm_loadu_si128(&v459);
        v506 = v458;
        v507 = v215;
        v216 = _mm_loadu_si128(&v460);
        v509 = v461;
        v508 = v216;
        v511 = 0;
        if ( v463.m128i_i64[0] )
        {
          v295 = (void *)qalloc_or_throw(40 * v463.m128i_i64[0], v198, (__int64)v201, (__int64)v200);
          v198 = (__int64)v462;
          v510 = (__int64)v295;
          v511.m128i_i64[1] = v212;
          memcpy(v295, v462, 40 * v212);
          v511.m128i_i64[0] = v212;
        }
        v217 = v466.m128i_i64[0];
        v513 = 0;
        v514 = 0;
        v512 = v464;
        if ( v466.m128i_i64[0] )
        {
          v294 = (void *)qalloc_or_throw(16 * v466.m128i_i64[0], v198, (__int64)v201, (__int64)v200);
          v198 = (__int64)v465;
          v513 = (__int64)v294;
          v514.m128i_i64[1] = v217;
          memcpy(v294, v465, 16 * v217);
          v514.m128i_i64[0] = v217;
        }
        v218 = v468.m128i_i64[0];
        v515 = 0;
        v516 = 0;
        if ( v468.m128i_i64[0] )
        {
          v312 = (void *)qalloc_or_throw(16 * v468.m128i_i64[0], v198, (__int64)v201, (__int64)v200);
          v198 = (__int64)v467;
          v515 = (__int64)v312;
          v516.m128i_i64[1] = v218;
          memcpy(v312, v467, 16 * v218);
          v516.m128i_i64[0] = v218;
        }
        v219 = v470.m128i_i64[0];
        v517 = nullptr;
        v518 = 0;
        if ( v470.m128i_i64[0] )
        {
          v517 = (void *)qalloc_or_throw(16 * v470.m128i_i64[0], v198, (__int64)v201, (__int64)v200);
          v518.m128i_i64[1] = v219;
          memcpy(v517, v469, 16 * v219);
          v518.m128i_i64[0] = v219;
        }
        v220 = (void *)v340.m128i_i64[0];
        sub_64000(v519, v340.m128i_i64[0], 0.0);
        v223 = v473.m128i_i64[0];
        v520 = 0;
        v521 = 0;
        if ( v473.m128i_i64[0] )
        {
          v297 = (void *)qalloc_or_throw(16 * v473.m128i_i64[0], (__int64)v220, v221, v222);
          v220 = v472;
          v520 = (__int64)v297;
          v521.m128i_i64[1] = v223;
          memcpy(v297, v472, 16 * v223);
          v521.m128i_i64[0] = v223;
        }
        v224 = v476.m128i_i64[0];
        v523 = 0;
        v524 = 0;
        v522 = v474;
        if ( v476.m128i_i64[0] )
        {
          v313 = (void *)qalloc_or_throw(16 * v476.m128i_i64[0], (__int64)v220, v221, v222);
          v220 = v475;
          v523 = (__int64)v313;
          v524.m128i_i64[1] = v224;
          memcpy(v313, v475, 16 * v224);
          v524.m128i_i64[0] = v224;
        }
        v525 = 0;
        v526 = 0;
        v332.m128i_i64[0] = v478;
        if ( (_QWORD)v478 )
        {
          v298 = v478;
          v525 = qalloc_or_throw(104 * v478, (__int64)v220, v221, v222);
          v299 = v525;
          v300 = 0;
          v526.m128i_i64[1] = v298;
          v340.m128i_i64[0] = 0;
          while ( 1 )
          {
            v303 = v340.m128i_i64[0] + v299;
            v304 = (char *)(v477 + v340.m128i_i64[0]);
            *(_DWORD *)v303 = 0;
            v305 = v304;
            v306 = v304;
            copy_argloc();
            *(_QWORD *)(v303 + 16) = *((_QWORD *)v306 + 2);
            v308 = *((_DWORD *)v306 + 6);
            *(_QWORD *)(v303 + 32) = 0;
            *(_DWORD *)(v303 + 24) = v308;
            *(_OWORD *)(v303 + 40) = 0;
            v309 = *((_QWORD *)v306 + 5);
            if ( v309 )
            {
              nb = *((_QWORD *)v306 + 5);
              v310 = (void *)qalloc_or_throw(nb, (__int64)v305, v309, v307);
              *(_QWORD *)(v303 + 32) = v310;
              *(_QWORD *)(v303 + 48) = nb;
              v305 = *((const void **)v306 + 4);
              memcpy(v310, v305, nb);
              *(_QWORD *)(v303 + 40) = nb;
            }
            *(_QWORD *)(v303 + 56) = 0;
            *(_OWORD *)(v303 + 64) = 0;
            v301 = *((_QWORD *)v306 + 8);
            if ( v301 )
            {
              na = *((_QWORD *)v306 + 8);
              v311 = (void *)qalloc_or_throw(na, (__int64)v305, v301, v307);
              *(_QWORD *)(v303 + 56) = v311;
              *(_QWORD *)(v303 + 72) = na;
              memcpy(v311, *((const void **)v306 + 7), na);
              *(_QWORD *)(v303 + 64) = na;
            }
            *(_QWORD *)(v303 + 80) = 0;
            v220 = v306 + 80;
            copy_tinfo_t();
            v302 = *((_QWORD *)v306 + 11);
            v340.m128i_i64[0] += 104;
            ++v300;
            *(_QWORD *)(v303 + 88) = v302;
            *(_QWORD *)(v303 + 96) = *((_QWORD *)v306 + 12);
            if ( v332.m128i_i64[0] == v300 )
              break;
            v299 = v525;
          }
          v526.m128i_i64[0] = v332.m128i_i64[0];
        }
        v225 = v480.m128i_i64[0];
        v527 = nullptr;
        v528 = 0;
        if ( v480.m128i_i64[0] )
        {
          v527 = (void *)qalloc_or_throw(4 * v480.m128i_i64[0], (__int64)v220, v221, v222);
          v528.m128i_i64[1] = v225;
          memcpy(v527, v479, 4 * v225);
          v528.m128i_i64[0] = v225;
        }
        v226 = &v529;
        sub_1D82C0(&v529, (__int64)&v481);
        v531 = _mm_load_si128(&v483);
        v227 = _mm_load_si128(&v484);
        v543 = v495;
        v532 = v227;
        v228 = _mm_load_si128(&v485);
        v544 = v496;
        v533 = v228;
        v229 = _mm_load_si128(&v486);
        v545 = v497;
        v534 = v229;
        v230 = _mm_load_si128(&v487);
        v546 = v498;
        v535 = v230;
        v536 = _mm_load_si128(&v488);
        v537 = _mm_load_si128(&v489);
        v538 = _mm_load_si128(&v490);
        v539 = _mm_load_si128(&v491);
        v540 = _mm_load_si128(&v492);
        v541 = _mm_load_si128(&v493);
        v542 = _mm_load_si128(&v494);
        v231 = _mm_loadu_si128(&v499);
        v232 = _mm_loadu_si128(&v500);
        v499.m128i_i64[1] = 0;
        v548 = v232;
        v233 = _mm_loadu_si128(&v501);
        v550 = v502;
        v549 = v233;
        v234 = _mm_load_si128(&v503);
        v553 = v505;
        v551 = v234;
        v235 = _mm_load_si128(&v504);
        v554 = v506;
        v552 = v235;
        v236 = _mm_load_si128(&v507);
        v557 = v509;
        v555 = v236;
        v237 = _mm_load_si128(&v508);
        v558 = v510;
        v556 = v237;
        v238 = _mm_load_si128(&v511);
        v547 = v231;
        v559 = v238;
        v510 = 0;
        v560 = v512;
        v500 = 0;
        v511 = 0;
        v239 = _mm_load_si128(&v514);
        v514 = 0;
        v561 = v513;
        v562 = v239;
        v240 = _mm_loadu_si128(&v516);
        v563 = v515;
        v564 = v240;
        v241 = _mm_load_si128(&v518);
        v513 = 0;
        v515 = 0;
        v565 = (__int64)v517;
        v517 = nullptr;
        v516 = 0;
        v566 = v241;
        v518 = 0;
        sub_64000(&v567, (__int64)v519, 0.0);
        v242 = v520;
        v243 = _mm_loadu_si128(&v524);
        v520 = 0;
        v244 = _mm_loadu_si128(&v521);
        v568 = v242;
        v572 = v243;
        v245 = _mm_load_si128(&v526);
        v570 = v522;
        v574 = v245;
        v246 = _mm_loadu_si128(&v528);
        v571 = v523;
        v569 = v244;
        v573 = v525;
        v523 = 0;
        v575 = (__int64)v527;
        v525 = 0;
        v577[0] = v529;
        v527 = nullptr;
        v577[1] = v530;
        v529 = nullptr;
        v530 = nullptr;
        v521 = 0;
        v524 = 0;
        v526 = 0;
        v576 = v246;
        v528 = 0;
        v578 = _mm_loadu_si128(&v531);
        v247 = _mm_loadu_si128(&v532);
        v590 = v543;
        v579 = v247;
        v248 = _mm_loadu_si128(&v533);
        v591 = v544;
        v580 = v248;
        v249 = _mm_loadu_si128(&v534);
        v592 = v545;
        v581 = v249;
        v582 = _mm_loadu_si128(&v535);
        v583 = _mm_loadu_si128(&v536);
        v584 = _mm_loadu_si128(&v537);
        v585 = _mm_loadu_si128(&v538);
        v586 = _mm_loadu_si128(&v539);
        v587 = _mm_loadu_si128(&v540);
        v588 = _mm_loadu_si128(&v541);
        si128 = _mm_loadu_si128(&v542);
        v589 = si128;
        v325 = sub_1DAF50((__m128i *)v333, &v546);
        if ( v577[0] )
        {
          sub_82C40(v577);
          if ( v577[0] )
            qfree((__int64)v577[0]);
        }
        if ( v575 )
        {
          v576.m128i_i64[0] = 0;
          qfree(v575);
        }
        v250 = v573;
        if ( v573 )
        {
          v251 = v574.m128i_i64[0];
          if ( v574.m128i_i64[0] )
          {
            v332.m128i_i64[0] = (__int64)&v529;
            v252 = 0;
            v340.m128i_i64[0] = 0;
            do
            {
              v253 = (_QWORD *)(v250 + v340.m128i_i64[0]);
              clear_tinfo_t();
              v254 = v253[7];
              if ( v254 )
              {
                v253[8] = 0;
                qfree(v254);
              }
              v255 = v253[4];
              if ( v255 )
              {
                v253[5] = 0;
                qfree(v255);
              }
              ++v252;
              cleanup_argloc();
              v340.m128i_i64[0] += 104;
              v250 = v573;
            }
            while ( v251 != v252 );
            v226 = (unsigned __int64 **)v332.m128i_i64[0];
          }
          v574.m128i_i64[0] = 0;
          qfree(v250);
        }
        if ( v571 )
        {
          v572.m128i_i64[0] = 0;
          qfree(v571);
        }
        if ( v568 )
        {
          v569.m128i_i64[0] = 0;
          qfree(v568);
        }
        qfree(v567);
        if ( v565 )
        {
          v566.m128i_i64[0] = 0;
          qfree(v565);
        }
        if ( v563 )
        {
          v564.m128i_i64[0] = 0;
          qfree(v563);
        }
        if ( v561 )
        {
          v562.m128i_i64[0] = 0;
          qfree(v561);
        }
        if ( v558 )
        {
          v559.m128i_i64[0] = 0;
          qfree(v558);
        }
        if ( v547.m128i_i64[1] )
        {
          v548.m128i_i64[0] = 0;
          qfree(v547.m128i_i64[1]);
        }
        if ( v529 )
        {
          sub_82C40(v226);
          if ( v529 )
            qfree((__int64)v529);
        }
        if ( v527 )
        {
          v528.m128i_i64[0] = 0;
          qfree((__int64)v527);
        }
        v256 = v525;
        if ( v525 )
        {
          v257 = v526.m128i_i64[0];
          if ( v526.m128i_i64[0] )
          {
            v258 = 0;
            v340.m128i_i64[0] = 0;
            do
            {
              v259 = (_QWORD *)(v256 + v340.m128i_i64[0]);
              clear_tinfo_t();
              v260 = v259[7];
              if ( v260 )
              {
                v259[8] = 0;
                qfree(v260);
              }
              v261 = v259[4];
              if ( v261 )
              {
                v259[5] = 0;
                qfree(v261);
              }
              ++v258;
              cleanup_argloc();
              v340.m128i_i64[0] += 104;
              v256 = v525;
            }
            while ( v257 != v258 );
          }
          v526.m128i_i64[0] = 0;
          qfree(v256);
        }
        if ( v523 )
        {
          v524.m128i_i64[0] = 0;
          qfree(v523);
        }
        if ( v520 )
        {
          v521.m128i_i64[0] = 0;
          qfree(v520);
        }
        qfree(v519[0]);
        if ( v517 )
        {
          v518.m128i_i64[0] = 0;
          qfree((__int64)v517);
        }
        if ( v515 )
        {
          v516.m128i_i64[0] = 0;
          qfree(v515);
        }
        if ( v513 )
        {
          v514.m128i_i64[0] = 0;
          qfree(v513);
        }
        if ( v510 )
        {
          v511.m128i_i64[0] = 0;
          qfree(v510);
        }
        if ( v499.m128i_i64[1] )
        {
          v500.m128i_i64[0] = 0;
          qfree(v499.m128i_i64[1]);
        }
      }
      sub_66FA0(a1, 0);
      if ( v438[0] )
      {
        sub_82C40(v438);
        if ( v438[0] )
          qfree((__int64)v438[0]);
      }
      if ( src )
      {
        *(_QWORD *)&v437 = 0;
        qfree((__int64)src);
      }
      v262 = v434;
      if ( v434 )
      {
        v263 = v435;
        if ( (_QWORD)v435 )
        {
          v264 = 0;
          v265 = 0;
          do
          {
            v266 = (_QWORD *)(v262 + v265);
            clear_tinfo_t();
            v267 = *(_QWORD *)(v262 + v265 + 56);
            if ( v267 )
            {
              v266[8] = 0;
              qfree(v267);
            }
            v268 = v266[4];
            if ( v268 )
            {
              v266[5] = 0;
              qfree(v268);
            }
            ++v264;
            cleanup_argloc();
            v262 = v434;
            v265 += 104;
          }
          while ( v263 != v264 );
        }
        *(_QWORD *)&v435 = 0;
        qfree(v262);
      }
      if ( v432 )
      {
        *(_QWORD *)&v433 = 0;
        qfree((__int64)v432);
      }
      if ( v429 )
      {
        *(_QWORD *)&v430 = 0;
        qfree((__int64)v429);
      }
      qfree((__int64)v428[0]);
      if ( v426 )
      {
        *(_QWORD *)&v427 = 0;
        qfree((__int64)v426);
      }
      if ( v424 )
      {
        *(_QWORD *)&v425 = 0;
        qfree((__int64)v424);
      }
      if ( v422 )
      {
        *(_QWORD *)&v423 = 0;
        qfree((__int64)v422);
      }
      if ( v419 )
      {
        *(_QWORD *)&v420 = 0;
        qfree((__int64)v419);
      }
      if ( v408.m128i_i64[1] )
      {
        v409.m128i_i64[0] = 0;
        qfree(v408.m128i_i64[1]);
      }
      if ( v406[0] )
      {
        sub_82C40(v406);
        if ( v406[0] )
          qfree((__int64)v406[0]);
      }
      if ( v404 )
      {
        *(_QWORD *)&v405 = 0;
        qfree(v404);
      }
      v269 = v402;
      if ( v402 )
      {
        v270 = v403;
        if ( (_QWORD)v403 )
        {
          v271 = 0;
          v272 = 0;
          do
          {
            v273 = (_QWORD *)(v269 + v272);
            clear_tinfo_t();
            v274 = *(_QWORD *)(v269 + v272 + 56);
            if ( v274 )
            {
              v273[8] = 0;
              qfree(v274);
            }
            v275 = v273[4];
            if ( v275 )
            {
              v273[5] = 0;
              qfree(v275);
            }
            ++v271;
            cleanup_argloc();
            v269 = v402;
            v272 += 104;
          }
          while ( v270 != v271 );
        }
        *(_QWORD *)&v403 = 0;
        qfree(v269);
      }
      if ( v400 )
      {
        *(_QWORD *)&v401 = 0;
        qfree(v400);
      }
      if ( v397 )
      {
        *(_QWORD *)&v398 = 0;
        qfree(v397);
      }
      qfree(v395);
      if ( v393 )
      {
        *(_QWORD *)&v394 = 0;
        qfree(v393);
      }
      if ( v391 )
      {
        *(_QWORD *)&v392 = 0;
        qfree(v391);
      }
      if ( v389 )
      {
        *(_QWORD *)&v390 = 0;
        qfree(v389);
      }
      if ( v386 )
      {
        *(_QWORD *)&v387 = 0;
        qfree(v386);
      }
      if ( v375.m128i_i64[1] )
      {
        *(_QWORD *)&v376 = 0;
        qfree(v375.m128i_i64[1]);
      }
      v276 = v372;
      v365 = off_4DD9D8;
      if ( v372 )
      {
        v277 = v373;
        if ( (_QWORD)v373 )
        {
          v278 = 0;
          do
          {
            v279 = (_QWORD *)(v276 + (v278 << 6));
            v280 = v279[5];
            if ( v280 )
            {
              v279[6] = 0;
              qfree(v280);
            }
            v281 = v279[2];
            if ( v281 )
            {
              v279[3] = 0;
              qfree(v281);
            }
            v276 = v372;
            ++v278;
          }
          while ( v277 != v278 );
        }
        *(_QWORD *)&v373 = 0;
        qfree(v276);
      }
      if ( v367 )
      {
        *(_QWORD *)&v368 = 0;
        qfree(v367);
      }
      qfree(v341[0]);
      if ( v345 )
      {
        *(_QWORD *)v346 = 0;
        qfree(v345);
      }
      if ( v325 != *v333 )
      {
        v15 = (unsigned __int64)v325;
        v32 = 1;
        goto LABEL_36;
      }
      v33 = v451;
      v32 = 1;
      goto LABEL_37;
    }
    v202 = *v199;
    if ( !v201 )
    {
      v201 = (_QWORD *)(*v199 & 3 | (unsigned __int64)v199 & 0xFFFFFFFFFFFFFFFCLL);
      *v199 = (unsigned __int64)v201;
      v291 = v348;
      v292 = (__m128i)(unsigned __int64)v348;
      *v348 &= ~1uLL;
      *(__m128i *)(v291 + 1) = _mm_unpacklo_epi64(v292, v292);
      *v348 |= 2u;
LABEL_372:
      if ( v348 )
        qfree((__int64)v348);
      goto LABEL_374;
    }
    v203 = v202 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v202 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_371:
      v201 = (_QWORD *)(v202 & 3 | (unsigned __int64)v199 & 0xFFFFFFFFFFFFFFFCLL);
      *v199 = (unsigned __int64)v201;
      v206 = v348;
      v207 = (__m128i)(unsigned __int64)v348;
      *v348 &= ~1uLL;
      *(__m128i *)(v206 + 1) = _mm_unpacklo_epi64(v207, v207);
      *v348 |= 2u;
      v349 = nullptr;
      goto LABEL_372;
    }
    v204 = *(__int64 **)(v203 + 8);
    if ( (*(_BYTE *)v204 & 2) != 0 )
    {
      v205 = *(__int64 **)(v203 + 16);
      if ( (*(_BYTE *)v205 & 2) != 0 )
        goto LABEL_553;
    }
    else
    {
      sub_1D4760(v204);
      v205 = *(__int64 **)(v203 + 16);
      if ( (*(_BYTE *)v205 & 2) != 0 )
        goto LABEL_367;
    }
    sub_1D4760(v205);
LABEL_367:
    if ( (*(_BYTE *)v203 & 2) != 0 )
    {
LABEL_368:
      if ( v202 > 3 )
        qfree(v202 & 0xFFFFFFFFFFFFFFFCLL);
      v199 = v348;
      v202 = *v348;
      goto LABEL_371;
    }
LABEL_553:
    v314 = *(_QWORD *)(v203 + 24);
    if ( v314 )
    {
      *(_QWORD *)(v203 + 32) = 0;
      qfree(v314);
    }
    *(_QWORD *)v203 |= 2uLL;
    goto LABEL_368;
  }
  return v340.m128i_u32[0];
}

