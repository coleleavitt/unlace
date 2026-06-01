_QWORD *__fastcall ida_mcp::tools::navigation::get_prev_func_nav(
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
  _QWORD *prev_func; // rbp
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
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned __int64 v30; // rdx
  _BYTE *v31; // rdi
  __int64 *v32; // r12
  __m128i v33; // xmm0
  size_t v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128i v40; // xmm0
  char *v41; // rbp
  __int64 *v43; // rbp
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // rbp
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  char *v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // edx
  unsigned int v60; // edx
  unsigned __int64 v61; // rdi
  char *v62; // rcx
  char *v63; // r8
  unsigned int v64; // edx
  unsigned int v65; // edx
  unsigned int v66; // ecx
  __int64 v67; // r9
  unsigned __int64 v68; // rdi
  char *v69; // rcx
  char *v70; // r8
  unsigned int v71; // edx
  unsigned int v72; // edx
  unsigned int v73; // ecx
  __int64 v74; // r9
  int v75; // [rsp+0h] [rbp-2F8h]
  int v76; // [rsp+0h] [rbp-2F8h]
  int v77; // [rsp+0h] [rbp-2F8h]
  _QWORD *v78; // [rsp+0h] [rbp-2F8h]
  int v79; // [rsp+0h] [rbp-2F8h]
  _QWORD *v80; // [rsp+0h] [rbp-2F8h]
  int v81; // [rsp+8h] [rbp-2F0h]
  int v82; // [rsp+8h] [rbp-2F0h]
  __int64 v83; // [rsp+8h] [rbp-2F0h]
  int v84; // [rsp+8h] [rbp-2F0h]
  __int64 v85; // [rsp+8h] [rbp-2F0h]
  int v86; // [rsp+10h] [rbp-2E8h]
  __int64 v87; // [rsp+10h] [rbp-2E8h]
  __int64 v88; // [rsp+10h] [rbp-2E8h]
  int v89; // [rsp+10h] [rbp-2E8h]
  __int64 v90; // [rsp+10h] [rbp-2E8h]
  int v91; // [rsp+10h] [rbp-2E8h]
  __int64 v92; // [rsp+18h] [rbp-2E0h]
  int v93; // [rsp+18h] [rbp-2E0h]
  __int64 v94; // [rsp+20h] [rbp-2D8h]
  int v95; // [rsp+20h] [rbp-2D8h]
  char v96; // [rsp+28h] [rbp-2D0h]
  int v97; // [rsp+28h] [rbp-2D0h]
  int v98; // [rsp+30h] [rbp-2C8h]
  __int64 v99; // [rsp+30h] [rbp-2C8h]
  int v100; // [rsp+38h] [rbp-2C0h]
  int v101; // [rsp+38h] [rbp-2C0h]
  __int64 v102; // [rsp+40h] [rbp-2B8h]
  int v103; // [rsp+40h] [rbp-2B8h]
  int v104; // [rsp+48h] [rbp-2B0h]
  void *v105; // [rsp+48h] [rbp-2B0h]
  __m128i v106; // [rsp+50h] [rbp-2A8h] BYREF
  __int64 *v107; // [rsp+60h] [rbp-298h]
  void *src; // [rsp+68h] [rbp-290h]
  void **v109; // [rsp+70h] [rbp-288h]
  void **v110; // [rsp+78h] [rbp-280h]
  __int64 v111; // [rsp+80h] [rbp-278h]
  __int64 v112; // [rsp+88h] [rbp-270h]
  __m128i v113; // [rsp+90h] [rbp-268h] BYREF
  char *s; // [rsp+A0h] [rbp-258h]
  __int128 v115; // [rsp+A8h] [rbp-250h]
  void *v116; // [rsp+C0h] [rbp-238h] BYREF
  __int64 v117; // [rsp+C8h] [rbp-230h]
  _QWORD v118[2]; // [rsp+D0h] [rbp-228h] BYREF
  void *v119; // [rsp+E0h] [rbp-218h] BYREF
  __int64 v120; // [rsp+E8h] [rbp-210h]
  _QWORD v121[2]; // [rsp+F0h] [rbp-208h] BYREF
  void *v122; // [rsp+100h] [rbp-1F8h] BYREF
  __int64 v123; // [rsp+108h] [rbp-1F0h]
  _QWORD v124[2]; // [rsp+110h] [rbp-1E8h] BYREF
  __m128i v125; // [rsp+120h] [rbp-1D8h] BYREF
  __int64 v126; // [rsp+130h] [rbp-1C8h]
  char v127; // [rsp+138h] [rbp-1C0h]
  __int128 v128; // [rsp+140h] [rbp-1B8h] BYREF
  char v129; // [rsp+150h] [rbp-1A8h] BYREF
  __int128 v130; // [rsp+158h] [rbp-1A0h] BYREF
  char v131; // [rsp+168h] [rbp-190h]
  __m128i v132; // [rsp+170h] [rbp-188h] BYREF
  char v133; // [rsp+180h] [rbp-178h] BYREF
  __int128 v134; // [rsp+188h] [rbp-170h]
  char v135; // [rsp+198h] [rbp-160h]
  __int64 v136; // [rsp+1A0h] [rbp-158h]
  __int64 v137; // [rsp+1A8h] [rbp-150h]
  __int64 v138; // [rsp+1B0h] [rbp-148h] BYREF
  __int128 v139; // [rsp+1B8h] [rbp-140h] BYREF
  char v140; // [rsp+1C8h] [rbp-130h]
  __int128 v141; // [rsp+1D0h] [rbp-128h] BYREF
  char v142; // [rsp+1E0h] [rbp-118h] BYREF
  _QWORD v143[5]; // [rsp+1E8h] [rbp-110h] BYREF
  __m128i v144; // [rsp+210h] [rbp-E8h] BYREF
  __int64 v145; // [rsp+220h] [rbp-D8h] BYREF
  __int64 v146; // [rsp+228h] [rbp-D0h] BYREF
  __int128 v147; // [rsp+230h] [rbp-C8h]
  _QWORD v148[2]; // [rsp+240h] [rbp-B8h] BYREF
  __int64 v149; // [rsp+250h] [rbp-A8h]
  _QWORD v150[2]; // [rsp+258h] [rbp-A0h] BYREF
  __int64 v151; // [rsp+268h] [rbp-90h]
  _QWORD v152[2]; // [rsp+270h] [rbp-88h] BYREF
  __int64 v153; // [rsp+280h] [rbp-78h]
  char v154; // [rsp+288h] [rbp-70h] BYREF
  char v155[40]; // [rsp+290h] [rbp-68h] BYREF
  unsigned __int64 v156; // [rsp+2B8h] [rbp-40h]

  v156 = __readfsqword(0x28u);
  v144.m128i_i64[0] = (__int64)&v145;
  v144.m128i_i64[1] = 0;
  LOBYTE(v145) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
                   a2,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a1,
                   v81,
                   v86,
                   v92,
                   v94,
                   v96,
                   v98,
                   v100,
                   v102) != 3 )
    JUMPOUT(0x78BE3);
  std::string::_M_assign();
  v6 = ida_mcp::parse_ea(v144.m128i_i64[0], v144.m128i_u64[1]);
  v112 = v7;
  v8 = v7;
  v111 = v6;
  if ( (__int64 *)v144.m128i_i64[0] != &v145 )
    operator delete((void *)v144.m128i_i64[0], v145 + 1);
  if ( !v8 )
    JUMPOUT(0x7875E);
  prev_func = (_QWORD *)get_prev_func();
  if ( !prev_func )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[16],char [16],0>(&v138);
    *((_QWORD *)&v139 + 1) = 0;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    *((_QWORD *)&v141 + 1) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v148,
      (const __m128i *)&v138);
    v149 = 0;
    v142 = 0;
    v143[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v142 = 3;
    v43 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v43, "previous_function", v44, v45, v46, v47, v75, (int)v143, v87);
    memset(&v143[2], 0, 24);
    *(_OWORD *)v143 = (unsigned __int64)v43;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v150,
      (const __m128i *)&v142);
    v151 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
    v145 = 0;
    LOBYTE(v146) = 0;
    *(_QWORD *)&v147 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v146) = 3;
    v48 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v48,
      "No previous function found",
      v49,
      v50,
      v51,
      v52,
      v79,
      v84,
      v90);
    v147 = (unsigned __int64)v48;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v152,
      &v144);
    v153 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v80,
      (__int64)v148,
      3,
      v53,
      v54,
      v55,
      (int)v80,
      v85,
      v91,
      v93,
      v95,
      v97,
      v99,
      v101,
      v103,
      v104,
      v106.m128i_i32[0],
      v106.m128i_i8[8],
      (__int64)&v138,
      (int)src,
      (__int64)v109);
    v56 = &v154;
    do
    {
      v56 -= 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v56 != (char *)v148 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    std::string::_M_dispose();
    return v78;
  }
  LOBYTE(v118[0]) = 0;
  v116 = v118;
  s = nullptr;
  v117 = 0;
  v115 = 0;
  if ( get_func_name() <= 0 )
  {
    qsnprintf();
    std::string::assign((__int64)&v116, v155);
  }
  else
  {
    if ( (_QWORD)v115 )
      strlen(s);
    std::string::_M_replace();
  }
  LOBYTE(v138) = 0;
  *(_QWORD *)&v139 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v138) = 3;
  v10 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v10, "current_address", v11, v12, v13, v14, v75, v82, (__int64)&v116);
  v109 = &v119;
  v139 = (unsigned __int64)v10;
  ida_mcp::format_ea[abi:cxx11]();
  v140 = 0;
  *(_QWORD *)&v141 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v140 = 3;
  v15 = (_QWORD *)operator new(0x20u);
  v16 = v119;
  v17 = v15 + 2;
  v18 = v120;
  *v15 = v15 + 2;
  if ( v16 == v121 )
  {
    v59 = v18 + 1;
    if ( (unsigned int)(v18 + 1) >= 8 )
    {
      v15[2] = v121[0];
      *(_QWORD *)((char *)v17 + v59 - 8) = *(_QWORD *)((char *)&v121[-1] + v59);
      v61 = (unsigned __int64)(v15 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v62 = (char *)v17 - v61;
      v63 = (char *)((char *)v121 - v62);
      v64 = ((_DWORD)v62 + v59) & 0xFFFFFFF8;
      if ( v64 >= 8 )
      {
        v65 = v64 & 0xFFFFFFF8;
        v66 = 0;
        do
        {
          v67 = v66;
          v66 += 8;
          *(_QWORD *)(v61 + v67) = *(_QWORD *)&v63[v67];
        }
        while ( v66 < v65 );
      }
    }
    else if ( (v59 & 4) != 0 )
    {
      *((_DWORD *)v15 + 4) = v121[0];
      *(_DWORD *)((char *)v17 + v59 - 4) = *(_DWORD *)((char *)&v120 + v59 + 4);
    }
    else if ( (_DWORD)v18 != -1 )
    {
      *((_BYTE *)v15 + 16) = v121[0];
      if ( (v59 & 2) != 0 )
        *(_WORD *)((char *)v17 + v59 - 2) = *(_WORD *)((char *)&v120 + v59 + 6);
    }
  }
  else
  {
    *v15 = v16;
    v15[2] = v121[0];
  }
  v15[1] = v18;
  v119 = v121;
  v120 = 0;
  LOBYTE(v121[0]) = 0;
  v107 = &v138;
  v141 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v144,
    (const __m128i *)&v138);
  v145 = 0;
  v142 = 0;
  v143[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = 3;
  v19 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v19, "previous_function", v20, v21, v22, v23, v76, (int)v143, v88);
  *(_OWORD *)v143 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>(&v125);
  v126 = 0;
  v110 = &v122;
  ida_mcp::format_ea[abi:cxx11]();
  v127 = 0;
  *(_QWORD *)&v128 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v127 = 3;
  v24 = (_QWORD *)operator new(0x20u);
  v25 = v122;
  v26 = v24 + 2;
  v27 = v123;
  *v24 = v24 + 2;
  if ( v25 == v124 )
  {
    v60 = v27 + 1;
    if ( (unsigned int)(v27 + 1) >= 8 )
    {
      v24[2] = v124[0];
      *(_QWORD *)((char *)v26 + v60 - 8) = *(_QWORD *)((char *)&v124[-1] + v60);
      v68 = (unsigned __int64)(v24 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v69 = (char *)v26 - v68;
      v70 = (char *)((char *)v124 - v69);
      v71 = ((_DWORD)v69 + v60) & 0xFFFFFFF8;
      if ( v71 >= 8 )
      {
        v72 = v71 & 0xFFFFFFF8;
        v73 = 0;
        do
        {
          v74 = v73;
          v73 += 8;
          *(_QWORD *)(v68 + v74) = *(_QWORD *)&v70[v74];
        }
        while ( v73 < v72 );
      }
    }
    else if ( (v60 & 4) != 0 )
    {
      *((_DWORD *)v24 + 4) = v124[0];
      *(_DWORD *)((char *)v26 + v60 - 4) = *(_DWORD *)((char *)&v123 + v60 + 4);
    }
    else if ( (_DWORD)v27 != -1 )
    {
      *((_BYTE *)v24 + 16) = v124[0];
      if ( (v60 & 2) != 0 )
        *(_WORD *)((char *)v26 + v60 - 2) = *(_WORD *)((char *)&v123 + v60 + 6);
    }
  }
  else
  {
    *v24 = v25;
    v24[2] = v124[0];
  }
  v24[1] = v27;
  v122 = v124;
  v123 = 0;
  LOBYTE(v124[0]) = 0;
  v128 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v148,
    &v125);
  v149 = 0;
  v129 = 0;
  *(_QWORD *)&v130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  strcpy((char *)(v28 + 16), "name");
  *(_QWORD *)(v28 + 8) = 4;
  v131 = 0;
  v132.m128i_i64[0] = 0;
  v130 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v131 = 3;
  src = v116;
  v106.m128i_i64[0] = v117;
  v29 = (_QWORD *)operator new(0x20u);
  v30 = v106.m128i_i64[0];
  v31 = v29 + 2;
  v32 = v29;
  *v29 = v29 + 2;
  v113.m128i_i64[0] = v30;
  if ( v30 <= 0xF )
  {
    v33 = (__m128i)(unsigned __int64)v29;
    v34 = v30 + 1;
    if ( v30 )
    {
LABEL_16:
      v106 = v33;
      memcpy(v31, src, v34);
      v35 = v113.m128i_i64[0];
      v33 = _mm_load_si128(&v106);
      goto LABEL_17;
    }
    goto LABEL_33;
  }
  v57 = std::string::_M_create();
  *v32 = v57;
  v31 = (_BYTE *)v57;
  v58 = v113.m128i_i64[0];
  v33 = (__m128i)(unsigned __int64)v32;
  v32[2] = v113.m128i_i64[0];
  v34 = v58 + 1;
  if ( !v58 )
  {
LABEL_33:
    *v31 = *(_BYTE *)src;
    v35 = v113.m128i_i64[0];
    goto LABEL_17;
  }
  v35 = -1;
  if ( v34 )
    goto LABEL_16;
