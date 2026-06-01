__int64 __fastcall ida_mcp::tools::data_creation::`anonymous namespace'::handle_get_file_offset(
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
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        char a16,
        __int64 a17,
        __int64 a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        char a24,
        int a25,
        int a26,
        int a27,
        char a28,
        int a29,
        int a30,
        char a31,
        int a32,
        int a33,
        char a34,
        int a35,
        int a36,
        char a37,
        char a38,
        int a39,
        char a40,
        int a41,
        int a42,
        char a43,
        char a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        __int64 a52,
        __int64 a53,
        char a54,
        int a55,
        int a56,
        int a57,
        int a58,
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
        __int64 a73)
{
  void *exception; // r12
  char *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  size_t *v79; // r12
  __int64 v80; // rax
  _QWORD *v81; // rbp
  _QWORD *v82; // r13
  size_t v83; // r14
  const void *v84; // rdi
  _QWORD *v85; // r15
  size_t i; // rbx
  size_t v87; // rdx
  int v88; // eax
  __int64 v89; // rbx
  size_t v90; // rbx
  size_t v91; // rdx
  int v92; // eax
  __int64 v93; // r14
  __int8 v94; // r14
  char *v95; // r12
  int *v96; // rax
  int *v97; // r13
  __int64 v98; // rbx
  bool v99; // r13
  __int64 fileregion_offset; // rbp
  __int64 *v101; // r12
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  _QWORD *v110; // rax
  _QWORD *v111; // rdx
  _QWORD *v112; // rcx
  __int64 v113; // rsi
  __int64 *v114; // r12
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  __int8 v120; // dl
  __int64 *v121; // r12
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  _QWORD *v130; // rax
  _QWORD *v131; // rdx
  _QWORD *v132; // rcx
  __int64 v133; // rdi
  __m128i v134; // xmm0
  __int64 *v135; // r12
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  _QWORD *v143; // rbp
  std::runtime_error *v145; // rax
  unsigned int v146; // edx
  unsigned int v147; // edx
  unsigned __int64 v148; // rdi
  char *v149; // rcx
  char *v150; // r8
  unsigned int v151; // edx
  unsigned int v152; // edx
  unsigned int v153; // ecx
  __int64 v154; // r9
  unsigned __int64 v155; // r8
  char *v156; // rcx
  char *v157; // r9
  unsigned int v158; // edx
  unsigned int v159; // edx
  unsigned int v160; // ecx
  __int64 v161; // r10
  int v162; // [rsp+0h] [rbp-258h]
  int v163; // [rsp+0h] [rbp-258h]
  int v164; // [rsp+0h] [rbp-258h]
  int v165; // [rsp+0h] [rbp-258h]
  int v166; // [rsp+0h] [rbp-258h]
  const __m128i *v167; // [rsp+0h] [rbp-258h]
  int v168; // [rsp+8h] [rbp-250h]
  int v169; // [rsp+8h] [rbp-250h]
  int v170; // [rsp+8h] [rbp-250h]
  int v171; // [rsp+8h] [rbp-250h]
  int v172; // [rsp+8h] [rbp-250h]
  __int64 v173; // [rsp+8h] [rbp-250h]
  _QWORD *v174; // [rsp+8h] [rbp-250h]
  __int64 v175; // [rsp+10h] [rbp-248h]
  __int64 v176; // [rsp+10h] [rbp-248h]
  __int64 v177; // [rsp+10h] [rbp-248h]
  __int64 v178; // [rsp+10h] [rbp-248h]
  __int64 v179; // [rsp+10h] [rbp-248h]
  _QWORD *v180; // [rsp+10h] [rbp-248h]
  __int64 v181; // [rsp+10h] [rbp-248h]
  __m128i v182; // [rsp+50h] [rbp-208h] BYREF
  __m128i v183; // [rsp+60h] [rbp-1F8h] BYREF
  void *v184; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v185; // [rsp+78h] [rbp-1E0h]
  _QWORD v186[2]; // [rsp+80h] [rbp-1D8h] BYREF
  void *v187; // [rsp+90h] [rbp-1C8h] BYREF
  __int64 v188; // [rsp+98h] [rbp-1C0h]
  _QWORD v189[2]; // [rsp+A0h] [rbp-1B8h] BYREF
  char v190; // [rsp+B0h] [rbp-1A8h] BYREF
  __int128 v191; // [rsp+B8h] [rbp-1A0h] BYREF
  char v192; // [rsp+C8h] [rbp-190h]
  __int128 v193; // [rsp+D0h] [rbp-188h] BYREF
  char v194; // [rsp+E0h] [rbp-178h] BYREF
  _OWORD v195[2]; // [rsp+E8h] [rbp-170h] BYREF
  __int64 v196; // [rsp+108h] [rbp-150h]
  char v197; // [rsp+110h] [rbp-148h] BYREF
  _OWORD v198[2]; // [rsp+118h] [rbp-140h] BYREF
  __int64 v199; // [rsp+138h] [rbp-120h]
  void *s2; // [rsp+140h] [rbp-118h] BYREF
  size_t n[2]; // [rsp+148h] [rbp-110h] BYREF
  char v202; // [rsp+158h] [rbp-100h]
  _BOOL8 v203; // [rsp+160h] [rbp-F8h]
  __int64 v204; // [rsp+168h] [rbp-F0h]
  _QWORD v205[3]; // [rsp+170h] [rbp-E8h] BYREF
  _QWORD v206[3]; // [rsp+188h] [rbp-D0h] BYREF
  _QWORD v207[3]; // [rsp+1A0h] [rbp-B8h] BYREF
  _QWORD v208[3]; // [rsp+1B8h] [rbp-A0h] BYREF
  char v209[32]; // [rsp+1D0h] [rbp-88h] BYREF
  char v210[40]; // [rsp+1F0h] [rbp-68h] BYREF
  unsigned __int64 v211; // [rsp+218h] [rbp-40h]

  v211 = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>((__int64 *)&s2, "address", a3, a4, a5, a6, (int)&s2, v168, a1);
  v79 = (size_t *)s2;
  if ( *(_BYTE *)a2 != 1 )
    ida_mcp::tools::data_creation::`anonymous namespace'::handle_get_file_offset(
      (__int64)&s2,
      (__int64)"address",
      v75,
      v76,
      v77,
      v78,
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
      a73);
  v80 = *(_QWORD *)(a2 + 8);
  v81 = *(_QWORD **)(v80 + 16);
  v82 = (_QWORD *)(v80 + 8);
  if ( !v81 )
    goto LABEL_25;
  v83 = n[0];
  v84 = (const void *)v81[4];
  v85 = (_QWORD *)(v80 + 8);
  for ( i = v81[5]; ; i = v81[5] )
  {
    v87 = i;
    if ( v83 <= i )
      v87 = v83;
    if ( !v87 || (v88 = memcmp(v84, v79, v87)) == 0 )
    {
      v89 = i - v83;
      if ( v89 > 0x7FFFFFFF )
        goto LABEL_4;
      if ( v89 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v88 = v89;
    }
    if ( v88 < 0 )
      break;
LABEL_4:
    v85 = v81;
    v81 = (_QWORD *)v81[2];
    if ( !v81 )
      goto LABEL_15;
LABEL_5:
    v84 = (const void *)v81[4];
  }
  v81 = (_QWORD *)v81[3];
  if ( v81 )
    goto LABEL_5;
LABEL_15:
  if ( v82 == v85 )
    goto LABEL_25;
  v90 = v85[5];
  v91 = v90;
  if ( v83 <= v90 )
    v91 = v83;
  if ( v91 )
  {
    v92 = memcmp(v79, (const void *)v85[4], v91);
    if ( v92 )
    {
LABEL_23:
      if ( v92 >= 0 )
        v82 = v85;
      goto LABEL_25;
    }
  }
  v93 = v83 - v90;
  if ( v93 > 0x7FFFFFFF )
  {
    v82 = v85;
    goto LABEL_26;
  }
  if ( v93 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v92 = v93;
    goto LABEL_23;
  }
LABEL_25:
  if ( v79 != &n[1] )
LABEL_26:
    operator delete(v79, n[1] + 1);
  LOBYTE(n[1]) = 0;
  v94 = *((_BYTE *)v82 + 64);
  s2 = &n[1];
  n[0] = 0;
  if ( v94 != 3 )
  {
    exception = __cxa_allocate_exception(0x20u);
    switch ( *((_BYTE *)v82 + 64) )
    {
      case 0:
        v74 = "null";
        break;
      case 1:
        v74 = "object";
        break;
      case 2:
        v74 = (char *)"array";
        break;
      case 3:
        v74 = "string";
        break;
      case 4:
        v74 = "boolean";
        break;
      case 8:
        v74 = "binary";
        break;
      case 9:
        v74 = "discarded";
        break;
      default:
        v74 = "number";
        break;
    }
    v183.m128i_i64[0] = (__int64)v74;
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
  v95 = (char *)s2;
  if ( n[0] > 2 && *(_BYTE *)s2 == 48 && (*((_BYTE *)s2 + 1) & 0xDF) == 0x58 )
    v95 = (char *)s2 + 2;
  v96 = __errno_location();
  *v96 = 0;
  v97 = v96;
  v98 = __isoc23_strtoull();
  if ( v95 == (char *)v183.m128i_i64[0] || *(_BYTE *)v183.m128i_i64[0] || (v99 = v98 == -1 && *v97 == 34) )
  {
    if ( s2 != &n[1] )
      operator delete(s2, n[1] + 1);
    v145 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v145, "Invalid address");
    JUMPOUT(0x125AC7);
  }
  if ( s2 != &n[1] )
    operator delete(s2, n[1] + 1);
  *(_QWORD *)&v191 = 0;
  fileregion_offset = get_fileregion_offset();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v190 = 3;
  v101 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v101, "address", v102, v103, v104, v105, v162, v169, v175);
  v191 = (unsigned __int64)v101;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v184, v209, v106, v107, v108, v109, v163, (int)v209, v176);
  v192 = 0;
  *(_QWORD *)&v193 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v192 = 3;
  v110 = (_QWORD *)operator new(0x20u);
  v111 = v184;
  v112 = v110 + 2;
  v113 = v185;
  *v110 = v110 + 2;
  if ( v111 == v186 )
  {
    v146 = v113 + 1;
    if ( (unsigned int)(v113 + 1) >= 8 )
    {
      v110[2] = v186[0];
      *(_QWORD *)((char *)v112 + v146 - 8) = *(_QWORD *)((char *)&v186[-1] + v146);
      v148 = (unsigned __int64)(v110 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v149 = (char *)v112 - v148;
      v150 = (char *)((char *)v186 - v149);
      v151 = ((_DWORD)v149 + v146) & 0xFFFFFFF8;
      if ( v151 >= 8 )
      {
        v152 = v151 & 0xFFFFFFF8;
        v153 = 0;
        do
        {
          v154 = v153;
          v153 += 8;
          *(_QWORD *)(v148 + v154) = *(_QWORD *)&v150[v154];
        }
        while ( v153 < v152 );
      }
    }
    else if ( (v146 & 4) != 0 )
    {
      *((_DWORD *)v110 + 4) = v186[0];
      *(_DWORD *)((char *)v112 + v146 - 4) = *(_DWORD *)((char *)&v185 + v146 + 4);
    }
    else if ( (_DWORD)v113 != -1 )
    {
      *((_BYTE *)v110 + 16) = v186[0];
      if ( (v146 & 2) != 0 )
        *(_WORD *)((char *)v112 + v146 - 2) = *(_WORD *)((char *)&v185 + v146 + 6);
    }
  }
  else
  {
    *v110 = v111;
    v110[2] = v186[0];
  }
  v110[1] = v113;
  v184 = v186;
  v185 = 0;
  LOBYTE(v186[0]) = 0;
  v193 = (unsigned __int64)v110;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v205,
    (const __m128i *)&v190);
  v205[2] = 0;
  v194 = 0;
  *(_QWORD *)&v195[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v194 = 3;
  v114 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v114, "file_offset", v115, v116, v117, v118, v164, v170, v177);
  v119 = 0;
  v120 = 5;
  if ( fileregion_offset == -1 )
    v120 = 0;
  else
    v119 = fileregion_offset;
  v196 = 0;
  v195[0] = (unsigned __int64)v114;
  v182.m128i_i8[0] = v120;
  v182.m128i_i64[1] = v119;
  v195[1] = _mm_load_si128(&v182);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v206,
    (const __m128i *)&v194);
  v206[2] = 0;
  v197 = 0;
  *(_QWORD *)&v198[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v197 = 3;
  v121 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v121, "file_offset_hex", v122, v123, v124, v125, v165, v171, v178);
  v198[0] = (unsigned __int64)v121;
  if ( fileregion_offset == -1 )
  {
    v130 = nullptr;
    v94 = 0;
  }
  else
  {
    qsnprintf();
    std::string::basic_string<std::allocator<char>>((__int64 *)&v187, v210, v126, v127, v128, v129, v166, v172, v179);
    v183 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v130 = (_QWORD *)operator new(0x20u);
    v131 = v187;
    v132 = v130 + 2;
    v133 = v188;
    *v130 = v130 + 2;
    if ( v131 == v189 )
    {
      v147 = v133 + 1;
      if ( (unsigned int)(v133 + 1) >= 8 )
      {
        *v132 = v189[0];
        *(_QWORD *)((char *)v132 + v147 - 8) = *(_QWORD *)((char *)&v189[-1] + v147);
        v155 = (unsigned __int64)(v130 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v156 = (char *)v132 - v155;
        v157 = (char *)((char *)v189 - v156);
        v158 = ((_DWORD)v156 + v147) & 0xFFFFFFF8;
        if ( v158 >= 8 )
        {
          v159 = v158 & 0xFFFFFFF8;
          v160 = 0;
          do
          {
            v161 = v160;
            v160 += 8;
            *(_QWORD *)(v155 + v161) = *(_QWORD *)&v157[v161];
          }
          while ( v160 < v159 );
        }
      }
      else if ( (v147 & 4) != 0 )
      {
        *(_DWORD *)v132 = v189[0];
        *(_DWORD *)((char *)v132 + v147 - 4) = *(_DWORD *)((char *)&v188 + v147 + 4);
      }
      else if ( (_DWORD)v133 != -1 )
      {
        *(_BYTE *)v132 = v189[0];
        if ( (v147 & 2) != 0 )
          *(_WORD *)((char *)v132 + v147 - 2) = *(_WORD *)((char *)&v188 + v147 + 6);
      }
    }
    else
    {
      *v130 = v131;
      v130[2] = v189[0];
    }
    v130[1] = v133;
    v99 = 1;
    v187 = v189;
    v188 = 0;
    LOBYTE(v189[0]) = 0;
  }
  v183.m128i_i64[1] = (__int64)v130;
  v183.m128i_i8[0] = v94;
  v134 = _mm_load_si128(&v183);
  v199 = 0;
  v198[1] = v134;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v207,
    (const __m128i *)&v197);
  v207[2] = 0;
  LOBYTE(s2) = 0;
  n[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(s2) = 3;
  v135 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v135, "found", v136, v137, v138, v139, v166, v172, v179);
  v202 = 4;
  v204 = 0;
  *(_OWORD *)n = (unsigned __int64)v135;
  v203 = fileregion_offset != -1;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v208,
    v167);
  v208[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v180,
    (__int64)v205,
    4,
    v140,
    v141,
    v142,
    (int)v167,
    v173,
    (int)v180,
    (int)v198,
    (int)&v191,
    (int)&v193,
    (__int64)v195,
    (int)&v197,
    (int)&v190,
    (int)&v184,
    v182.m128i_i32[0],
    v182.m128i_i8[8],
    v183.m128i_i64[0],
    v183.m128i_i32[2],
    (__int64)v184);
  v143 = v174;
  do
  {
    v143 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v143 != v205 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v99 && v187 != v189 )
    operator delete(v187, v189[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v184 != v186 )
    operator delete(v184, v186[0] + 1LL);
  return v181;
}

