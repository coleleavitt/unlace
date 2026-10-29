unsigned __int64 __fastcall sub_45B20(
        const __m128i *a1,
        const char *a2,
        const char *a3,
        double a4,
        double a5,
        __m128 a6)
{
  __m128 si128; // xmm0
  __int64 eah; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *p_s1; // r14
  char v16; // r13
  char v17; // di
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 *v20; // rbx
  __int64 (__fastcall **v21)(); // r10
  unsigned int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // r12
  unsigned __int64 v30; // r13
  __int64 v31; // rbx
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // r12
  __m128i v40; // xmm0
  __int64 v41; // r12
  __int64 v42; // rbx
  __int64 v43; // rdx
  _QWORD *v44; // rax
  unsigned __int64 *v45; // rbx
  unsigned __int64 *v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r13
  unsigned __int64 *v52; // rbx
  unsigned __int64 *v53; // r13
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r12
  unsigned __int64 *v59; // rbx
  unsigned __int64 *v60; // r13
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r12
  _QWORD **v66; // rbx
  void *v67; // rdi
  __int64 v69; // r12
  unsigned __int64 v70; // r13
  __int64 v71; // rbx
  __int64 v72; // rdx
  _QWORD *v73; // rax
  __int64 v74; // r12
  __int64 v75; // rbx
  __int64 v76; // rdx
  _QWORD *v77; // rax
  __int64 *v78; // r14
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 (__fastcall **v81)(); // r12
  __int64 v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // r12
  int v89; // r14d
  unsigned __int64 v90; // r10
  _QWORD *v91; // r14
  __int64 v92; // rax
  __int64 v93; // rsi
  __int64 (__fastcall **v94)(); // r13
  __int64 v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  __int64 (__fastcall **v102)(); // r13
  unsigned __int64 *v103; // r12
  __int64 v104; // rbx
  unsigned __int64 *v105; // r14
  const char *v106; // rdi
  __int64 *v107; // r12
  __int64 v108; // rbx
  __int64 v109; // rdx
  __int64 v110; // r13
  int v111; // ebx
  __int64 v112; // rsi
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  const char *v118; // r12
  unsigned __int64 v119; // rax
  _QWORD *v120; // rax
  _BYTE *v121; // rdi
  __int64 v122; // rcx
  __int64 v123; // rdx
  __m128i v124; // xmm0
  __int64 v125; // rax
  __int64 v126; // r12
  __int64 v127; // rbx
  __int64 v128; // rdx
  _QWORD *v129; // rax
  __int64 v130; // r12
  __int64 v131; // rbx
  __int64 v132; // rdx
  _QWORD *v133; // rax
  __int64 v134; // r12
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  unsigned __int64 v139; // r13
  __m128i v140; // xmm0
  __int64 v141; // rax
  __int64 v142; // r13
  __int64 v143; // rbx
  __int64 v144; // rdx
  _QWORD *v145; // rax
  unsigned __int64 v146; // rax
  __int64 v147; // r13
  __int64 v148; // rbx
  __int64 v149; // rdx
  _QWORD *v150; // rax
  __int64 j; // rbx
  __int64 v152; // rbx
  __int64 *v153; // rax
  __int64 *v154; // r14
  unsigned __int64 v155; // r14
  __int64 v156; // rbx
  const char *v157; // rsi
  __int64 v158; // rdx
  const __m128i *v159; // rbx
  __int8 v160; // al
  _QWORD **v161; // rbx
  void *v162; // rdi
  unsigned __int64 *v163; // rax
  __int64 *v164; // rcx
  unsigned __int64 v165; // rbx
  _QWORD *v166; // rax
  unsigned __int64 v167; // r10
  _QWORD *v168; // rcx
  unsigned __int64 *v169; // rax
  unsigned __int64 *v170; // rsi
  unsigned __int64 v171; // rcx
  __int64 v172; // r14
  __int64 v173; // rax
  __int64 (__fastcall ***v174)(); // r14
  unsigned __int64 *v175; // rbx
  unsigned __int64 v176; // rbx
  unsigned int v177; // eax
  unsigned __int64 v178; // rbx
  char v179; // [rsp+0h] [rbp-8C0h]
  __int64 v180; // [rsp+10h] [rbp-8B0h]
  __int64 *v181; // [rsp+18h] [rbp-8A8h]
  __int64 v182; // [rsp+18h] [rbp-8A8h]
  __int64 (__fastcall ***v183)(); // [rsp+20h] [rbp-8A0h] BYREF
  __int64 (__fastcall ***v184)(); // [rsp+28h] [rbp-898h]
  __m128 *v185; // [rsp+30h] [rbp-890h]
  unsigned __int64 i; // [rsp+38h] [rbp-888h]
  unsigned __int64 v187[5]; // [rsp+48h] [rbp-878h] BYREF
  const char *v188; // [rsp+70h] [rbp-850h] BYREF
  __int128 v189; // [rsp+78h] [rbp-848h]
  const __m128i *v190; // [rsp+90h] [rbp-830h] BYREF
  __int128 v191; // [rsp+98h] [rbp-828h]
  __int64 v192; // [rsp+A8h] [rbp-818h]
  int v193; // [rsp+B0h] [rbp-810h]
  unsigned __int64 v194; // [rsp+C0h] [rbp-800h] BYREF
  __int128 v195; // [rsp+C8h] [rbp-7F8h]
  __int64 v196; // [rsp+D8h] [rbp-7E8h]
  int v197; // [rsp+E0h] [rbp-7E0h]
  __int64 v198; // [rsp+F0h] [rbp-7D0h] BYREF
  char v199[8]; // [rsp+F8h] [rbp-7C8h] BYREF
  int v200; // [rsp+100h] [rbp-7C0h] BYREF
  void *v201; // [rsp+108h] [rbp-7B8h]
  int *v202; // [rsp+110h] [rbp-7B0h]
  int *v203; // [rsp+118h] [rbp-7A8h]
  __int64 v204; // [rsp+120h] [rbp-7A0h]
  __int64 (__fastcall ***v205)(); // [rsp+128h] [rbp-798h]
  __int128 v206; // [rsp+130h] [rbp-790h]
  unsigned __int64 *v207; // [rsp+140h] [rbp-780h]
  __int128 v208; // [rsp+148h] [rbp-778h]
  unsigned __int64 *v209; // [rsp+158h] [rbp-768h]
  __int128 v210; // [rsp+160h] [rbp-760h]
  unsigned __int64 *v211; // [rsp+170h] [rbp-750h]
  __int128 v212; // [rsp+178h] [rbp-748h]
  __int64 v213; // [rsp+188h] [rbp-738h]
  __int16 v214; // [rsp+190h] [rbp-730h]
  __int64 (__fastcall **v215)(); // [rsp+1A0h] [rbp-720h] BYREF
  _BYTE v216[24]; // [rsp+1A8h] [rbp-718h] BYREF
  __int64 v217; // [rsp+1C0h] [rbp-700h]
  __int64 v218; // [rsp+1C8h] [rbp-6F8h]
  unsigned __int64 *v219; // [rsp+1D0h] [rbp-6F0h]
  char v220; // [rsp+1D8h] [rbp-6E8h]
  __int64 v221; // [rsp+1E8h] [rbp-6D8h]
  __int128 v222; // [rsp+1F0h] [rbp-6D0h]
  __m128i v223; // [rsp+200h] [rbp-6C0h]
  char v224; // [rsp+210h] [rbp-6B0h]
  __m128i v225; // [rsp+218h] [rbp-6A8h]
  __int64 v226; // [rsp+228h] [rbp-698h]
  __int128 v227; // [rsp+230h] [rbp-690h]
  __int16 v228; // [rsp+240h] [rbp-680h]
  __int64 v229; // [rsp+268h] [rbp-658h]
  __int128 v230; // [rsp+270h] [rbp-650h]
  __int64 v231; // [rsp+280h] [rbp-640h]
  __int128 v232; // [rsp+288h] [rbp-638h]
  __int64 v233; // [rsp+298h] [rbp-628h]
  __int128 v234; // [rsp+2A0h] [rbp-620h]
  __int64 v235; // [rsp+2B0h] [rbp-610h]
  __int128 v236; // [rsp+2B8h] [rbp-608h]
  __int64 v237; // [rsp+2C8h] [rbp-5F8h]
  __int128 v238; // [rsp+2D0h] [rbp-5F0h]
  __int64 v239; // [rsp+2E0h] [rbp-5E0h]
  __int128 v240; // [rsp+2E8h] [rbp-5D8h]
  __int64 v241; // [rsp+2F8h] [rbp-5C8h]
  __int128 v242; // [rsp+300h] [rbp-5C0h]
  __int64 v243; // [rsp+310h] [rbp-5B0h]
  __int128 v244; // [rsp+318h] [rbp-5A8h]
  __int64 v245; // [rsp+328h] [rbp-598h]
  __int128 v246; // [rsp+330h] [rbp-590h]
  __int64 v247; // [rsp+340h] [rbp-580h]
  __int128 v248; // [rsp+348h] [rbp-578h]
  __int16 v249; // [rsp+358h] [rbp-568h]
  char v250; // [rsp+35Ah] [rbp-566h]
  int v251; // [rsp+35Ch] [rbp-564h]
  __int128 v252; // [rsp+360h] [rbp-560h]
  __int64 v253; // [rsp+370h] [rbp-550h]
  __int64 v254; // [rsp+378h] [rbp-548h]
  int v255; // [rsp+380h] [rbp-540h]
  __int64 v256; // [rsp+388h] [rbp-538h]
  __int128 v257; // [rsp+390h] [rbp-530h]
  unsigned __int64 *v258; // [rsp+3A0h] [rbp-520h]
  __m128i v259; // [rsp+3B0h] [rbp-510h] BYREF
  __int128 v260; // [rsp+3C0h] [rbp-500h]
  unsigned __int64 v261; // [rsp+3D0h] [rbp-4F0h]
  __int128 v262; // [rsp+3D8h] [rbp-4E8h]
  __int128 v263; // [rsp+3E8h] [rbp-4D8h]
  __int128 v264; // [rsp+3F8h] [rbp-4C8h]
  __int128 v265; // [rsp+408h] [rbp-4B8h]
  __int128 v266; // [rsp+418h] [rbp-4A8h]
  __int128 v267; // [rsp+428h] [rbp-498h]
  __int128 v268; // [rsp+438h] [rbp-488h]
  _OWORD v269[2]; // [rsp+448h] [rbp-478h] BYREF
  __int128 v270; // [rsp+468h] [rbp-458h]
  __int64 v271; // [rsp+478h] [rbp-448h]
  int v272; // [rsp+480h] [rbp-440h]
  __int64 v273; // [rsp+488h] [rbp-438h]
  __int64 v274; // [rsp+490h] [rbp-430h]
  int v275; // [rsp+498h] [rbp-428h]
  __int128 v276; // [rsp+4A0h] [rbp-420h]
  __int64 v277; // [rsp+4B0h] [rbp-410h]
  __int128 v278; // [rsp+4B8h] [rbp-408h]
  __int64 v279; // [rsp+4C8h] [rbp-3F8h]
  __int128 v280; // [rsp+4D0h] [rbp-3F0h]
  __int64 v281; // [rsp+4E0h] [rbp-3E0h]
  __int128 v282; // [rsp+4E8h] [rbp-3D8h]
  __int128 v283; // [rsp+4F8h] [rbp-3C8h]
  __int128 v284; // [rsp+508h] [rbp-3B8h]
  __int64 v285; // [rsp+518h] [rbp-3A8h]
  __m128 v286; // [rsp+520h] [rbp-3A0h] BYREF
  char s1; // [rsp+537h] [rbp-389h] BYREF
  unsigned int v288; // [rsp+540h] [rbp-380h] BYREF
  __int64 v289; // [rsp+700h] [rbp-1C0h]
  __int64 *v290; // [rsp+730h] [rbp-190h]
  __int128 v291; // [rsp+738h] [rbp-188h]
  __int64 v292; // [rsp+748h] [rbp-178h]
  __int128 v293; // [rsp+750h] [rbp-170h]
  __int64 v294; // [rsp+760h] [rbp-160h]
  __int128 v295; // [rsp+768h] [rbp-158h]
  unsigned __int64 v296; // [rsp+778h] [rbp-148h]
  __int128 v297; // [rsp+780h] [rbp-140h]
  __int64 v298; // [rsp+790h] [rbp-130h]
  __int128 v299; // [rsp+798h] [rbp-128h]
  __int64 v300; // [rsp+7A8h] [rbp-118h]
  __int128 v301; // [rsp+7B0h] [rbp-110h]
  __int64 v302; // [rsp+7C0h] [rbp-100h]
  __int128 v303; // [rsp+7C8h] [rbp-F8h]
  __int64 v304; // [rsp+7D8h] [rbp-E8h]
  __int64 v305; // [rsp+7E0h] [rbp-E0h]
  __int128 v306; // [rsp+7E8h] [rbp-D8h]
  __int64 v307; // [rsp+7F8h] [rbp-C8h]
  __int128 v308; // [rsp+800h] [rbp-C0h]
  __int64 v309; // [rsp+810h] [rbp-B0h]
  unsigned __int64 v310; // [rsp+818h] [rbp-A8h]
  __int64 v311; // [rsp+820h] [rbp-A0h]
  __int128 v312; // [rsp+828h] [rbp-98h]
  __int128 v313; // [rsp+838h] [rbp-88h]
  __int64 v314; // [rsp+848h] [rbp-78h]
  __int64 v315; // [rsp+850h] [rbp-70h]
  __int128 v316; // [rsp+858h] [rbp-68h]
  __int128 v317; // [rsp+868h] [rbp-58h]
  int v318; // [rsp+878h] [rbp-48h]
  char v319; // [rsp+87Ch] [rbp-44h]
  unsigned __int64 v320; // [rsp+888h] [rbp-38h]

  v183 = (__int64 (__fastcall ***)())a2;
  v320 = __readfsqword(0x28u);
  netnode_check();
  v200 = 0;
  v201 = nullptr;
  v202 = &v200;
  v203 = &v200;
  v204 = 0;
  v205 = nullptr;
  v207 = nullptr;
  v209 = nullptr;
  v211 = nullptr;
  v213 = -1;
  v214 = 0;
  v206 = 0;
  v208 = 0;
  v210 = 0;
  v212 = 0;
  v304 = netnode_altval();
  v290 = nullptr;
  si128 = _mm_loadh_ps((const double *)&v183);
  v292 = 0;
  v286 = si128;
  si128.m128_u64[0] = 0;
  v294 = 0;
  v296 = 0;
  v298 = 0;
  v300 = 0;
  v302 = 0;
  v305 = 0;
  v307 = 0;
  v309 = 0;
  v310 = -1;
  v311 = 0;
  v314 = 0;
  v315 = 0;
  v318 = 0;
  v291 = 0;
  v293 = 0;
  v295 = 0;
  v297 = 0;
  v299 = 0;
  v301 = 0;
  v303 = 0;
  v306 = 0;
  v308 = 0;
  v312 = 0;
  v313 = 0;
  v316 = 0;
  v317 = 0;
  v319 = 0;
  v185 = &v286;
  eah = get_eah();
  if ( *(_BYTE *)(eah + 28) )
  {
    v10 = *(_QWORD *)(eah + 8);
    *(_DWORD *)(eah + 24) = 8;
    *(_QWORD *)(eah + 16) = v10;
  }
  v185 = &v286;
  if ( !(unsigned __int8)sub_3B840((__int64)&v286, 255, a1[2].m128i_i8) )
    sub_1A260(
      (__int64)"Failed to parse dyld header. The file may be corrupted or truncated.",
      255,
      v11,
      v12,
      v13,
      v14,
      v179);
  p_s1 = &s1;
  do
  {
    if ( *p_s1 != 32 )
      break;
    ++p_s1;
  }
  while ( p_s1 != (char *)&v288 );
  LOBYTE(i) = strcmp(p_s1, "arm64_32") == 0;
  v16 = i;
  sub_11C10(p_s1);
  set_processor_type();
  v17 = BYTE5(v311);
  a1[855].m128i_i8[12] = BYTE5(v311);
  sub_11F40(v17, v16);
  v18 = (unsigned __int64)&v198;
  sub_2D310(0.0, (__int64)a1, (__int64)&v198, (__int64)v185, a3);
  if ( HIBYTE(v214) )
  {
    v18 = (unsigned __int64)"$ objc";
    netnode_check();
    if ( (debug & 0x10) != 0 )
    {
      sub_191F0((__int64)"locating objc optimization info... (for objc plugin)\n", "$ objc");
      LODWORD(i) = debug;
      if ( v288 <= 0x1D8 )
      {
        if ( (debug & 0x10) != 0 )
          sub_191F0((__int64)"falling back on section search in libobjc.A.dylib\n");
        goto LABEL_144;
      }
      if ( (debug & 0x10) != 0 )
        sub_191F0((__int64)"objcOptsOffset in shared cache header\n");
    }
    else if ( v288 <= 0x1D8 )
    {
LABEL_144:
      *(_OWORD *)v216 = 0;
      v184 = &v215;
      v215 = nullptr;
      v101 = qvector_reserve();
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_574E0);
      v215 = (__int64 (__fastcall **)())v101;
      *(_QWORD *)v216 = 25;
      *(_QWORD *)(v101 + 16) = 0x62696C79642E412ELL;
      *(__m128 *)v101 = si128;
      v102 = v215;
      *((_BYTE *)v215 + 24) = 0;
      v18 = v296;
      v103 = (unsigned __int64 *)(v296 + 24 * v297);
      if ( (unsigned __int64 *)v296 == v103 )
        goto LABEL_320;
      i = v296;
      v104 = *(_QWORD *)v216;
      v105 = (unsigned __int64 *)v296;
      while ( 1 )
      {
        if ( v105[1] )
        {
          v18 = *v105;
          v106 = ::s1;
          if ( !v104 )
            goto LABEL_147;
        }
        else
        {
          if ( !v104 )
          {
LABEL_303:
            v18 = i;
            if ( v105 != v103 )
            {
              v172 = (__int64)v105 - i;
              if ( v102 )
              {
                *(_QWORD *)v216 = 0;
                qfree();
              }
              if ( v172 != -24 )
              {
                v18 = 0xAAAAAAAAAAAAAAABLL * (v172 >> 3);
                v173 = sub_1C580((__int64)v185, v18);
                if ( v173 )
                {
                  v18 = 0;
                  BYTE4(v218) = 1;
                  v215 = &off_62AA0;
                  v223 = _mm_load_si128((const __m128i *)&xmmword_57480);
                  *(__m128i *)&v216[8] = _mm_load_si128((const __m128i *)&xmmword_574B0);
                  si128.m128_u64[0] = 0;
                  *(_QWORD *)v216 = v286.m128_u64[0];
                  v225 = _mm_load_si128((const __m128i *)&xmmword_574C0);
                  a5 = NAN;
                  v217 = -1;
                  LODWORD(v218) = 8;
                  v219 = (unsigned __int64 *)v173;
                  v220 = 0;
                  v221 = 0;
                  v224 = 0;
                  v226 = 0;
                  v228 = 0;
                  v229 = 0;
                  v231 = 0;
                  v233 = 0;
                  v235 = 0;
                  v237 = 0;
                  v239 = 0;
                  v222 = 0;
                  v227 = 0;
                  v230 = 0;
                  v232 = 0;
                  v234 = 0;
                  v236 = 0;
                  v238 = 0;
                  v240 = 0;
                  v241 = 0;
                  v243 = 0;
                  v254 = v304;
                  v245 = 0;
                  v247 = 0;
                  v249 = 0;
                  v250 = 0;
                  v251 = 0;
                  v253 = 0;
                  v255 = 2;
                  v256 = 0;
                  v258 = (unsigned __int64 *)v185;
                  v242 = 0;
                  v244 = 0;
                  v246 = 0;
                  v248 = 0;
                  v252 = -1;
                  v257 = 0;
                  if ( sub_25BB0((__int64)v184) && (v174 = v184, v18 = 0, sub_25EF0((__int64)v184, 0, 0, 0)) )
                  {
                    v18 = (unsigned __int64)"__TEXT";
                    if ( (unsigned __int8)sub_290B0((__int64)v174, "__TEXT", "__objc_opt_ro", &v259) )
                    {
                      v176 = v261;
                      v18 = v261;
                      v177 = sub_28D10((__int64)v184, v261);
                      if ( v177 == -1 )
                      {
                        v18 = v176;
                        sub_112F0(
                          (__int64)"ERROR: locate_objc_opt: failed to read objc_opt_ro version at 0x%llX\n",
                          v176);
                      }
                      else if ( v177 > 0xF )
                      {
                        v178 = sub_28DA0((__int64)v184, v176 + 40) + v176;
                        v18 = -7;
                        v194 = v178;
                        netnode_supset();
                        if ( (debug & 0x10) != 0 )
                        {
                          v18 = v178;
                          sub_191F0((__int64)"objc_opt_t selbase: 0x%a\n", 0.0);
                        }
                      }
                      else if ( (debug & 0x10) != 0 )
                      {
                        sub_191F0((__int64)"objc_opt_t version < 16, no selbase\n");
                      }
                    }
                    else
                    {
                      sub_112F0((__int64)"ERROR: locate_objc_opt: failed to get objc_opt_ro section\n");
                    }
                  }
                  else
                  {
                    sub_112F0((__int64)"ERROR: locate_objc_opt: failed to parse macho for libobjc.A.dylib\n");
                  }
                  sub_162E0((__int64)v184);
                  close_linput();
                }
                else
                {
                  sub_112F0((__int64)"ERROR: locate_objc_opt: failed to create macho for libobjc.A.dylib\n");
                }
                goto LABEL_8;
              }
LABEL_322:
              sub_112F0((__int64)"ERROR: locate_objc_opt: couldn't find image index for libobjc.A.dylib\n", v18);
              goto LABEL_8;
            }
LABEL_320:
            if ( v102 )
            {
              *(_QWORD *)v216 = 0;
              qfree();
            }
            goto LABEL_322;
          }
          v18 = (unsigned __int64)::s1;
        }
        v106 = (const char *)v102;
LABEL_147:
        if ( !strcmp(v106, (const char *)v18) )
          goto LABEL_303;
        v105 += 3;
        if ( v103 == v105 )
          goto LABEL_320;
      }
    }
    v163 = (unsigned __int64 *)v290;
    v164 = &v290[4 * v291];
    if ( v290 != v164 )
    {
      while ( (~(unsigned __int8)*((_DWORD *)v163 + 6) & 5) != 0 )
      {
        v163 += 4;
        if ( v164 == (__int64 *)v163 )
          goto LABEL_325;
      }
      if ( v163 )
      {
        if ( v310 != -1 )
        {
          v165 = *v163;
          if ( v310 >= *v163 )
          {
            v166 = sub_1C420(v185, v165 + v289);
            v168 = v166;
            if ( !v166 )
            {
              v18 = v167;
              sub_112F0((__int64)"ERROR: locate_objc_opt: couldn't find subcache for VM: %llX\n", v167);
              goto LABEL_8;
            }
            v169 = (unsigned __int64 *)v166[66];
            i = v168[67];
            v170 = &v169[4 * i];
            if ( v169 != v170 )
            {
              while ( 1 )
              {
                v171 = *v169;
                if ( v167 >= *v169 && v169[1] >= v167 - v171 )
                  break;
                v169 += 4;
                if ( v170 == v169 )
                  goto LABEL_302;
              }
              if ( v169[2] + v167 - v171 != -1 )
              {
                qlseek();
                v18 = (unsigned __int64)&v194;
                if ( qlread() == 8 )
                {
                  v18 = -7;
                  v215 = (__int64 (__fastcall **)())(v194 + v165);
                  netnode_supset();
                }
                else
                {
                  sub_112F0((__int64)"ERROR: locate_objc_opt: read of opt header failed\n", &v194);
                }
                goto LABEL_8;
              }
            }
LABEL_302:
            v18 = v167;
            sub_112F0((__int64)"ERROR: locate_objc_opt: couldn't find offset for VM: %a\n", 0.0);
            goto LABEL_8;
          }
        }
      }
    }
LABEL_325:
    sub_112F0((__int64)"ERROR: locate_objc_opt: failed to get dsc header range\n", "$ objc");
  }
