__int64 __fastcall ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_set_extra_cmt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        int a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        __int64 a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        char a44,
        int a45,
        int a46,
        char a47,
        int a48,
        int a49,
        char a50,
        int a51,
        int a52,
        char a53,
        int a54,
        int a55,
        char a56,
        int a57,
        int a58,
        char a59,
        char a60,
        int a61,
        char a62,
        int a63,
        int a64,
        char a65,
        char a66,
        int a67,
        char a68,
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
        int a79,
        int a80,
        int a81,
        int a82,
        int a83,
        int a84,
        __int64 a85)
{
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rdx
  char v91; // bl
  __int64 v92; // r14
  __int64 v93; // r12
  __int64 v94; // r14
  __int64 v95; // r15
  unsigned __int64 v96; // r13
  size_t v97; // rdx
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  int v103; // r14d
  __int64 *v104; // rbp
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  _QWORD *v113; // rax
  _QWORD *v114; // rdx
  _QWORD *v115; // rcx
  __int64 v116; // rsi
  __int64 *v117; // rbp
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  void *v122; // r15
  _QWORD *v123; // rax
  _BYTE *v124; // rdi
  __int64 *v125; // rbp
  __m128i v126; // xmm0
  size_t v127; // rdx
  __int64 v128; // rax
  __int64 *v129; // rbp
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 *v134; // rbp
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  _QWORD *v142; // rbp
  __int64 v144; // rax
  __int64 v145; // rax
  unsigned int v146; // edx
  unsigned __int64 v147; // rdi
  char *v148; // rcx
  char *v149; // r8
  unsigned int v150; // edx
  unsigned int v151; // edx
  unsigned int v152; // ecx
  __int64 v153; // r9
  int v154; // [rsp+0h] [rbp-2B8h]
  int v155; // [rsp+0h] [rbp-2B8h]
  int v156; // [rsp+0h] [rbp-2B8h]
  int v157; // [rsp+0h] [rbp-2B8h]
  int v158; // [rsp+0h] [rbp-2B8h]
  int v159; // [rsp+0h] [rbp-2B8h]
  void **v160; // [rsp+8h] [rbp-2B0h]
  int v161; // [rsp+8h] [rbp-2B0h]
  int v162; // [rsp+8h] [rbp-2B0h]
  int v163; // [rsp+8h] [rbp-2B0h]
  int v164; // [rsp+8h] [rbp-2B0h]
  const __m128i *v165; // [rsp+8h] [rbp-2B0h]
  __int64 v166; // [rsp+10h] [rbp-2A8h]
  __int64 v167; // [rsp+10h] [rbp-2A8h]
  __int64 v168; // [rsp+10h] [rbp-2A8h]
  __int64 v169; // [rsp+10h] [rbp-2A8h]
  __int64 v170; // [rsp+10h] [rbp-2A8h]
  _QWORD *v171; // [rsp+10h] [rbp-2A8h]
  __int64 v172; // [rsp+10h] [rbp-2A8h]
  _QWORD *v173; // [rsp+18h] [rbp-2A0h]
  void *v174; // [rsp+28h] [rbp-290h]
  _BYTE *src; // [rsp+50h] [rbp-268h]
  __m128i v176; // [rsp+70h] [rbp-248h] BYREF
  __int64 v177; // [rsp+80h] [rbp-238h]
  __int64 v178; // [rsp+88h] [rbp-230h]
  __int64 v179; // [rsp+90h] [rbp-228h]
  __int64 v180; // [rsp+98h] [rbp-220h]
  __int64 v181; // [rsp+A0h] [rbp-218h]
  unsigned __int64 v182; // [rsp+A8h] [rbp-210h]
  __int64 v183; // [rsp+B0h] [rbp-208h]
  __int64 v184; // [rsp+B8h] [rbp-200h]
  __int64 v185; // [rsp+C0h] [rbp-1F8h]
  unsigned __int64 v186; // [rsp+C8h] [rbp-1F0h]
  void *v187[2]; // [rsp+D0h] [rbp-1E8h] BYREF
  _QWORD v188[2]; // [rsp+E0h] [rbp-1D8h] BYREF
  void *v189[2]; // [rsp+F0h] [rbp-1C8h] BYREF
  __int64 v190; // [rsp+100h] [rbp-1B8h] BYREF
  void *v191; // [rsp+110h] [rbp-1A8h] BYREF
  __int64 v192; // [rsp+118h] [rbp-1A0h]
  _QWORD v193[2]; // [rsp+120h] [rbp-198h] BYREF
  char v194; // [rsp+130h] [rbp-188h] BYREF
  __int128 v195; // [rsp+138h] [rbp-180h] BYREF
  char v196; // [rsp+148h] [rbp-170h]
  __int128 v197; // [rsp+150h] [rbp-168h] BYREF
  char v198; // [rsp+160h] [rbp-158h] BYREF
  __int128 v199; // [rsp+168h] [rbp-150h] BYREF
  char v200; // [rsp+178h] [rbp-140h]
  __m128i v201; // [rsp+180h] [rbp-138h] BYREF
  char v202; // [rsp+190h] [rbp-128h] BYREF
  __int128 v203; // [rsp+198h] [rbp-120h]
  char v204; // [rsp+1A8h] [rbp-110h]
  __int64 v205; // [rsp+1B0h] [rbp-108h]
  __int64 v206; // [rsp+1B8h] [rbp-100h]
  void *v207; // [rsp+1C0h] [rbp-F8h] BYREF
  __int128 v208; // [rsp+1C8h] [rbp-F0h] BYREF
  __int64 v209; // [rsp+1D8h] [rbp-E0h]
  __int64 v210; // [rsp+1E0h] [rbp-D8h]
  __int64 v211; // [rsp+1E8h] [rbp-D0h]
  _QWORD v212[3]; // [rsp+1F0h] [rbp-C8h] BYREF
  _QWORD v213[3]; // [rsp+208h] [rbp-B0h] BYREF
  _QWORD v214[3]; // [rsp+220h] [rbp-98h] BYREF
  _QWORD v215[3]; // [rsp+238h] [rbp-80h] BYREF
  char v216[40]; // [rsp+250h] [rbp-68h] BYREF
  unsigned __int64 v217; // [rsp+278h] [rbp-40h]

  v166 = a1;
  v217 = __readfsqword(0x28u);
  v207 = (char *)&v208 + 8;
  *(_QWORD *)&v208 = 0;
  v160 = &v207;
  BYTE8(v208) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_set_extra_cmt(
      a2,
      (__int64)"address",
      v85,
      v86,
      v87,
      v88,
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
      a79,
      a80,
      a81,
      a82,
      a83,
      a84,
      a85);
  std::string::_M_assign();
  v89 = ida_mcp::parse_ea(v207, v208);
  v178 = v90;
  v91 = v90;
  v177 = v89;
  if ( v207 != (char *)&v208 + 8 )
    operator delete(v207, *((_QWORD *)&v208 + 1) + 1LL);
  if ( !v91 )
    JUMPOUT(0x12EF27);
  LOBYTE(v188[0]) = 0;
  v187[1] = nullptr;
  v187[0] = v188;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0x12F173);
  std::string::_M_assign();
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x12F147);
  v92 = *(_QWORD *)(a2 + 8);
  v179 = a2;
  v181 = 0;
  v93 = *(_QWORD *)(v92 + 16);
  v94 = v92 + 8;
  v182 = 0x8000000000000000LL;
  v95 = v94;
  if ( v93 )
  {
    do
    {
      v96 = *(_QWORD *)(v93 + 40);
      if ( !v96 )
        goto LABEL_35;
      v97 = 8;
      if ( v96 <= 8 )
        v97 = *(_QWORD *)(v93 + 40);
      if ( ((v98 = memcmp(*(const void **)(v93 + 32), "position", v97)) != 0
         || (v98 = v96 - 8, (__int64)(v96 - 8) <= 0x7FFFFFFF))
        && v98 < 0 )
      {
LABEL_35:
        v93 = *(_QWORD *)(v93 + 24);
      }
      else
      {
        v95 = v93;
        v93 = *(_QWORD *)(v93 + 16);
      }
    }
    while ( v93 );
    if ( v94 != v95 && std::string::compare(*(void **)(v95 + 32), *(_QWORD *)(v95 + 40), "position") > 0 )
      v95 = v94;
  }
  v180 = v95;
  v183 = a2;
  v185 = 0;
  v186 = 0x8000000000000000LL;
  v184 = v94;
  if ( (unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_() )
  {
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)v189,
      "anterior",
      v99,
      v100,
      v101,
      v102,
      v154,
      (int)&v207,
      a1);
  }
  else
  {
    nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
  }
  LODWORD(v183) = 0;
  v103 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[5],int,0>();
  update_extra_cmt();
  v194 = 0;
  *(_QWORD *)&v195 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v194 = 3;
  v104 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v104, "address", v105, v106, v107, v108, v154, (int)v160, v166);
  v195 = (unsigned __int64)v104;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v191, v216, v109, v110, v111, v112, v155, v161, v167);
  v196 = 0;
  *(_QWORD *)&v197 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v196 = 3;
  v113 = (_QWORD *)operator new(0x20u);
  v114 = v191;
  v115 = v113 + 2;
  v116 = v192;
  *v113 = v113 + 2;
  if ( v114 == v193 )
  {
    v146 = v116 + 1;
    if ( (unsigned int)(v116 + 1) >= 8 )
    {
      v113[2] = v193[0];
      *(_QWORD *)((char *)v115 + v146 - 8) = *(_QWORD *)((char *)&v193[-1] + v146);
      v147 = (unsigned __int64)(v113 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v148 = (char *)v115 - v147;
      v149 = (char *)((char *)v193 - v148);
      v150 = ((_DWORD)v148 + v146) & 0xFFFFFFF8;
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
    else if ( (v146 & 4) != 0 )
    {
      *((_DWORD *)v113 + 4) = v193[0];
      *(_DWORD *)((char *)v115 + v146 - 4) = *(_DWORD *)((char *)&v192 + v146 + 4);
    }
    else if ( (_DWORD)v116 != -1 )
    {
      *((_BYTE *)v113 + 16) = v193[0];
      if ( (v146 & 2) != 0 )
        *(_WORD *)((char *)v115 + v146 - 2) = *(_WORD *)((char *)&v192 + v146 + 6);
    }
  }
  else
  {
    *v113 = v114;
    v113[2] = v193[0];
  }
  v113[1] = v116;
  v191 = v193;
  LOBYTE(v193[0]) = 0;
  v192 = 0;
  v197 = (unsigned __int64)v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v212,
    (const __m128i *)&v194,
    2,
    1);
  v212[2] = 0;
  v198 = 0;
  *(_QWORD *)&v199 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v198 = 3;
  v117 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v117, "position", v118, v119, v120, v121, v156, v162, v168);
  v200 = 0;
  v201.m128i_i64[0] = 0;
  v199 = (unsigned __int64)v117;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v200 = 3;
  v122 = v189[1];
  src = v189[0];
  v123 = (_QWORD *)operator new(0x20u);
  v124 = v123 + 2;
  v179 = (__int64)v122;
  v125 = v123;
  *v123 = v123 + 2;
  if ( (unsigned __int64)v122 > 0xF )
  {
    v144 = std::string::_M_create();
    *v125 = v144;
    v124 = (_BYTE *)v144;
    v145 = v179;
    v126 = (__m128i)(unsigned __int64)v125;
    v125[2] = v179;
    v127 = v145 + 1;
    if ( v145 )
    {
      v128 = -1;
      if ( !v127 )
        goto LABEL_26;
      goto LABEL_25;
    }
LABEL_38:
    *v124 = *src;
    v128 = v179;
    goto LABEL_26;
  }
  v126 = (__m128i)(unsigned __int64)v123;
  v127 = (size_t)v122 + 1;
  if ( !v122 )
    goto LABEL_38;
