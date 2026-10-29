__int64 __fastcall ida_mcp::tools::objc_deep::`anonymous namespace'::handle_get_objc_class_info(__int64 a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v3; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // r12
  char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r14
  size_t v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbx
  size_t v14; // rdx
  int v15; // eax
  char v16; // al
  char *v17; // r12
  int *v18; // rax
  int *v19; // r13
  __int64 v20; // rbx
  bool v21; // r12
  char *v22; // rax
  unsigned int v23; // r14d
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // r13
  char *v28; // rcx
  __int64 v29; // rax
  char v30; // si
  __int64 v31; // rdx
  __int64 v32; // rax
  char v33; // si
  __int64 v34; // rdx
  __int64 qword; // r13
  char *v36; // rax
  unsigned int v37; // r13d
  _QWORD *v38; // rdx
  _QWORD *v39; // rax
  _QWORD *v40; // rdx
  _QWORD *v41; // rbx
  char *v42; // rcx
  char v43; // r13
  char v44; // r14
  std::runtime_error *v45; // rbx
  __int64 v46; // rax
  char v47; // si
  __int64 v48; // rdx
  char *v49; // rax
  unsigned int v50; // r12d
  _QWORD *v51; // rdx
  _QWORD *v52; // rax
  _QWORD *v53; // rdx
  _QWORD *v54; // rbx
  char *v55; // rcx
  char v56; // r13
  __int64 v57; // rax
  char v58; // si
  __int64 v59; // rdx
  char *v60; // rax
  unsigned int v61; // r13d
  _QWORD *v62; // rdx
  _QWORD *v63; // rax
  _QWORD *v64; // rdx
  _QWORD *v65; // r12
  char *v66; // rcx
  __int64 v67; // rax
  char v68; // si
  __int64 v69; // rdx
  _QWORD *v71; // rax
  unsigned int dword; // r13d
  __int64 v73; // r12
  __int64 v74; // r14
  __int64 v75; // r12
  char v76; // bl
  __int64 v77; // rax
  char v78; // si
  __int64 v79; // rdx
  __int64 v80; // rax
  char v81; // si
  __int64 v82; // rdx
  __int64 v83; // rax
  char v84; // si
  __int64 v85; // rdx
  __int64 v86; // rax
  char v87; // si
  __int64 v88; // rdx
  __int64 v89; // rax
  char v90; // si
  __int64 v91; // rdx
  __int64 v92; // rax
  char v93; // si
  __int64 v94; // rdx
  __int64 v95; // rax
  char v96; // si
  __int64 v97; // rdx
  _QWORD *v98; // rax
  unsigned __int64 v99; // rcx
  char *v100; // rax
  char *v101; // r12
  unsigned int v102; // r13d
  unsigned int v103; // r13d
  unsigned int v104; // eax
  __int64 v105; // rdx
  unsigned __int64 v106; // rcx
  char *v107; // rax
  char *v108; // r13
  unsigned int v109; // r14d
  unsigned int v110; // r14d
  unsigned int v111; // eax
  __int64 v112; // rdx
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  unsigned int v115; // esi
  unsigned int v116; // esi
  unsigned __int64 v117; // rdi
  char *v118; // r8
  unsigned int v119; // eax
  unsigned int v120; // edx
  __int64 v121; // rsi
  unsigned int v122; // esi
  unsigned int v123; // esi
  unsigned __int64 v124; // rdi
  char *v125; // r8
  unsigned int v126; // eax
  unsigned int v127; // edx
  __int64 v128; // rsi
  unsigned __int64 v129; // rdx
  char *v130; // rax
  char *v131; // rbx
  unsigned int v132; // r13d
  unsigned int v133; // r13d
  unsigned int v134; // eax
  __int64 v135; // rcx
  unsigned __int64 v136; // rdx
  char *v137; // rax
  char *v138; // rbx
  unsigned int v139; // r12d
  unsigned int v140; // r12d
  unsigned int v141; // eax
  __int64 v142; // rcx
  unsigned __int64 v143; // rdi
  char *v144; // r8
  unsigned int v145; // eax
  unsigned int v146; // edx
  __int64 v147; // rsi
  unsigned __int64 v148; // rdi
  char *v149; // r8
  unsigned int v150; // eax
  unsigned int v151; // edx
  __int64 v152; // rsi
  unsigned __int64 v153; // r12
  char v154; // bp
  __int64 v155; // rax
  char v156; // si
  unsigned __int64 v157; // rdx
  __int64 i; // rbx
  char *v159; // r12
  _QWORD *v160; // rax
  _BYTE *v161; // r13
  __int64 *v162; // rbp
  size_t v163; // rax
  size_t v164; // r14
  char v165; // r13
  __int64 v166; // rax
  char v167; // si
  unsigned __int64 v168; // rdx
  char v169; // r13
  __int64 *v170; // rbp
  char *v171; // r13
  __int64 *v172; // rax
  size_t v173; // rax
  void *v174; // rcx
  size_t v175; // r8
  __int64 v176; // rax
  char v177; // si
  unsigned __int64 v178; // rdx
  __int64 v179; // rax
  char v180; // si
  unsigned __int64 v181; // rdx
  __int64 v182; // rax
  char v183; // si
  unsigned __int64 v184; // rdx
  int v185; // eax
  __int64 v186; // rbp
  __int64 v187; // r13
  __int64 v188; // r12
  __int64 v189; // rax
  char v190; // si
  __int64 v191; // rdx
  char v192; // bp
  __int64 v193; // rax
  char v194; // si
  __int64 v195; // rdx
  __int64 v196; // r14
  char v197; // bl
  __int64 v198; // r12
  __int64 v199; // rax
  char v200; // si
  __int64 v201; // rdx
  char v202; // bl
  __int64 v203; // r12
  __int64 v204; // rax
  char v205; // si
  __int64 v206; // rdx
  char *v207; // rax
  unsigned int v208; // r12d
  _QWORD *v209; // rdx
  _QWORD *v210; // rax
  _QWORD *v211; // rdx
  _QWORD *v212; // rbx
  char *v213; // rcx
  __int64 v214; // rax
  char v215; // si
  __int64 v216; // rdx
  __int64 v217; // rbx
  __int64 v218; // r12
  __int64 v219; // rax
  __int64 v220; // rax
  _QWORD *v221; // rax
  __int64 v222; // rax
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // rax
  char v226; // si
  __int64 v227; // rdx
  char v228; // bp
  __int64 v229; // rax
  char v230; // si
  __int64 v231; // rdx
  __int64 v232; // rax
  char v233; // si
  __int64 v234; // rdx
  unsigned int v235; // eax
  unsigned __int64 v236; // rcx
  char *v237; // rax
  char *v238; // rbx
  unsigned int v239; // eax
  unsigned int v240; // eax
  unsigned int v241; // edx
  __int64 v242; // rsi
  unsigned __int64 v243; // rsi
  char *v244; // rdx
  char *v245; // r8
  unsigned int v246; // eax
  unsigned int v247; // eax
  unsigned int v248; // edx
  __int64 v249; // rdi
  unsigned int v250; // r12d
  char v251; // bl
  __int64 v252; // rax
  char v253; // si
  unsigned __int64 v254; // rdx
  char *v255; // rax
  unsigned int v256; // ecx
  _QWORD *v257; // rdx
  _QWORD *v258; // rax
  _QWORD *v259; // rdx
  _QWORD *v260; // rbx
  char *v261; // rcx
  __int64 v262; // rax
  char v263; // si
  unsigned __int64 v264; // rdx
  __int64 v265; // rax
  _QWORD *v266; // rax
  unsigned int v267; // eax
  unsigned __int64 v268; // rdx
  char *v269; // rax
  char *v270; // rbx
  unsigned int v271; // ecx
  unsigned int v272; // ecx
  unsigned int v273; // eax
  __int64 v274; // rsi
  unsigned __int64 v275; // rsi
  char *v276; // rdx
  char *v277; // r8
  unsigned int v278; // eax
  unsigned int v279; // eax
  unsigned int v280; // edx
  __int64 v281; // rdi
  char *dest; // [rsp+10h] [rbp-288h]
  __int64 v284; // [rsp+28h] [rbp-270h]
  unsigned int v285; // [rsp+28h] [rbp-270h]
  unsigned int v286; // [rsp+38h] [rbp-260h]
  unsigned __int64 v287; // [rsp+38h] [rbp-260h]
  __int64 v288; // [rsp+40h] [rbp-258h]
  unsigned int v289; // [rsp+40h] [rbp-258h]
  unsigned int v290; // [rsp+48h] [rbp-250h]
  void *v291; // [rsp+50h] [rbp-248h]
  void *v292; // [rsp+50h] [rbp-248h]
  unsigned int v293; // [rsp+58h] [rbp-240h]
  unsigned int v294; // [rsp+58h] [rbp-240h]
  unsigned int v295; // [rsp+5Ch] [rbp-23Ch]
  unsigned int v296; // [rsp+5Ch] [rbp-23Ch]
  unsigned int v297; // [rsp+60h] [rbp-238h]
  int v298; // [rsp+6Ch] [rbp-22Ch]
  size_t v299; // [rsp+80h] [rbp-218h]
  size_t v300; // [rsp+80h] [rbp-218h]
  __int64 v301; // [rsp+A8h] [rbp-1F0h]
  char *v302; // [rsp+D0h] [rbp-1C8h] BYREF
  unsigned __int64 v303; // [rsp+D8h] [rbp-1C0h]
  char *v304; // [rsp+F0h] [rbp-1A8h] BYREF
  unsigned __int64 v305; // [rsp+F8h] [rbp-1A0h]
  char *v306; // [rsp+110h] [rbp-188h] BYREF
  unsigned __int64 v307; // [rsp+118h] [rbp-180h]
  char *v308; // [rsp+130h] [rbp-168h] BYREF
  __int128 v309; // [rsp+138h] [rbp-160h]
  void *v310; // [rsp+150h] [rbp-148h]
  __int64 v311; // [rsp+158h] [rbp-140h]
  char s2[16]; // [rsp+160h] [rbp-138h] BYREF
  void *v313; // [rsp+170h] [rbp-128h]
  char *v314; // [rsp+178h] [rbp-120h]
  _QWORD v315[2]; // [rsp+180h] [rbp-118h] BYREF
  char s[24]; // [rsp+190h] [rbp-108h] BYREF
  _BYTE v317[8]; // [rsp+1A8h] [rbp-F0h]
  char v318[24]; // [rsp+1B0h] [rbp-E8h] BYREF
  _BYTE v319[8]; // [rsp+1C8h] [rbp-D0h]
  char v320[24]; // [rsp+1D0h] [rbp-C8h] BYREF
  _BYTE v321[8]; // [rsp+1E8h] [rbp-B0h]
  char v322[24]; // [rsp+1F0h] [rbp-A8h] BYREF
  _BYTE v323[8]; // [rsp+208h] [rbp-90h]
  char v324[24]; // [rsp+210h] [rbp-88h] BYREF
  _BYTE v325[8]; // [rsp+228h] [rbp-70h]
  char v326[40]; // [rsp+230h] [rbp-68h] BYREF
  unsigned __int64 v327; // [rsp+258h] [rbp-40h]

  v327 = __readfsqword(0x28u);
  strcpy(s2, "address");
  v311 = 7;
  v310 = s2;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v3 = "null";
        break;
      case 1:
        v3 = "object";
        break;
      case 2:
        v3 = (char *)"array";
        break;
      case 3:
        v3 = "string";
        break;
      case 4:
        v3 = "boolean";
        break;
      case 8:
        v3 = "binary";
        break;
      case 9:
        v3 = "discarded";
        break;
      default:
        v3 = "number";
        break;
    }
    v308 = v3;
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
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(v6 + 16);
  v8 = v6 + 8;
  if ( v7 )
  {
    v9 = v6 + 8;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v7 + 40);
        if ( !v12 )
          break;
        v10 = 7;
        if ( v12 <= 7 )
          v10 = *(_QWORD *)(v7 + 40);
        v11 = memcmp(*(const void **)(v7 + 32), s2, v10);
        if ( v11 || (v11 = v12 - 7, (__int64)(v12 - 7) <= 0x7FFFFFFF) )
        {
          if ( v11 < 0 )
            break;
        }
        v9 = v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v7 )
          goto LABEL_12;
      }
      v7 = *(_QWORD *)(v7 + 24);
    }
    while ( v7 );
LABEL_12:
    if ( v8 != v9 )
    {
      v13 = *(_QWORD *)(v9 + 40);
      if ( v13 )
      {
        v14 = 7;
        if ( v13 <= 7 )
          v14 = *(_QWORD *)(v9 + 40);
        v15 = memcmp(s2, *(const void **)(v9 + 32), v14);
        if ( v15 || (v15 = 7 - v13, (__int64)(7 - v13) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v15 >= 0 )
            v8 = v9;
        }
      }
      else
      {
        v8 = v9;
      }
    }
  }
  s2[0] = 0;
  v16 = *(_BYTE *)(v8 + 64);
  v310 = s2;
  v311 = 0;
  if ( v16 != 3 )
  {
    v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v8 + 64) )
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
    v308 = v5;
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
  v17 = (char *)v310;
  v18 = __errno_location();
  *v18 = 0;
  v19 = v18;
  v20 = __isoc23_strtoull();
  if ( v17 == v308 || *v308 || (v21 = v20 == -1 && *v19 == 34) )
  {
    if ( v310 != s2 )
      operator delete(v310, *(_QWORD *)s2 + 1LL);
    v45 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v45, "Invalid address");
    __cxa_throw(
      v45,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v310 != s2 )
    operator delete(v310, *(_QWORD *)s2 + 1LL);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  qsnprintf();
  v313 = v315;
  v22 = (char *)strlen(s);
  v306 = v22;
  v23 = (unsigned int)v22;
  if ( (unsigned __int64)v22 > 0xF )
  {
    v71 = (_QWORD *)std::string::_M_create();
    v313 = v71;
    v315[0] = v306;
  }
  else
  {
    if ( v22 == (_BYTE *)&dword_0 + 1 )
    {
      LOBYTE(v315[0]) = s[0];
      goto LABEL_29;
    }
    if ( !v22 )
    {
LABEL_29:
      v24 = v315;
      goto LABEL_30;
    }
    v71 = v315;
  }
  if ( v23 >= 8 )
  {
    *v71 = *(_QWORD *)s;
    *(_QWORD *)((char *)v71 + v23 - 8) = *(_QWORD *)((char *)&v315[1] + v23);
    v106 = (unsigned __int64)(v71 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v107 = (char *)v71 - v106;
    v108 = (char *)(s - v107);
    v109 = ((_DWORD)v107 + v23) & 0xFFFFFFF8;
    if ( v109 >= 8 )
    {
      v110 = v109 & 0xFFFFFFF8;
      v111 = 0;
      do
      {
        v112 = v111;
        v111 += 8;
        *(_QWORD *)(v106 + v112) = *(_QWORD *)&v108[v112];
      }
      while ( v111 < v110 );
    }
  }
  else if ( (v23 & 4) != 0 )
  {
    *(_DWORD *)v71 = *(_DWORD *)s;
    *(_DWORD *)((char *)v71 + v23 - 4) = *(_DWORD *)((char *)&v315[1] + v23 + 4);
  }
  else if ( v23 )
  {
    *(_BYTE *)v71 = s[0];
    if ( (v23 & 2) != 0 )
      *(_WORD *)((char *)v71 + v23 - 2) = *(_WORD *)((char *)&v315[1] + v23 + 6);
  }
  v22 = v306;
  v24 = v313;
LABEL_30:
  v314 = v22;
  v22[(_QWORD)v24] = 0;
  v308 = nullptr;
  *(_QWORD *)&v309 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v25 = (_QWORD *)operator new(0x20u);
  v26 = v25 + 2;
  v27 = v25;
  v28 = v314;
  *v25 = v25 + 2;
  if ( v313 == v315 )
  {
    v116 = (_DWORD)v28 + 1;
    if ( (unsigned int)((_DWORD)v28 + 1) >= 8 )
    {
      v25[2] = v315[0];
      *(_QWORD *)((char *)v26 + v116 - 8) = *(_QWORD *)((char *)&v315[-1] + v116);
      v117 = (unsigned __int64)(v25 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v118 = (char *)((char *)v315 - ((char *)v26 - v117));
      if ( ((v116 + (_DWORD)v26 - (_DWORD)v117) & 0xFFFFFFF8) >= 8 )
      {
        v119 = (v116 + (_DWORD)v26 - v117) & 0xFFFFFFF8;
        v120 = 0;
        do
        {
          v121 = v120;
          v120 += 8;
          *(_QWORD *)(v117 + v121) = *(_QWORD *)&v118[v121];
        }
        while ( v120 < v119 );
      }
    }
    else if ( (v116 & 4) != 0 )
    {
      *((_DWORD *)v25 + 4) = v315[0];
      *(_DWORD *)((char *)v26 + v116 - 4) = *(_DWORD *)((char *)&v314 + v116 + 4);
    }
    else if ( (_DWORD)v28 != -1 )
    {
      *((_BYTE *)v25 + 16) = v315[0];
      if ( (v116 & 2) != 0 )
        *(_WORD *)((char *)v26 + v116 - 2) = *(_WORD *)((char *)&v314 + v116 + 6);
    }
  }
  else
  {
    *v25 = v313;
    v25[2] = v315[0];
  }
  v27[1] = v28;
  v313 = v315;
  v314 = nullptr;
  LOBYTE(v315[0]) = 0;
  v29 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v30 = *(_BYTE *)v29;
  v31 = *(_QWORD *)(v29 + 8);
  *(_BYTE *)v29 = 3;
  *(_QWORD *)(v29 + 8) = v27;
  LOBYTE(v308) = v30;
  *(_QWORD *)&v309 = v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v313 != v315 )
    operator delete(v313, v315[0] + 1LL);
  get_ea_name();
  v32 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v33 = *(_BYTE *)v32;
  v34 = *(_QWORD *)(v32 + 8);
  *(_BYTE *)v32 = 0;
  *(_QWORD *)(v32 + 8) = 0;
  LOBYTE(v308) = v33;
  *(_QWORD *)&v309 = v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  qword = get_qword();
  dest = (char *)get_qword();
  get_qword();
  get_qword();
  v284 = get_qword();
  if ( !qword )
  {
    v44 = 0;
    v41 = nullptr;
    v43 = 0;
    goto LABEL_47;
  }
  qsnprintf();
  v313 = v315;
  v36 = (char *)strlen(v318);
  v308 = v36;
  v37 = (unsigned int)v36;
  if ( (unsigned __int64)v36 > 0xF )
  {
    v113 = (_QWORD *)std::string::_M_create();
    v313 = v113;
    v315[0] = v308;
    goto LABEL_105;
  }
  if ( v36 == (_BYTE *)&dword_0 + 1 )
  {
    LOBYTE(v315[0]) = v318[0];
    goto LABEL_38;
  }
  if ( v36 )
  {
    v113 = v315;
LABEL_105:
    if ( v37 >= 8 )
    {
      *v113 = *(_QWORD *)v318;
      *(_QWORD *)((char *)v113 + v37 - 8) = *(_QWORD *)&v317[v37];
      v129 = (unsigned __int64)(v113 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v130 = (char *)v113 - v129;
      v131 = (char *)(v318 - v130);
      v132 = ((_DWORD)v130 + v37) & 0xFFFFFFF8;
      if ( v132 >= 8 )
      {
        v133 = v132 & 0xFFFFFFF8;
        v134 = 0;
        do
        {
          v135 = v134;
          v134 += 8;
          *(_QWORD *)(v129 + v135) = *(_QWORD *)&v131[v135];
        }
        while ( v134 < v133 );
      }
    }
    else if ( (v37 & 4) != 0 )
    {
      *(_DWORD *)v113 = *(_DWORD *)v318;
      *(_DWORD *)((char *)v113 + v37 - 4) = *(_DWORD *)&v317[v37 + 4];
    }
    else if ( v37 )
    {
      *(_BYTE *)v113 = v318[0];
      if ( (v37 & 2) != 0 )
        *(_WORD *)((char *)v113 + v37 - 2) = *(_WORD *)&v317[v37 + 6];
    }
    v36 = v308;
    v38 = v313;
    goto LABEL_39;
  }
LABEL_38:
  v38 = v315;
LABEL_39:
  v314 = v36;
  v36[(_QWORD)v38] = 0;
  v308 = nullptr;
  *(_QWORD *)&v309 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v39 = (_QWORD *)operator new(0x20u);
  v40 = v39 + 2;
  v41 = v39;
  v42 = v314;
  *v39 = v39 + 2;
  if ( v313 == v315 )
  {
    v122 = (_DWORD)v42 + 1;
    if ( (unsigned int)((_DWORD)v42 + 1) >= 8 )
    {
      *v40 = v315[0];
      *(_QWORD *)((char *)v40 + v122 - 8) = *(_QWORD *)((char *)&v315[-1] + v122);
      v148 = (unsigned __int64)(v39 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v149 = (char *)((char *)v315 - ((char *)v40 - v148));
      if ( ((v122 + (_DWORD)v40 - (_DWORD)v148) & 0xFFFFFFF8) >= 8 )
      {
        v150 = (v122 + (_DWORD)v40 - v148) & 0xFFFFFFF8;
        v151 = 0;
        do
        {
          v152 = v151;
          v151 += 8;
          *(_QWORD *)(v148 + v152) = *(_QWORD *)&v149[v152];
        }
        while ( v151 < v150 );
      }
    }
    else if ( (v122 & 4) != 0 )
    {
      *(_DWORD *)v40 = v315[0];
      *(_DWORD *)((char *)v40 + v122 - 4) = *(_DWORD *)((char *)&v314 + v122 + 4);
    }
    else if ( (_DWORD)v42 != -1 )
    {
      *(_BYTE *)v40 = v315[0];
      if ( (v122 & 2) != 0 )
        *(_WORD *)((char *)v40 + v122 - 2) = *(_WORD *)((char *)&v314 + v122 + 6);
    }
  }
  else
  {
    *v39 = v313;
    v39[2] = v315[0];
  }
  v41[1] = v42;
  v43 = 3;
  v44 = 1;
  v313 = v315;
  v314 = nullptr;
  LOBYTE(v315[0]) = 0;
LABEL_47:
  v46 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v47 = *(_BYTE *)v46;
  v48 = *(_QWORD *)(v46 + 8);
  *(_BYTE *)v46 = v43;
  *(_QWORD *)(v46 + 8) = v41;
  LOBYTE(v308) = v47;
  *(_QWORD *)&v309 = v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v44 && v313 != v315 )
    operator delete(v313, v315[0] + 1LL);
  if ( !dest )
  {
    v54 = nullptr;
    v56 = 0;
    goto LABEL_57;
  }
  qsnprintf();
  v313 = v315;
  v49 = (char *)strlen(v320);
  v308 = v49;
  v50 = (unsigned int)v49;
  if ( (unsigned __int64)v49 > 0xF )
  {
    v114 = (_QWORD *)std::string::_M_create();
    v313 = v114;
    v315[0] = v308;
    goto LABEL_112;
  }
  if ( v49 == (_BYTE *)&dword_0 + 1 )
  {
    LOBYTE(v315[0]) = v320[0];
    goto LABEL_52;
  }
  if ( v49 )
  {
    v114 = v315;
LABEL_112:
    if ( v50 >= 8 )
    {
      *v114 = *(_QWORD *)v320;
      *(_QWORD *)((char *)v114 + v50 - 8) = *(_QWORD *)&v319[v50];
      v136 = (unsigned __int64)(v114 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v137 = (char *)v114 - v136;
      v138 = (char *)(v320 - v137);
      v139 = ((_DWORD)v137 + v50) & 0xFFFFFFF8;
      if ( v139 >= 8 )
      {
        v140 = v139 & 0xFFFFFFF8;
        v141 = 0;
        do
        {
          v142 = v141;
          v141 += 8;
          *(_QWORD *)(v136 + v142) = *(_QWORD *)&v138[v142];
        }
        while ( v141 < v140 );
      }
    }
    else if ( (v50 & 4) != 0 )
    {
      *(_DWORD *)v114 = *(_DWORD *)v320;
      *(_DWORD *)((char *)v114 + v50 - 4) = *(_DWORD *)&v319[v50 + 4];
    }
    else if ( v50 )
    {
      *(_BYTE *)v114 = v320[0];
      if ( (v50 & 2) != 0 )
        *(_WORD *)((char *)v114 + v50 - 2) = *(_WORD *)&v319[v50 + 6];
    }
    v49 = v308;
    v51 = v313;
    goto LABEL_53;
  }
LABEL_52:
  v51 = v315;
LABEL_53:
  v314 = v49;
  v49[(_QWORD)v51] = 0;
  v308 = nullptr;
  *(_QWORD *)&v309 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v52 = (_QWORD *)operator new(0x20u);
  v53 = v52 + 2;
  v54 = v52;
  v55 = v314;
  *v52 = v52 + 2;
  if ( v313 == v315 )
  {
    v123 = (_DWORD)v55 + 1;
    if ( (unsigned int)((_DWORD)v55 + 1) >= 8 )
    {
      *v53 = v315[0];
      *(_QWORD *)((char *)v53 + v123 - 8) = *(_QWORD *)((char *)&v315[-1] + v123);
      v143 = (unsigned __int64)(v52 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v144 = (char *)((char *)v315 - ((char *)v53 - v143));
      if ( ((v123 + (_DWORD)v53 - (_DWORD)v143) & 0xFFFFFFF8) >= 8 )
      {
        v145 = (v123 + (_DWORD)v53 - v143) & 0xFFFFFFF8;
        v146 = 0;
        do
        {
          v147 = v146;
          v146 += 8;
          *(_QWORD *)(v143 + v147) = *(_QWORD *)&v144[v147];
        }
        while ( v146 < v145 );
      }
    }
    else if ( (v123 & 4) != 0 )
    {
      *(_DWORD *)v53 = v315[0];
      *(_DWORD *)((char *)v53 + v123 - 4) = *(_DWORD *)((char *)&v314 + v123 + 4);
    }
    else if ( (_DWORD)v55 != -1 )
    {
      *(_BYTE *)v53 = v315[0];
      if ( (v123 & 2) != 0 )
        *(_WORD *)((char *)v53 + v123 - 2) = *(_WORD *)((char *)&v314 + v123 + 6);
    }
  }
  else
  {
    *v52 = v313;
    v52[2] = v315[0];
  }
  v54[1] = v55;
  v56 = 3;
  v21 = 1;
  v313 = v315;
  v314 = nullptr;
  LOBYTE(v315[0]) = 0;
LABEL_57:
  v57 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v58 = *(_BYTE *)v57;
  v59 = *(_QWORD *)(v57 + 8);
  *(_BYTE *)v57 = v56;
  *(_QWORD *)(v57 + 8) = v54;
  LOBYTE(v308) = v58;
  *(_QWORD *)&v309 = v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v21 && v313 != v315 )
    operator delete(v313, v315[0] + 1LL);
  qsnprintf();
  v313 = v315;
  v60 = (char *)strlen(v322);
  v308 = v60;
  v61 = (unsigned int)v60;
  if ( (unsigned __int64)v60 > 0xF )
  {
    v98 = (_QWORD *)std::string::_M_create();
    v313 = v98;
    v315[0] = v308;
  }
  else
  {
    if ( v60 == (_BYTE *)&dword_0 + 1 )
    {
      LOBYTE(v315[0]) = v322[0];
      goto LABEL_61;
    }
    if ( !v60 )
    {
LABEL_61:
      v62 = v315;
      goto LABEL_62;
    }
    v98 = v315;
  }
  if ( v61 >= 8 )
  {
    *v98 = *(_QWORD *)v322;
    *(_QWORD *)((char *)v98 + v61 - 8) = *(_QWORD *)&v321[v61];
    v99 = (unsigned __int64)(v98 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v100 = (char *)v98 - v99;
    v101 = (char *)(v322 - v100);
    v102 = ((_DWORD)v100 + v61) & 0xFFFFFFF8;
    if ( v102 >= 8 )
    {
      v103 = v102 & 0xFFFFFFF8;
      v104 = 0;
      do
      {
        v105 = v104;
        v104 += 8;
        *(_QWORD *)(v99 + v105) = *(_QWORD *)&v101[v105];
      }
      while ( v104 < v103 );
    }
  }
  else if ( (v61 & 4) != 0 )
  {
    *(_DWORD *)v98 = *(_DWORD *)v322;
    *(_DWORD *)((char *)v98 + v61 - 4) = *(_DWORD *)&v321[v61 + 4];
  }
  else if ( v61 )
  {
    *(_BYTE *)v98 = v322[0];
    if ( (v61 & 2) != 0 )
      *(_WORD *)((char *)v98 + v61 - 2) = *(_WORD *)&v321[v61 + 6];
  }
  v60 = v308;
  v62 = v313;
LABEL_62:
  v314 = v60;
  v60[(_QWORD)v62] = 0;
  v308 = nullptr;
  *(_QWORD *)&v309 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v63 = (_QWORD *)operator new(0x20u);
  v64 = v63 + 2;
  v65 = v63;
  v66 = v314;
  *v63 = v63 + 2;
  if ( v313 == v315 )
  {
    v115 = (_DWORD)v66 + 1;
    if ( (unsigned int)((_DWORD)v66 + 1) >= 8 )
    {
      v63[2] = v315[0];
      *(_QWORD *)((char *)v64 + v115 - 8) = *(_QWORD *)((char *)&v315[-1] + v115);
      v124 = (unsigned __int64)(v63 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v125 = (char *)((char *)v315 - ((char *)v64 - v124));
      if ( ((v115 + (_DWORD)v64 - (_DWORD)v124) & 0xFFFFFFF8) >= 8 )
      {
        v126 = (v115 + (_DWORD)v64 - v124) & 0xFFFFFFF8;
        v127 = 0;
        do
        {
          v128 = v127;
          v127 += 8;
          *(_QWORD *)(v124 + v128) = *(_QWORD *)&v125[v128];
        }
        while ( v127 < v126 );
      }
    }
    else if ( (v115 & 4) != 0 )
    {
      *((_DWORD *)v63 + 4) = v315[0];
      *(_DWORD *)((char *)v64 + v115 - 4) = *(_DWORD *)((char *)&v314 + v115 + 4);
    }
    else if ( (_DWORD)v66 != -1 )
    {
      *((_BYTE *)v63 + 16) = v315[0];
      if ( (v115 & 2) != 0 )
        *(_WORD *)((char *)v64 + v115 - 2) = *(_WORD *)((char *)&v314 + v115 + 6);
    }
  }
  else
  {
    *v63 = v313;
    v63[2] = v315[0];
  }
  v65[1] = v66;
  v313 = v315;
  v314 = nullptr;
  LOBYTE(v315[0]) = 0;
  v67 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v68 = *(_BYTE *)v67;
  v69 = *(_QWORD *)(v67 + 8);
  *(_BYTE *)v67 = 3;
  *(_QWORD *)(v67 + 8) = v65;
  LOBYTE(v308) = v68;
  *(_QWORD *)&v309 = v69;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v313 != v315 )
    operator delete(v313, v315[0] + 1LL);
  if ( (v284 & 0xFFFFFFFFFFFFFFF8LL) - 1 <= 0xFFFFFFFFFFFFFFFDLL && (unsigned __int8)is_loaded() )
  {
    dword = get_dword();
    v285 = get_dword();
    v293 = get_dword();
    v73 = get_qword();
    v74 = get_qword();
    get_qword();
    v288 = get_qword();
    get_qword();
    ida_mcp::tools::objc_deep::`anonymous namespace'::read_string_at(
      (ida_mcp::tools::objc_deep::_anonymous_namespace_ *)&v302,
      v73);
    v75 = 0;
    v76 = 0;
    if ( v303 > 1 )
    {
      LOBYTE(v308) = 0;
      *(_QWORD *)&v309 = 0;
      v306 = v302;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
      v76 = (char)v308;
      v75 = v309;
    }
    v77 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v78 = *(_BYTE *)v77;
    v79 = *(_QWORD *)(v77 + 8);
    *(_BYTE *)v77 = v76;
    *(_QWORD *)(v77 + 8) = v75;
    LOBYTE(v308) = v78;
    *(_QWORD *)&v309 = v79;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v80 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v81 = *(_BYTE *)v80;
    *(_BYTE *)v80 = 6;
    v82 = *(_QWORD *)(v80 + 8);
    LOBYTE(v308) = v81;
    *(_QWORD *)(v80 + 8) = dword;
    *(_QWORD *)&v309 = v82;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v83 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v84 = *(_BYTE *)v83;
    *(_BYTE *)v83 = 6;
    v85 = *(_QWORD *)(v83 + 8);
    LOBYTE(v308) = v84;
    *(_QWORD *)(v83 + 8) = v285;
    *(_QWORD *)&v309 = v85;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v86 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v87 = *(_BYTE *)v86;
    *(_BYTE *)v86 = 6;
    v88 = *(_QWORD *)(v86 + 8);
    LOBYTE(v308) = v87;
    *(_QWORD *)(v86 + 8) = v293;
    *(_QWORD *)&v309 = v88;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    *(_QWORD *)&v309 = dword & 1;
    v89 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v90 = *(_BYTE *)v89;
    v91 = *(_QWORD *)(v89 + 8);
    *(_BYTE *)v89 = 4;
    LOBYTE(v308) = v90;
    *(_QWORD *)(v89 + 8) = v309;
    *(_QWORD *)&v309 = v91;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    *(_QWORD *)&v309 = (dword & 2) != 0;
    v92 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v93 = *(_BYTE *)v92;
    v94 = *(_QWORD *)(v92 + 8);
    *(_BYTE *)v92 = 4;
    LOBYTE(v308) = v93;
    *(_QWORD *)(v92 + 8) = v309;
    *(_QWORD *)&v309 = v94;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    *(_QWORD *)&v309 = (dword & 0x40000) != 0;
    v95 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v96 = *(_BYTE *)v95;
    v97 = *(_QWORD *)(v95 + 8);
    *(_BYTE *)v95 = 4;
    LOBYTE(v308) = v96;
    *(_QWORD *)(v95 + 8) = v309;
    *(_QWORD *)&v309 = v97;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( (unsigned __int64)(v74 - 1) <= 0xFFFFFFFFFFFFFFFDLL && (unsigned __int8)is_loaded() )
    {
      v298 = get_dword();
      v296 = get_dword() & 0xFFFFFF;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      if ( v296 )
      {
        v196 = v74 + 8;
        if ( v298 >= 0 )
        {
          v286 = 0;
          while ( 1 )
          {
            v217 = get_qword();
            v218 = get_qword();
            get_qword();
            ida_mcp::tools::objc_deep::`anonymous namespace'::read_string_at(
              (ida_mcp::tools::objc_deep::_anonymous_namespace_ *)&v304,
              v217);
            ida_mcp::tools::objc_deep::`anonymous namespace'::read_string_at(
              (ida_mcp::tools::objc_deep::_anonymous_namespace_ *)&v306,
              v218);
            if ( v305 > 1 )
            {
              LOBYTE(v308) = 0;
              *(_QWORD *)&v309 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
              v197 = (char)v308;
              v198 = v309;
            }
            else
            {
              v198 = 0;
              v197 = 0;
            }
            v199 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v200 = *(_BYTE *)v199;
            v201 = *(_QWORD *)(v199 + 8);
            *(_BYTE *)v199 = v197;
            *(_QWORD *)(v199 + 8) = v198;
            LOBYTE(v308) = v200;
            *(_QWORD *)&v309 = v201;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            if ( v307 <= 1 )
            {
              v203 = 0;
              v202 = 0;
            }
            else
            {
              LOBYTE(v308) = 0;
              *(_QWORD *)&v309 = 0;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
              v202 = (char)v308;
              v203 = v309;
            }
            v204 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v205 = *(_BYTE *)v204;
            v206 = *(_QWORD *)(v204 + 8);
            *(_BYTE *)v204 = v202;
            *(_QWORD *)(v204 + 8) = v203;
            LOBYTE(v308) = v205;
            *(_QWORD *)&v309 = v206;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            qsnprintf();
            v313 = v315;
            v207 = (char *)strlen(v326);
            v308 = v207;
            v208 = (unsigned int)v207;
            if ( (unsigned __int64)v207 > 0xF )
              break;
            if ( v207 == (_BYTE *)&dword_0 + 1 )
            {
              LOBYTE(v315[0]) = v326[0];
            }
            else if ( v207 )
            {
              v221 = v315;
              goto LABEL_237;
            }
            v209 = v315;
LABEL_211:
            v314 = v207;
            v207[(_QWORD)v209] = 0;
            v308 = nullptr;
            *(_QWORD *)&v309 = 0;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v210 = (_QWORD *)operator new(0x20u);
            v211 = v210 + 2;
            v212 = v210;
            v213 = v314;
            *v210 = v210 + 2;
            if ( v313 == v315 )
            {
              v235 = (_DWORD)v213 + 1;
              if ( (unsigned int)((_DWORD)v213 + 1) >= 8 )
              {
                v212[2] = v315[0];
                *(_QWORD *)((char *)v211 + v235 - 8) = *(_QWORD *)((char *)&v315[-1] + v235);
                v243 = (unsigned __int64)(v212 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                v244 = (char *)v211 - v243;
                v245 = (char *)((char *)v315 - v244);
                v246 = ((_DWORD)v244 + v235) & 0xFFFFFFF8;
                if ( v246 >= 8 )
                {
                  v247 = v246 & 0xFFFFFFF8;
                  v248 = 0;
                  do
                  {
                    v249 = v248;
                    v248 += 8;
                    *(_QWORD *)(v243 + v249) = *(_QWORD *)&v245[v249];
                  }
                  while ( v248 < v247 );
                }
              }
              else if ( (v235 & 4) != 0 )
              {
                *((_DWORD *)v212 + 4) = v315[0];
                *(_DWORD *)((char *)v211 + v235 - 4) = *(_DWORD *)((char *)&v314 + v235 + 4);
              }
              else if ( (_DWORD)v213 != -1 )
              {
                *((_BYTE *)v212 + 16) = v315[0];
                if ( (v235 & 2) != 0 )
                  *(_WORD *)((char *)v211 + v235 - 2) = *(_WORD *)((char *)&v314 + v235 + 6);
              }
            }
            else
            {
              *v210 = v313;
              v210[2] = v315[0];
            }
            v212[1] = v213;
            v313 = v315;
            v314 = nullptr;
            LOBYTE(v315[0]) = 0;
            v214 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v215 = *(_BYTE *)v214;
            v216 = *(_QWORD *)(v214 + 8);
            *(_BYTE *)v214 = 3;
            *(_QWORD *)(v214 + 8) = v212;
            LOBYTE(v308) = v215;
            *(_QWORD *)&v309 = v216;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            if ( v313 != v315 )
              operator delete(v313, v315[0] + 1LL);
            if ( get_func() )
            {
              v308 = nullptr;
              v309 = 0;
              get_func_name();
              if ( (unsigned __int64)v309 > 1 )
              {
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
                v222 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
                v223 = *(_QWORD *)(v222 + 8);
                *(_BYTE *)v222 = 0;
                v224 = v301;
                v301 = v223;
                *(_QWORD *)(v222 + 8) = v224;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
              }
              if ( v308 )
              {
                *(_QWORD *)&v309 = 0;
                qfree();
              }
            }
            v196 += 24;
            if ( v306 )
            {
              v307 = 0;
              qfree();
            }
            if ( v304 )
            {
              v305 = 0;
              qfree();
            }
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            if ( ++v286 == 200 || v286 >= v296 )
              goto LABEL_245;
          }
          v221 = (_QWORD *)std::string::_M_create();
          v313 = v221;
          v315[0] = v308;
LABEL_237:
          if ( v208 >= 8 )
          {
            *v221 = *(_QWORD *)v326;
            *(_QWORD *)((char *)v221 + v208 - 8) = *(_QWORD *)&v325[v208];
            v236 = (unsigned __int64)(v221 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            v237 = (char *)v221 - v236;
            v238 = (char *)(v326 - v237);
            v239 = (v208 + (_DWORD)v237) & 0xFFFFFFF8;
            if ( v239 >= 8 )
            {
              v240 = v239 & 0xFFFFFFF8;
              v241 = 0;
              do
              {
                v242 = v241;
                v241 += 8;
                *(_QWORD *)(v236 + v242) = *(_QWORD *)&v238[v242];
              }
              while ( v241 < v240 );
            }
          }
          else if ( (v208 & 4) != 0 )
          {
            *(_DWORD *)v221 = *(_DWORD *)v326;
            *(_DWORD *)((char *)v221 + v208 - 4) = *(_DWORD *)&v325[v208 + 4];
          }
          else if ( v208 )
          {
            *(_BYTE *)v221 = v326[0];
            if ( (v208 & 2) != 0 )
              *(_WORD *)((char *)v221 + v208 - 2) = *(_WORD *)&v325[v208 + 6];
          }
          v207 = v308;
          v209 = v313;
          goto LABEL_211;
        }
        v250 = 0;
        while ( 1 )
        {
          get_dword();
          get_dword();
          get_dword();
          v265 = get_qword();
          ida_mcp::tools::objc_deep::`anonymous namespace'::read_string_at(
            (ida_mcp::tools::objc_deep::_anonymous_namespace_ *)&v308,
            v265);
          if ( (unsigned __int64)v309 > 1 )
          {
            LOBYTE(v306) = 0;
            v307 = 0;
            v304 = v308;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
            v251 = (char)v306;
            v287 = v307;
          }
          else
          {
            v287 = 0;
            v251 = 0;
          }
          v252 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v253 = *(_BYTE *)v252;
          *(_BYTE *)v252 = v251;
          v254 = *(_QWORD *)(v252 + 8);
          *(_QWORD *)(v252 + 8) = v287;
          LOBYTE(v306) = v253;
          v307 = v254;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          qsnprintf();
          v313 = v315;
          v255 = (char *)strlen(v324);
          v306 = v255;
          v256 = (unsigned int)v255;
          if ( (unsigned __int64)v255 > 0xF )
            break;
          if ( v255 == (_BYTE *)&dword_0 + 1 )
          {
            LOBYTE(v315[0]) = v324[0];
          }
          else if ( v255 )
          {
            v266 = v315;
            goto LABEL_282;
          }
          v257 = v315;
LABEL_270:
          v314 = v255;
          v255[(_QWORD)v257] = 0;
          v306 = nullptr;
          v307 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v258 = (_QWORD *)operator new(0x20u);
          v259 = v258 + 2;
          v260 = v258;
          v261 = v314;
          *v258 = v258 + 2;
          if ( v313 == v315 )
          {
            v267 = (_DWORD)v261 + 1;
            if ( (unsigned int)((_DWORD)v261 + 1) >= 8 )
            {
              v260[2] = v315[0];
              *(_QWORD *)((char *)v259 + v267 - 8) = *(_QWORD *)((char *)&v315[-1] + v267);
              v275 = (unsigned __int64)(v260 + 3) & 0xFFFFFFFFFFFFFFF8LL;
              v276 = (char *)v259 - v275;
              v277 = (char *)((char *)v315 - v276);
              v278 = ((_DWORD)v276 + v267) & 0xFFFFFFF8;
              if ( v278 >= 8 )
              {
                v279 = v278 & 0xFFFFFFF8;
                v280 = 0;
                do
                {
                  v281 = v280;
                  v280 += 8;
                  *(_QWORD *)(v275 + v281) = *(_QWORD *)&v277[v281];
                }
                while ( v280 < v279 );
              }
            }
            else if ( (v267 & 4) != 0 )
            {
              *((_DWORD *)v260 + 4) = v315[0];
              *(_DWORD *)((char *)v259 + v267 - 4) = *(_DWORD *)((char *)&v314 + v267 + 4);
            }
            else if ( (_DWORD)v261 != -1 )
            {
              *((_BYTE *)v260 + 16) = v315[0];
              if ( (v267 & 2) != 0 )
                *(_WORD *)((char *)v259 + v267 - 2) = *(_WORD *)((char *)&v314 + v267 + 6);
            }
          }
          else
          {
            *v258 = v313;
            v258[2] = v315[0];
          }
          v260[1] = v261;
          v313 = v315;
          v314 = nullptr;
          LOBYTE(v315[0]) = 0;
          v262 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v263 = *(_BYTE *)v262;
          v264 = *(_QWORD *)(v262 + 8);
          *(_BYTE *)v262 = 3;
          *(_QWORD *)(v262 + 8) = v260;
          LOBYTE(v306) = v263;
          v307 = v264;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v313 != v315 )
            operator delete(v313, v315[0] + 1LL);
          v196 += 12;
          if ( v308 )
          {
            *(_QWORD *)&v309 = 0;
            qfree();
          }
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
          ++v250;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v250 == 200 || v250 >= v296 )
            goto LABEL_245;
        }
        v297 = (unsigned int)v255;
        v266 = (_QWORD *)std::string::_M_create();
        v313 = v266;
        v256 = v297;
        v315[0] = v306;
LABEL_282:
        if ( v256 >= 8 )
        {
          *v266 = *(_QWORD *)v324;
          *(_QWORD *)((char *)v266 + v256 - 8) = *(_QWORD *)&v323[v256];
          v268 = (unsigned __int64)(v266 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v269 = (char *)v266 - v268;
          v270 = (char *)(v324 - v269);
          v271 = ((_DWORD)v269 + v256) & 0xFFFFFFF8;
          if ( v271 >= 8 )
          {
            v272 = v271 & 0xFFFFFFF8;
            v273 = 0;
            do
            {
              v274 = v273;
              v273 += 8;
              *(_QWORD *)(v268 + v274) = *(_QWORD *)&v270[v274];
            }
            while ( v273 < v272 );
          }
        }
        else if ( (v256 & 4) != 0 )
        {
          *(_DWORD *)v266 = *(_DWORD *)v324;
          *(_DWORD *)((char *)v266 + v256 - 4) = *(_DWORD *)&v323[v256 + 4];
        }
        else if ( v256 )
        {
          *(_BYTE *)v266 = v324[0];
          if ( (v256 & 2) != 0 )
            *(_WORD *)((char *)v266 + v256 - 2) = *(_WORD *)&v323[v256 + 6];
        }
        v255 = v306;
        v257 = v313;
        goto LABEL_270;
      }
LABEL_245:
      v225 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v226 = *(_BYTE *)v225;
      *(_BYTE *)v225 = 6;
      v227 = *(_QWORD *)(v225 + 8);
      LOBYTE(v308) = v226;
      *(_QWORD *)(v225 + 8) = v296;
      *(_QWORD *)&v309 = v227;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v308) = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v228 = (char)v308;
      v229 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v230 = *(_BYTE *)v229;
      v231 = *(_QWORD *)(v229 + 8);
      *(_BYTE *)v229 = v228;
      *(_QWORD *)(v229 + 8) = v309;
      LOBYTE(v308) = v230;
      *(_QWORD *)&v309 = v231;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      *(_QWORD *)&v309 = v298 < 0;
      v232 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v233 = *(_BYTE *)v232;
      v234 = *(_QWORD *)(v232 + 8);
      *(_BYTE *)v232 = 4;
      LOBYTE(v308) = v233;
      *(_QWORD *)(v232 + 8) = v309;
      *(_QWORD *)&v309 = v234;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    if ( (unsigned __int64)(v288 - 1) <= 0xFFFFFFFFFFFFFFFDLL && (unsigned __int8)is_loaded() )
    {
      get_dword();
      v295 = get_dword();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      if ( v295 )
      {
        v294 = 0;
        for ( i = v288 + 8; ; i += 32 )
        {
          v186 = get_qword();
          v187 = get_qword();
          v188 = get_qword();
          get_dword();
          v290 = get_dword();
          ida_mcp::tools::objc_deep::`anonymous namespace'::read_string_at(
            (ida_mcp::tools::objc_deep::_anonymous_namespace_ *)&v306,
            v187);
          ida_mcp::tools::objc_deep::`anonymous namespace'::read_string_at(
            (ida_mcp::tools::objc_deep::_anonymous_namespace_ *)&v308,
            v188);
          v289 = v186 ? get_dword() : 0;
          if ( v307 > 1 )
            break;
          v162 = nullptr;
          v165 = 0;
LABEL_183:
          v166 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v167 = *(_BYTE *)v166;
          v168 = *(_QWORD *)(v166 + 8);
          *(_BYTE *)v166 = v165;
          v169 = 0;
          *(_QWORD *)(v166 + 8) = v162;
          v170 = nullptr;
          LOBYTE(v304) = v167;
          v305 = v168;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( (unsigned __int64)v309 <= 1 )
            goto LABEL_189;
          v304 = nullptr;
          v305 = 0;
          v171 = v308;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v172 = (__int64 *)operator new(0x20u);
          v170 = v172;
          *v172 = (__int64)(v172 + 2);
          if ( !v171 )
            std::__throw_logic_error("basic_string: construction from null is not valid");
          v291 = v172 + 2;
          v173 = strlen(v171);
          v174 = v291;
          v300 = v173;
          v175 = v173;
          if ( v173 > 0xF )
          {
            v292 = (void *)v173;
            v219 = std::string::_M_create();
            *v170 = v219;
            v174 = (void *)v219;
            v175 = (size_t)v292;
            v170[2] = v300;
LABEL_231:
            memcpy(v174, v171, v175);
            v173 = v300;
            v174 = (void *)*v170;
            goto LABEL_188;
          }
          if ( v173 == 1 )
          {
            *((_BYTE *)v170 + 16) = *v171;
          }
          else if ( v173 )
          {
            goto LABEL_231;
          }
LABEL_188:
          v170[1] = v173;
          v169 = 3;
          *((_BYTE *)v174 + v173) = 0;
LABEL_189:
          v176 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v177 = *(_BYTE *)v176;
          v178 = *(_QWORD *)(v176 + 8);
          *(_BYTE *)v176 = v169;
          *(_QWORD *)(v176 + 8) = v170;
          LOBYTE(v304) = v177;
          v305 = v178;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v179 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v180 = *(_BYTE *)v179;
          *(_BYTE *)v179 = 6;
          v181 = *(_QWORD *)(v179 + 8);
          LOBYTE(v304) = v180;
          *(_QWORD *)(v179 + 8) = v289;
          v305 = v181;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v182 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v183 = *(_BYTE *)v182;
          *(_BYTE *)v182 = 6;
          v184 = *(_QWORD *)(v182 + 8);
          LOBYTE(v304) = v183;
          *(_QWORD *)(v182 + 8) = v290;
          v305 = v184;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v308 )
          {
            *(_QWORD *)&v309 = 0;
            qfree();
          }
          if ( v306 )
          {
            v307 = 0;
            qfree();
            v185 = ++v294;
            if ( v294 >= v295 )
              goto LABEL_198;
          }
          else
          {
            v185 = ++v294;
            if ( v294 >= v295 )
              goto LABEL_198;
          }
          if ( v185 == 200 )
            goto LABEL_198;
        }
        v304 = nullptr;
        v159 = v306;
        v305 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v160 = (_QWORD *)operator new(0x20u);
        v161 = v160 + 2;
        v162 = v160;
        *v160 = v160 + 2;
        if ( !v159 )
          std::__throw_logic_error("basic_string: construction from null is not valid");
        v163 = strlen(v159);
        v299 = v163;
        v164 = v163;
        if ( v163 > 0xF )
        {
          v220 = std::string::_M_create();
          *v162 = v220;
          v161 = (_BYTE *)v220;
          v162[2] = v299;
        }
        else
        {
          if ( v163 == 1 )
          {
            *((_BYTE *)v162 + 16) = *v159;
            goto LABEL_182;
          }
          if ( !v163 )
          {
LABEL_182:
            v162[1] = v163;
            v161[v163] = 0;
            v165 = 3;
            goto LABEL_183;
          }
        }
        memcpy(v161, v159, v164);
        v163 = v299;
        v161 = (_BYTE *)*v162;
        goto LABEL_182;
      }
LABEL_198:
      v189 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v190 = *(_BYTE *)v189;
      *(_BYTE *)v189 = 6;
      v191 = *(_QWORD *)(v189 + 8);
      LOBYTE(v308) = v190;
      *(_QWORD *)(v189 + 8) = v295;
      *(_QWORD *)&v309 = v191;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v308) = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v192 = (char)v308;
      v193 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v194 = *(_BYTE *)v193;
      v195 = *(_QWORD *)(v193 + 8);
      *(_BYTE *)v193 = v192;
      *(_QWORD *)(v193 + 8) = v309;
      LOBYTE(v308) = v194;
      *(_QWORD *)&v309 = v195;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    if ( (unsigned __int64)(dest - 1) <= 0xFFFFFFFFFFFFFFFDLL && (unsigned __int8)is_loaded() )
    {
      v309 = 0;
      v308 = nullptr;
      get_ea_name();
      v153 = 0;
      v154 = 0;
      if ( (unsigned __int64)v309 > 1 )
      {
        LOBYTE(v306) = 0;
        v307 = 0;
        v304 = v308;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
        v154 = (char)v306;
        v153 = v307;
      }
      v155 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v156 = *(_BYTE *)v155;
      v157 = *(_QWORD *)(v155 + 8);
      *(_BYTE *)v155 = v154;
      *(_QWORD *)(v155 + 8) = v153;
      LOBYTE(v306) = v156;
      v307 = v157;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v308 )
      {
        *(_QWORD *)&v309 = 0;
        qfree();
      }
    }
    if ( v302 )
    {
      v303 = 0;
      qfree();
    }
  }
  return a1;
}

