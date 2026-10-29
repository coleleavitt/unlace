__int64 __fastcall ida_mcp::tools::strings::get_string_at(__int64 a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // rbp
  char *v3; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v4; // rbp
  char *v5; // rax
  void *v6; // rbp
  void *v7; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  const char *v9; // rbx
  size_t v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // r14
  size_t v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rbx
  size_t v19; // rdx
  int v20; // eax
  char v21; // al
  char *v22; // rbx
  int *v23; // rax
  int *v24; // r12
  __int64 v25; // r15
  std::runtime_error *v26; // rbx
  char i; // al
  char *v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int8 v34; // si
  __int64 v35; // rax
  int v36; // r12d
  size_t v37; // rax
  unsigned int v38; // r13d
  _QWORD *v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  size_t v42; // rax
  unsigned int v43; // r12d
  _QWORD *v44; // rdx
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  _QWORD *v47; // rcx
  size_t v48; // rsi
  __int64 v49; // rax
  _BYTE *v50; // r13
  unsigned __int64 v51; // r14
  _QWORD *v52; // rax
  _BYTE *v53; // rdi
  __int64 *v54; // rbx
  __m128i si128; // xmm0
  size_t v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int8 v61; // bl
  __int64 v62; // rax
  __int64 v63; // rax
  int *v64; // r13
  unsigned int v66; // eax
  unsigned __int64 v67; // rdx
  char *v68; // rax
  char *v69; // rbx
  unsigned int v70; // r13d
  unsigned int v71; // r13d
  unsigned int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int64 v77; // rsi
  char *v78; // rdx
  char *v79; // r8
  unsigned int v80; // eax
  unsigned int v81; // eax
  unsigned int v82; // edx
  __int64 v83; // rdi
  _QWORD *v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rdx
  char *v88; // rax
  char *v89; // rbx
  unsigned int v90; // r12d
  unsigned int v91; // r12d
  unsigned int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // rax
  const void **v95; // r8
  __int64 v96; // r13
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rdx
  __int64 v99; // rax
  char *v100; // rcx
  const void *v101; // rsi
  signed __int64 v102; // rdx
  char *v103; // rax
  const void *v104; // rax
  __int64 v105; // rdx
  _QWORD *v106; // rax
  unsigned __int64 v107; // rdx
  _BYTE *v108; // rdi
  _QWORD *v109; // r13
  size_t v110; // rcx
  __int64 v111; // rax
  _QWORD *v112; // rax
  __int64 *v113; // rdx
  unsigned __int64 v114; // r13
  __int64 v115; // rax
  __int64 v116; // rdi
  _QWORD *v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rcx
  __int64 v120; // r13
  _QWORD *v121; // rax
  __int64 v122; // rax
  __int64 *v123; // r8
  int *v124; // rdi
  __int64 v125; // rax
  __int64 *v126; // r8
  __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rax
  unsigned int v132; // edi
  unsigned __int64 v133; // r8
  char *v134; // rcx
  char *v135; // r9
  unsigned int v136; // edx
  unsigned int v137; // ecx
  __int64 v138; // rdi
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 max_strlit_length; // [rsp+4C8h] [rbp-350h]
  int v143[4]; // [rsp+4F0h] [rbp-328h] BYREF
  int v144[2]; // [rsp+500h] [rbp-318h]
  char v145[8]; // [rsp+508h] [rbp-310h]
  char *v146; // [rsp+510h] [rbp-308h]
  char *v147; // [rsp+518h] [rbp-300h]
  int v148[2]; // [rsp+520h] [rbp-2F8h]
  void *v149; // [rsp+528h] [rbp-2F0h]
  unsigned __int64 v150; // [rsp+530h] [rbp-2E8h]
  char *v151; // [rsp+538h] [rbp-2E0h] BYREF
  unsigned __int8 v152; // [rsp+540h] [rbp-2D8h]
  __int64 v153; // [rsp+548h] [rbp-2D0h]
  __m128i v154; // [rsp+550h] [rbp-2C8h] BYREF
  char *v155; // [rsp+560h] [rbp-2B8h]
  __int128 v156; // [rsp+568h] [rbp-2B0h]
  char *v157; // [rsp+580h] [rbp-298h]
  void *src; // [rsp+5A0h] [rbp-278h]
  unsigned __int64 v159; // [rsp+5A8h] [rbp-270h]
  _QWORD v160[2]; // [rsp+5B0h] [rbp-268h] BYREF
  void *v161; // [rsp+5C0h] [rbp-258h] BYREF
  size_t v162; // [rsp+5C8h] [rbp-250h]
  _QWORD v163[2]; // [rsp+5D0h] [rbp-248h] BYREF
  char v164; // [rsp+5E0h] [rbp-238h] BYREF
  char v165[16]; // [rsp+5E8h] [rbp-230h]
  char v166; // [rsp+5F8h] [rbp-220h]
  int v167[4]; // [rsp+600h] [rbp-218h]
  char v168; // [rsp+610h] [rbp-208h] BYREF
  int v169[4]; // [rsp+618h] [rbp-200h]
  char v170; // [rsp+628h] [rbp-1F0h]
  int v171[4]; // [rsp+630h] [rbp-1E8h] BYREF
  char v172; // [rsp+640h] [rbp-1D8h] BYREF
  __int128 v173; // [rsp+648h] [rbp-1D0h]
  char v174; // [rsp+658h] [rbp-1C0h]
  unsigned __int64 v175; // [rsp+660h] [rbp-1B8h]
  __int64 v176; // [rsp+668h] [rbp-1B0h]
  char v177; // [rsp+670h] [rbp-1A8h] BYREF
  int v178[4]; // [rsp+678h] [rbp-1A0h] BYREF
  char v179; // [rsp+688h] [rbp-190h]
  __int64 v180; // [rsp+690h] [rbp-188h]
  __int64 v181; // [rsp+698h] [rbp-180h]
  char v182; // [rsp+6A0h] [rbp-178h] BYREF
  int v183[4]; // [rsp+6A8h] [rbp-170h]
  char v184; // [rsp+6B8h] [rbp-160h]
  __int64 v185; // [rsp+6C0h] [rbp-158h]
  __int64 v186; // [rsp+6C8h] [rbp-150h]
  void *v187; // [rsp+6D0h] [rbp-148h] BYREF
  __int128 s2; // [rsp+6D8h] [rbp-140h] BYREF
  unsigned __int8 v189; // [rsp+6E8h] [rbp-130h] BYREF
  _QWORD *v190; // [rsp+6F0h] [rbp-128h]
  __int64 v191; // [rsp+6F8h] [rbp-120h]
  __int64 *v192; // [rsp+700h] [rbp-118h] BYREF
  __int64 v193; // [rsp+708h] [rbp-110h]
  __int64 v194; // [rsp+710h] [rbp-108h] BYREF
  _QWORD v195[3]; // [rsp+718h] [rbp-100h] BYREF
  _QWORD v196[3]; // [rsp+730h] [rbp-E8h] BYREF
  _QWORD v197[3]; // [rsp+748h] [rbp-D0h] BYREF
  _QWORD v198[3]; // [rsp+760h] [rbp-B8h] BYREF
  int v199[4]; // [rsp+778h] [rbp-A0h] BYREF
  __int64 v200; // [rsp+788h] [rbp-90h]
  char s[24]; // [rsp+790h] [rbp-88h] BYREF
  _BYTE v202[8]; // [rsp+7A8h] [rbp-70h]
  char v203[40]; // [rsp+7B0h] [rbp-68h] BYREF
  unsigned __int64 v204; // [rsp+7D8h] [rbp-40h]

  v204 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v187 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v9 = "null";
        break;
      case 1:
        v9 = "object";
        break;
      case 2:
        v9 = "array";
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
    LOBYTE(v194) = 0;
    v193 = 0;
    v192 = &v194;
    v10 = strlen(v9);
    std::string::reserve();
    if ( (unsigned __int64)(v193 - 0x7FFFFFFFFFFFFFCDLL) > 0x31 )
    {
      std::string::_M_append();
      if ( 0x7FFFFFFFFFFFFFFELL - v193 >= v10 )
      {
        std::string::_M_append();
        nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
          exception,
          305);
        std::string::_M_dispose();
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
          (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
      }
      std::__throw_length_error("basic_string::append");
    }
    std::__throw_length_error("basic_string::append");
  }
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_QWORD *)(v11 + 16);
  v13 = v11 + 8;
  if ( v12 )
  {
    v14 = v11 + 8;
    do
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v12 + 40);
        if ( !v17 )
          break;
        v15 = 7;
        if ( v17 <= 7 )
          v15 = *(_QWORD *)(v12 + 40);
        v16 = memcmp(*(const void **)(v12 + 32), (char *)&s2 + 8, v15);
        if ( v16 || (v16 = v17 - 7, (__int64)(v17 - 7) <= 0x7FFFFFFF) )
        {
          if ( v16 < 0 )
            break;
        }
        v14 = v12;
        v12 = *(_QWORD *)(v12 + 16);
        if ( !v12 )
          goto LABEL_12;
      }
      v12 = *(_QWORD *)(v12 + 24);
    }
    while ( v12 );
