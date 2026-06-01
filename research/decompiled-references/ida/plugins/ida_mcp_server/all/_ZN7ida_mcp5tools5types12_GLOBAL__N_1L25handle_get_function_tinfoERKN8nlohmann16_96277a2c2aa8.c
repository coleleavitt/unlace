__m128i *__fastcall ida_mcp::tools::types::`anonymous namespace'::handle_get_function_tinfo(__m128i *a1)
{
  void *v1; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v3; // rax
  char *v4; // r15
  char v5; // al
  char *v6; // r15
  int *v7; // rax
  int *v8; // r14
  std::runtime_error *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  void **v27; // rbx
  size_t v29; // rax
  unsigned int v30; // r14d
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // rcx
  size_t v35; // rsi
  __int64 v36; // rax
  char *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __m128i v42; // xmm0
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  void **v46; // rbx
  char v47; // r15
  unsigned __int64 v48; // rbx
  char *v49; // r14
  const char *v50; // r12
  __int64 *v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int8 v57; // si
  __int64 v58; // rdx
  __int64 *v59; // r14
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int8 v65; // si
  __int64 v66; // rdx
  unsigned int v67; // ecx
  size_t v68; // rax
  unsigned int v69; // r12d
  _BYTE *v70; // rdx
  _QWORD *v71; // rax
  _QWORD *v72; // rdx
  _QWORD *v73; // r12
  char *v74; // rbx
  size_t v75; // rcx
  __int64 v76; // rax
  char v77; // si
  __int64 v78; // rdx
  __int64 v79; // rax
  char v80; // si
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rax
  __int8 v84; // cl
  char v85; // si
  __int64 v86; // rdx
  char *v87; // rax
  char v88; // r13
  __int64 v89; // rax
  __int8 v90; // cl
  char v91; // si
  __int64 v92; // rdx
  char v93; // r13
  __int64 v94; // rax
  __int8 v95; // cl
  char v96; // si
  __int64 v97; // rdx
  __int64 *v98; // r13
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rax
  __int8 v104; // cl
  __int64 v105; // rdx
  char v106; // si
  unsigned int v107; // eax
  __int64 v108; // rax
  char v109; // si
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rax
  char v113; // si
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rax
  char v117; // si
  __int64 v118; // rcx
  __int64 v119; // rdx
  char *v120; // rdi
  __int64 v121; // r12
  __int64 v122; // r15
  char *v123; // rbx
  _QWORD *v124; // rax
  _QWORD *v125; // rax
  unsigned int v126; // edx
  unsigned __int64 v127; // rdi
  char *v128; // rcx
  char *v129; // r8
  unsigned int v130; // edx
  __int64 v131; // r11
  unsigned int v132; // edx
  unsigned int v133; // ecx
  __int64 v134; // r9
  unsigned __int64 v135; // rdx
  char *v136; // rax
  char *v137; // rbx
  unsigned int v138; // r12d
  __int64 v139; // rdi
  unsigned int v140; // r12d
  unsigned int v141; // eax
  __int64 v142; // rcx
  unsigned __int64 v143; // rdx
  char *v144; // rax
  char *v145; // rsi
  unsigned int v146; // r14d
  unsigned int v147; // r14d
  unsigned int v148; // eax
  __int64 v149; // rcx
  unsigned int v150; // edi
  unsigned int v151; // eax
  unsigned __int64 v152; // r8
  char *v153; // rcx
  char *v154; // r9
  unsigned int v155; // edx
  unsigned int v156; // ecx
  __int64 v157; // rdi
  unsigned __int64 v158; // rsi
  char *v159; // rdx
  char *v160; // r8
  unsigned int v161; // eax
  unsigned int v162; // eax
  unsigned int v163; // edx
  __int64 v164; // rdi
  int v165; // [rsp+0h] [rbp-330h]
  int v166; // [rsp+0h] [rbp-330h]
  int v167; // [rsp+0h] [rbp-330h]
  int v168; // [rsp+0h] [rbp-330h]
  int v169; // [rsp+0h] [rbp-330h]
  int v170; // [rsp+8h] [rbp-328h]
  int v171; // [rsp+8h] [rbp-328h]
  __int64 v172; // [rsp+8h] [rbp-328h]
  __int64 v173; // [rsp+8h] [rbp-328h]
  _QWORD *v174; // [rsp+8h] [rbp-328h]
  int v175; // [rsp+8h] [rbp-328h]
  __int64 v176; // [rsp+10h] [rbp-320h]
  __int64 v177; // [rsp+10h] [rbp-320h]
  int v178; // [rsp+10h] [rbp-320h]
  int v179; // [rsp+10h] [rbp-320h]
  __int64 v180; // [rsp+10h] [rbp-320h]
  int v181; // [rsp+18h] [rbp-318h]
  __m128i *v182; // [rsp+30h] [rbp-300h]
  __int64 v183; // [rsp+38h] [rbp-2F8h]
  __m128i v184; // [rsp+40h] [rbp-2F0h] BYREF
  int v185; // [rsp+50h] [rbp-2E0h]
  __int64 v186; // [rsp+58h] [rbp-2D8h] BYREF
  __int64 v187; // [rsp+60h] [rbp-2D0h] BYREF
  int v188; // [rsp+68h] [rbp-2C8h]
  char *v189; // [rsp+70h] [rbp-2C0h]
  __int64 v190; // [rsp+78h] [rbp-2B8h]
  __m128i v191; // [rsp+80h] [rbp-2B0h] BYREF
  char *v192; // [rsp+90h] [rbp-2A0h]
  __int128 v193; // [rsp+98h] [rbp-298h]
  char *v194; // [rsp+B0h] [rbp-280h]
  __int128 v195; // [rsp+B8h] [rbp-278h]
  char *v196; // [rsp+D0h] [rbp-260h]
  __int128 v197; // [rsp+D8h] [rbp-258h]
  __int64 v198; // [rsp+E8h] [rbp-248h]
  _QWORD v199[2]; // [rsp+F0h] [rbp-240h] BYREF
  __int128 v200; // [rsp+100h] [rbp-230h]
  __int64 v201; // [rsp+110h] [rbp-220h]
  __int128 v202; // [rsp+118h] [rbp-218h]
  char v203; // [rsp+128h] [rbp-208h]
  void *v204; // [rsp+130h] [rbp-200h] BYREF
  size_t v205; // [rsp+138h] [rbp-1F8h]
  _QWORD v206[2]; // [rsp+140h] [rbp-1F0h] BYREF
  __m128i v207; // [rsp+150h] [rbp-1E0h] BYREF
  __int64 v208; // [rsp+160h] [rbp-1D0h] BYREF
  char v209; // [rsp+168h] [rbp-1C8h]
  __int128 v210; // [rsp+170h] [rbp-1C0h] BYREF
  char v211; // [rsp+180h] [rbp-1B0h] BYREF
  __int128 v212; // [rsp+188h] [rbp-1A8h] BYREF
  __int64 v213; // [rsp+198h] [rbp-198h]
  __int128 v214; // [rsp+1A0h] [rbp-190h]
  __int64 v215; // [rsp+1B0h] [rbp-180h] BYREF
  __m128i v216; // [rsp+1B8h] [rbp-178h]
  __int64 v217; // [rsp+1C8h] [rbp-168h]
  __int64 v218; // [rsp+1D0h] [rbp-160h]
  __int64 v219; // [rsp+1D8h] [rbp-158h]
  void *v220; // [rsp+1E0h] [rbp-150h] BYREF
  __m128i v221; // [rsp+1E8h] [rbp-148h] BYREF
  __int64 v222; // [rsp+1F8h] [rbp-138h]
  __int128 v223; // [rsp+200h] [rbp-130h]
  void *v224; // [rsp+210h] [rbp-120h] BYREF
  size_t v225; // [rsp+218h] [rbp-118h]
  char *v226; // [rsp+220h] [rbp-110h] BYREF
  _QWORD v227[2]; // [rsp+228h] [rbp-108h] BYREF
  __int64 v228; // [rsp+238h] [rbp-F8h]
  _QWORD v229[2]; // [rsp+240h] [rbp-F0h] BYREF
  __int64 v230; // [rsp+250h] [rbp-E0h]
  _QWORD v231[3]; // [rsp+258h] [rbp-D8h] BYREF
  char v232[32]; // [rsp+270h] [rbp-C0h] BYREF
  char v233[32]; // [rsp+290h] [rbp-A0h] BYREF
  char s[24]; // [rsp+2B0h] [rbp-80h] BYREF
  _BYTE v235[8]; // [rsp+2C8h] [rbp-68h]
  char v236[40]; // [rsp+2D0h] [rbp-60h] BYREF
  unsigned __int64 v237; // [rsp+2F8h] [rbp-38h]

  v182 = a1;
  v237 = __readfsqword(0x28u);
  v221.m128i_i8[8] = 0;
  v4 = (char *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v5 = *v4;
  v220 = &v221.m128i_u64[1];
  v221.m128i_i64[0] = 0;
  HIBYTE(v176) = v5;
  if ( v5 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v4 )
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
    v196 = v3;
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
  v6 = (char *)v220;
  v7 = __errno_location();
  *v7 = 0;
  v8 = v7;
  v183 = __isoc23_strtoull();
  if ( v6 == v196 || *v196 || *v8 == 34 && v183 == -1 )
  {
    if ( v220 != &v221.m128i_u64[1] )
      operator delete(v220, v221.m128i_i64[1] + 1);
    v9 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v9, "Invalid address format");
    __cxa_throw(
      v9,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v220 != &v221.m128i_u64[1] )
    operator delete(v220, v221.m128i_i64[1] + 1);
  if ( !get_func() )
  {
    v1 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v1,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v186 = 0;
  if ( !(unsigned __int8)get_tinfo() )
  {
    v211 = 0;
    v184.m128i_i64[1] = (__int64)&v212;
    *(_QWORD *)&v212 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v211 = 3;
    v10 = operator new(0x20u);
    strcpy((char *)(v10 + 16), "address");
    *(_QWORD *)v10 = v10 + 16;
    *(_QWORD *)(v10 + 8) = 7;
    v212 = (unsigned __int64)v10;
    qsnprintf();
    std::string::basic_string<std::allocator<char>>(v207.m128i_i64, v233, v11, v12, v13, v14, v165, v170, v176);
    LOBYTE(v213) = 0;
    *(_QWORD *)&v214 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v213) = 3;
    v15 = (_QWORD *)operator new(0x20u);
    v16 = (__int64 *)v207.m128i_i64[0];
    v17 = v15 + 2;
    v18 = v207.m128i_i64[1];
    *v15 = v15 + 2;
    if ( v16 == &v208 )
    {
      v126 = v18 + 1;
      if ( (unsigned int)(v18 + 1) >= 8 )
      {
        v15[2] = v208;
        *(_QWORD *)((char *)v17 + v126 - 8) = *(__int64 *)((char *)&v207.m128i_i64[1] + v126);
        v127 = (unsigned __int64)(v15 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v128 = (char *)v17 - v127;
        v129 = (char *)((char *)&v208 - v128);
        v130 = ((_DWORD)v128 + v126) & 0xFFFFFFF8;
        if ( v130 >= 8 )
        {
          v131 = v184.m128i_i64[1];
          v132 = v130 & 0xFFFFFFF8;
          v133 = 0;
          do
          {
            v134 = v133;
            v133 += 8;
            *(_QWORD *)(v127 + v134) = *(_QWORD *)&v129[v134];
          }
          while ( v133 < v132 );
          v184.m128i_i64[1] = v131;
        }
      }
      else if ( (v126 & 4) != 0 )
      {
        *((_DWORD *)v15 + 4) = v208;
        *(_DWORD *)((char *)v17 + v126 - 4) = *(__int32 *)((char *)&v207.m128i_i32[3] + v126);
      }
      else if ( (_DWORD)v18 != -1 )
      {
        *((_BYTE *)v15 + 16) = v208;
        if ( (v126 & 2) != 0 )
          *(_WORD *)((char *)v17 + v126 - 2) = *(__int16 *)((char *)&v207.m128i_i16[7] + v126);
      }
    }
    else
    {
      *v15 = v16;
      v15[2] = v208;
    }
    v15[1] = v18;
    v207.m128i_i64[0] = (__int64)&v208;
    v207.m128i_i64[1] = 0;
    LOBYTE(v208) = 0;
    v214 = (unsigned __int64)v15;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v224,
      (const __m128i *)&v211);
    LOBYTE(v215) = 0;
    v226 = nullptr;
    v216.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v215) = 3;
    v184.m128i_i64[0] = operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)v184.m128i_i64[0],
      "has_tinfo",
      v19,
      v20,
      v21,
      v22,
      v166,
      v171,
      v177);
    v23 = _mm_loadl_epi64(&v184);
    v217 = 4;
    v218 = 0;
    v219 = 0;
    v216 = v23;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v227,
      (const __m128i *)&v215);
    v228 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v220);
    v221.m128i_i64[1] = 0;
    LOBYTE(v222) = 0;
    v223 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v229,
      (const __m128i *)&v220);
    v230 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v182,
      (__int64)&v224,
      3,
      v24,
      v25,
      v26,
      v167,
      v172,
      v178,
      v181,
      (int)&v186,
      (int)&v207,
      (__int64)v182,
      (int)&v211,
      v184.m128i_i32[0],
      v184.m128i_i32[2],
      v185,
      v186,
      v187,
      v188,
      (__int64)v189);
    v27 = (void **)v231;
    do
    {
      v27 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v27 != &v224 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( (__int64 *)v207.m128i_i64[0] != &v208 )
      operator delete((void *)v207.m128i_i64[0], v208 + 1);
    goto LABEL_19;
  }
  v196 = nullptr;
  v198 = 0;
  v199[0] = 0;
  v199[1] = 0;
  v201 = 0;
  v203 = 16;
  v197 = 0;
  v200 = 0;
  v202 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v174 = v199;
    v193 = 0;
    v192 = nullptr;
    print_tinfo();
    LOBYTE(v187) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v187,
      nullptr,
      0,
      2);
    v47 = v187;
    if ( (_QWORD)v197 )
    {
      v48 = 0;
      do
      {
        while ( 1 )
        {
          v195 = 0;
          v194 = nullptr;
          v49 = &v196[80 * v48];
          print_tinfo();
          v190 = 0;
          v50 = *((_QWORD *)v49 + 3) ? *((const char **)v49 + 2) : _qstring<char>::c_str(void)const::nullstr;
          v191 = 0u;
          v184.m128i_i64[1] = (__int64)&v191.m128i_i64[1];
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v51 = (__int64 *)operator new(0x20u);
          std::string::basic_string<std::allocator<char>>(v51, v50, v52, v53, v54, v55, v165, (int)v174, v176);
          LOBYTE(v189) = 0;
          v56 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v57 = *(_BYTE *)v56;
          v58 = *(_QWORD *)(v56 + 8);
          *(_BYTE *)v56 = 3;
          *(_QWORD *)(v56 + 8) = v51;
          v191.m128i_i8[0] = v57;
          v191.m128i_i64[1] = v58;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v184.m128i_i64[0] = (__int64)((_QWORD)v195 ? v194 : _qstring<char>::c_str(void)const::nullstr);
          v191 = 0u;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v59 = (__int64 *)operator new(0x20u);
          std::string::basic_string<std::allocator<char>>(
            v59,
            (const char *)v184.m128i_i64[0],
            v60,
            v61,
            v62,
            v63,
            v169,
            v175,
            v180);
          v64 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v65 = *(_BYTE *)v64;
          v66 = *(_QWORD *)(v64 + 8);
          *(_BYTE *)v64 = 3;
          *(_QWORD *)(v64 + 8) = v59;
          v191.m128i_i8[0] = v65;
          v191.m128i_i64[1] = v66;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          LOBYTE(v187) = v47;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
          v47 = v187;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( !v194 )
            break;
          *(_QWORD *)&v195 = 0;
          ++v48;
          qfree();
          if ( v48 >= (unsigned __int64)v197 )
            goto LABEL_43;
        }
        ++v48;
      }
      while ( v48 < (unsigned __int64)v197 );
    }
LABEL_43:
    v67 = v203 & 0xF0;
    if ( (v203 & 0xF0) == 0xC0 )
      v67 = HIDWORD(v198);
    if ( v67 <= 0x10 )
      getinf();
    qsnprintf();
    qsnprintf();
    v184.m128i_i64[1] = (__int64)&v226;
    v224 = &v226;
    v68 = strlen(v236);
    v194 = (char *)v68;
    v69 = v68;
    if ( v68 > 0xF )
    {
      v125 = (_QWORD *)std::string::_M_create();
      v224 = v125;
      v226 = v194;
    }
    else
    {
      if ( v68 == 1 )
      {
        LOBYTE(v226) = v236[0];
LABEL_50:
        v70 = (_BYTE *)v184.m128i_i64[1];
LABEL_51:
        v225 = v68;
        v70[v68] = 0;
        v194 = nullptr;
        *(_QWORD *)&v195 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v71 = (_QWORD *)operator new(0x20u);
        v72 = v71 + 2;
        v73 = v71;
        v74 = (char *)v184.m128i_i64[1];
        v75 = v225;
        *v71 = v71 + 2;
        if ( v224 == v74 )
        {
          v151 = v75 + 1;
          if ( (unsigned int)(v75 + 1) >= 8 )
          {
            v73[2] = *(_QWORD *)v74;
            *(_QWORD *)((char *)v72 + v151 - 8) = *(_QWORD *)&v74[v151 - 8];
            v158 = (unsigned __int64)(v73 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v159 = (char *)v72 - v158;
            v160 = (char *)(v74 - v159);
            v161 = ((_DWORD)v159 + v151) & 0xFFFFFFF8;
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
              v184.m128i_i64[1] = (__int64)v74;
            }
          }
          else if ( (v151 & 4) != 0 )
          {
            *((_DWORD *)v73 + 4) = *(_DWORD *)v74;
            *(_DWORD *)((char *)v72 + v151 - 4) = *(_DWORD *)&v74[v151 - 4];
          }
          else if ( (_DWORD)v75 != -1 )
          {
            *((_BYTE *)v73 + 16) = *v74;
            if ( (v151 & 2) != 0 )
              *(_WORD *)((char *)v72 + v151 - 2) = *(_WORD *)(v184.m128i_i64[1] + v151 - 2);
          }
        }
        else
        {
          *v71 = v224;
          v71[2] = v226;
        }
        v73[1] = v75;
        LOBYTE(v226) = 0;
        v224 = (void *)v184.m128i_i64[1];
        v225 = 0;
        v191.m128i_i8[0] = 0;
        v191.m128i_i64[1] = 0;
        v76 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v77 = *(_BYTE *)v76;
        v78 = *(_QWORD *)(v76 + 8);
        *(_BYTE *)v76 = 3;
        *(_QWORD *)(v76 + 8) = v73;
        LOBYTE(v194) = v77;
        *(_QWORD *)&v195 = v78;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v224 != (void *)v184.m128i_i64[1] )
          operator delete(v224, (unsigned __int64)(v226 + 1));
        *(_QWORD *)&v195 = 1;
        v79 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v80 = *(_BYTE *)v79;
        v81 = v195;
        *(_BYTE *)v79 = 4;
        v82 = *(_QWORD *)(v79 + 8);
        LOBYTE(v194) = v80;
        *(_QWORD *)(v79 + 8) = v81;
        *(_QWORD *)&v195 = v82;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        *(_QWORD *)&v195 = 1;
        v83 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v84 = v191.m128i_i8[0];
        v85 = *(_BYTE *)v83;
        *(_BYTE *)v83 = 4;
        v86 = *(_QWORD *)(v83 + 8);
        v184.m128i_i8[8] = v84;
        LOBYTE(v194) = v85;
        v184.m128i_i64[0] = v191.m128i_i64[1];
        *(_QWORD *)(v83 + 8) = v195;
        *(_QWORD *)&v195 = v86;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v87 = v192;
        if ( !(_QWORD)v193 )
          v87 = _qstring<char>::c_str(void)const::nullstr;
        v189 = v87;
        LOBYTE(v194) = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
        v88 = (char)v194;
        v89 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v90 = v191.m128i_i8[0];
        v91 = *(_BYTE *)v89;
        *(_BYTE *)v89 = v88;
        v92 = *(_QWORD *)(v89 + 8);
        v184.m128i_i8[8] = v90;
        v184.m128i_i64[0] = v191.m128i_i64[1];
        *(_QWORD *)(v89 + 8) = v195;
        LOBYTE(v194) = v91;
        *(_QWORD *)&v195 = v92;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v194) = 0;
        LOBYTE(v187) = v47;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v93 = (char)v194;
        v94 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v95 = v191.m128i_i8[0];
        v96 = *(_BYTE *)v94;
        *(_BYTE *)v94 = v93;
        v97 = *(_QWORD *)(v94 + 8);
        v184.m128i_i8[8] = v95;
        v184.m128i_i64[0] = v191.m128i_i64[1];
        *(_QWORD *)(v94 + 8) = v195;
        LOBYTE(v194) = v96;
        *(_QWORD *)&v195 = v97;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v194 = nullptr;
        *(_QWORD *)&v195 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v98 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v98, v232, v99, v100, v101, v102, v165, (int)v174, v176);
        v103 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v104 = v191.m128i_i8[0];
        v105 = *(_QWORD *)(v103 + 8);
        *(_QWORD *)(v103 + 8) = v98;
        v106 = *(_BYTE *)v103;
        *(_BYTE *)v103 = 3;
        v184.m128i_i8[8] = v104;
        *(_QWORD *)&v195 = v105;
        v184.m128i_i64[0] = v191.m128i_i64[1];
        LOBYTE(v194) = v106;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v107 = v203 & 0xF0;
        if ( (v203 & 0xF0) == 0xC0 )
          v107 = HIDWORD(v198);
        if ( v107 <= 0x10 )
          v107 = getinf();
        *(_QWORD *)&v195 = ((v107 & 0xFFFFFFF0) == 64) | (unsigned __int8)((v107 & 0xFFFFFFF0) == 208);
        v108 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v109 = *(_BYTE *)v108;
        v110 = v195;
        *(_BYTE *)v108 = 4;
        v111 = *(_QWORD *)(v108 + 8);
        LOBYTE(v194) = v109;
        *(_QWORD *)(v108 + 8) = v110;
        *(_QWORD *)&v195 = v111;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        *(_QWORD *)&v195 = (v198 & 2) != 0;
        v112 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v113 = *(_BYTE *)v112;
        v114 = v195;
        *(_BYTE *)v112 = 4;
        v115 = *(_QWORD *)(v112 + 8);
        LOBYTE(v194) = v113;
        *(_QWORD *)(v112 + 8) = v114;
        *(_QWORD *)&v195 = v115;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        *(_QWORD *)&v195 = (v198 & 4) != 0;
        v116 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v117 = *(_BYTE *)v116;
        v118 = v195;
        *(_BYTE *)v116 = 4;
        v119 = *(_QWORD *)(v116 + 8);
        LOBYTE(v194) = v117;
        *(_QWORD *)(v116 + 8) = v118;
        *(_QWORD *)&v195 = v119;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        *v182 = _mm_load_si128(&v191);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v192 )
        {
          *(_QWORD *)&v193 = 0;
          qfree();
        }
        goto LABEL_63;
      }
      if ( !v68 )
        goto LABEL_50;
      v125 = (_QWORD *)v184.m128i_i64[1];
    }
    if ( v69 >= 8 )
    {
      *v125 = *(_QWORD *)v236;
      *(_QWORD *)((char *)v125 + v69 - 8) = *(_QWORD *)&v235[v69];
      v135 = (unsigned __int64)(v125 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v136 = (char *)v125 - v135;
      v137 = (char *)(v236 - v136);
      v138 = ((_DWORD)v136 + v69) & 0xFFFFFFF8;
      if ( v138 >= 8 )
      {
        v139 = v184.m128i_i64[1];
        v140 = v138 & 0xFFFFFFF8;
        v141 = 0;
        do
        {
          v142 = v141;
          v141 += 8;
          *(_QWORD *)(v135 + v142) = *(_QWORD *)&v137[v142];
        }
        while ( v141 < v140 );
        v184.m128i_i64[1] = v139;
      }
    }
    else if ( (v69 & 4) != 0 )
    {
      *(_DWORD *)v125 = *(_DWORD *)v236;
      *(_DWORD *)((char *)v125 + v69 - 4) = *(_DWORD *)&v235[v69 + 4];
    }
    else if ( v69 )
    {
      *(_BYTE *)v125 = v236[0];
      if ( (v69 & 2) != 0 )
        *(_WORD *)((char *)v125 + v69 - 2) = *(_WORD *)&v235[v69 + 6];
    }
    v68 = (size_t)v194;
    v70 = v224;
    goto LABEL_51;
  }
  v194 = nullptr;
  v195 = 0;
  print_tinfo();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v207);
  v208 = 0;
  qsnprintf();
  v204 = v206;
  v29 = strlen(s);
  v192 = (char *)v29;
  v30 = v29;
  if ( v29 > 0xF )
  {
    v124 = (_QWORD *)std::string::_M_create();
    v204 = v124;
    v206[0] = v192;
    goto LABEL_79;
  }
  if ( v29 != 1 )
  {
    if ( !v29 )
      goto LABEL_24;
    v124 = v206;
LABEL_79:
    if ( v30 >= 8 )
    {
      *v124 = *(_QWORD *)s;
      *(_QWORD *)((char *)v124 + v30 - 8) = *(_QWORD *)&v233[v30 + 24];
      v143 = (unsigned __int64)(v124 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v144 = (char *)v124 - v143;
      v145 = (char *)(s - v144);
      v146 = ((_DWORD)v144 + v30) & 0xFFFFFFF8;
      if ( v146 >= 8 )
      {
        v147 = v146 & 0xFFFFFFF8;
        v148 = 0;
        do
        {
          v149 = v148;
          v148 += 8;
          *(_QWORD *)(v143 + v149) = *(_QWORD *)&v145[v149];
        }
        while ( v148 < v147 );
      }
    }
    else if ( (v30 & 4) != 0 )
    {
      *(_DWORD *)v124 = *(_DWORD *)s;
      *(_DWORD *)((char *)v124 + v30 - 4) = *(_DWORD *)&v233[v30 + 28];
    }
    else if ( v30 )
    {
      *(_BYTE *)v124 = s[0];
      if ( (v30 & 2) != 0 )
        *(_WORD *)((char *)v124 + v30 - 2) = *(_WORD *)&v233[v30 + 30];
    }
    v29 = (size_t)v192;
    v31 = v204;
    goto LABEL_25;
  }
  LOBYTE(v206[0]) = s[0];
LABEL_24:
  v31 = v206;
LABEL_25:
  v205 = v29;
  *((_BYTE *)v31 + v29) = 0;
  v209 = 0;
  *(_QWORD *)&v210 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v209 = 3;
  v32 = (_QWORD *)operator new(0x20u);
  v33 = v204;
  v34 = v32 + 2;
  v35 = v205;
  *v32 = v32 + 2;
  if ( v33 == v206 )
  {
    v150 = v35 + 1;
    if ( (unsigned int)(v35 + 1) >= 8 )
    {
      v32[2] = v206[0];
      *(_QWORD *)((char *)v34 + v150 - 8) = *(_QWORD *)((char *)&v206[-1] + v150);
      v152 = (unsigned __int64)(v32 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v153 = (char *)v34 - v152;
      v154 = (char *)((char *)v206 - v153);
      if ( (((_DWORD)v153 + v150) & 0xFFFFFFF8) >= 8 )
      {
        v155 = ((_DWORD)v153 + v150) & 0xFFFFFFF8;
        v156 = 0;
        do
        {
          v157 = v156;
          v156 += 8;
          *(_QWORD *)(v152 + v157) = *(_QWORD *)&v154[v157];
        }
        while ( v156 < v155 );
      }
    }
    else if ( (v150 & 4) != 0 )
    {
      *((_DWORD *)v32 + 4) = v206[0];
      *(_DWORD *)((char *)v34 + v150 - 4) = *(_DWORD *)((char *)&v205 + v150 + 4);
    }
    else if ( (_DWORD)v35 != -1 )
    {
      *((_BYTE *)v32 + 16) = v206[0];
      if ( (v150 & 2) != 0 )
        *(_WORD *)((char *)v34 + v150 - 2) = *(_WORD *)((char *)&v205 + v150 + 6);
    }
  }
  else
  {
    *v32 = v33;
    v32[2] = v206[0];
  }
  v32[1] = v35;
  v204 = v206;
  v205 = 0;
  LOBYTE(v206[0]) = 0;
  v210 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v224,
    &v207);
  v211 = 0;
  v184.m128i_i64[1] = (__int64)&v212;
  v226 = nullptr;
  *(_QWORD *)&v212 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v211 = 3;
  v36 = operator new(0x20u);
  *(_QWORD *)v36 = v36 + 16;
  strcpy((char *)(v36 + 16), "has_tinfo");
  *(_QWORD *)(v36 + 8) = 9;
  v213 = 4;
  v214 = 1u;
  v212 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v227,
    (const __m128i *)&v211);
  v228 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>(&v215);
  v216.m128i_i64[1] = 0;
  v37 = v194;
  if ( !(_QWORD)v195 )
    v37 = _qstring<char>::c_str(void)const::nullstr;
  v192 = v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const*,char const*,0>();
  v219 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v229,
    (const __m128i *)&v215);
  LOBYTE(v220) = 0;
  v230 = 0;
  v221.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v220) = 3;
  v184.m128i_i64[0] = operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)v184.m128i_i64[0],
    "is_function_type",
    v38,
    v39,
    v40,
    v41,
    v165,
    v170,
    v176);
  v42 = _mm_loadl_epi64(&v184);
  v222 = 4;
  v223 = 0u;
  v221 = v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v231,
    (const __m128i *)&v220);
  v231[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v182,
    (__int64)&v224,
    4,
    v43,
    v44,
    v45,
    v168,
    v173,
    v179,
    (int)&v204,
    (int)&v186,
    (int)&v207,
    (__int64)v182,
    (int)&v210,
    v184.m128i_i32[0],
    v184.m128i_i32[2],
    v185,
    v186,
    v187,
    v188,
    (__int64)v189);
  v46 = (void **)v232;
  do
  {
    v46 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v46 != &v224 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v204 != v206 )
    operator delete(v204, v206[0] + 1LL);
  if ( v194 )
  {
    *(_QWORD *)&v195 = 0;
    qfree();
  }
LABEL_63:
  if ( v201 )
  {
    *(_QWORD *)&v202 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v120 = v196;
  if ( v196 )
  {
    v121 = v197;
    if ( (_QWORD)v197 )
    {
      v122 = 0;
      do
      {
        v123 = &v120[80 * v122];
        clear_tinfo_t();
        if ( *((_QWORD *)v123 + 5) )
        {
          *((_QWORD *)v123 + 6) = 0;
          qfree();
        }
        if ( *((_QWORD *)v123 + 2) )
        {
          *((_QWORD *)v123 + 3) = 0;
          qfree();
        }
        cleanup_argloc();
        v120 = v196;
        ++v122;
      }
      while ( v121 != v122 );
    }
    *(_QWORD *)&v197 = 0;
    qfree();
  }
LABEL_19:
  clear_tinfo_t();
  return v182;
}

