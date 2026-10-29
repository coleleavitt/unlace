__int64 __fastcall ida_mcp::tools::jumptables::`anonymous namespace'::set_jumptable_info_impl(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        int a18,
        __int64 a19,
        int a20,
        int a21,
        __int64 a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        char a34,
        int a35,
        int a36,
        char a37,
        int a38,
        int a39,
        char a40,
        int a41,
        int a42,
        char a43,
        int a44,
        int a45,
        char a46,
        int a47,
        int a48,
        char a49,
        char a50,
        int a51,
        char a52,
        int a53,
        int a54,
        char a55,
        char a56,
        int a57,
        char a58,
        int a59,
        int a60,
        int a61,
        int a62,
        int a63,
        int a64,
        int a65,
        int a66,
        int a67,
        int a68,
        int a69,
        int a70,
        int a71,
        int a72,
        int a73,
        int a74,
        int a75,
        int a76,
        int a77,
        int a78,
        __int64 a79)
{
  __int64 v79; // rax
  char v80; // dl
  char v81; // bp
  _BYTE *v82; // rax
  char v83; // dl
  char v84; // r13
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rbx
  __int64 v88; // r8
  __int64 v89; // r9
  unsigned __int8 v90; // al
  unsigned __int64 v91; // rax
  __int64 *v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  _QWORD *v101; // rax
  _QWORD *v102; // rdx
  _QWORD *v103; // rcx
  __int64 v104; // rsi
  __int64 *v105; // rbp
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  _QWORD *v114; // rax
  _QWORD *v115; // rdx
  _QWORD *v116; // rcx
  __int64 v117; // rsi
  __int64 *v118; // rbp
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 *v123; // rbp
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  char *v131; // rbp
  double v133; // xmm0_8
  unsigned int v134; // edx
  unsigned int v135; // edx
  unsigned __int64 v136; // rdi
  char *v137; // rcx
  char *v138; // r8
  unsigned int v139; // edx
  unsigned int v140; // edx
  unsigned int v141; // ecx
  __int64 v142; // r9
  unsigned __int64 v143; // rdi
  char *v144; // rcx
  char *v145; // r8
  unsigned int v146; // edx
  unsigned int v147; // edx
  unsigned int v148; // ecx
  __int64 v149; // r9
  int v150; // [rsp+0h] [rbp-288h]
  int v151; // [rsp+0h] [rbp-288h]
  int v152; // [rsp+0h] [rbp-288h]
  int v153; // [rsp+0h] [rbp-288h]
  int v154; // [rsp+0h] [rbp-288h]
  int v155; // [rsp+0h] [rbp-288h]
  int v156; // [rsp+0h] [rbp-288h]
  int v157; // [rsp+8h] [rbp-280h]
  int v158; // [rsp+8h] [rbp-280h]
  int v159; // [rsp+8h] [rbp-280h]
  int v160; // [rsp+8h] [rbp-280h]
  int v161; // [rsp+8h] [rbp-280h]
  _QWORD *v162; // [rsp+8h] [rbp-280h]
  __int64 v163; // [rsp+8h] [rbp-280h]
  __int64 v164; // [rsp+10h] [rbp-278h]
  __int64 v165; // [rsp+10h] [rbp-278h]
  __int64 v166; // [rsp+10h] [rbp-278h]
  __int64 v167; // [rsp+10h] [rbp-278h]
  __int64 v168; // [rsp+10h] [rbp-278h]
  int v169; // [rsp+10h] [rbp-278h]
  __int64 v170; // [rsp+60h] [rbp-228h]
  int v171; // [rsp+68h] [rbp-220h]
  __int64 v172; // [rsp+70h] [rbp-218h]
  unsigned __int64 v173; // [rsp+98h] [rbp-1F0h]
  void *v174; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v175; // [rsp+A8h] [rbp-1E0h]
  _QWORD v176[2]; // [rsp+B0h] [rbp-1D8h] BYREF
  void *v177; // [rsp+C0h] [rbp-1C8h] BYREF
  __int64 v178; // [rsp+C8h] [rbp-1C0h]
  _QWORD v179[2]; // [rsp+D0h] [rbp-1B8h] BYREF
  char v180; // [rsp+E0h] [rbp-1A8h] BYREF
  __int128 v181; // [rsp+E8h] [rbp-1A0h] BYREF
  char v182; // [rsp+F8h] [rbp-190h]
  __int128 v183; // [rsp+100h] [rbp-188h] BYREF
  char v184; // [rsp+110h] [rbp-178h] BYREF
  __int128 v185; // [rsp+118h] [rbp-170h] BYREF
  char v186; // [rsp+128h] [rbp-160h]
  __int128 v187; // [rsp+130h] [rbp-158h] BYREF
  char v188; // [rsp+140h] [rbp-148h] BYREF
  __int128 v189; // [rsp+148h] [rbp-140h] BYREF
  char v190; // [rsp+158h] [rbp-130h]
  unsigned __int64 v191; // [rsp+160h] [rbp-128h]
  __int64 v192; // [rsp+168h] [rbp-120h]
  void *v193; // [rsp+170h] [rbp-118h] BYREF
  __int128 v194; // [rsp+178h] [rbp-110h] BYREF
  __int64 v195; // [rsp+188h] [rbp-100h]
  __int64 v196; // [rsp+190h] [rbp-F8h]
  __int64 v197; // [rsp+198h] [rbp-F0h]
  _QWORD v198[3]; // [rsp+1A0h] [rbp-E8h] BYREF
  _QWORD v199[3]; // [rsp+1B8h] [rbp-D0h] BYREF
  _QWORD v200[3]; // [rsp+1D0h] [rbp-B8h] BYREF
  _QWORD v201[3]; // [rsp+1E8h] [rbp-A0h] BYREF
  char v202[32]; // [rsp+200h] [rbp-88h] BYREF
  char v203[40]; // [rsp+220h] [rbp-68h] BYREF
  unsigned __int64 v204; // [rsp+248h] [rbp-40h]

  v204 = __readfsqword(0x28u);
  v193 = (char *)&v194 + 8;
  *(_QWORD *)&v194 = 0;
  BYTE8(v194) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0xFDE8D);
  std::string::_M_assign();
  v79 = ida_mcp::parse_ea(v193, v194);
  v81 = v80;
  v172 = v79;
  if ( v193 != (char *)&v194 + 8 )
    operator delete(v193, *((_QWORD *)&v194 + 1) + 1LL);
  if ( !v81 )
    JUMPOUT(0xFE053);
  v82 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v193 = (char *)&v194 + 8;
  *(_QWORD *)&v194 = 0;
  BYTE8(v194) = 0;
  if ( *v82 != 3 )
    JUMPOUT(0xFDFCD);
  std::string::_M_assign();
  ida_mcp::parse_ea(v193, v194);
  v84 = v83;
  if ( v193 != (char *)&v194 + 8 )
    operator delete(v193, *((_QWORD *)&v194 + 1) + 1LL);
  if ( !v84 )
    JUMPOUT(0xFDDE8);
  v87 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v90 = *(_BYTE *)v87;
  if ( *(_BYTE *)v87 == 6 )
    goto LABEL_13;
  if ( v90 > 6u )
  {
    if ( v90 != 7 )
      goto LABEL_50;
    v133 = *(double *)(v87 + 8);
    if ( v133 < 9.223372036854776e18 )
      v91 = (unsigned int)(int)v133;
    else
      v91 = (unsigned int)(int)(v133 - 9.223372036854776e18) ^ 0x8000000000000000LL;
  }
  else
  {
    if ( v90 != 4 )
    {
      if ( v90 == 5 )
      {
LABEL_13:
        v91 = *(_QWORD *)(v87 + 8);
        goto LABEL_14;
      }
LABEL_50:
      ida_mcp::tools::jumptables::`anonymous namespace'::set_jumptable_info_impl(
        a2,
        (__int64)"table_size",
        v85,
        v86,
        v88,
        v89,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        a14,
        a15,
        a16,
        a17,
        a18,
        a19,
        a20,
        a21,
        a22,
        a23,
        a24,
        a25,
        a26,
        a27,
        a28,
        a29,
        a30,
        a31,
        a32,
        a33,
        a34,
        a35,
        a36,
        a37,
        a38,
        a39,
        a40,
        a41,
        a42,
        a43,
        a44,
        a45,
        a46,
        a47,
        a48,
        a49,
        a50,
        a51,
        a52,
        a53,
        a54,
        a55,
        a56,
        a57,
        a58,
        a59,
        a60,
        a61,
        a62,
        a63,
        a64,
        a65,
        a66,
        a67,
        a68,
        a69,
        a70,
        a71,
        a72,
        a73,
        a74,
        a75,
        a76,
        a77,
        a78,
        a79);
    }
    v91 = *(unsigned __int8 *)(v87 + 8);
  }