LABEL_8:
  if ( !(_BYTE)v214 )
  {
    if ( v213 != -1 )
    {
      v20 = (unsigned __int64 *)v185;
      v18 = (unsigned __int64)&v194;
      if ( (unsigned __int8)sub_1C380(v185, &v194, (unsigned __int64 *)&v215) )
      {
        if ( (unsigned __int64)v21 >= v194 && v21 < v215 )
        {
          v18 = (unsigned __int64)v20;
          sub_240A0((__int64)a1, (__int64)v20, *(double *)si128.m128_u64, a5, a6);
        }
      }
    }
    v184 = (__int64 (__fastcall ***)())((char *)v205 + 4 * v206);
    if ( v205 != v184 )
    {
      i = (unsigned __int64)v205;
      do
      {
        v22 = *(_DWORD *)i;
        if ( (unsigned __int8)callui(27, v18, v19) )
          sub_1A260(0, v18, v23, v24, v25, v26, v179);
        sub_19440((__int64)"Loading branch island: %a");
        v27 = _mm_loadu_si128(a1);
        v260 = 0u;
        v259 = v27;
        v267 = 0;
        v268 = 0;
        v270 = 0;
        v278 = 0;
        v280 = 0;
        v282 = 0;
        v261 = 0;
        memset(v269, 0, sizeof(v269));
        v271 = 0;
        v272 = -1;
        v273 = 0;
        v274 = -1;
        v275 = 0;
        v277 = 0;
        v279 = 0;
        v281 = 0;
        v285 = 0;
        v276 = -1;
        v262 = 0;
        v263 = 0;
        v264 = 0;
        v265 = 0;
        v266 = 0;
        v283 = 0;
        v284 = 0;
        *(_QWORD *)&v260 = sub_1C700((__int64)v185, (int)v22);
        if ( (_QWORD)v260 )
        {
          *((_QWORD *)&v260 + 1) = qlsize();
          v28 = a1->m128i_i64[1];
          HIDWORD(v285) |= 0x91u;
          *(_QWORD *)&v276 = v213 & *(_QWORD *)(v28 + 16);
          sub_1CC90(&v259, "dyld_branch_island");
          v18 = (unsigned __int64)&v259;
          v273 = v304;
          sub_44BA0((__int64)a1, (__int64)&v259);
          close_linput();
          v19 = v259.m128i_i64[1];
          if ( *(_QWORD *)(v259.m128i_i64[1] + 16) == (_QWORD)v276 || (_QWORD)v276 == -1 )
          {
            v18 = (int)v22;
            v187[1] = 1;
            netnode_supset();
          }
          if ( v281 )
          {
            v29 = v282;
            if ( (_QWORD)v282 )
            {
              v30 = i;
              v31 = 0;
              v32 = v281;
              do
              {
                v33 = (_QWORD *)(v32 + 24 * v31);
                if ( *v33 )
                {
                  v33[1] = 0;
                  qfree();
                  v32 = v281;
                }
                ++v31;
              }
              while ( v29 != v31 );
              i = v30;
            }
            *(_QWORD *)&v282 = 0;
            qfree();
          }
          if ( v279 )
          {
            *(_QWORD *)&v280 = 0;
            qfree();
          }
          if ( v277 )
          {
            *(_QWORD *)&v278 = 0;
            qfree();
          }
          if ( *((_QWORD *)&v269[1] + 1) )
          {
            *(_QWORD *)&v270 = 0;
            qfree();
          }
          if ( *(_QWORD *)&v269[0] )
          {
            *((_QWORD *)&v269[0] + 1) = 0;
            qfree();
          }
          if ( !*((_QWORD *)&v267 + 1) )
            goto LABEL_36;
        }
        else
        {
          v18 = v22;
          sub_112F0((__int64)"Warning: failed to load branch island: %d\n", v22);
          if ( v281 )
          {
            v69 = v282;
            if ( (_QWORD)v282 )
            {
              v70 = i;
              v71 = 0;
              v72 = v281;
              do
              {
                v73 = (_QWORD *)(v72 + 24 * v71);
                if ( *v73 )
                {
                  v73[1] = 0;
                  qfree();
                  v72 = v281;
                }
                ++v71;
              }
              while ( v69 != v71 );
              i = v70;
            }
            *(_QWORD *)&v282 = 0;
            qfree();
          }
          if ( v279 )
          {
            *(_QWORD *)&v280 = 0;
            qfree();
          }
          if ( v277 )
          {
            *(_QWORD *)&v278 = 0;
            qfree();
          }
          if ( *((_QWORD *)&v269[1] + 1) )
          {
            *(_QWORD *)&v270 = 0;
            qfree();
          }
          if ( *(_QWORD *)&v269[0] )
          {
            *((_QWORD *)&v269[0] + 1) = 0;
            qfree();
          }
          if ( !*((_QWORD *)&v267 + 1) )
            goto LABEL_36;
        }
        *(_QWORD *)&v268 = 0;
        qfree();
LABEL_36:
        i += 4LL;
      }
      while ( v184 != (__int64 (__fastcall ***)())i );
    }
    if ( v204 )
    {
      i = (unsigned __int64)v202;
      if ( v202 != &v200 )
      {
        v34 = 0;
        do
        {
          LODWORD(v184) = *(_DWORD *)(i + 32);
          if ( (unsigned __int8)callui(27, v18, v19) )
            sub_1A260(0, v18, v35, v36, v37, v38, v179);
          v39 = (int)v184;
          ++v34;
          v183 = (__int64 (__fastcall ***)())qbasename();
          sub_19440((__int64)"Loading module %s (%zu/%zu)");
          v40 = _mm_loadu_si128(a1);
          v260 = 0u;
          v259 = v40;
          v267 = 0;
          v268 = 0;
          v270 = 0;
          v278 = 0;
          v280 = 0;
          v282 = 0;
          v261 = 0;
          memset(v269, 0, sizeof(v269));
          v271 = 0;
          v272 = -1;
          v273 = 0;
          v274 = -1;
          v275 = 0;
          v277 = 0;
          v279 = 0;
          v281 = 0;
          v285 = 0;
          v276 = -1;
          v262 = 0;
          v263 = 0;
          v264 = 0;
          v265 = 0;
          v266 = 0;
          v283 = 0;
          v284 = 0;
          *(_QWORD *)&v260 = sub_1C580((__int64)v185, v39);
          if ( (_QWORD)v260 )
          {
            *((_QWORD *)&v260 + 1) = qlsize();
            v18 = (unsigned __int64)&v259;
            HIDWORD(v285) |= (HIBYTE(v214) << 9) | 0x811;
            *(_QWORD *)&v276 = v213 & *(_QWORD *)(a1->m128i_i64[1] + 16);
            v273 = v304;
            *(_QWORD *)&v267 = v185;
            sub_44BA0((__int64)a1, (__int64)&v259);
            close_linput();
            if ( *(_QWORD *)(v259.m128i_i64[1] + 16) == (_QWORD)v276 || (_QWORD)v276 == -1 )
            {
              v18 = v39;
              v187[2] = 1;
              netnode_supset();
            }
            if ( v281 )
            {
              v41 = v282;
              if ( (_QWORD)v282 )
              {
                v42 = 0;
                v43 = v281;
                do
                {
                  v44 = (_QWORD *)(v43 + 24 * v42);
                  if ( *v44 )
                  {
                    v44[1] = 0;
                    qfree();
                    v43 = v281;
                  }
                  ++v42;
                }
                while ( v41 != v42 );
              }
              *(_QWORD *)&v282 = 0;
              qfree();
            }
            if ( v279 )
            {
              *(_QWORD *)&v280 = 0;
              qfree();
            }
            if ( v277 )
            {
              *(_QWORD *)&v278 = 0;
              qfree();
            }
            if ( *((_QWORD *)&v269[1] + 1) )
            {
              *(_QWORD *)&v270 = 0;
              qfree();
            }
            if ( *(_QWORD *)&v269[0] )
            {
              *((_QWORD *)&v269[0] + 1) = 0;
              qfree();
            }
            if ( !*((_QWORD *)&v267 + 1) )
              goto LABEL_61;
          }
          else
          {
            v18 = (unsigned int)v184;
            sub_112F0((__int64)"Warning: failed to load subfile: %d (%s)\n", (_DWORD)v184, (const char *)v183);
            if ( v281 )
            {
              v74 = v282;
              if ( (_QWORD)v282 )
              {
                v75 = 0;
                v76 = v281;
                do
                {
                  v77 = (_QWORD *)(v76 + 24 * v75);
                  if ( *v77 )
                  {
                    v77[1] = 0;
                    qfree();
                    v76 = v281;
                  }
                  ++v75;
                }
                while ( v74 != v75 );
              }
              *(_QWORD *)&v282 = 0;
              qfree();
            }
            if ( v279 )
            {
              *(_QWORD *)&v280 = 0;
              qfree();
            }
            if ( v277 )
            {
              *(_QWORD *)&v278 = 0;
              qfree();
            }
            if ( *((_QWORD *)&v269[1] + 1) )
            {
              *(_QWORD *)&v270 = 0;
              qfree();
            }
            if ( *(_QWORD *)&v269[0] )
            {
              *((_QWORD *)&v269[0] + 1) = 0;
              qfree();
            }
            if ( !*((_QWORD *)&v267 + 1) )
              goto LABEL_61;
          }
          *(_QWORD *)&v268 = 0;
          qfree();
LABEL_61:
          i = std::_Rb_tree_increment();
        }
        while ( (int *)i != &v200 );
      }
      v18 = (unsigned __int64)v185;
      sub_44280(a1, v185, (__int64)v199);
    }
    v215 = nullptr;
    LODWORD(v217) = -1;
    memset(v216, 0, sizeof(v216));
    if ( (_QWORD)v208 )
    {
      v45 = v207;
      v46 = &v207[v208];
      if ( v46 != v207 )
      {
        do
        {
          i = *v45;
          if ( (unsigned __int8)callui(27, v18, v19) )
            sub_1A260(0, v18, v47, v48, v49, v50, v179);
          sub_19440((__int64)"Loading branch mapping %a");
          v187[3] = 1;
          netnode_supset();
          v18 = (unsigned __int64)v185;
          sub_36250((__int64)a1, v185, i);
          ++v45;
        }
        while ( v46 != v45 );
      }
      v51 = v210;
    }
    else
    {
      v51 = v210;
      if ( !(_QWORD)v210 )
      {
LABEL_72:
        v59 = v211;
        v60 = &v211[2 * v212];
        if ( v60 == v211 )
        {
          v184 = &v215;
        }
        else
        {
          do
          {
            if ( (unsigned __int8)callui(27, v18, v19) )
              sub_1A260(0, v18, v61, v62, v63, v64, v179);
            v65 = v59[1];
            i = *v59;
            sub_19440((__int64)"Loading gap region: %a");
            v188 = (const char *)v65;
            netnode_supset();
            v18 = (unsigned __int64)&v215;
            v184 = &v215;
            sub_36700((__int64)a1, (__int64)&v215, v185, i, v65);
            v59 += 2;
          }
          while ( v60 != v59 );
        }
        sub_41080((__int64)a1, (__int64)v185, (__int64)v184);
        if ( v215 )
        {
          *(_QWORD *)v216 = 0;
          qfree();
        }
        sub_1A3D0((__int64)v185);
        if ( v211 )
        {
          *(_QWORD *)&v212 = 0;
          qfree();
        }
        if ( v209 )
        {
          *(_QWORD *)&v210 = 0;
          qfree();
        }
        if ( v207 )
        {
          *(_QWORD *)&v208 = 0;
          qfree();
        }
        if ( v205 )
        {
          *(_QWORD *)&v206 = 0;
          qfree();
        }
        v66 = (_QWORD **)v201;
        if ( v201 )
        {
          do
          {
            sub_16110(v66[3]);
            v67 = v66;
            v66 = (_QWORD **)v66[2];
            operator delete(v67, 0x28u);
          }
          while ( v66 );
        }
        return v320 - __readfsqword(0x28u);
      }
    }
    v52 = v209;
    v53 = &v209[2 * v51];
    if ( v53 != v209 )
    {
      do
      {
        if ( (unsigned __int8)callui(27, v18, v19) )
          sub_1A260(0, v18, v54, v55, v56, v57, v179);
        v58 = v52[1];
        i = *v52;
        sub_19440((__int64)"Loading GOT: %a");
        v187[4] = v58;
        netnode_supset();
        sub_364B0((__int64)a1, v185, i, v58);
        v18 = (unsigned __int64)v52;
        rangeset_t_add();
        v52 += 2;
      }
      while ( v53 != v52 );
    }
    v18 = (unsigned __int64)v185;
    sub_38710((__int64)a1, (__int64)v185);
    goto LABEL_72;
  }
  sub_112F0((__int64)"Loading complete dyld cache\n");
  v190 = nullptr;
  v192 = 0;
  v193 = -1;
  v191 = 0;
  sub_19440((__int64)"Loading complete dyld cache");
  if ( v319 )
  {
    sub_112F0((__int64)"Loading branch mapping (umbrella cache)\n");
    sub_36250((__int64)a1, v185, 0xFFFFFFFFFFFFFFFFLL);
  }
  for ( i = 0; (int)v291 > (int)i; ++i )
  {
    v78 = &v290[4 * i];
    sub_112F0(
      (__int64)"Loading mapping %d: address %llx, file offset %016llx, size %016llx, prot %x (max %x)\n",
      i,
      *v78,
      v78[2],
      v78[1],
      *((_DWORD *)v78 + 7),
      *((_DWORD *)v78 + 6));
    v79 = v78[2];
    v80 = *(_QWORD *)(a1->m128i_i64[1] + 16);
    v81 = (__int64 (__fastcall **)())(v80 & *v78);
    v82 = v80 & (v78[1] + *v78);
    file2base();
    if ( (unsigned __int8)callui(27, v79, v83) )
      sub_1A260(0, v79, v84, v85, v86, v87, v179);
    v215 = v81;
    *(_QWORD *)v216 = v82;
    rangeset_t_add();
  }
  LODWORD(v184) = 0;
  v181 = *((__int64 **)&v312 + 1);
  v180 = *((_QWORD *)&v312 + 1) + 8 * v313;
  v183 = &v215;
  if ( v180 != *((_QWORD *)&v312 + 1) )
  {
    do
    {
      v88 = *v181;
      if ( *(_BYTE *)(*v181 + 860) )
      {
        sub_112F0((__int64)"Loading branch mapping subcache: %d\n", (_DWORD)v184);
        sub_36250((__int64)a1, (_QWORD *)v88, 0xFFFFFFFFFFFFFFFFLL);
      }
      else
      {
        v89 = *(_DWORD *)(v88 + 536);
        i = 0;
        if ( v89 > 0 )
        {
          do
          {
            v90 = *(_QWORD *)(v88 + 528) + 32 * i;
            v91 = (_QWORD *)v90;
            sub_112F0(
              (__int64)"Loading subcache %d mapping %d: address %llx, file offset %016llx, size %016llx, prot %x (max %x)\n",
              (_DWORD)v184,
              i,
              *(_QWORD *)v90,
              *(_QWORD *)(v90 + 16),
              *(_QWORD *)(v90 + 8),
              *(_DWORD *)(v90 + 28),
              *(_DWORD *)(v90 + 24));
            v92 = *(_QWORD *)(a1->m128i_i64[1] + 16);
            v93 = v91[2];
            v94 = (__int64 (__fastcall **)())(v92 & *v91);
            v95 = v92 & (v91[1] + *v91);
            file2base();
            if ( (unsigned __int8)callui(27, v93, v96) )
              sub_1A260(0, v93, v97, v98, v99, v100, v179);
            v215 = v94;
            *(_QWORD *)v216 = v95;
            rangeset_t_add();
            ++i;
          }
          while ( *(_DWORD *)(v88 + 536) > (int)i );
        }
      }
      ++v181;
      LODWORD(v184) = (_DWORD)v184 + 1;
    }
    while ( (__int64 *)v180 != v181 );
  }
  v187[0] = 0;
  if ( (_QWORD)v301 )
  {
    v175 = (unsigned __int64 *)v185;
    sub_40E20(v187, (__int64)v185);
    v215 = nullptr;
    LODWORD(v217) = -1;
    memset(v216, 0, sizeof(v216));
    sub_23EC0((__int64)a1, (__int64)v175, v187[0], (__int64)&v215, 0);
  }
  v107 = *((__int64 **)&v312 + 1);
  v108 = *((_QWORD *)&v312 + 1) + 8 * v313;
  if ( v108 == *((_QWORD *)&v312 + 1) )
  {
    v184 = &v215;
  }
  else
  {
    do
    {
      v109 = v187[0];
      v110 = *v107;
      if ( !v187[0] )
      {
        sub_40E20(v187, (__int64)v185);
        v109 = v187[0];
      }
      v215 = nullptr;
      LODWORD(v217) = -1;
      v184 = &v215;
      memset(v216, 0, sizeof(v216));
      sub_23EC0((__int64)a1, v110, v109, (__int64)&v215, 0);
      ++v107;
    }
    while ( (__int64 *)v108 != v107 );
  }
  *(_DWORD *)v216 = 0;
  *(_QWORD *)&v216[8] = 0;
  *(_QWORD *)&v216[16] = v216;
  v217 = (__int64)v216;
  v218 = 0;
  sub_44280(a1, v185, (__int64)v184);
  sub_16110(*(_QWORD **)&v216[8]);
  v111 = v293;
  *(_DWORD *)v216 = 0;
  v112 = (unsigned int)v293;
  *(_QWORD *)&v216[16] = v216;
  *(_QWORD *)&v216[8] = 0;
  v217 = (__int64)v216;
  v218 = 0;
  sub_19440((__int64)"Loading subfiles (total %d subfiles)");
  if ( v111 > 0 )
  {
    i = 0;
    v182 = (unsigned int)(v111 - 1);
    while ( 1 )
    {
      LODWORD(v183) = i;
      if ( (unsigned __int8)callui(27, v112, v113) )
        sub_1A260(0, v112, v114, v115, v116, v117, v179);
      v118 = ::s1;
      v119 = v296 + 24 * i;
      if ( *(_QWORD *)(v119 + 8) )
        v118 = *(const char **)v119;
      sub_112F0((__int64)"Loading subfile %d: %s\n", (_DWORD)v183, v118);
      v112 = *(_QWORD *)(v292 + 32 * i);
      v120 = *(_QWORD **)&v216[8];
      if ( !*(_QWORD *)&v216[8] )
        goto LABEL_171;
      v121 = v216;
      do
      {
        while ( 1 )
        {
          v122 = v120[2];
          v123 = v120[3];
          if ( v120[4] < (unsigned __int64)v112 )
            break;
          v121 = v120;
          v120 = (_QWORD *)v120[2];
          if ( !v122 )
            goto LABEL_169;
        }
        v120 = (_QWORD *)v120[3];
      }
      while ( v123 );
LABEL_169:
      if ( v121 != v216 && (unsigned __int64)v112 >= *((_QWORD *)v121 + 4) )
      {
        sub_112F0((__int64)"%a: already loaded (symlink %s)\n", 0.0, (const char *)v112);
      }
      else
      {
LABEL_171:
        v194 = *(_QWORD *)(v292 + 32 * i);
        sub_423C0(v184, &v194);
        v124 = _mm_loadu_si128(a1);
        v260 = 0u;
        v259 = v124;
        v267 = 0;
        v268 = 0;
        v270 = 0;
        v278 = 0;
        v280 = 0;
        v282 = 0;
        v261 = 0;
        memset(v269, 0, sizeof(v269));
        v271 = 0;
        v272 = -1;
        v273 = 0;
        v274 = -1;
        v275 = 0;
        v277 = 0;
        v279 = 0;
        v281 = 0;
        v285 = 0;
        v276 = -1;
        v262 = 0;
        v263 = 0;
        v264 = 0;
        v265 = 0;
        v266 = 0;
        v283 = 0;
        v284 = 0;
        *(_QWORD *)&v260 = sub_1C580((__int64)v185, i);
        if ( (_QWORD)v260 )
        {
          v125 = qlsize();
          HIDWORD(v285) |= 0x51u;
          *((_QWORD *)&v260 + 1) = v125;
          sub_1CC90(&v259, v118);
          v112 = (__int64)&v259;
          *(_QWORD *)&v267 = v185;
          sub_44BA0((__int64)a1, (__int64)&v259);
          close_linput();
          if ( v281 )
          {
            v126 = v282;
            if ( (_QWORD)v282 )
            {
              v127 = 0;
              v128 = v281;
              do
              {
                v129 = (_QWORD *)(v128 + 24 * v127);
                if ( *v129 )
                {
                  v129[1] = 0;
                  qfree();
                  v128 = v281;
                }
                ++v127;
              }
              while ( v126 != v127 );
            }
            *(_QWORD *)&v282 = 0;
            qfree();
          }
          if ( v279 )
          {
            *(_QWORD *)&v280 = 0;
            qfree();
          }
          if ( v277 )
          {
            *(_QWORD *)&v278 = 0;
            qfree();
          }
          if ( *((_QWORD *)&v269[1] + 1) )
          {
            *(_QWORD *)&v270 = 0;
            qfree();
          }
          if ( *(_QWORD *)&v269[0] )
          {
            *((_QWORD *)&v269[0] + 1) = 0;
            qfree();
          }
          if ( *((_QWORD *)&v267 + 1) )
            goto LABEL_188;
        }
        else
        {
          v112 = (unsigned int)v183;
          sub_112F0((__int64)"Warning: failed to load subfile: %d (%s)\n", (_DWORD)v183, v118);
          if ( v281 )
          {
            v130 = v282;
            if ( (_QWORD)v282 )
            {
              v131 = 0;
              v132 = v281;
              do
              {
                v133 = (_QWORD *)(v132 + 24 * v131);
                if ( *v133 )
                {
                  v133[1] = 0;
                  qfree();
                  v132 = v281;
                }
                ++v131;
              }
              while ( v130 != v131 );
            }
            *(_QWORD *)&v282 = 0;
            qfree();
          }
          if ( v279 )
          {
            *(_QWORD *)&v280 = 0;
            qfree();
          }
          if ( v277 )
          {
            *(_QWORD *)&v278 = 0;
            qfree();
          }
          if ( *((_QWORD *)&v269[1] + 1) )
          {
            *(_QWORD *)&v270 = 0;
            qfree();
          }
          if ( *(_QWORD *)&v269[0] )
          {
            *((_QWORD *)&v269[0] + 1) = 0;
            qfree();
          }
          if ( *((_QWORD *)&v267 + 1) )
          {
LABEL_188:
            *(_QWORD *)&v268 = 0;
            qfree();
          }
        }
      }
      v113 = v182;
      if ( i == v182 )
        break;
      ++i;
    }
  }
  LODWORD(v183) = v299;
  if ( (int)v299 > 0 )
  {
    i = 0;
    v134 = (unsigned int)(v299 - 1);
    while ( 1 )
    {
      if ( (unsigned __int8)callui(27, v112, v113) )
        sub_1A260(0, v112, v135, v136, v137, v138, v179);
      v139 = i;
      sub_19440((__int64)"%d/%d loading branch islands");
      v140 = _mm_loadu_si128(a1);
      v260 = 0u;
      v259 = v140;
      v267 = 0;
      v268 = 0;
      v270 = 0;
      v278 = 0;
      v280 = 0;
      v282 = 0;
      v261 = 0;
      memset(v269, 0, sizeof(v269));
      v271 = 0;
      v272 = -1;
      v273 = 0;
      v274 = -1;
      v275 = 0;
      v277 = 0;
      v279 = 0;
      v281 = 0;
      v285 = 0;
      v276 = -1;
      v262 = 0;
      v263 = 0;
      v264 = 0;
      v265 = 0;
      v266 = 0;
      v283 = 0;
      v284 = 0;
      *(_QWORD *)&v260 = sub_1C700((__int64)v185, v139);
      if ( (_QWORD)v260 )
        break;
      v112 = (unsigned int)i;
      sub_112F0((__int64)"Warning: failed to load branch island: %d\n", i);
      if ( v281 )
      {
        v147 = v282;
        if ( (_QWORD)v282 )
        {
          v148 = 0;
          v149 = v281;
          do
          {
            v150 = (_QWORD *)(v149 + 24 * v148);
            if ( *v150 )
            {
              v150[1] = 0;
              qfree();
              v149 = v281;
            }
            ++v148;
          }
          while ( v147 != v148 );
        }
        *(_QWORD *)&v282 = 0;
        qfree();
      }
      if ( v279 )
      {
        *(_QWORD *)&v280 = 0;
        qfree();
      }
      if ( v277 )
      {
        *(_QWORD *)&v278 = 0;
        qfree();
      }
      if ( *((_QWORD *)&v269[1] + 1) )
      {
        *(_QWORD *)&v270 = 0;
        qfree();
      }
      if ( *(_QWORD *)&v269[0] )
      {
        *((_QWORD *)&v269[0] + 1) = 0;
        qfree();
      }
      if ( !*((_QWORD *)&v267 + 1) )
        goto LABEL_230;
      *(_QWORD *)&v268 = 0;
      qfree();
      v146 = i + 1;
      if ( v134 == i )
        goto LABEL_249;
LABEL_231:
      i = v146;
    }
    v141 = qlsize();
    HIDWORD(v285) |= 0xD1u;
    *((_QWORD *)&v260 + 1) = v141;
    sub_1CC90(&v259, "dyld_branch_island");
    v112 = (__int64)&v259;
    sub_44BA0((__int64)a1, (__int64)&v259);
    close_linput();
    if ( v281 )
    {
      v142 = v282;
      if ( (_QWORD)v282 )
      {
        v143 = 0;
        v144 = v281;
        do
        {
          v145 = (_QWORD *)(v144 + 24 * v143);
          if ( *v145 )
          {
            v145[1] = 0;
            qfree();
            v144 = v281;
          }
          ++v143;
        }
        while ( v142 != v143 );
      }
      *(_QWORD *)&v282 = 0;
      qfree();
    }
    if ( v279 )
    {
      *(_QWORD *)&v280 = 0;
      qfree();
    }
    if ( v277 )
    {
      *(_QWORD *)&v278 = 0;
      qfree();
    }
    if ( *((_QWORD *)&v269[1] + 1) )
    {
      *(_QWORD *)&v270 = 0;
      qfree();
    }
    if ( *(_QWORD *)&v269[0] )
    {
      *((_QWORD *)&v269[0] + 1) = 0;
      qfree();
    }
    if ( *((_QWORD *)&v267 + 1) )
    {
      *(_QWORD *)&v268 = 0;
      qfree();
    }
LABEL_230:
    v146 = i + 1;
    if ( v134 == i )
      goto LABEL_249;
    goto LABEL_231;
  }
