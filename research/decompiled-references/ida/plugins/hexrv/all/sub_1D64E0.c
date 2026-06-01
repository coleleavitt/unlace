__int64 __fastcall sub_1D64E0(__int64 a1, __int64 a2, signed int a3, unsigned __int64 **a4, int a5, char a6)
{
  _QWORD *exception; // rdi
  __int64 v9; // rdi
  int v10; // r9d
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rax
  __int64 *v13; // rdx
  __m128i *v14; // rax
  __m128i si128; // xmm0
  unsigned __int32 v16; // ecx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __m128i v20; // xmm0
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // r13
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __int64 v27; // rsi
  __int64 v28; // rax
  int v29; // edx
  char v31; // bl
  void **v32; // r15
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  signed int v35; // eax
  unsigned int v36; // r13d
  __int32 v37; // eax
  const __m128i *v38; // r12
  __int64 (__fastcall ***v39)(); // rbx
  __int64 v40; // rdi
  __int64 v41; // r15
  __int64 v42; // r13
  __int64 v43; // r12
  _QWORD *v44; // rbx
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  __m128i *v48; // rax
  __m128i v49; // xmm1
  __m128i *v50; // rax
  void *v51; // r15
  __m128i v52; // xmm0
  __int64 (__fastcall **v53)(); // rdi
  __int64 v54; // rdx
  __m128i v55; // xmm0
  __int64 v56; // rsi
  int v57; // eax
  unsigned __int64 *v58; // rax
  unsigned int v59; // ebx
  _QWORD *v60; // rdi
  __int64 v61; // rsi
  unsigned __int64 v62; // rsi
  __int64 v63; // r8
  int v64; // r9d
  signed int v65; // r13d
  unsigned int v66; // ebx
  _QWORD *v67; // rcx
  unsigned int v68; // eax
  __int64 v69; // r15
  __int64 v70; // rax
  __int64 v71; // r15
  __int64 v72; // rdx
  __int64 v73; // r15
  __int64 v74; // r12
  unsigned int v75; // eax
  unsigned __int64 *v76; // rcx
  unsigned __int64 v77; // rax
  __int64 v78; // rdi
  int v79; // ecx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  unsigned __int64 v83; // r12
  __int64 func; // rax
  unsigned __int64 v85; // r13
  __int64 v86; // rcx
  unsigned __int64 **v87; // rax
  char *v88; // r13
  char *v89; // rdx
  unsigned __int64 **v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // r15
  __int64 v94; // r12
  __int64 v95; // rbx
  _QWORD *v96; // r13
  __int64 v97; // rdi
  __int64 v98; // r15
  __int64 v99; // r12
  __int64 v100; // rbx
  _QWORD *v101; // r13
  __int64 v102; // rdi
  __int64 v103; // r13
  __int32 v104; // r15d
  __int64 v105; // r12
  _QWORD *v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rdx
  unsigned int v110; // r15d
  __int64 v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // r14
  __int32 v114; // r15d
  __int64 v115; // r13
  __int64 v116; // r12
  _QWORD *v117; // rbx
  unsigned __int64 v118; // rdx
  __int64 v119; // r12
  __int32 *v120; // rbx
  __int64 v121; // rsi
  __int32 v122; // eax
  __int64 v123; // rax
  __int64 v124; // rsi
  __int64 v125; // rsi
  unsigned __int32 v126; // r13d
  int v127; // eax
  int v128; // r13d
  __int64 v129; // rax
  __int64 v130; // rsi
  unsigned __int64 v131; // r12
  _QWORD *v132; // rax
  unsigned __int64 **v133; // rdi
  int v134; // eax
  unsigned int v135; // ecx
  unsigned __int64 v136; // rdx
  __int64 v137; // r15
  __int64 v138; // rcx
  unsigned int v139; // edx
  __int64 v140; // rax
  __int64 v141; // rax
  int v142; // edx
  __int64 v143; // rcx
  __int64 v144; // r15
  __int64 v145; // rax
  __int32 v146; // r9d
  unsigned __int64 v147; // rax
  unsigned __int64 v148; // rdx
  __int64 v149; // rbx
  void *v150; // r15
  __m128i v151; // xmm0
  __m128i v152; // xmm0
  unsigned __int64 v153; // rbx
  void *v154; // r15
  __m128i v155; // xmm0
  __m128 v156; // xmm1
  __m128i v157; // xmm0
  __m128i v158; // xmm0
  __m128i v159; // xmm0
  unsigned __int64 v160; // rbx
  void *v161; // r15
  __m128i v162; // xmm0
  unsigned __int64 v163; // rbx
  void *v164; // r15
  __m128i v165; // xmm0
  unsigned __int64 v166; // rbx
  void *v167; // r15
  __m128i v168; // xmm0
  unsigned __int64 v169; // rbx
  void *v170; // r12
  __m128i v171; // xmm0
  unsigned __int64 v172; // rbx
  void *v173; // r12
  __m128i v174; // xmm0
  unsigned __int64 v175; // rbx
  void *v176; // r12
  __m128i v177; // xmm0
  __int64 (__fastcall **v178)(); // rax
  __int64 v179; // rdx
  unsigned __int64 v180; // rbx
  unsigned __int64 v181; // r12
  __int64 *v182; // rdi
  __int64 *v183; // rdi
  __int64 (__fastcall **v184)(); // rax
  __m128i v185; // xmm0
  __int64 v186; // r12
  __int64 v187; // rbx
  __m128i v188; // xmm0
  __int64 v189; // rbx
  __m128i v190; // xmm0
  __int64 v191; // rbx
  __m128i v192; // xmm0
  __m128i v193; // xmm0
  __m128i v194; // xmm0
  __m128i v195; // xmm0
  __int64 v196; // rbx
  __int64 v197; // rbx
  __int64 v198; // rbx
  __int64 v199; // rbx
  __int64 v200; // rbx
  __int64 v201; // rbx
  unsigned __int64 **v202; // r12
  __m128i v203; // xmm0
  __m128i v204; // xmm0
  __m128i v205; // xmm0
  __m128i v206; // xmm0
  __m128i v207; // xmm0
  __m128i v208; // xmm1
  __m128i v209; // xmm1
  __m128i v210; // xmm1
  __m128i v211; // xmm1
  __m128i v212; // xmm1
  __m128i v213; // xmm1
  __m128i v214; // xmm1
  __m128i v215; // xmm1
  __m128i v216; // xmm1
  __m128i v217; // xmm1
  void *v218; // rax
  __m128i v219; // xmm1
  __m128i v220; // xmm0
  __m128i v221; // xmm1
  __m128i v222; // xmm1
  __m128i v223; // xmm0
  __m128i v224; // xmm0
  __m128i v225; // xmm0
  __int64 v226; // rdi
  __int64 v227; // r15
  __int64 v228; // rbx
  _QWORD *v229; // r12
  __int64 v230; // rdi
  __int64 v231; // r15
  __int64 v232; // rbx
  _QWORD *v233; // r12
  __int64 v234; // rdi
  __int64 v235; // r13
  __int64 v236; // rbx
  __int64 v237; // r15
  _QWORD *v238; // r12
  __int64 v239; // rdi
  __int64 v240; // r13
  __int64 v241; // rbx
  __int64 v242; // r15
  _QWORD *v243; // r12
  __int64 v244; // rdi
  __int64 v245; // r12
  __int64 v246; // r15
  _QWORD *v247; // rbx
  __int64 v248; // rax
  __int64 v249; // rax
  unsigned __int64 **v250; // rax
  unsigned __int64 tinfo_size; // r13
  __int64 (__fastcall **v252)(); // rax
  __m128i v253; // xmm0
  _BYTE *v254; // rcx
  __int64 v255; // r15
  __int64 v256; // rbx
  __int64 v257; // r12
  __int64 v258; // rax
  __int64 v259; // rbx
  __int64 v260; // rax
  __int64 v261; // r15
  int v262; // eax
  void *v263; // rax
  void *v264; // rax
  __int64 v265; // [rsp+8h] [rbp-E18h]
  __int64 v266; // [rsp+10h] [rbp-E10h]
  unsigned __int64 i; // [rsp+38h] [rbp-DE8h]
  __int64 v268; // [rsp+40h] [rbp-DE0h]
  __int64 v269; // [rsp+40h] [rbp-DE0h]
  char n; // [rsp+48h] [rbp-DD8h]
  size_t nb; // [rsp+48h] [rbp-DD8h]
  size_t na; // [rsp+48h] [rbp-DD8h]
  bool v273; // [rsp+50h] [rbp-DD0h]
  bool v274; // [rsp+50h] [rbp-DD0h]
  unsigned __int64 *v275; // [rsp+58h] [rbp-DC8h]
  unsigned int v276; // [rsp+58h] [rbp-DC8h]
  unsigned __int64 v277; // [rsp+60h] [rbp-DC0h]
  unsigned __int64 *v278; // [rsp+68h] [rbp-DB8h]
  __int32 v280; // [rsp+70h] [rbp-DB0h]
  __int64 v281; // [rsp+78h] [rbp-DA8h]
  __m128i v282; // [rsp+80h] [rbp-DA0h] BYREF
  unsigned __int64 **v283; // [rsp+90h] [rbp-D90h]
  __int64 v284; // [rsp+98h] [rbp-D88h]
  unsigned __int64 v285; // [rsp+A0h] [rbp-D80h]
  unsigned __int64 **v286; // [rsp+A8h] [rbp-D78h]
  unsigned int v287; // [rsp+B0h] [rbp-D70h]
  unsigned int v288; // [rsp+B4h] [rbp-D6Ch]
  unsigned __int64 *v289; // [rsp+B8h] [rbp-D68h]
  __m128i v290; // [rsp+C0h] [rbp-D60h] BYREF
  __int64 v291[2]; // [rsp+D0h] [rbp-D50h] BYREF
  _QWORD v292[2]; // [rsp+E0h] [rbp-D40h] BYREF
  unsigned __int64 v293; // [rsp+F0h] [rbp-D30h] BYREF
  __int128 v294; // [rsp+F8h] [rbp-D28h]
  _OWORD v295[2]; // [rsp+110h] [rbp-D10h] BYREF
  int v296; // [rsp+130h] [rbp-CF0h]
  __int64 (__fastcall **v297)(); // [rsp+140h] [rbp-CE0h] BYREF
  __int64 v298; // [rsp+148h] [rbp-CD8h]
  __int128 v299; // [rsp+150h] [rbp-CD0h]
  __int64 v300; // [rsp+160h] [rbp-CC0h]
  __int64 v301; // [rsp+168h] [rbp-CB8h]
  __int64 v302; // [rsp+170h] [rbp-CB0h]
  unsigned __int64 **v303; // [rsp+178h] [rbp-CA8h]
  void **v304; // [rsp+180h] [rbp-CA0h]
  __int64 v305; // [rsp+188h] [rbp-C98h]
  __int128 v306; // [rsp+190h] [rbp-C90h]
  __int64 v307; // [rsp+1A0h] [rbp-C80h]
  __int128 v308; // [rsp+1A8h] [rbp-C78h]
  __int64 v309; // [rsp+1B8h] [rbp-C68h]
  unsigned __int64 v310; // [rsp+1C0h] [rbp-C60h]
  bool v311; // [rsp+1C8h] [rbp-C58h]
  char v312; // [rsp+1C9h] [rbp-C57h]
  char v313; // [rsp+1CAh] [rbp-C56h]
  __int64 (__fastcall **v314)(); // [rsp+1D0h] [rbp-C50h] BYREF
  char v315; // [rsp+1D8h] [rbp-C48h]
  __int64 v316; // [rsp+1E0h] [rbp-C40h]
  __int128 v317; // [rsp+1E8h] [rbp-C38h]
  __int128 v318; // [rsp+1F8h] [rbp-C28h]
  unsigned __int64 *v319; // [rsp+208h] [rbp-C18h]
  int v320; // [rsp+210h] [rbp-C10h]
  __int64 v321; // [rsp+218h] [rbp-C08h]
  __int128 v322; // [rsp+220h] [rbp-C00h]
  int v323; // [rsp+230h] [rbp-BF0h]
  __m128i v324; // [rsp+240h] [rbp-BE0h] BYREF
  __int128 v325; // [rsp+250h] [rbp-BD0h]
  __int128 v326; // [rsp+260h] [rbp-BC0h]
  __int64 v327; // [rsp+270h] [rbp-BB0h]
  __int128 v328; // [rsp+278h] [rbp-BA8h]
  __int128 v329; // [rsp+288h] [rbp-B98h]
  __int64 v330; // [rsp+298h] [rbp-B88h]
  int v331; // [rsp+2A0h] [rbp-B80h]
  __int128 v332; // [rsp+2A8h] [rbp-B78h]
  __int128 v333; // [rsp+2B8h] [rbp-B68h]
  __int64 v334; // [rsp+2C8h] [rbp-B58h]
  __int64 v335; // [rsp+2D0h] [rbp-B50h]
  __int128 v336; // [rsp+2D8h] [rbp-B48h]
  __int64 v337; // [rsp+2E8h] [rbp-B38h]
  __int64 v338; // [rsp+2F0h] [rbp-B30h]
  __int128 v339; // [rsp+2F8h] [rbp-B28h]
  __int64 v340; // [rsp+308h] [rbp-B18h]
  __int128 v341; // [rsp+310h] [rbp-B10h]
  __int64 v342; // [rsp+320h] [rbp-B00h]
  __int128 v343; // [rsp+328h] [rbp-AF8h]
  __int64 v344; // [rsp+338h] [rbp-AE8h]
  __int64 v345; // [rsp+340h] [rbp-AE0h]
  __int64 v346; // [rsp+348h] [rbp-AD8h]
  __int128 v347; // [rsp+350h] [rbp-AD0h]
  int v348; // [rsp+360h] [rbp-AC0h]
  __int64 v349; // [rsp+368h] [rbp-AB8h]
  __int128 v350; // [rsp+370h] [rbp-AB0h]
  __int64 v351; // [rsp+380h] [rbp-AA0h]
  __int128 v352; // [rsp+388h] [rbp-A98h]
  __int64 v353; // [rsp+398h] [rbp-A88h]
  __int128 v354; // [rsp+3A0h] [rbp-A80h]
  unsigned __int64 *v355[2]; // [rsp+3B0h] [rbp-A70h] BYREF
  char v356; // [rsp+3C0h] [rbp-A60h] BYREF
  __m128i v357; // [rsp+480h] [rbp-9A0h] BYREF
  __m128i v358; // [rsp+490h] [rbp-990h]
  __int128 v359; // [rsp+4A0h] [rbp-980h] BYREF
  __int64 v360; // [rsp+4B0h] [rbp-970h]
  __m128i v361; // [rsp+4B8h] [rbp-968h] BYREF
  __m128i v362; // [rsp+4C8h] [rbp-958h] BYREF
  __int64 v363; // [rsp+4D8h] [rbp-948h]
  int v364; // [rsp+4E0h] [rbp-940h]
  __m128i v365; // [rsp+4E8h] [rbp-938h] BYREF
  __m128i v366; // [rsp+4F8h] [rbp-928h] BYREF
  __int64 v367; // [rsp+508h] [rbp-918h]
  void *v368; // [rsp+510h] [rbp-910h]
  __int128 v369; // [rsp+518h] [rbp-908h]
  __int64 v370; // [rsp+528h] [rbp-8F8h]
  void *v371; // [rsp+530h] [rbp-8F0h]
  __int128 v372; // [rsp+538h] [rbp-8E8h]
  void *v373; // [rsp+548h] [rbp-8D8h]
  __int128 v374; // [rsp+550h] [rbp-8D0h]
  void *v375; // [rsp+560h] [rbp-8C0h]
  __int128 v376; // [rsp+568h] [rbp-8B8h]
  __int64 v377[2]; // [rsp+578h] [rbp-8A8h] BYREF
  void *v378; // [rsp+588h] [rbp-898h]
  __int128 v379; // [rsp+590h] [rbp-890h]
  int v380; // [rsp+5A0h] [rbp-880h]
  void *v381; // [rsp+5A8h] [rbp-878h]
  __int128 v382; // [rsp+5B0h] [rbp-870h]
  __int64 v383; // [rsp+5C0h] [rbp-860h] BYREF
  __int128 v384; // [rsp+5C8h] [rbp-858h]
  void *src; // [rsp+5D8h] [rbp-848h]
  __int128 v386; // [rsp+5E0h] [rbp-840h]
  unsigned __int64 *v387[2]; // [rsp+5F0h] [rbp-830h] BYREF
  __m128i v388; // [rsp+600h] [rbp-820h] BYREF
  __m128i v389; // [rsp+610h] [rbp-810h] BYREF
  __m128i v390; // [rsp+620h] [rbp-800h] BYREF
  __m128i v391; // [rsp+630h] [rbp-7F0h] BYREF
  __m128i v392; // [rsp+640h] [rbp-7E0h] BYREF
  __m128i v393; // [rsp+650h] [rbp-7D0h] BYREF
  __m128i v394; // [rsp+660h] [rbp-7C0h] BYREF
  __m128i v395; // [rsp+670h] [rbp-7B0h] BYREF
  __m128i v396; // [rsp+680h] [rbp-7A0h] BYREF
  __m128i v397; // [rsp+690h] [rbp-790h] BYREF
  __m128i v398; // [rsp+6A0h] [rbp-780h] BYREF
  __m128i v399; // [rsp+6B0h] [rbp-770h] BYREF
  void *v400[2]; // [rsp+6C0h] [rbp-760h] BYREF
  __m128i v401; // [rsp+6D0h] [rbp-750h]
  __m128i v402; // [rsp+6E0h] [rbp-740h] BYREF
  __int64 v403; // [rsp+6F0h] [rbp-730h]
  __m128i v404; // [rsp+6F8h] [rbp-728h] BYREF
  __m128i v405; // [rsp+708h] [rbp-718h] BYREF
  __int64 v406; // [rsp+718h] [rbp-708h]
  int v407; // [rsp+720h] [rbp-700h]
  __m128i v408; // [rsp+728h] [rbp-6F8h] BYREF
  __m128i v409; // [rsp+738h] [rbp-6E8h] BYREF
  __int64 v410; // [rsp+748h] [rbp-6D8h]
  void *v411; // [rsp+750h] [rbp-6D0h]
  __m128i v412; // [rsp+758h] [rbp-6C8h]
  __int64 v413; // [rsp+768h] [rbp-6B8h]
  void *v414; // [rsp+770h] [rbp-6B0h]
  __m128i v415; // [rsp+778h] [rbp-6A8h]
  void *v416; // [rsp+788h] [rbp-698h]
  __m128i v417; // [rsp+790h] [rbp-690h]
  void *v418; // [rsp+7A0h] [rbp-680h]
  __m128i v419; // [rsp+7A8h] [rbp-678h]
  __int64 v420[2]; // [rsp+7B8h] [rbp-668h] BYREF
  void *v421; // [rsp+7C8h] [rbp-658h]
  __m128i v422; // [rsp+7D0h] [rbp-650h]
  int v423; // [rsp+7E0h] [rbp-640h]
  void *v424; // [rsp+7E8h] [rbp-638h]
  __m128i v425; // [rsp+7F0h] [rbp-630h]
  __int64 v426; // [rsp+800h] [rbp-620h] BYREF
  __int128 v427; // [rsp+808h] [rbp-618h]
  void *v428; // [rsp+818h] [rbp-608h]
  __m128i v429; // [rsp+820h] [rbp-600h]
  __int64 (__fastcall **v430)(); // [rsp+830h] [rbp-5F0h] BYREF
  __int64 v431; // [rsp+838h] [rbp-5E8h]
  __m128i v432; // [rsp+840h] [rbp-5E0h] BYREF
  __m128i v433; // [rsp+850h] [rbp-5D0h] BYREF
  __m128i v434; // [rsp+860h] [rbp-5C0h] BYREF
  __m128i v435; // [rsp+870h] [rbp-5B0h] BYREF
  __m128i v436; // [rsp+880h] [rbp-5A0h] BYREF
  __m128i v437; // [rsp+890h] [rbp-590h] BYREF
  __m128i v438; // [rsp+8A0h] [rbp-580h] BYREF
  __m128i v439; // [rsp+8B0h] [rbp-570h] BYREF
  __m128i v440; // [rsp+8C0h] [rbp-560h] BYREF
  __m128i v441; // [rsp+8D0h] [rbp-550h] BYREF
  __m128i v442; // [rsp+8E0h] [rbp-540h] BYREF
  __m128i v443; // [rsp+8F0h] [rbp-530h] BYREF
  __int64 v444; // [rsp+900h] [rbp-520h] BYREF
  __int64 v445; // [rsp+908h] [rbp-518h]
  int v446; // [rsp+910h] [rbp-510h]
  unsigned __int64 v447; // [rsp+920h] [rbp-500h]
  __m128i v448; // [rsp+928h] [rbp-4F8h] BYREF
  __m128i v449; // [rsp+938h] [rbp-4E8h] BYREF
  __m128i v450; // [rsp+948h] [rbp-4D8h] BYREF
  __int64 v451; // [rsp+958h] [rbp-4C8h]
  __m128i v452; // [rsp+960h] [rbp-4C0h] BYREF
  __m128i v453; // [rsp+970h] [rbp-4B0h] BYREF
  __int64 v454; // [rsp+980h] [rbp-4A0h]
  int v455; // [rsp+988h] [rbp-498h]
  __m128i v456; // [rsp+990h] [rbp-490h] BYREF
  __m128i v457; // [rsp+9A0h] [rbp-480h] BYREF
  __int64 v458; // [rsp+9B0h] [rbp-470h]
  void *v459; // [rsp+9B8h] [rbp-468h]
  __m128i v460; // [rsp+9C0h] [rbp-460h] BYREF
  __int64 v461; // [rsp+9D0h] [rbp-450h]
  void *v462; // [rsp+9D8h] [rbp-448h]
  __m128i v463; // [rsp+9E0h] [rbp-440h] BYREF
  void *v464; // [rsp+9F0h] [rbp-430h]
  __m128i v465; // [rsp+9F8h] [rbp-428h] BYREF
  void *v466; // [rsp+A08h] [rbp-418h]
  __m128i v467; // [rsp+A10h] [rbp-410h] BYREF
  __int64 v468[2]; // [rsp+A20h] [rbp-400h] BYREF
  void *v469; // [rsp+A30h] [rbp-3F0h]
  __m128i v470; // [rsp+A38h] [rbp-3E8h] BYREF
  int v471; // [rsp+A48h] [rbp-3D8h]
  void *v472; // [rsp+A50h] [rbp-3D0h]
  __m128i v473; // [rsp+A58h] [rbp-3C8h] BYREF
  __int64 v474; // [rsp+A68h] [rbp-3B8h]
  __m128i v475; // [rsp+A70h] [rbp-3B0h] BYREF
  void *v476; // [rsp+A80h] [rbp-3A0h]
  __m128i v477; // [rsp+A88h] [rbp-398h] BYREF
  unsigned __int64 *v478; // [rsp+A98h] [rbp-388h] BYREF
  unsigned __int64 *v479; // [rsp+AA0h] [rbp-380h]
  __m128i v480; // [rsp+AA8h] [rbp-378h] BYREF
  __m128i v481; // [rsp+AB8h] [rbp-368h] BYREF
  __m128i v482; // [rsp+AC8h] [rbp-358h] BYREF
  __m128i v483; // [rsp+AD8h] [rbp-348h] BYREF
  __m128i v484; // [rsp+AE8h] [rbp-338h] BYREF
  __m128i v485; // [rsp+AF8h] [rbp-328h] BYREF
  __m128i v486; // [rsp+B08h] [rbp-318h] BYREF
  __m128i v487; // [rsp+B18h] [rbp-308h] BYREF
  __m128i v488; // [rsp+B28h] [rbp-2F8h] BYREF
  __m128i v489; // [rsp+B38h] [rbp-2E8h] BYREF
  __m128i v490; // [rsp+B48h] [rbp-2D8h] BYREF
  __m128i v491; // [rsp+B58h] [rbp-2C8h] BYREF
  __int64 v492; // [rsp+B68h] [rbp-2B8h]
  __int64 v493; // [rsp+B70h] [rbp-2B0h]
  int v494; // [rsp+B78h] [rbp-2A8h]
  unsigned __int64 v495; // [rsp+B80h] [rbp-2A0h] BYREF
  __m128i v496; // [rsp+B88h] [rbp-298h]
  __m128i v497; // [rsp+B98h] [rbp-288h]
  __m128i v498; // [rsp+BA8h] [rbp-278h]
  __int64 v499; // [rsp+BB8h] [rbp-268h]
  __m128i v500; // [rsp+BC0h] [rbp-260h]
  __m128i v501; // [rsp+BD0h] [rbp-250h]
  __int64 v502; // [rsp+BE0h] [rbp-240h]
  int v503; // [rsp+BE8h] [rbp-238h]
  __m128i v504; // [rsp+BF0h] [rbp-230h]
  __m128i v505; // [rsp+C00h] [rbp-220h]
  __int64 v506; // [rsp+C10h] [rbp-210h]
  void *v507; // [rsp+C18h] [rbp-208h]
  __m128i v508; // [rsp+C20h] [rbp-200h]
  __int64 v509; // [rsp+C30h] [rbp-1F0h]
  void *v510; // [rsp+C38h] [rbp-1E8h]
  __m128i v511; // [rsp+C40h] [rbp-1E0h]
  void *v512; // [rsp+C50h] [rbp-1D0h]
  __m128i v513; // [rsp+C58h] [rbp-1C8h]
  void *v514; // [rsp+C68h] [rbp-1B8h]
  __m128i v515; // [rsp+C70h] [rbp-1B0h]
  __int64 v516; // [rsp+C80h] [rbp-1A0h] BYREF
  void *v517; // [rsp+C90h] [rbp-190h]
  __m128i v518; // [rsp+C98h] [rbp-188h]
  int v519; // [rsp+CA8h] [rbp-178h]
  void *v520; // [rsp+CB0h] [rbp-170h]
  __m128i v521; // [rsp+CB8h] [rbp-168h]
  __int64 v522; // [rsp+CC8h] [rbp-158h]
  __m128i v523; // [rsp+CD0h] [rbp-150h]
  void *v524; // [rsp+CE0h] [rbp-140h]
  __m128i v525; // [rsp+CE8h] [rbp-138h]
  unsigned __int64 *v526[2]; // [rsp+CF8h] [rbp-128h] BYREF
  __m128i v527; // [rsp+D08h] [rbp-118h]
  __m128i v528; // [rsp+D18h] [rbp-108h]
  __m128i v529; // [rsp+D28h] [rbp-F8h]
  __m128i v530; // [rsp+D38h] [rbp-E8h]
  __m128i v531; // [rsp+D48h] [rbp-D8h]
  __m128i v532; // [rsp+D58h] [rbp-C8h]
  __m128i v533; // [rsp+D68h] [rbp-B8h]
  __m128i v534; // [rsp+D78h] [rbp-A8h]
  __m128i v535; // [rsp+D88h] [rbp-98h]
  __m128i v536; // [rsp+D98h] [rbp-88h]
  __m128i v537; // [rsp+DA8h] [rbp-78h]
  __m128i v538; // [rsp+DB8h] [rbp-68h]
  __int64 v539; // [rsp+DC8h] [rbp-58h]
  __int64 v540; // [rsp+DD0h] [rbp-50h]
  int v541; // [rsp+DD8h] [rbp-48h]
  unsigned __int64 v542; // [rsp+DE8h] [rbp-38h]

  v284 = a2;
  v288 = a3;
  v286 = a4;
  v542 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 64) <= a3 )
  {
    v290.m128i_i32[0] = -4;
    return v290.m128i_u32[0];
  }
  LODWORD(v289) = a6 & 1;
  if ( (a6 & 1) == 0 && *(_QWORD *)(a1 + 1480) > 1u )
  {
    v290.m128i_i32[0] = -22;
    return v290.m128i_u32[0];
  }
  sub_1CAD70(v286);
  v9 = *(_QWORD *)(a1 + 1496);
  v290.m128i_i32[0] = sub_338EA0(v9, 20, v284, v288, (_DWORD)v286, v10);
  if ( !v290.m128i_i32[0] )
  {
    v283 = *(unsigned __int64 ***)(v284 + 816);
    if ( !v283 )
    {
      v9 = 24;
      v90 = (unsigned __int64 **)qalloc();
      v283 = v90;
      if ( !v90 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v91 = v284;
      *v90 = nullptr;
      v90[1] = nullptr;
      v90[2] = nullptr;
      *(_QWORD *)(v91 + 816) = v90;
      *(_DWORD *)(v91 + 824) = *(_DWORD *)(a1 + 64);
    }
    v287 = *(_DWORD *)(a1 + 64);
    if ( v288 >= v287 )
      sub_1CF090(v9);
    v268 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v288);
    v281 = *(_QWORD *)(v268 + 56);
    v11 = *v286;
    v278 = *v286;
    if ( !*v286 )
    {
      if ( !v286[2] )
      {
        v290.m128i_i32[0] = -26;
        v29 = v287;
        goto LABEL_30;
      }
      v11 = v286[1];
    }
    v12 = *v11;
    v403 = -1;
    *(_OWORD *)v400 = 0;
    v13 = &v444;
    v277 = v12;
    v14 = &v432;
    v401 = 0;
    v404 = 0;
    v405 = 0;
    v408 = 0;
    v409 = 0;
    v412 = 0;
    v415 = 0;
    v417 = 0;
    v419 = 0;
    v422 = 0;
    v425 = 0;
    v427 = 0;
    v406 = 0;
    v407 = 0;
    v410 = 0;
    v411 = nullptr;
    v413 = 0;
    v414 = nullptr;
    v416 = nullptr;
    v418 = nullptr;
    v420[0] = 0;
    v420[1] = 0;
    v421 = nullptr;
    v423 = -1;
    v424 = nullptr;
    v426 = 0;
    v428 = nullptr;
    v402 = (__m128i)-1LL;
    v429 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3FE260);
    v16 = v290.m128i_i32[0];
    v430 = nullptr;
    v431 = 0;
    do
    {
      v14[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v14 += 2;
      v14[-2] = si128;
      v14[-1].m128i_i64[1] = 0;
    }
    while ( v14 != (__m128i *)&v444 );
    v290.m128i_i32[0] = v16;
    v444 = 0;
    v445 = -1;
    v446 = -1;
    v275 = *v283;
    if ( !*v283 )
      goto LABEL_17;
    v285 = **v283;
    v17 = v285 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v285 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v31 = 0;
      LOBYTE(v285) = 0;
      if ( *(_DWORD *)v281 == 55 && (_DWORD)elf_gnu_hash_indexes == -1 )
      {
        v18 = 24;
        goto LABEL_301;
      }
      goto LABEL_36;
    }
    if ( (*(_BYTE *)v17 & 2) != 0 )
      goto LABEL_17;
    v9 = v16;
    while ( 1 )
    {
      v13 = *(__int64 **)(v17 + 24);
      v18 = v17 + 24;
      if ( v277 >= (unsigned __int64)v13 )
        break;
      v17 = *(_QWORD *)(v17 + 8);
LABEL_16:
      if ( (*(_BYTE *)v17 & 2) != 0 )
        goto LABEL_17;
    }
    if ( (unsigned __int64)v13 < v277 )
    {
      v17 = *(_QWORD *)(v17 + 16);
      goto LABEL_16;
    }
    v290.m128i_i32[0] = v9;
    if ( v275 != (unsigned __int64 *)v17 )
    {
      v31 = 0;
      LOBYTE(v285) = 0;
      if ( *(_DWORD *)v281 == 55 && *(_DWORD *)(v17 + 624) == -1 )
      {
LABEL_301:
        *(_BYTE *)(v281 + 32) = 7;
        v134 = *(_DWORD *)(v18 + 592);
        v135 = v287;
        *(_DWORD *)(v281 + 40) = v134;
        sub_62C20(a1, 0, (__int64)"replaced jump to outline by goto %d", v135);
LABEL_249:
        if ( v430 )
        {
          sub_7E780((unsigned __int64 **)&v430);
          if ( v430 )
            qfree();
        }
        if ( v428 )
        {
          v429.m128i_i64[0] = 0;
          qfree();
        }
        v112 = v426;
        if ( v426 )
        {
          v113 = v427;
          if ( (_QWORD)v427 )
          {
            v114 = v290.m128i_i32[0];
            v115 = 0;
            v116 = 0;
            do
            {
              v117 = (_QWORD *)(v112 + v115);
              clear_tinfo_t();
              if ( *(_QWORD *)(v112 + v115 + 56) )
              {
                v117[8] = 0;
                qfree();
              }
              if ( v117[4] )
              {
                v117[5] = 0;
                qfree();
              }
              ++v116;
              v115 += 104;
              cleanup_argloc();
              v112 = v426;
            }
            while ( v113 != v116 );
            v290.m128i_i32[0] = v114;
          }
          *(_QWORD *)&v427 = 0;
          qfree();
        }
        if ( v424 )
        {
          v425.m128i_i64[0] = 0;
          qfree();
        }
        if ( v421 )
        {
          v422.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
        if ( v418 )
        {
          v419.m128i_i64[0] = 0;
          qfree();
        }
        if ( v416 )
        {
          v417.m128i_i64[0] = 0;
          qfree();
        }
        if ( v414 )
        {
          v415.m128i_i64[0] = 0;
          qfree();
        }
        if ( v411 )
        {
          v412.m128i_i64[0] = 0;
          qfree();
        }
        if ( v400[1] )
        {
          v401.m128i_i64[0] = 0;
          qfree();
        }
        return v290.m128i_u32[0];
      }
LABEL_36:
      v32 = (void **)(v17 + 32);
LABEL_37:
      v33 = v284;
      v34 = (unsigned __int64)v32[72] + *(_QWORD *)(v284 + 808);
      *(_QWORD *)(v284 + 808) = v34;
      if ( (int)(*(_DWORD *)(*(_QWORD *)(a1 + 1496) + 652LL) << 10) < v34 )
      {
        v290.m128i_i32[0] = -29;
        goto LABEL_58;
      }
      v276 = v288 + 1;
      v273 = *(_DWORD *)v281 != 55;
      if ( *(_DWORD *)v281 != 55 )
      {
        v35 = *(_DWORD *)(v33 + 824);
        if ( v35 > (int)v288 && v35 <= (int)(v288 + 1) )
        {
          v9 = a1;
          v248 = sub_64C50(a1, *(_QWORD *)(v281 + 24), *(_QWORD *)(v268 + 40), 1);
          if ( !v248 )
          {
            v290.m128i_i32[0] = -22;
            goto LABEL_58;
          }
          v276 = *(_DWORD *)(v248 + 72);
        }
      }
      v297 = off_4B1508;
      v299 = 0u;
      v303 = v283;
      v313 = v285 | v31 ^ 1;
      v300 = 0;
      v301 = 0;
      v302 = 0;
      v304 = v32;
      v305 = 0;
      v307 = 0;
      v309 = 0;
      v311 = v273;
      v312 = v31;
      v298 = a1;
      n = v273 & v31;
      v306 = 0;
      v308 = 0;
      v310 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v287), _mm_cvtsi32_si128(v276)).m128i_u64[0];
      if ( (a6 & 1) != 0 && (v273 & (unsigned __int8)v31) != 0 )
      {
        if ( v287 >= *(_DWORD *)(a1 + 64) )
          sub_1CF090(v9);
        if ( !v278 )
          goto LABEL_296;
        v118 = *v278;
        v269 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v287);
        v119 = *(_QWORD *)(*(_QWORD *)(v269 + 64) + 1504LL);
        v283 = *(unsigned __int64 ***)(v269 + 64);
        v293 = 0;
        v294 = 0;
        (*(void (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64))(*(_QWORD *)v119 + 368LL))(
          v119,
          &v293,
          v118);
        v120 = (__int32 *)v293;
        v285 = v293 + 4 * v294;
        if ( v293 == v285 )
          goto LABEL_292;
        v282.m128i_i64[0] = v119 + 224;
        while ( 1 )
        {
          v290.m128i_i32[0] = *v120;
          v126 = v290.m128i_i32[0];
          if ( sub_605B0(v282.m128i_i64[0], v290.m128i_i32[0]) )
          {
            v127 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v119 + 32LL))(v119, v126);
            v128 = v127;
            if ( v127 <= 0 )
            {
              if ( !under_debugger )
                sub_37DDE0(52736);
              goto LABEL_567;
            }
            v146 = sub_133C80(v283, v127, 1);
            if ( v146 == -1 )
            {
LABEL_291:
              v285 = v293;
LABEL_292:
              if ( v285 )
              {
                *(_QWORD *)&v294 = 0;
                qfree();
              }
              v131 = 0;
              v285 = 0;
              for ( i = *v278; v131 < (unsigned __int64)v306; ++v131 )
              {
                v132 = (_QWORD *)j__qalloc_or_throw();
                v132[4] = 0xFFFFFFFF00000000LL;
                v132[5] = 0;
                v132[6] = 0xFFFFFFFF00000000LL;
                v132[7] = 0;
                v132[8] = 0xFFFFFFFF00000000LL;
                v132[9] = 0;
                v283 = (unsigned __int64 **)(v132 + 4);
                v290.m128i_i64[0] = (__int64)v132;
                v282.m128i_i64[0] = (__int64)(v132 + 8);
                sub_32B5A0(v132, i);
                v133 = v283;
                *(_DWORD *)v290.m128i_i64[0] = 4;
                sub_120CC0((__int64)v133, (unsigned __int8 *)(v305 + 16 * v131));
                sub_120CC0(v282.m128i_i64[0], (unsigned __int8 *)(v307 + 16 * v131));
                v285 = (unsigned __int64)sub_9ECA0(v269, v290.m128i_i64[0], v285);
              }
LABEL_296:
              v36 = *((_DWORD *)v32 + 146);
              v39 = &v297;
              if ( *((_DWORD *)v32 + 147) <= (signed int)v36 )
              {
LABEL_142:
                *((_DWORD *)v32 + 148) = v276;
                goto LABEL_143;
              }
LABEL_44:
              v290.m128i_i64[0] = (__int64)&v297;
              while ( v36 < *(_DWORD *)(a1 + 64) )
              {
                v38 = *(const __m128i **)(*(_QWORD *)(a1 + 528) + 8LL * v36);
                if ( !v312 )
                {
                  v309 = -*(_QWORD *)(*(_QWORD *)(v298 + 1472) + 40 * v38[32].m128i_i64[0] + 8);
                  v38 = (const __m128i *)sub_64F90(v298, v38, *(unsigned int *)(v298 + 64), 0);
                }
                v39 = (__int64 (__fastcall ***)())v290.m128i_i64[0];
                if ( v313 )
                  sub_1D4560(v290.m128i_i64[0], v38[2].m128i_i64, 0);
                if ( (unsigned int)sub_11B370(v38, v290.m128i_i64[0]) )
                {
                  v290.m128i_i32[0] = -22;
                  goto LABEL_57;
                }
                if ( v313 )
                {
                  sub_1D4560(v290.m128i_i64[0], &v38[2].m128i_i64[1], 0);
                  v45 = v38[2].m128i_u64[0];
                  if ( v45 >= v38[2].m128i_i64[1] )
                  {
                    v46 = v38[3].m128i_i64[1];
                    if ( v46 )
                      v45 = *(_QWORD *)(v46 + 24);
                    v282.m128i_i64[0] = v45;
                    v285 = sub_32BBA0(v298);
                    v47 = get_item_end() - v285;
                    if ( v47 > 4 )
                      v47 = 4;
                    v38[2].m128i_i64[1] = v282.m128i_i64[0] + v47;
                  }
                }
                v37 = v38[1].m128i_i32[2];
                BYTE1(v37) &= ~2u;
                if ( (_DWORD)v289 )
                {
                  v37 |= 0x40080u;
                  v38[1].m128i_i32[2] = v37;
                  v38[32].m128i_i64[0] = *(_QWORD *)(a1 + 1480);
                }
                else
                {
                  LOBYTE(v37) = v37 | 0x80;
                }
                ++v36;
                v38[1].m128i_i32[2] = v37 | 0x20000;
                if ( *((_DWORD *)v32 + 147) <= (signed int)v36 )
                  goto LABEL_141;
              }
              if ( !under_debugger )
                sub_37DDE0(52719);
LABEL_567:
              BUG();
            }
            v129 = v306;
            v130 = v305;
            if ( *((_QWORD *)&v306 + 1) < (unsigned __int64)(v306 + 1) )
            {
              v280 = v146;
              v305 = qvector_reserve();
              v130 = v305;
              v146 = v280;
              v129 = v306;
            }
            v121 = 16 * v129 + v130;
            *(_QWORD *)v121 = 0xFFFFFFFF00000000LL;
            v122 = v290.m128i_i32[0];
            *(_QWORD *)(v121 + 8) = 0;
            *(_QWORD *)&v306 = v306 + 1;
            *(_BYTE *)v121 = 1;
            *(_DWORD *)(v121 + 8) = v122;
            *(_DWORD *)(v121 + 4) = v128;
            v123 = v308;
            v124 = v307;
            if ( *((_QWORD *)&v308 + 1) < (unsigned __int64)(v308 + 1) )
            {
              v290.m128i_i32[0] = v146;
              v307 = qvector_reserve();
              v124 = v307;
              v146 = v290.m128i_i32[0];
              v123 = v308;
            }
            v125 = 16 * v123 + v124;
            *(_QWORD *)v125 = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v125 + 8) = 0;
            *(_QWORD *)&v308 = v308 + 1;
            *(_BYTE *)v125 = 1;
            *(_DWORD *)(v125 + 8) = v146;
            *(_DWORD *)(v125 + 4) = v128;
          }
          if ( (__int32 *)v285 == ++v120 )
            goto LABEL_291;
        }
      }
      v36 = *((_DWORD *)v32 + 146);
      if ( (signed int)v36 < *((_DWORD *)v32 + 147) )
        goto LABEL_44;
      v39 = &v297;
