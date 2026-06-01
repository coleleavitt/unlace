__int64 __fastcall ida_mcp::tools::control_flow::`anonymous namespace'::get_block_dominators(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        void *a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        __int64 a23,
        qflow_chart_t *a24,
        int a25,
        __int64 a26,
        unsigned __int64 a27,
        int a28,
        int a29,
        int a30,
        int a31,
        char a32,
        __int64 a33,
        char a34,
        char a35,
        char a36,
        __int64 a37,
        int a38,
        int a39,
        __int64 a40,
        int a41,
        int a42,
        int a43,
        __int64 a44,
        int a45,
        __int64 a46,
        int a47,
        int a48,
        int a49,
        char a50,
        int a51,
        int a52,
        char a53,
        char a54,
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
        int a68,
        int a69,
        int a70,
        int a71,
        int a72,
        int a73,
        int a74,
        int a75,
        int a76,
        char a77,
        char a78,
        int a79,
        __int64 a80,
        __int64 a81,
        int a82,
        int a83,
        int a84,
        int a85,
        int a86,
        char a87,
        int a88,
        int a89,
        int a90,
        int a91,
        int a92,
        int a93,
        int a94,
        int a95,
        int a96,
        int a97,
        int a98,
        int a99,
        int a100,
        __int64 a101)
{
  int v101; // edx
  int v102; // ecx
  int v103; // r8d
  int v104; // r9d
  __int64 v105; // rax
  __int64 v106; // rdx
  char v107; // bl
  __int64 *func; // rax
  __int64 *v109; // rbp
  __int64 v110; // xmm0_8
  __int64 v111; // r12
  _BYTE *v112; // rax
  __m128i v113; // xmm0
  int v114; // ebp
  _DWORD *v115; // rax
  __int64 v116; // rdx
  _DWORD *v117; // rcx
  _QWORD *v118; // r12
  int i; // r14d
  __int64 v120; // r13
  int v121; // esi
  __int64 v122; // rax
  char v123; // di
  _QWORD *v124; // r14
  __int64 v125; // r15
  __int64 v126; // r8
  __int64 v127; // r9
  int *v128; // rcx
  int v129; // eax
  __int64 v130; // r14
  __m128i v131; // xmm4
  __int64 v132; // r13
  char *v133; // rax
  __int64 v134; // rcx
  char *v135; // rdx
  __int64 v136; // r14
  __int32 v137; // ecx
  _DWORD *v138; // r15
  __int32 v139; // edx
  _DWORD *v140; // rax
  char v141; // si
  __int64 v142; // rdi
  int *v143; // r15
  __m128i si128; // xmm3
  __int64 v145; // rax
  char *v146; // rax
  __int64 v147; // r13
  char *v148; // r14
  int v149; // edx
  _QWORD **v150; // r13
  void *v151; // rdi
  _DWORD *v152; // r14
  int v153; // edx
  _DWORD *v154; // rax
  char v155; // cl
  __int64 v156; // rax
  _QWORD **v157; // r13
  void *v158; // rdi
  _QWORD *v159; // rbp
  char v160; // r13
  char *v161; // rax
  __int64 v162; // r12
  _BYTE *v163; // rdx
  _QWORD *v164; // rax
  _QWORD *v165; // rdx
  _QWORD *v166; // rbx
  char *v167; // rcx
  unsigned __int64 v168; // rsi
  __int64 v169; // rax
  char v170; // si
  __int64 v171; // rdx
  size_t v172; // rax
  char *v173; // r8
  unsigned int v174; // ebx
  _BYTE *v175; // rdx
  _QWORD *v176; // rax
  _QWORD *v177; // rdx
  _QWORD *v178; // rbx
  char *v179; // rcx
  unsigned __int64 v180; // rsi
  __int64 v181; // rax
  char v182; // si
  __int64 v183; // rdx
  int v184; // eax
  __int64 v185; // rbx
  __int64 v186; // rax
  char v187; // si
  __int64 v188; // rdx
  size_t v189; // rax
  char *v190; // r8
  unsigned int v191; // ebx
  _QWORD *v192; // rax
  __int64 v193; // rax
  bool v194; // cl
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // rax
  char *v198; // rsi
  int v199; // ecx
  char *v200; // rax
  char v201; // di
  char *v202; // rsi
  int v203; // edi
  char *v204; // rax
  char v205; // r10
  __int64 v206; // rax
  int *v207; // r13
  __int64 v208; // r14
  char *v209; // rax
  char v210; // di
  __int64 v211; // rax
  __int64 *v212; // rbx
  __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 v215; // r8
  __int64 v216; // r9
  __int64 *v217; // rbx
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // r8
  __int64 v221; // r9
  __int64 v222; // rax
  __int64 *v223; // rbx
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // r8
  __int64 v227; // r9
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  char *v231; // rbx
  char *v232; // r12
  char *v233; // rbx
  __int64 v234; // rbp
  void *v235; // rdi
  __int64 v236; // rdi
  __int64 v237; // rbp
  __int64 v238; // r12
  _QWORD *v239; // rbx
  _QWORD *v241; // rax
  unsigned __int64 v242; // rcx
  char *v243; // rax
  char *v244; // rdx
  unsigned int v245; // ebx
  unsigned int v246; // ebx
  unsigned int v247; // eax
  __int64 v248; // rsi
  unsigned int v249; // eax
  char *v250; // r11
  unsigned __int64 v251; // rcx
  char *v252; // rdx
  char *v253; // r11
  unsigned int v254; // eax
  unsigned int v255; // eax
  unsigned int v256; // edx
  __int64 v257; // rdi
  unsigned __int64 v258; // rdx
  char *v259; // rax
  char *v260; // r8
  unsigned int v261; // ebx
  unsigned int v262; // ebx
  unsigned int v263; // eax
  __int64 v264; // rcx
  unsigned int v265; // eax
  char *v266; // r9
  unsigned __int64 v267; // rcx
  char *v268; // rdx
  unsigned int v269; // eax
  char *v270; // r8
  unsigned int v271; // eax
  unsigned int v272; // edx
  __int64 v273; // rdi
  int v274; // [rsp+0h] [rbp-338h]
  int v275; // [rsp+0h] [rbp-338h]
  int v276; // [rsp+0h] [rbp-338h]
  int v277; // [rsp+0h] [rbp-338h]
  int v278; // [rsp+0h] [rbp-338h]
  __m128i v279; // [rsp+8h] [rbp-330h] BYREF
  char *s; // [rsp+18h] [rbp-320h] BYREF
  __int64 v281; // [rsp+20h] [rbp-318h]
  void *v282; // [rsp+28h] [rbp-310h]
  __m128 v283; // [rsp+30h] [rbp-308h] BYREF
  char *v284; // [rsp+40h] [rbp-2F8h]
  char *v285; // [rsp+48h] [rbp-2F0h]
  __int64 v286; // [rsp+50h] [rbp-2E8h]
  int *v287; // [rsp+58h] [rbp-2E0h]
  _QWORD *v288; // [rsp+60h] [rbp-2D8h]
  int v289; // [rsp+68h] [rbp-2D0h]
  int v290; // [rsp+6Ch] [rbp-2CCh]
  __m128i v291; // [rsp+70h] [rbp-2C8h] BYREF
  int v292[2]; // [rsp+80h] [rbp-2B8h]
  __int64 v293; // [rsp+88h] [rbp-2B0h]
  void (__fastcall ***v294)(qflow_chart_t *__hidden); // [rsp+90h] [rbp-2A8h]
  int v295; // [rsp+98h] [rbp-2A0h]
  char v296; // [rsp+9Eh] [rbp-29Ah]
  char v297; // [rsp+9Fh] [rbp-299h]
  char *v298; // [rsp+A0h] [rbp-298h]
  unsigned __int64 v299; // [rsp+A8h] [rbp-290h]
  int v300[2]; // [rsp+B0h] [rbp-288h]
  __int64 v301; // [rsp+B8h] [rbp-280h]
  __int64 v302; // [rsp+C0h] [rbp-278h]
  __int64 v303; // [rsp+C8h] [rbp-270h]
  __int64 v304; // [rsp+D0h] [rbp-268h] BYREF
  _QWORD *v305; // [rsp+D8h] [rbp-260h]
  _QWORD v306[2]; // [rsp+E0h] [rbp-258h] BYREF
  size_t v307; // [rsp+F0h] [rbp-248h]
  __int64 v308; // [rsp+F8h] [rbp-240h]
  __int64 v309; // [rsp+100h] [rbp-238h] BYREF
  int v310; // [rsp+108h] [rbp-230h] BYREF
  void *v311[2]; // [rsp+110h] [rbp-228h]
  int *v312; // [rsp+120h] [rbp-218h]
  __int64 v313; // [rsp+128h] [rbp-210h]
  int v314; // [rsp+130h] [rbp-208h] BYREF
  int v315; // [rsp+138h] [rbp-200h] BYREF
  void *v316[2]; // [rsp+140h] [rbp-1F8h]
  char *v317; // [rsp+150h] [rbp-1E8h]
  __int64 v318; // [rsp+158h] [rbp-1E0h]
  char v319; // [rsp+160h] [rbp-1D8h] BYREF
  __int128 v320; // [rsp+168h] [rbp-1D0h]
  char v321; // [rsp+178h] [rbp-1C0h]
  __int64 v322; // [rsp+180h] [rbp-1B8h]
  __int64 v323; // [rsp+188h] [rbp-1B0h]
  char v324; // [rsp+190h] [rbp-1A8h] BYREF
  __int128 v325; // [rsp+198h] [rbp-1A0h] BYREF
  char v326; // [rsp+1A8h] [rbp-190h]
  __int64 v327; // [rsp+1B0h] [rbp-188h]
  __int64 v328; // [rsp+1B8h] [rbp-180h]
  char v329; // [rsp+1C0h] [rbp-178h] BYREF
  __int128 v330; // [rsp+1C8h] [rbp-170h]
  __int64 v331; // [rsp+1E8h] [rbp-150h]
  void *v332; // [rsp+1F0h] [rbp-148h] BYREF
  int v333[2]; // [rsp+1F8h] [rbp-140h]
  int v334[2]; // [rsp+200h] [rbp-138h] BYREF
  _QWORD v335[3]; // [rsp+208h] [rbp-130h] BYREF
  _QWORD v336[3]; // [rsp+220h] [rbp-118h] BYREF
  char v337; // [rsp+238h] [rbp-100h] BYREF
  void (__fastcall **v338)(qflow_chart_t *__hidden); // [rsp+240h] [rbp-F8h] BYREF
  char v339; // [rsp+248h] [rbp-F0h]
  _BYTE *v340; // [rsp+250h] [rbp-E8h]
  __int128 v341; // [rsp+258h] [rbp-E0h]
  __m128i v342; // [rsp+268h] [rbp-D0h]
  __int64 *v343; // [rsp+278h] [rbp-C0h]
  int v344; // [rsp+280h] [rbp-B8h]
  __int64 v345; // [rsp+288h] [rbp-B0h]
  __int128 v346; // [rsp+290h] [rbp-A8h]
  int v347; // [rsp+2A0h] [rbp-98h]
  __int64 v348; // [rsp+2B0h] [rbp-88h] BYREF
  _QWORD v349[13]; // [rsp+2D0h] [rbp-68h] BYREF

  *(_QWORD *)v300 = a1;
  v349[5] = __readfsqword(0x28u);
  LOBYTE(v334[0]) = 0;
  *(_QWORD *)v333 = 0;
  v293 = (__int64)&v332;
  *(_QWORD *)v292 = v334;
  v332 = v334;
  v297 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  if ( v297 != 3 )
    ida_mcp::tools::control_flow::`anonymous namespace'::get_block_dominators(
      a2,
      (int)"function_address",
      v101,
      v102,
      v103,
      v104,
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
      a89,
      a90,
      a91,
      a92,
      a93,
      a94,
      a95,
      a96,
      a97,
      a98,
      a99,
      a100,
      a101);
  std::string::_M_assign();
  v105 = ida_mcp::parse_ea(v332, *(unsigned __int64 *)v333);
  v303 = v106;
  v107 = v106;
  v302 = v105;
  if ( v332 != *(void **)v292 )
    operator delete(v332, *(_QWORD *)v334 + 1LL);
  if ( !v107 )
    JUMPOUT(0xE6EA2);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v314 = 0;
  v287 = &v314;
  nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
  v295 = v314;
  func = (__int64 *)get_func();
  v109 = func;
  if ( !func )
    JUMPOUT(0xE6E5D);
  v110 = *func;
  v111 = func[1];
  v339 = 0;
  v279.m128i_i64[0] = v110;
  v338 = off_445398;
  v340 = nullptr;
  v341 = 0;
  v112 = (_BYTE *)qvector_reserve();
  v113 = _mm_loadl_epi64(&v279);
  v340 = v112;
  *(_QWORD *)&v341 = 1;
  *v112 = 0;
  v342 = _mm_unpacklo_epi64(v113, (__m128i)(unsigned __int64)v111);
  v343 = v109;
  v344 = 0;
  v345 = 0;
  v347 = 0;
  v294 = &v338;
  v346 = 0;
  create_qflow_chart();
  if ( v295 < 0 || (v114 = v346, v295 >= (int)v346) )
    JUMPOUT(0xE6D73);
  v299 = 48LL * (int)v346;
  v115 = (_DWORD *)operator new(v299);
  v282 = v115;
  v116 = v114;
  do
  {
    v117 = v115 + 2;
    v115[2] = 0;
    v115 += 12;
    *((_QWORD *)v115 - 4) = 0;
    *((_QWORD *)v115 - 3) = v117;
    *((_QWORD *)v115 - 2) = v117;
    *((_QWORD *)v115 - 1) = 0;
    --v116;
  }
  while ( v116 );
  v301 = 0;
  v279.m128i_i32[0] = 0;
  v298 = (char *)v282 + v299;
  v118 = (char *)v282 + 8;
  v279.m128i_i64[1] = (__int64)v282 + 8;
  do
  {
    if ( v114 <= 0 )
      break;
    for ( i = 0; i < v114; ++i )
    {
      v120 = v118[1];
      if ( v120 )
      {
        while ( 1 )
        {
          v121 = *(_DWORD *)(v120 + 32);
          v122 = *(_QWORD *)(v120 + 24);
          v123 = 0;
          if ( v121 > i )
          {
            v122 = *(_QWORD *)(v120 + 16);
            v123 = v107;
          }
          if ( !v122 )
            break;
          v120 = v122;
        }
        if ( v123 )
        {
          if ( v120 == v118[2] )
          {
LABEL_21:
            *(_DWORD *)(operator new(0x28u) + 32) = i;
            std::_Rb_tree_insert_and_rebalance();
            ++v118[4];
            v114 = v346;
            continue;
          }
          v121 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
        }
        if ( v121 >= i )
          continue;
        goto LABEL_21;
      }
      if ( v118 == (_QWORD *)v118[2] || *(_DWORD *)(std::_Rb_tree_decrement() + 32) < i )
        goto LABEL_21;
    }
    ++v279.m128i_i32[0];
    v118 += 6;
  }
  while ( v114 > v279.m128i_i32[0] );
  v124 = v282;
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(*((_QWORD **)v282 + 2));
  v125 = v279.m128i_i64[1];
  v124[2] = 0;
  v124[5] = 0;
  v124[3] = v125;
  v124[4] = v125;
  *(_DWORD *)(operator new(0x28u) + 32) = 0;
  v291 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)&v310);
  std::_Rb_tree_insert_and_rebalance();
  v128 = &v315;
  ++v124[5];
  v129 = v346;
  s = (char *)&v315;
  do
  {
    if ( v129 <= 1 )
      break;
    v296 = 0;
    v286 = 1;
    v288 = (char *)v282 + 48;
    do
    {
      v130 = v286;
      v131 = _mm_load_si128(&v291);
      v310 = 0;
      v312 = &v310;
      v290 = v286;
      v313 = 0;
      *(__m128i *)v311 = v131;
      *(_DWORD *)(operator new(0x28u) + 32) = v130;
      std::_Rb_tree_insert_and_rebalance();
      v284 = (char *)(v130 << 6);
      v132 = ++v313;
      v133 = (char *)((v130 << 6) + v345);
      v134 = *((_QWORD *)v133 + 6);
      if ( (int)v134 <= 0 )
        goto LABEL_53;
      v135 = (char *)v282 + 48 * **((int **)v133 + 5);
      v136 = *((_QWORD *)v135 + 3);
      v279.m128i_i64[0] = (__int64)(v135 + 8);
      if ( (char *)v136 == v135 + 8 )
        goto LABEL_42;
      do
      {
        v137 = *(_DWORD *)(v136 + 32);
        if ( !v132 || v137 <= v312[8] )
        {
          v138 = v311[0];
          if ( v311[0] )
          {
            while ( 1 )
            {
              v139 = v138[8];
              v140 = *((_DWORD **)v138 + 3);
              v141 = 0;
              if ( v137 < v139 )
              {
                v140 = *((_DWORD **)v138 + 2);
                v141 = v107;
              }
              if ( !v140 )
                break;
              v138 = v140;
            }
            if ( !v141 )
              goto LABEL_38;
            if ( v138 != v311[1] )
              goto LABEL_108;
          }
          else if ( v311[1] != &v310 )
          {
LABEL_108:
            v279.m128i_i32[2] = *(_DWORD *)(v136 + 32);
            v196 = std::_Rb_tree_decrement();
            v137 = v279.m128i_i32[2];
            v139 = *(_DWORD *)(v196 + 32);
LABEL_38:
            if ( v137 <= v139 )
              goto LABEL_40;
          }
        }
        *(_DWORD *)(operator new(0x28u) + 32) = *(_DWORD *)(v136 + 32);
        std::_Rb_tree_insert_and_rebalance();
        v132 = ++v313;
LABEL_40:
        v136 = std::_Rb_tree_increment();
      }
      while ( v279.m128i_i64[0] != v136 );
      v133 = &v284[v345];
      v134 = *(_QWORD *)&v284[v345 + 48];
LABEL_42:
      v279.m128i_i64[1] = 1;
      v142 = 1;
      v283 = _mm_loadh_ps((const double *)&s);
      if ( (int)v134 > 1 )
      {
        while ( 1 )
        {
          v143 = (int *)v311[1];
          si128 = _mm_load_si128((const __m128i *)&v283);
          v145 = *(int *)(*((_QWORD *)v133 + 5) + 4 * v142);
          v315 = 0;
          v317 = s;
          v279.m128i_i64[0] = (__int64)s;
          v146 = (char *)v282 + 48 * v145;
          v318 = 0;
          v147 = *((_QWORD *)v146 + 3);
          v148 = v146 + 8;
          *(__m128i *)v316 = si128;
          LOBYTE(v281) = v147 != (_QWORD)(v146 + 8) && v311[1] != &v310;
          if ( (_BYTE)v281 )
            break;
LABEL_50:
          std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::operator=(&v309, (__int64)v287);
          v150 = (_QWORD **)v316[0];
          if ( v316[0] )
          {
            do
            {
              std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(v150[3]);
              v151 = v150;
              v150 = (_QWORD **)v150[2];
              operator delete(v151, 0x28u);
            }
            while ( v150 );
          }
          v133 = &v284[v345];
          v142 = ++v279.m128i_i64[1];
          if ( (int)*(_QWORD *)&v284[v345 + 48] <= v279.m128i_i32[2] )
            goto LABEL_53;
        }
        while ( 2 )
        {
          v149 = v143[8];
          if ( v149 < *(_DWORD *)(v147 + 32) )
          {
            v143 = (int *)std::_Rb_tree_increment();
            if ( v143 == &v310 )
              goto LABEL_50;
LABEL_46:
            if ( v148 == (char *)v147 )
              goto LABEL_50;
            continue;
          }
          break;
        }
        if ( v149 > *(_DWORD *)(v147 + 32) )
        {
LABEL_49:
          v147 = std::_Rb_tree_increment();
          if ( v143 == &v310 )
            goto LABEL_50;
          goto LABEL_46;
        }
        if ( (char *)v279.m128i_i64[0] == s )
        {
          if ( v318 )
          {
            v279.m128i_i64[0] = (__int64)v317;
            if ( v149 > *((_DWORD *)v317 + 8) )
              goto LABEL_124;
          }
          v198 = (char *)v316[0];
          if ( !v316[0] )
            goto LABEL_159;
          while ( 1 )
          {
            v199 = *((_DWORD *)v198 + 8);
            v200 = *((char **)v198 + 3);
            v201 = 0;
            if ( v149 < v199 )
            {
              v200 = *((char **)v198 + 2);
              v201 = v281;
            }
            if ( !v200 )
              break;
            v198 = v200;
          }
          v279.m128i_i64[0] = (__int64)v198;
          if ( v201 )
          {
            v279.m128i_i64[0] = (__int64)v316[1];
            if ( v316[1] == v198 )
              goto LABEL_124;
            goto LABEL_139;
          }
        }
        else
        {
          if ( v149 < *(_DWORD *)(v279.m128i_i64[0] + 32) )
          {
            if ( (void *)v279.m128i_i64[0] == v316[1] )
              goto LABEL_104;
            v285 = (char *)v316[1];
            v289 = v149;
            v193 = std::_Rb_tree_decrement();
            v149 = v289;
            if ( v289 > *(_DWORD *)(v193 + 32) )
            {
              if ( *(_QWORD *)(v193 + 24) )
                goto LABEL_104;
              v279.m128i_i64[0] = v193;
LABEL_124:
              v194 = v281;
              if ( (char *)v279.m128i_i64[0] != s )
LABEL_125:
                v194 = v149 < *(_DWORD *)(v279.m128i_i64[0] + 32);
LABEL_105:
              LOBYTE(v285) = v194;
              v195 = operator new(0x28u);
              *(_DWORD *)(v195 + 32) = v143[8];
              v279.m128i_i64[0] = v195;
              std::_Rb_tree_insert_and_rebalance();
              ++v318;
LABEL_106:
              v279.m128i_i64[0] = std::_Rb_tree_increment();
              v143 = (int *)std::_Rb_tree_increment();
              goto LABEL_49;
            }
            v202 = (char *)v316[0];
            if ( v316[0] )
            {
              while ( 1 )
              {
                v203 = *((_DWORD *)v202 + 8);
                v204 = *((char **)v202 + 3);
                v205 = 0;
                if ( v289 < v203 )
                {
                  v204 = *((char **)v202 + 2);
                  v205 = v281;
                }
                if ( !v204 )
                  break;
                v202 = v204;
              }
              v279.m128i_i64[0] = (__int64)v202;
              if ( v205 )
              {
                if ( v202 == v285 )
                  goto LABEL_124;
                goto LABEL_157;
              }
            }
            else
            {
              v197 = (__int64)s;
              v202 = s;
              if ( v285 == s )
              {
LABEL_113:
                v279.m128i_i64[0] = v197;
                v194 = v281;
                goto LABEL_105;
              }
LABEL_157:
              LODWORD(v285) = v289;
              v279.m128i_i64[0] = (__int64)v202;
              v211 = std::_Rb_tree_decrement();
              v149 = (int)v285;
              v203 = *(_DWORD *)(v211 + 32);
            }
            if ( v149 > v203 )
              goto LABEL_124;
            goto LABEL_106;
          }
          if ( v149 <= *(_DWORD *)(v279.m128i_i64[0] + 32) )
            goto LABEL_106;
          if ( (char *)v279.m128i_i64[0] == v317 )
            goto LABEL_124;
          LODWORD(v285) = v143[8];
          v197 = std::_Rb_tree_increment();
          v149 = (int)v285;
          if ( (int)v285 < *(_DWORD *)(v197 + 32) )
          {
            if ( !*(_QWORD *)(v279.m128i_i64[0] + 24) )
              goto LABEL_125;
            goto LABEL_113;
          }
          v198 = (char *)v316[0];
          if ( v316[0] )
          {
            while ( 1 )
            {
              v199 = *((_DWORD *)v198 + 8);
              v209 = *((char **)v198 + 3);
              v210 = 0;
              if ( (int)v285 < v199 )
              {
                v209 = *((char **)v198 + 2);
                v210 = v281;
              }
              if ( !v209 )
                break;
              v198 = v209;
            }
            v279.m128i_i64[0] = (__int64)v198;
            if ( v210 )
            {
              v279.m128i_i64[0] = (__int64)v316[1];
              if ( v198 == v316[1] )
                goto LABEL_124;
              goto LABEL_139;
            }
          }
          else
          {
LABEL_159:
            v279.m128i_i64[0] = (__int64)v316[1];
            v198 = s;
            if ( v316[1] == s )
            {
LABEL_104:
              v194 = v281;
              goto LABEL_105;
            }
LABEL_139:
            LODWORD(v285) = v149;
            v279.m128i_i64[0] = (__int64)v198;
            v206 = std::_Rb_tree_decrement();
            v149 = (int)v285;
            v199 = *(_DWORD *)(v206 + 32);
          }
        }
        if ( v149 > v199 )
          goto LABEL_124;
        goto LABEL_106;
      }
LABEL_53:
      v152 = v311[0];
      if ( v311[0] )
      {
        while ( 1 )
        {
          v153 = v152[8];
          v154 = *((_DWORD **)v152 + 3);
          v155 = 0;
          if ( v153 > (int)v286 )
          {
            v154 = *((_DWORD **)v152 + 2);
            v155 = v107;
          }
          if ( !v154 )
            break;
          v152 = v154;
        }
        if ( v155 )
        {
          if ( v152 != v311[1] )
            goto LABEL_141;
          goto LABEL_61;
        }
LABEL_60:
        v156 = v313;
        if ( v153 < (int)v286 )
          goto LABEL_61;
      }
      else
      {
        if ( v311[1] != &v310 )
        {
LABEL_141:
          v153 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
          goto LABEL_60;
        }
LABEL_61:
        *(_DWORD *)(operator new(0x28u) + 32) = v290;
        std::_Rb_tree_insert_and_rebalance();
        v156 = ++v313;
      }
      if ( v156 == v288[5] )
      {
        v207 = (int *)v311[1];
        if ( v311[1] != &v310 )
        {
          v208 = v288[3];
          while ( v207[8] == *(_DWORD *)(v208 + 32) )
          {
            v207 = (int *)std::_Rb_tree_increment();
            v208 = std::_Rb_tree_increment();
            if ( v207 == &v310 )
              goto LABEL_64;
          }
          goto LABEL_63;
        }
      }
      else
      {
LABEL_63:
        std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::operator=(v288, (__int64)&v309);
        v296 = v107;
      }
LABEL_64:
      v157 = (_QWORD **)v311[0];
      if ( v311[0] )
      {
        do
        {
          std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(v157[3]);
          v158 = v157;
          v157 = (_QWORD **)v157[2];
          operator delete(v158, 0x28u);
        }
        while ( v157 );
      }
      ++v286;
      v129 = v346;
      v128 = (int *)v286;
      v288 += 6;
    }
    while ( (int)v346 > (int)v286 );
  }
  while ( v296 );
  LOBYTE(v304) = 0;
  v305 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v304,
    0,
    0,
    (__int64)v128,
    v126,
    v127,
    v274,
    v279.m128i_i32[0],
    v279.m128i_i32[2],
    (int)s,
    (int)&v304,
    (int)v282,
    v283.m128_i64[0]);
  v159 = v305;
  v160 = v304;
  v283.m128_u64[0] = v295;
  v161 = (char *)v282 + 48 * v295;
  v162 = *((_QWORD *)v161 + 3);
  v279.m128i_i64[1] = (__int64)(v161 + 8);
  if ( v161 + 8 != (char *)v162 )
  {
    while ( 1 )
    {
      v184 = *(_DWORD *)(v162 + 32);
      if ( v184 != v295 )
        break;
LABEL_86:
      v162 = std::_Rb_tree_increment();
      if ( v279.m128i_i64[1] == v162 )
        goto LABEL_167;
    }
    v185 = v184;
    v306[0] = 0;
    v279.m128i_i64[0] = (__int64)v306;
    v306[1] = 0;
    s = (char *)(v345 + ((__int64)v184 << 6));
    v186 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v187 = *(_BYTE *)v186;
    v188 = *(_QWORD *)(v186 + 8);
    *(_BYTE *)v186 = 5;
    LOBYTE(v307) = v187;
    *(_QWORD *)(v186 + 8) = v185;
    v308 = v188;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v284 = (char *)&v348;
    qsnprintf();
    v332 = *(void **)v292;
    v189 = strlen(v284);
    v190 = v284;
    v307 = v189;
    v191 = v189;
    if ( v189 > 0xF )
    {
      v192 = (_QWORD *)std::string::_M_create();
      v332 = v192;
      v190 = v284;
      *(_QWORD *)v334 = v307;
      goto LABEL_90;
    }
    if ( v189 == 1 )
    {
      LOBYTE(v334[0]) = v348;
    }
    else if ( v189 )
    {
      v192 = *(_QWORD **)v292;
LABEL_90:
      if ( v191 >= 8 )
      {
        *v192 = v348;
        *(_QWORD *)((char *)v192 + v191 - 8) = *(_QWORD *)&v190[v191 - 8];
        v258 = (unsigned __int64)(v192 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v259 = (char *)v192 - v258;
        v260 = (char *)(v190 - v259);
        v261 = ((_DWORD)v259 + v191) & 0xFFFFFFF8;
        if ( v261 >= 8 )
        {
          v262 = v261 & 0xFFFFFFF8;
          v263 = 0;
          do
          {
            v264 = v263;
            v263 += 8;
            *(_QWORD *)(v258 + v264) = *(_QWORD *)&v260[v264];
          }
          while ( v263 < v262 );
          v189 = v307;
          v163 = v332;
LABEL_73:
          *(_QWORD *)v333 = v189;
          v163[v189] = 0;
          v307 = 0;
          v308 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v164 = (_QWORD *)operator new(0x20u);
          v165 = v164 + 2;
          v166 = v164;
          v167 = *(char **)v292;
          v168 = *(_QWORD *)v333;
          *v164 = v164 + 2;
          if ( v332 == v167 )
          {
            v249 = v168 + 1;
            if ( (unsigned int)(v168 + 1) < 8 )
            {
              if ( (v249 & 4) != 0 )
              {
                *((_DWORD *)v166 + 4) = *(_DWORD *)v167;
                *(_DWORD *)((char *)v165 + v249 - 4) = *(_DWORD *)&v167[v249 - 4];
              }
              else if ( (_DWORD)v168 != -1 )
              {
                *((_BYTE *)v166 + 16) = *v167;
                if ( (v249 & 2) != 0 )
                  *(_WORD *)((char *)v165 + v249 - 2) = *(_WORD *)(*(_QWORD *)v292 + v249 - 2LL);
              }
            }
            else
            {
              v250 = v167;
              v166[2] = *(_QWORD *)v167;
              *(_QWORD *)((char *)v165 + v249 - 8) = *(_QWORD *)&v167[v249 - 8];
              v251 = (unsigned __int64)(v166 + 3) & 0xFFFFFFFFFFFFFFF8LL;
              v252 = (char *)v165 - v251;
              v253 = (char *)(v250 - v252);
              v254 = ((_DWORD)v252 + v249) & 0xFFFFFFF8;
              if ( v254 >= 8 )
              {
                v255 = v254 & 0xFFFFFFF8;
                v256 = 0;
                do
                {
                  v257 = v256;
                  v256 += 8;
                  *(_QWORD *)(v251 + v257) = *(_QWORD *)&v253[v257];
                }
                while ( v256 < v255 );
              }
            }
          }
          else
          {
            *v164 = v332;
            v164[2] = *(_QWORD *)v334;
          }
          v166[1] = v168;
          LOBYTE(v334[0]) = 0;
          v332 = *(void **)v292;
          *(_QWORD *)v333 = 0;
          v169 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v170 = *(_BYTE *)v169;
          v171 = *(_QWORD *)(v169 + 8);
          *(_BYTE *)v169 = 3;
          *(_QWORD *)(v169 + 8) = v166;
          LOBYTE(v307) = v170;
          v308 = v171;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v332 != *(void **)v292 )
            operator delete(v332, *(_QWORD *)v334 + 1LL);
          s = (char *)v349;
          qsnprintf();
          v332 = *(void **)v292;
          v172 = strlen(s);
          v173 = s;
          v307 = v172;
          v174 = v172;
          if ( v172 > 0xF )
          {
            v241 = (_QWORD *)std::string::_M_create();
            v332 = v241;
            v173 = s;
            *(_QWORD *)v334 = v307;
          }
          else
          {
            if ( v172 == 1 )
            {
              LOBYTE(v334[0]) = v349[0];
              goto LABEL_80;
            }
            if ( !v172 )
            {
LABEL_80:
              v175 = *(_BYTE **)v292;
              goto LABEL_81;
            }
            v241 = *(_QWORD **)v292;
          }
          if ( v174 >= 8 )
          {
            *v241 = v349[0];
            *(_QWORD *)((char *)v241 + v174 - 8) = *(_QWORD *)&v173[v174 - 8];
            v242 = (unsigned __int64)(v241 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            v243 = (char *)v241 - v242;
            v244 = (char *)(v173 - v243);
            v245 = ((_DWORD)v243 + v174) & 0xFFFFFFF8;
            if ( v245 >= 8 )
            {
              v246 = v245 & 0xFFFFFFF8;
              v247 = 0;
              do
              {
                v248 = v247;
                v247 += 8;
                *(_QWORD *)(v242 + v248) = *(_QWORD *)&v244[v248];
              }
              while ( v247 < v246 );
              v172 = v307;
              v175 = v332;
              goto LABEL_81;
            }
          }
          else if ( (v174 & 4) != 0 )
          {
            *(_DWORD *)v241 = v349[0];
            *(_DWORD *)((char *)v241 + v174 - 4) = *(_DWORD *)&v173[v174 - 4];
          }
          else if ( v174 )
          {
            *(_BYTE *)v241 = v349[0];
            if ( (v174 & 2) != 0 )
              *(_WORD *)((char *)v241 + v174 - 2) = *(_WORD *)&v173[v174 - 2];
          }
          v172 = v307;
          v175 = v332;
LABEL_81:
          *(_QWORD *)v333 = v172;
          v175[v172] = 0;
          v307 = 0;
          v308 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v176 = (_QWORD *)operator new(0x20u);
          v177 = v176 + 2;
          v178 = v176;
          v179 = *(char **)v292;
          v180 = *(_QWORD *)v333;
          *v176 = v176 + 2;
          if ( v332 == v179 )
          {
            v265 = v180 + 1;
            if ( (unsigned int)(v180 + 1) < 8 )
            {
              if ( (v265 & 4) != 0 )
              {
                *((_DWORD *)v178 + 4) = *(_DWORD *)v179;
                *(_DWORD *)((char *)v177 + v265 - 4) = *(_DWORD *)&v179[v265 - 4];
              }
              else if ( (_DWORD)v180 != -1 )
              {
                *((_BYTE *)v178 + 16) = *v179;
                if ( (v265 & 2) != 0 )
                  *(_WORD *)((char *)v177 + v265 - 2) = *(_WORD *)(*(_QWORD *)v292 + v265 - 2LL);
              }
            }
            else
            {
              v266 = v179;
              v178[2] = *(_QWORD *)v179;
              *(_QWORD *)((char *)v177 + v265 - 8) = *(_QWORD *)&v179[v265 - 8];
              v267 = (unsigned __int64)(v178 + 3) & 0xFFFFFFFFFFFFFFF8LL;
              v268 = (char *)v177 - v267;
              v269 = ((_DWORD)v268 + v265) & 0xFFFFFFF8;
              v270 = (char *)(v266 - v268);
              if ( v269 >= 8 )
              {
                v271 = v269 & 0xFFFFFFF8;
                v272 = 0;
                do
                {
                  v273 = v272;
                  v272 += 8;
                  *(_QWORD *)(v267 + v273) = *(_QWORD *)&v270[v273];
                }
                while ( v272 < v271 );
              }
            }
          }
          else
          {
            *v176 = v332;
            v176[2] = *(_QWORD *)v334;
          }
          v178[1] = v180;
          LOBYTE(v334[0]) = 0;
          v332 = *(void **)v292;
          *(_QWORD *)v333 = 0;
          v181 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v182 = *(_BYTE *)v181;
          v183 = *(_QWORD *)(v181 + 8);
          *(_BYTE *)v181 = 3;
          *(_QWORD *)(v181 + 8) = v178;
          LOBYTE(v307) = v182;
          v308 = v183;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( v332 != *(void **)v292 )
            operator delete(v332, *(_QWORD *)v334 + 1LL);
          LOBYTE(v304) = v160;
          v305 = v159;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
          v160 = v304;
          v159 = v305;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          goto LABEL_86;
        }
      }
      else if ( (v191 & 4) != 0 )
      {
        *(_DWORD *)v192 = v348;
        *(_DWORD *)((char *)v192 + v191 - 4) = *(_DWORD *)&v190[v191 - 4];
      }
      else if ( v191 )
      {
        *(_BYTE *)v192 = v348;
        if ( (v191 & 2) != 0 )
          *(_WORD *)((char *)v192 + v191 - 2) = *(_WORD *)&v190[v191 - 2];
      }
      v189 = v307;
      v163 = v332;
      goto LABEL_73;
    }
    v163 = *(_BYTE **)v292;
    goto LABEL_73;
  }
LABEL_167:
  v319 = 0;
  *(_QWORD *)&v320 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v319 = 3;
  v212 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v212,
    "block_id",
    v213,
    v214,
    v215,
    v216,
    v275,
    v279.m128i_i32[0],
    v279.m128i_i64[1]);
  v321 = 5;
  v322 = v283.m128_u64[0];
  v320 = (unsigned __int64)v212;
  v323 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    (_QWORD *)v293,
    (const __m128i *)&v319);
  *(_QWORD *)v334 = 0;
  v324 = 0;
  *(_QWORD *)&v325 = 0;
  v279.m128i_i64[0] = (__int64)&v325;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v324 = 3;
  v217 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v217,
    "dominator_count",
    v218,
    v219,
    v220,
    v221,
    v276,
    v279.m128i_i32[0],
    v279.m128i_i64[1]);
  v325 = (unsigned __int64)v217;
  if ( v160 == 1 )
  {
    v222 = v159[5];
  }
  else if ( v160 == 2 )
  {
    v222 = (__int64)(v159[1] - *v159) >> 4;
  }
  else
  {
    v222 = v160 != 0;
  }
  v327 = v222;
  v326 = 6;
  v328 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v335,
    (const __m128i *)&v324);
  v335[2] = 0;
  v329 = 0;
  *(_QWORD *)&v330 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v329 = 3;
  v223 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v223,
    "dominators",
    v224,
    v225,
    v226,
    v227,
    v277,
    v279.m128i_i32[0],
    v279.m128i_i64[1]);
  LOBYTE(v304) = v160;
  v305 = v159;
  v330 = (unsigned __int64)v223;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v331 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v336,
    (const __m128i *)&v329);
  v336[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    *(_QWORD **)v300,
    v293,
    3,
    v228,
    v229,
    v230,
    v278,
    v279.m128i_i64[0],
    v279.m128i_i32[2],
    (int)s,
    v281,
    (int)v282,
    v283.m128_i64[0],
    v283.m128_i32[2],
    (int)v284,
    (int)v285,
    v286,
    (char)v287,
    (__int64)v288,
    v289,
    v291.m128i_i64[0]);
  v231 = &v337;
  do
  {
    v231 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v231 != (char *)v293 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v232 = v298;
  v233 = (char *)v282;
  if ( v282 != v298 )
  {
    do
    {
      v234 = *((_QWORD *)v233 + 2);
      while ( v234 )
      {
        std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(*(_QWORD **)(v234 + 24));
        v235 = (void *)v234;
        v234 = *(_QWORD *)(v234 + 16);
        operator delete(v235, 0x28u);
      }
      v233 += 48;
    }
    while ( v233 != v232 );
  }
  operator delete(v282, v299);
  v236 = v345;
  v338 = off_445398;
  if ( v345 )
  {
    v237 = v346;
    if ( (_QWORD)v346 )
    {
      v238 = v301;
      do
      {
        while ( 1 )
        {
          v239 = (_QWORD *)(v236 + (v238 << 6));
          if ( v239[5] )
          {
            v239[6] = 0;
            qfree();
          }
          if ( !v239[2] )
            break;
          v239[3] = 0;
          ++v238;
          qfree();
          v236 = v345;
          if ( v237 == v238 )
            goto LABEL_183;
        }
        ++v238;
        v236 = v345;
      }
      while ( v237 != v238 );
    }
LABEL_183:
    *(_QWORD *)&v346 = 0;
    qfree();
  }
  if ( v340 )
  {
    *(_QWORD *)&v341 = 0;
    qfree();
  }
  return *(_QWORD *)v300;
}