LABEL_14:
  v173 = v91;
  set_jumptable_info();
  *(_QWORD *)&v181 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v180 = 3;
  v92 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v92, "address", v93, v94, v95, v96, v150, a1, v164);
  v181 = (unsigned __int64)v92;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v174, v202, v97, v98, v99, v100, v151, v157, v165);
  v182 = 0;
  *(_QWORD *)&v183 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v182 = 3;
  v101 = (_QWORD *)operator new(0x20u);
  v102 = v174;
  v103 = v101 + 2;
  v104 = v175;
  *v101 = v101 + 2;
  if ( v102 == v176 )
  {
    v134 = v104 + 1;
    if ( (unsigned int)(v104 + 1) >= 8 )
    {
      v101[2] = v176[0];
      *(_QWORD *)((char *)v103 + v134 - 8) = *(_QWORD *)((char *)&v176[-1] + v134);
      v136 = (unsigned __int64)(v101 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v137 = (char *)v103 - v136;
      v138 = (char *)((char *)v176 - v137);
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
      *((_DWORD *)v101 + 4) = v176[0];
      *(_DWORD *)((char *)v103 + v134 - 4) = *(_DWORD *)((char *)&v175 + v134 + 4);
    }
    else if ( (_DWORD)v104 != -1 )
    {
      *((_BYTE *)v101 + 16) = v176[0];
      if ( (v134 & 2) != 0 )
        *(_WORD *)((char *)v103 + v134 - 2) = *(_WORD *)((char *)&v175 + v134 + 6);
    }
  }
  else
  {
    *v101 = v102;
    v101[2] = v176[0];
  }
  v101[1] = v104;
  v174 = v176;
  v175 = 0;
  LOBYTE(v176[0]) = 0;
  v183 = (unsigned __int64)v101;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v198,
    (const __m128i *)&v180);
  v198[2] = 0;
  v184 = 0;
  *(_QWORD *)&v185 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v184 = 3;
  v105 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v105, "table_address", v106, v107, v108, v109, v152, v158, v166);
  v185 = (unsigned __int64)v105;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v177, v203, v110, v111, v112, v113, v153, v159, v167);
  v186 = 0;
  *(_QWORD *)&v187 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v186 = 3;
  v114 = (_QWORD *)operator new(0x20u);
  v115 = v177;
  v116 = v114 + 2;
  v117 = v178;
  *v114 = v114 + 2;
  if ( v115 == v179 )
  {
    v135 = v117 + 1;
    if ( (unsigned int)(v117 + 1) >= 8 )
    {
      v114[2] = v179[0];
      *(_QWORD *)((char *)v116 + v135 - 8) = *(_QWORD *)((char *)&v179[-1] + v135);
      v143 = (unsigned __int64)(v114 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v144 = (char *)v116 - v143;
      v145 = (char *)((char *)v179 - v144);
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
      *((_DWORD *)v114 + 4) = v179[0];
      *(_DWORD *)((char *)v116 + v135 - 4) = *(_DWORD *)((char *)&v178 + v135 + 4);
    }
    else if ( (_DWORD)v117 != -1 )
    {
      *((_BYTE *)v114 + 16) = v179[0];
      if ( (v135 & 2) != 0 )
        *(_WORD *)((char *)v116 + v135 - 2) = *(_WORD *)((char *)&v178 + v135 + 6);
    }
  }
  else
  {
    *v114 = v115;
    v114[2] = v179[0];
  }
  v114[1] = v117;
  v177 = v179;
  v178 = 0;
  LOBYTE(v179[0]) = 0;
  v187 = (unsigned __int64)v114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v199,
    (const __m128i *)&v184);
  v199[2] = 0;
  v188 = 0;
  *(_QWORD *)&v189 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v188 = 3;
  v118 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v118,
    "table_size",
    v119,
    v120,
    v121,
    v122,
    v154,
    v160,
    (__int64)&v187);
  v190 = 6;
  v191 = v173;
  v192 = 0;
  v189 = (unsigned __int64)v118;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v200,
    (const __m128i *)&v188);
  v200[2] = 0;
  LOBYTE(v193) = 0;
  *(_QWORD *)&v194 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v193) = 3;
  v123 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v123, "success", v124, v125, v126, v127, v155, v161, v168);
  v195 = 4;
  v194 = (unsigned __int64)v123;
  v196 = 1;
  v197 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v201,
    (const __m128i *)&v193);
  v201[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v162,
    (__int64)v198,
    4,
    v128,
    v129,
    v130,
    v156,
    (__int64)v162,
    v169,
    (int)&v189,
    (int)&v194,
    (int)&v181,
    (__int64)&v183,
    (int)&v185,
    (int)&v180,
    (int)&v184,
    (int)&v174,
    (char)&v177,
    v170,
    v171,
    v172);
  v131 = v202;
  do
  {
    v131 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v131 != (char *)v198 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v177 != v179 )
    operator delete(v177, v179[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v174 != v176 )
    operator delete(v174, v176[0] + 1LL);
  return v163;
}

