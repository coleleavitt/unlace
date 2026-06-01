__int64 __fastcall ida_mcp::tools::control_flow::`anonymous namespace'::is_block_reachable(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        void *a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        int a17,
        __int64 a18,
        qflow_chart_t *a19,
        int a20,
        int a21,
        int a22,
        int a23,
        char a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        __int64 a30,
        __int64 a31,
        int a32,
        int a33,
        int a34,
        __int64 a35,
        int a36,
        int a37,
        int a38,
        __int64 a39,
        char a40,
        int a41,
        int a42,
        char a43,
        char a44,
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
        char a61,
        char a62,
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
        __int64 a78,
        __int64 a79,
        int a80,
        int a81,
        int a82,
        int a83,
        int a84,
        int a85,
        int a86,
        int a87,
        int a88,
        __int64 a89)
{
  std::runtime_error *v89; // rbp
  std::runtime_error *v90; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v92; // rax
  _BYTE *v93; // rbx
  char *v94; // rbx
  int *v95; // rax
  int *v96; // r14
  __int64 v97; // rbp
  std::runtime_error *v98; // rbx
  int v99; // ebx
  __int64 *func; // rax
  __int64 *v101; // rbp
  __int64 v102; // xmm0_8
  __int64 v103; // r12
  _BYTE *v104; // rax
  __m128i v105; // xmm0
  int v106; // ebp
  int v107; // eax
  unsigned __int64 v108; // r15
  char *v109; // r12
  int *v110; // r9
  _QWORD *v111; // rax
  int *v112; // rbp
  int *v113; // r15
  int *v114; // r8
  int *v115; // r10
  __int64 v116; // r14
  __int64 v117; // r14
  __int64 v118; // rsi
  __int64 v119; // rdi
  __int64 v120; // rbx
  unsigned __int64 v121; // rcx
  char *v122; // rdx
  unsigned __int8 v123; // bp
  __int64 *v124; // rbx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 *v129; // rbx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 *v134; // rbx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 *v139; // rbx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  int v144; // eax
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  qflow_chart_t *v148; // rbp
  __int64 v149; // rbx
  void **v150; // rbp
  unsigned __int64 v151; // rbx
  void *v152; // rdi
  __int64 v153; // rdi
  __int64 v154; // r12
  __int64 v155; // rbp
  _QWORD *v156; // rbx
  __int64 v158; // rdx
  __int64 v159; // rax
  int v160; // ecx
  __int64 v161; // rsi
  int v162; // [rsp+580h] [rbp-2D8h]
  int v163; // [rsp+580h] [rbp-2D8h]
  int v164; // [rsp+580h] [rbp-2D8h]
  int v165; // [rsp+580h] [rbp-2D8h]
  int v166; // [rsp+580h] [rbp-2D8h]
  __m128i v167; // [rsp+588h] [rbp-2D0h] BYREF
  __int64 v168; // [rsp+598h] [rbp-2C0h]
  int *v169; // [rsp+5A0h] [rbp-2B8h]
  int *v170; // [rsp+5A8h] [rbp-2B0h]
  void *v171; // [rsp+5B0h] [rbp-2A8h]
  __int64 v172; // [rsp+5B8h] [rbp-2A0h]
  int v173[2]; // [rsp+5C0h] [rbp-298h]
  int v174; // [rsp+5C8h] [rbp-290h]
  int v175; // [rsp+5CCh] [rbp-28Ch]
  void *v176; // [rsp+5D0h] [rbp-288h]
  int v177[2]; // [rsp+5D8h] [rbp-280h]
  __int64 v178; // [rsp+5E0h] [rbp-278h]
  qflow_chart_t *v179; // [rsp+5E8h] [rbp-270h]
  __int64 v180; // [rsp+5F0h] [rbp-268h]
  int v181[2]; // [rsp+5F8h] [rbp-260h]
  unsigned __int64 v182; // [rsp+600h] [rbp-258h]
  int v183[2]; // [rsp+608h] [rbp-250h]
  char v184[8]; // [rsp+610h] [rbp-248h]
  int v185[2]; // [rsp+618h] [rbp-240h]
  int v186[2]; // [rsp+620h] [rbp-238h]
  int v187[2]; // [rsp+628h] [rbp-230h]
  int v188[2]; // [rsp+630h] [rbp-228h]
  int v189[2]; // [rsp+640h] [rbp-218h] BYREF
  __int64 v190; // [rsp+648h] [rbp-210h]
  int *v191; // [rsp+650h] [rbp-208h]
  void *v192; // [rsp+658h] [rbp-200h]
  int *v193; // [rsp+660h] [rbp-1F8h]
  __int64 v194; // [rsp+668h] [rbp-1F0h]
  int *v195; // [rsp+670h] [rbp-1E8h]
  int *v196; // [rsp+678h] [rbp-1E0h]
  int *v197; // [rsp+680h] [rbp-1D8h]
  __int64 v198; // [rsp+688h] [rbp-1D0h]
  char v199; // [rsp+690h] [rbp-1C8h] BYREF
  __int128 v200; // [rsp+698h] [rbp-1C0h]
  char v201; // [rsp+6A8h] [rbp-1B0h]
  __int64 v202; // [rsp+6B0h] [rbp-1A8h]
  __int64 v203; // [rsp+6B8h] [rbp-1A0h]
  char v204; // [rsp+6C0h] [rbp-198h] BYREF
  __int128 v205; // [rsp+6C8h] [rbp-190h]
  char v206; // [rsp+6D8h] [rbp-180h]
  __int64 v207; // [rsp+6E0h] [rbp-178h]
  __int64 v208; // [rsp+6E8h] [rbp-170h]
  char v209; // [rsp+6F0h] [rbp-168h] BYREF
  __int128 v210; // [rsp+6F8h] [rbp-160h]
  char v211; // [rsp+708h] [rbp-150h]
  __int64 v212; // [rsp+710h] [rbp-148h]
  __int64 v213; // [rsp+718h] [rbp-140h]
  char v214; // [rsp+720h] [rbp-138h] BYREF
  __int128 v215; // [rsp+728h] [rbp-130h] BYREF
  char v216; // [rsp+738h] [rbp-120h]
  __int64 v217; // [rsp+740h] [rbp-118h]
  __int64 v218; // [rsp+748h] [rbp-110h]
  void *v219; // [rsp+750h] [rbp-108h] BYREF
  int v220[2]; // [rsp+758h] [rbp-100h]
  int v221[2]; // [rsp+760h] [rbp-F8h] BYREF
  _QWORD v222[3]; // [rsp+768h] [rbp-F0h] BYREF
  _QWORD v223[3]; // [rsp+780h] [rbp-D8h] BYREF
  _QWORD v224[3]; // [rsp+798h] [rbp-C0h] BYREF
  int v225[2]; // [rsp+7B0h] [rbp-A8h] BYREF
  int v226; // [rsp+7B8h] [rbp-A0h]
  int v227[2]; // [rsp+7C0h] [rbp-98h]
  int v228[4]; // [rsp+7C8h] [rbp-90h]
  int v229[4]; // [rsp+7D8h] [rbp-80h]
  int v230[2]; // [rsp+7E8h] [rbp-70h]
  int v231; // [rsp+7F0h] [rbp-68h]
  int v232[2]; // [rsp+7F8h] [rbp-60h]
  int v233[4]; // [rsp+800h] [rbp-58h]
  int v234; // [rsp+810h] [rbp-48h]
  __int64 v235; // [rsp+818h] [rbp-40h]

  *(_QWORD *)v181 = a1;
  v235 = __readfsqword(0x28u);
  v219 = v221;
  v93 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_QWORD *)v220 = 0;
  v178 = (__int64)&v219;
  LOBYTE(v221[0]) = 0;
  if ( *v93 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v93 )
    {
      case 0:
        v92 = "null";
        break;
      case 1:
        v92 = "object";
        break;
      case 2:
        v92 = (char *)"array";
        break;
      case 3:
        v92 = "string";
        break;
      case 4:
        v92 = "boolean";
        break;
      case 8:
        v92 = "binary";
        break;
      case 9:
        v92 = "discarded";
        break;
      default:
        v92 = "number";
        break;
    }
    *(_QWORD *)v189 = v92;
    v179 = (qflow_chart_t *)v225;
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
  v94 = (char *)v219;
  if ( *(_QWORD *)v220 > 2u && *(_BYTE *)v219 == 48 && (*((_BYTE *)v219 + 1) & 0xDF) == 0x58 )
    v94 = (char *)v219 + 2;
  v95 = __errno_location();
  *v95 = 0;
  v96 = v95;
  *(_QWORD *)v177 = v189;
  v97 = __isoc23_strtoull();
  if ( v94 == *(char **)v189 || **(_BYTE **)v189 || *v96 == 34 && v97 == -1 )
  {
    if ( v219 != v221 )
      operator delete(v219, *(_QWORD *)v221 + 1LL);
    v98 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v98, "Invalid address format");
    __cxa_throw(
      v98,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v219 != v221 )
    operator delete(v219, *(_QWORD *)v221 + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v189[0] = 0;
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
  v99 = v189[0];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v189[0] = 0;
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
  v175 = v189[0];
  func = (__int64 *)get_func();
  v101 = func;
  if ( !func )
  {
    v90 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v90, "No function at address");
    __cxa_throw(
      v90,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v102 = *func;
  v103 = func[1];
  LOBYTE(v226) = 0;
  v167.m128i_i64[0] = v102;
  *(_QWORD *)v225 = off_445398;
  *(_QWORD *)v227 = 0;
  *(_OWORD *)v228 = 0;
  v104 = (_BYTE *)qvector_reserve();
  v105 = _mm_loadl_epi64(&v167);
  *(_QWORD *)v227 = v104;
  *(_QWORD *)v228 = 1;
  *v104 = 0;
  *(__m128i *)v229 = _mm_unpacklo_epi64(v105, (__m128i)(unsigned __int64)v103);
  *(_QWORD *)v230 = v101;
  v231 = 0;
  *(_QWORD *)v232 = 0;
  v234 = 0;
  v179 = (qflow_chart_t *)v225;
  *(_OWORD *)v233 = 0;
  create_qflow_chart();
  if ( v99 < 0 )
    goto LABEL_65;
  v106 = v233[0];
  v107 = v175;
  if ( v175 < v99 )
    v107 = v99;
  HIBYTE(v180) = v175 < 0 || v233[0] <= v107;
  if ( HIBYTE(v180) )
  {
LABEL_65:
    v89 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v89, "Invalid block IDs");
    __cxa_throw(
      v89,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  *(_QWORD *)v184 = 0;
  *(_QWORD *)v185 = 0;
  *(_QWORD *)v186 = 0;
  v108 = 8 * ((unsigned __int64)(v233[0] + 63LL) >> 6);
  *(_QWORD *)v187 = 0;
  v182 = v108;
  *(_QWORD *)v188 = 0;
  v109 = (char *)operator new(v108);
  *(_QWORD *)v188 = &v109[v108];
  *(_QWORD *)v184 = v109;
  v185[0] = 0;
  *(_QWORD *)v186 = &v109[8 * ((__int64)v106 >> 6)];
  v187[0] = v106 & 0x3F;
  memset(v109, 0, v108);
  v171 = (void *)operator new(0x40u);
  v168 = (__int64)v171 + 24;
  v110 = (int *)operator new(0x200u);
  v111 = v171;
  v172 = 8;
  *v110 = v99;
  v112 = v110 + 1;
  v113 = v110;
  v114 = v110 + 128;
  v111[3] = v110;
  v115 = v110 + 128;
  *(_QWORD *)v183 = v99;
  v176 = v110;
  *(_QWORD *)&v109[8 * ((unsigned __int64)v99 >> 6)] |= 1LL << v99;
  LODWORD(v180) = -1;
  v167.m128i_i64[0] = v168;
  while ( 2 )
  {
    *(_QWORD *)v173 = v114
                    - v113
                    + v112
                    - v110
                    + (((v167.m128i_i64[0] == 0) + ((v167.m128i_i64[0] - v168) >> 3) - 1) << 7);
    if ( v173[0] <= 0 )
    {
      if ( v112 != v113 )
      {
        while ( 1 )
          ;
      }
      LODWORD(v180) = v180 + 1;
      v123 = 0;
    }
    else
    {
      v167.m128i_i32[2] = 0;
      do
      {
        v116 = *v113;
        if ( v113 == v114 - 1 )
        {
          v170 = v115;
          v169 = v110;
          operator delete(v176, 0x200u);
          v115 = v170;
          v110 = v169;
          v113 = *(int **)(v168 + 8);
          v168 += 8;
          v176 = v113;
          v114 = v113 + 128;
          if ( v175 == (_DWORD)v116 )
          {
LABEL_56:
            LODWORD(v180) = v180 + 1;
            v123 = 1;
            HIBYTE(v180) = 1;
            goto LABEL_32;
          }
        }
        else
        {
          ++v113;
          if ( v175 == (_DWORD)v116 )
            goto LABEL_56;
        }
        v117 = v116 << 6;
        v118 = v117 + *(_QWORD *)v232;
        v119 = *(_QWORD *)(v117 + *(_QWORD *)v232 + 24);
        if ( (int)v119 > 0 )
        {
          v120 = 0;
          do
          {
            v121 = *(int *)(*(_QWORD *)(v118 + 16) + 4 * v120);
            v122 = &v109[8 * (v121 >> 6)];
            if ( ((1LL << v121) & *(_QWORD *)v122) == 0 )
            {
              *(_QWORD *)v122 |= 1LL << v121;
              if ( v112 == v115 - 1 )
              {
                v158 = v114 - v113;
                if ( v158 + v112 - v110 + (((v167.m128i_i64[0] == 0) + ((v167.m128i_i64[0] - v168) >> 3) - 1) << 7) == 0x1FFFFFFFFFFFFFFFLL )
                  ida_mcp::tools::control_flow::`anonymous namespace'::is_block_reachable(
                    -1,
                    v118,
                    v158,
                    v121,
                    (int)v114,
                    (int)v110,
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
                    a85,
                    a86,
                    a87,
                    a88,
                    a89);
                if ( (unsigned __int64)(v172 - ((v167.m128i_i64[0] - (__int64)v171) >> 3)) <= 1 )
                {
                  LODWORD(v169) = v121;
                  *(_QWORD *)v189 = v171;
                  v190 = v172;
                  v191 = v113;
                  v192 = v176;
                  v193 = v114;
                  v194 = v168;
                  v195 = v112;
                  v196 = v110;
                  v197 = v115;
                  v198 = v167.m128i_i64[0];
                  std::deque<int>::_M_reallocate_map();
                  v113 = v191;
                  v114 = v193;
                  v112 = v195;
                  v171 = *(void **)v189;
                  LODWORD(v121) = (_DWORD)v169;
                  v172 = v190;
                  v176 = v192;
                  v168 = v194;
                  v167.m128i_i64[0] = v198;
                }
                v170 = v114;
                LODWORD(v169) = v121;
                v110 = (int *)operator new(0x200u);
                v159 = v167.m128i_i64[0];
                v160 = (int)v169;
                v161 = *(_QWORD *)v232;
                v114 = v170;
                v115 = v110 + 128;
                *(_QWORD *)(v167.m128i_i64[0] + 8) = v110;
                v118 = v117 + v161;
                *v112 = v160;
                v112 = v110;
                v167.m128i_i64[0] = v159 + 8;
                v119 = *(_QWORD *)(v118 + 24);
              }
              else
              {
                v119 = *(_QWORD *)(v118 + 24);
                *v112++ = v121;
              }
            }
            ++v120;
          }
          while ( (int)v120 < (int)v119 );
        }
        ++v167.m128i_i32[2];
      }
      while ( v173[0] != v167.m128i_i32[2] );
      LODWORD(v180) = v180 + 1;
      if ( v113 != v112 )
        continue;
      v123 = 0;
    }
    break;
  }