LABEL_12:
    if ( v13 != v14 )
    {
      v18 = *(_QWORD *)(v14 + 40);
      if ( v18 )
      {
        v19 = 7;
        if ( v18 <= 7 )
          v19 = *(_QWORD *)(v14 + 40);
        v20 = memcmp((char *)&s2 + 8, *(const void **)(v14 + 32), v19);
        if ( v20 || (v20 = 7 - v18, (__int64)(7 - v18) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v20 >= 0 )
            v13 = v14;
        }
      }
      else
      {
        v13 = v14;
      }
    }
  }
  BYTE8(s2) = 0;
  v21 = *(_BYTE *)(v13 + 64);
  v187 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  if ( v21 != 3 )
  {
    v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v13 + 64) )
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
    v157 = v3;
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
  v22 = (char *)v187;
  v23 = __errno_location();
  *v23 = 0;
  v24 = v23;
  v25 = __isoc23_strtoull();
  if ( v22 == v157 || *v157 || *v24 == 34 && v25 == -1 )
  {
    if ( v187 != (char *)&s2 + 8 )
      operator delete(v187, *((_QWORD *)&s2 + 1) + 1LL);
    v26 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v26, "Invalid address format");
    __cxa_throw(
      v26,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v187 != (char *)&s2 + 8 )
    operator delete(v187, *((_QWORD *)&s2 + 1) + 1LL);
  max_strlit_length = get_max_strlit_length();
  if ( max_strlit_length <= 0 )
  {
    v7 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v7,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v155 = nullptr;
  v156 = 0;
  if ( get_strlit_contents() <= 0 )
  {
    v6 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v6,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( (_QWORD)v156 )
  {
    src = v160;
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  src = v160;
  v159 = 0;
  LOBYTE(v160[0]) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  for ( i = xrefblk_t_first_to(); i; i = xrefblk_t_next_to() )
  {
    v36 = v152;
    if ( v152 == 1 )
    {
      v40 = *(_QWORD *)(v153 + 40);
    }
    else
    {
      if ( v152 != 2 )
        goto LABEL_48;
      v40 = (__int64)(*(_QWORD *)(v153 + 8) - *(_QWORD *)v153) >> 4;
    }
    if ( v40 > 0x63 )
      break;
LABEL_48:
    qsnprintf();
    v187 = (char *)&s2 + 8;
    v37 = strlen(s);
    v154.m128i_i64[0] = v37;
    v38 = v37;
    if ( v37 <= 0xF )
    {
      if ( v37 == 1 )
      {
        BYTE8(s2) = s[0];
LABEL_36:
        v28 = (char *)&s2 + 8;
        goto LABEL_37;
      }
      if ( !v37 )
        goto LABEL_36;
      v39 = (_QWORD *)&s2 + 1;
    }
    else
    {
      v39 = (_QWORD *)std::string::_M_create();
      v187 = v39;
      *((_QWORD *)&s2 + 1) = v154.m128i_i64[0];
    }
    if ( v38 >= 8 )
    {
      *v39 = *(_QWORD *)s;
      *(_QWORD *)((char *)v39 + v38 - 8) = *(_QWORD *)&s[v38 - 8];
      v67 = (unsigned __int64)(v39 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v68 = (char *)v39 - v67;
      v69 = (char *)(s - v68);
      v70 = ((_DWORD)v68 + v38) & 0xFFFFFFF8;
      if ( v70 >= 8 )
      {
        v71 = v70 & 0xFFFFFFF8;
        v72 = 0;
        do
        {
          v73 = v72;
          v72 += 8;
          *(_QWORD *)(v67 + v73) = *(_QWORD *)&v69[v73];
        }
        while ( v72 < v71 );
      }
    }
    else if ( (v38 & 4) != 0 )
    {
      *(_DWORD *)v39 = *(_DWORD *)s;
      *(_DWORD *)((char *)v39 + v38 - 4) = *(_DWORD *)&s[v38 - 4];
    }
    else if ( v38 )
    {
      *(_BYTE *)v39 = s[0];
      if ( (v38 & 2) != 0 )
        *(_WORD *)((char *)v39 + v38 - 2) = *(_WORD *)&s[v38 - 2];
    }
    v37 = v154.m128i_i64[0];
    v28 = (char *)v187;
LABEL_37:
    *(_QWORD *)&s2 = v37;
    v28[v37] = 0;
    v154 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v29 = (_QWORD *)operator new(0x20u);
    v30 = v29 + 2;
    v31 = (__int64)v29;
    v32 = s2;
    *v29 = v29 + 2;
    if ( v187 == (char *)&s2 + 8 )
    {
      v66 = v32 + 1;
      if ( (unsigned int)(v32 + 1) >= 8 )
      {
        *v30 = *((_QWORD *)&s2 + 1);
        *(_QWORD *)((char *)v30 + v66 - 8) = *(_QWORD *)((char *)&s2 + v66);
        v77 = (v31 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        v78 = (char *)v30 - v77;
        v79 = (char *)((char *)&s2 + 8 - v78);
        v80 = ((_DWORD)v78 + v66) & 0xFFFFFFF8;
        if ( v80 >= 8 )
        {
          v81 = v80 & 0xFFFFFFF8;
          v82 = 0;
          do
          {
            v83 = v82;
            v82 += 8;
            *(_QWORD *)(v77 + v83) = *(_QWORD *)&v79[v83];
          }
          while ( v82 < v81 );
        }
      }
      else if ( (v66 & 4) != 0 )
      {
        *(_DWORD *)v30 = DWORD2(s2);
        *(_DWORD *)((char *)v30 + v66 - 4) = *(_DWORD *)((char *)&s2 + v66 + 4);
      }
      else if ( (_DWORD)v32 != -1 )
      {
        *(_BYTE *)v30 = BYTE8(s2);
        if ( (v66 & 2) != 0 )
          *(_WORD *)((char *)v30 + v66 - 2) = *(_WORD *)((char *)&s2 + v66 + 6);
      }
    }
    else
    {
      *v29 = v187;
      v29[2] = *((_QWORD *)&s2 + 1);
    }
    *(_QWORD *)(v31 + 8) = v32;
    v187 = (char *)&s2 + 8;
    *(_QWORD *)&s2 = 0;
    BYTE8(s2) = 0;
    if ( !(_BYTE)v36 )
    {
      v152 = 2;
      v33 = operator new(0x18u);
      *(_QWORD *)(v33 + 16) = 0;
      v153 = v33;
      *(_OWORD *)v33 = 0;
LABEL_41:
      v154.m128i_i8[0] = 3;
      v154.m128i_i64[1] = v31;
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      v34 = v154.m128i_i8[0];
      v35 = v154.m128i_i64[1];
      goto LABEL_42;
    }
    if ( (_BYTE)v36 != 2 )
    {
      v4 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      switch ( v36 )
      {
        case 1:
          v5 = "object";
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
      v151 = v5;
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
        v4,
        308);
      std::string::_M_dispose();
      __cxa_throw(
        v4,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    v74 = v153;
    v75 = *(_QWORD *)(v153 + 8);
    if ( v75 == *(_QWORD *)(v153 + 16) )
      goto LABEL_41;
    v154.m128i_i8[0] = 3;
    v76 = v75 + 16;
    v34 = 0;
    v154.m128i_i64[1] = v31;
    *(__m128i *)(v76 - 16) = _mm_load_si128(&v154);
    *(_QWORD *)(v74 + 8) = v76;
    v35 = 0;
LABEL_42:
    v154.m128i_i8[0] = v34;
    v154.m128i_i64[1] = v35;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v187 != (char *)&s2 + 8 )
      operator delete(v187, *((_QWORD *)&s2 + 1) + 1LL);
  }
  v164 = 0;
  *(_QWORD *)v165 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v164 = 3;
  v41 = operator new(0x20u);
  *(_QWORD *)v41 = v41 + 16;
  strcpy((char *)(v41 + 16), "address");
  *(_QWORD *)(v41 + 8) = 7;
  *(_OWORD *)v165 = (unsigned __int64)v41;
  qsnprintf();
  *(_QWORD *)v145 = &v161;
  v161 = v163;
  v42 = strlen(v203);
  v154.m128i_i64[0] = v42;
  v43 = v42;
  if ( v42 > 0xF )
  {
    v84 = (_QWORD *)std::string::_M_create();
    v161 = v84;
    v163[0] = v154.m128i_i64[0];
    goto LABEL_105;
  }
  if ( v42 == 1 )
  {
    LOBYTE(v163[0]) = v203[0];
LABEL_63:
    v44 = v163;
  }
  else
  {
    if ( !v42 )
      goto LABEL_63;
    v84 = v163;
LABEL_105:
    if ( v43 >= 8 )
    {
      *v84 = *(_QWORD *)v203;
      *(_QWORD *)((char *)v84 + v43 - 8) = *(_QWORD *)&v202[v43];
      v87 = (unsigned __int64)(v84 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v88 = (char *)v84 - v87;
      v89 = (char *)(v203 - v88);
      v90 = ((_DWORD)v88 + v43) & 0xFFFFFFF8;
      if ( v90 >= 8 )
      {
        v91 = v90 & 0xFFFFFFF8;
        v92 = 0;
        do
        {
          v93 = v92;
          v92 += 8;
          *(_QWORD *)(v87 + v93) = *(_QWORD *)&v89[v93];
        }
        while ( v92 < v91 );
      }
    }
    else if ( (v43 & 4) != 0 )
    {
      *(_DWORD *)v84 = *(_DWORD *)v203;
      *(_DWORD *)((char *)v84 + v43 - 4) = *(_DWORD *)&v202[v43 + 4];
    }
    else if ( v43 )
    {
      *(_BYTE *)v84 = v203[0];
      if ( (v43 & 2) != 0 )
        *(_WORD *)((char *)v84 + v43 - 2) = *(_WORD *)&v202[v43 + 6];
    }
    v42 = v154.m128i_i64[0];
    v44 = v161;
  }
  v162 = v42;
  *((_BYTE *)v44 + v42) = 0;
  v166 = 0;
  *(_QWORD *)v167 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v166 = 3;
  v45 = (_QWORD *)operator new(0x20u);
  v46 = v161;
  v47 = v45 + 2;
  v48 = v162;
  *v45 = v45 + 2;
  if ( v46 == v163 )
  {
    v132 = v48 + 1;
    if ( (unsigned int)(v48 + 1) >= 8 )
    {
      v45[2] = v163[0];
      *(_QWORD *)((char *)v47 + v132 - 8) = *(_QWORD *)((char *)&v163[-1] + v132);
      v133 = (unsigned __int64)(v45 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v134 = (char *)v47 - v133;
      v135 = (char *)((char *)v163 - v134);
      if ( (((_DWORD)v134 + v132) & 0xFFFFFFF8) >= 8 )
      {
        v136 = ((_DWORD)v134 + v132) & 0xFFFFFFF8;
        v137 = 0;
        do
        {
          v138 = v137;
          v137 += 8;
          *(_QWORD *)(v133 + v138) = *(_QWORD *)&v135[v138];
        }
        while ( v137 < v136 );
      }
    }
    else if ( (v132 & 4) != 0 )
    {
      *((_DWORD *)v45 + 4) = v163[0];
      *(_DWORD *)((char *)v47 + v132 - 4) = *(_DWORD *)((char *)&v162 + v132 + 4);
    }
    else if ( (_DWORD)v48 != -1 )
    {
      *((_BYTE *)v45 + 16) = v163[0];
      if ( (v132 & 2) != 0 )
        *(_WORD *)((char *)v47 + v132 - 2) = *(_WORD *)((char *)&v162 + v132 + 6);
    }
  }
  else
  {
    *v45 = v46;
    v45[2] = v163[0];
  }
  v45[1] = v48;
  v161 = v163;
  v162 = 0;
  LOBYTE(v163[0]) = 0;
  v146 = &v164;
  *(_OWORD *)v167 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v192,
    (const __m128i *)&v164);
  v194 = 0;
  v168 = 0;
  *(_QWORD *)v169 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v168 = 3;
  v49 = operator new(0x20u);
  strcpy((char *)(v49 + 16), "content");
  *(_QWORD *)v49 = v49 + 16;
  *(_QWORD *)(v49 + 8) = 7;
  v170 = 0;
  *(_QWORD *)v171 = 0;
  *(_QWORD *)v144 = v171;
  *(_OWORD *)v169 = (unsigned __int64)v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v170 = 3;
  v50 = src;
  v51 = v159;
  v52 = (_QWORD *)operator new(0x20u);
  v53 = v52 + 2;
  v150 = v51;
  v54 = v52;
  *v52 = v52 + 2;
  if ( v51 > 0xF )
  {
    v85 = std::string::_M_create();
    *v54 = v85;
    v53 = (_BYTE *)v85;
    v86 = v150;
    si128 = (__m128i)(unsigned __int64)v54;
    v54[2] = v150;
    v56 = v86 + 1;
    if ( !v86 )
      goto LABEL_102;
    v57 = -1;
    if ( v56 )
    {
LABEL_68:
      *(__m128i *)v143 = si128;
      memcpy(v53, v50, v56);
      v57 = v150;
      si128 = _mm_load_si128((const __m128i *)v143);
    }
  }
  else
  {
    si128 = (__m128i)(unsigned __int64)v52;
    v56 = v51 + 1;
    if ( v51 )
      goto LABEL_68;
LABEL_102:
    *v53 = *v50;
    v57 = v150;
  }
  v54[1] = v57;
  v147 = &v168;
  *(__m128i *)v171 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v195,
    (const __m128i *)&v168);
  v195[2] = 0;
  v172 = 0;
  *(_QWORD *)&v173 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v172 = 3;
  v58 = operator new(0x20u);
  *(_QWORD *)v58 = v58 + 16;
  strcpy((char *)(v58 + 16), "length");
  *(_QWORD *)(v58 + 8) = 6;
  v174 = 6;
  v175 = v159;
  v176 = 0;
  v173 = (unsigned __int64)v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v196,
    (const __m128i *)&v172);
  v196[2] = 0;
  v177 = 0;
  *(_QWORD *)v178 = 0;
  *(_QWORD *)v143 = v178;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v177 = 3;
  v59 = operator new(0x20u);
  strcpy((char *)(v59 + 16), "max_length");
  *(_QWORD *)v59 = v59 + 16;
  *(_QWORD *)(v59 + 8) = 10;
  v179 = 5;
  v180 = max_strlit_length;
  v181 = 0;
  *(_OWORD *)v178 = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v197,
    (const __m128i *)&v177);
  v197[2] = 0;
  v182 = 0;
  *(_QWORD *)v183 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v182 = 3;
  v60 = operator new(0x20u);
  v61 = v152;
  *(_QWORD *)v60 = v60 + 16;
  strcpy((char *)(v60 + 16), "xref_count");
  *(_QWORD *)(v60 + 8) = 10;
  *(_OWORD *)v183 = (unsigned __int64)v60;
  if ( v61 == 1 )
  {
    v62 = *(_QWORD *)(v153 + 40);
  }
  else if ( v61 == 2 )
  {
    v62 = (__int64)(*(_QWORD *)(v153 + 8) - *(_QWORD *)v153) >> 4;
  }
  else
  {
    v62 = v61 != 0;
  }
  v184 = 6;
  v185 = v62;
  v186 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v198,
    (const __m128i *)&v182);
  v198[2] = 0;
  LOBYTE(v187) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v187) = 3;
  v63 = operator new(0x20u);
  *(_BYTE *)(v63 + 20) = 115;
  *(_QWORD *)v63 = v63 + 16;
  *(_DWORD *)(v63 + 16) = 1717924472;
  *(_QWORD *)(v63 + 8) = 5;
  *(_BYTE *)(v63 + 21) = 0;
  v190 = nullptr;
  v189 = v61;
  s2 = (unsigned __int64)v63;
  switch ( v61 )
  {
    case 1u:
      *(_QWORD *)v148 = v153;
      v122 = operator new(0x30u);
      v123 = *(__int64 **)v148;
      *(_QWORD *)(v122 + 16) = 0;
      v109 = (_QWORD *)v122;
      *(_DWORD *)(v122 + 8) = 0;
      v124 = (int *)v123[2];
      *(_QWORD *)(v122 + 24) = v122 + 8;
      *(_QWORD *)(v122 + 32) = v122 + 8;
      *(_QWORD *)(v122 + 40) = 0;
      if ( v124 )
      {
        v125 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                 v124,
                 v122 + 8);
        v126 = *(__int64 **)v148;
        v127 = v125;
        do
        {
          v128 = v125;
          v125 = *(_QWORD *)(v125 + 16);
        }
        while ( v125 );
        v109[3] = v128;
        v129 = v127;
        do
        {
          v130 = v129;
          v129 = *(_QWORD *)(v129 + 24);
        }
        while ( v129 );
        v131 = v126[5];
        v109[4] = v130;
        v109[2] = v127;
        v109[5] = v131;
      }
      goto LABEL_143;
    case 2u:
      *(_QWORD *)v148 = v153;
      v112 = (_QWORD *)operator new(0x18u);
      v113 = *(__int64 **)v148;
      v149 = v112;
      v114 = *(_QWORD *)(*(_QWORD *)v148 + 8LL) - **(_QWORD **)v148;
      v112[2] = 0;
      *(_OWORD *)v112 = 0;
      if ( v114 )
      {
        v115 = operator new(v114);
        v113 = *(__int64 **)v148;
        v116 = v115;
      }
      else
      {
        v116 = 0;
      }
      v117 = v149;
      *(__m128i *)v149 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v116, (__m128i)(unsigned __int64)v116);
      v117[2] = v116 + v114;
      v118 = v113[1];
      v119 = *v113;
      v151 = (char *)v116;
      *(_QWORD *)v148 = v118;
      v154 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v116, (__m128i)(unsigned __int64)&v151);
      if ( v118 != v119 )
      {
        v120 = v119;
        do
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v120 += 16;
          v116 = (__int64)(v151 + 16);
          v151 += 16;
        }
        while ( *(_QWORD *)v148 != v120 );
      }
      v121 = v149;
      *((_QWORD *)v149 + 1) = v116;
      v190 = v121;
      goto LABEL_74;
    case 3u:
      v105 = *(_QWORD *)(v153 + 8);
      v149 = *(void **)v153;
      *(_QWORD *)v148 = v105;
      v106 = (_QWORD *)operator new(0x20u);
      v107 = *(_QWORD *)v148;
      v108 = v106 + 2;
      v109 = v106;
      *v106 = v106 + 2;
      v154.m128i_i64[0] = v107;
      if ( v107 <= 0xF )
      {
        v110 = v107 + 1;
        if ( v107 )
        {
LABEL_129:
          memcpy(v108, v149, v110);
          v111 = v154.m128i_i64[0];
          goto LABEL_130;
        }
        goto LABEL_157;
      }
      v139 = std::string::_M_create();
      *v109 = v139;
      v108 = (_BYTE *)v139;
      v140 = v154.m128i_i64[0];
      v109[2] = v154.m128i_i64[0];
      v110 = v140 + 1;
      if ( !v140 )
      {
LABEL_157:
        *v108 = *(_BYTE *)v149;
        v111 = v154.m128i_i64[0];
        goto LABEL_130;
      }
      v111 = -1;
      if ( v110 )
        goto LABEL_129;