LABEL_249:
  sub_14490(*(_QWORD **)&v216[8]);
  sub_240A0((__int64)a1, (__int64)v185, 0.0, a5, a6);
  for ( j = get_first_seg(); j; j = get_next_seg() )
    rangeset_t_sub();
  v194 = 0;
  v196 = 0;
  v197 = -1;
  v195 = 0;
  sub_19440((__int64)"locating GOT(s)\n");
  memset(v216, 0, sizeof(v216));
  v217 = 0;
  LODWORD(v218) = -1;
  v215 = off_64748;
  v219 = &v194;
  sub_1BDC0((__int64)v185, (__int64)v184);
  v152 = *((_QWORD *)&v312 + 1) + 8 * v313;
  v153 = *((__int64 **)&v312 + 1);
  if ( v152 != *((_QWORD *)&v312 + 1) )
  {
    do
    {
      v154 = v153;
      sub_1BDC0(*v153, (__int64)v184);
      v153 = v154 + 1;
    }
    while ( (__int64 *)v152 != v154 + 1 );
  }
  i = (unsigned __int64)&v190;
  rangeset_t_intersect();
  v155 = v194;
  v156 = v194 + 16 * v195;
  if ( v156 != v194 )
  {
    do
    {
      sub_19440((__int64)"loading GOT(s)");
      sub_364B0((__int64)a1, v185, *(_QWORD *)v155, *(_QWORD *)(v155 + 8));
      rangeset_t_sub();
      v155 += 16LL;
    }
    while ( v156 != v155 );
  }
  sub_41080((__int64)a1, (__int64)v185, (__int64)&v194);
  v188 = nullptr;
  v189 = 0;
  qbasename();
  v157 = "%s:EXTERN";
  sub_35470((__int64 *)&v188);
  v159 = v190;
  i = (unsigned __int64)&v190[v191];
  if ( (const __m128i *)i != v190 )
  {
    do
    {
      if ( (unsigned __int8)callui(27, v157, v158) )
        break;
      v261 = 0;
      v259 = 0;
      v262 = 0u;
      *(_QWORD *)&v270 = 0xFFFFFFFF00000000LL;
      v260 = 0;
      v263 = -1;
      v264 = -1;
      v265 = -1;
      v266 = -1;
      v267 = -1;
      v268 = -1;
      memset(v269, 255, sizeof(v269));
      v259 = _mm_loadu_si128(v159);
      *((_QWORD *)&v262 + 1) = allocate_selector();
      v160 = a1[855].m128i_i8[12];
      v157 = v188;
      WORD2(v262) |= 4u;
      LOWORD(v262) = 513;
      BYTE3(v262) = v160 + 1;
      LOBYTE(v270) = 1;
      add_segm_ex();
      ++v159;
    }
    while ( (const __m128i *)i != v159 );
  }
  if ( a1[853].m128i_i64[0] || a1[850].m128i_i64[1] )
    sub_38710((__int64)a1, (__int64)v185);
  if ( v188 )
  {
    *(_QWORD *)&v189 = 0;
    qfree();
  }
  v215 = off_62AC0;
  if ( *(_QWORD *)v216 )
  {
    *(_QWORD *)&v216[8] = 0;
    qfree();
  }
  if ( v194 )
  {
    *(_QWORD *)&v195 = 0;
    qfree();
  }
  if ( v190 )
  {
    *(_QWORD *)&v191 = 0;
    qfree();
  }
  sub_1A3D0((__int64)v185);
  if ( v211 )
  {
    *(_QWORD *)&v212 = 0;
    qfree();
  }
  if ( v209 )
  {
    *(_QWORD *)&v210 = 0;
    qfree();
  }
  if ( v207 )
  {
    *(_QWORD *)&v208 = 0;
    qfree();
  }
  if ( v205 )
  {
    *(_QWORD *)&v206 = 0;
    qfree();
  }
  v161 = (_QWORD **)v201;
  if ( v201 )
  {
    do
    {
      sub_16110(v161[3]);
      v162 = v161;
      v161 = (_QWORD **)v161[2];
      operator delete(v162, 0x28u);
    }
    while ( v161 );
  }
  return v320 - __readfsqword(0x28u);
}