LABEL_32:
  v199 = 0;
  *(_QWORD *)&v200 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v199 = 3;
  v124 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v124,
    "from_block",
    v125,
    v126,
    v127,
    v128,
    v162,
    v167.m128i_i32[0],
    v167.m128i_i64[1]);
  v201 = 5;
  v202 = *(_QWORD *)v183;
  v200 = (unsigned __int64)v124;
  v203 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    (_QWORD *)v178,
    (const __m128i *)&v199);
  *(_QWORD *)v221 = 0;
  v204 = 0;
  *(_QWORD *)&v205 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v204 = 3;
  v129 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v129,
    "to_block",
    v130,
    v131,
    v132,
    v133,
    v163,
    v167.m128i_i32[0],
    v167.m128i_i64[1]);
  v206 = 5;
  v207 = v175;
  v205 = (unsigned __int64)v129;
  v208 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v222,
    (const __m128i *)&v204);
  v222[2] = 0;
  v209 = 0;
  *(_QWORD *)&v210 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v209 = 3;
  v134 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v134,
    "reachable",
    v135,
    v136,
    v137,
    v138,
    v164,
    v167.m128i_i32[0],
    v167.m128i_i64[1]);
  v211 = 4;
  v212 = v123;
  v213 = 0;
  v210 = (unsigned __int64)v134;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v223,
    (const __m128i *)&v209);
  v223[2] = 0;
  v214 = 0;
  *(_QWORD *)&v215 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v214 = 3;
  v139 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v139,
    "distance",
    v140,
    v141,
    v142,
    v143,
    v165,
    v167.m128i_i32[0],
    v167.m128i_i64[1]);
  v144 = -1;
  if ( HIBYTE(v180) )
    v144 = v180;
  v216 = 5;
  v215 = (unsigned __int64)v139;
  v217 = v144;
  v218 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v224,
    (const __m128i *)&v214);
  v224[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v181,
    v178,
    4,
    v145,
    v146,
    v147,
    v166,
    v167.m128i_i64[0],
    v167.m128i_i32[2],
    v168,
    (int)v169,
    (int)v170,
    (__int64)v171,
    v172,
    v173[0],
    v174,
    (int)v176,
    v177[0],
    v178,
    (int)v179,
    v180);
  v167.m128i_i64[1] = (__int64)&v215;
  v148 = v179;
  v149 = v178;
  do
  {
    v148 = (qflow_chart_t *)((char *)v148 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v148 != (qflow_chart_t *)v149 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v171 )
  {
    v150 = (void **)v168;
    v151 = v167.m128i_i64[0] + 8;
    if ( v168 < (unsigned __int64)(v167.m128i_i64[0] + 8) )
    {
      do
      {
        v152 = *v150++;
        operator delete(v152, 0x200u);
      }
      while ( (unsigned __int64)v150 < v151 );
    }
    operator delete(v171, 8 * v172);
  }
  operator delete(v109, v182);
  v153 = *(_QWORD *)v232;
  *(_QWORD *)v225 = off_445398;
  if ( *(_QWORD *)v232 )
  {
    v154 = *(_QWORD *)v233;
    if ( *(_QWORD *)v233 )
    {
      v155 = 0;
      do
      {
        while ( 1 )
        {
          v156 = (_QWORD *)(v153 + (v155 << 6));
          if ( v156[5] )
          {
            v156[6] = 0;
            qfree();
          }
          if ( !v156[2] )
            break;
          v156[3] = 0;
          ++v155;
          qfree();
          v153 = *(_QWORD *)v232;
          if ( v154 == v155 )
            goto LABEL_47;
        }
        ++v155;
        v153 = *(_QWORD *)v232;
      }
      while ( v154 != v155 );
    }
LABEL_47:
    *(_QWORD *)v233 = 0;
    qfree();
  }
  if ( *(_QWORD *)v227 )
  {
    *(_QWORD *)v228 = 0;
    qfree();
  }
  return *(_QWORD *)v181;
}

