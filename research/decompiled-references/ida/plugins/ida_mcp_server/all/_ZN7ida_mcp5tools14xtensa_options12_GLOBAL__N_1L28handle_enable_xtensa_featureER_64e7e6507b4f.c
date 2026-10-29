_QWORD *__fastcall ida_mcp::tools::xtensa_options::`anonymous namespace'::handle_enable_xtensa_feature(
        _QWORD *a1,
        __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v4; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v5; // r12
  char *v6; // rax
  char *v7; // rax
  __int64 v8; // r13
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r15
  unsigned __int64 v13; // r12
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // r12
  __int64 v23; // r13
  size_t v24; // rdx
  int v25; // eax
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rbx
  size_t v28; // rax
  unsigned __int8 v29; // r13
  void *v30; // rdi
  char v31; // al
  size_t v32; // rbp
  _QWORD *v33; // r15
  void *v34; // r12
  void *v35; // rbx
  __int64 *v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 *v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __m128i *v56; // rbx
  _BYTE *v58; // rax
  _BYTE *v59; // rbx
  int v60; // eax
  int v61; // edx
  int v62; // eax
  int v63; // ebp
  _BYTE *v64; // r8
  size_t v65; // r12
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rdx
  _QWORD *v69; // rsi
  size_t v70; // rdi
  __int64 *v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  _BYTE *v76; // r8
  size_t v77; // r12
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rdx
  _QWORD *v81; // rsi
  size_t v82; // rdi
  __int64 *v83; // r12
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  _QWORD *v88; // rax
  _QWORD *v89; // rcx
  _QWORD *v90; // rsi
  __int64 v91; // rdi
  __int64 *v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  _QWORD *v97; // rax
  _QWORD *v98; // rcx
  _QWORD *v99; // rsi
  __int64 v100; // rdi
  __int64 *v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  _QWORD *v106; // rax
  _QWORD *v107; // rcx
  _QWORD *v108; // rsi
  __int64 v109; // rdi
  __int64 *v110; // rbx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __m128i *v118; // rbx
  _QWORD *v119; // rax
  __int64 v120; // r13
  char v121; // r15
  size_t *v122; // rbp
  size_t v123; // rbx
  char *v124; // rax
  _QWORD *v125; // rax
  _QWORD *v126; // rdx
  __int64 v127; // rbx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int8 v130; // si
  __int64 v131; // rax
  _BYTE *v132; // r14
  char *v133; // rdi
  _QWORD *v134; // rdi
  unsigned int v135; // eax
  __int64 v136; // rax
  __int64 v137; // rax
  unsigned __int64 v138; // rsi
  char *v139; // rdx
  char *v140; // r8
  unsigned int v141; // eax
  unsigned int v142; // eax
  unsigned int v143; // edx
  __int64 v144; // rdi
  _QWORD *v145; // rdi
  unsigned int v146; // ecx
  unsigned int v147; // ecx
  unsigned int v148; // edx
  unsigned int v149; // ecx
  unsigned int v150; // edx
  unsigned __int64 v151; // r8
  char *v152; // rsi
  char *v153; // r9
  unsigned int v154; // ecx
  unsigned int v155; // ecx
  unsigned int v156; // esi
  __int64 v157; // r10
  unsigned __int64 v158; // r8
  char *v159; // rsi
  char *v160; // r9
  unsigned int v161; // ecx
  unsigned int v162; // ecx
  unsigned int v163; // esi
  __int64 v164; // r10
  unsigned __int64 v165; // r8
  char *v166; // rsi
  char *v167; // r9
  unsigned int v168; // edx
  unsigned int v169; // edx
  unsigned int v170; // esi
  __int64 v171; // rcx
  unsigned __int64 v172; // r8
  char *v173; // rsi
  char *v174; // r9
  unsigned int v175; // ecx
  unsigned int v176; // ecx
  unsigned int v177; // esi
  __int64 v178; // r10
  unsigned __int64 v179; // r8
  char *v180; // rsi
  char *v181; // r9
  unsigned int v182; // edx
  unsigned int v183; // edx
  unsigned int v184; // esi
  __int64 v185; // rcx
  int v186; // [rsp+0h] [rbp-428h]
  int v187; // [rsp+0h] [rbp-428h]
  int v188; // [rsp+0h] [rbp-428h]
  int v189; // [rsp+0h] [rbp-428h]
  int v190; // [rsp+0h] [rbp-428h]
  int v191; // [rsp+0h] [rbp-428h]
  int v192; // [rsp+0h] [rbp-428h]
  int v193; // [rsp+0h] [rbp-428h]
  int v194; // [rsp+0h] [rbp-428h]
  __m128i *v195; // [rsp+8h] [rbp-420h]
  int v196; // [rsp+8h] [rbp-420h]
  int v197; // [rsp+8h] [rbp-420h]
  int v198; // [rsp+8h] [rbp-420h]
  int v199; // [rsp+8h] [rbp-420h]
  int v200; // [rsp+8h] [rbp-420h]
  __int64 v201; // [rsp+8h] [rbp-420h]
  __int64 src; // [rsp+10h] [rbp-418h]
  void *srcd; // [rsp+10h] [rbp-418h]
  void *srce; // [rsp+10h] [rbp-418h]
  _BYTE *srca; // [rsp+10h] [rbp-418h]
  void *srcb; // [rsp+10h] [rbp-418h]
  void *srcc; // [rsp+10h] [rbp-418h]
  int srcf; // [rsp+10h] [rbp-418h]
  __int64 v209; // [rsp+70h] [rbp-3B8h]
  __m128i v210; // [rsp+C0h] [rbp-368h] BYREF
  __int64 v211; // [rsp+D0h] [rbp-358h]
  unsigned __int64 v212; // [rsp+D8h] [rbp-350h]
  void *s2; // [rsp+E0h] [rbp-348h] BYREF
  size_t n; // [rsp+E8h] [rbp-340h]
  char v215; // [rsp+F0h] [rbp-338h] BYREF
  _QWORD *v216; // [rsp+100h] [rbp-328h]
  size_t v217; // [rsp+108h] [rbp-320h]
  _QWORD v218[2]; // [rsp+110h] [rbp-318h] BYREF
  _QWORD *v219; // [rsp+120h] [rbp-308h]
  size_t v220; // [rsp+128h] [rbp-300h]
  _QWORD v221[2]; // [rsp+130h] [rbp-2F8h] BYREF
  _QWORD *v222; // [rsp+140h] [rbp-2E8h] BYREF
  __int64 v223; // [rsp+148h] [rbp-2E0h]
  _QWORD v224[2]; // [rsp+150h] [rbp-2D8h] BYREF
  _QWORD *v225; // [rsp+160h] [rbp-2C8h] BYREF
  __int64 v226; // [rsp+168h] [rbp-2C0h]
  _QWORD v227[2]; // [rsp+170h] [rbp-2B8h] BYREF
  _QWORD *v228; // [rsp+180h] [rbp-2A8h] BYREF
  __int64 v229; // [rsp+188h] [rbp-2A0h]
  _QWORD v230[2]; // [rsp+190h] [rbp-298h] BYREF
  __m128i v231; // [rsp+1A0h] [rbp-288h] BYREF
  __int64 v232; // [rsp+1B0h] [rbp-278h]
  __int64 v233; // [rsp+1B8h] [rbp-270h]
  __int64 v234; // [rsp+1C0h] [rbp-268h]
  __int64 v235; // [rsp+1C8h] [rbp-260h]
  __m128i v236; // [rsp+1D0h] [rbp-258h] BYREF
  __int64 v237; // [rsp+1E0h] [rbp-248h]
  char v238; // [rsp+1E8h] [rbp-240h]
  __int128 v239; // [rsp+1F0h] [rbp-238h] BYREF
  char v240; // [rsp+200h] [rbp-228h] BYREF
  __int128 v241; // [rsp+208h] [rbp-220h] BYREF
  char v242; // [rsp+218h] [rbp-210h]
  __int128 v243; // [rsp+220h] [rbp-208h] BYREF
  char v244; // [rsp+230h] [rbp-1F8h] BYREF
  __int128 v245; // [rsp+238h] [rbp-1F0h] BYREF
  char v246; // [rsp+248h] [rbp-1E0h]
  __int128 v247; // [rsp+250h] [rbp-1D8h] BYREF
  __m128i v248; // [rsp+260h] [rbp-1C8h] BYREF
  __int64 v249; // [rsp+270h] [rbp-1B8h]
  char v250; // [rsp+278h] [rbp-1B0h]
  __int64 v251; // [rsp+280h] [rbp-1A8h]
  __int64 v252; // [rsp+288h] [rbp-1A0h]
  char v253; // [rsp+290h] [rbp-198h] BYREF
  __int128 v254; // [rsp+298h] [rbp-190h] BYREF
  __int64 v255; // [rsp+2A8h] [rbp-180h]
  __int128 v256; // [rsp+2B0h] [rbp-178h]
  char v257; // [rsp+2C0h] [rbp-168h] BYREF
  __int128 v258; // [rsp+2C8h] [rbp-160h] BYREF
  char v259; // [rsp+2D8h] [rbp-150h]
  __int128 v260; // [rsp+2E0h] [rbp-148h] BYREF
  void *v261; // [rsp+2F0h] [rbp-138h] BYREF
  __int128 v262; // [rsp+2F8h] [rbp-130h] BYREF
  char v263; // [rsp+308h] [rbp-120h]
  __int128 v264; // [rsp+310h] [rbp-118h]
  __m128i v265; // [rsp+320h] [rbp-108h] BYREF
  __int64 v266; // [rsp+330h] [rbp-F8h]
  _QWORD v267[2]; // [rsp+338h] [rbp-F0h] BYREF
  __int64 v268; // [rsp+348h] [rbp-E0h]
  _QWORD v269[2]; // [rsp+350h] [rbp-D8h] BYREF
  __int64 v270; // [rsp+360h] [rbp-C8h]
  _QWORD v271[3]; // [rsp+368h] [rbp-C0h] BYREF
  _QWORD v272[3]; // [rsp+380h] [rbp-A8h] BYREF
  _QWORD v273[3]; // [rsp+398h] [rbp-90h] BYREF
  _QWORD v274[3]; // [rsp+3B0h] [rbp-78h] BYREF
  _QWORD v275[3]; // [rsp+3C8h] [rbp-60h] BYREF
  char v276; // [rsp+3E0h] [rbp-48h] BYREF
  unsigned __int64 v277; // [rsp+3E8h] [rbp-40h]

  v277 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v4 = "null";
        break;
      case 1:
        v4 = "object";
        break;
      case 2:
        v4 = (char *)"array";
        break;
      case 3:
        v4 = "string";
        break;
      case 4:
        v4 = "boolean";
        break;
      case 8:
        v4 = "binary";
        break;
      case 9:
        v4 = "discarded";
        break;
      default:
        v4 = "number";
        break;
    }
    v210.m128i_i64[0] = (__int64)v4;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v8 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(v8 + 16);
  v11 = v8 + 8;
  v12 = v11;
  if ( v10 )
  {
    do
    {
      v13 = *(_QWORD *)(v10 + 40);
      if ( !v13 )
        goto LABEL_43;
      v14 = 7;
      if ( v13 <= 7 )
        v14 = *(_QWORD *)(v10 + 40);
      if ( ((v15 = memcmp(*(const void **)(v10 + 32), "feature", v14)) != 0
         || (v15 = v13 - 7, (__int64)(v13 - 7) <= 0x7FFFFFFF))
        && v15 < 0 )
      {
LABEL_43:
        v10 = *(_QWORD *)(v10 + 24);
      }
      else
      {
        v12 = v10;
        v10 = *(_QWORD *)(v10 + 16);
      }
    }
    while ( v10 );
    if ( v11 != v12 )
      std::string::compare(*(void **)(v12 + 32), *(_QWORD *)(v12 + 40), "feature");
  }
  v210.m128i_i64[0] = a2;
  v211 = 0;
  v212 = 0x8000000000000000LL;
  v210.m128i_i64[1] = v11;
  v195 = &v210;
  if ( (unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_() )
  {
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&s2,
      "code_density",
      v16,
      v17,
      v18,
      v19,
      v186,
      (int)&v210,
      src);
  }
  else
  {
    v58 = (_BYTE *)nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    v215 = 0;
    n = 0;
    v59 = v58;
    s2 = &v215;
    if ( *v58 != 3 )
    {
      v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      switch ( *v59 )
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
      v210.m128i_i64[0] = (__int64)v7;
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        v2,
        302);
      std::string::_M_dispose();
      __cxa_throw(
        v2,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    std::string::_M_assign();
  }
  if ( *(_BYTE *)a2 != 1 )
  {
    v5 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
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
    v210.m128i_i64[0] = (__int64)v6;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v5,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      v5,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v20 = *(_QWORD *)(a2 + 8);
  v21 = *(_QWORD *)(v20 + 16);
  v22 = v20 + 8;
  v23 = v22;
  if ( v21 )
  {
    do
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)(v21 + 40);
        if ( !v26 )
          break;
        v24 = 6;
        if ( v26 <= 6 )
          v24 = *(_QWORD *)(v21 + 40);
        v25 = memcmp(*(const void **)(v21 + 32), "enable", v24);
        if ( v25 || (v25 = v26 - 6, (__int64)(v26 - 6) <= 0x7FFFFFFF) )
        {
          if ( v25 < 0 )
            break;
        }
        v23 = v21;
        v21 = *(_QWORD *)(v21 + 16);
        if ( !v21 )
          goto LABEL_26;
      }
      v21 = *(_QWORD *)(v21 + 24);
    }
    while ( v21 );
LABEL_26:
    if ( v22 != v23 )
    {
      v27 = *(_QWORD *)(v23 + 40);
      if ( v27 )
      {
        v28 = 6;
        if ( v27 <= 6 )
          v28 = *(_QWORD *)(v23 + 40);
        memcmp(*(const void **)(v23 + 32), "enable", v28);
      }
    }
  }
  v210.m128i_i64[0] = a2;
  v211 = 0;
  v212 = 0x8000000000000000LL;
  v210.m128i_i64[1] = v22;
  v29 = _ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_();
  if ( !v29 )
  {
    nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    v29 = 0;
  }
  v30 = (void *)a2;
  v210.m128i_i8[0] = 1;
  v31 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<bool,char const(&)[10],bool,0>();
  v32 = n;
  LOBYTE(src) = v31;
  if ( !n )
  {
    v119 = &ida_mcp::tools::xtensa_options::`anonymous namespace'::kFeatures;
    do
    {
      v35 = v119;
      if ( !*v119 )
        goto LABEL_38;
      v119 += 5;
    }
    while ( &unk_4438D8 != (_UNKNOWN *)v119 );
