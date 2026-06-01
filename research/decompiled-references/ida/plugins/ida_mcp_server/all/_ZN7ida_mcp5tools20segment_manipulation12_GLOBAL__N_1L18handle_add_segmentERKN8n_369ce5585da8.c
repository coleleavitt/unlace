_QWORD *__fastcall ida_mcp::tools::segment_manipulation::`anonymous namespace'::handle_add_segment(
        _QWORD *a1,
        __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // r13
  char *v3; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r14
  nlohmann::json_abi_v3_12_0::detail::type_error *v5; // r12
  char *v6; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v7; // r12
  char *v8; // rax
  char *v9; // rax
  void **v10; // rbx
  __int128 *v11; // rbp
  _BYTE *v12; // rax
  _BYTE *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // r15
  _BYTE *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // r13
  __int64 v21; // r15
  void **v22; // r12
  void **v23; // r15
  void **v24; // r13
  unsigned __int64 v25; // r14
  size_t v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r13
  void **v34; // rcx
  void **v35; // r14
  __int64 v36; // rbx
  void **v37; // r13
  size_t v38; // rdx
  int v39; // eax
  unsigned __int64 v40; // rbp
  size_t v41; // rsi
  void *v42; // rdi
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _BYTE *v48; // rax
  __int64 v49; // r8
  __int64 v50; // r14
  void **v51; // r8
  void **v52; // r13
  __int64 v53; // rbx
  void **v54; // r14
  size_t v55; // rdx
  int v56; // eax
  unsigned __int64 v57; // rbp
  size_t v58; // rsi
  void *v59; // rdi
  int v60; // eax
  char v61; // si
  __m128 v62; // xmm0
  unsigned __int64 v63; // rax
  __int64 *v64; // rbp
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  _QWORD *v73; // rax
  _QWORD *v74; // rdx
  _QWORD *v75; // rcx
  __int64 v76; // rsi
  __int64 *v77; // rbp
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  _QWORD *v86; // rax
  _QWORD *v87; // rdx
  _QWORD *v88; // rcx
  __int64 v89; // rsi
  __int64 *v90; // rbp
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  _BYTE *v95; // r14
  unsigned __int64 v96; // r15
  _QWORD *v97; // rax
  _BYTE *v98; // rdi
  __int64 *v99; // rbp
  __m128i v100; // xmm0
  size_t v101; // rdx
  __int64 v102; // rax
  __int64 *v103; // rbp
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  _BYTE *v108; // r14
  unsigned __int64 v109; // r15
  _QWORD *v110; // rax
  _BYTE *v111; // rdi
  __int64 *v112; // rbp
  __m128i v113; // xmm0
  size_t v114; // rdx
  __int64 v115; // rax
  __int64 *v116; // rbp
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  void **v124; // rbp
  __int64 v126; // rax
  unsigned __int64 v127; // rax
  __int64 v128; // rax
  unsigned __int64 v129; // rax
  unsigned int v130; // edx
  unsigned int v131; // edx
  unsigned __int64 v132; // rdi
  char *v133; // rcx
  char *v134; // r8
  unsigned int v135; // edx
  unsigned int v136; // edx
  unsigned int v137; // ecx
  __int64 v138; // r9
  unsigned __int64 v139; // rdi
  char *v140; // rcx
  char *v141; // r8
  unsigned int v142; // edx
  unsigned int v143; // edx
  unsigned int v144; // ecx
  __int64 v145; // r9
  int v146; // [rsp+0h] [rbp-458h]
  int v147; // [rsp+0h] [rbp-458h]
  int v148; // [rsp+0h] [rbp-458h]
  int v149; // [rsp+0h] [rbp-458h]
  int v150; // [rsp+0h] [rbp-458h]
  int v151; // [rsp+0h] [rbp-458h]
  int v152; // [rsp+0h] [rbp-458h]
  __int128 *v153; // [rsp+8h] [rbp-450h] BYREF
  _QWORD *v154; // [rsp+10h] [rbp-448h]
  void **p_src; // [rsp+18h] [rbp-440h]
  void **v156; // [rsp+20h] [rbp-438h]
  __int128 *v157; // [rsp+28h] [rbp-430h]
  __int128 *v158; // [rsp+30h] [rbp-428h]
  __m128i *v159; // [rsp+38h] [rbp-420h]
  __m128i v160; // [rsp+40h] [rbp-418h] BYREF
  __m128i *v161; // [rsp+50h] [rbp-408h]
  char v162; // [rsp+58h] [rbp-400h]
  unsigned __int8 v163; // [rsp+5Fh] [rbp-3F9h]
  void **v164; // [rsp+60h] [rbp-3F8h]
  char *v165; // [rsp+68h] [rbp-3F0h]
  char *v166; // [rsp+70h] [rbp-3E8h]
  char *v167; // [rsp+78h] [rbp-3E0h]
  void **v168; // [rsp+80h] [rbp-3D8h]
  void **v169; // [rsp+88h] [rbp-3D0h]
  __m128i v170; // [rsp+90h] [rbp-3C8h] BYREF
  int v171; // [rsp+ACh] [rbp-3ACh]
  unsigned __int64 v172; // [rsp+B0h] [rbp-3A8h]
  unsigned __int64 v173; // [rsp+B8h] [rbp-3A0h]
  __int64 v174; // [rsp+C0h] [rbp-398h]
  __int64 v175; // [rsp+C8h] [rbp-390h]
  __int64 v176; // [rsp+D0h] [rbp-388h]
  __int64 v177; // [rsp+D8h] [rbp-380h]
  __int128 *v178; // [rsp+E0h] [rbp-378h]
  void **v179; // [rsp+E8h] [rbp-370h]
  __int64 v180; // [rsp+F0h] [rbp-368h]
  unsigned __int64 v181; // [rsp+F8h] [rbp-360h]
  char *v182; // [rsp+100h] [rbp-358h]
  void **v183; // [rsp+108h] [rbp-350h]
  __int64 v184; // [rsp+110h] [rbp-348h]
  unsigned __int64 v185; // [rsp+118h] [rbp-340h]
  void *src; // [rsp+120h] [rbp-338h] BYREF
  unsigned __int64 v187; // [rsp+128h] [rbp-330h]
  _QWORD v188[2]; // [rsp+130h] [rbp-328h] BYREF
  void *v189; // [rsp+140h] [rbp-318h] BYREF
  unsigned __int64 v190; // [rsp+148h] [rbp-310h]
  _QWORD v191[2]; // [rsp+150h] [rbp-308h] BYREF
  void *v192; // [rsp+160h] [rbp-2F8h] BYREF
  __int64 v193; // [rsp+168h] [rbp-2F0h]
  _QWORD v194[2]; // [rsp+170h] [rbp-2E8h] BYREF
  void *v195; // [rsp+180h] [rbp-2D8h] BYREF
  __int64 v196; // [rsp+188h] [rbp-2D0h]
  _QWORD v197[2]; // [rsp+190h] [rbp-2C8h] BYREF
  char v198; // [rsp+1A0h] [rbp-2B8h] BYREF
  __int128 v199; // [rsp+1A8h] [rbp-2B0h] BYREF
  char v200; // [rsp+1B8h] [rbp-2A0h]
  __int128 v201; // [rsp+1C0h] [rbp-298h] BYREF
  char v202; // [rsp+1D0h] [rbp-288h] BYREF
  __int128 v203; // [rsp+1D8h] [rbp-280h] BYREF
  char v204; // [rsp+1E8h] [rbp-270h]
  __int128 v205; // [rsp+1F0h] [rbp-268h] BYREF
  char v206; // [rsp+200h] [rbp-258h] BYREF
  __int128 v207; // [rsp+208h] [rbp-250h] BYREF
  char v208; // [rsp+218h] [rbp-240h]
  __m128i v209; // [rsp+220h] [rbp-238h] BYREF
  char v210; // [rsp+230h] [rbp-228h] BYREF
  __int128 v211; // [rsp+238h] [rbp-220h] BYREF
  char v212; // [rsp+248h] [rbp-210h]
  __m128i v213; // [rsp+250h] [rbp-208h] BYREF
  char v214; // [rsp+260h] [rbp-1F8h] BYREF
  __int128 v215; // [rsp+268h] [rbp-1F0h]
  char v216; // [rsp+278h] [rbp-1E0h]
  __int64 v217; // [rsp+280h] [rbp-1D8h]
  __int64 v218; // [rsp+288h] [rbp-1D0h]
  void *v219; // [rsp+290h] [rbp-1C8h] BYREF
  unsigned __int64 v220; // [rsp+298h] [rbp-1C0h]
  __int64 v221; // [rsp+2A0h] [rbp-1B8h] BYREF
  _QWORD v222[3]; // [rsp+2A8h] [rbp-1B0h] BYREF
  _QWORD v223[3]; // [rsp+2C0h] [rbp-198h] BYREF
  _QWORD v224[3]; // [rsp+2D8h] [rbp-180h] BYREF
  _QWORD v225[3]; // [rsp+2F0h] [rbp-168h] BYREF
  char v226; // [rsp+308h] [rbp-150h] BYREF
  __m128 v227; // [rsp+310h] [rbp-148h]
  __int128 v228; // [rsp+320h] [rbp-138h]
  __int64 v229; // [rsp+330h] [rbp-128h]
  __int64 v230; // [rsp+338h] [rbp-120h]
  __int64 v231; // [rsp+340h] [rbp-118h]
  _BYTE v232[128]; // [rsp+348h] [rbp-110h] BYREF
  unsigned __int64 v233; // [rsp+3C8h] [rbp-90h]
  char v234[32]; // [rsp+3D0h] [rbp-88h] BYREF
  char v235[40]; // [rsp+3F0h] [rbp-68h] BYREF
  unsigned __int64 v236; // [rsp+418h] [rbp-40h]

  v154 = a1;
  v10 = &v219;
  v236 = __readfsqword(0x28u);
  v11 = (__int128 *)a2;
  v12 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v219 = &v221;
  v220 = 0;
  v13 = v12;
  LOBYTE(v221) = 0;
  if ( *v12 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v13 )
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
    v182 = v6;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v14 = ida_mcp::parse_ea(v219, v220);
  v175 = v15;
  v16 = v15;
  v146 = v14;
  v174 = v14;
  if ( v219 != &v221 )
    operator delete(v219, v221 + 1);
  v17 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v219 = &v221;
  v220 = 0;
  LOBYTE(v221) = 0;
  if ( *v17 != 3 )
    JUMPOUT(0x1369BA);
  std::string::_M_assign();
  v18 = ida_mcp::parse_ea(v219, v220);
  v177 = v19;
  v20 = v19;
  v153 = (__int128 *)v18;
  v176 = v18;
  if ( v219 != &v221 )
    operator delete(v219, v221 + 1);
  if ( !v16 || !v20 )
    JUMPOUT(0x136B13);
  if ( *(_BYTE *)a2 != 1 )
  {
    v5 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v8 = "null";
        break;
      case 1:
        v8 = "object";
        break;
      case 2:
        v8 = (char *)"array";
        break;
      case 3:
        v8 = "string";
        break;
      case 4:
        v8 = "boolean";
        break;
      case 8:
        v8 = "binary";
        break;
      case 9:
        v8 = "discarded";
        break;
      default:
        v8 = "number";
        break;
    }
    v182 = v8;
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
  v21 = *(_QWORD *)(a2 + 8);
  v178 = (__int128 *)a2;
  v180 = 0;
  v22 = *(void ***)(v21 + 16);
  v23 = (void **)(v21 + 8);
  v181 = 0x8000000000000000LL;
  v24 = v23;
  if ( v22 )
  {
    do
    {
      v25 = (unsigned __int64)v22[5];
      if ( !v25 )
        goto LABEL_82;
      v26 = 4;
      if ( v25 <= 4 )
        v26 = (size_t)v22[5];
      if ( ((v27 = memcmp(v22[4], "name", v26)) != 0 || (v27 = v25 - 4, (__int64)(v25 - 4) <= 0x7FFFFFFF)) && v27 < 0 )
      {
LABEL_82:
        v22 = (void **)v22[3];
      }
      else
      {
        v24 = v22;
        v22 = (void **)v22[2];
      }
    }
    while ( v22 );
    if ( v23 != v24 && std::string::compare(v24[4], (size_t)v24[5], "name") > 0 )
      v24 = v23;
  }
  v183 = v23;
  v179 = v24;
  v182 = (char *)a2;
  v184 = 0;
  v185 = 0x8000000000000000LL;
  if ( (unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_() )
  {
    p_src = &src;
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&src,
      "",
      v28,
      v29,
      v30,
      v31,
      v146,
      (int)v153,
      (__int64)v154);
  }
  else
  {
    LOBYTE(v188[0]) = 0;
    v187 = 0;
    p_src = &src;
    src = v188;
    if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->() != 3 )
      JUMPOUT(0x136B5C);
    std::string::_M_assign();
  }
  if ( *(_BYTE *)a2 != 1 )
  {
    v7 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
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
    v182 = v9;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v7,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      v7,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v32 = *(_QWORD *)(a2 + 8);
  v182 = (char *)a2;
  v184 = 0;
  v33 = *(_QWORD *)(v32 + 16);
  v34 = (void **)(v32 + 8);
  v185 = 0x8000000000000000LL;
  v35 = (void **)(v32 + 8);
  if ( v33 )
  {
    v156 = &v219;
    v36 = v33;
    v37 = (void **)(v32 + 8);
    v157 = (__int128 *)a2;
    do
    {
      while ( 1 )
      {
        v40 = *(_QWORD *)(v36 + 40);
        if ( !v40 )
          break;
        v38 = 5;
        if ( v40 <= 5 )
          v38 = *(_QWORD *)(v36 + 40);
        v39 = memcmp(*(const void **)(v36 + 32), "class", v38);
        if ( v39 || (v39 = v40 - 5, (__int64)(v40 - 5) <= 0x7FFFFFFF) )
        {
          if ( v39 < 0 )
            break;
        }
        v35 = (void **)v36;
        v36 = *(_QWORD *)(v36 + 16);
        if ( !v36 )
          goto LABEL_35;
      }
      v36 = *(_QWORD *)(v36 + 24);
    }
    while ( v36 );
LABEL_35:
    v10 = v156;
    v11 = v157;
    v34 = v37;
    if ( v35 != v37 )
    {
      v41 = (size_t)v35[5];
      v42 = v35[4];
      v156 = v37;
      v43 = std::string::compare(v42, v41, "class");
      v34 = v37;
      if ( v43 > 0 )
        v35 = v37;
    }
  }
  v183 = v35;
  v178 = v11;
  v180 = 0;
  v181 = 0x8000000000000000LL;
  v179 = v34;
  if ( (unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_() )
  {
    v164 = &v189;
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v189,
      "DATA",
      v44,
      v45,
      v46,
      v47,
      v146,
      (int)v153,
      (__int64)v154);
  }
  else
  {
    v48 = (_BYTE *)nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    v190 = 0;
    v164 = &v189;
    v189 = v191;
    LOBYTE(v191[0]) = 0;
    if ( *v48 != 3 )
      JUMPOUT(0x1369E8);
    std::string::_M_assign();
  }
  if ( *(_BYTE *)v11 != 1 )
  {
    v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)v11 )
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
    v182 = v3;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v2,
      306);
    std::string::_M_dispose();
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v49 = *((_QWORD *)v11 + 1);
  v178 = v11;
  v180 = 0;
  v50 = *(_QWORD *)(v49 + 16);
  v51 = (void **)(v49 + 8);
  v181 = 0x8000000000000000LL;
  v52 = v51;
  if ( v50 )
  {
    v156 = v10;
    v53 = v50;
    v54 = v51;
    v157 = v11;
    do
    {
      while ( 1 )
      {
        v57 = *(_QWORD *)(v53 + 40);
        if ( !v57 )
          break;
        v55 = 11;
        if ( v57 <= 0xB )
          v55 = *(_QWORD *)(v53 + 40);
        v56 = memcmp(*(const void **)(v53 + 32), "permissions", v55);
        if ( v56 || (v56 = v57 - 11, (__int64)(v57 - 11) <= 0x7FFFFFFF) )
        {
          if ( v56 < 0 )
            break;
        }
        v52 = (void **)v53;
        v53 = *(_QWORD *)(v53 + 16);
        if ( !v53 )
          goto LABEL_52;
      }
      v53 = *(_QWORD *)(v53 + 24);
    }
    while ( v53 );
LABEL_52:
    v10 = v156;
    v11 = v157;
    v51 = v54;
    if ( v52 != v54 )
    {
      v58 = (size_t)v52[5];
      v59 = v52[4];
      v156 = v54;
      v60 = std::string::compare(v59, v58, "permissions");
      v51 = v54;
      if ( v60 > 0 )
        v52 = v54;
    }
  }
  v179 = v52;
  v182 = (char *)v11;
  v184 = 0;
  v185 = 0x8000000000000000LL;
  v183 = v51;
  v61 = 6;
  if ( !(unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_() )
  {
    nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    v171 = 0;
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
    v61 = 0;
  }
  v230 = 0;
  v233 = 0xFFFFFFFF00000000LL;
  v228 = 0;
  v62 = _mm_loadh_ps((const double *)&v153);
  v229 = 0;
  v231 = 0;
  memset(v232, 0, sizeof(v232));
  BYTE2(v230) = v61;
  v227 = v62;
  if ( (unsigned __int8)getinf_flag() )
  {
    BYTE3(v230) = 2;
    LOBYTE(v233) = 3;
    LOWORD(v230) = 512;
    v63 = v190;
  }
  else
  {
    BYTE3(v230) = getinf_flag();
    v63 = v190;
    LOBYTE(v233) = 3;
    LOWORD(v230) = 512;
  }
  if ( v63 == 4 )
  {
    if ( *(_DWORD *)v189 == 1162104643 )
    {
      LOBYTE(v233) = 2;
    }
    else if ( *(_DWORD *)v189 == 1297239886 )
    {
      LOBYTE(v233) = 0;
    }
  }
  else if ( v63 == 3 && *(_WORD *)v189 == 21314 && *((_BYTE *)v189 + 2) == 83 )
  {
    LOBYTE(v233) = 9;
  }
  v163 = add_segm_ex();
  v198 = 0;
  *(_QWORD *)&v199 = 0;
  v156 = (void **)&v199;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v198 = 3;
  v64 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v64, "start", v65, v66, v67, v68, v146, (int)v153, (__int64)v154);
  v199 = (unsigned __int64)v64;
  qsnprintf();
  v168 = &v192;
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v192,
    v234,
    v69,
    v70,
    v71,
    v72,
    v147,
    (int)v153,
    (__int64)v154);
  v200 = 0;
  *(_QWORD *)&v201 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v200 = 3;
  v73 = (_QWORD *)operator new(0x20u);
  v74 = v192;
  v75 = v73 + 2;
  v76 = v193;
  *v73 = v73 + 2;
  if ( v74 == v194 )
  {
    v130 = v76 + 1;
    if ( (unsigned int)(v76 + 1) >= 8 )
    {
      v73[2] = v194[0];
      *(_QWORD *)((char *)v75 + v130 - 8) = *(_QWORD *)((char *)&v194[-1] + v130);
      v139 = (unsigned __int64)(v73 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v140 = (char *)v75 - v139;
      v141 = (char *)((char *)v194 - v140);
      v142 = ((_DWORD)v140 + v130) & 0xFFFFFFF8;
      if ( v142 >= 8 )
      {
        v143 = v142 & 0xFFFFFFF8;
        v144 = 0;
        do
        {
          v145 = v144;
          v144 += 8;
          *(_QWORD *)(v139 + v145) = *(_QWORD *)&v141[v145];
        }
        while ( v144 < v143 );
      }
    }
    else if ( (v130 & 4) != 0 )
    {
      *((_DWORD *)v73 + 4) = v194[0];
      *(_DWORD *)((char *)v75 + v130 - 4) = *(_DWORD *)((char *)&v193 + v130 + 4);
    }
    else if ( (_DWORD)v76 != -1 )
    {
      *((_BYTE *)v73 + 16) = v194[0];
      if ( (v130 & 2) != 0 )
        *(_WORD *)((char *)v75 + v130 - 2) = *(_WORD *)((char *)&v193 + v130 + 6);
    }
  }
  else
  {
    *v73 = v74;
    v73[2] = v194[0];
  }
  v73[1] = v76;
  v192 = v194;
  LOBYTE(v194[0]) = 0;
  v193 = 0;
  v165 = &v198;
  v201 = (unsigned __int64)v73;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v10,
    (const __m128i *)&v198,
    2,
    1);
  v221 = 0;
  v202 = 0;
  *(_QWORD *)&v203 = 0;
  v157 = &v203;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v202 = 3;
  v77 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v77, "end", v78, v79, v80, v81, (int)&v201, (int)v153, (__int64)v154);
  v203 = (unsigned __int64)v77;
  qsnprintf();
  v169 = &v195;
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v195,
    v235,
    v82,
    v83,
    v84,
    v85,
    v148,
    (int)v153,
    (__int64)v154);
  v204 = 0;
  v153 = &v205;
  *(_QWORD *)&v205 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v204 = 3;
  v86 = (_QWORD *)operator new(0x20u);
  v87 = v195;
  v88 = v86 + 2;
  v89 = v196;
  *v86 = v86 + 2;
  if ( v87 == v197 )
  {
    v131 = v89 + 1;
    if ( (unsigned int)(v89 + 1) >= 8 )
    {
      v86[2] = v197[0];
      *(_QWORD *)((char *)v88 + v131 - 8) = *(_QWORD *)((char *)&v197[-1] + v131);
      v132 = (unsigned __int64)(v86 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v133 = (char *)v88 - v132;
      v134 = (char *)((char *)v197 - v133);
      v135 = ((_DWORD)v133 + v131) & 0xFFFFFFF8;
      if ( v135 >= 8 )
      {
        v136 = v135 & 0xFFFFFFF8;
        v137 = 0;
        do
        {
          v138 = v137;
          v137 += 8;
          *(_QWORD *)(v132 + v138) = *(_QWORD *)&v134[v138];
        }
        while ( v137 < v136 );
      }
    }
    else if ( (v131 & 4) != 0 )
    {
      *((_DWORD *)v86 + 4) = v197[0];
      *(_DWORD *)((char *)v88 + v131 - 4) = *(_DWORD *)((char *)&v196 + v131 + 4);
    }
    else if ( (_DWORD)v89 != -1 )
    {
      *((_BYTE *)v86 + 16) = v197[0];
      if ( (v131 & 2) != 0 )
        *(_WORD *)((char *)v88 + v131 - 2) = *(_WORD *)((char *)&v196 + v131 + 6);
    }
  }
  else
  {
    *v86 = v87;
    v86[2] = v197[0];
  }
  v86[1] = v89;
  v195 = v197;
  v196 = 0;
  LOBYTE(v197[0]) = 0;
  v166 = &v202;
  v205 = (unsigned __int64)v86;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v222,
    (const __m128i *)&v202,
    2,
    1);
  v222[2] = 0;
  v206 = 0;
  *(_QWORD *)&v207 = 0;
  v158 = &v207;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v206 = 3;
  v90 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v90, "name", v91, v92, v93, v94, v149, (int)v153, (__int64)v154);
  v208 = 0;
  v159 = &v209;
  v209.m128i_i64[0] = 0;
  v207 = (unsigned __int64)v90;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v208 = 3;
  v95 = src;
  v96 = v187;
  v97 = (_QWORD *)operator new(0x20u);
  v98 = v97 + 2;
  v172 = v96;
  v99 = v97;
  *v97 = v97 + 2;
  if ( v96 <= 0xF )
  {
    v100 = (__m128i)(unsigned __int64)v97;
    v101 = v96 + 1;
    if ( v96 )
    {
LABEL_67:
      v160 = v100;
      memcpy(v98, v95, v101);
      v102 = v172;
      v100 = _mm_load_si128(&v160);
      goto LABEL_68;
    }
    goto LABEL_87;
  }
  v128 = std::string::_M_create();
  *v99 = v128;
  v98 = (_BYTE *)v128;
  v129 = v172;
  v100 = (__m128i)(unsigned __int64)v99;
  v99[2] = v172;
  v101 = v129 + 1;
  if ( !v129 )
  {
LABEL_87:
    *v98 = *v95;
    v102 = v172;
    goto LABEL_68;
  }
  v102 = -1;
  if ( v101 )
    goto LABEL_67;
LABEL_68:
  v99[1] = v102;
  v167 = &v206;
  v209 = v100;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v223,
    (const __m128i *)&v206,
    2,
    1);
  v223[2] = 0;
  v210 = 0;
  *(_QWORD *)&v211 = 0;
  v160.m128i_i64[0] = (__int64)&v211;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v210 = 3;
  v103 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v103, "class", v104, v105, v106, v107, v150, (int)v153, (__int64)v154);
  v212 = 0;
  v161 = &v213;
  v213.m128i_i64[0] = 0;
  v211 = (unsigned __int64)v103;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v212 = 3;
  v108 = v189;
  v109 = v190;
  v110 = (_QWORD *)operator new(0x20u);
  v111 = v110 + 2;
  v173 = v109;
  v112 = v110;
  *v110 = v110 + 2;
  if ( v109 > 0xF )
  {
    v126 = std::string::_M_create();
    *v112 = v126;
    v111 = (_BYTE *)v126;
    v127 = v173;
    v113 = (__m128i)(unsigned __int64)v112;
    v112[2] = v173;
    v114 = v127 + 1;
    if ( v127 )
    {
      v115 = -1;
      if ( !v114 )
        goto LABEL_71;
      goto LABEL_70;
    }
LABEL_86:
    *v111 = *v108;
    v115 = v173;
    goto LABEL_71;
  }
  v113 = (__m128i)(unsigned __int64)v110;
  v114 = v109 + 1;
  if ( !v109 )
    goto LABEL_86;
LABEL_70:
  v170 = v113;
  memcpy(v111, v108, v114);
  v115 = v173;
  v113 = _mm_load_si128(&v170);
LABEL_71:
  v112[1] = v115;
  v213 = v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v224,
    (const __m128i *)&v210,
    2,
    1);
  v224[2] = 0;
  v214 = 0;
  *(_QWORD *)&v215 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v214 = 3;
  v116 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v116,
    "success",
    v117,
    v118,
    v119,
    v120,
    v151,
    (int)v153,
    (__int64)v154);
  v216 = 4;
  v217 = v163;
  v218 = 0;
  v215 = (unsigned __int64)v116;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v225,
    (const __m128i *)&v214,
    2,
    1);
  v225[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v154,
    (__int64)v10,
    5,
    v121,
    v122,
    v123,
    v152,
    (__int64)v153,
    (int)v154,
    (int)p_src,
    (int)v156,
    (int)v157,
    (__int64)v158,
    (int)v159,
    v160.m128i_i32[0],
    v160.m128i_i32[2],
    (int)v161,
    v162,
    (__int64)v164,
    (int)v165,
    (__int64)v166);
  v124 = (void **)&v226;
  do
  {
    v124 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v124 != v10 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v195 != v197 )
    operator delete(v195, v197[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v192 != v194 )
    operator delete(v192, v194[0] + 1LL);
  if ( v189 != v191 )
    operator delete(v189, v191[0] + 1LL);
  if ( src != v188 )
    operator delete(src, v188[0] + 1LL);
  return v154;
}

