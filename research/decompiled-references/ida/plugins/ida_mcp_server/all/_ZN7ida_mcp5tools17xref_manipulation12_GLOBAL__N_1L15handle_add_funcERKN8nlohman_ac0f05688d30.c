__int64 __fastcall ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_add_func(_QWORD *a1, __int64 a2)
{
  std::runtime_error *v2; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  char *v4; // rax
  char *v5; // rbp
  char v6; // al
  __int64 v7; // rax
  int v8; // edx
  char v9; // r13
  __int64 v10; // r12
  unsigned __int8 v11; // r14
  __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rsi
  __int64 *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rax
  _QWORD *v35; // rcx
  _QWORD *v36; // rdx
  __int64 *v37; // rbp
  __int64 v38; // rsi
  __m128i v39; // xmm0
  __int64 *v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // r13
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _BYTE **v54; // r13
  const char *v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r15
  __int64 v66; // r13
  __int64 v67; // r15
  __int64 v68; // r14
  size_t v69; // rdx
  int v70; // eax
  unsigned __int64 v71; // r12
  __int128 v72; // rax
  char v73; // r13
  unsigned int v74; // edx
  unsigned int v75; // edx
  unsigned __int64 v76; // rdi
  char *v77; // rcx
  char *v78; // r8
  unsigned int v79; // edx
  unsigned int v80; // edx
  unsigned int v81; // ecx
  __int64 v82; // r9
  unsigned __int64 v83; // rdi
  char *v84; // rcx
  char *v85; // r8
  unsigned int v86; // edx
  unsigned int v87; // edx
  unsigned int v88; // ecx
  __int64 v89; // r9
  int v90; // [rsp+0h] [rbp-308h]
  int v91; // [rsp+0h] [rbp-308h]
  int v92; // [rsp+0h] [rbp-308h]
  int v93; // [rsp+0h] [rbp-308h]
  int v94; // [rsp+0h] [rbp-308h]
  int v95; // [rsp+0h] [rbp-308h]
  int v96; // [rsp+0h] [rbp-308h]
  int v97; // [rsp+8h] [rbp-300h]
  int v98; // [rsp+8h] [rbp-300h]
  int v99; // [rsp+8h] [rbp-300h]
  int v100; // [rsp+8h] [rbp-300h]
  int v101; // [rsp+8h] [rbp-300h]
  const __m128i *v102; // [rsp+8h] [rbp-300h]
  __int64 v103; // [rsp+10h] [rbp-2F8h]
  __int64 v104; // [rsp+10h] [rbp-2F8h]
  __int64 v105; // [rsp+10h] [rbp-2F8h]
  __int64 v106; // [rsp+10h] [rbp-2F8h]
  __int64 v107; // [rsp+10h] [rbp-2F8h]
  __int64 v108; // [rsp+10h] [rbp-2F8h]
  _BYTE **v109; // [rsp+10h] [rbp-2F8h]
  __int64 v111; // [rsp+18h] [rbp-2F0h]
  int v112; // [rsp+20h] [rbp-2E8h]
  char v113; // [rsp+26h] [rbp-2E2h]
  char v114; // [rsp+27h] [rbp-2E1h]
  _QWORD *v115; // [rsp+58h] [rbp-2B0h]
  __int64 v116; // [rsp+60h] [rbp-2A8h]
  int v117; // [rsp+68h] [rbp-2A0h]
  __m128i v118; // [rsp+70h] [rbp-298h] BYREF
  _QWORD v119[7]; // [rsp+80h] [rbp-288h] BYREF
  __int16 v120; // [rsp+B8h] [rbp-250h]
  __int128 v121; // [rsp+C0h] [rbp-248h]
  __int64 v122; // [rsp+D0h] [rbp-238h]
  __int64 v123; // [rsp+D8h] [rbp-230h]
  int v124; // [rsp+E0h] [rbp-228h]
  __int64 v125; // [rsp+E8h] [rbp-220h]
  int v126; // [rsp+F0h] [rbp-218h]
  __int64 v127; // [rsp+F8h] [rbp-210h]
  int v128; // [rsp+100h] [rbp-208h]
  __int64 v129; // [rsp+108h] [rbp-200h]
  int v130; // [rsp+110h] [rbp-1F8h]
  __int64 v131; // [rsp+118h] [rbp-1F0h]
  void *v132; // [rsp+120h] [rbp-1E8h] BYREF
  __int64 v133; // [rsp+128h] [rbp-1E0h]
  _QWORD v134[2]; // [rsp+130h] [rbp-1D8h] BYREF
  void *v135; // [rsp+140h] [rbp-1C8h] BYREF
  __int64 v136; // [rsp+148h] [rbp-1C0h]
  _QWORD v137[2]; // [rsp+150h] [rbp-1B8h] BYREF
  char v138; // [rsp+160h] [rbp-1A8h] BYREF
  __int128 v139; // [rsp+168h] [rbp-1A0h] BYREF
  char v140; // [rsp+178h] [rbp-190h]
  __int128 v141; // [rsp+180h] [rbp-188h] BYREF
  char v142; // [rsp+190h] [rbp-178h] BYREF
  _OWORD v143[2]; // [rsp+198h] [rbp-170h] BYREF
  __int64 v144; // [rsp+1B8h] [rbp-150h]
  char v145; // [rsp+1C0h] [rbp-148h] BYREF
  __int128 v146; // [rsp+1C8h] [rbp-140h]
  char v147; // [rsp+1D8h] [rbp-130h]
  __int64 v148; // [rsp+1E0h] [rbp-128h]
  __int64 v149; // [rsp+1E8h] [rbp-120h]
  void *v150; // [rsp+1F0h] [rbp-118h] BYREF
  _OWORD v151[2]; // [rsp+1F8h] [rbp-110h] BYREF
  __int64 v152; // [rsp+218h] [rbp-F0h]
  _BYTE *v153[3]; // [rsp+220h] [rbp-E8h] BYREF
  _QWORD v154[3]; // [rsp+238h] [rbp-D0h] BYREF
  _QWORD v155[3]; // [rsp+250h] [rbp-B8h] BYREF
  _QWORD v156[3]; // [rsp+268h] [rbp-A0h] BYREF
  char v157[32]; // [rsp+280h] [rbp-88h] BYREF
  char v158[40]; // [rsp+2A0h] [rbp-68h] BYREF
  unsigned __int64 v159; // [rsp+2C8h] [rbp-40h]

  v159 = __readfsqword(0x28u);
  BYTE8(v151[0]) = 0;
  v5 = (char *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v150 = (char *)v151 + 8;
  v6 = *v5;
  *(_QWORD *)&v151[0] = 0;
  v113 = v6;
  if ( v6 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
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
    v119[2] = v4;
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
  v7 = ida_mcp::parse_ea(v150, *(unsigned __int64 *)&v151[0]);
  v117 = v8;
  v9 = v8;
  v116 = v7;
  if ( v150 != (char *)v151 + 8 )
    operator delete(v150, *((_QWORD *)&v151[0] + 1) + 1LL);
  if ( !v9 )
  {
    v2 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v2, "Invalid address");
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v10 = -1;
  if ( *(_BYTE *)a2 == 1 )
  {
    v65 = *(_QWORD *)(a2 + 8);
    v66 = *(_QWORD *)(v65 + 16);
    if ( v66 )
    {
      v67 = v65 + 8;
      v68 = v67;
      do
      {
        while ( 1 )
        {
          v71 = *(_QWORD *)(v66 + 40);
          if ( !v71 )
            break;
          v69 = 3;
          if ( v71 <= 3 )
            v69 = *(_QWORD *)(v66 + 40);
          v70 = memcmp(*(const void **)(v66 + 32), "end", v69);
          if ( v70 || (v70 = v71 - 3, (__int64)(v71 - 3) <= 0x7FFFFFFF) )
          {
            if ( v70 < 0 )
              break;
          }
          v68 = v66;
          v66 = *(_QWORD *)(v66 + 16);
          if ( !v66 )
            goto LABEL_37;
        }
        v66 = *(_QWORD *)(v66 + 24);
      }
      while ( v66 );
LABEL_37:
      v10 = -1;
      if ( v67 != v68 && std::string::compare(*(void **)(v68 + 32), *(_QWORD *)(v68 + 40), "end") <= 0 )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
        *(_QWORD *)&v72 = ida_mcp::parse_ea(v153[0], (unsigned __int64)v153[1]);
        v73 = BYTE8(v72);
        *(_OWORD *)&v119[2] = v72;
        std::string::_M_dispose();
        if ( v73 )
          v10 = v119[2];
      }
    }
  }
  v119[6] = 0;
  v120 = 0;
  v119[5] = _mm_load_si128((const __m128i *)&xmmword_3E26B0).m128i_i64[1];
  v121 = 0;
  v122 = 0xFFFFFFFFLL;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  memset(&v119[2], 0, 24);
  v11 = add_func_ex();
  if ( v11 )
    get_func_name();
  *(_QWORD *)&v139 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v138 = 3;
  v12 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v12, "address", v13, v14, v15, v16, v90, (int)&v150, v103);
  v139 = (unsigned __int64)v12;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v132, v157, v17, v18, v19, v20, v91, v97, (__int64)v157);
  v140 = 0;
  *(_QWORD *)&v141 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v140 = 3;
  v21 = (_QWORD *)operator new(0x20u);
  v22 = v132;
  v23 = v21 + 2;
  v24 = v133;
  *v21 = v21 + 2;
  if ( v22 == v134 )
  {
    v74 = v24 + 1;
    if ( (unsigned int)(v24 + 1) >= 8 )
    {
      v21[2] = v134[0];
      *(_QWORD *)((char *)v23 + v74 - 8) = *(_QWORD *)((char *)&v134[-1] + v74);
      v76 = (unsigned __int64)(v21 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v77 = (char *)v23 - v76;
      v78 = (char *)((char *)v134 - v77);
      v79 = ((_DWORD)v77 + v74) & 0xFFFFFFF8;
      if ( v79 >= 8 )
      {
        v80 = v79 & 0xFFFFFFF8;
        v81 = 0;
        do
        {
          v82 = v81;
          v81 += 8;
          *(_QWORD *)(v76 + v82) = *(_QWORD *)&v78[v82];
        }
        while ( v81 < v80 );
      }
    }
    else if ( (v74 & 4) != 0 )
    {
      *((_DWORD *)v21 + 4) = v134[0];
      *(_DWORD *)((char *)v23 + v74 - 4) = *(_DWORD *)((char *)&v133 + v74 + 4);
    }
    else if ( (_DWORD)v24 != -1 )
    {
      *((_BYTE *)v21 + 16) = v134[0];
      if ( (v74 & 2) != 0 )
        *(_WORD *)((char *)v23 + v74 - 2) = *(_WORD *)((char *)&v133 + v74 + 6);
    }
  }
  else
  {
    *v21 = v22;
    v21[2] = v134[0];
  }
  v21[1] = v24;
  v132 = v134;
  LOBYTE(v134[0]) = 0;
  v133 = 0;
  v141 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v153,
    (const __m128i *)&v138,
    2,
    1);
  v153[2] = nullptr;
  v142 = 0;
  *(_QWORD *)&v143[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = 3;
  v25 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v25, "end", v26, v27, v28, v29, v92, v98, v104);
  v143[0] = (unsigned __int64)v25;
  if ( v10 == -1 )
  {
    v118 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v37 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v37, "auto", v61, v62, v63, v64, v93, v99, v105);
  }
  else
  {
    qsnprintf();
    std::string::basic_string<std::allocator<char>>((__int64 *)&v135, v158, v30, v31, v32, v33, v93, v99, v105);
    v118 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v34 = (__int64 *)operator new(0x20u);
    v35 = v34 + 2;
    v36 = v135;
    v37 = v34;
    v38 = v136;
    *v34 = (__int64)(v34 + 2);
    if ( v36 == v137 )
    {
      v75 = v38 + 1;
      if ( (unsigned int)(v38 + 1) >= 8 )
      {
        *v35 = v137[0];
        *(_QWORD *)((char *)v35 + v75 - 8) = *(_QWORD *)((char *)&v137[-1] + v75);
        v83 = (unsigned __int64)(v34 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v84 = (char *)v35 - v83;
        v85 = (char *)((char *)v137 - v84);
        v86 = ((_DWORD)v84 + v75) & 0xFFFFFFF8;
        if ( v86 >= 8 )
        {
          v87 = v86 & 0xFFFFFFF8;
          v88 = 0;
          do
          {
            v89 = v88;
            v88 += 8;
            *(_QWORD *)(v83 + v89) = *(_QWORD *)&v85[v89];
          }
          while ( v88 < v87 );
        }
      }
      else if ( (v75 & 4) != 0 )
      {
        *(_DWORD *)v35 = v137[0];
        *(_DWORD *)((char *)v35 + v75 - 4) = *(_DWORD *)((char *)&v136 + v75 + 4);
      }
      else if ( (_DWORD)v38 != -1 )
      {
        *(_BYTE *)v35 = v137[0];
        if ( (v75 & 2) != 0 )
          *(_WORD *)((char *)v35 + v75 - 2) = *(_WORD *)((char *)&v136 + v75 + 6);
      }
    }
    else
    {
      *v34 = (__int64)v36;
      v34[2] = v137[0];
    }
    v34[1] = v38;
    v135 = v137;
    v136 = 0;
    LOBYTE(v137[0]) = 0;
  }
  v118.m128i_i8[0] = 3;
  v118.m128i_i64[1] = (__int64)v37;
  v39 = _mm_load_si128(&v118);
  v144 = 0;
  v143[1] = v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v154,
    (const __m128i *)&v142,
    2,
    1);
  v154[2] = 0;
  v145 = 0;
  *(_QWORD *)&v146 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v145 = 3;
  v40 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v40, "success", v41, v42, v43, v44, v94, v100, v106);
  v147 = 4;
  v148 = v11;
  v149 = 0;
  v146 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v155,
    (const __m128i *)&v145,
    2,
    1);
  v155[2] = 0;
  LOBYTE(v150) = 0;
  *(_QWORD *)&v151[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v150) = 3;
  v45 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v45, "name", v46, v47, v48, v49, v95, v101, v107);
  v151[0] = (unsigned __int64)v45;
  if ( v11 && v119[3] > 1u )
  {
    *(_OWORD *)v119 = 0u;
    v56 = (const char *)v119[2];
    v115 = &v119[1];
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v50 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v50, v56, v57, v58, v59, v60, v96, (int)v102, v108);
  }
  else
  {
    v113 = 0;
    v50 = nullptr;
  }
  v119[1] = v50;
  v152 = 0;
  LOBYTE(v119[0]) = v113;
  v151[1] = _mm_load_si128((const __m128i *)v119);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v156,
    v102,
    2,
    1);
  v156[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v153,
    4,
    v51,
    v52,
    v53,
    v96,
    (__int64)v102,
    v108,
    (int)a1,
    v112,
    (int)&v141,
    (__int64)v143,
    (int)&v139,
    (int)&v142,
    (int)&v138,
    (int)&v132,
    (char)v115,
    v116,
    v117,
    v118.m128i_i64[0]);
  v54 = v109;
  do
  {
    v54 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v54 != v153 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v114 && v135 != v137 )
    operator delete(v135, v137[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v132 != v134 )
    operator delete(v132, v134[0] + 1LL);
  if ( v119[2] )
  {
    v119[3] = 0;
    qfree();
  }
  return v111;
}