LABEL_141:
      if ( n )
        goto LABEL_142;
LABEL_143:
      if ( *(_DWORD *)v281 != 55 )
        *(_DWORD *)v281 = 55;
      v79 = v287;
      *(_BYTE *)(v281 + 32) = 7;
      *(_DWORD *)(v281 + 40) = v79;
      sub_1D14A0(a1, v79);
      if ( (_DWORD)v289 )
      {
        sub_1C8C80(v292, v291, (__int64 *)v32 + 37);
        if ( v291[0] < 0 )
        {
          v291[0] = 0;
          v283 = nullptr;
        }
        else
        {
          v283 = (unsigned __int64 **)v291[0];
        }
        v83 = (unsigned __int64)v32[14] + *((int *)v32 + 23);
        v282.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
        if ( v278 )
        {
          v293 = 0;
          v290.m128i_i64[0] = v278[4] + *((unsigned __int16 *)v278 + 20);
          v289 = &v293;
          if ( (unsigned __int8)get_func_frame() && (tinfo_size = get_tinfo_size(), v290.m128i_i64[0] < tinfo_size) )
            v285 = tinfo_size - v290.m128i_i64[0];
          else
            v285 = 0;
          *(_QWORD *)&v295[0] = 0;
          v295[1] = 0;
          func_tail_iterator_set();
          if ( !*(_QWORD *)&v295[0] )
            goto LABEL_529;
          DWORD2(v295[0]) = 0;
          if ( *(int *)(*(_QWORD *)&v295[0] + 128LL) <= 0 )
          {
LABEL_159:
            v87 = (unsigned __int64 **)v285;
            if ( (unsigned __int64)v283 >= v285 )
              v87 = v283;
            v88 = (char *)v87 + v290.m128i_i64[0];
            lock_func_range();
          }
          else
          {
            while ( 1 )
            {
              func = get_func();
              if ( func )
              {
                v85 = *(_QWORD *)(func + 32) + *(unsigned __int16 *)(func + 40);
                v86 = v290.m128i_i64[0];
                if ( v290.m128i_i64[0] < v85 )
                  v86 = *(_QWORD *)(func + 32) + *(unsigned __int16 *)(func + 40);
                v290.m128i_i64[0] = v86;
                if ( (unsigned __int8)get_func_frame() )
                {
                  v147 = get_tinfo_size();
                  v148 = v147 - v85;
                  if ( v285 >= v147 - v85 )
                    v148 = v285;
                  if ( v85 >= v147 )
                    v148 = v285;
                  v285 = v148;
                }
              }
              if ( !*(_QWORD *)&v295[0] )
                break;
              if ( *(_DWORD *)(*(_QWORD *)&v295[0] + 128LL) <= DWORD2(v295[0]) + 1 )
                goto LABEL_159;
              ++DWORD2(v295[0]);
            }
LABEL_529:
            v250 = (unsigned __int64 **)v285;
            if ( (unsigned __int64)v283 >= v285 )
              v250 = v283;
            v88 = (char *)v250 + v290.m128i_i64[0];
          }
          clear_tinfo_t();
        }
        else
        {
          v88 = nullptr;
        }
        v89 = &v88[v282.m128i_i32[0] - 1];
        if ( v83 < (unsigned __int64)v32[7] + ((unsigned __int64)v89 & -v282.m128i_i32[0]) )
          v83 = (unsigned __int64)v32[7] + ((unsigned __int64)v89 & -v282.m128i_i32[0]);
      }
      else
      {
        v83 = 0;
      }
      v290.m128i_i32[0] = sub_1D52A0((__int64)v39, *(_QWORD *)(v281 + 24), v83, v80, v81, v82);
      if ( v290.m128i_i32[0] )
      {
LABEL_57:
        sub_1D0290(v39);
        goto LABEL_58;
      }
      nullsub_115();
      v107 = *(_QWORD *)(a1 + 1456);
      v108 = *(_QWORD *)(a1 + 1448);
      v109 = v107 + 1;
      if ( *(_QWORD *)(a1 + 1464) < (unsigned __int64)(v107 + 1) )
      {
        v249 = qvector_reserve();
        *(_QWORD *)(a1 + 1448) = v249;
        v108 = v249;
        v107 = *(_QWORD *)(a1 + 1456);
        v109 = v107 + 1;
      }
      v110 = v287;
      *(_QWORD *)(a1 + 1456) = v109;
      v111 = 16 * v107 + v108;
      *(_DWORD *)v111 = v110;
      *(_DWORD *)(v111 + 4) = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(v111 + 8) = v276;
      *(_BYTE *)(v111 + 12) = v273;
      sub_62C20(a1, 0, (__int64)"fixed inlined callee %a in blocks %d..%d", 0.0, v277, v110);
      v290.m128i_i32[0] = sub_338EA0(*(_QWORD *)(a1 + 1496), 21, v284, v288, (_DWORD)v286, v110);
      sub_1D0290(v39);
      goto LABEL_249;
    }
