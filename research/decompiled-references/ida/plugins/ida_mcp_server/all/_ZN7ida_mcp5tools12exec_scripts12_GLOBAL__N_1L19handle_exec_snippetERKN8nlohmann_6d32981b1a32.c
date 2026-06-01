__int64 __fastcall ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_exec_snippet(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        __int64 a20,
        __int64 a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        char a32,
        char a33,
        int a34,
        char a35,
        char a36,
        int a37,
        char a38,
        int a39,
        int a40,
        char a41,
        int a42,
        int a43,
        char a44,
        int a45,
        int a46,
        char a47,
        int a48,
        int a49,
        char *a50,
        __int64 a51,
        char a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        __int64 a59)
{
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 *v63; // r12
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  const char *v68; // r15
  __int64 *v69; // r13
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 *v74; // r15
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  _QWORD *v79; // rax
  unsigned __int64 v80; // rdx
  _BYTE *v81; // rdi
  __int64 *v82; // r15
  __m128i v83; // xmm0
  size_t v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  _BYTE **v89; // r15
  __int64 *v90; // r12
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  unsigned __int64 v95; // r15
  _QWORD *v96; // rax
  _BYTE *v97; // rdi
  __int64 *v98; // r13
  __m128i v99; // xmm0
  size_t v100; // rcx
  __int64 v101; // rax
  __int64 *v102; // r15
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __m128i v107; // xmm0
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  _BYTE **v111; // r15
  __int64 v113; // r12
  __int64 v114; // r13
  __int64 v115; // r12
  __int64 v116; // rbp
  size_t v117; // rdx
  int v118; // eax
  unsigned __int64 v119; // r15
  unsigned __int64 v120; // r13
  size_t v121; // rdx
  int v122; // eax
  __int64 v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  unsigned __int64 v127; // rax
  int v128; // [rsp+0h] [rbp-1E8h]
  int v129; // [rsp+0h] [rbp-1E8h]
  int v130; // [rsp+0h] [rbp-1E8h]
  int v131; // [rsp+0h] [rbp-1E8h]
  int v132; // [rsp+0h] [rbp-1E8h]
  int v133; // [rsp+0h] [rbp-1E8h]
  int v134; // [rsp+8h] [rbp-1E0h]
  int v135; // [rsp+8h] [rbp-1E0h]
  _QWORD *v136; // [rsp+8h] [rbp-1E0h]
  __int64 v137; // [rsp+8h] [rbp-1E0h]
  int v138; // [rsp+8h] [rbp-1E0h]
  _QWORD *v139; // [rsp+8h] [rbp-1E0h]
  __int64 v140; // [rsp+10h] [rbp-1D8h]
  __int64 v141; // [rsp+10h] [rbp-1D8h]
  int v142; // [rsp+10h] [rbp-1D8h]
  __int64 v143; // [rsp+10h] [rbp-1D8h]
  int v144; // [rsp+10h] [rbp-1D8h]
  __m128i v145; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i v146; // [rsp+30h] [rbp-1B8h] BYREF
  void *v147; // [rsp+40h] [rbp-1A8h]
  void *src; // [rsp+48h] [rbp-1A0h]
  int v149; // [rsp+50h] [rbp-198h]
  unsigned __int64 v150; // [rsp+58h] [rbp-190h]
  __m128i v151; // [rsp+60h] [rbp-188h] BYREF
  const char *v152; // [rsp+70h] [rbp-178h]
  __int128 v153; // [rsp+78h] [rbp-170h]
  void *v154; // [rsp+90h] [rbp-158h] BYREF
  __int64 v155; // [rsp+98h] [rbp-150h]
  _QWORD v156[2]; // [rsp+A0h] [rbp-148h] BYREF
  char v157[8]; // [rsp+B0h] [rbp-138h] BYREF
  __int128 v158; // [rsp+B8h] [rbp-130h]
  __int64 v159; // [rsp+C8h] [rbp-120h]
  __m128i v160; // [rsp+D0h] [rbp-118h] BYREF
  __int64 v161; // [rsp+E0h] [rbp-108h]
  __int64 v162; // [rsp+E8h] [rbp-100h]
  __int64 v163; // [rsp+F0h] [rbp-F8h]
  __int64 v164; // [rsp+F8h] [rbp-F0h]
  char v165; // [rsp+100h] [rbp-E8h] BYREF
  __int128 v166; // [rsp+108h] [rbp-E0h] BYREF
  char v167; // [rsp+118h] [rbp-D0h]
  __m128i v168; // [rsp+120h] [rbp-C8h]
  char v169; // [rsp+130h] [rbp-B8h] BYREF
  __int128 v170; // [rsp+138h] [rbp-B0h]
  _BYTE v171[24]; // [rsp+148h] [rbp-A0h] BYREF
  _BYTE *v172; // [rsp+160h] [rbp-88h] BYREF
  unsigned __int64 v173; // [rsp+168h] [rbp-80h]
  __int64 v174; // [rsp+170h] [rbp-78h]
  _QWORD v175[2]; // [rsp+178h] [rbp-70h] BYREF
  __int64 v176; // [rsp+188h] [rbp-60h]
  _QWORD v177[2]; // [rsp+190h] [rbp-58h] BYREF
  __int64 v178; // [rsp+1A0h] [rbp-48h]
  _QWORD v179[8]; // [rsp+1A8h] [rbp-40h] BYREF

  v179[0] = __readfsqword(0x28u);
  v154 = v156;
  v155 = 0;
  LOBYTE(v156[0]) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_exec_snippet(
      a2,
      (__int64)"code",
      v59,
      v60,
      v61,
      v62,
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
      a59);
  std::string::_M_assign();
  if ( *(_BYTE *)a2 == 1 )
  {
    v113 = *(_QWORD *)(a2 + 8);
    v114 = *(_QWORD *)(v113 + 16);
    if ( v114 )
    {
      v115 = v113 + 8;
      v116 = v115;
      do
      {
        while ( 1 )
        {
          v119 = *(_QWORD *)(v114 + 40);
          if ( !v119 )
            break;
          v117 = 7;
          if ( v119 <= 7 )
            v117 = *(_QWORD *)(v114 + 40);
          v118 = memcmp(*(const void **)(v114 + 32), "address", v117);
          if ( v118 || (v118 = v119 - 7, (__int64)(v119 - 7) <= 0x7FFFFFFF) )
          {
            if ( v118 < 0 )
              break;
          }
          v116 = v114;
          v114 = *(_QWORD *)(v114 + 16);
          if ( !v114 )
            goto LABEL_34;
        }
        v114 = *(_QWORD *)(v114 + 24);
      }
      while ( v114 );
LABEL_34:
      if ( v115 != v116 )
      {
        v120 = *(_QWORD *)(v116 + 40);
        if ( !v120 )
          goto LABEL_58;
        v121 = 7;
        if ( v120 <= 7 )
          v121 = *(_QWORD *)(v116 + 40);
        v122 = memcmp(*(const void **)(v116 + 32), "address", v121);
        if ( v122 || (v122 = v120 - 7, (__int64)(v120 - 7) <= 0x7FFFFFFF) )
        {
          if ( v122 <= 0 )
          {
LABEL_58:
            if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
            {
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
              if ( v173 != 1 || *v172 != 48 )
              {
                v152 = (const char *)ida_mcp::parse_ea(v172, v173);
                *(_QWORD *)&v153 = v123;
              }
              std::string::_M_dispose();
            }
          }
        }
      }
    }
  }
  v158 = 0;
  v157[0] = 2;
  v159 = 0;
  v152 = nullptr;
  v153 = 0;
  if ( !(unsigned __int8)eval_idc_expr() )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
    v161 = 0;
    v162 = 4;
    v163 = 0;
    v164 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v172,
      &v160);
    v174 = 0;
    v165 = 0;
    *(_QWORD *)&v166 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v165 = 3;
    v63 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v63, "error", v64, v65, v66, v67, v128, a1, (__int64)&v154);
    v166 = (unsigned __int64)v63;
    if ( (_QWORD)v153 )
      v68 = v152;
    else
      v68 = _qstring<char>::c_str(void)const::nullstr;
    v167 = 0;
    v168.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v167 = 3;
    v69 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v69, v68, v70, v71, v72, v73, v129, v134, v140);
    v147 = &v165;
    v168 = (__m128i)(unsigned __int64)v69;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v175,
      (const __m128i *)&v165);
    v176 = 0;
    v169 = 0;
    *(_QWORD *)&v170 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v169 = 3;
    v74 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v74, "code", v75, v76, v77, v78, v130, v135, v141);
    v171[0] = 0;
    v145.m128i_i64[0] = (__int64)&v171[8];
    *(_QWORD *)&v171[8] = 0;
    v170 = (unsigned __int64)v74;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v171[0] = 3;
    src = v154;
    v146.m128i_i64[0] = v155;
    v79 = (_QWORD *)operator new(0x20u);
    v80 = v146.m128i_i64[0];
    v81 = v79 + 2;
    v82 = v79;
    *v79 = v79 + 2;
    v150 = v80;
    if ( v80 > 0xF )
    {
      v126 = std::string::_M_create();
      *v82 = v126;
      v81 = (_BYTE *)v126;
      v127 = v150;
      v83 = (__m128i)(unsigned __int64)v82;
      v82[2] = v150;
      v84 = v127 + 1;
      if ( v127 )
      {
        v85 = -1;
        if ( v84 )
          goto LABEL_8;
LABEL_9:
        v82[1] = v85;
        *(__m128i *)&v171[8] = v83;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v177,
          (const __m128i *)&v169);
        v178 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v136,
          (__int64)&v172,
          3,
          v86,
          v87,
          v88,
          v131,
          (__int64)v136,
          v142,
          (int)&v166,
          v145.m128i_i32[0],
          v145.m128i_i32[2],
          v146.m128i_i64[0],
          v146.m128i_i32[2],
          (int)v147,
          (int)src,
          v149,
          v150,
          v151.m128i_i64[0],
          v151.m128i_i32[2],
          (__int64)v152);
        v89 = (_BYTE **)v179;
        do
        {
          v89 -= 3;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v89 != &v172 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_18;
      }
    }
    else
    {
      v83 = (__m128i)(unsigned __int64)v79;
      v84 = v80 + 1;
      if ( v80 )
      {
LABEL_8:
        v146 = v83;
        memcpy(v81, src, v84);
        v85 = v150;
        v83 = _mm_load_si128(&v146);
        goto LABEL_9;
      }
    }
    *v81 = *(_BYTE *)src;
    v85 = v150;
    goto LABEL_9;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v161 = 0;
  v162 = 4;
  v163 = 1;
  v164 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v172,
    &v160);
  v174 = 0;
  v165 = 0;
  *(_QWORD *)&v166 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v165 = 3;
  v90 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v90, "code", v91, v92, v93, v94, v128, a1, (__int64)&v154);
  v167 = 0;
  v166 = (unsigned __int64)v90;
  v168.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v167 = 3;
  v95 = v155;
  v147 = v154;
  v96 = (_QWORD *)operator new(0x20u);
  v97 = v96 + 2;
  v151.m128i_i64[0] = v95;
  v98 = v96;
  *v96 = v96 + 2;
  if ( v95 <= 0xF )
  {
    v99 = (__m128i)(unsigned __int64)v96;
    v100 = v95 + 1;
    if ( v95 )
    {
LABEL_14:
      v145 = v99;
      memcpy(v97, v147, v100);
      v101 = v151.m128i_i64[0];
      v99 = _mm_load_si128(&v145);
      goto LABEL_15;
    }
    goto LABEL_49;
  }
  v124 = std::string::_M_create();
  *v98 = v124;
  v97 = (_BYTE *)v124;
  v125 = v151.m128i_i64[0];
  v99 = (__m128i)(unsigned __int64)v98;
  v98[2] = v151.m128i_i64[0];
  v100 = v125 + 1;
  if ( !v125 )
  {
LABEL_49:
    *v97 = *(_BYTE *)v147;
    v101 = v151.m128i_i64[0];
    goto LABEL_15;
  }
  v101 = -1;
  if ( v100 )
    goto LABEL_14;
