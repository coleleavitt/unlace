_QWORD *__fastcall ida_mcp::tools::indirect_branches::`anonymous namespace'::handle_trace_register_usage(
        _QWORD *a1,
        __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // rbp
  void *v3; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // rbp
  char *v5; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v6; // rbp
  char *v7; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v8; // rbp
  char *v9; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v11; // rbp
  char *v12; // rax
  void *v13; // rbp
  char *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r13
  __int64 v18; // r14
  size_t v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rbp
  size_t v23; // rdx
  int v24; // eax
  void *v25; // rbp
  int *v26; // rax
  int *v27; // r12
  __int64 v28; // r15
  __int64 v29; // r12
  __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rbp
  size_t v33; // rdx
  int v34; // eax
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rbp
  size_t v37; // rdx
  int v38; // eax
  __int64 v39; // r13
  size_t v40; // rdx
  int v41; // eax
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rbp
  size_t v44; // rdx
  int v45; // eax
  unsigned __int8 v46; // al
  unsigned __int64 head; // r15
  char *v48; // r14
  unsigned __int8 v49; // bl
  char v50; // al
  char v51; // dl
  char v52; // al
  size_t v53; // rax
  unsigned int v54; // r12d
  char *v55; // rdx
  _QWORD *v56; // rax
  _QWORD *v57; // rdx
  _QWORD *v58; // r12
  __int64 v59; // rcx
  __int64 v60; // rax
  char v61; // si
  __int64 v62; // rdx
  char *v63; // r13
  __int64 *v64; // rax
  __int64 *v65; // r12
  size_t v66; // rax
  void *v67; // rcx
  size_t v68; // r8
  __int64 v69; // rax
  char v70; // si
  __int64 v71; // rdx
  const char *v72; // r13
  __int64 *v73; // rax
  __int64 *v74; // r12
  size_t v75; // rax
  void *v76; // rcx
  size_t v77; // r8
  __int64 v78; // rax
  char v79; // si
  __int64 v80; // rdx
  __int64 v81; // rax
  char v82; // si
  __int64 v83; // rdx
  __int64 v84; // rax
  char v85; // si
  __int64 v86; // rdx
  __int8 v87; // r13
  int v88; // ebp
  const char *v89; // r12
  __int64 *v90; // rax
  __int64 *v91; // rbx
  size_t v92; // rax
  void *v93; // rcx
  size_t v94; // r8
  __int64 v95; // rax
  char v96; // si
  __int64 v97; // rax
  __int64 v98; // rax
  unsigned __int64 v99; // rbx
  __m128i *v100; // rbp
  __int64 v101; // rdi
  _BYTE *v102; // rbx
  _BYTE *v103; // r12
  std::runtime_error *v104; // rax
  char v105; // dl
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int8 v110; // si
  __int64 v111; // rdx
  __int64 v112; // rax
  _QWORD *v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rax
  unsigned __int64 v116; // rbp
  __m128i *v117; // rbx
  char *v118; // rcx
  size_t v119; // rbp
  __int64 v120; // rax
  _BYTE *v121; // rbp
  unsigned __int64 v122; // r12
  _QWORD *v123; // rax
  _BYTE *v124; // rdi
  _QWORD *v125; // rbx
  size_t v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rax
  int *v129; // rdi
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rax
  size_t v137; // rax
  unsigned int v138; // r12d
  _QWORD *v139; // rdx
  _QWORD *v140; // rax
  _QWORD *v141; // rdx
  _QWORD *v142; // r9
  size_t v143; // rsi
  __int64 v144; // rax
  __int64 v145; // rax
  const char *v146; // r12
  _QWORD *v147; // rax
  _BYTE *v148; // r15
  __int64 *v149; // rbx
  size_t v150; // rax
  size_t v151; // rcx
  __int64 v152; // rax
  size_t v153; // rax
  unsigned int v154; // r13d
  _QWORD *v155; // rdx
  _QWORD *v156; // rax
  _QWORD *v157; // rdx
  _QWORD *v158; // r9
  size_t v159; // rsi
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  char *v163; // rbx
  __int64 v165; // rax
  __int64 v166; // rax
  _QWORD *v167; // rax
  unsigned int v168; // eax
  unsigned __int64 v169; // r8
  char *v170; // rdx
  char *v171; // r11
  unsigned int v172; // eax
  unsigned int v173; // eax
  unsigned int v174; // edx
  __int64 v175; // rsi
  _QWORD *v176; // rax
  _QWORD *v177; // rax
  unsigned __int64 v178; // rcx
  char *v179; // rax
  char *v180; // rbp
  unsigned int v181; // r12d
  unsigned int v182; // r12d
  unsigned int v183; // eax
  __int64 v184; // rdx
  __int64 v185; // r13
  size_t v186; // rdx
  int v187; // eax
  unsigned __int64 v188; // r14
  unsigned __int64 v189; // rbp
  size_t v190; // rax
  int v191; // eax
  unsigned __int64 v192; // rcx
  char *v193; // rax
  char *v194; // rbx
  unsigned int v195; // r12d
  unsigned int v196; // r12d
  unsigned int v197; // eax
  __int64 v198; // rdx
  unsigned __int64 v199; // rcx
  char *v200; // rax
  char *v201; // rbx
  unsigned int v202; // r13d
  unsigned int v203; // r13d
  unsigned int v204; // eax
  __int64 v205; // rdx
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rax
  unsigned int v209; // r10d
  unsigned int v210; // r10d
  unsigned __int64 v211; // r8
  int v212; // edx
  char *v213; // r9
  unsigned int v214; // edx
  unsigned int v215; // edx
  unsigned int v216; // ecx
  __int64 v217; // rdi
  unsigned __int64 v218; // r8
  int v219; // edx
  char *v220; // r9
  unsigned int v221; // edx
  unsigned int v222; // edx
  unsigned int v223; // ecx
  __int64 v224; // rdi
  unsigned __int64 *func; // [rsp+0h] [rbp-4E8h]
  bool v226; // [rsp+8h] [rbp-4E0h]
  void *desta; // [rsp+10h] [rbp-4D8h]
  void *destb; // [rsp+10h] [rbp-4D8h]
  void *dest; // [rsp+10h] [rbp-4D8h]
  void *destc; // [rsp+10h] [rbp-4D8h]
  void *destd; // [rsp+10h] [rbp-4D8h]
  void *deste; // [rsp+10h] [rbp-4D8h]
  int v233; // [rsp+18h] [rbp-4D0h]
  void *s1; // [rsp+28h] [rbp-4C0h]
  char v235; // [rsp+47h] [rbp-4A1h]
  _QWORD *v236; // [rsp+48h] [rbp-4A0h]
  __int64 v237; // [rsp+58h] [rbp-490h]
  __int8 v239; // [rsp+68h] [rbp-480h]
  size_t v240; // [rsp+88h] [rbp-460h]
  char v241; // [rsp+B0h] [rbp-438h]
  __int64 v242; // [rsp+B8h] [rbp-430h]
  __int64 v243[2]; // [rsp+C0h] [rbp-428h] BYREF
  __int64 v244; // [rsp+D0h] [rbp-418h]
  __int128 v245; // [rsp+D8h] [rbp-410h]
  char *v246; // [rsp+F0h] [rbp-3F8h]
  __int128 v247; // [rsp+F8h] [rbp-3F0h]
  const char *v248; // [rsp+110h] [rbp-3D8h]
  __int128 v249; // [rsp+118h] [rbp-3D0h]
  __m128i v250; // [rsp+130h] [rbp-3B8h] BYREF
  _OWORD v251[2]; // [rsp+150h] [rbp-398h] BYREF
  void *v252; // [rsp+170h] [rbp-378h]
  size_t v253; // [rsp+178h] [rbp-370h]
  _QWORD v254[2]; // [rsp+180h] [rbp-368h] BYREF
  void *v255; // [rsp+190h] [rbp-358h]
  size_t v256; // [rsp+198h] [rbp-350h]
  _QWORD v257[2]; // [rsp+1A0h] [rbp-348h] BYREF
  int v258; // [rsp+1B0h] [rbp-338h] BYREF
  int v259[4]; // [rsp+1B8h] [rbp-330h]
  char v260; // [rsp+1C8h] [rbp-320h]
  int v261[4]; // [rsp+1D0h] [rbp-318h]
  char v262; // [rsp+1E0h] [rbp-308h] BYREF
  int v263[4]; // [rsp+1E8h] [rbp-300h]
  char v264; // [rsp+1F8h] [rbp-2F0h]
  __int64 v265; // [rsp+200h] [rbp-2E8h]
  __int64 v266; // [rsp+208h] [rbp-2E0h]
  char v267; // [rsp+210h] [rbp-2D8h] BYREF
  int v268[4]; // [rsp+218h] [rbp-2D0h]
  __m128i v269; // [rsp+228h] [rbp-2C0h]
  __int64 v270; // [rsp+238h] [rbp-2B0h]
  char v271; // [rsp+240h] [rbp-2A8h] BYREF
  int v272[4]; // [rsp+248h] [rbp-2A0h]
  char v273; // [rsp+258h] [rbp-290h]
  int v274[4]; // [rsp+260h] [rbp-288h]
  char v275; // [rsp+270h] [rbp-278h] BYREF
  __int128 v276; // [rsp+278h] [rbp-270h]
  char v277; // [rsp+288h] [rbp-260h]
  __int64 v278; // [rsp+290h] [rbp-258h]
  __int64 v279; // [rsp+298h] [rbp-250h]
  void *v280; // [rsp+2A0h] [rbp-248h] BYREF
  __int128 s2; // [rsp+2A8h] [rbp-240h] BYREF
  char v282; // [rsp+2B8h] [rbp-230h] BYREF
  __int64 v283; // [rsp+2C8h] [rbp-220h]
  char v284[16]; // [rsp+2D0h] [rbp-218h] BYREF
  _QWORD v285[3]; // [rsp+2E0h] [rbp-208h] BYREF
  __int64 v286; // [rsp+2F8h] [rbp-1F0h]
  char v287[16]; // [rsp+300h] [rbp-1E8h] BYREF
  __int64 v288; // [rsp+310h] [rbp-1D8h]
  char v289[8]; // [rsp+318h] [rbp-1D0h] BYREF
  __int64 v290; // [rsp+320h] [rbp-1C8h]
  char v291[16]; // [rsp+328h] [rbp-1C0h] BYREF
  __int64 v292; // [rsp+338h] [rbp-1B0h]
  __int64 v293; // [rsp+340h] [rbp-1A8h]
  char v294[8]; // [rsp+348h] [rbp-1A0h] BYREF
  __int128 v295; // [rsp+350h] [rbp-198h]
  __int64 v296; // [rsp+360h] [rbp-188h]
  __int64 v297; // [rsp+368h] [rbp-180h]
  __int64 v298; // [rsp+370h] [rbp-178h]
  __int128 v299; // [rsp+378h] [rbp-170h]
  __int64 v300; // [rsp+388h] [rbp-160h]
  __int64 v301; // [rsp+390h] [rbp-158h]
  __int64 v302; // [rsp+398h] [rbp-150h]
  __int128 v303; // [rsp+3A0h] [rbp-148h]
  __int64 v304; // [rsp+3B0h] [rbp-138h]
  __int64 v305; // [rsp+3B8h] [rbp-130h]
  __int64 v306; // [rsp+3C0h] [rbp-128h]
  __int128 v307; // [rsp+3C8h] [rbp-120h]
  __int64 v308; // [rsp+3D8h] [rbp-110h]
  __int64 v309; // [rsp+3E0h] [rbp-108h]
  __int64 v310; // [rsp+3E8h] [rbp-100h]
  __int128 v311; // [rsp+3F0h] [rbp-F8h]
  __int64 v312; // [rsp+400h] [rbp-E8h]
  __int64 v313; // [rsp+408h] [rbp-E0h]
  __int64 v314; // [rsp+410h] [rbp-D8h]
  __int128 v315; // [rsp+418h] [rbp-D0h]
  __int64 v316; // [rsp+428h] [rbp-C0h]
  int v317; // [rsp+430h] [rbp-B8h]
  _BYTE v318[8]; // [rsp+438h] [rbp-B0h]
  char s[24]; // [rsp+440h] [rbp-A8h] BYREF
  _BYTE v320[8]; // [rsp+458h] [rbp-90h]
  char v321[24]; // [rsp+460h] [rbp-88h] BYREF
  _BYTE v322[8]; // [rsp+478h] [rbp-70h]
  char v323[40]; // [rsp+480h] [rbp-68h] BYREF
  unsigned __int64 v324; // [rsp+4A8h] [rbp-40h]

  v324 = __readfsqword(0x28u);
  DWORD2(s2) = 1919181921;
  v280 = (char *)&s2 + 8;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  *(_QWORD *)&s2 = 7;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v12 = "null";
        break;
      case 1:
        v12 = "object";
        break;
      case 2:
        v12 = (char *)"array";
        break;
      case 3:
        v12 = "string";
        break;
      case 4:
        v12 = "boolean";
        break;
      case 8:
        v12 = "binary";
        break;
      case 9:
        v12 = "discarded";
        break;
      default:
        v12 = "number";
        break;
    }
    *(_QWORD *)&v251[0] = v12;
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
  v15 = *(_QWORD *)(a2 + 8);
  v16 = *(_QWORD *)(v15 + 16);
  v17 = v15 + 8;
  if ( v16 )
  {
    v18 = v15 + 8;
    do
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)(v16 + 40);
        if ( !v21 )
          break;
        v19 = 7;
        if ( v21 <= 7 )
          v19 = *(_QWORD *)(v16 + 40);
        v20 = memcmp(*(const void **)(v16 + 32), (char *)&s2 + 8, v19);
        if ( v20 || (v20 = v21 - 7, (__int64)(v21 - 7) <= 0x7FFFFFFF) )
        {
          if ( v20 < 0 )
            break;
        }
        v18 = v16;
        v16 = *(_QWORD *)(v16 + 16);
        if ( !v16 )
          goto LABEL_12;
      }
      v16 = *(_QWORD *)(v16 + 24);
    }
    while ( v16 );
LABEL_12:
    if ( v17 != v18 )
    {
      v22 = *(_QWORD *)(v18 + 40);
      if ( v22 )
      {
        v23 = 7;
        if ( v22 <= 7 )
          v23 = *(_QWORD *)(v18 + 40);
        v24 = memcmp((char *)&s2 + 8, *(const void **)(v18 + 32), v23);
        if ( v24 || (v24 = 7 - v22, (__int64)(7 - v22) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v24 >= 0 )
            v17 = v18;
        }
      }
      else
      {
        v17 = v18;
      }
    }
  }
  BYTE8(s2) = 0;
  *(_QWORD *)&s2 = 0;
  v280 = (char *)&s2 + 8;
  v239 = *(_BYTE *)(v17 + 64);
  if ( v239 != 3 )
  {
    v11 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v17 + 64) )
    {
      case 0:
        v14 = "null";
        break;
      case 1:
        v14 = "object";
        break;
      case 2:
        v14 = (char *)"array";
        break;
      case 3:
        v14 = "string";
        break;
      case 4:
        v14 = "boolean";
        break;
      case 8:
        v14 = "binary";
        break;
      case 9:
        v14 = "discarded";
        break;
      default:
        v14 = "number";
        break;
    }
    *(_QWORD *)&v251[0] = v14;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v11,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v11,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v25 = v280;
  v26 = __errno_location();
  *v26 = 0;
  v27 = v26;
  v237 = __isoc23_strtoull();
  if ( v25 == *(void **)&v251[0] || **(_BYTE **)&v251[0] || v237 == -1 && *v27 == 34 )
  {
    if ( v280 != (char *)&s2 + 8 )
      operator delete(v280, *((_QWORD *)&s2 + 1) + 1LL);
    v104 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v104, "Invalid address format");
    ida_mcp::tools::indirect_branches::`anonymous namespace'::handle_trace_register_usage();
  }
  if ( v280 != (char *)&s2 + 8 )
    operator delete(v280, *((_QWORD *)&s2 + 1) + 1LL);
  v282 = 0;
  *((_QWORD *)&s2 + 1) = 0x7265747369676572LL;
  v280 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
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
    *(_QWORD *)&v251[0] = v5;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v4,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      v4,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v28 = *(_QWORD *)(a2 + 8);
  v29 = *(_QWORD *)(v28 + 16);
  v30 = v28 + 8;
  if ( v29 )
  {
    v31 = v28 + 8;
    v32 = *(_QWORD *)(v28 + 16);
    do
    {
      while ( 1 )
      {
        v35 = *(_QWORD *)(v32 + 40);
        if ( !v35 )
          break;
        v33 = 8;
        if ( v35 <= 8 )
          v33 = *(_QWORD *)(v32 + 40);
        v34 = memcmp(*(const void **)(v32 + 32), (char *)&s2 + 8, v33);
        if ( v34 || (v34 = v35 - 8, (__int64)(v35 - 8) <= 0x7FFFFFFF) )
        {
          if ( v34 < 0 )
            break;
        }
        v31 = v32;
        v32 = *(_QWORD *)(v32 + 16);
        if ( !v32 )
          goto LABEL_37;
      }
      v32 = *(_QWORD *)(v32 + 24);
    }
    while ( v32 );
LABEL_37:
    v30 = v28 + 8;
    if ( v28 + 8 != v31 )
    {
      v36 = *(_QWORD *)(v31 + 40);
      if ( !v36 )
        goto LABEL_316;
      v37 = 8;
      if ( v36 <= 8 )
        v37 = *(_QWORD *)(v31 + 40);
      v38 = memcmp((char *)&s2 + 8, *(const void **)(v31 + 32), v37);
      if ( v38 || (v38 = 8 - v36, (__int64)(8 - v36) >= (__int64)0xFFFFFFFF80000000LL) )
      {
        if ( v38 >= 0 )
        {
LABEL_316:
          if ( *(_BYTE *)(v31 + 64) != 3 )
          {
            strcpy((char *)v285, "register");
            goto LABEL_46;
          }
          strcpy((char *)v285, "register");
          goto LABEL_320;
        }
      }
    }
  }
  if ( *(_BYTE *)(v28 + 72) == 3 )
  {
    strcpy((char *)v285, "register");
    if ( !v29 )
    {
LABEL_336:
      v185 = v30;
LABEL_337:
      BYTE8(s2) = 0;
      *(_QWORD *)&s2 = 0;
      v280 = (char *)&s2 + 8;
      if ( *(_BYTE *)(v185 + 64) != 3 )
      {
        v8 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
        switch ( *(_BYTE *)(v185 + 64) )
        {
          case 0:
            v9 = "null";
            break;
          case 1:
            v9 = "object";
            break;
          case 2:
            v9 = (char *)"array";
            break;
          case 3:
            v9 = "string";
            break;
          case 4:
            v9 = "boolean";
            break;
          case 8:
            v9 = "binary";
            break;
          case 9:
            v9 = "discarded";
            break;
          default:
            v9 = "number";
            break;
        }
        *(_QWORD *)&v251[0] = v9;
        nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
        nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
          v8,
          302);
        std::string::_M_dispose();
        __cxa_throw(
          v8,
          (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
          (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
      }
      std::string::_M_assign();
      v233 = str2reg();
      if ( v233 < 0 )
      {
        v3 = __cxa_allocate_exception(0x10u);
        *(_QWORD *)&v284[8] = 0;
        *(_QWORD *)v284 = v285;
        LOBYTE(v285[0]) = 0;
        std::string::reserve();
        if ( (unsigned __int64)(*(_QWORD *)&v284[8] - 0x7FFFFFFFFFFFFFE8LL) > 0x16 )
        {
          std::string::_M_append();
          if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)&v284[8] >= (unsigned __int64)s2 )
          {
            std::string::_M_append();
            std::runtime_error::runtime_error();
            std::string::_M_dispose();
            __cxa_throw(
              v3,
              (struct type_info *)&`typeinfo for'std::runtime_error,
              (void (*)(void *))&std::runtime_error::~runtime_error);
          }
          std::__throw_length_error("basic_string::append");
        }
        std::__throw_length_error("basic_string::append");
      }
      if ( v280 != (char *)&s2 + 8 )
        operator delete(v280, *((_QWORD *)&s2 + 1) + 1LL);
      goto LABEL_68;
    }
LABEL_320:
    v185 = v30;
    do
    {
      while ( 1 )
      {
        v188 = *(_QWORD *)(v29 + 40);
        if ( !v188 )
          break;
        v186 = 8;
        if ( v188 <= 8 )
          v186 = *(_QWORD *)(v29 + 40);
        v187 = memcmp(*(const void **)(v29 + 32), v285, v186);
        if ( v187 || (v187 = v188 - 8, (__int64)(v188 - 8) <= 0x7FFFFFFF) )
        {
          if ( v187 < 0 )
            break;
        }
        v185 = v29;
        v29 = *(_QWORD *)(v29 + 16);
        if ( !v29 )
          goto LABEL_329;
      }
      v29 = *(_QWORD *)(v29 + 24);
    }
    while ( v29 );
LABEL_329:
    if ( v30 != v185 )
    {
      v189 = *(_QWORD *)(v185 + 40);
      if ( !v189 )
        goto LABEL_337;
      v190 = 8;
      if ( v189 <= 8 )
        v190 = *(_QWORD *)(v185 + 40);
      v191 = memcmp(v285, *(const void **)(v185 + 32), v190);
      if ( v191 || (v191 = 8 - v189, (__int64)(8 - v189) >= (__int64)0xFFFFFFFF80000000LL) )
      {
        if ( v191 >= 0 )
          goto LABEL_337;
      }
    }
    goto LABEL_336;
  }
  strcpy((char *)v285, "register");
  if ( !v29 )
  {
LABEL_62:
    v39 = v30;
    goto LABEL_63;
  }
LABEL_46:
  v39 = v30;
  do
  {
    while ( 1 )
    {
      v42 = *(_QWORD *)(v29 + 40);
      if ( !v42 )
        break;
      v40 = 8;
      if ( v42 <= 8 )
        v40 = *(_QWORD *)(v29 + 40);
      v41 = memcmp(*(const void **)(v29 + 32), v285, v40);
      if ( v41 || (v41 = v42 - 8, (__int64)(v42 - 8) <= 0x7FFFFFFF) )
      {
        if ( v41 < 0 )
          break;
      }
      v39 = v29;
      v29 = *(_QWORD *)(v29 + 16);
      if ( !v29 )
        goto LABEL_55;
    }
    v29 = *(_QWORD *)(v29 + 24);
  }
  while ( v29 );
LABEL_55:
  if ( v39 == v30 )
    goto LABEL_62;
  v43 = *(_QWORD *)(v39 + 40);
  if ( v43 )
  {
    v44 = 8;
    if ( v43 <= 8 )
      v44 = *(_QWORD *)(v39 + 40);
    v45 = memcmp(v285, *(const void **)(v39 + 32), v44);
    if ( !v45 )
    {
      v45 = 8 - v43;
      if ( (__int64)(8 - v43) < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_62;
    }
    if ( v45 < 0 )
      goto LABEL_62;
  }
LABEL_63:
  v46 = *(_BYTE *)(v39 + 64);
  if ( v46 == 6 )
  {
LABEL_67:
    v233 = *(_DWORD *)(v39 + 72);
    goto LABEL_68;
  }
  if ( v46 > 6u )
  {
    if ( v46 != 7 )
      goto LABEL_421;
    v233 = (int)*(double *)(v39 + 72);
  }
  else
  {
    if ( v46 != 4 )
    {
      if ( v46 == 5 )
        goto LABEL_67;
LABEL_421:
      v6 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      switch ( *(_BYTE *)(v39 + 64) )
      {
        case 0:
          v7 = "null";
          break;
        case 1:
          v7 = "object";
          break;
        case 2:
          v7 = (char *)"array";
          break;
        case 3:
          v7 = "string";
          break;
        case 4:
          v7 = "boolean";
          break;
        case 8:
          v7 = "binary";
          break;
        case 9:
          v7 = "discarded";
          break;
        default:
          v7 = "number";
          break;
      }
      *(_QWORD *)&v251[0] = v7;
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        v6,
        302);
      std::string::_M_dispose();
      __cxa_throw(
        v6,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    v233 = *(unsigned __int8 *)(v39 + 72);
  }
LABEL_68:
  func = (unsigned __int64 *)get_func();
  if ( !func )
  {
    v13 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::string::append();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v13,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  head = v237;
  v235 = 0;
  v236 = nullptr;
  while ( 1 )
  {
    if ( head == -1 || head < *func )
      goto LABEL_209;
    v48 = v284;
    v285[0] = -1;
    *(_OWORD *)v284 = -1;
    v285[1] = 0;
    v285[2] = 0;
    v286 = 0;
    v288 = 0;
    *(_QWORD *)v289 = 0;
    v290 = 0;
    v292 = 0;
    v293 = 0;
    *(_QWORD *)v294 = 0;
    v296 = 0;
    v297 = 0;
    v298 = 0;
    v300 = 0;
    v301 = 0;
    v302 = 0;
    v304 = 0;
    v305 = 0;
    v306 = 0;
    v308 = 0;
    v309 = 0;
    v310 = 0;
    v312 = 0;
    v313 = 0;
    *(_OWORD *)v287 = 0;
    *(_OWORD *)v291 = 0;
    v295 = 0;
    v299 = 0;
    v303 = 0;
    v307 = 0;
    v311 = 0;
    v314 = 0;
    v316 = 0;
    v317 = 0;
    v315 = 0;
    if ( !(unsigned int)decode_insn() || !BYTE1(v286) )
      goto LABEL_70;
    if ( BYTE1(v286) == 1 )
      break;
    if ( !BYTE1(v290) )
      goto LABEL_70;
    v49 = v294[1];
    if ( BYTE1(v290) != 1 )
    {
      if ( !v294[1] )
        goto LABEL_70;
      if ( v294[1] != 1 )
      {
        v49 = BYTE1(v298);
        v226 = 0;
        if ( !BYTE1(v298) )
          goto LABEL_70;
        goto LABEL_81;
      }
      v226 = 0;
      v51 = 0;
      v49 = 0;
      goto LABEL_248;
    }
    v226 = 0;
    if ( HIWORD(v290) != v233 )
    {
      if ( !v294[1] )
        goto LABEL_70;
LABEL_197:
      if ( v49 != 1 )
      {
        v49 = BYTE1(v298);
        if ( !BYTE1(v298) )
        {
LABEL_199:
          if ( v226 )
            goto LABEL_92;
          goto LABEL_70;
        }
        goto LABEL_81;
      }
LABEL_247:
      v51 = 0;
      v49 = 0;
      goto LABEL_248;
    }
LABEL_279:
    if ( !v49 )
      goto LABEL_91;
    if ( v49 != 1 )
    {
      v49 = BYTE1(v298);
      if ( !BYTE1(v298) )
        goto LABEL_91;
      if ( BYTE1(v298) != 1 )
      {
        v49 = BYTE1(v302);
        if ( !BYTE1(v302) )
          goto LABEL_91;
        if ( BYTE1(v302) != 1 )
        {
          v50 = BYTE1(v306);
          v49 = 1;
          v51 = 1;
          if ( !BYTE1(v306) )
            goto LABEL_92;
          goto LABEL_85;
        }
LABEL_315:
        v51 = 1;
        goto LABEL_184;
      }
      goto LABEL_365;
    }
    v51 = 1;
LABEL_248:
    if ( v233 == *(unsigned __int16 *)&v294[6] )
    {
      if ( !BYTE1(v298) )
        goto LABEL_91;
      if ( BYTE1(v298) != 1 )
      {
        v49 = BYTE1(v302);
        if ( !BYTE1(v302) )
          goto LABEL_91;
        if ( BYTE1(v302) != 1 )
        {
          v49 = BYTE1(v306);
          if ( !BYTE1(v306) )
            goto LABEL_91;
          if ( BYTE1(v306) == 1 )
            goto LABEL_187;
          v52 = BYTE1(v310);
          v49 = 1;
          v51 = 1;
          if ( !BYTE1(v310) )
            goto LABEL_92;
          goto LABEL_87;
        }
        goto LABEL_315;
      }
      v49 = 1;
LABEL_365:
      v51 = 1;
      goto LABEL_239;
    }
    if ( !BYTE1(v298) )
      goto LABEL_89;
    if ( BYTE1(v298) != 1 || v233 != HIWORD(v298) )
    {
LABEL_240:
      if ( !BYTE1(v302) )
        goto LABEL_89;
      if ( BYTE1(v302) != 1 )
        goto LABEL_242;
LABEL_184:
      if ( v233 == HIWORD(v302) )
      {
        v49 = BYTE1(v306);
        if ( !BYTE1(v306) )
          goto LABEL_91;
        if ( BYTE1(v306) != 1 )
        {
LABEL_189:
          v49 = BYTE1(v310);
          if ( BYTE1(v310) != 1 )
            goto LABEL_91;
LABEL_190:
          v51 = 1;
LABEL_191:
          if ( v233 == HIWORD(v310) )
            goto LABEL_91;
          if ( BYTE1(v314) != 1 )
            goto LABEL_89;
          goto LABEL_193;
        }
LABEL_187:
        v51 = 1;
LABEL_188:
        if ( v233 == HIWORD(v306) )
          goto LABEL_189;
LABEL_86:
        v52 = BYTE1(v310);
        if ( !BYTE1(v310) )
          goto LABEL_89;
LABEL_87:
        if ( v52 == 1 )
          goto LABEL_191;
        if ( BYTE1(v314) != 1 )
          goto LABEL_89;
        goto LABEL_193;
      }
LABEL_242:
      v50 = BYTE1(v306);
      if ( !BYTE1(v306) )
        goto LABEL_89;
LABEL_85:
      if ( v50 == 1 )
        goto LABEL_188;
      goto LABEL_86;
    }
LABEL_252:
    v49 = BYTE1(v302);
    if ( !BYTE1(v302) )
      goto LABEL_91;
    if ( BYTE1(v302) == 1 )
      goto LABEL_315;
    v49 = BYTE1(v306);
    if ( !BYTE1(v306) )
      goto LABEL_91;
    if ( BYTE1(v306) == 1 )
      goto LABEL_187;
    v49 = BYTE1(v310);
    if ( !BYTE1(v310) )
      goto LABEL_91;
    if ( BYTE1(v310) == 1 )
      goto LABEL_190;
    v49 = BYTE1(v314);
    if ( BYTE1(v314) != 1 )
      goto LABEL_91;
    v51 = 1;
LABEL_193:
    if ( v233 == HIWORD(v314) )
      goto LABEL_91;
LABEL_89:
    if ( v226 )
      goto LABEL_92;
    if ( v51 )
    {
LABEL_91:
      v49 = 1;
      goto LABEL_92;
    }
LABEL_70:
    head = prev_head();
  }
  if ( BYTE1(v290) )
  {
    v49 = v294[1];
    v226 = v233 == HIWORD(v286);
    if ( BYTE1(v290) != 1 )
    {
      if ( !v294[1] )
        goto LABEL_181;
      if ( v294[1] != 1 )
      {
        v49 = BYTE1(v298);
        if ( !BYTE1(v298) )
          goto LABEL_181;
LABEL_81:
        if ( v49 != 1 )
        {
          v49 = BYTE1(v302);
          if ( !BYTE1(v302) )
            goto LABEL_199;
          if ( BYTE1(v302) == 1 )
          {
            v51 = 0;
            v49 = 0;
            goto LABEL_184;
          }
          v50 = BYTE1(v306);
          v51 = 0;
          v49 = 0;
          if ( !BYTE1(v306) )
            goto LABEL_199;
          goto LABEL_85;
        }
        v51 = 0;
        v49 = 0;
LABEL_239:
        if ( v233 != HIWORD(v298) )
          goto LABEL_240;
        goto LABEL_252;
      }
      goto LABEL_247;
    }
    if ( v233 != HIWORD(v290) )
    {
      if ( !v294[1] )
      {
LABEL_181:
        if ( v233 == HIWORD(v286) )
          goto LABEL_182;
        goto LABEL_70;
      }
      goto LABEL_197;
    }
    goto LABEL_279;
  }
  if ( v233 != HIWORD(v286) )
    goto LABEL_70;
  v49 = 0;
LABEL_182:
  v226 = 1;
LABEL_92:
  v244 = 0;
  v246 = nullptr;
  v245 = 0;
  v247 = 0;
  generate_disasm_line();
  tag_remove();
  v248 = nullptr;
  v249 = 0;
  print_insn_mnem();
  qsnprintf();
  v280 = (char *)&s2 + 8;
  v53 = strlen(s);
  *(_QWORD *)&v251[0] = v53;
  v54 = v53;
  if ( v53 > 0xF )
  {
    v167 = (_QWORD *)std::string::_M_create();
    v280 = v167;
    *((_QWORD *)&s2 + 1) = *(_QWORD *)&v251[0];
    goto LABEL_265;
  }
  if ( v53 == 1 )
  {
    BYTE8(s2) = s[0];
LABEL_95:
    v55 = (char *)&s2 + 8;
  }
  else
  {
    if ( !v53 )
      goto LABEL_95;
    v167 = (_QWORD *)&s2 + 1;
LABEL_265:
    if ( v54 >= 8 )
    {
      *v167 = *(_QWORD *)s;
      *(_QWORD *)((char *)v167 + v54 - 8) = *(_QWORD *)&v318[v54];
      v178 = (unsigned __int64)(v167 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v179 = (char *)v167 - v178;
      v180 = (char *)(s - v179);
      v181 = ((_DWORD)v179 + v54) & 0xFFFFFFF8;
      if ( v181 >= 8 )
      {
        v182 = v181 & 0xFFFFFFF8;
        v183 = 0;
        do
        {
          v184 = v183;
          v183 += 8;
          *(_QWORD *)(v178 + v184) = *(_QWORD *)&v180[v184];
        }
        while ( v183 < v182 );
      }
    }
    else if ( (v54 & 4) != 0 )
    {
      *(_DWORD *)v167 = *(_DWORD *)s;
      *(_DWORD *)((char *)v167 + v54 - 4) = *(_DWORD *)&v318[v54 + 4];
    }
    else if ( v54 )
    {
      *(_BYTE *)v167 = s[0];
      if ( (v54 & 2) != 0 )
        *(_WORD *)((char *)v167 + v54 - 2) = *(_WORD *)&v318[v54 + 6];
    }
    v53 = *(_QWORD *)&v251[0];
    v55 = (char *)v280;
  }
  *(_QWORD *)&s2 = v53;
  v55[v53] = 0;
  v251[0] = 0u;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v56 = (_QWORD *)operator new(0x20u);
  v57 = v56 + 2;
  v58 = v56;
  v59 = s2;
  *v56 = v56 + 2;
  if ( v280 == (char *)&s2 + 8 )
  {
    v168 = v59 + 1;
    if ( (unsigned int)(v59 + 1) < 8 )
    {
      if ( (v168 & 4) != 0 )
      {
        *((_DWORD *)v58 + 4) = DWORD2(s2);
        *(_DWORD *)((char *)v57 + v168 - 4) = *(_DWORD *)((char *)&s2 + v168 + 4);
      }
      else if ( (_DWORD)v59 != -1 )
      {
        *((_BYTE *)v58 + 16) = BYTE8(s2);
        if ( (v168 & 2) != 0 )
          *(_WORD *)((char *)v57 + v168 - 2) = *(_WORD *)((char *)&s2 + v168 + 6);
      }
    }
    else
    {
      v169 = (unsigned __int64)(v58 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v58[2] = *((_QWORD *)&s2 + 1);
      *(_QWORD *)((char *)v57 + v168 - 8) = *(_QWORD *)((char *)&s2 + v168);
      v170 = (char *)v57 - v169;
      v171 = (char *)((char *)&s2 + 8 - v170);
      v172 = ((_DWORD)v170 + v168) & 0xFFFFFFF8;
      if ( v172 >= 8 )
      {
        v173 = v172 & 0xFFFFFFF8;
        v174 = 0;
        do
        {
          v175 = v174;
          v174 += 8;
          *(_QWORD *)(v169 + v175) = *(_QWORD *)&v171[v175];
        }
        while ( v174 < v173 );
      }
    }
  }
  else
  {
    *v56 = v280;
    v56[2] = *((_QWORD *)&s2 + 1);
  }
  v58[1] = v59;
  BYTE8(s2) = 0;
  v280 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  v60 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v61 = *(_BYTE *)v60;
  v62 = *(_QWORD *)(v60 + 8);
  *(_BYTE *)v60 = 3;
  *(_QWORD *)(v60 + 8) = v58;
  LOBYTE(v251[0]) = v61;
  *((_QWORD *)&v251[0] + 1) = v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v280 != (char *)&s2 + 8 )
    operator delete(v280, *((_QWORD *)&s2 + 1) + 1LL);
  v63 = v246;
  if ( !(_QWORD)v247 )
    v63 = _qstring<char>::c_str(void)const::nullstr;
  v251[0] = 0u;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v64 = (__int64 *)operator new(0x20u);
  v65 = v64;
  *v64 = (__int64)(v64 + 2);
  if ( !v63 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  desta = v64 + 2;
  v66 = strlen(v63);
  v67 = desta;
  v250.m128i_i64[0] = v66;
  v68 = v66;
  if ( v66 > 0xF )
  {
    destd = (void *)v66;
    v165 = std::string::_M_create();
    *v65 = v165;
    v67 = (void *)v165;
    v68 = (size_t)destd;
    v65[2] = v250.m128i_i64[0];
    goto LABEL_261;
  }
  if ( v66 == 1 )
  {
    *((_BYTE *)v65 + 16) = *v63;
  }
  else
  {
    if ( !v66 )
      goto LABEL_106;
LABEL_261:
    memcpy(v67, v63, v68);
    v66 = v250.m128i_i64[0];
    v67 = (void *)*v65;
  }
LABEL_106:
  v65[1] = v66;
  *((_BYTE *)v67 + v66) = 0;
  v69 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v70 = *(_BYTE *)v69;
  v71 = *(_QWORD *)(v69 + 8);
  *(_BYTE *)v69 = 3;
  *(_QWORD *)(v69 + 8) = v65;
  LOBYTE(v251[0]) = v70;
  *((_QWORD *)&v251[0] + 1) = v71;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( (_QWORD)v249 )
    v72 = v248;
  else
    v72 = _qstring<char>::c_str(void)const::nullstr;
  v251[0] = 0u;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v73 = (__int64 *)operator new(0x20u);
  v74 = v73;
  *v73 = (__int64)(v73 + 2);
  if ( !v72 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  destb = v73 + 2;
  v75 = strlen(v72);
  v76 = destb;
  v250.m128i_i64[0] = v75;
  v77 = v75;
  if ( v75 > 0xF )
  {
    deste = (void *)v75;
    v166 = std::string::_M_create();
    *v74 = v166;
    v76 = (void *)v166;
    v77 = (size_t)deste;
    v74[2] = v250.m128i_i64[0];
    goto LABEL_263;
  }
  if ( v75 == 1 )
  {
    *((_BYTE *)v74 + 16) = *v72;
  }
  else
  {
    if ( !v75 )
      goto LABEL_112;
LABEL_263:
    memcpy(v76, v72, v77);
    v75 = v250.m128i_i64[0];
    v76 = (void *)*v74;
  }
LABEL_112:
  v74[1] = v75;
  *((_BYTE *)v76 + v75) = 0;
  v78 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v79 = *(_BYTE *)v78;
  v80 = *(_QWORD *)(v78 + 8);
  *(_BYTE *)v78 = 3;
  *(_QWORD *)(v78 + 8) = v74;
  LOBYTE(v251[0]) = v79;
  *((_QWORD *)&v251[0] + 1) = v80;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *((_QWORD *)&v251[0] + 1) = v226;
  v81 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v82 = *(_BYTE *)v81;
  v83 = *(_QWORD *)(v81 + 8);
  *(_BYTE *)v81 = 4;
  LOBYTE(v251[0]) = v82;
  *(_QWORD *)(v81 + 8) = *((_QWORD *)&v251[0] + 1);
  *((_QWORD *)&v251[0] + 1) = v83;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *((_QWORD *)&v251[0] + 1) = v49;
  v84 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v85 = *(_BYTE *)v84;
  *(_BYTE *)v84 = 4;
  v86 = *(_QWORD *)(v84 + 8);
  LOBYTE(v251[0]) = v85;
  *(_QWORD *)(v84 + 8) = *((_QWORD *)&v251[0] + 1);
  *((_QWORD *)&v251[0] + 1) = v86;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v87 = v241;
  v88 = 0;
  while ( 2 )
  {
    if ( v48[41] )
    {
      memset(&v250, 0, 24);
      memset(v251, 0, 24);
      print_operand();
      tag_remove();
      v89 = *(const char **)&v251[0];
      if ( !*((_QWORD *)&v251[0] + 1) )
        v89 = _qstring<char>::c_str(void)const::nullstr;
      v243[0] = 0;
      v243[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v90 = (__int64 *)operator new(0x20u);
      v91 = v90;
      *v90 = (__int64)(v90 + 2);
      if ( !v89 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      dest = v90 + 2;
      v92 = strlen(v89);
      v93 = dest;
      v240 = v92;
      v94 = v92;
      if ( v92 > 0xF )
      {
        destc = (void *)v92;
        v108 = std::string::_M_create();
        *v91 = v108;
        v93 = (void *)v108;
        v94 = (size_t)destc;
        v91[2] = v240;
LABEL_144:
        memcpy(v93, v89, v94);
        v92 = v240;
        v93 = (void *)*v91;
LABEL_122:
        v91[1] = v92;
        *((_BYTE *)v93 + v92) = 0;
        if ( v87 )
          goto LABEL_140;
      }
      else
      {
        if ( v92 != 1 )
        {
          if ( !v92 )
            goto LABEL_122;
          goto LABEL_144;
        }
        v105 = *v89;
        v91[1] = 1;
        *((_BYTE *)v91 + 16) = v105;
        *((_BYTE *)dest + 1) = 0;
        if ( v87 )
        {
LABEL_140:
          if ( v87 != 2 )
          {
            v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
            nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
            nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
              v2,
              308);
            std::string::_M_dispose();
            __cxa_throw(
              v2,
              (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
              (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
          }
          v106 = *(_QWORD *)(v242 + 8);
          if ( v106 != *(_QWORD *)(v242 + 16) )
          {
            LOBYTE(v243[0]) = 3;
            v107 = v106 + 16;
            v96 = 0;
            v243[1] = (__int64)v91;
            *(__m128i *)(v107 - 16) = _mm_load_si128((const __m128i *)v243);
            *(_QWORD *)(v242 + 8) = v107;
            v97 = 0;
            goto LABEL_125;
          }
LABEL_124:
          LOBYTE(v243[0]) = 3;
          v243[1] = (__int64)v91;
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
          v96 = v243[0];
          v97 = v243[1];
LABEL_125:
          LOBYTE(v243[0]) = v96;
          v243[1] = v97;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( *(_QWORD *)&v251[0] )
          {
            *((_QWORD *)&v251[0] + 1) = 0;
            qfree();
          }
          if ( v250.m128i_i64[0] )
          {
            v250.m128i_i64[1] = 0;
            ++v88;
            qfree();
            if ( v88 == 8 )
              goto LABEL_129;
          }
          else if ( ++v88 == 8 )
          {
LABEL_129:
            v250 = (__m128i)2uLL;
LABEL_130:
            v98 = operator new(0x18u);
            v99 = *(_QWORD *)(v242 + 8) - *(_QWORD *)v242;
            v100 = (__m128i *)v98;
            *(_QWORD *)(v98 + 16) = 0;
            *(_OWORD *)v98 = 0;
            if ( v99 )
              v101 = operator new(v99);
            else
              v101 = 0;
            v100[1].m128i_i64[0] = v101 + v99;
            *v100 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v101, (__m128i)(unsigned __int64)v101);
            v102 = *(_BYTE **)(v242 + 8);
            v103 = *(_BYTE **)v242;
            v243[0] = v101;
            for ( v251[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v101, (__m128i)(unsigned __int64)v243);
                  v102 != v103;
                  v243[0] += 16 )
            {
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
              v103 += 16;
              v101 = v243[0] + 16;
            }
            v100->m128i_i64[1] = v101;
            v87 = 2;
            v250.m128i_i64[1] = (__int64)v100;
            goto LABEL_147;
          }
          v48 += 40;
          v87 = 2;
          continue;
        }
      }
      v241 = 2;
      v95 = operator new(0x18u);
      *(_QWORD *)(v95 + 16) = 0;
      v242 = v95;
      *(_OWORD *)v95 = 0;
      goto LABEL_124;
    }
    break;
  }
  v250.m128i_i64[1] = 0;
  v250.m128i_i8[0] = v87;
  switch ( v87 )
  {
    case 1:
      v128 = operator new(0x30u);
      *(_QWORD *)(v128 + 16) = 0;
      v129 = *(int **)(v242 + 16);
      v125 = (_QWORD *)v128;
      *(_DWORD *)(v128 + 8) = 0;
      *(_QWORD *)(v128 + 24) = v128 + 8;
      *(_QWORD *)(v128 + 32) = v128 + 8;
      *(_QWORD *)(v128 + 40) = 0;
      if ( !v129 )
        goto LABEL_168;
      v130 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
               v129,
               v128 + 8);
      v131 = v130;
      do
      {
        v132 = v130;
        v130 = *(_QWORD *)(v130 + 16);
      }
      while ( v130 );
      v125[3] = v132;
      v133 = v131;
      do
      {
        v134 = v133;
        v133 = *(_QWORD *)(v133 + 24);
      }
      while ( v133 );
      v135 = *(_QWORD *)(v242 + 40);
      v125[4] = v134;
      v125[2] = v131;
      v125[5] = v135;
      v250.m128i_i64[1] = (__int64)v125;
      goto LABEL_147;
    case 2:
      goto LABEL_130;
    case 3:
      v121 = *(_BYTE **)v242;
      v122 = *(_QWORD *)(v242 + 8);
      v123 = (_QWORD *)operator new(0x20u);
      v124 = v123 + 2;
      *(_QWORD *)&v251[0] = v122;
      v125 = v123;
      *v123 = v123 + 2;
      if ( v122 <= 0xF )
      {
        v126 = v122 + 1;
        if ( v122 )
          goto LABEL_166;
LABEL_369:
        *v124 = *v121;
        v127 = *(_QWORD *)&v251[0];
        goto LABEL_167;
      }
      v206 = std::string::_M_create();
      *v125 = v206;
      v124 = (_BYTE *)v206;
      v207 = *(_QWORD *)&v251[0];
      v125[2] = *(_QWORD *)&v251[0];
      v126 = v207 + 1;
      if ( !v207 )
        goto LABEL_369;
      v127 = -1;
      if ( v126 )
      {
LABEL_166:
        memcpy(v124, v121, v126);
        v127 = *(_QWORD *)&v251[0];
      }
LABEL_167:
      v125[1] = v127;
LABEL_168:
      v250.m128i_i64[1] = (__int64)v125;
LABEL_147:
      v109 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v110 = *(_BYTE *)v109;
      v111 = *(_QWORD *)(v109 + 8);
      *(_BYTE *)v109 = v87;
      v250.m128i_i8[0] = v110;
      *(_QWORD *)(v109 + 8) = v250.m128i_i64[1];
      v250.m128i_i64[1] = v111;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( !v235 )
      {
        v112 = operator new(0x18u);
        *(_QWORD *)(v112 + 16) = 0;
        v113 = (_QWORD *)v112;
        *(_OWORD *)v112 = 0;
LABEL_149:
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
        v236 = v113;
        v114 = v113[1];
        goto LABEL_150;
      }
      v113 = v236;
      if ( v236[2] == v236[1] )
        goto LABEL_149;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v114 = v236[1] + 16LL;
      v236[1] = v114;
LABEL_150:
      if ( v114 - *v236 <= 784 )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v248 )
        {
          *(_QWORD *)&v249 = 0;
          qfree();
        }
        if ( v246 )
        {
          *(_QWORD *)&v247 = 0;
          qfree();
        }
        if ( v244 )
        {
          *(_QWORD *)&v245 = 0;
          qfree();
        }
        v235 = 2;
        goto LABEL_70;
      }
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v248 )
      {
        *(_QWORD *)&v249 = 0;
        qfree();
      }
      if ( v246 )
      {
        *(_QWORD *)&v247 = 0;
        qfree();
      }
      if ( v244 )
      {
        *(_QWORD *)&v245 = 0;
        qfree();
      }
      v235 = 2;
LABEL_209:
      memset(v251, 0, 24);
      get_reg_name();
      LOBYTE(v258) = 0;
      *(_QWORD *)v259 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v258) = 3;
      v136 = operator new(0x20u);
      strcpy((char *)(v136 + 16), "address");
      *(_QWORD *)v136 = v136 + 16;
      *(_QWORD *)(v136 + 8) = 7;
      *(_OWORD *)v259 = (unsigned __int64)v136;
      qsnprintf();
      v252 = v254;
      v137 = strlen(v321);
      v250.m128i_i64[0] = v137;
      v138 = v137;
      if ( v137 > 0xF )
      {
        v177 = (_QWORD *)std::string::_M_create();
        v252 = v177;
        v254[0] = v250.m128i_i64[0];
      }
      else
      {
        if ( v137 == 1 )
        {
          LOBYTE(v254[0]) = v321[0];
          goto LABEL_212;
        }
        if ( !v137 )
        {
LABEL_212:
          v139 = v254;
          goto LABEL_213;
        }
        v177 = v254;
      }
      if ( v138 >= 8 )
      {
        *v177 = *(_QWORD *)v321;
        *(_QWORD *)((char *)v177 + v138 - 8) = *(_QWORD *)&v320[v138];
        v192 = (unsigned __int64)(v177 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v193 = (char *)v177 - v192;
        v194 = (char *)(v321 - v193);
        v195 = ((_DWORD)v193 + v138) & 0xFFFFFFF8;
        if ( v195 >= 8 )
        {
          v196 = v195 & 0xFFFFFFF8;
          v197 = 0;
          do
          {
            v198 = v197;
            v197 += 8;
            *(_QWORD *)(v192 + v198) = *(_QWORD *)&v194[v198];
          }
          while ( v197 < v196 );
        }
      }
      else if ( (v138 & 4) != 0 )
      {
        *(_DWORD *)v177 = *(_DWORD *)v321;
        *(_DWORD *)((char *)v177 + v138 - 4) = *(_DWORD *)&v320[v138 + 4];
      }
      else if ( v138 )
      {
        *(_BYTE *)v177 = v321[0];
        if ( (v138 & 2) != 0 )
          *(_WORD *)((char *)v177 + v138 - 2) = *(_WORD *)&v320[v138 + 6];
      }
      v137 = v250.m128i_i64[0];
      v139 = v252;
LABEL_213:
      v253 = v137;
      *((_BYTE *)v139 + v137) = 0;
      v260 = 0;
      *(_QWORD *)v261 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v260 = 3;
      v140 = (_QWORD *)operator new(0x20u);
      v141 = v252;
      v142 = v140 + 2;
      v143 = v253;
      *v140 = v140 + 2;
      if ( v141 == v254 )
      {
        v209 = v143 + 1;
        if ( (unsigned int)(v143 + 1) >= 8 )
        {
          v211 = (unsigned __int64)(v140 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v140[2] = v254[0];
          v212 = (_DWORD)v142 - v211;
          *(_QWORD *)((char *)v142 + v209 - 8) = *(_QWORD *)((char *)&v254[-1] + v209);
          v213 = (char *)((char *)v254 - ((char *)v142 - v211));
          v214 = (v209 + v212) & 0xFFFFFFF8;
          if ( v214 >= 8 )
          {
            v215 = v214 & 0xFFFFFFF8;
            v216 = 0;
            do
            {
              v217 = v216;
              v216 += 8;
              *(_QWORD *)(v211 + v217) = *(_QWORD *)&v213[v217];
            }
            while ( v216 < v215 );
          }
        }
        else if ( (v209 & 4) != 0 )
        {
          *((_DWORD *)v140 + 4) = v254[0];
          *(_DWORD *)((char *)v142 + v209 - 4) = *(_DWORD *)((char *)&v253 + v209 + 4);
        }
        else if ( (_DWORD)v143 != -1 )
        {
          *((_BYTE *)v140 + 16) = v254[0];
          if ( (v209 & 2) != 0 )
            *(_WORD *)((char *)v142 + v209 - 2) = *(_WORD *)((char *)&v253 + v209 + 6);
        }
      }
      else
      {
        *v140 = v141;
        v140[2] = v254[0];
      }
      v140[1] = v143;
      v252 = v254;
      v253 = 0;
      LOBYTE(v254[0]) = 0;
      *(_OWORD *)v261 = (unsigned __int64)v140;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v284,
        (const __m128i *)&v258,
        2);
      v285[0] = 0;
      v262 = 0;
      *(_QWORD *)v263 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v262 = 3;
      v144 = operator new(0x20u);
      *(_QWORD *)v144 = v144 + 16;
      strcpy((char *)(v144 + 16), "register");
      *(_QWORD *)(v144 + 8) = 8;
      v264 = 5;
      v265 = v233;
      v266 = 0;
      *(_OWORD *)v263 = (unsigned __int64)v144;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v285[1],
        (const __m128i *)&v262,
        2);
      v286 = 0;
      v267 = 0;
      *(_QWORD *)v268 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v267 = 3;
      v145 = operator new(0x20u);
      strcpy((char *)(v145 + 16), "register_name");
      *(_QWORD *)v145 = v145 + 16;
      *(_QWORD *)(v145 + 8) = 13;
      *(_OWORD *)v268 = (unsigned __int64)v145;
      if ( *((_QWORD *)&v251[0] + 1) > 1u )
      {
        v250 = 0u;
        v146 = *(const char **)&v251[0];
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v147 = (_QWORD *)operator new(0x20u);
        v148 = v147 + 2;
        v149 = v147;
        *v147 = v147 + 2;
        if ( !v146 )
          std::__throw_logic_error("basic_string: construction from null is not valid");
        v150 = strlen(v146);
        v248 = (const char *)v150;
        v151 = v150;
        if ( v150 > 0xF )
        {
          s1 = (void *)v150;
          v208 = std::string::_M_create();
          *v149 = v208;
          v148 = (_BYTE *)v208;
          v151 = (size_t)s1;
          v149[2] = (__int64)v248;
        }
        else
        {
          if ( v150 == 1 )
          {
            *((_BYTE *)v149 + 16) = *v146;
            goto LABEL_220;
          }
          if ( !v150 )
          {
LABEL_220:
            v149[1] = v150;
            v148[v150] = 0;
            goto LABEL_221;
          }
        }
        memcpy(v148, v146, v151);
        v150 = (size_t)v248;
        v148 = (_BYTE *)*v149;
        goto LABEL_220;
      }
      v239 = 0;
      v149 = nullptr;
LABEL_221:
      v250.m128i_i64[1] = (__int64)v149;
      v270 = 0;
      v250.m128i_i8[0] = v239;
      v269 = _mm_load_si128(&v250);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v287,
        (const __m128i *)&v267,
        2);
      v288 = 0;
      v271 = 0;
      *(_QWORD *)v272 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v271 = 3;
      v152 = operator new(0x20u);
      *(_QWORD *)(v152 + 8) = 8;
      *(_QWORD *)v152 = v152 + 16;
      strcpy((char *)(v152 + 16), "function");
      *(_OWORD *)v272 = (unsigned __int64)v152;
      qsnprintf();
      v255 = v257;
      v153 = strlen(v323);
      v248 = (const char *)v153;
      v154 = v153;
      if ( v153 > 0xF )
      {
        v176 = (_QWORD *)std::string::_M_create();
        v255 = v176;
        v257[0] = v248;
      }
      else
      {
        if ( v153 == 1 )
        {
          LOBYTE(v257[0]) = v323[0];
          goto LABEL_224;
        }
        if ( !v153 )
        {
LABEL_224:
          v155 = v257;
          goto LABEL_225;
        }
        v176 = v257;
      }
      if ( v154 >= 8 )
      {
        *v176 = *(_QWORD *)v323;
        *(_QWORD *)((char *)v176 + v154 - 8) = *(_QWORD *)&v322[v154];
        v199 = (unsigned __int64)(v176 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v200 = (char *)v176 - v199;
        v201 = (char *)(v323 - v200);
        v202 = ((_DWORD)v200 + v154) & 0xFFFFFFF8;
        if ( v202 >= 8 )
        {
          v203 = v202 & 0xFFFFFFF8;
          v204 = 0;
          do
          {
            v205 = v204;
            v204 += 8;
            *(_QWORD *)(v199 + v205) = *(_QWORD *)&v201[v205];
          }
          while ( v204 < v203 );
        }
      }
      else if ( (v154 & 4) != 0 )
      {
        *(_DWORD *)v176 = *(_DWORD *)v323;
        *(_DWORD *)((char *)v176 + v154 - 4) = *(_DWORD *)&v322[v154 + 4];
      }
      else if ( v154 )
      {
        *(_BYTE *)v176 = v323[0];
        if ( (v154 & 2) != 0 )
          *(_WORD *)((char *)v176 + v154 - 2) = *(_WORD *)&v322[v154 + 6];
      }
      v153 = (size_t)v248;
      v155 = v255;
LABEL_225:
      v256 = v153;
      *((_BYTE *)v155 + v153) = 0;
      v273 = 0;
      *(_QWORD *)v274 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v273 = 3;
      v156 = (_QWORD *)operator new(0x20u);
      v157 = v255;
      v158 = v156 + 2;
      v159 = v256;
      *v156 = v156 + 2;
      if ( v157 == v257 )
      {
        v210 = v159 + 1;
        if ( (unsigned int)(v159 + 1) >= 8 )
        {
          v218 = (unsigned __int64)(v156 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v156[2] = v257[0];
          v219 = (_DWORD)v158 - v218;
          *(_QWORD *)((char *)v158 + v210 - 8) = *(_QWORD *)((char *)&v257[-1] + v210);
          v220 = (char *)((char *)v257 - ((char *)v158 - v218));
          v221 = (v210 + v219) & 0xFFFFFFF8;
          if ( v221 >= 8 )
          {
            v222 = v221 & 0xFFFFFFF8;
            v223 = 0;
            do
            {
              v224 = v223;
              v223 += 8;
              *(_QWORD *)(v218 + v224) = *(_QWORD *)&v220[v224];
            }
            while ( v223 < v222 );
          }
        }
        else if ( (v210 & 4) != 0 )
        {
          *((_DWORD *)v156 + 4) = v257[0];
          *(_DWORD *)((char *)v158 + v210 - 4) = *(_DWORD *)((char *)&v256 + v210 + 4);
        }
        else if ( (_DWORD)v159 != -1 )
        {
          *((_BYTE *)v156 + 16) = v257[0];
          if ( (v210 & 2) != 0 )
            *(_WORD *)((char *)v158 + v210 - 2) = *(_WORD *)((char *)&v256 + v210 + 6);
        }
      }
      else
      {
        *v156 = v157;
        v156[2] = v257[0];
      }
      v156[1] = v159;
      v255 = v257;
      v256 = 0;
      LOBYTE(v257[0]) = 0;
      *(_OWORD *)v274 = (unsigned __int64)v156;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v289,
        (const __m128i *)&v271,
        2);
      *(_QWORD *)v291 = 0;
      v275 = 0;
      *(_QWORD *)&v276 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v275 = 3;
      v160 = operator new(0x20u);
      strcpy((char *)(v160 + 16), "trace_count");
      *(_QWORD *)v160 = v160 + 16;
      *(_QWORD *)(v160 + 8) = 11;
      v276 = (unsigned __int64)v160;
      if ( v235 == 2 )
        v161 = (__int64)(v236[1] - *v236) >> 4;
      else
        v161 = v235 != 0;
      v277 = 6;
      v278 = v161;
      v279 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v291[8],
        (const __m128i *)&v275,
        2);
      v293 = 0;
      LOBYTE(v280) = 0;
      *(_QWORD *)&s2 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v280) = 3;
      v162 = operator new(0x20u);
      *(_DWORD *)(v162 + 16) = 1667330676;
      *(_QWORD *)v162 = v162 + 16;
      *(_BYTE *)(v162 + 20) = 101;
      *(_QWORD *)(v162 + 8) = 5;
      *(_BYTE *)(v162 + 21) = 0;
      s2 = (unsigned __int64)v162;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v163 = v294;
      v283 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v294,
        (const __m128i *)&v280,
        2);
      *((_QWORD *)&v295 + 1) = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        a1,
        (const __m128i *)v284,
        6);
      do
      {
        v163 -= 24;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      while ( v163 != &v282 );
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v255 != v257 )
        operator delete(v255, v257[0] + 1LL);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v252 != v254 )
        operator delete(v252, v254[0] + 1LL);
      if ( *(_QWORD *)&v251[0] )
      {
        *((_QWORD *)&v251[0] + 1) = 0;
        qfree();
      }
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      return a1;
    case 4:
      v250.m128i_i8[8] = v242;
      goto LABEL_147;
    case 5:
    case 6:
      v250.m128i_i64[1] = v242;
      goto LABEL_147;
    case 7:
      v250.m128i_i64[1] = v242;
      goto LABEL_147;
    case 8:
      v115 = operator new(0x28u);
      v116 = *(_QWORD *)(v242 + 8) - *(_QWORD *)v242;
      v117 = (__m128i *)v115;
      *(_QWORD *)(v115 + 16) = 0;
      *(_OWORD *)v115 = 0;
      if ( v116 )
        v118 = (char *)operator new(v116);
      else
        v118 = nullptr;
      v117[1].m128i_i64[0] = (__int64)&v118[v116];
      *v117 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v118, (__m128i)(unsigned __int64)v118);
      if ( (__int64)(*(_QWORD *)(v242 + 8) - *(_QWORD *)v242) > 0 )
      {
        v119 = *(_QWORD *)(v242 + 8) - *(_QWORD *)v242;
        v118 = (char *)memcpy(v118, *(const void **)v242, v119) + v119;
      }
      v120 = *(_QWORD *)(v242 + 24);
      v117->m128i_i64[1] = (__int64)v118;
      v117[1].m128i_i64[1] = v120;
      v117[2].m128i_i8[0] = *(_BYTE *)(v242 + 32);
      v250.m128i_i64[1] = (__int64)v117;
      goto LABEL_147;
    default:
      goto LABEL_147;
  }
}

