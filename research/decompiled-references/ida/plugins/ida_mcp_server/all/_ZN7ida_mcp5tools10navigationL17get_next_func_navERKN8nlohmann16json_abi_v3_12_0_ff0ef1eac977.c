_QWORD *__fastcall ida_mcp::tools::navigation::get_next_func_nav(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // bl
  _QWORD *next_func; // rbp
  __int64 *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rsi
  __int64 *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  _QWORD *v30; // rax
  unsigned __int64 v31; // rdx
  _BYTE *v32; // rdi
  __int64 *v33; // r12
  __m128i v34; // xmm0
  size_t v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128i v41; // xmm0
  char *v42; // rbp
  __int64 *v44; // rbp
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 *v49; // rbp
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  char *v57; // rbp
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // edx
  unsigned int v61; // edx
  unsigned __int64 v62; // rdi
  char *v63; // rcx
  char *v64; // r8
  unsigned int v65; // edx
  unsigned int v66; // edx
  unsigned int v67; // ecx
  __int64 v68; // r9
  unsigned __int64 v69; // rdi
  char *v70; // rcx
  char *v71; // r8
  unsigned int v72; // edx
  unsigned int v73; // edx
  unsigned int v74; // ecx
  __int64 v75; // r9
  int v76; // [rsp+0h] [rbp-308h]
  int v77; // [rsp+0h] [rbp-308h]
  int v78; // [rsp+0h] [rbp-308h]
  int v79; // [rsp+0h] [rbp-308h]
  int v80; // [rsp+0h] [rbp-308h]
  int v81; // [rsp+0h] [rbp-308h]
  int v82; // [rsp+8h] [rbp-300h]
  int v83; // [rsp+8h] [rbp-300h]
  __int64 v84; // [rsp+8h] [rbp-300h]
  _QWORD *v85; // [rsp+8h] [rbp-300h]
  int v86; // [rsp+8h] [rbp-300h]
  _QWORD *v87; // [rsp+8h] [rbp-300h]
  int v88; // [rsp+10h] [rbp-2F8h]
  __int64 v89; // [rsp+10h] [rbp-2F8h]
  int v90; // [rsp+10h] [rbp-2F8h]
  __int64 v91; // [rsp+10h] [rbp-2F8h]
  int v92; // [rsp+10h] [rbp-2F8h]
  __int64 v93; // [rsp+18h] [rbp-2F0h]
  int v94; // [rsp+18h] [rbp-2F0h]
  __int64 v95; // [rsp+20h] [rbp-2E8h]
  int v96; // [rsp+20h] [rbp-2E8h]
  char v97; // [rsp+28h] [rbp-2E0h]
  int v98; // [rsp+28h] [rbp-2E0h]
  int v99; // [rsp+30h] [rbp-2D8h]
  __int64 v100; // [rsp+30h] [rbp-2D8h]
  int v101; // [rsp+38h] [rbp-2D0h]
  int v102; // [rsp+38h] [rbp-2D0h]
  __int64 v103; // [rsp+40h] [rbp-2C8h]
  int v104; // [rsp+40h] [rbp-2C8h]
  int v105; // [rsp+48h] [rbp-2C0h]
  __m128i v106; // [rsp+50h] [rbp-2B8h] BYREF
  _QWORD *v107; // [rsp+60h] [rbp-2A8h]
  __int64 *v108; // [rsp+68h] [rbp-2A0h]
  void *src; // [rsp+70h] [rbp-298h]
  char *v110; // [rsp+78h] [rbp-290h]
  void **v111; // [rsp+80h] [rbp-288h]
  void **v112; // [rsp+88h] [rbp-280h]
  __int64 v113; // [rsp+90h] [rbp-278h]
  __int64 v114; // [rsp+98h] [rbp-270h]
  __m128i v115; // [rsp+A0h] [rbp-268h] BYREF
  char *s; // [rsp+B0h] [rbp-258h]
  __int128 v117; // [rsp+B8h] [rbp-250h]
  void *v118; // [rsp+D0h] [rbp-238h] BYREF
  __int64 v119; // [rsp+D8h] [rbp-230h]
  _QWORD v120[2]; // [rsp+E0h] [rbp-228h] BYREF
  void *v121; // [rsp+F0h] [rbp-218h] BYREF
  __int64 v122; // [rsp+F8h] [rbp-210h]
  _QWORD v123[2]; // [rsp+100h] [rbp-208h] BYREF
  void *v124; // [rsp+110h] [rbp-1F8h] BYREF
  __int64 v125; // [rsp+118h] [rbp-1F0h]
  _QWORD v126[2]; // [rsp+120h] [rbp-1E8h] BYREF
  char v127; // [rsp+130h] [rbp-1D8h] BYREF
  __int128 v128; // [rsp+138h] [rbp-1D0h] BYREF
  char v129; // [rsp+148h] [rbp-1C0h]
  __int128 v130; // [rsp+150h] [rbp-1B8h] BYREF
  char v131; // [rsp+160h] [rbp-1A8h] BYREF
  __int128 v132; // [rsp+168h] [rbp-1A0h] BYREF
  char v133; // [rsp+178h] [rbp-190h]
  __m128i v134; // [rsp+180h] [rbp-188h] BYREF
  char v135; // [rsp+190h] [rbp-178h] BYREF
  __int128 v136; // [rsp+198h] [rbp-170h]
  char v137; // [rsp+1A8h] [rbp-160h]
  __int64 v138; // [rsp+1B0h] [rbp-158h]
  __int64 v139; // [rsp+1B8h] [rbp-150h]
  __int64 v140; // [rsp+1C0h] [rbp-148h] BYREF
  __int128 v141; // [rsp+1C8h] [rbp-140h] BYREF
  char v142; // [rsp+1D8h] [rbp-130h]
  __int128 v143; // [rsp+1E0h] [rbp-128h] BYREF
  char v144; // [rsp+1F0h] [rbp-118h] BYREF
  _QWORD v145[5]; // [rsp+1F8h] [rbp-110h] BYREF
  __m128i v146; // [rsp+220h] [rbp-E8h] BYREF
  __int64 v147; // [rsp+230h] [rbp-D8h] BYREF
  __int64 v148; // [rsp+238h] [rbp-D0h] BYREF
  __int128 v149; // [rsp+240h] [rbp-C8h]
  _QWORD v150[2]; // [rsp+250h] [rbp-B8h] BYREF
  __int64 v151; // [rsp+260h] [rbp-A8h]
  _QWORD v152[2]; // [rsp+268h] [rbp-A0h] BYREF
  __int64 v153; // [rsp+278h] [rbp-90h]
  _QWORD v154[2]; // [rsp+280h] [rbp-88h] BYREF
  __int64 v155; // [rsp+290h] [rbp-78h]
  char v156; // [rsp+298h] [rbp-70h] BYREF
  char v157[40]; // [rsp+2A0h] [rbp-68h] BYREF
  unsigned __int64 v158; // [rsp+2C8h] [rbp-40h]

  v158 = __readfsqword(0x28u);
  v146.m128i_i64[0] = (__int64)&v147;
  v146.m128i_i64[1] = 0;
  LOBYTE(v147) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
                   a2,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   v76,
                   a1,
                   v88,
                   v93,
                   v95,
                   v97,
                   v99,
                   v101,
                   v103) != 3 )
    JUMPOUT(0x7952D);
  std::string::_M_assign();
  v6 = ida_mcp::parse_ea(v146.m128i_i64[0], v146.m128i_u64[1]);
  v114 = v7;
  v8 = v7;
  v113 = v6;
  if ( (__int64 *)v146.m128i_i64[0] != &v147 )
    operator delete((void *)v146.m128i_i64[0], v147 + 1);
  if ( !v8 )
    JUMPOUT(0x7906F);
  next_func = (_QWORD *)get_next_func();
  if ( !next_func )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[16],char [16],0>(&v140);
    *((_QWORD *)&v141 + 1) = 0;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    *((_QWORD *)&v143 + 1) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v150,
      (const __m128i *)&v140);
    v151 = 0;
    v144 = 0;
    v145[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v144 = 3;
    v44 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v44, "next_function", v45, v46, v47, v48, v77, v82, (__int64)v145);
    memset(&v145[2], 0, 24);
    *(_OWORD *)v145 = (unsigned __int64)v44;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v152,
      (const __m128i *)&v144);
    v153 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
    v147 = 0;
    LOBYTE(v148) = 0;
    *(_QWORD *)&v149 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v148) = 3;
    v49 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v49, "No next function found", v50, v51, v52, v53, v80, v86, v91);
    v149 = (unsigned __int64)v49;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v154,
      &v146);
    v155 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v87,
      (__int64)v150,
      3,
      v54,
      v55,
      v56,
      v81,
      (__int64)v87,
      v92,
      v94,
      v96,
      v98,
      v100,
      v102,
      v104,
      v105,
      v106.m128i_i32[0],
      v106.m128i_i8[8],
      (__int64)v107,
      (int)&v140,
      (__int64)src);
    v57 = &v156;
    do
    {
      v57 -= 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v57 != (char *)v150 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    std::string::_M_dispose();
    return v85;
  }
  LOBYTE(v120[0]) = 0;
  v107 = v120;
  v118 = v120;
  s = nullptr;
  v119 = 0;
  v117 = 0;
  if ( get_func_name() <= 0 )
  {
    qsnprintf();
    std::string::assign((__int64)&v118, v157);
  }
  else
  {
    if ( (_QWORD)v117 )
      strlen(s);
    std::string::_M_replace();
  }
  LOBYTE(v140) = 0;
  *(_QWORD *)&v141 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v140) = 3;
  v10 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v10, "current_address", v11, v12, v13, v14, v77, v82, v89);
  v111 = &v121;
  v141 = (unsigned __int64)v10;
  ida_mcp::format_ea[abi:cxx11]();
  v142 = 0;
  *(_QWORD *)&v143 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = 3;
  v15 = (_QWORD *)operator new(0x20u);
  v16 = v121;
  v17 = v15 + 2;
  v18 = v122;
  *v15 = v15 + 2;
  if ( v16 == v123 )
  {
    v60 = v18 + 1;
    if ( (unsigned int)(v18 + 1) >= 8 )
    {
      v15[2] = v123[0];
      *(_QWORD *)((char *)v17 + v60 - 8) = *(_QWORD *)((char *)&v123[-1] + v60);
      v62 = (unsigned __int64)(v15 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v63 = (char *)v17 - v62;
      v64 = (char *)((char *)v123 - v63);
      v65 = ((_DWORD)v63 + v60) & 0xFFFFFFF8;
      if ( v65 >= 8 )
      {
        v66 = v65 & 0xFFFFFFF8;
        v67 = 0;
        do
        {
          v68 = v67;
          v67 += 8;
          *(_QWORD *)(v62 + v68) = *(_QWORD *)&v64[v68];
        }
        while ( v67 < v66 );
      }
    }
    else if ( (v60 & 4) != 0 )
    {
      *((_DWORD *)v15 + 4) = v123[0];
      *(_DWORD *)((char *)v17 + v60 - 4) = *(_DWORD *)((char *)&v122 + v60 + 4);
    }
    else if ( (_DWORD)v18 != -1 )
    {
      *((_BYTE *)v15 + 16) = v123[0];
      if ( (v60 & 2) != 0 )
        *(_WORD *)((char *)v17 + v60 - 2) = *(_WORD *)((char *)&v122 + v60 + 6);
    }
  }
  else
  {
    *v15 = v16;
    v15[2] = v123[0];
  }
  v15[1] = v18;
  v121 = v123;
  v122 = 0;
  LOBYTE(v123[0]) = 0;
  v108 = &v140;
  v143 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v146,
    (const __m128i *)&v140);
  v147 = 0;
  v144 = 0;
  v145[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v144 = 3;
  v19 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v19, "next_function", v20, v21, v22, v23, v78, v83, (__int64)v145);
  v127 = 0;
  *(_QWORD *)&v128 = 0;
  *(_OWORD *)v145 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v127 = 3;
  v24 = operator new(0x20u);
  strcpy((char *)(v24 + 16), "address");
  *(_QWORD *)v24 = v24 + 16;
  *(_QWORD *)(v24 + 8) = 7;
  v128 = (unsigned __int64)v24;
  v112 = &v124;
  ida_mcp::format_ea[abi:cxx11]();
  v129 = 0;
  *(_QWORD *)&v130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = 3;
  v25 = (_QWORD *)operator new(0x20u);
  v26 = v124;
  v27 = v25 + 2;
  v28 = v125;
  *v25 = v25 + 2;
  if ( v26 == v126 )
  {
    v61 = v28 + 1;
    if ( (unsigned int)(v28 + 1) >= 8 )
    {
      v25[2] = v126[0];
      *(_QWORD *)((char *)v27 + v61 - 8) = *(_QWORD *)((char *)&v126[-1] + v61);
      v69 = (unsigned __int64)(v25 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v70 = (char *)v27 - v69;
      v71 = (char *)((char *)v126 - v70);
      v72 = ((_DWORD)v70 + v61) & 0xFFFFFFF8;
      if ( v72 >= 8 )
      {
        v73 = v72 & 0xFFFFFFF8;
        v74 = 0;
        do
        {
          v75 = v74;
          v74 += 8;
          *(_QWORD *)(v69 + v75) = *(_QWORD *)&v71[v75];
        }
        while ( v74 < v73 );
      }
    }
    else if ( (v61 & 4) != 0 )
    {
      *((_DWORD *)v25 + 4) = v126[0];
      *(_DWORD *)((char *)v27 + v61 - 4) = *(_DWORD *)((char *)&v125 + v61 + 4);
    }
    else if ( (_DWORD)v28 != -1 )
    {
      *((_BYTE *)v25 + 16) = v126[0];
      if ( (v61 & 2) != 0 )
        *(_WORD *)((char *)v27 + v61 - 2) = *(_WORD *)((char *)&v125 + v61 + 6);
    }
  }
  else
  {
    *v25 = v26;
    v25[2] = v126[0];
  }
  v25[1] = v28;
  v124 = v126;
  v125 = 0;
  LOBYTE(v126[0]) = 0;
  v110 = &v127;
  v130 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v150,
    (const __m128i *)&v127);
  v151 = 0;
  v131 = 0;
  *(_QWORD *)&v132 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v131 = 3;
  v29 = operator new(0x20u);
  *(_QWORD *)v29 = v29 + 16;
  strcpy((char *)(v29 + 16), "name");
  *(_QWORD *)(v29 + 8) = 4;
  v133 = 0;
  v134.m128i_i64[0] = 0;
  v132 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v133 = 3;
  src = v118;
  v106.m128i_i64[0] = v119;
  v30 = (_QWORD *)operator new(0x20u);
  v31 = v106.m128i_i64[0];
  v32 = v30 + 2;
  v33 = v30;
  *v30 = v30 + 2;
  v115.m128i_i64[0] = v31;
  if ( v31 <= 0xF )
  {
    v34 = (__m128i)(unsigned __int64)v30;
    v35 = v31 + 1;
    if ( v31 )
    {
LABEL_16:
      v106 = v34;
      memcpy(v32, src, v35);
      v36 = v115.m128i_i64[0];
      v34 = _mm_load_si128(&v106);
      goto LABEL_17;
    }
    goto LABEL_33;
  }
  v58 = std::string::_M_create();
  *v33 = v58;
  v32 = (_BYTE *)v58;
  v59 = v115.m128i_i64[0];
  v34 = (__m128i)(unsigned __int64)v33;
  v33[2] = v115.m128i_i64[0];
  v35 = v59 + 1;
  if ( !v59 )
  {
LABEL_33:
    *v32 = *(_BYTE *)src;
    v36 = v115.m128i_i64[0];
    goto LABEL_17;
  }
  v36 = -1;
  if ( v35 )
    goto LABEL_16;