LABEL_79:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v120 = 0;
    v121 = 0;
    v122 = (size_t *)&ida_mcp::tools::xtensa_options::`anonymous namespace'::kFeatures;
    v123 = 5;
    while ( 1 )
    {
      v132 = (_BYTE *)v122[1];
      v261 = (char *)&v262 + 8;
      if ( !v132 && v123 )
        JUMPOUT(0x14EB00);
      v210.m128i_i64[0] = v123;
      if ( v123 <= 0xF )
      {
        if ( v123 == 1 )
        {
          BYTE8(v262) = *v132;
LABEL_82:
          v124 = (char *)&v262 + 8;
          goto LABEL_83;
        }
        if ( !v123 )
          goto LABEL_82;
        v133 = (char *)&v262 + 8;
      }
      else
      {
        v261 = (void *)std::string::_M_create();
        v133 = (char *)v261;
        *((_QWORD *)&v262 + 1) = v210.m128i_i64[0];
      }
      memcpy(v133, v132, v123);
      v123 = v210.m128i_i64[0];
      v124 = (char *)v261;
LABEL_83:
      *(_QWORD *)&v262 = v123;
      v124[v123] = 0;
      v210 = 0u;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v125 = (_QWORD *)operator new(0x20u);
      v126 = v125 + 2;
      v127 = (__int64)v125;
      v128 = v262;
      *v125 = v125 + 2;
      if ( v261 == (char *)&v262 + 8 )
      {
        v135 = v128 + 1;
        if ( (unsigned int)(v128 + 1) >= 8 )
        {
          *v126 = *((_QWORD *)&v262 + 1);
          *(_QWORD *)((char *)v126 + v135 - 8) = *(_QWORD *)((char *)&v262 + v135);
          v138 = (v127 + 24) & 0xFFFFFFFFFFFFFFF8LL;
          v139 = (char *)v126 - v138;
          v140 = (char *)((char *)&v262 + 8 - v139);
          v141 = ((_DWORD)v139 + v135) & 0xFFFFFFF8;
          if ( v141 >= 8 )
          {
            v142 = v141 & 0xFFFFFFF8;
            v143 = 0;
            do
            {
              v144 = v143;
              v143 += 8;
              *(_QWORD *)(v138 + v144) = *(_QWORD *)&v140[v144];
            }
            while ( v143 < v142 );
          }
        }
        else if ( (v135 & 4) != 0 )
        {
          *(_DWORD *)v126 = DWORD2(v262);
          *(_DWORD *)((char *)v126 + v135 - 4) = *(_DWORD *)((char *)&v262 + v135 + 4);
        }
        else if ( (_DWORD)v128 != -1 )
        {
          *(_BYTE *)v126 = BYTE8(v262);
          if ( (v135 & 2) != 0 )
            *(_WORD *)((char *)v126 + v135 - 2) = *(_WORD *)((char *)&v262 + v135 + 6);
        }
      }
      else
      {
        *v125 = v261;
        v125[2] = *((_QWORD *)&v262 + 1);
      }
      *(_QWORD *)(v127 + 8) = v128;
      v261 = (char *)&v262 + 8;
      *(_QWORD *)&v262 = 0;
      BYTE8(v262) = 0;
      if ( !v121 )
      {
        v129 = operator new(0x18u);
        *(_QWORD *)(v129 + 16) = 0;
        v120 = v129;
        *(_OWORD *)v129 = 0;
LABEL_87:
        v210.m128i_i8[0] = 3;
        v210.m128i_i64[1] = v127;
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
        v130 = v210.m128i_i8[0];
        v131 = v210.m128i_i64[1];
        goto LABEL_88;
      }
      v136 = *(_QWORD *)(v120 + 8);
      if ( *(_QWORD *)(v120 + 16) == v136 )
        goto LABEL_87;
      v210.m128i_i8[0] = 3;
      v137 = v136 + 16;
      v130 = 0;
      v210.m128i_i64[1] = v127;
      *(__m128i *)(v137 - 16) = _mm_load_si128(&v210);
      *(_QWORD *)(v120 + 8) = v137;
      v131 = 0;
LABEL_88:
      v210.m128i_i8[0] = v130;
      v210.m128i_i64[1] = v131;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v261 != (char *)&v262 + 8 )
        operator delete(v261, *((_QWORD *)&v262 + 1) + 1LL);
      v122 += 5;
      if ( &unk_4438D8 == (_UNKNOWN *)v122 )
        JUMPOUT(0x14E7E8);
      v123 = *v122;
      v121 = 2;
    }
  }
  v33 = &ida_mcp::tools::xtensa_options::`anonymous namespace'::kFeatures;
  v34 = s2;
  while ( 1 )
  {
    v35 = v33;
    if ( v32 == *v33 )
    {
      v30 = (void *)v33[1];
      if ( !memcmp(v30, v34, v32) )
        break;
    }
    v33 += 5;
    if ( v33 == (_QWORD *)&unk_4438D8 )
      goto LABEL_79;
  }