LABEL_17:
    if ( (*(_BYTE *)(a1 + 5) & 0x20) == 0 )
      sub_62C20(a1, 0, (__int64)"before handling outlines");
    memset(v295, 0, sizeof(v295));
    v296 = -1;
    sub_32D5D0(a1 + 8, v295, v13);
    v291[0] = 0;
    v314 = off_4B0458;
    v291[1] = 0;
    v315 = 0;
    v316 = 0;
    v319 = nullptr;
    v320 = 0;
    v321 = 0;
    v323 = 0;
    v317 = 0;
    v318 = 0;
    v322 = 0;
    if ( v278 )
    {
      v319 = v278;
      v318 = -1;
      create_qflow_chart();
    }
    else
    {
      create_multirange_qflow_chart();
    }
    sub_1CEFE0((__int64 *)&v314, v291);
    v19 = v323;
    *(_DWORD *)(a1 + 4) |= 0x2000u;
    v20 = _mm_load_si128((const __m128i *)&xmmword_3FE260);
    if ( v19 <= 0 )
    {
      LOBYTE(v285) = 0;
      v22 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      LOBYTE(v285) = 0;
      v21 = 0;
      do
      {
        v23 = v321 + (v21 << 6);
        if ( !(_BYTE)v285 )
        {
          LOBYTE(v285) = rangeset_t_has_common();
          v20 = _mm_load_si128((const __m128i *)&xmmword_3FE260);
        }
        v24 = *(_QWORD *)(a1 + 24);
        v25 = _mm_loadl_epi64((const __m128i *)v23);
        v26 = _mm_loadl_epi64((const __m128i *)(v23 + 8));
        v27 = *(_QWORD *)(a1 + 16);
        if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v24 + 1) )
        {
          v282.m128i_i64[0] = v26.m128i_i64[0];
          v290.m128i_i64[0] = v25.m128i_i64[0];
          v28 = qvector_reserve();
          *(_QWORD *)(a1 + 16) = v28;
          v27 = v28;
          v24 = *(_QWORD *)(a1 + 24);
          v20 = _mm_load_si128((const __m128i *)&xmmword_3FE260);
          v26 = _mm_loadl_epi64(&v282);
          v25 = _mm_loadl_epi64(&v290);
        }
        ++v21;
        *(__m128i *)(v27 + 16 * v24) = _mm_unpacklo_epi64(v25, v26);
        v22 = *(_QWORD *)(a1 + 24) + 1LL;
        *(_QWORD *)(a1 + 24) = v22;
      }
      while ( v323 > (int)v21 );
    }
    v327 = -1;
    v330 = 0;
    v48 = (__m128i *)&v356;
    v331 = 0;
    v334 = 0;
    v335 = 0;
    v337 = 0;
    v338 = 0;
    v340 = 0;
    v342 = 0;
    v344 = 0;
    v345 = 0;
    v346 = 0;
    v348 = -1;
    v349 = 0;
    v351 = 0;
    v353 = 0;
    v355[0] = nullptr;
    v324 = 0;
    v325 = 0;
    v326 = -1;
    v328 = 0;
    v329 = 0;
    v332 = 0;
    v333 = 0;
    v336 = 0;
    v339 = 0;
    v341 = 0;
    v343 = 0;
    v347 = 0;
    v350 = 0;
    v352 = 0;
    v354 = 0;
    v355[1] = nullptr;
    do
    {
      v48[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v48 += 2;
      v48[-2] = v20;
      v48[-1].m128i_i64[1] = 0;
    }
    while ( &v357 != v48 );
    v49.m128i_i64[0] = 0;
    v357.m128i_i64[1] = 0;
    v360 = -1;
    v50 = &v388;
    v363 = 0;
    v364 = 0;
    v367 = 0;
    v368 = nullptr;
    v370 = 0;
    v371 = nullptr;
    v373 = nullptr;
    v375 = nullptr;
    v377[0] = 0;
    v377[1] = 0;
    v378 = nullptr;
    v380 = -1;
    v381 = nullptr;
    v383 = 0;
    src = nullptr;
    v387[0] = nullptr;
    v358 = 0;
    v359 = -1;
    v361 = 0;
    v362 = 0;
    v365 = 0;
    v366 = 0;
    v369 = 0;
    v372 = 0;
    v374 = 0;
    v376 = 0;
    v379 = 0;
    v382 = 0;
    v384 = 0;
    v386 = 0;
    v387[1] = nullptr;
    do
    {
      v50[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v50 += 2;
      v50[-2] = v20;
      v50[-1].m128i_i64[1] = 0;
    }
    while ( v400 != (void **)v50 );
    v51 = nullptr;
    v357.m128i_i64[0] = *(_QWORD *)(a1 + 8);
    if ( v22 )
    {
      v51 = (void *)qalloc_or_throw();
      memcpy(v51, *(const void **)(a1 + 16), 16 * v22);
    }
    v52 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
    if ( v357.m128i_i64[1] )
    {
      v290 = v52;
      v358.m128i_i64[0] = 0;
      qfree();
      v52 = _mm_load_si128(&v290);
    }
    v357.m128i_i64[1] = (__int64)v51;
    v358 = v52;
    if ( v357.m128i_i64[0] )
    {
      v52.m128i_i64[0] = 0;
      v297 = nullptr;
      v299 = 0;
      func_tail_iterator_set();
      v53 = v297;
      LODWORD(v298) = -1;
      if ( v297 )
      {
        v54 = v358.m128i_i64[0];
        while ( 1 )
        {
          v55 = _mm_loadl_epi64((const __m128i *)v53);
          v49 = _mm_loadl_epi64((const __m128i *)(v53 + 1));
          v56 = v357.m128i_i64[1];
          if ( v358.m128i_i64[1] < (unsigned __int64)(v54 + 1) )
          {
            v282.m128i_i64[0] = v49.m128i_i64[0];
            v290.m128i_i64[0] = v55.m128i_i64[0];
            v357.m128i_i64[1] = qvector_reserve();
            v54 = v358.m128i_i64[0];
            v56 = v357.m128i_i64[1];
            v49 = _mm_loadl_epi64(&v282);
            v55 = _mm_loadl_epi64(&v290);
          }
          v52 = _mm_unpacklo_epi64(v55, v49);
          *(__m128i *)(v56 + 16 * v54) = v52;
          v53 = v297;
          v54 = ++v358.m128i_i64[0];
          if ( !v297 )
            goto LABEL_110;
          v57 = v298 + 1;
          if ( *((_DWORD *)v297 + 32) <= (int)v298 + 1 )
            break;
          LODWORD(v298) = v298 + 1;
          if ( v57 >= 0 )
            v53 = (__int64 (__fastcall **)())((char *)v297[17] + 16 * v57);
        }
        lock_func_range();
      }
    }
LABEL_110:
    v58 = *v286;
    v357.m128i_i64[0] = (__int64)v58;
    if ( !v58 )
      v58 = (unsigned __int64 *)v357.m128i_i64[1];
    *(_QWORD *)&v359 = *v58;
    sub_1D38A0(a1, (__int64)&v357, &v324);
    v59 = a5 | 0x80000000;
    v290.m128i_i32[0] = sub_338EA0(*(_QWORD *)(a1 + 1496), 0, (unsigned int)&v314, a1, (unsigned int)v291, v59);
    if ( v290.m128i_i32[0] )
      goto LABEL_170;
    v290.m128i_i32[0] = sub_1CA980(a1, (__int64)&v314, (__int64)v291, v278);
    if ( v290.m128i_i32[0] )
      goto LABEL_170;
    v60 = *(_QWORD **)(a1 + 1504);
    if ( (*(_BYTE *)(a1 + 112) & 0x10) != 0 )
    {
      v61 = v60[5];
      if ( v61 )
      {
        *(_DWORD *)(a1 + 1184) = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*v60 + 48LL))(v60, v61, 0);
        v60 = *(_QWORD **)(a1 + 1504);
      }
    }
    sub_2B31E0(v60, a1 + 1312, v277);
    v62 = v284;
    v290.m128i_i32[0] = sub_1D2440(a1, v284, (__int64)&v314, v291, v278, v59);
    if ( v290.m128i_i32[0] )
    {
LABEL_170:
      sub_1D38A0(a1, (__int64)&v324, &v357);
      goto LABEL_171;
    }
    v65 = *(_DWORD *)(a1 + 64);
    v66 = v287;
    if ( v65 > (int)v287 )
    {
      v67 = v292;
      v68 = *(_DWORD *)(a1 + 64);
      v282.m128i_i64[0] = (__int64)v292;
      while ( 1 )
      {
        if ( v66 >= v68 )
        {
          if ( !under_debugger )
            sub_37DDE0(52719);
          goto LABEL_567;
        }
        v72 = *(_QWORD *)(a1 + 528);
        v73 = *(_QWORD *)(v72 + 8LL * v66);
        sub_B1E00(v73, v62, v72, (__int64)v67, v63, v64);
        v74 = *(_QWORD *)(v73 + 56);
        if ( !v74 )
          goto LABEL_124;
        v75 = *(_DWORD *)v74;
        if ( *(_DWORD *)v74 <= 0x34u )
        {
          v67 = (_QWORD *)(v74 + 64);
          v290.m128i_i64[0] = v74 + 64;
          if ( v75 <= 0x29 )
            goto LABEL_124;
        }
        else
        {
          if ( v75 != 55 )
            goto LABEL_124;
          v290.m128i_i64[0] = v74 + 32;
        }
        v69 = v290.m128i_i64[0];
        sub_11F580(v282.m128i_i64[0], (unsigned __int8 *)v290.m128i_i64[0]);
        v62 = *(_QWORD *)(v74 + 24);
        v70 = sub_1CF0B0(a1, v62, v69, 0);
        v71 = v70;
        if ( !v70 )
        {
          v62 = *(_QWORD *)(v290.m128i_i64[0] + 8);
          if ( !(unsigned __int8)sub_32D560(a1 + 8, v62) )
            goto LABEL_123;
          sub_62C20(a1, 0, (__int64)"%a: resolve block for %a", *(double *)v52.m128i_i64, *(double *)v49.m128i_i64);
LABEL_136:
          sub_65BA0(a1, v287, v65);
          v78 = v282.m128i_i64[0];
          *(_QWORD *)(a1 + 488) = *(_QWORD *)(v74 + 24);
          sub_1188E0(v78);
          sub_1D38A0(a1, (__int64)&v324, &v357);
          v290.m128i_i32[0] = -22;
LABEL_171:
          if ( v387[0] )
          {
            sub_7E780(v387);
            if ( v387[0] )
              qfree();
          }
          if ( src )
          {
            *(_QWORD *)&v386 = 0;
            qfree();
          }
          v92 = v383;
          if ( v383 )
          {
            v93 = v384;
            if ( (_QWORD)v384 )
            {
              v94 = 0;
              v95 = 0;
              do
              {
                v96 = (_QWORD *)(v92 + v94);
                clear_tinfo_t();
                if ( *(_QWORD *)(v92 + v94 + 56) )
                {
                  v96[8] = 0;
                  qfree();
                }
                if ( v96[4] )
                {
                  v96[5] = 0;
                  qfree();
                }
                ++v95;
                v94 += 104;
                cleanup_argloc();
                v92 = v383;
              }
              while ( v93 != v95 );
            }
            *(_QWORD *)&v384 = 0;
            qfree();
          }
          if ( v381 )
          {
            *(_QWORD *)&v382 = 0;
            qfree();
          }
          if ( v378 )
          {
            *(_QWORD *)&v379 = 0;
            qfree();
          }
          qfree();
          if ( v375 )
          {
            *(_QWORD *)&v376 = 0;
            qfree();
          }
          if ( v373 )
          {
            *(_QWORD *)&v374 = 0;
            qfree();
          }
          if ( v371 )
          {
            *(_QWORD *)&v372 = 0;
            qfree();
          }
          if ( v368 )
          {
            *(_QWORD *)&v369 = 0;
            qfree();
          }
          if ( v357.m128i_i64[1] )
          {
            v358.m128i_i64[0] = 0;
            qfree();
          }
          if ( v355[0] )
          {
            sub_7E780(v355);
            if ( v355[0] )
              qfree();
          }
          if ( v353 )
          {
            *(_QWORD *)&v354 = 0;
            qfree();
          }
          v97 = v351;
          if ( v351 )
          {
            v98 = v352;
            if ( (_QWORD)v352 )
            {
              v99 = 0;
              v100 = 0;
              do
              {
                v101 = (_QWORD *)(v97 + v99);
                clear_tinfo_t();
                if ( *(_QWORD *)(v97 + v99 + 56) )
                {
                  v101[8] = 0;
                  qfree();
                }
                if ( v101[4] )
                {
                  v101[5] = 0;
                  qfree();
                }
                ++v100;
                v99 += 104;
                cleanup_argloc();
                v97 = v351;
              }
              while ( v98 != v100 );
            }
            *(_QWORD *)&v352 = 0;
            qfree();
          }
          if ( v349 )
          {
            *(_QWORD *)&v350 = 0;
            qfree();
          }
          if ( v346 )
          {
            *(_QWORD *)&v347 = 0;
            qfree();
          }
          qfree();
          if ( v342 )
          {
            *(_QWORD *)&v343 = 0;
            qfree();
          }
          if ( v340 )
          {
            *(_QWORD *)&v341 = 0;
            qfree();
          }
          if ( v338 )
          {
            *(_QWORD *)&v339 = 0;
            qfree();
          }
          if ( v335 )
          {
            *(_QWORD *)&v336 = 0;
            qfree();
          }
          if ( v324.m128i_i64[1] )
          {
            *(_QWORD *)&v325 = 0;
            qfree();
          }
          v102 = v321;
          v314 = off_4B0458;
          if ( v321 )
          {
            v103 = v322;
            if ( (_QWORD)v322 )
            {
              v104 = v290.m128i_i32[0];
              v105 = 0;
              do
              {
                v106 = (_QWORD *)(v102 + (v105 << 6));
                if ( v106[5] )
                {
                  v106[6] = 0;
                  qfree();
                }
                if ( v106[2] )
                {
                  v106[3] = 0;
                  qfree();
                }
                ++v105;
                v102 = v321;
              }
              while ( v103 != v105 );
              v290.m128i_i32[0] = v104;
            }
            *(_QWORD *)&v322 = 0;
            qfree();
          }
          if ( v316 )
          {
            *(_QWORD *)&v317 = 0;
            qfree();
          }
          qfree();
          if ( *(_QWORD *)&v295[0] )
          {
            *((_QWORD *)&v295[0] + 1) = 0;
            qfree();
          }
LABEL_58:
          if ( v430 )
          {
            sub_7E780((unsigned __int64 **)&v430);
            if ( v430 )
              qfree();
          }
          if ( v428 )
          {
            v429.m128i_i64[0] = 0;
            qfree();
          }
          v40 = v426;
          if ( v426 )
          {
            v41 = v427;
            if ( (_QWORD)v427 )
            {
              v42 = 0;
              v43 = 0;
              do
              {
                v44 = (_QWORD *)(v40 + v42);
                clear_tinfo_t();
                if ( *(_QWORD *)(v40 + v42 + 56) )
                {
                  v44[8] = 0;
                  qfree();
                }
                if ( v44[4] )
                {
                  v44[5] = 0;
                  qfree();
                }
                ++v43;
                v42 += 104;
                cleanup_argloc();
                v40 = v426;
              }
              while ( v41 != v43 );
            }
            *(_QWORD *)&v427 = 0;
            qfree();
          }
          if ( v424 )
          {
            v425.m128i_i64[0] = 0;
            qfree();
          }
          if ( v421 )
          {
            v422.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          if ( v418 )
          {
            v419.m128i_i64[0] = 0;
            qfree();
          }
          if ( v416 )
          {
            v417.m128i_i64[0] = 0;
            qfree();
          }
          if ( v414 )
          {
            v415.m128i_i64[0] = 0;
            qfree();
          }
          if ( v411 )
          {
            v412.m128i_i64[0] = 0;
            qfree();
          }
          if ( v400[1] )
          {
            v401.m128i_i64[0] = 0;
            qfree();
          }
          v29 = *(_DWORD *)(a1 + 64);
LABEL_30:
          sub_65BA0(a1, v287, v29);
          return v290.m128i_u32[0];
        }
        v274 = v65 <= *(_DWORD *)(v70 + 72) || (int)v287 > *(_DWORD *)(v70 + 72);
        if ( !v274 )
          goto LABEL_123;
        v62 = v282.m128i_i64[0];
        sub_120CC0(v290.m128i_i64[0], (unsigned __int8 *)v282.m128i_i64[0]);
        v76 = *v283;
        if ( !*v283 )
          goto LABEL_134;
        v77 = *v76 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v77 )
          goto LABEL_123;
        if ( (*(_BYTE *)(*v76 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_134;
        v62 = *(_QWORD *)(v71 + 32);
        while ( 1 )
        {
          v136 = *(_QWORD *)(v77 + 24);
          if ( v62 >= v136 )
            break;
          v77 = *(_QWORD *)(v77 + 8);
LABEL_305:
          if ( (*(_BYTE *)v77 & 2) != 0 )
            goto LABEL_134;
        }
        if ( v136 < v62 )
          break;
        if ( v76 != (unsigned __int64 *)v77 )
          goto LABEL_123;
LABEL_134:
        if ( *(_BYTE *)v290.m128i_i64[0] != 6
          || (v137 = v290.m128i_i64[0],
              sub_3346C0(*(_QWORD *)(a1 + 1504), v290.m128i_i64[0]),
              v138 = *(_QWORD *)(v137 + 8),
              v266 = v138,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) == v138)
          || v138 == -1 )
        {
LABEL_135:
          sub_62C20(a1, 0, (__int64)"%a: branch out of outlined function", *(double *)v52.m128i_i64);
          goto LABEL_136;
        }
        v265 = 0;
        v139 = v287;
        while ( 2 )
        {
          if ( v139 >= *(_DWORD *)(a1 + 64) )
          {
            if ( !under_debugger )
              sub_37DDE0(52719);
            goto LABEL_567;
          }
          v143 = *(_QWORD *)(a1 + 528);
          LODWORD(v285) = v139;
          v144 = *(_QWORD *)(v143 + 8LL * v139);
          v62 = *(_QWORD *)(v144 + 32);
          v145 = sub_32BBA0(a1);
          v142 = v285;
          if ( v266 != v145 )
          {
            v140 = *(_QWORD *)(v144 + 48);
            if ( !v140 || (v62 = *(_QWORD *)(v140 + 24), v141 = sub_32BBA0(a1), v142 = v285, v266 != v141) )
            {
LABEL_318:
              v139 = v142 + 1;
              if ( v65 == v139 )
                goto LABEL_539;
              continue;
            }
          }
          break;
        }
        if ( (*(_BYTE *)(v144 + 24) & 2) != 0 )
        {
          if ( v265 )
            v144 = v265;
          v265 = v144;
          goto LABEL_318;
        }
        v265 = v144;
LABEL_539:
        if ( !v265 )
          goto LABEL_135;
        v254 = (_BYTE *)v290.m128i_i64[0];
        *(_DWORD *)(v290.m128i_i64[0] + 8) = *(_DWORD *)(v265 + 72);
        *v254 = 7;
        LOBYTE(v285) = v274;
LABEL_123:
        sub_1188E0(v282.m128i_i64[0]);
LABEL_124:
        if ( v65 == ++v66 )
          goto LABEL_330;
        v68 = *(_DWORD *)(a1 + 64);
      }
      v77 = *(_QWORD *)(v77 + 16);
      goto LABEL_305;
    }
LABEL_330:
    sub_1D38A0(a1, (__int64)&v324, &v357);
    v149 = v358.m128i_i64[0];
    v150 = nullptr;
    v400[0] = (void *)v357.m128i_i64[0];
    if ( v358.m128i_i64[0] )
    {
      v150 = (void *)qalloc_or_throw();
      memcpy(v150, (const void *)v357.m128i_i64[1], 16 * v149);
    }
    v151 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v149, (__m128i)(unsigned __int64)v149);
    if ( v400[1] )
    {
      v290 = v151;
      v401.m128i_i64[0] = 0;
      qfree();
      v151 = _mm_load_si128(&v290);
    }
    v401 = v151;
    v152 = _mm_loadu_si128(&v361);
    v153 = v369;
    v400[1] = v150;
    v154 = nullptr;
    v403 = v360;
    v404 = v152;
    v155 = _mm_loadu_si128(&v362);
    v156 = _mm_loadh_ps((const double *)&v359 + 1);
    v406 = v363;
    v405 = v155;
    v157 = _mm_loadu_si128(&v365);
    v407 = v364;
    v408 = v157;
    v158 = _mm_loadu_si128(&v366);
    v410 = v367;
    v402 = (__m128i)v156;
    v409 = v158;
    if ( (_QWORD)v369 )
    {
      v154 = (void *)qalloc_or_throw();
      memcpy(v154, v368, 40 * v153);
    }
    v159 = _mm_unpacklo_epi64((__m128i)v153, (__m128i)v153);
    if ( v411 )
    {
      v290 = v159;
      v412.m128i_i64[0] = 0;
      qfree();
      v159 = _mm_load_si128(&v290);
    }
    v160 = v372;
    v411 = v154;
    v161 = nullptr;
    v412 = v159;
    v413 = v370;
    if ( (_QWORD)v372 )
    {
      v161 = (void *)qalloc_or_throw();
      memcpy(v161, v371, 16 * v160);
    }
    v162 = _mm_unpacklo_epi64((__m128i)v160, (__m128i)v160);
    if ( v414 )
    {
      v290 = v162;
      v415.m128i_i64[0] = 0;
      qfree();
      v162 = _mm_load_si128(&v290);
    }
    v163 = v374;
    v414 = v161;
    v164 = nullptr;
    v415 = v162;
    if ( (_QWORD)v374 )
    {
      v164 = (void *)qalloc_or_throw();
      memcpy(v164, v373, 16 * v163);
    }
    v165 = _mm_unpacklo_epi64((__m128i)v163, (__m128i)v163);
    if ( v416 )
    {
      v290 = v165;
      v417.m128i_i64[0] = 0;
      qfree();
      v165 = _mm_load_si128(&v290);
    }
    v166 = v376;
    v416 = v164;
    v167 = nullptr;
    v417 = v165;
    if ( (_QWORD)v376 )
    {
      v167 = (void *)qalloc_or_throw();
      memcpy(v167, v375, 16 * v166);
    }
    v168 = _mm_unpacklo_epi64((__m128i)v166, (__m128i)v166);
    if ( v418 )
    {
      v290 = v168;
      v419.m128i_i64[0] = 0;
      qfree();
      v168 = _mm_load_si128(&v290);
    }
    v418 = v167;
    v290.m128i_i64[0] = (__int64)v420;
    v419 = v168;
    sub_60550(v420, v377);
    v169 = v379;
    v170 = nullptr;
    if ( (_QWORD)v379 )
    {
      v170 = (void *)qalloc_or_throw();
      memcpy(v170, v378, 16 * v169);
    }
    v171 = _mm_unpacklo_epi64((__m128i)v169, (__m128i)v169);
    if ( v421 )
    {
      v282 = v171;
      v422.m128i_i64[0] = 0;
      qfree();
      v171 = _mm_load_si128(&v282);
    }
    v172 = v382;
    v421 = v170;
    v173 = nullptr;
    v422 = v171;
    v423 = v380;
    if ( (_QWORD)v382 )
    {
      v173 = (void *)qalloc_or_throw();
      memcpy(v173, v381, 16 * v172);
    }
    v174 = _mm_unpacklo_epi64((__m128i)v172, (__m128i)v172);
    if ( v424 )
    {
      v282 = v174;
      v425.m128i_i64[0] = 0;
      qfree();
      v174 = _mm_load_si128(&v282);
    }
    v424 = v173;
    v425 = v174;
    sub_1CFBA0(&v426, (__int64)&v383);
    v175 = v386;
    v176 = nullptr;
    if ( (_QWORD)v386 )
    {
      v176 = (void *)qalloc_or_throw();
      memcpy(v176, src, 4 * v175);
    }
    v177 = _mm_unpacklo_epi64((__m128i)v175, (__m128i)v175);
    if ( v428 )
    {
      v282 = v177;
      v429.m128i_i64[0] = 0;
      qfree();
      v177 = _mm_load_si128(&v282);
    }
    v428 = v176;
    v429 = v177;
    sub_1D3690((__int64 *)&v297, (__int64)v387);
    v178 = v430;
    v430 = v297;
    v179 = v431;
    v297 = v178;
    v431 = v298;
    v298 = v179;
    if ( !v178 )
    {
LABEL_375:
      v432 = _mm_load_si128(&v388);
      v433 = _mm_load_si128(&v389);
      v434 = _mm_load_si128(&v390);
      v435 = _mm_load_si128(&v391);
      v436 = _mm_load_si128(&v392);
      v437 = _mm_load_si128(&v393);
      v438 = _mm_load_si128(&v394);
      v439 = _mm_load_si128(&v395);
      v440 = _mm_load_si128(&v396);
      v441 = _mm_load_si128(&v397);
      v442 = _mm_load_si128(&v398);
      v443 = _mm_load_si128(&v399);
      if ( v323 <= 0 )
      {
        v187 = 0;
      }
      else
      {
        v186 = 0;
        v187 = 0;
        do
        {
          if ( sub_605B0(v291, v186) )
            v187 = *(_QWORD *)(v321 + (v186 << 6) + 8) + v187 - *(_QWORD *)(v321 + (v186 << 6));
          ++v186;
        }
        while ( v323 > (int)v186 );
      }
      v444 = v187;
      v188.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v287), _mm_cvtsi32_si128(v65)).m128i_u64[0];
      v445 = v188.m128i_i64[0];
      if ( (a6 & 2) == 0 )
      {
        v189 = v401.m128i_i64[0];
        v449 = 0;
        v447 = v277;
        v448 = (__m128i)(unsigned __int64)v400[0];
        if ( v401.m128i_i64[0] )
        {
          v448.m128i_i64[1] = qalloc_or_throw();
          v449.m128i_i64[1] = v189;
          memcpy((void *)v448.m128i_i64[1], v400[1], 16 * v189);
          v449.m128i_i64[0] = v189;
        }
        v190 = _mm_load_si128(&v402);
        v459 = nullptr;
        v191 = v412.m128i_i64[0];
        v450 = v190;
        v192 = _mm_loadu_si128(&v404);
        v451 = v403;
        v452 = v192;
        v193 = _mm_loadu_si128(&v405);
        v454 = v406;
        v453 = v193;
        v194 = _mm_loadu_si128(&v408);
        v455 = v407;
        v456 = v194;
        v195 = _mm_loadu_si128(&v409);
        v458 = v410;
        v457 = v195;
        v460 = 0;
        if ( v412.m128i_i64[0] )
        {
          v459 = (void *)qalloc_or_throw();
          v460.m128i_i64[1] = v191;
          memcpy(v459, v411, 40 * v191);
          v460.m128i_i64[0] = v191;
        }
        v196 = v415.m128i_i64[0];
        v462 = nullptr;
        v463 = 0;
        v461 = v413;
        if ( v415.m128i_i64[0] )
        {
          v462 = (void *)qalloc_or_throw();
          v463.m128i_i64[1] = v196;
          memcpy(v462, v414, 16 * v196);
          v463.m128i_i64[0] = v196;
        }
        v197 = v417.m128i_i64[0];
        v464 = nullptr;
        v465 = 0;
        if ( v417.m128i_i64[0] )
        {
          v464 = (void *)qalloc_or_throw();
          v465.m128i_i64[1] = v197;
          memcpy(v464, v416, 16 * v197);
          v465.m128i_i64[0] = v197;
        }
        v198 = v419.m128i_i64[0];
        v466 = nullptr;
        v467 = 0;
        if ( v419.m128i_i64[0] )
        {
          v466 = (void *)qalloc_or_throw();
          v467.m128i_i64[1] = v198;
          memcpy(v466, v418, 16 * v198);
          v467.m128i_i64[0] = v198;
        }
        sub_5FC80(v468, v290.m128i_i64[0]);
        v199 = v422.m128i_i64[0];
        v469 = nullptr;
        v470 = 0;
        if ( v422.m128i_i64[0] )
        {
          v469 = (void *)qalloc_or_throw();
          v470.m128i_i64[1] = v199;
          memcpy(v469, v421, 16 * v199);
          v470.m128i_i64[0] = v199;
        }
        v200 = v425.m128i_i64[0];
        v472 = nullptr;
        v473 = 0;
        v471 = v423;
        if ( v425.m128i_i64[0] )
        {
          v472 = (void *)qalloc_or_throw();
          v473.m128i_i64[1] = v200;
          memcpy(v472, v424, 16 * v200);
          v473.m128i_i64[0] = v200;
        }
        v474 = 0;
        v475 = 0;
        v282.m128i_i64[0] = v427;
        if ( (_QWORD)v427 )
        {
          v255 = v427;
          v474 = qalloc_or_throw();
          v256 = v474;
          v257 = 0;
          v475.m128i_i64[1] = v255;
          v290.m128i_i64[0] = 0;
          while ( 1 )
          {
            v259 = v290.m128i_i64[0] + v256;
            v260 = v426 + v290.m128i_i64[0];
            *(_DWORD *)v259 = 0;
            v261 = v260;
            copy_argloc();
            *(_QWORD *)(v259 + 16) = *(_QWORD *)(v261 + 16);
            v262 = *(_DWORD *)(v261 + 24);
            *(_QWORD *)(v259 + 32) = 0;
            *(_DWORD *)(v259 + 24) = v262;
            *(_OWORD *)(v259 + 40) = 0;
            if ( *(_QWORD *)(v261 + 40) )
            {
              nb = *(_QWORD *)(v261 + 40);
              v263 = (void *)qalloc_or_throw();
              *(_QWORD *)(v259 + 32) = v263;
              *(_QWORD *)(v259 + 48) = nb;
              memcpy(v263, *(const void **)(v261 + 32), nb);
              *(_QWORD *)(v259 + 40) = nb;
            }
            *(_QWORD *)(v259 + 56) = 0;
            *(_OWORD *)(v259 + 64) = 0;
            if ( *(_QWORD *)(v261 + 64) )
            {
              na = *(_QWORD *)(v261 + 64);
              v264 = (void *)qalloc_or_throw();
              *(_QWORD *)(v259 + 56) = v264;
              *(_QWORD *)(v259 + 72) = na;
              memcpy(v264, *(const void **)(v261 + 56), na);
              *(_QWORD *)(v259 + 64) = na;
            }
            *(_QWORD *)(v259 + 80) = 0;
            copy_tinfo_t();
            v258 = *(_QWORD *)(v261 + 88);
            v290.m128i_i64[0] += 104;
            ++v257;
            *(_QWORD *)(v259 + 88) = v258;
            *(_QWORD *)(v259 + 96) = *(_QWORD *)(v261 + 96);
            if ( v282.m128i_i64[0] == v257 )
              break;
            v256 = v474;
          }
          v475.m128i_i64[0] = v282.m128i_i64[0];
        }
        v201 = v429.m128i_i64[0];
        v476 = nullptr;
        v477 = 0;
        if ( v429.m128i_i64[0] )
        {
          v476 = (void *)qalloc_or_throw();
          v477.m128i_i64[1] = v201;
          memcpy(v476, v428, 4 * v201);
          v477.m128i_i64[0] = v201;
        }
        v202 = &v478;
        sub_1D3690((__int64 *)&v478, (__int64)&v430);
        v480 = _mm_load_si128(&v432);
        v203 = _mm_load_si128(&v433);
        v492 = v444;
        v481 = v203;
        v204 = _mm_load_si128(&v434);
        v493 = v445;
        v482 = v204;
        v205 = _mm_load_si128(&v435);
        v494 = v446;
        v483 = v205;
        v206 = _mm_load_si128(&v436);
        v495 = v447;
        v484 = v206;
        v485 = _mm_load_si128(&v437);
        v486 = _mm_load_si128(&v438);
        v487 = _mm_load_si128(&v439);
        v488 = _mm_load_si128(&v440);
        v489 = _mm_load_si128(&v441);
        v490 = _mm_load_si128(&v442);
        v491 = _mm_load_si128(&v443);
        v207 = _mm_loadu_si128(&v448);
        v208 = _mm_loadu_si128(&v449);
        v448.m128i_i64[1] = 0;
        v497 = v208;
        v209 = _mm_loadu_si128(&v450);
        v499 = v451;
        v498 = v209;
        v210 = _mm_load_si128(&v452);
        v502 = v454;
        v500 = v210;
        v211 = _mm_load_si128(&v453);
        v503 = v455;
        v501 = v211;
        v212 = _mm_load_si128(&v456);
        v506 = v458;
        v504 = v212;
        v213 = _mm_load_si128(&v457);
        v507 = v459;
        v505 = v213;
        v214 = _mm_load_si128(&v460);
        v496 = v207;
        v508 = v214;
        v459 = nullptr;
        v509 = v461;
        v449 = 0;
        v460 = 0;
        v215 = _mm_load_si128(&v463);
        v463 = 0;
        v510 = v462;
        v511 = v215;
        v216 = _mm_loadu_si128(&v465);
        v512 = v464;
        v513 = v216;
        v217 = _mm_load_si128(&v467);
        v462 = nullptr;
        v464 = nullptr;
        v514 = v466;
        v466 = nullptr;
        v465 = 0;
        v515 = v217;
        v467 = 0;
        sub_5FC80(&v516, (__int64)v468);
        v218 = v469;
        v219 = _mm_loadu_si128(&v473);
        v469 = nullptr;
        v220 = _mm_loadu_si128(&v470);
        v517 = v218;
        v521 = v219;
        v221 = _mm_load_si128(&v475);
        v519 = v471;
        v523 = v221;
        v222 = _mm_loadu_si128(&v477);
        v520 = v472;
        v518 = v220;
        v522 = v474;
        v472 = nullptr;
        v524 = v476;
        v474 = 0;
        v526[0] = v478;
        v476 = nullptr;
        v526[1] = v479;
        v478 = nullptr;
        v479 = nullptr;
        v470 = 0;
        v473 = 0;
        v475 = 0;
        v525 = v222;
        v477 = 0;
        v527 = _mm_loadu_si128(&v480);
        v223 = _mm_loadu_si128(&v481);
        v539 = v492;
        v528 = v223;
        v224 = _mm_loadu_si128(&v482);
        v540 = v493;
        v529 = v224;
        v225 = _mm_loadu_si128(&v483);
        v541 = v494;
        v530 = v225;
        v531 = _mm_loadu_si128(&v484);
        v532 = _mm_loadu_si128(&v485);
        v533 = _mm_loadu_si128(&v486);
        v534 = _mm_loadu_si128(&v487);
        v535 = _mm_loadu_si128(&v488);
        v536 = _mm_loadu_si128(&v489);
        v537 = _mm_loadu_si128(&v490);
        v188 = _mm_loadu_si128(&v491);
        v538 = v188;
        v275 = (unsigned __int64 *)sub_1D6330((__m128i *)v283, &v495);
        if ( v526[0] )
        {
          sub_7E780(v526);
          if ( v526[0] )
            qfree();
        }
        if ( v524 )
        {
          v525.m128i_i64[0] = 0;
          qfree();
        }
        v226 = v522;
        if ( v522 )
        {
          v227 = v523.m128i_i64[0];
          if ( v523.m128i_i64[0] )
          {
            v282.m128i_i64[0] = (__int64)&v478;
            v228 = 0;
            v290.m128i_i64[0] = 0;
            do
            {
              v229 = (_QWORD *)(v226 + v290.m128i_i64[0]);
              clear_tinfo_t();
              if ( v229[7] )
              {
                v229[8] = 0;
                qfree();
              }
              if ( v229[4] )
              {
                v229[5] = 0;
                qfree();
              }
              ++v228;
              cleanup_argloc();
              v290.m128i_i64[0] += 104;
              v226 = v522;
            }
            while ( v227 != v228 );
            v202 = (unsigned __int64 **)v282.m128i_i64[0];
          }
          v523.m128i_i64[0] = 0;
          qfree();
        }
        if ( v520 )
        {
          v521.m128i_i64[0] = 0;
          qfree();
        }
        if ( v517 )
        {
          v518.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
        if ( v514 )
        {
          v515.m128i_i64[0] = 0;
          qfree();
        }
        if ( v512 )
        {
          v513.m128i_i64[0] = 0;
          qfree();
        }
        if ( v510 )
        {
          v511.m128i_i64[0] = 0;
          qfree();
        }
        if ( v507 )
        {
          v508.m128i_i64[0] = 0;
          qfree();
        }
        if ( v496.m128i_i64[1] )
        {
          v497.m128i_i64[0] = 0;
          qfree();
        }
        if ( v478 )
        {
          sub_7E780(v202);
          if ( v478 )
            qfree();
        }
        if ( v476 )
        {
          v477.m128i_i64[0] = 0;
          qfree();
        }
        v230 = v474;
        if ( v474 )
        {
          v231 = v475.m128i_i64[0];
          if ( v475.m128i_i64[0] )
          {
            v232 = 0;
            v290.m128i_i64[0] = 0;
            do
            {
              v233 = (_QWORD *)(v230 + v290.m128i_i64[0]);
              clear_tinfo_t();
              if ( v233[7] )
              {
                v233[8] = 0;
                qfree();
              }
              if ( v233[4] )
              {
                v233[5] = 0;
                qfree();
              }
              ++v232;
              cleanup_argloc();
              v290.m128i_i64[0] += 104;
              v230 = v474;
            }
            while ( v231 != v232 );
          }
          v475.m128i_i64[0] = 0;
          qfree();
        }
        if ( v472 )
        {
          v473.m128i_i64[0] = 0;
          qfree();
        }
        if ( v469 )
        {
          v470.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
        if ( v466 )
        {
          v467.m128i_i64[0] = 0;
          qfree();
        }
        if ( v464 )
        {
          v465.m128i_i64[0] = 0;
          qfree();
        }
        if ( v462 )
        {
          v463.m128i_i64[0] = 0;
          qfree();
        }
        if ( v459 )
        {
          v460.m128i_i64[0] = 0;
          qfree();
        }
        if ( v448.m128i_i64[1] )
        {
          v449.m128i_i64[0] = 0;
          qfree();
        }
      }
      sub_62C20(
        a1,
        0,
        (__int64)"inlined callee %a from block %d into blocks %d..%d",
        *(double *)v188.m128i_i64,
        v277,
        v288,
        v287);
      if ( v387[0] )
      {
        sub_7E780(v387);
        if ( v387[0] )
          qfree();
      }
      if ( src )
      {
        *(_QWORD *)&v386 = 0;
        qfree();
      }
      v234 = v383;
      if ( v383 )
      {
        v235 = v384;
        if ( (_QWORD)v384 )
        {
          v236 = 0;
          v237 = 0;
          do
          {
            v238 = (_QWORD *)(v234 + v237);
            clear_tinfo_t();
            if ( *(_QWORD *)(v234 + v237 + 56) )
            {
              v238[8] = 0;
              qfree();
            }
            if ( v238[4] )
            {
              v238[5] = 0;
              qfree();
            }
            ++v236;
            cleanup_argloc();
            v234 = v383;
            v237 += 104;
          }
          while ( v235 != v236 );
        }
        *(_QWORD *)&v384 = 0;
        qfree();
      }
      if ( v381 )
      {
        *(_QWORD *)&v382 = 0;
        qfree();
      }
      if ( v378 )
      {
        *(_QWORD *)&v379 = 0;
        qfree();
      }
      qfree();
      if ( v375 )
      {
        *(_QWORD *)&v376 = 0;
        qfree();
      }
      if ( v373 )
      {
        *(_QWORD *)&v374 = 0;
        qfree();
      }
      if ( v371 )
      {
        *(_QWORD *)&v372 = 0;
        qfree();
      }
      if ( v368 )
      {
        *(_QWORD *)&v369 = 0;
        qfree();
      }
      if ( v357.m128i_i64[1] )
      {
        v358.m128i_i64[0] = 0;
        qfree();
      }
      if ( v355[0] )
      {
        sub_7E780(v355);
        if ( v355[0] )
          qfree();
      }
      if ( v353 )
      {
        *(_QWORD *)&v354 = 0;
        qfree();
      }
      v239 = v351;
      if ( v351 )
      {
        v240 = v352;
        if ( (_QWORD)v352 )
        {
          v241 = 0;
          v242 = 0;
          do
          {
            v243 = (_QWORD *)(v239 + v242);
            clear_tinfo_t();
            if ( *(_QWORD *)(v239 + v242 + 56) )
            {
              v243[8] = 0;
              qfree();
            }
            if ( v243[4] )
            {
              v243[5] = 0;
              qfree();
            }
            ++v241;
            cleanup_argloc();
            v239 = v351;
            v242 += 104;
          }
          while ( v240 != v241 );
        }
        *(_QWORD *)&v352 = 0;
        qfree();
      }
      if ( v349 )
      {
        *(_QWORD *)&v350 = 0;
        qfree();
      }
      if ( v346 )
      {
        *(_QWORD *)&v347 = 0;
        qfree();
      }
      qfree();
      if ( v342 )
      {
        *(_QWORD *)&v343 = 0;
        qfree();
      }
      if ( v340 )
      {
        *(_QWORD *)&v341 = 0;
        qfree();
      }
      if ( v338 )
      {
        *(_QWORD *)&v339 = 0;
        qfree();
      }
      if ( v335 )
      {
        *(_QWORD *)&v336 = 0;
        qfree();
      }
      if ( v324.m128i_i64[1] )
      {
        *(_QWORD *)&v325 = 0;
        qfree();
      }
      v244 = v321;
      v314 = off_4B0458;
      if ( v321 )
      {
        v245 = v322;
        if ( (_QWORD)v322 )
        {
          v246 = 0;
          do
          {
            v247 = (_QWORD *)(v244 + (v246 << 6));
            if ( v247[5] )
            {
              v247[6] = 0;
              qfree();
            }
            if ( v247[2] )
            {
              v247[3] = 0;
              qfree();
            }
            v244 = v321;
            ++v246;
          }
          while ( v245 != v246 );
        }
        *(_QWORD *)&v322 = 0;
        qfree();
      }
      if ( v316 )
      {
        *(_QWORD *)&v317 = 0;
        qfree();
      }
      qfree();
      v9 = *(_QWORD *)&v295[0];
      if ( *(_QWORD *)&v295[0] )
      {
        *((_QWORD *)&v295[0] + 1) = 0;
        qfree();
      }
      if ( v275 != *v283 )
      {
        v17 = (unsigned __int64)v275;
        v31 = 1;
        goto LABEL_36;
      }
      v32 = v400;
      v31 = 1;
      goto LABEL_37;
    }
    v180 = (unsigned __int64)*v178;
    if ( !v179 )
    {
      *v178 = (__int64 (__fastcall *)())((unsigned __int64)*v178 & 3 | (unsigned __int64)v178 & 0xFFFFFFFFFFFFFFFCLL);
      v252 = v297;
      v253 = (__m128i)(unsigned __int64)v297;
      *v297 = (__int64 (__fastcall *)())((unsigned __int64)*v297 & 0xFFFFFFFFFFFFFFFELL);
      *(__m128i *)(v252 + 1) = _mm_unpacklo_epi64(v253, v253);
      *v297 = (__int64 (__fastcall *)())((unsigned __int64)*v297 | 2);
LABEL_373:
      if ( v297 )
        qfree();
      goto LABEL_375;
    }
    v181 = v180 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v180 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_372:
      *v178 = (__int64 (__fastcall *)())(v180 & 3 | (unsigned __int64)v178 & 0xFFFFFFFFFFFFFFFCLL);
      v184 = v297;
      v185 = (__m128i)(unsigned __int64)v297;
      *v297 = (__int64 (__fastcall *)())((unsigned __int64)*v297 & 0xFFFFFFFFFFFFFFFELL);
      *(__m128i *)(v184 + 1) = _mm_unpacklo_epi64(v185, v185);
      *v297 = (__int64 (__fastcall *)())((unsigned __int64)*v297 | 2);
      v298 = 0;
      goto LABEL_373;
    }
    v182 = *(__int64 **)(v181 + 8);
    if ( (*(_BYTE *)v182 & 2) != 0 )
    {
      v183 = *(__int64 **)(v181 + 16);
      if ( (*(_BYTE *)v183 & 2) != 0 )
        goto LABEL_554;
    }
    else
    {
      sub_1D0120(v182);
      v183 = *(__int64 **)(v181 + 16);
      if ( (*(_BYTE *)v183 & 2) != 0 )
        goto LABEL_368;
    }
    sub_1D0120(v183);
LABEL_368:
    if ( (*(_BYTE *)v181 & 2) != 0 )
    {
LABEL_369:
      if ( v180 > 3 )
        qfree();
      v178 = v297;
      v180 = (unsigned __int64)*v297;
      goto LABEL_372;
    }
LABEL_554:
    if ( *(_QWORD *)(v181 + 24) )
    {
      *(_QWORD *)(v181 + 32) = 0;
      qfree();
    }
    *(_QWORD *)v181 |= 2uLL;
    goto LABEL_369;
  }
  return v290.m128i_u32[0];
}