LABEL_17:
  v32[1] = v35;
  v106.m128i_i64[0] = (__int64)&v129;
  v132 = v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v150,
    (const __m128i *)&v129);
  v151 = 0;
  v133 = 0;
  *(_QWORD *)&v134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v133 = 3;
  v36 = operator new(0x20u);
  strcpy((char *)(v36 + 16), "size");
  *(_QWORD *)v36 = v36 + 16;
  *(_QWORD *)(v36 + 8) = 4;
  v134 = (unsigned __int64)v36;
  v136 = prev_func[1] - *prev_func;
  v135 = 6;
  v137 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v152,
    (const __m128i *)&v133);
  v153 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v113,
    (__int64)v148,
    3,
    v37,
    v38,
    v39,
    v77,
    v83,
    v89,
    (int)&v125,
    (int)&v128,
    (int)&v130,
    (__int64)&v132,
    (int)&v139,
    (int)&v141,
    (int)v118,
    v106.m128i_i32[0],
    v106.m128i_i8[8],
    (__int64)v107,
    (int)src,
    (__int64)v109);
  v40 = _mm_load_si128(&v113);
  v143[4] = 0;
  *(__m128i *)&v143[2] = v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v146,
    (const __m128i *)&v142);
  *((_QWORD *)&v147 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v78,
    &v144);
  v41 = &v154;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v41 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v41 != (char *)v148 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v122 != v124 )
    operator delete(v122, v124[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v119 != v121 )
    operator delete(v119, v121[0] + 1LL);
  if ( v116 != v105 )
    operator delete(v116, v118[0] + 1LL);
  if ( s )
  {
    *(_QWORD *)&v115 = 0;
    qfree();
  }
  return v78;
}