LABEL_38:
  if ( !ida_mcp::tools::xtensa_options::`anonymous namespace'::is_xtensa_database((ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)v30) )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
    *((_QWORD *)&v254 + 1) = 0;
    v255 = 4;
    v256 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v265,
      (const __m128i *)&v253);
    v266 = 0;
    v257 = 0;
    *(_QWORD *)&v258 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v257 = 3;
    v36 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v36, "error", v37, v38, v39, v40, (int)&v258, (int)v195, src);
    v259 = 0;
    *(_QWORD *)&v260 = 0;
    v258 = (unsigned __int64)v36;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v259 = 3;
    v41 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v41,
      "current database processor is not 'xtensa'",
      v42,
      v43,
      v44,
      v45,
      v187,
      (int)&v260,
      (__int64)srcd);
    v260 = (unsigned __int64)v41;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v267,
      (const __m128i *)&v257);
    v268 = 0;
    LOBYTE(v261) = 0;
    *(_QWORD *)&v262 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v261) = 3;
    v46 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v46, "hint", v47, v48, v49, v50, v188, v196, (__int64)&v257);
    v263 = 0;
    v262 = (unsigned __int64)v46;
    *(_QWORD *)&v264 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v263 = 3;
    v51 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v51,
      "load the firmware ELF first, then call this tool",
      v52,
      v53,
      v54,
      v55,
      v189,
      v197,
      (__int64)srce);
    v264 = (unsigned __int64)v51;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v269,
      (const __m128i *)&v261);
    v270 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      a1,
      &v265);
    v56 = (__m128i *)v271;
    do
    {
      v56 = (__m128i *)((char *)v56 - 24);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v56 != &v265 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    goto LABEL_42;
  }
  netnode_check();
  v190 = 0;
  if ( (unsigned __int8)netnode_exist() )
    v190 = netnode_altval();
  v60 = *((_DWORD *)v35 + 4);
  v61 = v60 | v190;
  v62 = v190 & ~v60;
  if ( !v29 )
    v61 = v62;
  HIDWORD(v209) = v61;
  v63 = v61;
  netnode_check();
  netnode_supset();
  netnode_supset();
  BYTE3(v209) = src & (v63 != v190);
  if ( BYTE3(v209) )
    ida_mcp::tools::xtensa_options::`anonymous namespace'::reanalyse_all_code_segments((ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)0xFFFFFFFFFFFFFFFFLL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v232 = 0;
  v233 = 4;
  v234 = 1;
  v235 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v265,
    &v231);
  v266 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v64 = *((_BYTE **)v35 + 1);
  v65 = *(_QWORD *)v35;
  v237 = 0;
  v216 = v218;
  if ( v64 )
  {
    v210.m128i_i64[0] = v65;
    if ( v65 > 0xF )
    {
      src = (__int64)v64;
      v216 = (_QWORD *)std::string::_M_create();
      v134 = v216;
      v64 = (_BYTE *)src;
      v218[0] = v210.m128i_i64[0];
      goto LABEL_100;
    }
  }
  else
  {
    if ( v65 )
      JUMPOUT(0x14EAB8);
    v210.m128i_i64[0] = 0;
  }
  if ( v65 == 1 )
  {
    LOBYTE(v218[0]) = *v64;
LABEL_56:
    v66 = v218;
    goto LABEL_57;
  }
  if ( !v65 )
    goto LABEL_56;
  v134 = v218;
