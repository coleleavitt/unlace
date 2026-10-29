_BYTE *__fastcall ida_mcp::tools::control_flow::`anonymous namespace'::get_entry_exit_blocks(_BYTE *a1)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v2; // rax
  std::runtime_error *v3; // rbx
  char *v4; // rbp
  char v5; // al
  char *v6; // rbp
  int *v7; // rax
  int *v8; // r12
  __int64 v9; // r13
  std::runtime_error *v10; // rbx
  __int64 *func; // rax
  __int64 *v12; // rbp
  __int64 v13; // xmm0_8
  __int64 v14; // r12
  _BYTE *v15; // rax
  __m128i v16; // xmm0
  _BYTE *v17; // rax
  __int64 v18; // rax
  char v19; // si
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rbp
  __int64 v28; // rcx
  __int64 v29; // rax
  char v30; // si
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  _QWORD *v38; // rbp
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  char v41; // si
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rbp
  __int64 v47; // rax
  char v48; // si
  __int64 v49; // rdx
  size_t v50; // rax
  unsigned int v51; // ecx
  _QWORD *v52; // rdx
  _QWORD *v53; // rax
  _QWORD *v54; // rdx
  _QWORD *v55; // r13
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  char v58; // si
  __int64 v59; // rdx
  size_t v60; // rax
  unsigned int v61; // r15d
  _QWORD *v62; // rdx
  _QWORD *v63; // rax
  _QWORD *v64; // rdx
  _QWORD *v65; // r13
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  char v68; // si
  __int64 v69; // rdx
  const char *v70; // r15
  __int64 *v71; // r13
  size_t v72; // rax
  _QWORD *v73; // rdx
  unsigned int v74; // ecx
  size_t v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  char v78; // si
  __int64 v79; // rdx
  __int64 v80; // rbx
  __int64 v81; // rax
  char v82; // si
  __int64 v83; // rdx
  char v84; // bl
  __int64 v85; // rax
  __int64 v86; // rcx
  char v87; // si
  __int64 v88; // rdx
  __int64 v89; // rdi
  __int64 v90; // r12
  __int64 v91; // rbp
  _QWORD *v92; // rbx
  unsigned __int64 v94; // rsi
  char *v95; // rdx
  const char *v96; // r15
  unsigned int v97; // ecx
  unsigned int v98; // ecx
  unsigned int v99; // eax
  __int64 v100; // rdx
  _QWORD *v101; // rax
  __int64 v102; // rax
  _QWORD *v103; // rax
  unsigned int v104; // eax
  unsigned int v105; // eax
  unsigned __int64 v106; // rdx
  char *v107; // rax
  char *v108; // r13
  unsigned int v109; // eax
  unsigned int v110; // eax
  unsigned int v111; // ecx
  __int64 v112; // rsi
  unsigned __int64 v113; // rdx
  char *v114; // rax
  char *v115; // r13
  unsigned int v116; // eax
  unsigned int v117; // eax
  unsigned int v118; // ecx
  __int64 v119; // rsi
  unsigned __int64 v120; // rsi
  char *v121; // rdx
  char *v122; // r8
  unsigned int v123; // eax
  unsigned int v124; // eax
  unsigned int v125; // edx
  __int64 v126; // rdi
  unsigned __int64 v127; // rsi
  char *v128; // rdx
  char *v129; // r8
  unsigned int v130; // eax
  unsigned int v131; // eax
  unsigned int v132; // edx
  __int64 v133; // rdi
  unsigned int v134; // eax
  unsigned int v135; // eax
  unsigned __int64 v136; // rsi
  char *v137; // rdx
  char *v138; // rdi
  unsigned int v139; // eax
  unsigned int v140; // eax
  unsigned int v141; // edx
  __int64 v142; // r8
  unsigned __int64 v143; // rsi
  char *v144; // rdx
  char *v145; // r8
  unsigned int v146; // eax
  unsigned int v147; // eax
  unsigned int v148; // edx
  __int64 v149; // rdi
  int v150; // [rsp+0h] [rbp-218h]
  int v151; // [rsp+0h] [rbp-218h]
  int v152; // [rsp+0h] [rbp-218h]
  __m128i v153; // [rsp+8h] [rbp-210h] BYREF
  _QWORD *v154; // [rsp+18h] [rbp-200h]
  _QWORD *v155; // [rsp+20h] [rbp-1F8h]
  __int64 *v156; // [rsp+28h] [rbp-1F0h]
  __int64 *v157; // [rsp+30h] [rbp-1E8h]
  _BYTE *v158; // [rsp+38h] [rbp-1E0h]
  __int64 *v159; // [rsp+40h] [rbp-1D8h]
  char **v160; // [rsp+48h] [rbp-1D0h]
  size_t v161; // [rsp+50h] [rbp-1C8h]
  char v162; // [rsp+5Eh] [rbp-1BAh]
  char v163; // [rsp+5Fh] [rbp-1B9h]
  size_t v164; // [rsp+68h] [rbp-1B0h]
  __int64 v165; // [rsp+70h] [rbp-1A8h] BYREF
  _QWORD *v166; // [rsp+78h] [rbp-1A0h]
  __int64 v167; // [rsp+80h] [rbp-198h] BYREF
  __int64 v168; // [rsp+88h] [rbp-190h] BYREF
  char *v169; // [rsp+90h] [rbp-188h] BYREF
  __int64 v170; // [rsp+98h] [rbp-180h]
  void *v171; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v172; // [rsp+A8h] [rbp-170h]
  _QWORD v173[2]; // [rsp+B0h] [rbp-168h] BYREF
  void *v174; // [rsp+C0h] [rbp-158h] BYREF
  unsigned __int64 v175; // [rsp+C8h] [rbp-150h]
  _QWORD v176[2]; // [rsp+D0h] [rbp-148h] BYREF
  void (__fastcall **v177)(qflow_chart_t *__hidden); // [rsp+E0h] [rbp-138h] BYREF
  char v178; // [rsp+E8h] [rbp-130h]
  _BYTE *v179; // [rsp+F0h] [rbp-128h]
  __int128 v180; // [rsp+F8h] [rbp-120h]
  __m128i v181; // [rsp+108h] [rbp-110h]
  __int64 *v182; // [rsp+118h] [rbp-100h]
  int v183; // [rsp+120h] [rbp-F8h]
  __int64 v184; // [rsp+128h] [rbp-F0h]
  __int128 v185; // [rsp+130h] [rbp-E8h]
  int v186; // [rsp+140h] [rbp-D8h]
  char v187[32]; // [rsp+150h] [rbp-C8h] BYREF
  char v188[32]; // [rsp+170h] [rbp-A8h] BYREF
  char s[24]; // [rsp+190h] [rbp-88h] BYREF
  _BYTE v190[8]; // [rsp+1A8h] [rbp-70h]
  char v191[40]; // [rsp+1B0h] [rbp-68h] BYREF
  unsigned __int64 v192; // [rsp+1D8h] [rbp-40h]

  v158 = a1;
  v192 = __readfsqword(0x28u);
  LOBYTE(v176[0]) = 0;
  v4 = (char *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v174 = v176;
  v157 = (__int64 *)&v174;
  v5 = *v4;
  v175 = 0;
  v163 = v5;
  if ( v5 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v4 )
    {
      case 0:
        v2 = "null";
        break;
      case 1:
        v2 = "object";
        break;
      case 2:
        v2 = (char *)"array";
        break;
      case 3:
        v2 = "string";
        break;
      case 4:
        v2 = "boolean";
        break;
      case 8:
        v2 = "binary";
        break;
      case 9:
        v2 = "discarded";
        break;
      default:
        v2 = "number";
        break;
    }
    v169 = v2;
    v153.m128i_i64[1] = (__int64)&v177;
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
  v6 = (char *)v174;
  if ( v175 > 2 && *(_BYTE *)v174 == 48 && (*((_BYTE *)v174 + 1) & 0xDF) == 0x58 )
    v6 = (char *)v174 + 2;
  v7 = __errno_location();
  *v7 = 0;
  v8 = v7;
  v160 = &v169;
  v9 = __isoc23_strtoull();
  if ( v6 == v169 || *v169 || *v8 == 34 && v9 == -1 )
  {
    if ( v174 != v176 )
      operator delete(v174, v176[0] + 1LL);
    v10 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v10, "Invalid address format");
    __cxa_throw(
      v10,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v174 != v176 )
    operator delete(v174, v176[0] + 1LL);
  func = (__int64 *)get_func();
  v12 = func;
  if ( !func )
  {
    v3 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v3, "No function at address");
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v13 = *func;
  v14 = func[1];
  v178 = 0;
  v153.m128i_i64[0] = v13;
  v177 = off_445398;
  v179 = nullptr;
  v180 = 0;
  v15 = (_BYTE *)qvector_reserve();
  v16 = _mm_loadl_epi64(&v153);
  v179 = v15;
  *(_QWORD *)&v180 = 1;
  *v15 = 0;
  v181 = _mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)v14);
  v182 = v12;
  v183 = 0;
  v184 = 0;
  v186 = 0;
  v153.m128i_i64[1] = (__int64)&v177;
  v185 = 0;
  create_qflow_chart();
  v17 = v158;
  *v158 = 0;
  *((_QWORD *)v17 + 1) = 0;
  v18 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v19 = *(_BYTE *)v18;
  v20 = *(_QWORD *)(v18 + 8);
  *(_BYTE *)v18 = 5;
  LOBYTE(v169) = v19;
  *(_QWORD *)(v18 + 8) = 0;
  v170 = v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  qsnprintf();
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v171,
    v187,
    v21,
    v22,
    v23,
    v24,
    v150,
    v153.m128i_i32[0],
    v153.m128i_i64[1]);
  v167 = 0;
  v156 = &v168;
  v168 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v25 = (_QWORD *)operator new(0x20u);
  v26 = v25 + 2;
  v27 = v25;
  v28 = v172;
  *v25 = v25 + 2;
  if ( v171 == v173 )
  {
    v134 = v28 + 1;
    if ( (unsigned int)(v28 + 1) >= 8 )
    {
      v27[2] = v173[0];
      *(_QWORD *)((char *)v26 + v134 - 8) = *(_QWORD *)((char *)&v173[-1] + v134);
      v136 = (unsigned __int64)(v27 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v137 = (char *)v26 - v136;
      v138 = (char *)((char *)v173 - v137);
      v139 = ((_DWORD)v137 + v134) & 0xFFFFFFF8;
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
    else if ( (v134 & 4) != 0 )
    {
      *((_DWORD *)v27 + 4) = v173[0];
      *(_DWORD *)((char *)v26 + v134 - 4) = *(_DWORD *)((char *)&v172 + v134 + 4);
    }
    else if ( (_DWORD)v28 != -1 )
    {
      *((_BYTE *)v27 + 16) = v173[0];
      if ( (v134 & 2) != 0 )
        *(_WORD *)((char *)v26 + v134 - 2) = *(_WORD *)((char *)&v172 + v134 + 6);
    }
  }
  else
  {
    *v25 = v171;
    v25[2] = v173[0];
  }
  v27[1] = v28;
  v171 = v173;
  v172 = 0;
  LOBYTE(v173[0]) = 0;
  v29 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v30 = *(_BYTE *)v29;
  v31 = *(_QWORD *)(v29 + 8);
  *(_BYTE *)v29 = 3;
  *(_QWORD *)(v29 + 8) = v27;
  LOBYTE(v167) = v30;
  v168 = v31;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v171 != v173 )
    operator delete(v171, v173[0] + 1LL);
  qsnprintf();
  std::string::basic_string<std::allocator<char>>(
    v157,
    v188,
    v32,
    v33,
    v34,
    v35,
    v151,
    v153.m128i_i32[0],
    v153.m128i_i64[1]);
  v169 = nullptr;
  v170 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v36 = (_QWORD *)operator new(0x20u);
  v37 = v36 + 2;
  v38 = v36;
  v39 = v175;
  *v36 = v36 + 2;
  if ( v174 == v176 )
  {
    v135 = v39 + 1;
    if ( (unsigned int)(v39 + 1) >= 8 )
    {
      v38[2] = v176[0];
      *(_QWORD *)((char *)v37 + v135 - 8) = *(_QWORD *)((char *)&v176[-1] + v135);
      v143 = (unsigned __int64)(v38 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v144 = (char *)v37 - v143;
      v145 = (char *)((char *)v176 - v144);
      v146 = ((_DWORD)v144 + v135) & 0xFFFFFFF8;
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
    else if ( (v135 & 4) != 0 )
    {
      *((_DWORD *)v38 + 4) = v176[0];
      *(_DWORD *)((char *)v37 + v135 - 4) = *(_DWORD *)((char *)&v175 + v135 + 4);
    }
    else if ( (_DWORD)v39 != -1 )
    {
      *((_BYTE *)v38 + 16) = v176[0];
      if ( (v135 & 2) != 0 )
        *(_WORD *)((char *)v37 + v135 - 2) = *(_WORD *)((char *)&v175 + v135 + 6);
    }
  }
  else
  {
    *v36 = v174;
    v36[2] = v176[0];
  }
  v38[1] = v39;
  v174 = v176;
  v175 = 0;
  LOBYTE(v176[0]) = 0;
  v40 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v41 = *(_BYTE *)v40;
  v42 = *(_QWORD *)(v40 + 8);
  *(_BYTE *)v40 = 3;
  *(_QWORD *)(v40 + 8) = v38;
  LOBYTE(v169) = v41;
  v170 = v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v174 != v176 )
    operator delete(v174, v176[0] + 1LL);
  LOBYTE(v165) = 0;
  v159 = &v165;
  v166 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v165,
    0,
    0,
    v43,
    v44,
    v45,
    v152,
    v153.m128i_i32[0],
    v153.m128i_i32[2],
    (int)v154,
    (int)v155,
    (int)v156,
    (__int64)v157);
  v162 = v165;
  v154 = v166;
  if ( (int)v185 > 0 )
  {
    v46 = 0;
    do
    {
      while ( (unsigned int)fc_calc_block_type() - 2 > 1 && (unsigned int)fc_calc_block_type() - 4 > 1 )
      {
        if ( (int)v185 <= (int)++v46 )
          goto LABEL_53;
      }
      LODWORD(v155) = fc_calc_block_type();
      v153.m128i_i64[0] = (__int64)&v167;
      v167 = 0;
      v168 = 0;
      v47 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v48 = *(_BYTE *)v47;
      v49 = *(_QWORD *)(v47 + 8);
      *(_BYTE *)v47 = 5;
      LOBYTE(v169) = v48;
      *(_QWORD *)(v47 + 8) = v46;
      v170 = v49;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      qsnprintf();
      v174 = v176;
      v50 = strlen(s);
      v169 = (char *)v50;
      v51 = v50;
      if ( v50 > 0xF )
      {
        v161 = v50;
        v101 = (_QWORD *)std::string::_M_create();
        v174 = v101;
        v51 = v161;
        v176[0] = v169;
      }
      else
      {
        if ( v50 == 1 )
        {
          LOBYTE(v176[0]) = s[0];
LABEL_30:
          v52 = v176;
          goto LABEL_31;
        }
        if ( !v50 )
          goto LABEL_30;
        v101 = v176;
      }
      if ( v51 >= 8 )
      {
        *v101 = *(_QWORD *)s;
        *(_QWORD *)((char *)v101 + v51 - 8) = *(_QWORD *)&v188[v51 + 24];
        v106 = (unsigned __int64)(v101 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v107 = (char *)v101 - v106;
        v108 = (char *)(s - v107);
        v109 = (v51 + (_DWORD)v107) & 0xFFFFFFF8;
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
      else if ( (v51 & 4) != 0 )
      {
        *(_DWORD *)v101 = *(_DWORD *)s;
        *(_DWORD *)((char *)v101 + v51 - 4) = *(_DWORD *)&v188[v51 + 28];
      }
      else if ( v51 )
      {
        *(_BYTE *)v101 = s[0];
        if ( (v51 & 2) != 0 )
          *(_WORD *)((char *)v101 + v51 - 2) = *(_WORD *)&v188[v51 + 30];
      }
      v50 = (size_t)v169;
      v52 = v174;
LABEL_31:
      v175 = v50;
      *((_BYTE *)v52 + v50) = 0;
      v169 = nullptr;
      v170 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v53 = (_QWORD *)operator new(0x20u);
      v54 = v53 + 2;
      v55 = v53;
      v56 = v175;
      *v53 = v53 + 2;
      if ( v174 == v176 )
      {
        v104 = v56 + 1;
        if ( (unsigned int)(v56 + 1) >= 8 )
        {
          v55[2] = v176[0];
          *(_QWORD *)((char *)v54 + v104 - 8) = *(_QWORD *)((char *)&v176[-1] + v104);
          v120 = (unsigned __int64)(v55 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v121 = (char *)v54 - v120;
          v122 = (char *)((char *)v176 - v121);
          v123 = ((_DWORD)v121 + v104) & 0xFFFFFFF8;
          if ( v123 >= 8 )
          {
            v124 = v123 & 0xFFFFFFF8;
            v125 = 0;
            do
            {
              v126 = v125;
              v125 += 8;
              *(_QWORD *)(v120 + v126) = *(_QWORD *)&v122[v126];
            }
            while ( v125 < v124 );
          }
        }
        else if ( (v104 & 4) != 0 )
        {
          *((_DWORD *)v55 + 4) = v176[0];
          *(_DWORD *)((char *)v54 + v104 - 4) = *(_DWORD *)((char *)&v175 + v104 + 4);
        }
        else if ( (_DWORD)v56 != -1 )
        {
          *((_BYTE *)v55 + 16) = v176[0];
          if ( (v104 & 2) != 0 )
            *(_WORD *)((char *)v54 + v104 - 2) = *(_WORD *)((char *)&v175 + v104 + 6);
        }
      }
      else
      {
        *v53 = v174;
        v53[2] = v176[0];
      }
      v55[1] = v56;
      v174 = v176;
      v175 = 0;
      LOBYTE(v176[0]) = 0;
      v57 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v58 = *(_BYTE *)v57;
      v59 = *(_QWORD *)(v57 + 8);
      *(_BYTE *)v57 = 3;
      *(_QWORD *)(v57 + 8) = v55;
      LOBYTE(v169) = v58;
      v170 = v59;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v174 != v176 )
        operator delete(v174, v176[0] + 1LL);
      qsnprintf();
      v174 = v176;
      v60 = strlen(v191);
      v169 = (char *)v60;
      v61 = v60;
      if ( v60 > 0xF )
      {
        v103 = (_QWORD *)std::string::_M_create();
        v174 = v103;
        v176[0] = v169;
LABEL_82:
        if ( v61 >= 8 )
        {
          *v103 = *(_QWORD *)v191;
          *(_QWORD *)((char *)v103 + v61 - 8) = *(_QWORD *)&v190[v61];
          v113 = (unsigned __int64)(v103 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v114 = (char *)v103 - v113;
          v115 = (char *)(v191 - v114);
          v116 = (v61 + (_DWORD)v114) & 0xFFFFFFF8;
          if ( v116 >= 8 )
          {
            v117 = v116 & 0xFFFFFFF8;
            v118 = 0;
            do
            {
              v119 = v118;
              v118 += 8;
              *(_QWORD *)(v113 + v119) = *(_QWORD *)&v115[v119];
            }
            while ( v118 < v117 );
          }
        }
        else if ( (v61 & 4) != 0 )
        {
          *(_DWORD *)v103 = *(_DWORD *)v191;
          *(_DWORD *)((char *)v103 + v61 - 4) = *(_DWORD *)&v190[v61 + 4];
        }
        else if ( v61 )
        {
          *(_BYTE *)v103 = v191[0];
          if ( (v61 & 2) != 0 )
            *(_WORD *)((char *)v103 + v61 - 2) = *(_WORD *)&v190[v61 + 6];
        }
        v60 = (size_t)v169;
        v62 = v174;
        goto LABEL_39;
      }
      if ( v60 == 1 )
      {
        LOBYTE(v176[0]) = v191[0];
      }
      else if ( v60 )
      {
        v103 = v176;
        goto LABEL_82;
      }
      v62 = v176;
LABEL_39:
      v175 = v60;
      *((_BYTE *)v62 + v60) = 0;
      v169 = nullptr;
      v170 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v63 = (_QWORD *)operator new(0x20u);
      v64 = v63 + 2;
      v65 = v63;
      v66 = v175;
      *v63 = v63 + 2;
      if ( v174 == v176 )
      {
        v105 = v66 + 1;
        if ( (unsigned int)(v66 + 1) >= 8 )
        {
          v65[2] = v176[0];
          *(_QWORD *)((char *)v64 + v105 - 8) = *(_QWORD *)((char *)&v176[-1] + v105);
          v127 = (unsigned __int64)(v65 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v128 = (char *)v64 - v127;
          v129 = (char *)((char *)v176 - v128);
          v130 = ((_DWORD)v128 + v105) & 0xFFFFFFF8;
          if ( v130 >= 8 )
          {
            v131 = v130 & 0xFFFFFFF8;
            v132 = 0;
            do
            {
              v133 = v132;
              v132 += 8;
              *(_QWORD *)(v127 + v133) = *(_QWORD *)&v129[v133];
            }
            while ( v132 < v131 );
          }
        }
        else if ( (v105 & 4) != 0 )
        {
          *((_DWORD *)v65 + 4) = v176[0];
          *(_DWORD *)((char *)v64 + v105 - 4) = *(_DWORD *)((char *)&v175 + v105 + 4);
        }
        else if ( (_DWORD)v66 != -1 )
        {
          *((_BYTE *)v65 + 16) = v176[0];
          if ( (v105 & 2) != 0 )
            *(_WORD *)((char *)v64 + v105 - 2) = *(_WORD *)((char *)&v175 + v105 + 6);
        }
      }
      else
      {
        *v63 = v174;
        v63[2] = v176[0];
      }
      v65[1] = v66;
      v174 = v176;
      v175 = 0;
      LOBYTE(v176[0]) = 0;
      v67 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v68 = *(_BYTE *)v67;
      v69 = *(_QWORD *)(v67 + 8);
      *(_BYTE *)v67 = 3;
      *(_QWORD *)(v67 + 8) = v65;
      LOBYTE(v169) = v68;
      v170 = v69;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v174 != v176 )
        operator delete(v174, v176[0] + 1LL);
      switch ( (int)v155 )
      {
        case 0:
          v70 = "normal";
          break;
        case 1:
          v70 = "indirect_jump";
          break;
        case 2:
          v70 = "return";
          break;
        case 3:
          v70 = "conditional_return";
          break;
        case 4:
          v70 = "noreturn";
          break;
        case 5:
          v70 = "external_noreturn";
          break;
        case 6:
          v70 = "external";
          break;
        case 7:
          v70 = "error";
          break;
        default:
          v70 = "unknown";
          break;
      }
      v169 = nullptr;
      v170 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v71 = (__int64 *)operator new(0x20u);
      *v71 = (__int64)(v71 + 2);
      v155 = v71 + 2;
      v72 = strlen(v70);
      v73 = v155;
      v164 = v72;
      v74 = v72;
      if ( v72 > 0xF )
      {
        v155 = (_QWORD *)v72;
        v102 = std::string::_M_create();
        *v71 = v102;
        v73 = (_QWORD *)v102;
        v74 = (unsigned int)v155;
        v71[2] = v164;
      }
      if ( v74 >= 8 )
      {
        *v73 = *(_QWORD *)v70;
        *(_QWORD *)((char *)v73 + v74 - 8) = *(_QWORD *)&v70[v74 - 8];
        v94 = (unsigned __int64)(v73 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v95 = (char *)v73 - v94;
        v96 = (const char *)(v70 - v95);
        v97 = ((_DWORD)v95 + v74) & 0xFFFFFFF8;
        if ( v97 >= 8 )
        {
          v98 = v97 & 0xFFFFFFF8;
          v99 = 0;
          do
          {
            v100 = v99;
            v99 += 8;
            *(_QWORD *)(v94 + v100) = *(_QWORD *)&v96[v100];
          }
          while ( v99 < v98 );
        }
      }
      else if ( (v74 & 4) != 0 )
      {
        *(_DWORD *)v73 = *(_DWORD *)v70;
        *(_DWORD *)((char *)v73 + v74 - 4) = *(_DWORD *)&v70[v74 - 4];
      }
      else if ( v74 )
      {
        *(_BYTE *)v73 = *v70;
        if ( (v74 & 2) != 0 )
          *(_WORD *)((char *)v73 + v74 - 2) = *(_WORD *)&v70[v74 - 2];
      }
      v75 = v164;
      v76 = *v71;
      v71[1] = v164;
      *(_BYTE *)(v76 + v75) = 0;
      v77 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v78 = *(_BYTE *)v77;
      v79 = *(_QWORD *)(v77 + 8);
      *(_BYTE *)v77 = 3;
      *(_QWORD *)(v77 + 8) = v71;
      LOBYTE(v169) = v78;
      v170 = v79;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v165) = v162;
      v166 = v154;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
      ++v46;
      v162 = v165;
      v154 = v166;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( (int)v185 > (int)v46 );
  }
LABEL_53:
  if ( v162 == 1 )
  {
    v80 = v154[5];
  }
  else if ( v162 == 2 )
  {
    v80 = (__int64)(v154[1] - *v154) >> 4;
  }
  else
  {
    v80 = v162 != 0;
  }
  v81 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v82 = *(_BYTE *)v81;
  v83 = *(_QWORD *)(v81 + 8);
  *(_BYTE *)v81 = 6;
  LOBYTE(v169) = v82;
  *(_QWORD *)(v81 + 8) = v80;
  v170 = v83;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v169) = 0;
  LOBYTE(v165) = v162;
  v166 = v154;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v84 = (char)v169;
  v85 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v86 = v170;
  v87 = *(_BYTE *)v85;
  *(_BYTE *)v85 = v84;
  v88 = *(_QWORD *)(v85 + 8);
  *(_QWORD *)(v85 + 8) = v86;
  v170 = v88;
  LOBYTE(v169) = v87;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v89 = v184;
  v177 = off_445398;
  if ( v184 )
  {
    v90 = v185;
    if ( (_QWORD)v185 )
    {
      v91 = 0;
      do
      {
        while ( 1 )
        {
          v92 = (_QWORD *)(v89 + (v91 << 6));
          if ( v92[5] )
          {
            v92[6] = 0;
            qfree();
          }
          if ( !v92[2] )
            break;
          v92[3] = 0;
          ++v91;
          qfree();
          v89 = v184;
          if ( v90 == v91 )
            goto LABEL_63;
        }
        ++v91;
        v89 = v184;
      }
      while ( v90 != v91 );
    }
LABEL_63:
    *(_QWORD *)&v185 = 0;
    qfree();
  }
  if ( v179 )
  {
    *(_QWORD *)&v180 = 0;
    qfree();
  }
  return v158;
}

