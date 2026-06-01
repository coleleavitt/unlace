__int64 __fastcall ida_mcp::tools::jumptables::`anonymous namespace'::set_switch_info_impl(__int64 a1, char *a2)
{
  void *exception; // r12
  std::runtime_error *v3; // rbx
  char *v4; // rax
  _BYTE *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // bl
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rsi
  __int64 *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rsi
  __int64 *v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rbp
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  void **v45; // rbp
  __int64 v47; // rbx
  __int64 v48; // r14
  __int64 v49; // r13
  __int64 v50; // r15
  size_t v51; // rdx
  int v52; // eax
  unsigned __int64 v53; // rbx
  __int64 v54; // rbx
  __int64 v55; // r13
  __int64 v56; // r15
  size_t v57; // rdx
  int v58; // eax
  unsigned __int64 v59; // rbx
  __int64 v60; // rbx
  __int64 v61; // rcx
  unsigned __int64 v62; // r15
  size_t v63; // rdx
  int v64; // eax
  __int64 v65; // r13
  __int64 v66; // r15
  size_t v67; // rdx
  int v68; // eax
  unsigned __int64 v69; // rbx
  __int64 v70; // rbx
  __int64 v71; // r13
  __int64 v72; // r15
  size_t v73; // rdx
  int v74; // eax
  unsigned __int64 v75; // rbx
  __int64 v76; // rbx
  __int64 v77; // r13
  __int64 v78; // r15
  size_t v79; // rdx
  int v80; // eax
  unsigned __int64 v81; // rbx
  __int64 v82; // rbx
  __int64 v83; // r13
  __int64 v84; // r15
  size_t v85; // rdx
  int v86; // eax
  unsigned __int64 v87; // rbx
  __int64 v88; // rbx
  __int64 v89; // r13
  __int64 v90; // r15
  size_t v91; // rdx
  int v92; // eax
  unsigned __int64 v93; // rbx
  __int64 v94; // rbx
  unsigned __int64 v95; // r13
  size_t v96; // rdx
  int v97; // eax
  __int64 v98; // rbx
  __int64 v99; // r13
  __int64 v100; // r15
  size_t v101; // rdx
  int v102; // eax
  unsigned __int64 v103; // rbx
  __int64 v104; // rbx
  unsigned __int64 v105; // r15
  size_t v106; // rdx
  int v107; // eax
  __int64 v108; // rbx
  __int64 v109; // r13
  size_t v110; // rdx
  int v111; // eax
  unsigned __int64 v112; // r15
  char v113; // al
  __int64 v114; // rax
  __int64 v115; // rbx
  __int64 v116; // r15
  __int64 v117; // r13
  size_t v118; // rdx
  int v119; // eax
  unsigned __int64 v120; // rbp
  __int64 v121; // rbx
  __int64 v122; // rbx
  __int64 v123; // rbx
  __int64 v124; // rbx
  __int64 v125; // rbx
  __int64 v126; // rbx
  __int64 v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rdx
  char v130; // r13
  __int64 v131; // rdx
  char v132; // bl
  __int64 v133; // rax
  __int64 v134; // rdx
  char v135; // r13
  __int64 v136; // rdx
  char v137; // bl
  unsigned int v138; // edx
  unsigned int v139; // edx
  unsigned __int64 v140; // rdi
  char *v141; // rcx
  char *v142; // r8
  unsigned int v143; // edx
  unsigned int v144; // edx
  unsigned int v145; // ecx
  __int64 v146; // r9
  unsigned __int64 v147; // rdi
  char *v148; // rcx
  char *v149; // r8
  unsigned int v150; // edx
  unsigned int v151; // edx
  unsigned int v152; // ecx
  __int64 v153; // r9
  int v154; // [rsp+0h] [rbp-2F8h]
  int v155; // [rsp+0h] [rbp-2F8h]
  int v156; // [rsp+0h] [rbp-2F8h]
  int v157; // [rsp+0h] [rbp-2F8h]
  int v158; // [rsp+0h] [rbp-2F8h]
  int v159; // [rsp+0h] [rbp-2F8h]
  int v160; // [rsp+8h] [rbp-2F0h]
  int v161; // [rsp+8h] [rbp-2F0h]
  int v162; // [rsp+8h] [rbp-2F0h]
  int v163; // [rsp+8h] [rbp-2F0h]
  const __m128i *v164; // [rsp+8h] [rbp-2F0h]
  __int64 v165; // [rsp+10h] [rbp-2E8h]
  __int64 v166; // [rsp+10h] [rbp-2E8h]
  __int64 v167; // [rsp+10h] [rbp-2E8h]
  __int64 v168; // [rsp+10h] [rbp-2E8h]
  _QWORD *v169; // [rsp+10h] [rbp-2E8h]
  __int64 v170; // [rsp+10h] [rbp-2E8h]
  __int64 v171; // [rsp+18h] [rbp-2E0h]
  __int64 v172; // [rsp+18h] [rbp-2E0h]
  __int64 v173; // [rsp+18h] [rbp-2E0h]
  __int64 v174; // [rsp+18h] [rbp-2E0h]
  __int64 v175; // [rsp+18h] [rbp-2E0h]
  __int64 v176; // [rsp+18h] [rbp-2E0h]
  __int64 v177; // [rsp+18h] [rbp-2E0h]
  __int64 v178; // [rsp+20h] [rbp-2D8h]
  __int64 v179; // [rsp+60h] [rbp-298h]
  int v180; // [rsp+68h] [rbp-290h]
  int v181; // [rsp+6Ch] [rbp-28Ch] BYREF
  __int64 v182; // [rsp+70h] [rbp-288h]
  __int64 v183; // [rsp+78h] [rbp-280h]
  __int64 v184; // [rsp+80h] [rbp-278h]
  __int64 v185; // [rsp+88h] [rbp-270h]
  __int64 v186; // [rsp+90h] [rbp-268h]
  __m128i si128; // [rsp+98h] [rbp-260h]
  __int128 v188; // [rsp+A8h] [rbp-250h]
  __int64 v189; // [rsp+B8h] [rbp-240h]
  __int64 v190; // [rsp+C0h] [rbp-238h]
  __int64 v191; // [rsp+C8h] [rbp-230h]
  __int64 v192; // [rsp+D0h] [rbp-228h]
  __int64 v193; // [rsp+D8h] [rbp-220h]
  __int64 v194; // [rsp+E0h] [rbp-218h]
  __int64 v195; // [rsp+E8h] [rbp-210h]
  __int64 v196; // [rsp+F0h] [rbp-208h]
  __int128 v197; // [rsp+F8h] [rbp-200h]
  void *v198; // [rsp+110h] [rbp-1E8h] BYREF
  __int64 v199; // [rsp+118h] [rbp-1E0h]
  _QWORD v200[2]; // [rsp+120h] [rbp-1D8h] BYREF
  void *v201; // [rsp+130h] [rbp-1C8h] BYREF
  __int64 v202; // [rsp+138h] [rbp-1C0h]
  _QWORD v203[2]; // [rsp+140h] [rbp-1B8h] BYREF
  char v204; // [rsp+150h] [rbp-1A8h] BYREF
  __int128 v205; // [rsp+158h] [rbp-1A0h] BYREF
  char v206; // [rsp+168h] [rbp-190h]
  __int128 v207; // [rsp+170h] [rbp-188h] BYREF
  char v208; // [rsp+180h] [rbp-178h] BYREF
  __int128 v209; // [rsp+188h] [rbp-170h] BYREF
  char v210; // [rsp+198h] [rbp-160h]
  __int128 v211; // [rsp+1A0h] [rbp-158h] BYREF
  char v212; // [rsp+1B0h] [rbp-148h] BYREF
  __int128 v213; // [rsp+1B8h] [rbp-140h] BYREF
  char v214; // [rsp+1C8h] [rbp-130h]
  __int64 v215; // [rsp+1D0h] [rbp-128h]
  __int64 v216; // [rsp+1D8h] [rbp-120h]
  void *v217; // [rsp+1E0h] [rbp-118h] BYREF
  __int128 v218; // [rsp+1E8h] [rbp-110h] BYREF
  __int64 v219; // [rsp+1F8h] [rbp-100h]
  __int64 v220; // [rsp+200h] [rbp-F8h]
  __int64 v221; // [rsp+208h] [rbp-F0h]
  void *v222; // [rsp+210h] [rbp-E8h] BYREF
  unsigned __int64 v223; // [rsp+218h] [rbp-E0h]
  __int64 v224; // [rsp+220h] [rbp-D8h] BYREF
  _QWORD v225[3]; // [rsp+228h] [rbp-D0h] BYREF
  _QWORD v226[3]; // [rsp+240h] [rbp-B8h] BYREF
  _QWORD v227[3]; // [rsp+258h] [rbp-A0h] BYREF
  char v228[32]; // [rsp+270h] [rbp-88h] BYREF
  char v229[40]; // [rsp+290h] [rbp-68h] BYREF
  unsigned __int64 v230; // [rsp+2B8h] [rbp-40h]

  v230 = __readfsqword(0x28u);
  v217 = (char *)&v218 + 8;
  v5 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_QWORD *)&v218 = 0;
  BYTE8(v218) = 0;
  if ( *v5 != 3 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *v5 )
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
    v186 = (__int64)v4;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v6 = ida_mcp::parse_ea(v217, v218);
  v183 = v7;
  v8 = v7;
  v182 = v6;
  if ( v217 != (char *)&v218 + 8 )
    operator delete(v217, *((_QWORD *)&v218 + 1) + 1LL);
  if ( !v8 )
  {
    v3 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v3, "Invalid address format");
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v186 = 0x800000;
  v9 = 0x800000;
  v192 = 0xFFFFFFFFLL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2390);
  v188 = -1;
  v189 = 0;
  v190 = 0;
  v191 = 0;
  v193 = 0;
  v194 = 2;
  v195 = -1;
  v196 = 0;
  v197 = 0;
  if ( *a2 != 1 )
    goto LABEL_6;
  v47 = *((_QWORD *)a2 + 1);
  v48 = *(_QWORD *)(v47 + 16);
  if ( !v48 )
    goto LABEL_140;
  v49 = *(_QWORD *)(v47 + 16);
  v171 = v47 + 8;
  v50 = v47 + 8;
  do
  {
    while ( 1 )
    {
      v53 = *(_QWORD *)(v49 + 40);
      if ( !v53 )
        break;
      v51 = 10;
      if ( v53 <= 0xA )
        v51 = *(_QWORD *)(v49 + 40);
      v52 = memcmp(*(const void **)(v49 + 32), "jump_table", v51);
      if ( v52 || (v52 = v53 - 10, (__int64)(v53 - 10) <= 0x7FFFFFFF) )
      {
        if ( v52 < 0 )
          break;
      }
      v50 = v49;
      v49 = *(_QWORD *)(v49 + 16);
      if ( !v49 )
        goto LABEL_29;
    }
    v49 = *(_QWORD *)(v49 + 24);
  }
  while ( v49 );
LABEL_29:
  v54 = v171;
  if ( v171 != v50 && std::string::compare(*(void **)(v50 + 32), *(_QWORD *)(v50 + 40), "jump_table") <= 0 )
  {
    if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
      v184 = ida_mcp::parse_ea(v222, v223);
      v185 = v131;
      v132 = v131;
      if ( v222 != &v224 )
        operator delete(v222, v224 + 1);
      if ( v132 )
        si128.m128i_i64[0] = v184;
    }
    if ( *a2 != 1 )
      goto LABEL_155;
    v121 = *((_QWORD *)a2 + 1);
    v48 = *(_QWORD *)(v121 + 16);
    if ( !v48 )
      goto LABEL_140;
    v54 = v121 + 8;
  }
  v172 = v54;
  v55 = v48;
  v56 = v54;
  do
  {
    while ( 1 )
    {
      v59 = *(_QWORD *)(v55 + 40);
      if ( !v59 )
        break;
      v57 = 6;
      if ( v59 <= 6 )
        v57 = *(_QWORD *)(v55 + 40);
      v58 = memcmp(*(const void **)(v55 + 32), "ncases", v57);
      if ( v58 || (v58 = v59 - 6, (__int64)(v59 - 6) <= 0x7FFFFFFF) )
      {
        if ( v58 < 0 )
          break;
      }
      v56 = v55;
      v55 = *(_QWORD *)(v55 + 16);
      if ( !v55 )
        goto LABEL_40;
    }
    v55 = *(_QWORD *)(v55 + 24);
  }
  while ( v55 );
LABEL_40:
  v60 = v172;
  v61 = v56;
  if ( v172 != v56 )
  {
    v62 = *(_QWORD *)(v56 + 40);
    if ( !v62 )
      goto LABEL_234;
    v63 = 6;
    if ( v62 <= 6 )
      v63 = v62;
    v64 = memcmp(*(const void **)(v61 + 32), "ncases", v63);
    if ( v64 || (v64 = v62 - 6, (__int64)(v62 - 6) <= 0x7FFFFFFF) )
    {
      if ( v64 <= 0 )
      {
LABEL_234:
        if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v180 = 0;
          nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
          WORD2(v186) = 0;
        }
        if ( *a2 != 1 )
          goto LABEL_155;
        v122 = *((_QWORD *)a2 + 1);
        v48 = *(_QWORD *)(v122 + 16);
        v60 = v122 + 8;
        if ( !v48 )
          goto LABEL_140;
      }
    }
  }
  v173 = v60;
  v65 = v48;
  v66 = v60;
  do
  {
    while ( 1 )
    {
      v69 = *(_QWORD *)(v65 + 40);
      if ( !v69 )
        break;
      v67 = 12;
      if ( v69 <= 0xC )
        v67 = *(_QWORD *)(v65 + 40);
      v68 = memcmp(*(const void **)(v65 + 32), "default_jump", v67);
      if ( v68 || (v68 = v69 - 12, (__int64)(v69 - 12) <= 0x7FFFFFFF) )
      {
        if ( v68 < 0 )
          break;
      }
      v66 = v65;
      v65 = *(_QWORD *)(v65 + 16);
      if ( !v65 )
        goto LABEL_56;
    }
    v65 = *(_QWORD *)(v65 + 24);
  }
  while ( v65 );
LABEL_56:
  v70 = v173;
  if ( v173 != v66 && std::string::compare(*(void **)(v66 + 32), *(_QWORD *)(v66 + 40), "default_jump") <= 0 )
  {
    if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
      v128 = ida_mcp::parse_ea(v222, v223);
      v185 = v129;
      v130 = v129;
      v184 = v128;
      std::string::_M_dispose();
      if ( v130 )
        *(_QWORD *)&v188 = v184;
    }
    if ( *a2 != 1 )
      goto LABEL_155;
    v123 = *((_QWORD *)a2 + 1);
    v48 = *(_QWORD *)(v123 + 16);
    if ( !v48 )
      goto LABEL_140;
    v70 = v123 + 8;
  }
  v174 = v70;
  v71 = v48;
  v72 = v70;
  do
  {
    while ( 1 )
    {
      v75 = *(_QWORD *)(v71 + 40);
      if ( !v75 )
        break;
      v73 = 8;
      if ( v75 <= 8 )
        v73 = *(_QWORD *)(v71 + 40);
      v74 = memcmp(*(const void **)(v71 + 32), "start_ea", v73);
      if ( v74 || (v74 = v75 - 8, (__int64)(v75 - 8) <= 0x7FFFFFFF) )
      {
        if ( v74 < 0 )
          break;
      }
      v72 = v71;
      v71 = *(_QWORD *)(v71 + 16);
      if ( !v71 )
        goto LABEL_67;
    }
    v71 = *(_QWORD *)(v71 + 24);
  }
  while ( v71 );
LABEL_67:
  v76 = v174;
  if ( v174 != v72 && std::string::compare(*(void **)(v72 + 32), *(_QWORD *)(v72 + 40), "start_ea") <= 0 )
  {
    if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
      v133 = ida_mcp::parse_ea(v222, v223);
      v185 = v134;
      v135 = v134;
      v184 = v133;
      std::string::_M_dispose();
      if ( v135 )
        *((_QWORD *)&v188 + 1) = v184;
    }
    if ( *a2 != 1 )
      goto LABEL_155;
    v124 = *((_QWORD *)a2 + 1);
    v48 = *(_QWORD *)(v124 + 16);
    if ( !v48 )
      goto LABEL_140;
    v76 = v124 + 8;
  }
  v175 = v76;
  v77 = v48;
  v78 = v76;
  do
  {
    while ( 1 )
    {
      v81 = *(_QWORD *)(v77 + 40);
      if ( !v81 )
        break;
      v79 = 7;
      if ( v81 <= 7 )
        v79 = *(_QWORD *)(v77 + 40);
      v80 = memcmp(*(const void **)(v77 + 32), "lowcase", v79);
      if ( v80 || (v80 = v81 - 7, (__int64)(v81 - 7) <= 0x7FFFFFFF) )
      {
        if ( v80 < 0 )
          break;
      }
      v78 = v77;
      v77 = *(_QWORD *)(v77 + 16);
      if ( !v77 )
        goto LABEL_78;
    }
    v77 = *(_QWORD *)(v77 + 24);
  }
  while ( v77 );
LABEL_78:
  v82 = v175;
  if ( v175 != v78 && std::string::compare(*(void **)(v78 + 32), *(_QWORD *)(v78 + 40), "lowcase") <= 0 )
  {
    if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v184 = 0;
      nlohmann::json_abi_v3_12_0::detail::get_arithmetic_value<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,unsigned long,0>();
      si128.m128i_i64[1] = 0;
    }
    if ( *a2 != 1 )
      goto LABEL_155;
    v125 = *((_QWORD *)a2 + 1);
    v48 = *(_QWORD *)(v125 + 16);
    if ( !v48 )
      goto LABEL_140;
    v82 = v125 + 8;
  }
  v176 = v82;
  v83 = v48;
  v84 = v82;
  do
  {
    while ( 1 )
    {
      v87 = *(_QWORD *)(v83 + 40);
      if ( !v87 )
        break;
      v85 = 12;
      if ( v87 <= 0xC )
        v85 = *(_QWORD *)(v83 + 40);
      v86 = memcmp(*(const void **)(v83 + 32), "element_base", v85);
      if ( v86 || (v86 = v87 - 12, (__int64)(v87 - 12) <= 0x7FFFFFFF) )
      {
        if ( v86 < 0 )
          break;
      }
      v84 = v83;
      v83 = *(_QWORD *)(v83 + 16);
      if ( !v83 )
        goto LABEL_89;
    }
    v83 = *(_QWORD *)(v83 + 24);
  }
  while ( v83 );
LABEL_89:
  v88 = v176;
  if ( v176 != v84 && std::string::compare(*(void **)(v84 + 32), *(_QWORD *)(v84 + 40), "element_base") <= 0 )
  {
    if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
      v184 = ida_mcp::parse_ea(v222, v223);
      v185 = v136;
      v137 = v136;
      if ( v222 != &v224 )
        operator delete(v222, v224 + 1);
      if ( v137 )
      {
        LODWORD(v186) = v186 | 0x200;
        v191 = v184;
      }
    }
    if ( *a2 != 1 )
      goto LABEL_155;
    v126 = *((_QWORD *)a2 + 1);
    v48 = *(_QWORD *)(v126 + 16);
    if ( !v48 )
      goto LABEL_140;
    v88 = v126 + 8;
  }
  v177 = v88;
  v89 = v48;
  v90 = v88;
  do
  {
    while ( 1 )
    {
      v93 = *(_QWORD *)(v89 + 40);
      if ( !v93 )
        break;
      v91 = 6;
      if ( v93 <= 6 )
        v91 = *(_QWORD *)(v89 + 40);
      v92 = memcmp(*(const void **)(v89 + 32), "sparse", v91);
      if ( v92 || (v92 = v93 - 6, (__int64)(v93 - 6) <= 0x7FFFFFFF) )
      {
        if ( v92 < 0 )
          break;
      }
      v90 = v89;
      v89 = *(_QWORD *)(v89 + 16);
      if ( !v89 )
        goto LABEL_100;
    }
    v89 = *(_QWORD *)(v89 + 24);
  }
  while ( v89 );
LABEL_100:
  v94 = v177;
  if ( v177 != v90 )
  {
    v95 = *(_QWORD *)(v90 + 40);
    if ( !v95 )
      goto LABEL_107;
    v96 = 6;
    if ( v95 <= 6 )
      v96 = *(_QWORD *)(v90 + 40);
    v97 = memcmp(*(const void **)(v90 + 32), "sparse", v96);
    if ( v97 || (v97 = v95 - 6, (__int64)(v95 - 6) <= 0x7FFFFFFF) )
    {
      if ( v97 <= 0 )
      {
LABEL_107:
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        BYTE5(v179) = 0;
        nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
        if ( *a2 != 1 )
          goto LABEL_219;
        v98 = *((_QWORD *)a2 + 1);
        v48 = *(_QWORD *)(v98 + 16);
        if ( !v48 )
          goto LABEL_140;
        v94 = v98 + 8;
      }
    }
  }
  v178 = v94;
  v99 = v94;
  v100 = v48;
  do
  {
    while ( 1 )
    {
      v103 = *(_QWORD *)(v100 + 40);
      if ( !v103 )
        break;
      v101 = 6;
      if ( v103 <= 6 )
        v101 = *(_QWORD *)(v100 + 40);
      v102 = memcmp(*(const void **)(v100 + 32), "signed", v101);
      if ( v102 || (v102 = v103 - 6, (__int64)(v103 - 6) <= 0x7FFFFFFF) )
      {
        if ( v102 < 0 )
          break;
      }
      v99 = v100;
      v100 = *(_QWORD *)(v100 + 16);
      if ( !v100 )
        goto LABEL_119;
    }
    v100 = *(_QWORD *)(v100 + 24);
  }
  while ( v100 );
LABEL_119:
  v104 = v178;
  if ( v178 != v99 )
  {
    v105 = *(_QWORD *)(v99 + 40);
    if ( !v105 )
      goto LABEL_126;
    v106 = 6;
    if ( v105 <= 6 )
      v106 = *(_QWORD *)(v99 + 40);
    v107 = memcmp(*(const void **)(v99 + 32), "signed", v106);
    if ( v107 || (v107 = v105 - 6, (__int64)(v105 - 6) <= 0x7FFFFFFF) )
    {
      if ( v107 <= 0 )
      {
LABEL_126:
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        BYTE6(v179) = 0;
        nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
        if ( *a2 == 1 )
        {
          v108 = *((_QWORD *)a2 + 1);
          v48 = *(_QWORD *)(v108 + 16);
          if ( v48 )
          {
            v104 = v108 + 8;
            goto LABEL_129;
          }
LABEL_140:
          v113 = *a2;
          v9 = v186;
          goto LABEL_141;
        }
LABEL_219:
        v9 = v186;
        goto LABEL_6;
      }
    }
  }
LABEL_129:
  v109 = v104;
  do
  {
    while ( 1 )
    {
      v112 = *(_QWORD *)(v48 + 40);
      if ( !v112 )
        break;
      v110 = 8;
      if ( v112 <= 8 )
        v110 = *(_QWORD *)(v48 + 40);
      v111 = memcmp(*(const void **)(v48 + 32), "subtract", v110);
      if ( v111 || (v111 = v112 - 8, (__int64)(v112 - 8) <= 0x7FFFFFFF) )
      {
        if ( v111 < 0 )
          break;
      }
      v109 = v48;
      v48 = *(_QWORD *)(v48 + 16);
      if ( !v48 )
        goto LABEL_138;
    }
    v48 = *(_QWORD *)(v48 + 24);
  }
  while ( v48 );
LABEL_138:
  if ( v104 == v109 || std::string::compare(*(void **)(v109 + 32), *(_QWORD *)(v109 + 40), "subtract") > 0 )
    goto LABEL_140;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  HIBYTE(v179) = 0;
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
  v113 = *a2;
  v9 = v186;
LABEL_141:
  LODWORD(v186) = v9;
  if ( v113 == 1 )
  {
    v114 = *((_QWORD *)a2 + 1);
    v115 = *(_QWORD *)(v114 + 16);
    if ( v115 )
    {
      v116 = v114 + 8;
      v117 = v114 + 8;
      do
      {
        while ( 1 )
        {
          v120 = *(_QWORD *)(v115 + 40);
          if ( !v120 )
            break;
          v118 = 19;
          if ( v120 <= 0x13 )
            v118 = *(_QWORD *)(v115 + 40);
          v119 = memcmp(*(const void **)(v115 + 32), "jtable_element_size", v118);
          if ( v119 || (v119 = v120 - 19, (__int64)(v120 - 19) <= 0x7FFFFFFF) )
          {
            if ( v119 < 0 )
              break;
          }
          v116 = v115;
          v115 = *(_QWORD *)(v115 + 16);
          if ( !v115 )
            goto LABEL_152;
        }
        v115 = *(_QWORD *)(v115 + 24);
      }
      while ( v115 );
LABEL_152:
      if ( v116 != v117
        && std::string::compare(*(void **)(v116 + 32), *(_QWORD *)(v116 + 40), "jtable_element_size") <= 0 )
      {
        if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
        {
          v127 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v181 = 0;
          nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
          LODWORD(v186) = v186 & 0xFFFFFFFB;
          if ( !under_debugger )
            interr();
          ida_mcp::tools::jumptables::`anonymous namespace'::set_switch_info_impl(v127, &v181);
        }