LABEL_100:
  memcpy(v134, v64, v65);
  v65 = v210.m128i_i64[0];
  v66 = v216;
LABEL_57:
  v217 = v65;
  *((_BYTE *)v66 + v65) = 0;
  v238 = 0;
  *(_QWORD *)&v239 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v238 = 3;
  v67 = (_QWORD *)operator new(0x20u);
  v68 = v216;
  v69 = v67 + 2;
  v70 = v217;
  *v67 = v67 + 2;
  if ( v68 == v218 )
  {
    v148 = v70 + 1;
    if ( (unsigned int)(v70 + 1) >= 8 )
    {
      v67[2] = v218[0];
      *(_QWORD *)((char *)v69 + v148 - 8) = *(_QWORD *)((char *)&v218[-1] + v148);
      v165 = (unsigned __int64)(v67 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v166 = (char *)v69 - v165;
      v167 = (char *)((char *)v218 - v166);
      v168 = ((_DWORD)v166 + v148) & 0xFFFFFFF8;
      if ( v168 >= 8 )
      {
        v169 = v168 & 0xFFFFFFF8;
        v170 = 0;
        do
        {
          v171 = v170;
          v170 += 8;
          *(_QWORD *)(v165 + v171) = *(_QWORD *)&v167[v171];
        }
        while ( v170 < v169 );
      }
    }
    else if ( (v148 & 4) != 0 )
    {
      *((_DWORD *)v67 + 4) = v218[0];
      *(_DWORD *)((char *)v69 + v148 - 4) = *(_DWORD *)((char *)&v217 + v148 + 4);
    }
    else if ( (_DWORD)v70 != -1 )
    {
      *((_BYTE *)v67 + 16) = v218[0];
      if ( (v148 & 2) != 0 )
        *(_WORD *)((char *)v69 + v148 - 2) = *(_WORD *)((char *)&v217 + v148 + 6);
    }
  }
  else
  {
    *v67 = v68;
    v67[2] = v218[0];
  }
  v67[1] = v70;
  v216 = v218;
  v217 = 0;
  LOBYTE(v218[0]) = 0;
  v239 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v267,
    &v236);
  v268 = 0;
  v240 = 0;
  *(_QWORD *)&v241 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v240 = 3;
  v71 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v71, "display", v72, v73, v74, v75, v190, (int)v195, src);
  v76 = *((_BYTE **)v35 + 4);
  v77 = *((_QWORD *)v35 + 3);
  v219 = v221;
  v241 = (unsigned __int64)v71;
  if ( !v76 && v77 )
    std::string::basic_string(v71, "display");
  v210.m128i_i64[0] = v77;
  if ( v77 > 0xF )
  {
    srca = v76;
    v219 = (_QWORD *)std::string::_M_create();
    v145 = v219;
    v76 = srca;
    v221[0] = v210.m128i_i64[0];
    goto LABEL_120;
  }
  if ( v77 != 1 )
  {
    if ( !v77 )
      goto LABEL_64;
    v145 = v221;
LABEL_120:
    memcpy(v145, v76, v77);
    v77 = v210.m128i_i64[0];
    v78 = v219;
    goto LABEL_65;
  }
  LOBYTE(v221[0]) = *v76;