LABEL_17:
  v33[1] = v36;
  v106.m128i_i64[0] = (__int64)&v131;
  v134 = v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v152,
    (const __m128i *)&v131);
  v153 = 0;
  v135 = 0;
  *(_QWORD *)&v136 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v135 = 3;
  v37 = operator new(0x20u);
  strcpy((char *)(v37 + 16), "size");
  *(_QWORD *)v37 = v37 + 16;
  *(_QWORD *)(v37 + 8) = 4;
  v136 = (unsigned __int64)v37;
  v138 = next_func[1] - *next_func;
  v137 = 6;
  v139 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v154,
    (const __m128i *)&v135);
  v155 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v115,
    (__int64)v150,
    3,
    v38,
    v39,
    v40,
    v79,
    v84,
    v90,
    (int)&v118,
    (int)&v141,
    (int)&v143,
    (__int64)&v128,
    (int)&v130,
    (int)&v132,
    (int)&v134,
    v106.m128i_i32[0],
    v106.m128i_i8[8],
    (__int64)v107,
    (int)v108,
    (__int64)src);
  v41 = _mm_load_si128(&v115);
  v145[4] = 0;
  *(__m128i *)&v145[2] = v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v148,
    (const __m128i *)&v144);
  *((_QWORD *)&v149 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v85,
    &v146);
  v42 = &v156;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v42 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v42 != (char *)v150 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v124 != v126 )
    operator delete(v124, v126[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v121 != v123 )
    operator delete(v121, v123[0] + 1LL);
  if ( v118 != v107 )
    operator delete(v118, v120[0] + 1LL);
  if ( s )
  {
    *(_QWORD *)&v117 = 0;
    qfree();
  }
  return v85;
}