LABEL_155:
        v9 = v186;
      }
    }
  }
LABEL_6:
  LODWORD(v186) = v9 | 4;
  set_switch_info();
  v204 = 0;
  *(_QWORD *)&v205 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v204 = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  strcpy((char *)(v10 + 16), "address");
  *(_QWORD *)(v10 + 8) = 7;
  v205 = (unsigned __int64)v10;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v198, v228, v11, v12, v13, v14, v154, (int)&v217, a1);
  v206 = 0;
  *(_QWORD *)&v207 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v206 = 3;
  v15 = (_QWORD *)operator new(0x20u);
  v16 = v198;
  v17 = v15 + 2;
  v18 = v199;
  *v15 = v15 + 2;
  if ( v16 == v200 )
  {
    v138 = v18 + 1;
    if ( (unsigned int)(v18 + 1) >= 8 )
    {
      v15[2] = v200[0];
      *(_QWORD *)((char *)v17 + v138 - 8) = *(_QWORD *)((char *)&v200[-1] + v138);
      v140 = (unsigned __int64)(v15 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v141 = (char *)v17 - v140;
      v142 = (char *)((char *)v200 - v141);
      v143 = ((_DWORD)v141 + v138) & 0xFFFFFFF8;
      if ( v143 >= 8 )
      {
        v144 = v143 & 0xFFFFFFF8;
        v145 = 0;
        do
        {
          v146 = v145;
          v145 += 8;
          *(_QWORD *)(v140 + v146) = *(_QWORD *)&v142[v146];
        }
        while ( v145 < v144 );
      }
    }
    else if ( (v138 & 4) != 0 )
    {
      *((_DWORD *)v15 + 4) = v200[0];
      *(_DWORD *)((char *)v17 + v138 - 4) = *(_DWORD *)((char *)&v199 + v138 + 4);
    }
    else if ( (_DWORD)v18 != -1 )
    {
      *((_BYTE *)v15 + 16) = v200[0];
      if ( (v138 & 2) != 0 )
        *(_WORD *)((char *)v17 + v138 - 2) = *(_WORD *)((char *)&v199 + v138 + 6);
    }
  }
  else
  {
    *v15 = v16;
    v15[2] = v200[0];
  }
  v15[1] = v18;
  v198 = v200;
  v199 = 0;
  LOBYTE(v200[0]) = 0;
  v207 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v222,
    (const __m128i *)&v204);
  v224 = 0;
  v208 = 0;
  *(_QWORD *)&v209 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v208 = 3;
  v19 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v19, "jump_table", v20, v21, v22, v23, v155, v160, v165);
  v209 = (unsigned __int64)v19;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v201, v229, v24, v25, v26, v27, v156, v161, v166);
  v210 = 0;
  *(_QWORD *)&v211 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v210 = 3;
  v28 = (_QWORD *)operator new(0x20u);
  v29 = v201;
  v30 = v28 + 2;
  v31 = v202;
  *v28 = v28 + 2;
  if ( v29 == v203 )
  {
    v139 = v31 + 1;
    if ( (unsigned int)(v31 + 1) >= 8 )
    {
      v28[2] = v203[0];
      *(_QWORD *)((char *)v30 + v139 - 8) = *(_QWORD *)((char *)&v203[-1] + v139);
      v147 = (unsigned __int64)(v28 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v148 = (char *)v30 - v147;
      v149 = (char *)((char *)v203 - v148);
      v150 = ((_DWORD)v148 + v139) & 0xFFFFFFF8;
      if ( v150 >= 8 )
      {
        v151 = v150 & 0xFFFFFFF8;
        v152 = 0;
        do
        {
          v153 = v152;
          v152 += 8;
          *(_QWORD *)(v147 + v153) = *(_QWORD *)&v149[v153];
        }
        while ( v152 < v151 );
      }
    }
    else if ( (v139 & 4) != 0 )
    {
      *((_DWORD *)v28 + 4) = v203[0];
      *(_DWORD *)((char *)v30 + v139 - 4) = *(_DWORD *)((char *)&v202 + v139 + 4);
    }
    else if ( (_DWORD)v31 != -1 )
    {
      *((_BYTE *)v28 + 16) = v203[0];
      if ( (v139 & 2) != 0 )
        *(_WORD *)((char *)v30 + v139 - 2) = *(_WORD *)((char *)&v202 + v139 + 6);
    }
  }
  else
  {
    *v28 = v29;
    v28[2] = v203[0];
  }
  v28[1] = v31;
  v201 = v203;
  v202 = 0;
  LOBYTE(v203[0]) = 0;
  v211 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v225,
    (const __m128i *)&v208);
  v225[2] = 0;
  v212 = 0;
  *(_QWORD *)&v213 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v212 = 3;
  v32 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v32, "ncases", v33, v34, v35, v36, v157, v162, v167);
  v214 = 6;
  v215 = WORD2(v186);
  v216 = 0;
  v213 = (unsigned __int64)v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v226,
    (const __m128i *)&v212);
  v226[2] = 0;
  LOBYTE(v217) = 0;
  *(_QWORD *)&v218 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v217) = 3;
  v37 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v37, "success", v38, v39, v40, v41, v158, v163, v168);
  v219 = 4;
  v220 = 1;
  v221 = 0;
  v218 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v227,
    v164);
  v227[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v169,
    (__int64)&v222,
    4,
    v42,
    v43,
    v44,
    v159,
    (__int64)v164,
    (int)v169,
    (int)&v205,
    (int)&v207,
    (int)&v209,
    (__int64)&v211,
    (int)&v213,
    (int)&v204,
    (int)&v208,
    (int)&v198,
    (char)&v201,
    v179,
    v180,
    v182);
  v45 = (void **)v228;
  do
  {
    v45 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v45 != &v222 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v201 != v203 )
    operator delete(v201, v203[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v198 != v200 )
    operator delete(v198, v200[0] + 1LL);
  if ( v196 )
  {
    *(_QWORD *)&v197 = 0;
    qfree();
  }
  return v170;
}