LABEL_64:
  v78 = v221;
LABEL_65:
  v220 = v77;
  *((_BYTE *)v78 + v77) = 0;
  v242 = 0;
  *(_QWORD *)&v243 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v242 = 3;
  v79 = (_QWORD *)operator new(0x20u);
  v80 = v219;
  v81 = v79 + 2;
  v82 = v220;
  *v79 = v79 + 2;
  if ( v80 == v221 )
  {
    v150 = v82 + 1;
    if ( (unsigned int)(v82 + 1) >= 8 )
    {
      v79[2] = v221[0];
      *(_QWORD *)((char *)v81 + v150 - 8) = *(_QWORD *)((char *)&v221[-1] + v150);
      v179 = (unsigned __int64)(v79 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v180 = (char *)v81 - v179;
      v181 = (char *)((char *)v221 - v180);
      v182 = ((_DWORD)v180 + v150) & 0xFFFFFFF8;
      if ( v182 >= 8 )
      {
        v183 = v182 & 0xFFFFFFF8;
        v184 = 0;
        do
        {
          v185 = v184;
          v184 += 8;
          *(_QWORD *)(v179 + v185) = *(_QWORD *)&v181[v185];
        }
        while ( v184 < v183 );
      }
    }
    else if ( (v150 & 4) != 0 )
    {
      *((_DWORD *)v79 + 4) = v221[0];
      *(_DWORD *)((char *)v81 + v150 - 4) = *(_DWORD *)((char *)&v220 + v150 + 4);
    }
    else if ( (_DWORD)v82 != -1 )
    {
      *((_BYTE *)v79 + 16) = v221[0];
      if ( (v150 & 2) != 0 )
        *(_WORD *)((char *)v81 + v150 - 2) = *(_WORD *)((char *)&v220 + v150 + 6);
    }
  }
  else
  {
    *v79 = v80;
    v79[2] = v221[0];
  }
  v79[1] = v82;
  v219 = v221;
  v220 = 0;
  LOBYTE(v221[0]) = 0;
  v243 = (unsigned __int64)v79;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v269,
    (const __m128i *)&v240);
  v270 = 0;
  v244 = 0;
  *(_QWORD *)&v245 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v244 = 3;
  v83 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v83, "mask", v84, v85, v86, v87, v191, v198, (__int64)srca);
  v245 = (unsigned __int64)v83;
  ida_mcp::tools::xtensa_options::`anonymous namespace'::format_hex32((ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)&v222);
  v246 = 0;
  *(_QWORD *)&v247 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v246 = 3;
  v88 = (_QWORD *)operator new(0x20u);
  v89 = v222;
  v90 = v88 + 2;
  v91 = v223;
  *v88 = v88 + 2;
  if ( v89 == v224 )
  {
    v149 = v91 + 1;
    if ( (unsigned int)(v91 + 1) >= 8 )
    {
      v88[2] = v224[0];
      *(_QWORD *)((char *)v90 + v149 - 8) = *(_QWORD *)((char *)&v224[-1] + v149);
      v172 = (unsigned __int64)(v88 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v173 = (char *)v90 - v172;
      v174 = (char *)((char *)v224 - v173);
      v175 = ((_DWORD)v173 + v149) & 0xFFFFFFF8;
      if ( v175 >= 8 )
      {
        v176 = v175 & 0xFFFFFFF8;
        v177 = 0;
        do
        {
          v178 = v177;
          v177 += 8;
          *(_QWORD *)(v172 + v178) = *(_QWORD *)&v174[v178];
        }
        while ( v177 < v176 );
      }
    }
    else if ( (v149 & 4) != 0 )
    {
      *((_DWORD *)v88 + 4) = v224[0];
      *(_DWORD *)((char *)v90 + v149 - 4) = *(_DWORD *)((char *)&v223 + v149 + 4);
    }
    else if ( (_DWORD)v91 != -1 )
    {
      *((_BYTE *)v88 + 16) = v224[0];
      if ( (v149 & 2) != 0 )
        *(_WORD *)((char *)v90 + v149 - 2) = *(_WORD *)((char *)&v223 + v149 + 6);
    }
  }
  else
  {
    *v88 = v89;
    v88[2] = v224[0];
  }
  v88[1] = v91;
  v222 = v224;
  v223 = 0;
  LOBYTE(v224[0]) = 0;
  v247 = (unsigned __int64)v88;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v271,
    (const __m128i *)&v244);
  v271[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v249 = 0;
  v250 = 4;
  v251 = v29;
  v252 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v272,
    &v248);
  v272[2] = 0;
  v253 = 0;
  *(_QWORD *)&v254 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v253 = 3;
  v92 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v92, "flags_before", v93, v94, v95, v96, v192, v199, (__int64)srcb);
  v254 = (unsigned __int64)v92;
  ida_mcp::tools::xtensa_options::`anonymous namespace'::format_hex32((ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)&v225);
  LOBYTE(v255) = 0;
  *(_QWORD *)&v256 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v255) = 3;
  v97 = (_QWORD *)operator new(0x20u);
  v98 = v225;
  v99 = v97 + 2;
  v100 = v226;
  *v97 = v97 + 2;
  if ( v98 == v227 )
  {
    v147 = v100 + 1;
    if ( (unsigned int)(v100 + 1) >= 8 )
    {
      v97[2] = v227[0];
      *(_QWORD *)((char *)v99 + v147 - 8) = *(_QWORD *)((char *)&v227[-1] + v147);
      v151 = (unsigned __int64)(v97 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v152 = (char *)v99 - v151;
      v153 = (char *)((char *)v227 - v152);
      v154 = ((_DWORD)v152 + v147) & 0xFFFFFFF8;
      if ( v154 >= 8 )
      {
        v155 = v154 & 0xFFFFFFF8;
        v156 = 0;
        do
        {
          v157 = v156;
          v156 += 8;
          *(_QWORD *)(v151 + v157) = *(_QWORD *)&v153[v157];
        }
        while ( v156 < v155 );
      }
    }
    else if ( (v147 & 4) != 0 )
    {
      *((_DWORD *)v97 + 4) = v227[0];
      *(_DWORD *)((char *)v99 + v147 - 4) = *(_DWORD *)((char *)&v226 + v147 + 4);
    }
    else if ( (_DWORD)v100 != -1 )
    {
      *((_BYTE *)v97 + 16) = v227[0];
      if ( (v147 & 2) != 0 )
        *(_WORD *)((char *)v99 + v147 - 2) = *(_WORD *)((char *)&v226 + v147 + 6);
    }
  }
  else
  {
    *v97 = v98;
    v97[2] = v227[0];
  }
  v97[1] = v100;
  v225 = v227;
  v226 = 0;
  LOBYTE(v227[0]) = 0;
  v256 = (unsigned __int64)v97;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v273,
    (const __m128i *)&v253);
  v273[2] = 0;
  v257 = 0;
  *(_QWORD *)&v258 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v257 = 3;
  v101 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v101,
    "flags_after",
    v102,
    v103,
    v104,
    v105,
    (int)&v258,
    v200,
    (__int64)srcc);
  v258 = (unsigned __int64)v101;
  ida_mcp::tools::xtensa_options::`anonymous namespace'::format_hex32((ida_mcp::tools::xtensa_options::_anonymous_namespace_ *)&v228);
  v259 = 0;
  *(_QWORD *)&v260 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v259 = 3;
  v106 = (_QWORD *)operator new(0x20u);
  v107 = v228;
  v108 = v106 + 2;
  v109 = v229;
  *v106 = v106 + 2;
  if ( v107 == v230 )
  {
    v146 = v109 + 1;
    if ( (unsigned int)(v109 + 1) >= 8 )
    {
      v106[2] = v230[0];
      *(_QWORD *)((char *)v108 + v146 - 8) = *(_QWORD *)((char *)&v230[-1] + v146);
      v158 = (unsigned __int64)(v106 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v159 = (char *)v108 - v158;
      v160 = (char *)((char *)v230 - v159);
      v161 = ((_DWORD)v159 + v146) & 0xFFFFFFF8;
      if ( v161 >= 8 )
      {
        v162 = v161 & 0xFFFFFFF8;
        v163 = 0;
        do
        {
          v164 = v163;
          v163 += 8;
          *(_QWORD *)(v158 + v164) = *(_QWORD *)&v160[v164];
        }
        while ( v163 < v162 );
      }
    }
    else if ( (v146 & 4) != 0 )
    {
      *((_DWORD *)v106 + 4) = v230[0];
      *(_DWORD *)((char *)v108 + v146 - 4) = *(_DWORD *)((char *)&v229 + v146 + 4);
    }
    else if ( (_DWORD)v109 != -1 )
    {
      *((_BYTE *)v106 + 16) = v230[0];
      if ( (v146 & 2) != 0 )
        *(_WORD *)((char *)v108 + v146 - 2) = *(_WORD *)((char *)&v229 + v146 + 6);
    }
  }
  else
  {
    *v106 = v107;
    v106[2] = v230[0];
  }
  v106[1] = v109;
  v228 = v230;
  v229 = 0;
  LOBYTE(v230[0]) = 0;
  v260 = (unsigned __int64)v106;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v274,
    (const __m128i *)&v257);
  v274[2] = 0;
  LOBYTE(v261) = 0;
  *(_QWORD *)&v262 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v261) = 3;
  v110 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v110,
    "reanalysed",
    v111,
    v112,
    v113,
    v114,
    v193,
    (int)&v260,
    (__int64)&v257);
  v263 = 4;
  v264 = BYTE3(v209);
  v262 = (unsigned __int64)v110;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v275,
    (const __m128i *)&v261);
  v275[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)&v265,
    8,
    v115,
    v116,
    v117,
    v194,
    v201,
    srcf,
    (int)&v236,
    (int)&s2,
    (int)&v239,
    (__int64)&v241,
    (int)&v243,
    (int)&v245,
    (int)&v247,
    (int)&v254,
    (char)&v222,
    (__int64)&v225,
    (int)&v228,
    v209);
  v118 = (__m128i *)&v276;
  do
  {
    v118 = (__m128i *)((char *)v118 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v118 != &v265 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_42:
  std::string::_M_dispose();
  return a1;
}

