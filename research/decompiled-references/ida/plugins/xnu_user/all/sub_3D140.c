__int64 __fastcall sub_3D140(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  const char *file_ext; // rax
  const char *v5; // r12
  size_t v6; // rax
  size_t v7; // r13
  const char *v8; // r12
  __int64 v10; // r13
  __int64 v11; // rcx
  size_t v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rax
  void *v15; // rax
  const void *v16; // rsi
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rsi
  __m128i v20; // xmm0
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // rdi
  char *v27; // rdi
  size_t v28; // r15
  bool v29; // zf
  __int64 v30; // r13
  __int64 v31; // rbx
  int v32; // r12d
  int v33; // eax
  __int64 v34; // r15
  signed int v35; // eax
  signed int v36; // r12d
  __int64 v37; // r9
  __int64 v38; // r9
  size_t v39; // r10
  __m128i v40; // xmm0
  unsigned __int64 v41; // r12
  size_t v42; // r9
  unsigned __int64 v43; // r12
  size_t v44; // r9
  unsigned __int64 v45; // r12
  size_t v46; // r9
  unsigned __int64 v47; // r12
  size_t v48; // r9
  int v49; // r12d
  __int64 (*v50)(); // rax
  __int64 v51; // r9
  __int64 i; // r11
  __int64 v53; // r10
  __int64 v54; // rdx
  void *v55; // rax
  _QWORD *v56; // r9
  size_t v57; // rdx
  const void **v58; // r10
  size_t v59; // rbx
  void *v60; // rax
  const void *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // r8
  __int64 v65; // r15
  __m128i v66; // xmm5
  __m128i v67; // xmm11
  __int64 v68; // r9
  __m128i v69; // xmm4
  __int64 v70; // r13
  __int64 v71; // r12
  __m128i v72; // xmm10
  __m128i v73; // xmm3
  __m128i v74; // xmm9
  __m128i v75; // xmm2
  __m128i v76; // xmm8
  __int64 v77; // rbp
  __m128i v78; // xmm1
  __m128i v79; // xmm7
  __m128i v80; // xmm0
  __m128i v81; // xmm6
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // r8
  __int64 v86; // r15
  __m128i v87; // xmm5
  __m128i v88; // xmm11
  __int64 v89; // r9
  __m128i v90; // xmm4
  __int64 v91; // r13
  __int64 v92; // r12
  __m128i v93; // xmm10
  __m128i v94; // xmm3
  __m128i v95; // xmm9
  __m128i v96; // xmm2
  __m128i v97; // xmm8
  __int64 v98; // rbp
  __m128i v99; // xmm1
  __m128i v100; // xmm7
  __m128i v101; // xmm0
  __m128i v102; // xmm6
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rsi
  __int64 v106; // r8
  __int64 v107; // r15
  __m128i v108; // xmm5
  __m128i v109; // xmm11
  __int64 v110; // r9
  __m128i v111; // xmm4
  __int64 v112; // r13
  __int64 v113; // r12
  __m128i v114; // xmm10
  __m128i v115; // xmm3
  __m128i v116; // xmm9
  __m128i v117; // xmm2
  __m128i v118; // xmm8
  __int64 v119; // rbp
  __m128i v120; // xmm1
  __m128i v121; // xmm7
  __m128i v122; // xmm0
  __m128i v123; // xmm6
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rsi
  __int64 v127; // r8
  __int64 v128; // r15
  __m128i v129; // xmm5
  __m128i v130; // xmm11
  __int64 v131; // r9
  __m128i v132; // xmm4
  __int64 v133; // r13
  __int64 v134; // r12
  __m128i v135; // xmm10
  __m128i v136; // xmm3
  __m128i v137; // xmm9
  __m128i v138; // xmm2
  __m128i v139; // xmm8
  __int64 v140; // rbp
  __m128i v141; // xmm1
  __m128i v142; // xmm7
  __m128i v143; // xmm0
  __m128i v144; // xmm6
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rsi
  __int64 v148; // r8
  __int64 v149; // r15
  __m128i v150; // xmm5
  __m128i v151; // xmm11
  __int64 v152; // r9
  __m128i v153; // xmm4
  __int64 v154; // r13
  __int64 v155; // r12
  __m128i v156; // xmm10
  __m128i v157; // xmm3
  __m128i v158; // xmm9
  __m128i v159; // xmm2
  __m128i v160; // xmm8
  __int64 v161; // rbp
  __m128i v162; // xmm1
  __m128i v163; // xmm7
  __m128i v164; // xmm0
  __m128i v165; // xmm6
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rsi
  __int64 v169; // r8
  __int64 v170; // r15
  __m128i v171; // xmm5
  __m128i v172; // xmm11
  __int64 v173; // r9
  __m128i v174; // xmm4
  __int64 v175; // r13
  __int64 v176; // r12
  __m128i v177; // xmm10
  __m128i v178; // xmm3
  __m128i v179; // xmm9
  __m128i v180; // xmm2
  __m128i v181; // xmm8
  __int64 v182; // rbp
  __m128i v183; // xmm1
  __m128i v184; // xmm7
  __m128i v185; // xmm0
  __m128i v186; // xmm6
  __int64 v187; // rax
  void *v188; // rax
  const void *v189; // r10
  void *v190; // rax
  const void *v191; // r10
  void *v192; // rax
  const void *v193; // r10
  void *v194; // rax
  const void *v195; // r10
  void *v196; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rax
  signed int v204; // [rsp+8h] [rbp-840h]
  __m128i v205; // [rsp+10h] [rbp-838h] BYREF
  __int64 *v206; // [rsp+20h] [rbp-828h]
  __int64 *v207; // [rsp+28h] [rbp-820h]
  __int64 *v208; // [rsp+30h] [rbp-818h]
  __m128i v209; // [rsp+38h] [rbp-810h] BYREF
  __m128i v210; // [rsp+48h] [rbp-800h] BYREF
  __m128i n; // [rsp+58h] [rbp-7F0h] BYREF
  __m128i v212; // [rsp+68h] [rbp-7E0h] BYREF
  __m128i v213; // [rsp+78h] [rbp-7D0h] BYREF
  __m128i v214; // [rsp+88h] [rbp-7C0h] BYREF
  __int64 *v215; // [rsp+98h] [rbp-7B0h]
  __m128i v216; // [rsp+A0h] [rbp-7A8h] BYREF
  void *dest; // [rsp+B0h] [rbp-798h] BYREF
  __int128 v218; // [rsp+B8h] [rbp-790h]
  unsigned __int64 v219; // [rsp+C8h] [rbp-780h]
  __int64 v220; // [rsp+D0h] [rbp-778h]
  void *v221; // [rsp+D8h] [rbp-770h] BYREF
  __int128 v222; // [rsp+E0h] [rbp-768h]
  void *v223; // [rsp+F0h] [rbp-758h] BYREF
  __int128 v224; // [rsp+F8h] [rbp-750h]
  void *v225; // [rsp+108h] [rbp-740h] BYREF
  __int128 v226; // [rsp+110h] [rbp-738h]
  void *v227; // [rsp+120h] [rbp-728h] BYREF
  __int128 v228; // [rsp+128h] [rbp-720h]
  __int64 v229; // [rsp+140h] [rbp-708h] BYREF
  __int128 v230; // [rsp+148h] [rbp-700h]
  __int64 v231; // [rsp+158h] [rbp-6F0h] BYREF
  __int128 v232; // [rsp+160h] [rbp-6E8h]
  __int64 v233; // [rsp+170h] [rbp-6D8h]
  __int128 v234; // [rsp+178h] [rbp-6D0h]
  __int64 v235; // [rsp+188h] [rbp-6C0h]
  __int128 v236; // [rsp+190h] [rbp-6B8h]
  __int64 v237; // [rsp+1A0h] [rbp-6A8h]
  __int128 v238; // [rsp+1A8h] [rbp-6A0h]
  __int64 v239; // [rsp+1B8h] [rbp-690h]
  __int128 v240; // [rsp+1C0h] [rbp-688h]
  __int64 v241; // [rsp+1D0h] [rbp-678h] BYREF
  __int128 v242; // [rsp+1D8h] [rbp-670h]
  __int64 v243; // [rsp+1E8h] [rbp-660h] BYREF
  __int128 v244; // [rsp+1F0h] [rbp-658h]
  __int64 v245; // [rsp+200h] [rbp-648h]
  __int128 v246; // [rsp+208h] [rbp-640h]
  __int64 v247; // [rsp+218h] [rbp-630h]
  __int128 v248; // [rsp+220h] [rbp-628h]
  __int64 v249; // [rsp+230h] [rbp-618h]
  __int128 v250; // [rsp+238h] [rbp-610h]
  __int64 v251; // [rsp+248h] [rbp-600h]
  __int128 v252; // [rsp+250h] [rbp-5F8h]
  __int64 v253; // [rsp+260h] [rbp-5E8h] BYREF
  __int128 v254; // [rsp+268h] [rbp-5E0h]
  __int64 v255; // [rsp+278h] [rbp-5D0h] BYREF
  __int128 v256; // [rsp+280h] [rbp-5C8h]
  __int64 v257; // [rsp+290h] [rbp-5B8h]
  __int128 v258; // [rsp+298h] [rbp-5B0h]
  __int64 v259; // [rsp+2A8h] [rbp-5A0h]
  __int128 v260; // [rsp+2B0h] [rbp-598h]
  __int64 v261; // [rsp+2C0h] [rbp-588h]
  __int128 v262; // [rsp+2C8h] [rbp-580h]
  __int64 v263; // [rsp+2D8h] [rbp-570h]
  __int128 v264; // [rsp+2E0h] [rbp-568h]
  __int64 v265; // [rsp+2F0h] [rbp-558h] BYREF
  __int128 v266; // [rsp+2F8h] [rbp-550h]
  __int64 v267; // [rsp+308h] [rbp-540h] BYREF
  __int128 v268; // [rsp+310h] [rbp-538h]
  __int64 v269; // [rsp+320h] [rbp-528h]
  __int128 v270; // [rsp+328h] [rbp-520h]
  __int64 v271; // [rsp+338h] [rbp-510h]
  __int128 v272; // [rsp+340h] [rbp-508h]
  __int64 v273; // [rsp+350h] [rbp-4F8h]
  __int128 v274; // [rsp+358h] [rbp-4F0h]
  __int64 v275; // [rsp+368h] [rbp-4E0h]
  __int128 v276; // [rsp+370h] [rbp-4D8h]
  __int64 v277; // [rsp+380h] [rbp-4C8h] BYREF
  __int128 v278; // [rsp+388h] [rbp-4C0h]
  __int64 v279; // [rsp+398h] [rbp-4B0h] BYREF
  __int128 v280; // [rsp+3A0h] [rbp-4A8h]
  __int64 v281; // [rsp+3B0h] [rbp-498h]
  __int128 v282; // [rsp+3B8h] [rbp-490h]
  __int64 v283; // [rsp+3C8h] [rbp-480h]
  __int128 v284; // [rsp+3D0h] [rbp-478h]
  __int64 v285; // [rsp+3E0h] [rbp-468h]
  __int128 v286; // [rsp+3E8h] [rbp-460h]
  __int64 v287; // [rsp+3F8h] [rbp-450h]
  __int128 v288; // [rsp+400h] [rbp-448h]
  __int64 v289; // [rsp+410h] [rbp-438h] BYREF
  __int128 v290; // [rsp+418h] [rbp-430h]
  __int64 v291; // [rsp+428h] [rbp-420h] BYREF
  __int128 v292; // [rsp+430h] [rbp-418h]
  __int64 v293; // [rsp+440h] [rbp-408h]
  __int128 v294; // [rsp+448h] [rbp-400h]
  __int64 v295; // [rsp+458h] [rbp-3F0h]
  __int128 v296; // [rsp+460h] [rbp-3E8h]
  __int64 v297; // [rsp+470h] [rbp-3D8h]
  __int128 v298; // [rsp+478h] [rbp-3D0h]
  __int64 v299; // [rsp+488h] [rbp-3C0h]
  __int128 v300; // [rsp+490h] [rbp-3B8h]
  __int64 v301; // [rsp+4A0h] [rbp-3A8h] BYREF
  __m128i v302; // [rsp+4A8h] [rbp-3A0h] BYREF
  __int64 v303; // [rsp+4B8h] [rbp-390h]
  __m128i v304; // [rsp+4C0h] [rbp-388h] BYREF
  __int64 v305; // [rsp+4D0h] [rbp-378h]
  __m128i v306; // [rsp+4D8h] [rbp-370h] BYREF
  __int64 v307; // [rsp+4E8h] [rbp-360h]
  __m128i v308; // [rsp+4F0h] [rbp-358h] BYREF
  __int64 v309; // [rsp+500h] [rbp-348h]
  __m128i v310; // [rsp+508h] [rbp-340h] BYREF
  __int64 v311; // [rsp+518h] [rbp-330h]
  __m128i v312; // [rsp+520h] [rbp-328h] BYREF
  __int64 v313; // [rsp+530h] [rbp-318h] BYREF
  __m128i v314; // [rsp+538h] [rbp-310h] BYREF
  __int64 v315; // [rsp+548h] [rbp-300h]
  __m128i v316; // [rsp+550h] [rbp-2F8h] BYREF
  __int64 v317; // [rsp+560h] [rbp-2E8h]
  __m128i v318; // [rsp+568h] [rbp-2E0h] BYREF
  __int64 v319; // [rsp+578h] [rbp-2D0h]
  __m128i v320; // [rsp+580h] [rbp-2C8h] BYREF
  __int64 v321; // [rsp+590h] [rbp-2B8h]
  __m128i v322; // [rsp+598h] [rbp-2B0h] BYREF
  __int64 v323; // [rsp+5A8h] [rbp-2A0h]
  __m128i v324; // [rsp+5B0h] [rbp-298h] BYREF
  __int64 v325; // [rsp+5C0h] [rbp-288h] BYREF
  __m128i v326; // [rsp+5C8h] [rbp-280h] BYREF
  __int64 v327; // [rsp+5D8h] [rbp-270h]
  __m128i v328; // [rsp+5E0h] [rbp-268h] BYREF
  __int64 v329; // [rsp+5F0h] [rbp-258h]
  __m128i v330; // [rsp+5F8h] [rbp-250h] BYREF
  __int64 v331; // [rsp+608h] [rbp-240h]
  __m128i v332; // [rsp+610h] [rbp-238h] BYREF
  __int64 v333; // [rsp+620h] [rbp-228h]
  __m128i v334; // [rsp+628h] [rbp-220h] BYREF
  __int64 v335; // [rsp+638h] [rbp-210h]
  __m128i v336; // [rsp+640h] [rbp-208h] BYREF
  __int64 v337; // [rsp+650h] [rbp-1F8h] BYREF
  __m128i v338; // [rsp+658h] [rbp-1F0h] BYREF
  __int64 v339; // [rsp+668h] [rbp-1E0h]
  __m128i v340; // [rsp+670h] [rbp-1D8h] BYREF
  __int64 v341; // [rsp+680h] [rbp-1C8h]
  __m128i v342; // [rsp+688h] [rbp-1C0h] BYREF
  __int64 v343; // [rsp+698h] [rbp-1B0h]
  __m128i v344; // [rsp+6A0h] [rbp-1A8h] BYREF
  __int64 v345; // [rsp+6B0h] [rbp-198h]
  __m128i v346; // [rsp+6B8h] [rbp-190h] BYREF
  __int64 v347; // [rsp+6C8h] [rbp-180h]
  __m128i v348; // [rsp+6D0h] [rbp-178h] BYREF
  __int64 v349; // [rsp+6E0h] [rbp-168h] BYREF
  __m128i v350; // [rsp+6E8h] [rbp-160h] BYREF
  __int64 v351; // [rsp+6F8h] [rbp-150h]
  __m128i v352; // [rsp+700h] [rbp-148h] BYREF
  __int64 v353; // [rsp+710h] [rbp-138h]
  __m128i v354; // [rsp+718h] [rbp-130h] BYREF
  __int64 v355; // [rsp+728h] [rbp-120h]
  __m128i v356; // [rsp+730h] [rbp-118h] BYREF
  __int64 v357; // [rsp+740h] [rbp-108h]
  __m128i v358; // [rsp+748h] [rbp-100h] BYREF
  __int64 v359; // [rsp+758h] [rbp-F0h]
  __m128i v360; // [rsp+760h] [rbp-E8h] BYREF
  __int64 v361; // [rsp+770h] [rbp-D8h] BYREF
  __m128i v362; // [rsp+778h] [rbp-D0h] BYREF
  __int64 v363; // [rsp+788h] [rbp-C0h]
  __m128i v364; // [rsp+790h] [rbp-B8h] BYREF
  __int64 v365; // [rsp+7A0h] [rbp-A8h]
  __m128i v366; // [rsp+7A8h] [rbp-A0h] BYREF
  __int64 v367; // [rsp+7B8h] [rbp-90h]
  __m128i v368; // [rsp+7C0h] [rbp-88h] BYREF
  __int64 v369; // [rsp+7D0h] [rbp-78h]
  __m128i v370; // [rsp+7D8h] [rbp-70h] BYREF
  __int64 v371; // [rsp+7E8h] [rbp-60h]
  __m128i v372; // [rsp+7F0h] [rbp-58h] BYREF
  unsigned __int64 v373; // [rsp+808h] [rbp-40h]

  v205.m128i_i64[0] = a1;
  v373 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 80) == 1 )
  {
    v2 = *(_QWORD **)(a2 + 72);
    if ( v2[1] > 1u )
    {
      file_ext = (const char *)get_file_ext();
      v5 = file_ext;
      if ( !file_ext || (v6 = strlen(file_ext), (v7 = v6) == 0) )
      {
        *(_QWORD *)(a2 + 8) = 0;
LABEL_6:
        v8 = src;
        return sub_14020((__int64)"Unknown arch \"%s\" in target.xml", v8);
      }
      v27 = *(char **)a2;
      v28 = v6 + 1;
      if ( *(_QWORD *)(a2 + 16) < v6 + 1 )
      {
        v203 = qvector_reserve();
        *(_QWORD *)a2 = v203;
        v27 = (char *)v203;
      }
      *(_QWORD *)(a2 + 8) = v28;
      memmove(v27, v5, v7);
      *(_BYTE *)(*(_QWORD *)a2 + v7) = 0;
      if ( !*(_QWORD *)(a2 + 8) )
        goto LABEL_6;
      v8 = *(const char **)a2;
      if ( strcmp(*(const char **)a2, "arm") && strcmp(v8, "arm64") )
        return sub_14020((__int64)"Unknown arch \"%s\" in target.xml", v8);
      v229 = 0;
      v231 = 0;
      v233 = 0;
      v235 = 0;
      v237 = 0;
      v239 = 0;
      v241 = 0;
      v243 = 0;
      v245 = 0;
      v247 = 0;
      v249 = 0;
      v251 = 0;
      v253 = 0;
      v255 = 0;
      v257 = 0;
      v259 = 0;
      v230 = 0;
      v232 = 0;
      v234 = 0;
      v236 = 0;
      v238 = 0;
      v240 = 0;
      v242 = 0;
      v244 = 0;
      v246 = 0;
      v248 = 0;
      v250 = 0;
      v252 = 0;
      v254 = 0;
      v256 = 0;
      v258 = 0;
      v260 = 0;
      v261 = 0;
      v263 = 0;
      v265 = 0;
      v267 = 0;
      v269 = 0;
      v271 = 0;
      v273 = 0;
      v275 = 0;
      v277 = 0;
      v279 = 0;
      v281 = 0;
      v283 = 0;
      v285 = 0;
      v287 = 0;
      v289 = 0;
      v291 = 0;
      v293 = 0;
      v262 = 0;
      v264 = 0;
      v266 = 0;
      v268 = 0;
      v270 = 0;
      v272 = 0;
      v274 = 0;
      v276 = 0;
      v278 = 0;
      v280 = 0;
      v282 = 0;
      v284 = 0;
      v286 = 0;
      v288 = 0;
      v290 = 0;
      v292 = 0;
      v294 = 0;
      v295 = 0;
      v297 = 0;
      v299 = 0;
      v215 = &v229;
      v296 = 0;
      v298 = 0;
      v300 = 0;
      sub_15ED0(&v229);
      v214.m128i_i64[1] = (__int64)&v241;
      sub_15ED0(&v241);
      v210.m128i_i64[1] = (__int64)&v253;
      sub_15ED0(&v253);
      v208 = &v265;
      sub_15ED0(&v265);
      v206 = &v277;
      sub_15ED0(&v277);
      v207 = &v289;
      sub_15ED0(&v289);
      v29 = *(_QWORD *)(a2 + 8) == 0;
      dest = nullptr;
      v219 = -1;
      v220 = 0xFFFFFFFFLL;
      v221 = nullptr;
      v223 = nullptr;
      v225 = nullptr;
      v227 = nullptr;
      v218 = 0;
      v222 = 0;
      v224 = 0;
      v226 = 0;
      v228 = 0;
      if ( v29 )
      {
        v214.m128i_i8[0] = 0;
        v209.m128i_i32[0] = -1;
      }
      else
      {
        v209.m128i_i32[0] = strcmp(*(const char **)a2, "arm64");
        v214.m128i_i8[0] = v209.m128i_i32[0] == 0;
      }
      v30 = v2[4];
      if ( v30 )
      {
        v204 = 0;
        v31 = 0;
        while ( 1 )
        {
          v34 = v2[3] + 136 * v31;
          v35 = v204;
          v36 = *(_DWORD *)(v34 + 28);
          v37 = *(_QWORD *)(v34 + 8);
          v205.m128i_i64[1] = v37;
          if ( v204 < v36 )
            v35 = v36;
          v204 = v35;
          if ( v37 )
          {
            v209.m128i_i64[1] = *(_QWORD *)v34;
            if ( !strcmp((const char *)v209.m128i_i64[1], "cpsr") )
            {
              if ( (void **)v34 != &dest )
              {
                v38 = v205.m128i_i64[1];
                v39 = v205.m128i_i64[1] - 1;
                if ( v205.m128i_i64[1] == 1 )
                {
                  *(_QWORD *)&v218 = 0;
                }
                else
                {
                  v188 = dest;
                  if ( *((_QWORD *)&v218 + 1) < v205.m128i_i64[1] )
                  {
                    v210.m128i_i64[0] = v205.m128i_i64[1] - 1;
                    v188 = (void *)qvector_reserve();
                    dest = v188;
                    v39 = v205.m128i_i64[1] - 1;
                    v38 = v205.m128i_i64[1];
                  }
                  v205.m128i_i64[1] = v38;
                  *(_QWORD *)&v218 = v38;
                  memmove(v188, (const void *)v209.m128i_i64[1], v39);
                  *((char *)dest + v205.m128i_i64[1] - 1) = 0;
                  v36 = *(_DWORD *)(v34 + 28);
                }
              }
              v40 = _mm_cvtsi32_si128(*(_DWORD *)(v34 + 24));
              LODWORD(v220) = *(_DWORD *)(v34 + 32);
              v219 = _mm_unpacklo_epi32(v40, _mm_cvtsi32_si128(v36)).m128i_u64[0];
              if ( &v221 != (void **)(v34 + 40) )
              {
                v41 = *(_QWORD *)(v34 + 48);
                if ( v41 && (v42 = v41 - 1, v41 != 1) )
                {
                  v189 = *(const void **)(v34 + 40);
                  v190 = v221;
                  if ( *((_QWORD *)&v222 + 1) < v41 )
                  {
                    v209.m128i_i64[1] = *(_QWORD *)(v34 + 40);
                    v205.m128i_i64[1] = v41 - 1;
                    v190 = (void *)qvector_reserve();
                    v221 = v190;
                    v189 = (const void *)v209.m128i_i64[1];
                    v42 = v41 - 1;
                  }
                  *(_QWORD *)&v222 = v41;
                  memmove(v190, v189, v42);
                  *((char *)v221 + v41 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)&v222 = 0;
                }
              }
              if ( &v223 != (void **)(v34 + 64) )
              {
                v43 = *(_QWORD *)(v34 + 72);
                if ( v43 && (v44 = v43 - 1, v43 != 1) )
                {
                  v191 = *(const void **)(v34 + 64);
                  v192 = v223;
                  if ( *((_QWORD *)&v224 + 1) < v43 )
                  {
                    v209.m128i_i64[1] = *(_QWORD *)(v34 + 64);
                    v205.m128i_i64[1] = v43 - 1;
                    v192 = (void *)qvector_reserve();
                    v223 = v192;
                    v191 = (const void *)v209.m128i_i64[1];
                    v44 = v43 - 1;
                  }
                  *(_QWORD *)&v224 = v43;
                  memmove(v192, v191, v44);
                  *((char *)v223 + v43 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)&v224 = 0;
                }
              }
              if ( &v225 != (void **)(v34 + 88) )
              {
                v45 = *(_QWORD *)(v34 + 96);
                if ( v45 && (v46 = v45 - 1, v45 != 1) )
                {
                  v193 = *(const void **)(v34 + 88);
                  v194 = v225;
                  if ( *((_QWORD *)&v226 + 1) < v45 )
                  {
                    v209.m128i_i64[1] = *(_QWORD *)(v34 + 88);
                    v205.m128i_i64[1] = v45 - 1;
                    v194 = (void *)qvector_reserve();
                    v225 = v194;
                    v193 = (const void *)v209.m128i_i64[1];
                    v46 = v45 - 1;
                  }
                  *(_QWORD *)&v226 = v45;
                  memmove(v194, v193, v46);
                  *((char *)v225 + v45 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)&v226 = 0;
                }
              }
              if ( &v227 != (void **)(v34 + 112) )
              {
                v47 = *(_QWORD *)(v34 + 120);
                if ( v47 && (v48 = v47 - 1, v47 != 1) )
                {
                  v195 = *(const void **)(v34 + 112);
                  v196 = v227;
                  if ( *((_QWORD *)&v228 + 1) < v47 )
                  {
                    v209.m128i_i64[1] = *(_QWORD *)(v34 + 112);
                    v205.m128i_i64[1] = v47 - 1;
                    v196 = (void *)qvector_reserve();
                    v227 = v196;
                    v195 = (const void *)v209.m128i_i64[1];
                    v48 = v47 - 1;
                  }
                  *(_QWORD *)&v228 = v47;
                  memmove(v196, v195, v48);
                  *((char *)v227 + v47 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)&v228 = 0;
                }
              }
            }
          }
          v49 = 0;
          v50 = *(__int64 (**)())(*(_QWORD *)v205.m128i_i64[0] + 832LL);
          if ( v50 != sub_18BD0 )
            v49 = ((__int64 (__fastcall *)(__int64, __int64, void **, _QWORD))v50)(
                    v205.m128i_i64[0],
                    v34,
                    &dest,
                    v214.m128i_u8[0]);
          v32 = *(_DWORD *)(v34 + 32) + v49;
          v29 = *(_QWORD *)(v34 + 72) == 0;
          *(_DWORD *)(v34 + 32) = v32;
          if ( !v29 )
          {
            v205.m128i_i64[1] = *(_QWORD *)(v34 + 64);
            if ( !strcmp((const char *)v205.m128i_i64[1], "general") )
            {
              if ( !v209.m128i_i32[0]
                && *(_DWORD *)(v34 + 24) == 32
                && *(_QWORD *)(v34 + 8) > 1u
                && **(_BYTE **)v34 == 119 )
              {
                sub_39230(&v243, v34);
                goto LABEL_61;
              }
              if ( (_DWORD)v220 == -1 || v32 <= (int)v220 )
              {
                sub_39230(&v231, v34);
                goto LABEL_61;
              }
            }
            if ( !strcmp((const char *)v205.m128i_i64[1], "float") )
            {
              v33 = *(_DWORD *)(v34 + 24);
              if ( v33 == 32 )
              {
                sub_39230(&v255, v34);
                goto LABEL_61;
              }
              if ( v33 == 64 )
              {
                sub_39230(&v267, v34);
                goto LABEL_61;
              }
            }
            if ( !strcmp((const char *)v205.m128i_i64[1], "vector") && *(_DWORD *)(v34 + 24) == 128 )
            {
              sub_39230(&v279, v34);
              goto LABEL_61;
            }
          }
          sub_39230(&v291, v34);
LABEL_61:
          if ( ++v31 == v30 )
            goto LABEL_9;
        }
      }
      v204 = 0;
LABEL_9:
      v10 = 0;
      v205.m128i_i64[1] = v2[7];
      if ( v205.m128i_i64[1] )
      {
        while ( 1 )
        {
          v11 = v2[6] + 80 * v10;
          v12 = *(_QWORD *)(v11 + 40);
          v13 = v11;
          if ( v12 )
          {
            if ( !strcmp(*(const char **)(v11 + 32), "general") )
              break;
          }
LABEL_19:
          if ( ++v10 == v205.m128i_i64[1] )
            goto LABEL_20;
        }
        v14 = *(_QWORD *)(v13 + 8);
        v209.m128i_i64[1] = v14;
        if ( v14 )
        {
          v59 = v14;
          v60 = (void *)qalloc_or_throw();
          v61 = *(const void **)v13;
          v213.m128i_i64[0] = (__int64)v60;
          memcpy(v60, v61, v59);
          v12 = *(_QWORD *)(v13 + 40);
          v213.m128i_i32[2] = *(_DWORD *)(v13 + 24);
          if ( !v12 )
          {
            v210.m128i_i64[0] = 0;
            goto LABEL_15;
          }
        }
        else
        {
          v213.m128i_i64[0] = 0;
          v213.m128i_i32[2] = *(_DWORD *)(v13 + 24);
        }
        v15 = (void *)qalloc_or_throw();
        v16 = *(const void **)(v13 + 32);
        v210.m128i_i64[0] = (__int64)v15;
        memcpy(v15, v16, v12);
LABEL_15:
        v209.m128i_i64[0] = 0;
        v17 = *(_QWORD *)(v13 + 64);
        if ( v17 )
        {
          v209.m128i_i64[0] = qalloc_or_throw();
          v51 = v209.m128i_i64[0];
          for ( i = 0; i != v17; ++i )
          {
            v53 = *(_QWORD *)(v13 + 56) + 32 * i;
            *(_QWORD *)v51 = 0;
            *(_OWORD *)(v51 + 8) = 0;
            v54 = *(_QWORD *)(v53 + 8);
            if ( v54 )
            {
              v212.m128i_i64[0] = v51;
              v212.m128i_i64[1] = i;
              n.m128i_i64[1] = v53;
              n.m128i_i64[0] = v54;
              v55 = (void *)qalloc_or_throw();
              v56 = (_QWORD *)v212.m128i_i64[0];
              v58 = (const void **)n.m128i_i64[1];
              v57 = n.m128i_i64[0];
              *(_QWORD *)(v212.m128i_i64[0] + 16) = n.m128i_i64[0];
              *v56 = v55;
              memcpy(v55, *v58, v57);
              i = v212.m128i_i64[1];
              v51 = v212.m128i_i64[0];
              v53 = n.m128i_i64[1];
              *(_QWORD *)(v212.m128i_i64[0] + 8) = n.m128i_i64[0];
            }
            v51 += 32;
            *(_QWORD *)(v51 - 8) = *(_QWORD *)(v53 + 24);
          }
        }
        v18 = v234;
        v19 = v233;
        if ( *((_QWORD *)&v234 + 1) < (unsigned __int64)(v234 + 1) )
        {
          v233 = qvector_reserve();
          v19 = v233;
          v18 = v234;
        }
        v20 = _mm_loadl_epi64((const __m128i *)&v209.m128i_u64[1]);
        v21 = 80 * v18 + v19;
        v22 = v213.m128i_i64[0];
        *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64(v20, v20);
        *(_QWORD *)v21 = v22;
        LODWORD(v22) = v213.m128i_i32[2];
        *(__m128i *)(v21 + 40) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
        *(_DWORD *)(v21 + 24) = v22;
        v23 = v210.m128i_i64[0];
        *(__m128i *)(v21 + 64) = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
        *(_QWORD *)(v21 + 32) = v23;
        *(_QWORD *)(v21 + 56) = v209.m128i_i64[0];
        *(_QWORD *)&v234 = v234 + 1;
        goto LABEL_19;
      }
LABEL_20:
      sub_3BF00(v205.m128i_i64[0], (_QWORD *)v210.m128i_i64[1], v208, v206, v204 + 1, v214.m128i_i8[0] & 1);
      v24 = *(_QWORD *)(a2 + 80);
      v25 = 0;
      if ( v24 )
      {
        do
        {
          v26 = 9 * v25++;
          sub_30730((_QWORD *)(*(_QWORD *)(a2 + 72) + 16 * v26));
        }
        while ( v24 != v25 );
      }
      *(_QWORD *)(a2 + 80) = 0;
      if ( (_QWORD)v232 )
      {
        v301 = 0;
        v302 = 0u;
        v303 = 0;
        v304 = 0u;
        v305 = 0;
        v306 = 0u;
        v307 = 0;
        v308 = 0u;
        v309 = 0;
        v310 = 0u;
        v311 = 0;
        v312 = 0u;
        sub_397C0((__int64)&v301, (__int64)v215);
        v83 = *(_QWORD *)(a2 + 80);
        v84 = *(_QWORD *)(a2 + 72);
        v85 = v301;
        v86 = v303;
        v87 = _mm_loadl_epi64(&v302);
        v88 = _mm_loadl_epi64((const __m128i *)&v302.m128i_u64[1]);
        v89 = v305;
        v90 = _mm_loadl_epi64(&v304);
        v91 = v307;
        v92 = v309;
        v93 = _mm_loadl_epi64((const __m128i *)&v304.m128i_u64[1]);
        v94 = _mm_loadl_epi64(&v306);
        v95 = _mm_loadl_epi64((const __m128i *)&v306.m128i_u64[1]);
        v96 = _mm_loadl_epi64(&v308);
        v97 = _mm_loadl_epi64((const __m128i *)&v308.m128i_u64[1]);
        v98 = v311;
        v99 = _mm_loadl_epi64(&v310);
        v100 = _mm_loadl_epi64((const __m128i *)&v310.m128i_u64[1]);
        v101 = _mm_loadl_epi64(&v312);
        v102 = _mm_loadl_epi64((const __m128i *)&v312.m128i_u64[1]);
        if ( *(_QWORD *)(a2 + 88) < (unsigned __int64)(v83 + 1) )
        {
          v214.m128i_i64[0] = v305;
          n.m128i_i64[1] = v301;
          v216.m128i_i64[1] = v90.m128i_i64[0];
          v216.m128i_i64[0] = v93.m128i_i64[0];
          v213.m128i_i64[1] = v94.m128i_i64[0];
          v213.m128i_i64[0] = v95.m128i_i64[0];
          v212.m128i_i64[1] = v97.m128i_i64[0];
          v212.m128i_i64[0] = v96.m128i_i64[0];
          n.m128i_i64[0] = v88.m128i_i64[0];
          v210.m128i_i64[0] = v87.m128i_i64[0];
          v209.m128i_i64[1] = v102.m128i_i64[0];
          v209.m128i_i64[0] = v101.m128i_i64[0];
          v205.m128i_i64[1] = v100.m128i_i64[0];
          v205.m128i_i64[0] = v99.m128i_i64[0];
          v201 = qvector_reserve();
          *(_QWORD *)(a2 + 72) = v201;
          v84 = v201;
          v90 = _mm_loadl_epi64((const __m128i *)&v216.m128i_u64[1]);
          v83 = *(_QWORD *)(a2 + 80);
          v85 = n.m128i_i64[1];
          v89 = v214.m128i_i64[0];
          v95 = _mm_loadl_epi64(&v213);
          v97 = _mm_loadl_epi64((const __m128i *)&v212.m128i_u64[1]);
          v96 = _mm_loadl_epi64(&v212);
          v88 = _mm_loadl_epi64(&n);
          v87 = _mm_loadl_epi64(&v210);
          v102 = _mm_loadl_epi64((const __m128i *)&v209.m128i_u64[1]);
          v101 = _mm_loadl_epi64(&v209);
          v100 = _mm_loadl_epi64((const __m128i *)&v205.m128i_u64[1]);
          v99 = _mm_loadl_epi64(&v205);
          v93 = _mm_loadl_epi64(&v216);
          v94 = _mm_loadl_epi64((const __m128i *)&v213.m128i_u64[1]);
        }
        v301 = 0;
        v103 = v84 + 144 * v83;
        v303 = 0;
        *(__m128i *)(v103 + 128) = _mm_unpacklo_epi64(v101, v102);
        *(_QWORD *)v103 = v85;
        *(_QWORD *)(v103 + 24) = v86;
        *(_QWORD *)(v103 + 48) = v89;
        *(_QWORD *)(v103 + 72) = v91;
        *(_QWORD *)(v103 + 96) = v92;
        *(_QWORD *)(v103 + 120) = v98;
        *(__m128i *)(v103 + 8) = _mm_unpacklo_epi64(v87, v88);
        *(__m128i *)(v103 + 32) = _mm_unpacklo_epi64(v90, v93);
        *(__m128i *)(v103 + 56) = _mm_unpacklo_epi64(v94, v95);
        *(__m128i *)(v103 + 80) = _mm_unpacklo_epi64(v96, v97);
        *(__m128i *)(v103 + 104) = _mm_unpacklo_epi64(v99, v100);
        ++*(_QWORD *)(a2 + 80);
        v305 = 0;
        v307 = 0;
        v309 = 0;
        v311 = 0;
        v302 = 0;
        v304 = 0;
        v306 = 0;
        v308 = 0;
        v310 = 0;
        v312 = 0;
        sub_30730(&v301);
      }
      if ( (_QWORD)v244 )
      {
        v313 = 0;
        v314 = 0u;
        v315 = 0;
        v316 = 0u;
        v317 = 0;
        v318 = 0u;
        v319 = 0;
        v320 = 0u;
        v321 = 0;
        v322 = 0u;
        v323 = 0;
        v324 = 0u;
        sub_397C0((__int64)&v313, v214.m128i_i64[1]);
        v62 = *(_QWORD *)(a2 + 80);
        v63 = *(_QWORD *)(a2 + 72);
        v64 = v313;
        v65 = v315;
        v66 = _mm_loadl_epi64(&v314);
        v67 = _mm_loadl_epi64((const __m128i *)&v314.m128i_u64[1]);
        v68 = v317;
        v69 = _mm_loadl_epi64(&v316);
        v70 = v319;
        v71 = v321;
        v72 = _mm_loadl_epi64((const __m128i *)&v316.m128i_u64[1]);
        v73 = _mm_loadl_epi64(&v318);
        v74 = _mm_loadl_epi64((const __m128i *)&v318.m128i_u64[1]);
        v75 = _mm_loadl_epi64(&v320);
        v76 = _mm_loadl_epi64((const __m128i *)&v320.m128i_u64[1]);
        v77 = v323;
        v78 = _mm_loadl_epi64(&v322);
        v79 = _mm_loadl_epi64((const __m128i *)&v322.m128i_u64[1]);
        v80 = _mm_loadl_epi64(&v324);
        v81 = _mm_loadl_epi64((const __m128i *)&v324.m128i_u64[1]);
        if ( *(_QWORD *)(a2 + 88) < (unsigned __int64)(v62 + 1) )
        {
          n.m128i_i64[0] = v317;
          v205.m128i_i64[0] = v313;
          v216.m128i_i64[1] = v81.m128i_i64[0];
          v216.m128i_i64[0] = v80.m128i_i64[0];
          v214.m128i_i64[0] = v79.m128i_i64[0];
          v213.m128i_i64[1] = v78.m128i_i64[0];
          v213.m128i_i64[0] = v76.m128i_i64[0];
          v212.m128i_i64[1] = v75.m128i_i64[0];
          v212.m128i_i64[0] = v74.m128i_i64[0];
          n.m128i_i64[1] = v73.m128i_i64[0];
          v210.m128i_i64[0] = v72.m128i_i64[0];
          v209.m128i_i64[1] = v69.m128i_i64[0];
          v209.m128i_i64[0] = v67.m128i_i64[0];
          v205.m128i_i64[1] = v66.m128i_i64[0];
          v202 = qvector_reserve();
          *(_QWORD *)(a2 + 72) = v202;
          v63 = v202;
          v81 = _mm_loadl_epi64((const __m128i *)&v216.m128i_u64[1]);
          v62 = *(_QWORD *)(a2 + 80);
          v68 = n.m128i_i64[0];
          v80 = _mm_loadl_epi64(&v216);
          v76 = _mm_loadl_epi64(&v213);
          v79 = _mm_loadl_epi64(&v214);
          v75 = _mm_loadl_epi64((const __m128i *)&v212.m128i_u64[1]);
          v78 = _mm_loadl_epi64((const __m128i *)&v213.m128i_u64[1]);
          v74 = _mm_loadl_epi64(&v212);
          v73 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
          v72 = _mm_loadl_epi64(&v210);
          v69 = _mm_loadl_epi64((const __m128i *)&v209.m128i_u64[1]);
          v67 = _mm_loadl_epi64(&v209);
          v66 = _mm_loadl_epi64((const __m128i *)&v205.m128i_u64[1]);
          v64 = v205.m128i_i64[0];
        }
        v313 = 0;
        v82 = v63 + 144 * v62;
        v315 = 0;
        *(__m128i *)(v82 + 128) = _mm_unpacklo_epi64(v80, v81);
        *(_QWORD *)v82 = v64;
        *(_QWORD *)(v82 + 24) = v65;
        *(_QWORD *)(v82 + 48) = v68;
        *(_QWORD *)(v82 + 72) = v70;
        *(_QWORD *)(v82 + 96) = v71;
        *(_QWORD *)(v82 + 120) = v77;
        *(__m128i *)(v82 + 8) = _mm_unpacklo_epi64(v66, v67);
        *(__m128i *)(v82 + 32) = _mm_unpacklo_epi64(v69, v72);
        *(__m128i *)(v82 + 56) = _mm_unpacklo_epi64(v73, v74);
        *(__m128i *)(v82 + 80) = _mm_unpacklo_epi64(v75, v76);
        *(__m128i *)(v82 + 104) = _mm_unpacklo_epi64(v78, v79);
        ++*(_QWORD *)(a2 + 80);
        v317 = 0;
        v319 = 0;
        v321 = 0;
        v323 = 0;
        v314 = 0;
        v316 = 0;
        v318 = 0;
        v320 = 0;
        v322 = 0;
        v324 = 0;
        sub_30730(&v313);
      }
      if ( (_QWORD)v256 )
      {
        v325 = 0;
        v326 = 0u;
        v327 = 0;
        v328 = 0u;
        v329 = 0;
        v330 = 0u;
        v331 = 0;
        v332 = 0u;
        v333 = 0;
        v334 = 0u;
        v335 = 0;
        v336 = 0u;
        sub_397C0((__int64)&v325, v210.m128i_i64[1]);
        v167 = *(_QWORD *)(a2 + 80);
        v168 = *(_QWORD *)(a2 + 72);
        v169 = v325;
        v170 = v327;
        v171 = _mm_loadl_epi64(&v326);
        v172 = _mm_loadl_epi64((const __m128i *)&v326.m128i_u64[1]);
        v173 = v329;
        v174 = _mm_loadl_epi64(&v328);
        v175 = v331;
        v176 = v333;
        v177 = _mm_loadl_epi64((const __m128i *)&v328.m128i_u64[1]);
        v178 = _mm_loadl_epi64(&v330);
        v179 = _mm_loadl_epi64((const __m128i *)&v330.m128i_u64[1]);
        v180 = _mm_loadl_epi64(&v332);
        v181 = _mm_loadl_epi64((const __m128i *)&v332.m128i_u64[1]);
        v182 = v335;
        v183 = _mm_loadl_epi64(&v334);
        v184 = _mm_loadl_epi64((const __m128i *)&v334.m128i_u64[1]);
        v185 = _mm_loadl_epi64(&v336);
        v186 = _mm_loadl_epi64((const __m128i *)&v336.m128i_u64[1]);
        if ( *(_QWORD *)(a2 + 88) < (unsigned __int64)(v167 + 1) )
        {
          n.m128i_i64[0] = v329;
          v205.m128i_i64[0] = v325;
          v216.m128i_i64[1] = v186.m128i_i64[0];
          v216.m128i_i64[0] = v185.m128i_i64[0];
          v214.m128i_i64[0] = v184.m128i_i64[0];
          v213.m128i_i64[1] = v183.m128i_i64[0];
          v213.m128i_i64[0] = v181.m128i_i64[0];
          v212.m128i_i64[1] = v180.m128i_i64[0];
          v212.m128i_i64[0] = v179.m128i_i64[0];
          n.m128i_i64[1] = v178.m128i_i64[0];
          v210.m128i_i64[0] = v177.m128i_i64[0];
          v209.m128i_i64[1] = v174.m128i_i64[0];
          v209.m128i_i64[0] = v172.m128i_i64[0];
          v205.m128i_i64[1] = v171.m128i_i64[0];
          v197 = qvector_reserve();
          *(_QWORD *)(a2 + 72) = v197;
          v168 = v197;
          v186 = _mm_loadl_epi64((const __m128i *)&v216.m128i_u64[1]);
          v167 = *(_QWORD *)(a2 + 80);
          v173 = n.m128i_i64[0];
          v185 = _mm_loadl_epi64(&v216);
          v181 = _mm_loadl_epi64(&v213);
          v184 = _mm_loadl_epi64(&v214);
          v180 = _mm_loadl_epi64((const __m128i *)&v212.m128i_u64[1]);
          v183 = _mm_loadl_epi64((const __m128i *)&v213.m128i_u64[1]);
          v179 = _mm_loadl_epi64(&v212);
          v178 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
          v177 = _mm_loadl_epi64(&v210);
          v174 = _mm_loadl_epi64((const __m128i *)&v209.m128i_u64[1]);
          v172 = _mm_loadl_epi64(&v209);
          v171 = _mm_loadl_epi64((const __m128i *)&v205.m128i_u64[1]);
          v169 = v205.m128i_i64[0];
        }
        v325 = 0;
        v187 = v168 + 144 * v167;
        v327 = 0;
        *(__m128i *)(v187 + 128) = _mm_unpacklo_epi64(v185, v186);
        *(_QWORD *)v187 = v169;
        *(_QWORD *)(v187 + 24) = v170;
        *(_QWORD *)(v187 + 48) = v173;
        *(_QWORD *)(v187 + 72) = v175;
        *(_QWORD *)(v187 + 96) = v176;
        *(_QWORD *)(v187 + 120) = v182;
        *(__m128i *)(v187 + 8) = _mm_unpacklo_epi64(v171, v172);
        *(__m128i *)(v187 + 32) = _mm_unpacklo_epi64(v174, v177);
        *(__m128i *)(v187 + 56) = _mm_unpacklo_epi64(v178, v179);
        *(__m128i *)(v187 + 80) = _mm_unpacklo_epi64(v180, v181);
        *(__m128i *)(v187 + 104) = _mm_unpacklo_epi64(v183, v184);
        ++*(_QWORD *)(a2 + 80);
        v329 = 0;
        v331 = 0;
        v333 = 0;
        v335 = 0;
        v326 = 0;
        v328 = 0;
        v330 = 0;
        v332 = 0;
        v334 = 0;
        v336 = 0;
        sub_30730(&v325);
      }
      if ( (_QWORD)v268 )
      {
        v337 = 0;
        v338 = 0u;
        v339 = 0;
        v340 = 0u;
        v341 = 0;
        v342 = 0u;
        v343 = 0;
        v344 = 0u;
        v345 = 0;
        v346 = 0u;
        v347 = 0;
        v348 = 0u;
        sub_397C0((__int64)&v337, (__int64)v208);
        v146 = *(_QWORD *)(a2 + 80);
        v147 = *(_QWORD *)(a2 + 72);
        v148 = v337;
        v149 = v339;
        v150 = _mm_loadl_epi64(&v338);
        v151 = _mm_loadl_epi64((const __m128i *)&v338.m128i_u64[1]);
        v152 = v341;
        v153 = _mm_loadl_epi64(&v340);
        v154 = v343;
        v155 = v345;
        v156 = _mm_loadl_epi64((const __m128i *)&v340.m128i_u64[1]);
        v157 = _mm_loadl_epi64(&v342);
        v158 = _mm_loadl_epi64((const __m128i *)&v342.m128i_u64[1]);
        v159 = _mm_loadl_epi64(&v344);
        v160 = _mm_loadl_epi64((const __m128i *)&v344.m128i_u64[1]);
        v161 = v347;
        v162 = _mm_loadl_epi64(&v346);
        v163 = _mm_loadl_epi64((const __m128i *)&v346.m128i_u64[1]);
        v164 = _mm_loadl_epi64(&v348);
        v165 = _mm_loadl_epi64((const __m128i *)&v348.m128i_u64[1]);
        if ( *(_QWORD *)(a2 + 88) < (unsigned __int64)(v146 + 1) )
        {
          n.m128i_i64[0] = v341;
          v205.m128i_i64[0] = v337;
          v216.m128i_i64[1] = v165.m128i_i64[0];
          v216.m128i_i64[0] = v164.m128i_i64[0];
          v214.m128i_i64[0] = v163.m128i_i64[0];
          v213.m128i_i64[1] = v162.m128i_i64[0];
          v213.m128i_i64[0] = v160.m128i_i64[0];
          v212.m128i_i64[1] = v159.m128i_i64[0];
          v212.m128i_i64[0] = v158.m128i_i64[0];
          n.m128i_i64[1] = v157.m128i_i64[0];
          v210.m128i_i64[0] = v156.m128i_i64[0];
          v209.m128i_i64[1] = v153.m128i_i64[0];
          v209.m128i_i64[0] = v151.m128i_i64[0];
          v205.m128i_i64[1] = v150.m128i_i64[0];
          v198 = qvector_reserve();
          *(_QWORD *)(a2 + 72) = v198;
          v147 = v198;
          v165 = _mm_loadl_epi64((const __m128i *)&v216.m128i_u64[1]);
          v146 = *(_QWORD *)(a2 + 80);
          v152 = n.m128i_i64[0];
          v164 = _mm_loadl_epi64(&v216);
          v160 = _mm_loadl_epi64(&v213);
          v163 = _mm_loadl_epi64(&v214);
          v159 = _mm_loadl_epi64((const __m128i *)&v212.m128i_u64[1]);
          v162 = _mm_loadl_epi64((const __m128i *)&v213.m128i_u64[1]);
          v158 = _mm_loadl_epi64(&v212);
          v157 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
          v156 = _mm_loadl_epi64(&v210);
          v153 = _mm_loadl_epi64((const __m128i *)&v209.m128i_u64[1]);
          v151 = _mm_loadl_epi64(&v209);
          v150 = _mm_loadl_epi64((const __m128i *)&v205.m128i_u64[1]);
          v148 = v205.m128i_i64[0];
        }
        v337 = 0;
        v166 = v147 + 144 * v146;
        v339 = 0;
        *(__m128i *)(v166 + 128) = _mm_unpacklo_epi64(v164, v165);
        *(_QWORD *)v166 = v148;
        *(_QWORD *)(v166 + 24) = v149;
        *(_QWORD *)(v166 + 48) = v152;
        *(_QWORD *)(v166 + 72) = v154;
        *(_QWORD *)(v166 + 96) = v155;
        *(_QWORD *)(v166 + 120) = v161;
        *(__m128i *)(v166 + 8) = _mm_unpacklo_epi64(v150, v151);
        *(__m128i *)(v166 + 32) = _mm_unpacklo_epi64(v153, v156);
        *(__m128i *)(v166 + 56) = _mm_unpacklo_epi64(v157, v158);
        *(__m128i *)(v166 + 80) = _mm_unpacklo_epi64(v159, v160);
        *(__m128i *)(v166 + 104) = _mm_unpacklo_epi64(v162, v163);
        ++*(_QWORD *)(a2 + 80);
        v341 = 0;
        v343 = 0;
        v345 = 0;
        v347 = 0;
        v338 = 0;
        v340 = 0;
        v342 = 0;
        v344 = 0;
        v346 = 0;
        v348 = 0;
        sub_30730(&v337);
      }
      if ( (_QWORD)v280 )
      {
        v349 = 0;
        v350 = 0u;
        v351 = 0;
        v352 = 0u;
        v353 = 0;
        v354 = 0u;
        v355 = 0;
        v356 = 0u;
        v357 = 0;
        v358 = 0u;
        v359 = 0;
        v360 = 0u;
        sub_397C0((__int64)&v349, (__int64)v206);
        v125 = *(_QWORD *)(a2 + 80);
        v126 = *(_QWORD *)(a2 + 72);
        v127 = v349;
        v128 = v351;
        v129 = _mm_loadl_epi64(&v350);
        v130 = _mm_loadl_epi64((const __m128i *)&v350.m128i_u64[1]);
        v131 = v353;
        v132 = _mm_loadl_epi64(&v352);
        v133 = v355;
        v134 = v357;
        v135 = _mm_loadl_epi64((const __m128i *)&v352.m128i_u64[1]);
        v136 = _mm_loadl_epi64(&v354);
        v137 = _mm_loadl_epi64((const __m128i *)&v354.m128i_u64[1]);
        v138 = _mm_loadl_epi64(&v356);
        v139 = _mm_loadl_epi64((const __m128i *)&v356.m128i_u64[1]);
        v140 = v359;
        v141 = _mm_loadl_epi64(&v358);
        v142 = _mm_loadl_epi64((const __m128i *)&v358.m128i_u64[1]);
        v143 = _mm_loadl_epi64(&v360);
        v144 = _mm_loadl_epi64((const __m128i *)&v360.m128i_u64[1]);
        if ( *(_QWORD *)(a2 + 88) < (unsigned __int64)(v125 + 1) )
        {
          n.m128i_i64[0] = v353;
          v205.m128i_i64[0] = v349;
          v216.m128i_i64[1] = v144.m128i_i64[0];
          v216.m128i_i64[0] = v143.m128i_i64[0];
          v214.m128i_i64[0] = v142.m128i_i64[0];
          v213.m128i_i64[1] = v141.m128i_i64[0];
          v213.m128i_i64[0] = v139.m128i_i64[0];
          v212.m128i_i64[1] = v138.m128i_i64[0];
          v212.m128i_i64[0] = v137.m128i_i64[0];
          n.m128i_i64[1] = v136.m128i_i64[0];
          v210.m128i_i64[0] = v135.m128i_i64[0];
          v209.m128i_i64[1] = v132.m128i_i64[0];
          v209.m128i_i64[0] = v130.m128i_i64[0];
          v205.m128i_i64[1] = v129.m128i_i64[0];
          v200 = qvector_reserve();
          *(_QWORD *)(a2 + 72) = v200;
          v126 = v200;
          v144 = _mm_loadl_epi64((const __m128i *)&v216.m128i_u64[1]);
          v125 = *(_QWORD *)(a2 + 80);
          v131 = n.m128i_i64[0];
          v143 = _mm_loadl_epi64(&v216);
          v139 = _mm_loadl_epi64(&v213);
          v142 = _mm_loadl_epi64(&v214);
          v138 = _mm_loadl_epi64((const __m128i *)&v212.m128i_u64[1]);
          v141 = _mm_loadl_epi64((const __m128i *)&v213.m128i_u64[1]);
          v137 = _mm_loadl_epi64(&v212);
          v136 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
          v135 = _mm_loadl_epi64(&v210);
          v132 = _mm_loadl_epi64((const __m128i *)&v209.m128i_u64[1]);
          v130 = _mm_loadl_epi64(&v209);
          v129 = _mm_loadl_epi64((const __m128i *)&v205.m128i_u64[1]);
          v127 = v205.m128i_i64[0];
        }
        v349 = 0;
        v145 = v126 + 144 * v125;
        v351 = 0;
        *(__m128i *)(v145 + 128) = _mm_unpacklo_epi64(v143, v144);
        *(_QWORD *)v145 = v127;
        *(_QWORD *)(v145 + 24) = v128;
        *(_QWORD *)(v145 + 48) = v131;
        *(_QWORD *)(v145 + 72) = v133;
        *(_QWORD *)(v145 + 96) = v134;
        *(_QWORD *)(v145 + 120) = v140;
        *(__m128i *)(v145 + 8) = _mm_unpacklo_epi64(v129, v130);
        *(__m128i *)(v145 + 32) = _mm_unpacklo_epi64(v132, v135);
        *(__m128i *)(v145 + 56) = _mm_unpacklo_epi64(v136, v137);
        *(__m128i *)(v145 + 80) = _mm_unpacklo_epi64(v138, v139);
        *(__m128i *)(v145 + 104) = _mm_unpacklo_epi64(v141, v142);
        ++*(_QWORD *)(a2 + 80);
        v353 = 0;
        v355 = 0;
        v357 = 0;
        v359 = 0;
        v350 = 0;
        v352 = 0;
        v354 = 0;
        v356 = 0;
        v358 = 0;
        v360 = 0;
        sub_30730(&v349);
      }
      if ( (_QWORD)v292 )
      {
        v361 = 0;
        v362 = 0u;
        v363 = 0;
        v364 = 0u;
        v365 = 0;
        v366 = 0u;
        v367 = 0;
        v368 = 0u;
        v369 = 0;
        v370 = 0u;
        v371 = 0;
        v372 = 0u;
        sub_397C0((__int64)&v361, (__int64)v207);
        v104 = *(_QWORD *)(a2 + 80);
        v105 = *(_QWORD *)(a2 + 72);
        v106 = v361;
        v107 = v363;
        v108 = _mm_loadl_epi64(&v362);
        v109 = _mm_loadl_epi64((const __m128i *)&v362.m128i_u64[1]);
        v110 = v365;
        v111 = _mm_loadl_epi64(&v364);
        v112 = v367;
        v113 = v369;
        v114 = _mm_loadl_epi64((const __m128i *)&v364.m128i_u64[1]);
        v115 = _mm_loadl_epi64(&v366);
        v116 = _mm_loadl_epi64((const __m128i *)&v366.m128i_u64[1]);
        v117 = _mm_loadl_epi64(&v368);
        v118 = _mm_loadl_epi64((const __m128i *)&v368.m128i_u64[1]);
        v119 = v371;
        v120 = _mm_loadl_epi64(&v370);
        v121 = _mm_loadl_epi64((const __m128i *)&v370.m128i_u64[1]);
        v122 = _mm_loadl_epi64(&v372);
        v123 = _mm_loadl_epi64((const __m128i *)&v372.m128i_u64[1]);
        if ( *(_QWORD *)(a2 + 88) < (unsigned __int64)(v104 + 1) )
        {
          n.m128i_i64[0] = v365;
          v205.m128i_i64[0] = v361;
          v216.m128i_i64[1] = v123.m128i_i64[0];
          v216.m128i_i64[0] = v122.m128i_i64[0];
          v214.m128i_i64[0] = v121.m128i_i64[0];
          v213.m128i_i64[1] = v120.m128i_i64[0];
          v213.m128i_i64[0] = v118.m128i_i64[0];
          v212.m128i_i64[1] = v117.m128i_i64[0];
          v212.m128i_i64[0] = v116.m128i_i64[0];
          n.m128i_i64[1] = v115.m128i_i64[0];
          v210.m128i_i64[0] = v114.m128i_i64[0];
          v209.m128i_i64[1] = v111.m128i_i64[0];
          v209.m128i_i64[0] = v109.m128i_i64[0];
          v205.m128i_i64[1] = v108.m128i_i64[0];
          v199 = qvector_reserve();
          *(_QWORD *)(a2 + 72) = v199;
          v105 = v199;
          v123 = _mm_loadl_epi64((const __m128i *)&v216.m128i_u64[1]);
          v104 = *(_QWORD *)(a2 + 80);
          v110 = n.m128i_i64[0];
          v122 = _mm_loadl_epi64(&v216);
          v118 = _mm_loadl_epi64(&v213);
          v121 = _mm_loadl_epi64(&v214);
          v117 = _mm_loadl_epi64((const __m128i *)&v212.m128i_u64[1]);
          v120 = _mm_loadl_epi64((const __m128i *)&v213.m128i_u64[1]);
          v116 = _mm_loadl_epi64(&v212);
          v115 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
          v114 = _mm_loadl_epi64(&v210);
          v111 = _mm_loadl_epi64((const __m128i *)&v209.m128i_u64[1]);
          v109 = _mm_loadl_epi64(&v209);
          v108 = _mm_loadl_epi64((const __m128i *)&v205.m128i_u64[1]);
          v106 = v205.m128i_i64[0];
        }
        v361 = 0;
        v124 = v105 + 144 * v104;
        v363 = 0;
        *(__m128i *)(v124 + 128) = _mm_unpacklo_epi64(v122, v123);
        *(_QWORD *)v124 = v106;
        *(_QWORD *)(v124 + 24) = v107;
        *(_QWORD *)(v124 + 48) = v110;
        *(_QWORD *)(v124 + 72) = v112;
        *(_QWORD *)(v124 + 96) = v113;
        *(_QWORD *)(v124 + 120) = v119;
        *(__m128i *)(v124 + 8) = _mm_unpacklo_epi64(v108, v109);
        *(__m128i *)(v124 + 32) = _mm_unpacklo_epi64(v111, v114);
        *(__m128i *)(v124 + 56) = _mm_unpacklo_epi64(v115, v116);
        *(__m128i *)(v124 + 80) = _mm_unpacklo_epi64(v117, v118);
        *(__m128i *)(v124 + 104) = _mm_unpacklo_epi64(v120, v121);
        ++*(_QWORD *)(a2 + 80);
        v365 = 0;
        v367 = 0;
        v369 = 0;
        v371 = 0;
        v362 = 0;
        v364 = 0;
        v366 = 0;
        v368 = 0;
        v370 = 0;
        v372 = 0;
        sub_30730(&v361);
      }
      if ( v227 )
      {
        *(_QWORD *)&v228 = 0;
        qfree();
      }
      if ( v225 )
      {
        *(_QWORD *)&v226 = 0;
        qfree();
      }
      if ( v223 )
      {
        *(_QWORD *)&v224 = 0;
        qfree();
      }
      if ( v221 )
      {
        *(_QWORD *)&v222 = 0;
        qfree();
      }
      if ( dest )
      {
        *(_QWORD *)&v218 = 0;
        qfree();
      }
      sub_30730(v207);
      sub_30730(v206);
      sub_30730(v208);
      sub_30730((_QWORD *)v210.m128i_i64[1]);
      sub_30730((_QWORD *)v214.m128i_i64[1]);
      sub_30730(v215);
    }
  }
  return v373 - __readfsqword(0x28u);
}