LABEL_130:
      v109[1] = v111;
LABEL_143:
      v190 = v109;
LABEL_74:
      v64 = v199;
      v191 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v199,
        (const __m128i *)&v187);
      v200 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      do
      {
        v64 -= 6;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      while ( v64 != (int *)&v189 );
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
      if ( v161 != v163 )
        operator delete(v161, v163[0] + 1LL);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( src != v160 )
        operator delete(src, v160[0] + 1LL);
      if ( v155 )
      {
        *(_QWORD *)&v156 = 0;
        qfree();
      }
      return a1;
    case 4u:
      LOBYTE(v190) = v153;
      goto LABEL_74;
    case 5u:
    case 6u:
      v190 = (_QWORD *)v153;
      goto LABEL_74;
    case 7u:
      v190 = (_QWORD *)v153;
      goto LABEL_74;
    case 8u:
      *(_QWORD *)v148 = v153;
      v94 = operator new(0x28u);
      v95 = *(const void ***)v148;
      v96 = v94;
      v97 = *(_QWORD *)(*(_QWORD *)v148 + 8LL) - **(_QWORD **)v148;
      *(_QWORD *)(v96 + 16) = 0;
      v98 = v97;
      *(_OWORD *)v96 = 0;
      if ( v97 )
      {
        v149 = v95;
        *(_QWORD *)v148 = v97;
        v99 = operator new(v97);
        v98 = *(_QWORD *)v148;
        v95 = (const void **)v149;
        v100 = (char *)v99;
      }
      else
      {
        v100 = nullptr;
      }
      *(_QWORD *)(v96 + 16) = &v100[v98];
      *(__m128i *)v96 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v100, (__m128i)(unsigned __int64)v100);
      v101 = *v95;
      v102 = (_BYTE *)v95[1] - (_BYTE *)*v95;
      if ( v102 > 0 )
      {
        v149 = v95;
        *(_QWORD *)v148 = v102;
        v103 = (char *)memcpy(v100, v101, v102);
        v95 = (const void **)v149;
        v100 = &v103[*(_QWORD *)v148];
      }
      v104 = v95[3];
      *(_QWORD *)(v96 + 8) = v100;
      *(_QWORD *)(v96 + 24) = v104;
      *(_BYTE *)(v96 + 32) = *((_BYTE *)v95 + 32);
      v190 = (_QWORD *)v96;
      goto LABEL_74;
    default:
      goto LABEL_74;
  }
}