LABEL_25:
  v176 = v126;
  memcpy(v124, src, v127);
  v128 = v179;
  v126 = _mm_load_si128(&v176);
LABEL_26:
  v125[1] = v128;
  v201 = v126;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v213,
    (const __m128i *)&v198,
    2,
    1);
  v213[2] = 0;
  v202 = 0;
  *(_QWORD *)&v203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v202 = 3;
  v129 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v129, "line", v130, v131, v132, v133, v157, v163, v169);
  v204 = 5;
  v205 = v103;
  v206 = 0;
  v203 = (unsigned __int64)v129;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v214,
    (const __m128i *)&v202,
    2,
    1);
  v214[2] = 0;
  LOBYTE(v207) = 0;
  *(_QWORD *)&v208 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v207) = 3;
  v134 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v134, "success", v135, v136, v137, v138, v158, v164, v170);
  v209 = 4;
  v210 = 1;
  v211 = 0;
  v208 = (unsigned __int64)v134;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v215,
    v165,
    2,
    1);
  v215[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v171,
    (__int64)v212,
    4,
    v139,
    v140,
    v141,
    v159,
    (__int64)v165,
    (int)v171,
    (int)v216,
    (int)v187,
    (int)v188,
    (__int64)&v195,
    (int)&v197,
    (int)&v199,
    (int)&v201,
    (int)src,
    (char)&v194,
    (__int64)v189,
    (int)&v191,
    v176.m128i_i64[0]);
  v142 = v173;
  do
  {
    v142 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v142 != v212 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v191 != v193 )
    operator delete(v191, v193[0] + 1LL);
  if ( v189[0] != &v190 )
    operator delete(v189[0], v190 + 1);
  if ( v187[0] != v174 )
    operator delete(v187[0], v188[0] + 1LL);
  return v172;
}