LABEL_15:
  v98[1] = v101;
  v147 = &v165;
  v168 = v99;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v175,
    (const __m128i *)&v165);
  v176 = 0;
  v169 = 0;
  *(_QWORD *)&v170 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v169 = 3;
  v102 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v102, "result", v103, v104, v105, v106, v132, v138, v143);
  v170 = (unsigned __int64)v102;
  ida_mcp::tools::exec_scripts::`anonymous namespace'::idc_value_to_json(&v151, (__int64)v157);
  v107 = _mm_load_si128(&v151);
  *(_QWORD *)&v171[16] = 0;
  *(__m128i *)v171 = v107;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v177,
    (const __m128i *)&v169);
  v178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v139,
    (__int64)&v172,
    3,
    v108,
    v109,
    v110,
    v133,
    (__int64)v139,
    v144,
    (int)&v166,
    v145.m128i_i32[0],
    v145.m128i_i32[2],
    v146.m128i_i64[0],
    v146.m128i_i32[2],
    (int)v147,
    (int)src,
    v149,
    v150,
    v151.m128i_i64[0],
    v151.m128i_i32[2],
    (__int64)v152);
  v111 = (_BYTE **)v179;
  do
  {
    v111 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v111 != &v172 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_18:
  if ( v152 )
  {
    *(_QWORD *)&v153 = 0;
    qfree();
  }
  free_idcv();
  if ( v154 != v156 )
    operator delete(v154, v156[0] + 1LL);
  return v137;
}

