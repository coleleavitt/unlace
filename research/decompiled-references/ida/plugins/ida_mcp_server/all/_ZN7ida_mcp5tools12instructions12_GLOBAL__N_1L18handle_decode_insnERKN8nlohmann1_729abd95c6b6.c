_QWORD *__fastcall ida_mcp::tools::instructions::`anonymous namespace'::handle_decode_insn(_QWORD *a1, __int64 a2)
{
  void *v2; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // rbp
  char *v5; // rax
  char *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // r14
  size_t v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rbp
  size_t v15; // rax
  int v16; // eax
  char *v17; // rbp
  int *v18; // rax
  int *v19; // r12
  __int64 v20; // rax
  char v21; // r13
  char *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  std::runtime_error *v25; // rbx
  const char *v26; // r12
  __int64 *v27; // rax
  _QWORD *v28; // r15
  __int64 *v29; // rbx
  unsigned __int32 v30; // r14d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rax
  __int128 v37; // xmm0
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int128 v40; // xmm0
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  size_t v43; // rax
  unsigned int v44; // ebx
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  _QWORD *v48; // rcx
  size_t v49; // rsi
  char *v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  _QWORD *v55; // r13
  __int8 v56; // si
  __int64 v57; // rax
  __int64 v58; // rax
  size_t v59; // rax
  unsigned int v60; // ebx
  _QWORD *v61; // rdx
  _QWORD *v62; // rax
  _QWORD *v63; // rcx
  _QWORD *v64; // rdx
  __int128 v65; // xmm0
  size_t v66; // rsi
  __int64 v67; // rax
  const char *v68; // rbp
  __int64 *v69; // rax
  void *v70; // r14
  __int64 *v71; // rbx
  size_t v72; // rax
  size_t v73; // r15
  __int64 v74; // rax
  __int128 v75; // xmm0
  __int64 v76; // rax
  __int64 v77; // rax
  __int128 v78; // xmm0
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rbx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  size_t v87; // rax
  __int64 v88; // rbp
  size_t v89; // rbx
  const char *v90; // rbx
  char *v91; // rax
  char v92; // bp
  unsigned __int64 v93; // rdx
  char *v94; // r15
  const char *v95; // r12
  unsigned int v96; // r14d
  unsigned int v97; // r14d
  unsigned int v98; // eax
  __int64 v99; // rcx
  __int64 v100; // rax
  _QWORD *v101; // rax
  unsigned int v102; // edi
  unsigned __int64 v103; // rdx
  char *v104; // rax
  unsigned int v105; // ebx
  char *v106; // rsi
  unsigned int v107; // ebx
  unsigned int v108; // eax
  __int64 v109; // rcx
  char *v110; // rax
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rax
  char v114; // si
  __int64 v115; // rdx
  bool v116; // bl
  __int64 v117; // rax
  char v118; // si
  __int64 v119; // rdx
  __int64 v120; // rax
  char v121; // si
  __int64 v122; // rdx
  __int64 v124; // rax
  __int64 v125; // rax
  unsigned __int64 v126; // r8
  char *v127; // rcx
  char *v128; // r9
  unsigned int v129; // edx
  unsigned int v130; // ecx
  __int64 v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  char v135; // si
  __int16 v136; // ax
  __int64 v137; // rax
  char v138; // si
  __int64 v139; // rdx
  char v140; // r12
  __int64 v141; // rax
  char v142; // si
  __int64 v143; // rdx
  _QWORD *v144; // rdx
  __int64 v145; // rax
  __int64 v146; // rcx
  char v147; // al
  int v148; // r12d
  __int64 v149; // rax
  __int64 *v150; // rbx
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  unsigned __int64 v155; // rcx
  char *v156; // rdx
  char *v157; // rdi
  unsigned int v158; // eax
  unsigned int v159; // edx
  __int64 v160; // rsi
  unsigned int v161; // edi
  unsigned __int64 v162; // r8
  char *v163; // r9
  unsigned int v164; // eax
  unsigned int v165; // ecx
  __int64 v166; // rdi
  const char *v167; // rbx
  _QWORD *v168; // r12
  size_t v169; // rax
  _QWORD *v170; // rdx
  size_t v171; // rcx
  __int64 *v172; // rbx
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  const char *v177; // rbx
  _QWORD *v178; // r12
  size_t v179; // rax
  unsigned __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  _QWORD *v183; // rsi
  size_t v184; // rdx
  __int64 *v185; // rbx
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  const char *v190; // r12
  _QWORD *v191; // rbx
  size_t v192; // rax
  unsigned __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  _QWORD *v196; // rsi
  size_t v197; // rdx
  _QWORD *v198; // r12
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  char v202; // bl
  __int64 v203; // rax
  char v204; // si
  __int64 v205; // rdx
  __int64 v206; // rcx
  _QWORD *v207; // rbx
  unsigned int v208; // eax
  unsigned int v209; // eax
  unsigned int v210; // esi
  __int64 v211; // rdi
  const char *v212; // rbx
  unsigned int v213; // eax
  unsigned int v214; // eax
  unsigned int v215; // esi
  __int64 v216; // rdi
  unsigned __int64 v217; // rsi
  const char *v218; // rbx
  unsigned int v219; // eax
  unsigned int v220; // eax
  unsigned int v221; // edx
  __int64 v222; // rdi
  char *v223; // rax
  char *v224; // rax
  int v225; // [rsp+0h] [rbp-3D8h]
  int v226; // [rsp+0h] [rbp-3D8h]
  int v227; // [rsp+0h] [rbp-3D8h]
  int v228; // [rsp+0h] [rbp-3D8h]
  int v229; // [rsp+0h] [rbp-3D8h]
  int v230; // [rsp+0h] [rbp-3D8h]
  int v231; // [rsp+0h] [rbp-3D8h]
  char *v232; // [rsp+8h] [rbp-3D0h]
  char *v233; // [rsp+8h] [rbp-3D0h]
  char *v234; // [rsp+8h] [rbp-3D0h]
  int v235; // [rsp+8h] [rbp-3D0h]
  char *v236; // [rsp+8h] [rbp-3D0h]
  int v237; // [rsp+8h] [rbp-3D0h]
  char *v238; // [rsp+8h] [rbp-3D0h]
  char *v239; // [rsp+8h] [rbp-3D0h]
  __int64 v240; // [rsp+10h] [rbp-3C8h]
  __int64 v241; // [rsp+10h] [rbp-3C8h]
  int v242; // [rsp+10h] [rbp-3C8h]
  __int64 v243; // [rsp+10h] [rbp-3C8h]
  char v244; // [rsp+10h] [rbp-3C8h]
  int v245; // [rsp+10h] [rbp-3C8h]
  int v246; // [rsp+18h] [rbp-3C0h]
  int v247; // [rsp+18h] [rbp-3C0h]
  int v248; // [rsp+18h] [rbp-3C0h]
  int v249; // [rsp+18h] [rbp-3C0h]
  char *v250; // [rsp+20h] [rbp-3B8h]
  _QWORD *v251; // [rsp+20h] [rbp-3B8h]
  int v252; // [rsp+20h] [rbp-3B8h]
  __int64 v253; // [rsp+20h] [rbp-3B8h]
  __int128 *v254; // [rsp+28h] [rbp-3B0h]
  char v255; // [rsp+28h] [rbp-3B0h]
  int v256; // [rsp+28h] [rbp-3B0h]
  int v257; // [rsp+28h] [rbp-3B0h]
  __int64 v258; // [rsp+30h] [rbp-3A8h]
  __int64 v259; // [rsp+30h] [rbp-3A8h]
  __int64 v260; // [rsp+30h] [rbp-3A8h]
  int v261; // [rsp+38h] [rbp-3A0h]
  int v262; // [rsp+38h] [rbp-3A0h]
  int v263; // [rsp+38h] [rbp-3A0h]
  int v264; // [rsp+40h] [rbp-398h]
  int v265; // [rsp+40h] [rbp-398h]
  int v266; // [rsp+40h] [rbp-398h]
  int v267; // [rsp+48h] [rbp-390h]
  int v268; // [rsp+48h] [rbp-390h]
  int v269; // [rsp+48h] [rbp-390h]
  __m128i *v270; // [rsp+50h] [rbp-388h]
  int v271; // [rsp+50h] [rbp-388h]
  int v272; // [rsp+50h] [rbp-388h]
  int v273; // [rsp+50h] [rbp-388h]
  char v274; // [rsp+58h] [rbp-380h]
  char v275; // [rsp+58h] [rbp-380h]
  char v276; // [rsp+58h] [rbp-380h]
  char *s; // [rsp+60h] [rbp-378h]
  char *sa; // [rsp+60h] [rbp-378h]
  char *sb; // [rsp+60h] [rbp-378h]
  void **v280; // [rsp+68h] [rbp-370h]
  int v281; // [rsp+68h] [rbp-370h]
  __int64 v282; // [rsp+68h] [rbp-370h]
  int v283; // [rsp+68h] [rbp-370h]
  char *v284; // [rsp+70h] [rbp-368h]
  _BYTE *v285; // [rsp+70h] [rbp-368h]
  void *v286; // [rsp+70h] [rbp-368h]
  void *v287; // [rsp+70h] [rbp-368h]
  _QWORD *v288; // [rsp+78h] [rbp-360h]
  __int64 v289; // [rsp+A8h] [rbp-330h]
  bool v291; // [rsp+BFh] [rbp-319h]
  char v292; // [rsp+100h] [rbp-2D8h] BYREF
  __int64 v293; // [rsp+110h] [rbp-2C8h] BYREF
  __int64 v294; // [rsp+118h] [rbp-2C0h]
  const char *v295; // [rsp+120h] [rbp-2B8h]
  __int128 v296; // [rsp+128h] [rbp-2B0h]
  __m128i haystack[2]; // [rsp+140h] [rbp-298h] BYREF
  void *v298; // [rsp+160h] [rbp-278h]
  size_t v299; // [rsp+168h] [rbp-270h]
  _QWORD v300[2]; // [rsp+170h] [rbp-268h] BYREF
  void *v301; // [rsp+180h] [rbp-258h]
  size_t v302; // [rsp+188h] [rbp-250h]
  _QWORD v303[2]; // [rsp+190h] [rbp-248h] BYREF
  char v304; // [rsp+1A0h] [rbp-238h] BYREF
  __int128 v305; // [rsp+1A8h] [rbp-230h] BYREF
  char v306; // [rsp+1B8h] [rbp-220h]
  __int128 v307; // [rsp+1C0h] [rbp-218h] BYREF
  char v308; // [rsp+1D0h] [rbp-208h] BYREF
  __int128 v309; // [rsp+1D8h] [rbp-200h] BYREF
  char v310; // [rsp+1E8h] [rbp-1F0h]
  __int128 v311; // [rsp+1F0h] [rbp-1E8h] BYREF
  char v312; // [rsp+200h] [rbp-1D8h] BYREF
  __int128 v313; // [rsp+208h] [rbp-1D0h]
  __int64 v314; // [rsp+218h] [rbp-1C0h]
  __int64 v315; // [rsp+220h] [rbp-1B8h]
  __int64 v316; // [rsp+228h] [rbp-1B0h]
  char v317; // [rsp+230h] [rbp-1A8h] BYREF
  __int128 v318; // [rsp+238h] [rbp-1A0h]
  char v319; // [rsp+248h] [rbp-190h]
  __int128 v320; // [rsp+250h] [rbp-188h] BYREF
  char v321; // [rsp+260h] [rbp-178h] BYREF
  __int128 v322; // [rsp+268h] [rbp-170h] BYREF
  char v323; // [rsp+278h] [rbp-160h]
  __int128 v324; // [rsp+280h] [rbp-158h]
  void *v325; // [rsp+290h] [rbp-148h] BYREF
  __int128 s2; // [rsp+298h] [rbp-140h] BYREF
  char v327; // [rsp+2A8h] [rbp-130h]
  __int128 v328; // [rsp+2B0h] [rbp-128h] BYREF
  char v329; // [rsp+2C0h] [rbp-118h] BYREF
  __int64 v330; // [rsp+2D0h] [rbp-108h]
  _QWORD v331[2]; // [rsp+2D8h] [rbp-100h] BYREF
  __int64 v332; // [rsp+2E8h] [rbp-F0h]
  _QWORD v333[2]; // [rsp+2F0h] [rbp-E8h] BYREF
  __int64 v334; // [rsp+300h] [rbp-D8h]
  _QWORD v335[2]; // [rsp+308h] [rbp-D0h] BYREF
  __int64 v336; // [rsp+318h] [rbp-C0h]
  _QWORD v337[2]; // [rsp+320h] [rbp-B8h] BYREF
  __int64 v338; // [rsp+330h] [rbp-A8h]
  _QWORD v339[2]; // [rsp+338h] [rbp-A0h] BYREF
  __int64 v340; // [rsp+348h] [rbp-90h]
  char v341[32]; // [rsp+350h] [rbp-88h] BYREF
  _QWORD v342[13]; // [rsp+370h] [rbp-68h] BYREF

  v342[5] = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v325 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v5 = "null";
        break;
      case 1:
        v5 = "object";
        break;
      case 2:
        v5 = (char *)"array";
        break;
      case 3:
        v5 = "string";
        break;
      case 4:
        v5 = "boolean";
        break;
      case 8:
        v5 = "binary";
        break;
      case 9:
        v5 = "discarded";
        break;
      default:
        v5 = "number";
        break;
    }
    haystack[0].m128i_i64[0] = (__int64)v5;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(v7 + 16);
  v9 = v7 + 8;
  if ( v8 )
  {
    v10 = v7 + 8;
    do
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v8 + 40);
        if ( !v13 )
          break;
        v11 = 7;
        if ( v13 <= 7 )
          v11 = *(_QWORD *)(v8 + 40);
        v12 = memcmp(*(const void **)(v8 + 32), (char *)&s2 + 8, v11);
        if ( v12 || (v12 = v13 - 7, (__int64)(v13 - 7) <= 0x7FFFFFFF) )
        {
          if ( v12 < 0 )
            break;
        }
        v10 = v8;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v8 )
          goto LABEL_12;
      }
      v8 = *(_QWORD *)(v8 + 24);
    }
    while ( v8 );
LABEL_12:
    if ( v9 != v10 )
    {
      v14 = *(_QWORD *)(v10 + 40);
      if ( v14 )
      {
        v15 = 7;
        if ( v14 <= 7 )
          v15 = *(_QWORD *)(v10 + 40);
        v16 = memcmp((char *)&s2 + 8, *(const void **)(v10 + 32), v15);
        if ( v16 || (v16 = 7 - v14, (__int64)(7 - v14) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v16 >= 0 )
            v9 = v10;
        }
      }
      else
      {
        v9 = v10;
      }
    }
  }
  v325 = (char *)&s2 + 8;
  v280 = &v325;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v9 + 64) != 3 )
  {
    v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v9 + 64) )
    {
      case 0:
        v6 = "null";
        break;
      case 1:
        v6 = "object";
        break;
      case 2:
        v6 = (char *)"array";
        break;
      case 3:
        v6 = "string";
        break;
      case 4:
        v6 = "boolean";
        break;
      case 8:
        v6 = "binary";
        break;
      case 9:
        v6 = "discarded";
        break;
      default:
        v6 = "number";
        break;
    }
    haystack[0].m128i_i64[0] = (__int64)v6;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v4,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v4,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v17 = (char *)v325;
  if ( (unsigned __int64)s2 > 2 && *(_BYTE *)v325 == 48 && (*((_BYTE *)v325 + 1) & 0xDF) == 0x58 )
    v17 = (char *)v325 + 2;
  v18 = __errno_location();
  *v18 = 0;
  v19 = v18;
  v270 = haystack;
  v289 = __isoc23_strtoull();
  if ( v17 == (char *)haystack[0].m128i_i64[0]
    || *(_BYTE *)haystack[0].m128i_i64[0]
    || (v291 = v289 == -1 && *v19 == 34) )
  {
    if ( v325 != (char *)&s2 + 8 )
      operator delete(v325, *((_QWORD *)&s2 + 1) + 1LL);
    v25 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v25, "Invalid address format");
    __cxa_throw(
      v25,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v325 != (char *)&s2 + 8 )
    operator delete(v325, *((_QWORD *)&s2 + 1) + 1LL);
  v20 = operator new(0x168u);
  *(_OWORD *)v20 = -1;
  v284 = (char *)v20;
  *(_QWORD *)(v20 + 16) = -1;
  *(_QWORD *)(v20 + 24) = 0;
  *(_QWORD *)(v20 + 32) = 0;
  *(_QWORD *)(v20 + 40) = 0;
  *(_QWORD *)(v20 + 64) = 0;
  *(_QWORD *)(v20 + 72) = 0;
  *(_QWORD *)(v20 + 80) = 0;
  *(_QWORD *)(v20 + 104) = 0;
  *(_QWORD *)(v20 + 112) = 0;
  *(_QWORD *)(v20 + 120) = 0;
  *(_QWORD *)(v20 + 144) = 0;
  *(_QWORD *)(v20 + 152) = 0;
  *(_QWORD *)(v20 + 160) = 0;
  *(_QWORD *)(v20 + 184) = 0;
  *(_QWORD *)(v20 + 192) = 0;
  *(_QWORD *)(v20 + 200) = 0;
  *(_QWORD *)(v20 + 224) = 0;
  *(_QWORD *)(v20 + 232) = 0;
  *(_QWORD *)(v20 + 240) = 0;
  *(_QWORD *)(v20 + 264) = 0;
  *(_QWORD *)(v20 + 272) = 0;
  *(_QWORD *)(v20 + 280) = 0;
  *(_QWORD *)(v20 + 304) = 0;
  *(_OWORD *)(v20 + 48) = 0;
  *(_OWORD *)(v20 + 88) = 0;
  *(_OWORD *)(v20 + 128) = 0;
  *(_OWORD *)(v20 + 168) = 0;
  *(_OWORD *)(v20 + 208) = 0;
  *(_OWORD *)(v20 + 248) = 0;
  *(_OWORD *)(v20 + 288) = 0;
  *(_QWORD *)(v20 + 312) = 0;
  *(_QWORD *)(v20 + 320) = 0;
  *(_QWORD *)(v20 + 344) = 0;
  *(_DWORD *)(v20 + 352) = 0;
  *(_OWORD *)(v20 + 328) = 0;
  if ( (int)decode_insn() <= 0 )
  {
    v2 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v295 = nullptr;
  v296 = 0;
  print_insn_mnem();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v232 = nullptr;
  v21 = 0;
  v288 = nullptr;
  v22 = v284 + 41;
  v250 = &v329;
  v254 = &v305;
  while ( *v22 )
  {
    v304 = 0;
    *(_QWORD *)&v305 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v304 = 3;
    v23 = operator new(0x20u);
    *(_BYTE *)(v23 + 20) = 120;
    *(_QWORD *)v23 = v23 + 16;
    *(_DWORD *)(v23 + 16) = 1701080681;
    *(_QWORD *)(v23 + 8) = 5;
    *(_BYTE *)(v23 + 21) = 0;
    v306 = 5;
    v307 = (unsigned __int64)v232;
    v305 = (unsigned __int64)v23;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v250,
      (const __m128i *)&v304);
    v330 = 0;
    v308 = 0;
    *(_QWORD *)&v309 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v308 = 3;
    v24 = operator new(0x20u);
    *(_QWORD *)v24 = v24 + 16;
    strcpy((char *)(v24 + 16), "type");
    *(_QWORD *)(v24 + 8) = 4;
    v309 = (unsigned __int64)v24;
    switch ( *v22 )
    {
      case 0:
        v26 = "void";
        break;
      case 1:
        v26 = "register";
        break;
      case 2:
        v26 = "memory";
        break;
      case 3:
        v26 = "phrase";
        break;
      case 4:
        v26 = "displacement";
        break;
      case 5:
        v26 = "immediate";
        break;
      case 6:
        v26 = "far_address";
        break;
      case 7:
        v26 = "near_address";
        break;
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
        v26 = "processor_specific";
        break;
      default:
        v26 = "unknown";
        break;
    }
    v310 = 0;
    *(_QWORD *)&v311 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v310 = 3;
    v27 = (__int64 *)operator new(0x20u);
    v28 = v27 + 2;
    v29 = v27;
    *v27 = (__int64)(v27 + 2);
    haystack[0].m128i_i64[0] = strlen(v26);
    v30 = haystack[0].m128i_i32[0];
    if ( haystack[0].m128i_i64[0] > 0xFuLL )
    {
      v100 = std::string::_M_create();
      *v29 = v100;
      v28 = (_QWORD *)v100;
      v29[2] = haystack[0].m128i_i64[0];
    }
    if ( v30 >= 8 )
    {
      *v28 = *(_QWORD *)v26;
      *(_QWORD *)((char *)v28 + v30 - 8) = *(_QWORD *)&v26[v30 - 8];
      v93 = (unsigned __int64)(v28 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v94 = (char *)v28 - v93;
      v95 = (const char *)(v26 - v94);
      v96 = ((_DWORD)v94 + v30) & 0xFFFFFFF8;
      if ( v96 >= 8 )
      {
        v97 = v96 & 0xFFFFFFF8;
        v98 = 0;
        do
        {
          v99 = v98;
          v98 += 8;
          *(_QWORD *)(v93 + v99) = *(_QWORD *)&v95[v99];
        }
        while ( v98 < v97 );
      }
    }
    else if ( (v30 & 4) != 0 )
    {
      *(_DWORD *)v28 = *(_DWORD *)v26;
      *(_DWORD *)((char *)v28 + v30 - 4) = *(_DWORD *)&v26[v30 - 4];
    }
    else if ( v30 )
    {
      *(_BYTE *)v28 = *v26;
      if ( (v30 & 2) != 0 )
        *(_WORD *)((char *)v28 + v30 - 2) = *(_WORD *)&v26[v30 - 2];
    }
    v31 = haystack[0].m128i_i64[0];
    v32 = *v29;
    v29[1] = haystack[0].m128i_i64[0];
    *(_BYTE *)(v32 + v31) = 0;
    v311 = (unsigned __int64)v29;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v331,
      (const __m128i *)&v308);
    v332 = 0;
    v312 = 0;
    *(_QWORD *)&v313 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v312 = 3;
    v33 = operator new(0x20u);
    *(_DWORD *)(v33 + 16) = 1887007844;
    v34 = (unsigned __int64)v33;
    *(_QWORD *)v33 = v33 + 16;
    *(_BYTE *)(v33 + 20) = 101;
    *(_QWORD *)(v33 + 8) = 5;
    *(_BYTE *)(v33 + 21) = 0;
    v35 = (unsigned __int8)v22[4];
    LOBYTE(v314) = 5;
    v315 = v35;
    v316 = 0;
    v313 = v34;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v333,
      (const __m128i *)&v312);
    v334 = 0;
    v317 = 0;
    *(_QWORD *)&v318 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v317 = 3;
    v36 = operator new(0x20u);
    *(_BYTE *)(v36 + 18) = 103;
    v37 = (unsigned __int64)v36;
    *(_QWORD *)v36 = v36 + 16;
    *(_WORD *)(v36 + 16) = 25970;
    *(_QWORD *)(v36 + 8) = 3;
    *(_BYTE *)(v36 + 19) = 0;
    v38 = *(unsigned __int16 *)(v22 + 5);
    v319 = 5;
    v320 = v38;
    v318 = v37;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v335,
      (const __m128i *)&v317);
    v336 = 0;
    v321 = 0;
    *(_QWORD *)&v322 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v321 = 3;
    v39 = operator new(0x20u);
    *(_DWORD *)(v39 + 16) = 1970037110;
    v40 = (unsigned __int64)v39;
    *(_QWORD *)v39 = v39 + 16;
    *(_BYTE *)(v39 + 20) = 101;
    *(_QWORD *)(v39 + 8) = 5;
    *(_BYTE *)(v39 + 21) = 0;
    v41 = *(_QWORD *)(v22 + 7);
    v323 = 6;
    v324 = v41;
    v322 = v40;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v337,
      (const __m128i *)&v321);
    v338 = 0;
    LOBYTE(v325) = 0;
    *(_QWORD *)&s2 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v325) = 3;
    v42 = operator new(0x20u);
    strcpy((char *)(v42 + 16), "addr");
    *(_QWORD *)v42 = v42 + 16;
    *(_QWORD *)(v42 + 8) = 4;
    s2 = (unsigned __int64)v42;
    qsnprintf();
    v298 = v300;
    v43 = strlen(v341);
    haystack[0].m128i_i64[0] = v43;
    v44 = v43;
    if ( v43 > 0xF )
    {
      v101 = (_QWORD *)std::string::_M_create();
      v298 = v101;
      v300[0] = haystack[0].m128i_i64[0];
    }
    else
    {
      if ( v43 == 1 )
      {
        LOBYTE(v300[0]) = v341[0];
LABEL_46:
        v45 = v300;
        goto LABEL_47;
      }
      if ( !v43 )
        goto LABEL_46;
      v101 = v300;
    }
    if ( v44 >= 8 )
    {
      *v101 = *(_QWORD *)v341;
      *(_QWORD *)((char *)v101 + v44 - 8) = *(_QWORD *)&v341[v44 - 8];
      v103 = (unsigned __int64)(v101 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v104 = (char *)v101 - v103;
      v105 = ((_DWORD)v104 + v44) & 0xFFFFFFF8;
      v106 = (char *)(v341 - v104);
      if ( v105 >= 8 )
      {
        v107 = v105 & 0xFFFFFFF8;
        v108 = 0;
        do
        {
          v109 = v108;
          v108 += 8;
          *(_QWORD *)(v103 + v109) = *(_QWORD *)&v106[v109];
        }
        while ( v108 < v107 );
      }
    }
    else if ( (v44 & 4) != 0 )
    {
      *(_DWORD *)v101 = *(_DWORD *)v341;
      *(_DWORD *)((char *)v101 + v44 - 4) = *(_DWORD *)&v341[v44 - 4];
    }
    else if ( v44 )
    {
      *(_BYTE *)v101 = v341[0];
      if ( (v44 & 2) != 0 )
        *(_WORD *)((char *)v101 + v44 - 2) = *(_WORD *)&v341[v44 - 2];
    }
    v43 = haystack[0].m128i_i64[0];
    v45 = v298;
LABEL_47:
    v299 = v43;
    *((_BYTE *)v45 + v43) = 0;
    v327 = 0;
    *(_QWORD *)&v328 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v327 = 3;
    v46 = (_QWORD *)operator new(0x20u);
    v47 = v298;
    v48 = v46 + 2;
    v49 = v299;
    *v46 = v46 + 2;
    if ( v47 == v300 )
    {
      v102 = v49 + 1;
      if ( (unsigned int)(v49 + 1) >= 8 )
      {
        v46[2] = v300[0];
        *(_QWORD *)((char *)v48 + v102 - 8) = *(_QWORD *)((char *)&v300[-1] + v102);
        v126 = (unsigned __int64)(v46 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v127 = (char *)v48 - v126;
        v128 = (char *)((char *)v300 - v127);
        if ( (((_DWORD)v127 + v102) & 0xFFFFFFF8) >= 8 )
        {
          v129 = ((_DWORD)v127 + v102) & 0xFFFFFFF8;
          v130 = 0;
          do
          {
            v131 = v130;
            v130 += 8;
            *(_QWORD *)(v126 + v131) = *(_QWORD *)&v128[v131];
          }
          while ( v130 < v129 );
        }
      }
      else if ( (v102 & 4) != 0 )
      {
        *((_DWORD *)v46 + 4) = v300[0];
        *(_DWORD *)((char *)v48 + v102 - 4) = *(_DWORD *)((char *)&v299 + v102 + 4);
      }
      else if ( (_DWORD)v49 != -1 )
      {
        *((_BYTE *)v46 + 16) = v300[0];
        if ( (v102 & 2) != 0 )
          *(_WORD *)((char *)v48 + v102 - 2) = *(_WORD *)((char *)&v299 + v102 + 6);
      }
    }
    else
    {
      *v46 = v47;
      v46[2] = v300[0];
    }
    v46[1] = v49;
    v50 = (char *)v339;
    v298 = v300;
    v299 = 0;
    LOBYTE(v300[0]) = 0;
    v328 = (unsigned __int64)v46;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v339,
      (const __m128i *)v280);
    v340 = 0;
    haystack[0].m128i_i8[0] = 0;
    haystack[0].m128i_i64[1] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v270,
      (__int64)v250,
      6,
      v51,
      v52,
      v53,
      v225,
      (__int64)v232,
      (int)v250,
      6,
      (int)v250,
      (int)v254,
      (__int64)&v322,
      (int)&s2,
      (int)&v309,
      (int)&v311,
      (int)v270,
      (char)&v328,
      (__int64)v341,
      (int)v280,
      (__int64)v284);
    if ( !v21 )
    {
      v54 = operator new(0x18u);
      *(_QWORD *)(v54 + 16) = 0;
      v55 = (_QWORD *)v54;
      *(_OWORD *)v54 = 0;
LABEL_51:
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      v288 = v55;
      v56 = haystack[0].m128i_i8[0];
      v57 = haystack[0].m128i_i64[1];
      goto LABEL_52;
    }
    v124 = v288[1];
    if ( v288[2] == v124 )
    {
      v55 = v288;
      goto LABEL_51;
    }
    v125 = v124 + 16;
    v56 = 0;
    *(__m128i *)(v125 - 16) = _mm_load_si128(haystack);
    v288[1] = v125;
    v57 = 0;
LABEL_52:
    haystack[0].m128i_i64[1] = v57;
    haystack[0].m128i_i8[0] = v56;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    do
    {
      v50 -= 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v50 != v250 - 24 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v298 != v300 )
      operator delete(v298, v300[0] + 1LL);
    v22 += 40;
    v21 = 2;
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
    v232 = v233 + 1;
    if ( v232 == &byte_8 )
      break;
  }
  v304 = 0;
  *(_QWORD *)&v305 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v304 = 3;
  v58 = operator new(0x20u);
  strcpy((char *)(v58 + 16), "address");
  *(_QWORD *)v58 = v58 + 16;
  *(_QWORD *)(v58 + 8) = 7;
  v305 = (unsigned __int64)v58;
  qsnprintf();
  v301 = v303;
  v59 = strlen((const char *)v342);
  haystack[0].m128i_i64[0] = v59;
  v60 = v59;
  if ( v59 > 0xF )
  {
    v301 = (void *)std::string::_M_create();
    v144 = v301;
    v303[0] = haystack[0].m128i_i64[0];
    goto LABEL_151;
  }
  if ( v59 == 1 )
  {
    LOBYTE(v303[0]) = v342[0];
LABEL_60:
    v61 = v303;
  }
  else
  {
    if ( !v59 )
      goto LABEL_60;
    v144 = v303;
LABEL_151:
    if ( v60 >= 8 )
    {
      *v144 = v342[0];
      *(_QWORD *)((char *)v144 + v60 - 8) = *(_QWORD *)&v341[v60 + 24];
      v155 = (unsigned __int64)(v144 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v156 = (char *)v144 - v155;
      v157 = (char *)((char *)v342 - v156);
      if ( ((v60 + (_DWORD)v156) & 0xFFFFFFF8) >= 8 )
      {
        v158 = (v60 + (_DWORD)v156) & 0xFFFFFFF8;
        v159 = 0;
        do
        {
          v160 = v159;
          v159 += 8;
          *(_QWORD *)(v155 + v160) = *(_QWORD *)&v157[v160];
        }
        while ( v159 < v158 );
      }
    }
    else if ( (v60 & 4) != 0 )
    {
      *(_DWORD *)v144 = v342[0];
      *(_DWORD *)((char *)v144 + v60 - 4) = *(_DWORD *)&v341[v60 + 28];
    }
    else if ( v60 )
    {
      *(_BYTE *)v144 = v342[0];
      if ( (v60 & 2) != 0 )
        *(_WORD *)((char *)v144 + v60 - 2) = *(_WORD *)&v341[v60 + 30];
    }
    v59 = haystack[0].m128i_i64[0];
    v61 = v301;
  }
  v302 = v59;
  *((_BYTE *)v61 + v59) = 0;
  v306 = 0;
  *(_QWORD *)&v307 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v306 = 3;
  v62 = (_QWORD *)operator new(0x20u);
  v63 = v62 + 2;
  v64 = v62;
  v65 = (unsigned __int64)v62;
  v66 = v302;
  *v62 = v62 + 2;
  if ( v301 == v303 )
  {
    v161 = v66 + 1;
    if ( (unsigned int)(v66 + 1) >= 8 )
    {
      v62[2] = v303[0];
      *(_QWORD *)((char *)v63 + v161 - 8) = *(_QWORD *)((char *)&v303[-1] + v161);
      v162 = (unsigned __int64)(v62 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v163 = (char *)((char *)v303 - ((char *)v63 - v162));
      if ( ((v161 + (_DWORD)v63 - (_DWORD)v162) & 0xFFFFFFF8) >= 8 )
      {
        v164 = (v161 + (_DWORD)v63 - v162) & 0xFFFFFFF8;
        v165 = 0;
        do
        {
          v166 = v165;
          v165 += 8;
          *(_QWORD *)(v162 + v166) = *(_QWORD *)&v163[v166];
        }
        while ( v165 < v164 );
      }
    }
    else if ( (v161 & 4) != 0 )
    {
      *((_DWORD *)v62 + 4) = v303[0];
      *(_DWORD *)((char *)v63 + v161 - 4) = *(_DWORD *)((char *)&v302 + v161 + 4);
    }
    else if ( (_DWORD)v66 != -1 )
    {
      *((_BYTE *)v62 + 16) = v303[0];
      if ( (v161 & 2) != 0 )
        *(_WORD *)((char *)v63 + v161 - 2) = *(_WORD *)((char *)&v302 + v161 + 6);
    }
  }
  else
  {
    *v62 = v301;
    v62[2] = v303[0];
  }
  v64[1] = v66;
  v301 = v303;
  v302 = 0;
  LOBYTE(v303[0]) = 0;
  v307 = v65;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v250,
    (const __m128i *)&v304);
  v330 = 0;
  v308 = 0;
  *(_QWORD *)&v309 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v308 = 3;
  v67 = operator new(0x20u);
  *(_QWORD *)v67 = v67 + 16;
  strcpy((char *)(v67 + 16), "mnemonic");
  *(_QWORD *)(v67 + 8) = 8;
  v309 = (unsigned __int64)v67;
  if ( (_QWORD)v296 )
    v68 = v295;
  else
    v68 = _qstring<char>::c_str(void)const::nullstr;
  v310 = 0;
  *(_QWORD *)&v311 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v310 = 3;
  v69 = (__int64 *)operator new(0x20u);
  v70 = v69 + 2;
  v71 = v69;
  *v69 = (__int64)(v69 + 2);
  if ( !v68 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v72 = strlen(v68);
  haystack[0].m128i_i64[0] = v72;
  v73 = v72;
  if ( v72 > 0xF )
  {
    v145 = std::string::_M_create();
    *v71 = v145;
    v70 = (void *)v145;
    v71[2] = haystack[0].m128i_i64[0];
    goto LABEL_158;
  }
  if ( v72 == 1 )
  {
    *((_BYTE *)v71 + 16) = *v68;
  }
  else
  {
    if ( !v72 )
      goto LABEL_69;
LABEL_158:
    memcpy(v70, v68, v73);
    v72 = haystack[0].m128i_i64[0];
    v70 = (void *)*v71;
  }
LABEL_69:
  v71[1] = v72;
  *((_BYTE *)v70 + v72) = 0;
  v311 = (unsigned __int64)v71;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v331,
    (const __m128i *)&v308);
  v332 = 0;
  v312 = 0;
  *(_QWORD *)&v313 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v312 = 3;
  v74 = operator new(0x20u);
  v75 = (unsigned __int64)v74;
  *(_QWORD *)v74 = v74 + 16;
  strcpy((char *)(v74 + 16), "size");
  *(_QWORD *)(v74 + 8) = 4;
  LOBYTE(v314) = 6;
  v76 = *((unsigned __int16 *)v284 + 13);
  v313 = v75;
  v316 = 0;
  v315 = v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v333,
    (const __m128i *)&v312);
  v334 = 0;
  v317 = 0;
  *(_QWORD *)&v318 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v317 = 3;
  v77 = operator new(0x20u);
  v78 = (unsigned __int64)v77;
  *(_BYTE *)(v77 + 20) = 101;
  *(_QWORD *)v77 = v77 + 16;
  *(_DWORD *)(v77 + 16) = 1887007849;
  *(_QWORD *)(v77 + 8) = 5;
  *(_BYTE *)(v77 + 21) = 0;
  v319 = 6;
  v79 = *((unsigned __int16 *)v284 + 12);
  v318 = v78;
  v320 = v79;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v335,
    (const __m128i *)&v317);
  v336 = 0;
  v321 = 0;
  *(_QWORD *)&v322 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v321 = 3;
  v80 = operator new(0x20u);
  strcpy((char *)(v80 + 16), "operand_count");
  *(_QWORD *)v80 = v80 + 16;
  *(_QWORD *)(v80 + 8) = 13;
  v322 = (unsigned __int64)v80;
  if ( v21 == 2 )
    v81 = (__int64)(v288[1] - *v288) >> 4;
  else
    v81 = v21 != 0;
  v324 = (unsigned __int64)v81;
  v323 = 6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v337,
    (const __m128i *)&v321);
  v338 = 0;
  LOBYTE(v325) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v325) = 3;
  v82 = operator new(0x20u);
  *(_QWORD *)v82 = v82 + 16;
  strcpy((char *)(v82 + 16), "operands");
  *(_QWORD *)(v82 + 8) = 8;
  s2 = (unsigned __int64)v82;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v83 = v339;
  *((_QWORD *)&v328 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v339,
    (const __m128i *)v280);
  v340 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v250,
    6,
    v84,
    v85,
    v86,
    v225,
    (__int64)v342,
    (int)&v307,
    v246,
    (int)v250,
    (int)v254,
    (__int64)&v322,
    (int)&s2,
    (int)&v309,
    (int)&v311,
    (int)v270,
    v274,
    (__int64)s,
    (int)v280,
    (__int64)v284);
  do
  {
    v83 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v83 != v251 - 3 );
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
  if ( v301 != v303 )
    operator delete(v301, v303[0] + 1LL);
  if ( !getinf_buf() )
    LOBYTE(v342[0]) = 0;
  memset(haystack, 0, 24);
  v87 = strlen(v234);
  v88 = v87 + 1;
  v89 = v87;
  haystack[0].m128i_i64[0] = qvector_reserve();
  haystack[0].m128i_i64[1] = v88;
  memmove((void *)haystack[0].m128i_i64[0], v234, v89);
  *(_BYTE *)(haystack[0].m128i_i64[0] + v89) = 0;
  if ( !haystack[0].m128i_i64[1] )
  {
    v90 = _qstring<char>::c_str(void)const::nullstr;
    goto LABEL_79;
  }
  v90 = (const char *)haystack[0].m128i_i64[0];
  v110 = strstr((const char *)haystack[0].m128i_i64[0], "ARM");
  if ( !v110 || v110 - v90 == -1 )
  {
    v223 = strstr(v90, "arm");
    if ( !v223 || v223 - v90 == -1 )
    {
      v224 = strstr(v90, "AARCH64");
      if ( !v224 || v224 - v90 == -1 )
      {
LABEL_79:
        v91 = strstr(v90, "aarch64");
        if ( !v91 || v91 - v90 == -1 )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v92 = 0;
          goto LABEL_130;
        }
      }
    }
  }
  v292 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v92 = 0;
  if ( (v285[30] & 1) != 0 )
  {
    v147 = v285[33];
    v312 = 0;
    *(_QWORD *)&v313 = 0;
    LOBYTE(v240) = v147 & 0x60;
    v148 = v147 & 7;
    v255 = v147 & 0x18;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v312 = 3;
    v149 = operator new(0x20u);
    *(_QWORD *)v149 = v149 + 16;
    strcpy((char *)(v149 + 16), "is_pac");
    *(_QWORD *)(v149 + 8) = 6;
    v314 = 4;
    v315 = 1;
    v316 = 0;
    v313 = (unsigned __int64)v149;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v251,
      (const __m128i *)&v312);
    v330 = 0;
    v317 = 0;
    *(_QWORD *)&v318 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v317 = 3;
    v150 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v150, "key", v151, v152, v153, v154, v226, (int)&v292, v240);
    v318 = (unsigned __int64)v150;
    switch ( v148 )
    {
      case 0:
        v167 = "IA";
        break;
      case 1:
        v167 = "IB";
        break;
      case 2:
        v167 = "DA";
        break;
      case 3:
        v167 = "DB";
        break;
      case 4:
        v167 = "GA";
        break;
      default:
        v167 = "unknown";
        break;
    }
    v319 = 0;
    *(_QWORD *)&v320 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v319 = 3;
    v168 = (_QWORD *)operator new(0x20u);
    *v168 = v168 + 2;
    v264 = (_DWORD)v168 + 16;
    v169 = strlen(v167);
    v170 = v168 + 2;
    v171 = v169;
    if ( (unsigned int)v169 >= 8 )
    {
      v168[2] = *(_QWORD *)v167;
      *(_QWORD *)((char *)v170 + (unsigned int)v169 - 8) = *(_QWORD *)&v167[(unsigned int)v169 - 8];
      v217 = (unsigned __int64)(v168 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v218 = (const char *)(v167 - ((const char *)v170 - v217));
      v219 = (v169 + (_DWORD)v170 - v217) & 0xFFFFFFF8;
      if ( v219 >= 8 )
      {
        v220 = v219 & 0xFFFFFFF8;
        v221 = 0;
        do
        {
          v222 = v221;
          v221 += 8;
          *(_QWORD *)(v217 + v222) = *(_QWORD *)&v218[v222];
        }
        while ( v221 < v220 );
      }
    }
    else if ( (v169 & 4) != 0 )
    {
      *((_DWORD *)v168 + 4) = *(_DWORD *)v167;
      *(_DWORD *)((char *)v170 + (unsigned int)v169 - 4) = *(_DWORD *)&v167[(unsigned int)v169 - 4];
    }
    else if ( (_DWORD)v169 )
    {
      *((_BYTE *)v168 + 16) = *v167;
      if ( (v169 & 2) != 0 )
        *(_WORD *)((char *)v170 + (unsigned int)v169 - 2) = *(_WORD *)&v167[(unsigned int)v169 - 2];
    }
    v168[1] = v171;
    *((_BYTE *)v168 + v171 + 16) = 0;
    v320 = (unsigned __int64)v168;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v331,
      (const __m128i *)&v317);
    v332 = 0;
    v321 = 0;
    *(_QWORD *)&v322 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v321 = 3;
    v172 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v172, "address_mode", v173, v174, v175, v176, v227, v235, v241);
    v322 = (unsigned __int64)v172;
    if ( v255 == 8 )
    {
      v177 = "x17";
    }
    else
    {
      v177 = "x30_lr";
      if ( v255 != 16 )
      {
        v177 = "gpr";
        if ( v255 )
          v177 = "unknown";
      }
    }
    v323 = 0;
    *(_QWORD *)&v324 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v323 = 3;
    v178 = (_QWORD *)operator new(0x20u);
    *v178 = v178 + 2;
    v179 = strlen(v177);
    v183 = v178 + 2;
    v184 = v179;
    if ( (unsigned int)v179 >= 8 )
    {
      v178[2] = *(_QWORD *)v177;
      *(_QWORD *)((char *)v183 + (unsigned int)v179 - 8) = *(_QWORD *)&v177[(unsigned int)v179 - 8];
      v180 = (unsigned __int64)(v178 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v212 = (const char *)(v177 - ((const char *)v183 - v180));
      v213 = (v179 + (_DWORD)v183 - v180) & 0xFFFFFFF8;
      if ( v213 >= 8 )
      {
        v214 = v213 & 0xFFFFFFF8;
        v215 = 0;
        do
        {
          v216 = v215;
          v215 += 8;
          v181 = *(_QWORD *)&v212[v216];
          *(_QWORD *)(v180 + v216) = v181;
        }
        while ( v215 < v214 );
      }
    }
    else if ( (v179 & 4) != 0 )
    {
      *((_DWORD *)v178 + 4) = *(_DWORD *)v177;
      v180 = *(unsigned int *)&v177[(unsigned int)v179 - 4];
      *(_DWORD *)((char *)v183 + (unsigned int)v179 - 4) = v180;
    }
    else if ( (_DWORD)v179 )
    {
      *((_BYTE *)v178 + 16) = *v177;
      if ( (v179 & 2) != 0 )
      {
        v180 = *(unsigned __int16 *)&v177[(unsigned int)v179 - 2];
        *(_WORD *)((char *)v183 + (unsigned int)v179 - 2) = v180;
      }
    }
    v178[1] = v184;
    *((_BYTE *)v178 + v184 + 16) = 0;
    v324 = (unsigned __int64)v178;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v333,
      (__int64)&v321,
      2,
      v180,
      v181,
      v182,
      v228,
      (__int64)v236,
      v242,
      v247,
      (int)v251,
      (_DWORD)v178 + 16,
      v258,
      v261,
      v264,
      v267,
      v271,
      (char)&v328,
      (__int64)&v320,
      v281,
      (__int64)v285);
    v334 = 0;
    LOBYTE(v325) = 0;
    *(_QWORD *)&s2 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v325) = 3;
    v185 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v185, "modifier_mode", v186, v187, v188, v189, v229, v237, v243);
    s2 = (unsigned __int64)v185;
    if ( v244 == 64 )
    {
      v190 = "x16";
    }
    else if ( v244 > 64 )
    {
      v190 = "sp";
      if ( v244 != 96 )
        v190 = "unknown";
    }
    else
    {
      v190 = "gpr_sp";
      if ( v244 )
        v190 = "zero";
    }
    v327 = 0;
    *(_QWORD *)&v328 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v327 = 3;
    v191 = (_QWORD *)operator new(0x20u);
    *v191 = v191 + 2;
    v192 = strlen(v190);
    v196 = v191 + 2;
    v197 = v192;
    if ( (unsigned int)v192 >= 8 )
    {
      v191[2] = *(_QWORD *)v190;
      *(_QWORD *)((char *)v196 + (unsigned int)v192 - 8) = *(_QWORD *)&v190[(unsigned int)v192 - 8];
      v193 = (unsigned __int64)(v191 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v194 = v190 - ((const char *)v196 - v193);
      v208 = (v192 + (_DWORD)v196 - v193) & 0xFFFFFFF8;
      if ( v208 >= 8 )
      {
        v209 = v208 & 0xFFFFFFF8;
        v210 = 0;
        do
        {
          v211 = v210;
          v210 += 8;
          v195 = *(_QWORD *)(v194 + v211);
          *(_QWORD *)(v193 + v211) = v195;
        }
        while ( v210 < v209 );
      }
    }
    else if ( (v192 & 4) != 0 )
    {
      *((_DWORD *)v191 + 4) = *(_DWORD *)v190;
      v193 = *(unsigned int *)&v190[(unsigned int)v192 - 4];
      *(_DWORD *)((char *)v196 + (unsigned int)v192 - 4) = v193;
    }
    else if ( (_DWORD)v192 )
    {
      *((_BYTE *)v191 + 16) = *v190;
      if ( (v192 & 2) != 0 )
      {
        v193 = *(unsigned __int16 *)&v190[(unsigned int)v192 - 2];
        *(_WORD *)((char *)v196 + (unsigned int)v192 - 2) = v193;
      }
    }
    v191[1] = v197;
    *((_BYTE *)v191 + v197 + 16) = 0;
    v328 = (unsigned __int64)v191;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v335,
      v282,
      2,
      v193,
      v194,
      v195,
      v230,
      (__int64)v238,
      (_DWORD)v191 + 16,
      v248,
      v252,
      v256,
      v259,
      v262,
      v265,
      v268,
      v272,
      v275,
      (__int64)sa,
      v282,
      (__int64)v286);
    v198 = (_QWORD *)v253;
    v336 = 0;
    LOBYTE(v293) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v293,
      v253,
      4,
      v199,
      v200,
      v201,
      v231,
      (__int64)v239,
      v245,
      v249,
      v253,
      v257,
      v260,
      v263,
      v266,
      v269,
      v273,
      v276,
      (__int64)sb,
      v283,
      (__int64)v287);
    v202 = v293;
    v203 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v204 = *(_BYTE *)v203;
    v205 = *(_QWORD *)(v203 + 8);
    *(_BYTE *)v203 = v202;
    v206 = v294;
    v92 = v292;
    v294 = v205;
    *(_QWORD *)(v203 + 8) = v206;
    LOBYTE(v293) = v204;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v207 = v337;
    do
    {
      v207 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v207 != v198 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v291 = 1;
  }
  v111 = *((unsigned __int16 *)v285 + 12);
  if ( (unsigned __int16)v111 > 0x378u )
  {
LABEL_121:
    v116 = (unsigned __int16)(v111 - 911) <= 2u || (unsigned __int16)(v111 - 284) <= 2u;
    if ( v116 )
    {
      v294 = 1;
      v292 = v92;
      v117 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v118 = *(_BYTE *)v117;
      v119 = *(_QWORD *)(v117 + 8);
      *(_BYTE *)v117 = 4;
      v92 = v292;
      LOBYTE(v293) = v118;
      *(_QWORD *)(v117 + 8) = v294;
      v294 = v119;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOWORD(v111) = *((_WORD *)v285 + 12);
    }
    else
    {
      v116 = v291;
    }
    if ( (unsigned __int16)(v111 - 449) <= 0xDu )
      goto LABEL_125;
    if ( (unsigned __int16)(v111 - 922) <= 0xCu )
      goto LABEL_125;
    v291 = v116;
    if ( (unsigned __int16)(v111 - 873) <= 1u )
      goto LABEL_125;
    goto LABEL_126;
  }
  if ( (unsigned __int16)v111 > 0x339u )
  {
    v146 = 0x600000BFCF3CF3CFLL;
    if ( _bittest64(&v146, (unsigned int)(v111 - 826)) )
      goto LABEL_120;
    goto LABEL_161;
  }
  if ( (unsigned __int16)v111 <= 0x1E9u )
  {
    if ( (unsigned __int16)v111 > 0x1E3u )
      goto LABEL_120;
    goto LABEL_121;
  }
  if ( (unsigned __int16)(v111 - 807) <= 0x10u )
  {
    v112 = 124831;
    if ( _bittest64(&v112, (unsigned int)(v111 - 807)) )
    {
LABEL_120:
      v294 = 1;
      v292 = v92;
      v113 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v114 = *(_BYTE *)v113;
      v115 = *(_QWORD *)(v113 + 8);
      *(_BYTE *)v113 = 4;
      v92 = v292;
      LOBYTE(v293) = v114;
      *(_QWORD *)(v113 + 8) = v294;
      v294 = v115;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v291 = 1;
      LOWORD(v111) = *((_WORD *)v285 + 12);
      goto LABEL_121;
    }
  }
LABEL_161:
  if ( (unsigned __int16)(v111 - 873) <= 1u )
  {
LABEL_125:
    v294 = 1;
    v292 = v92;
    v120 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v121 = *(_BYTE *)v120;
    v122 = *(_QWORD *)(v120 + 8);
    *(_BYTE *)v120 = 4;
    v92 = v292;
    LOBYTE(v293) = v121;
    *(_QWORD *)(v120 + 8) = v294;
    v294 = v122;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v291 = 1;
    LOWORD(v111) = *((_WORD *)v285 + 12);
  }
LABEL_126:
  if ( (unsigned __int16)(v111 - 26) <= 1u )
  {
    v294 = 1;
    v292 = v92;
    v132 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v133 = *(_QWORD *)(v132 + 8);
    v134 = v294;
    v135 = *(_BYTE *)v132;
    v92 = v292;
    *(_BYTE *)v132 = 4;
    *(_QWORD *)(v132 + 8) = v134;
    v294 = v133;
    LOBYTE(v293) = v135;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v136 = *((_WORD *)v285 + 12);
    if ( v136 == 36 || v136 == 430 || v136 == 267 )
      goto LABEL_146;
  }
  else
  {
    if ( (_WORD)v111 != 430 && (_WORD)v111 != 36 && (_WORD)v111 != 267 )
    {
      if ( !v291 )
        goto LABEL_130;
      goto LABEL_147;
    }
LABEL_146:
    v294 = 1;
    v292 = v92;
    v137 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v138 = *(_BYTE *)v137;
    v139 = *(_QWORD *)(v137 + 8);
    *(_BYTE *)v137 = 4;
    v92 = v292;
    LOBYTE(v293) = v138;
    *(_QWORD *)(v137 + 8) = v294;
    v294 = v139;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
LABEL_147:
  LOBYTE(v293) = 0;
  v292 = v92;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v140 = v293;
  v141 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v142 = *(_BYTE *)v141;
  v143 = *(_QWORD *)(v141 + 8);
  *(_BYTE *)v141 = v140;
  LOBYTE(v293) = v142;
  *(_QWORD *)(v141 + 8) = v294;
  v294 = v143;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_130:
  v292 = v92;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( haystack[0].m128i_i64[0] )
  {
    haystack[0].m128i_i64[1] = 0;
    qfree();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v295 )
  {
    *(_QWORD *)&v296 = 0;
    qfree();
  }
  operator delete(v285, 0x168u);
  return a1;
}

