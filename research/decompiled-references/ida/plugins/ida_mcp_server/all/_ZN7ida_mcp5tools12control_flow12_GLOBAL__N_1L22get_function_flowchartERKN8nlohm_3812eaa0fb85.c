__int64 __fastcall ida_mcp::tools::control_flow::`anonymous namespace'::get_function_flowchart(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        qflow_chart_t *a11,
        int a12,
        __int64 a13,
        int a14,
        __int64 a15,
        __int64 a16,
        int a17,
        int a18,
        int a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        __int64 a25,
        char a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
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
        __int64 a40,
        __int64 a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
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
        __int64 a69)
{
  std::runtime_error *v69; // rbx
  std::runtime_error *v70; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v72; // rax
  char *v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rdx
  char v76; // bl
  __int64 *func; // rbx
  __int64 v78; // rbp
  _BYTE *v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  _QWORD *v86; // rax
  _QWORD *v87; // rdx
  _QWORD *v88; // rbp
  __int64 v89; // rcx
  __int64 v90; // rax
  char v91; // si
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  _QWORD *v97; // rax
  _QWORD *v98; // rdx
  _QWORD *v99; // rbx
  char *v100; // rdi
  unsigned __int64 v101; // rcx
  char *v102; // r15
  __int64 v103; // rax
  char v104; // si
  __int64 v105; // rdx
  __int64 v106; // rbx
  __int64 v107; // rax
  char v108; // si
  __int64 v109; // rdx
  __int64 v110; // rbx
  __int64 v111; // rax
  char v112; // si
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // r15
  __int64 v118; // r12
  _QWORD *v119; // rbx
  __int64 v120; // r13
  __int64 v121; // rax
  char v122; // si
  __int64 v123; // rdx
  __int8 v124; // cl
  size_t v125; // rax
  unsigned int v126; // r15d
  _BYTE *v127; // rdx
  _QWORD *v128; // rax
  _QWORD *v129; // rdx
  _QWORD *v130; // rbp
  char *v131; // rdi
  unsigned __int64 v132; // rcx
  char *v133; // r15
  __int64 v134; // rax
  char v135; // si
  __int64 v136; // rdx
  size_t v137; // rax
  unsigned int v138; // r15d
  char *v139; // rdx
  _QWORD *v140; // rax
  _QWORD *v141; // rdx
  _QWORD *v142; // rbp
  char *v143; // rdi
  unsigned __int64 v144; // rcx
  char *v145; // r15
  __int64 v146; // rax
  char v147; // si
  __int64 v148; // rdx
  __int64 v149; // rbx
  __int64 v150; // rax
  char v151; // si
  __int64 v152; // rdx
  __int8 v153; // cl
  const char *v154; // rbp
  __int64 *v155; // rax
  _QWORD *v156; // r15
  __int64 *v157; // rbx
  unsigned int v158; // r13d
  __int64 v159; // rdx
  __int64 v160; // rax
  __int64 v161; // rax
  char v162; // si
  __int64 v163; // rdx
  __int64 v164; // rax
  __int8 v165; // cl
  char v166; // si
  __int64 v167; // rdx
  __int64 v168; // rax
  __int8 v169; // cl
  char v170; // si
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  int v175; // edx
  int v176; // r8d
  int v177; // r9d
  __int64 v178; // rbx
  int v179; // esi
  __int64 v180; // rbp
  __int64 v181; // rax
  __int64 v182; // r15
  char v183; // si
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  char v187; // bp
  __int64 v188; // rax
  __int64 v189; // rcx
  char v190; // si
  __int64 v191; // rdx
  __int64 v192; // rbp
  __int64 v193; // rax
  char v194; // si
  __int64 v195; // rdx
  __int8 v196; // cl
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 v200; // rbp
  char v201; // r15
  __int64 v202; // r13
  __int64 v203; // rax
  __int64 i; // r15
  char v205; // si
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rax
  char v209; // r13
  __int64 v210; // rax
  __int64 v211; // rcx
  char v212; // si
  __int64 v213; // rdx
  __int64 v214; // r12
  __int64 v215; // rax
  char v216; // si
  __int64 v217; // rdx
  __int8 v218; // cl
  char v219; // bp
  __int64 v220; // rax
  __int64 v221; // rcx
  char v222; // si
  __int64 v223; // rdx
  __int64 v224; // rdi
  __int64 v225; // r12
  __int64 v226; // rbp
  _QWORD *v227; // rbx
  unsigned __int64 v229; // rdx
  signed __int64 v230; // rbp
  unsigned int v231; // r13d
  unsigned int v232; // r13d
  unsigned int v233; // eax
  __int64 v234; // rcx
  __int64 v235; // rax
  _QWORD *v236; // rax
  _QWORD *v237; // rax
  unsigned int v238; // eax
  unsigned int v239; // eax
  unsigned __int64 v240; // rdx
  char *v241; // rax
  char *v242; // rbp
  unsigned int v243; // eax
  unsigned int v244; // eax
  unsigned int v245; // ecx
  __int64 v246; // rsi
  unsigned __int64 v247; // rdx
  char *v248; // rax
  char *v249; // rbp
  unsigned int v250; // eax
  unsigned int v251; // eax
  unsigned int v252; // ecx
  __int64 v253; // rsi
  unsigned __int64 v254; // rsi
  char *v255; // rdx
  char *v256; // r8
  unsigned int v257; // eax
  unsigned int v258; // eax
  unsigned int v259; // edx
  __int64 v260; // rdi
  unsigned __int64 v261; // rsi
  char *v262; // rdx
  char *v263; // r8
  unsigned int v264; // eax
  unsigned int v265; // eax
  unsigned int v266; // edx
  __int64 v267; // rdi
  __int64 v268; // r13
  __int64 v269; // r14
  __int64 v270; // r12
  __int64 v271; // r13
  size_t v272; // rdx
  int v273; // eax
  unsigned __int64 v274; // r15
  unsigned __int64 v275; // r15
  size_t v276; // rax
  const void *v277; // rdi
  int v278; // r12d
  __int64 v279; // r15
  __int64 v280; // r13
  __int64 v281; // r13
  size_t v282; // rdx
  int v283; // eax
  unsigned __int64 v284; // r15
  unsigned __int64 v285; // r15
  size_t v286; // rax
  int v287; // eax
  unsigned int v288; // eax
  unsigned int v289; // eax
  unsigned __int64 v290; // rsi
  char *v291; // rdx
  unsigned int v292; // eax
  char *v293; // r8
  unsigned int v294; // eax
  unsigned int v295; // edx
  __int64 v296; // rdi
  unsigned __int64 v297; // rsi
  char *v298; // rdx
  char *v299; // rdi
  unsigned int v300; // eax
  unsigned int v301; // eax
  unsigned int v302; // edx
  __int64 v303; // r8
  __m128i v304; // [rsp+0h] [rbp-238h] BYREF
  __int64 *v305; // [rsp+10h] [rbp-228h]
  int v306[2]; // [rsp+18h] [rbp-220h]
  int v307[2]; // [rsp+20h] [rbp-218h]
  qflow_chart_t *v308; // [rsp+28h] [rbp-210h]
  __int64 v309; // [rsp+30h] [rbp-208h]
  __int64 v310; // [rsp+38h] [rbp-200h]
  int v311[2]; // [rsp+40h] [rbp-1F8h]
  __int64 v312; // [rsp+48h] [rbp-1F0h]
  __int64 v313; // [rsp+50h] [rbp-1E8h]
  char v314; // [rsp+5Dh] [rbp-1DBh]
  char v315; // [rsp+5Eh] [rbp-1DAh]
  char v316; // [rsp+5Fh] [rbp-1D9h]
  int v317[2]; // [rsp+60h] [rbp-1D8h]
  int v318[2]; // [rsp+68h] [rbp-1D0h]
  __int64 v319; // [rsp+70h] [rbp-1C8h] BYREF
  char v320[8]; // [rsp+80h] [rbp-1B8h] BYREF
  char v321[8]; // [rsp+88h] [rbp-1B0h]
  __int64 v322; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v323; // [rsp+98h] [rbp-1A0h]
  char v324[8]; // [rsp+A0h] [rbp-198h] BYREF
  __int64 v325; // [rsp+A8h] [rbp-190h] BYREF
  __int64 v326[2]; // [rsp+B0h] [rbp-188h] BYREF
  void *v327; // [rsp+C0h] [rbp-178h] BYREF
  int v328[2]; // [rsp+C8h] [rbp-170h]
  int v329[4]; // [rsp+D0h] [rbp-168h] BYREF
  void *v330; // [rsp+E0h] [rbp-158h] BYREF
  int v331[2]; // [rsp+E8h] [rbp-150h]
  int v332[2]; // [rsp+F0h] [rbp-148h] BYREF
  int v333[2]; // [rsp+100h] [rbp-138h] BYREF
  int v334; // [rsp+108h] [rbp-130h]
  int v335[2]; // [rsp+110h] [rbp-128h]
  int v336[4]; // [rsp+118h] [rbp-120h]
  int v337[4]; // [rsp+128h] [rbp-110h]
  int v338[2]; // [rsp+138h] [rbp-100h]
  int v339; // [rsp+140h] [rbp-F8h]
  int v340[2]; // [rsp+148h] [rbp-F0h]
  int v341[4]; // [rsp+150h] [rbp-E8h]
  int v342; // [rsp+160h] [rbp-D8h]
  char v343[32]; // [rsp+170h] [rbp-C8h] BYREF
  char v344[32]; // [rsp+190h] [rbp-A8h] BYREF
  char s[24]; // [rsp+1B0h] [rbp-88h] BYREF
  _BYTE v346[8]; // [rsp+1C8h] [rbp-70h]
  char v347[40]; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v348; // [rsp+1F8h] [rbp-40h]

  v313 = a1;
  v348 = __readfsqword(0x28u);
  LOBYTE(v332[0]) = 0;
  *(_QWORD *)v331 = 0;
  v73 = (char *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v312 = (__int64)&v330;
  *(_QWORD *)v306 = v332;
  v330 = v332;
  v316 = *v73;
  if ( v316 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v73 )
    {
      case 0:
        v72 = "null";
        break;
      case 1:
        v72 = "object";
        break;
      case 2:
        v72 = (char *)"array";
        break;
      case 3:
        v72 = "string";
        break;
      case 4:
        v72 = "boolean";
        break;
      case 8:
        v72 = "binary";
        break;
      case 9:
        v72 = "discarded";
        break;
      default:
        v72 = "number";
        break;
    }
    v326[0] = (__int64)v72;
    v308 = (qflow_chart_t *)v333;
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
  v74 = ida_mcp::parse_ea(v330, *(unsigned __int64 *)v331);
  *(_QWORD *)v318 = v75;
  v76 = v75;
  *(_QWORD *)v317 = v74;
  if ( v330 != *(void **)v306 )
    operator delete(v330, *(_QWORD *)v332 + 1LL);
  if ( !v76 )
  {
    v70 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v70, "Invalid address format");
    __cxa_throw(
      v70,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  func = (__int64 *)get_func();
  if ( !func )
  {
    v69 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v69, "No function at address");
    __cxa_throw(
      v69,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_7;
  v268 = *(_QWORD *)(a2 + 8);
  v269 = *(_QWORD *)(v268 + 16);
  if ( !v269 )
    goto LABEL_7;
  v270 = *(_QWORD *)(v268 + 16);
  v304.m128i_i64[0] = v268 + 8;
  v271 = v268 + 8;
  do
  {
    while ( 1 )
    {
      v274 = *(_QWORD *)(v270 + 40);
      if ( !v274 )
        break;
      v272 = 18;
      if ( v274 <= 0x12 )
        v272 = *(_QWORD *)(v270 + 40);
      v273 = memcmp(*(const void **)(v270 + 32), "no_external_blocks", v272);
      if ( v273 || (v273 = v274 - 18, (__int64)(v274 - 18) <= 0x7FFFFFFF) )
      {
        if ( v273 < 0 )
          break;
      }
      v271 = v270;
      v270 = *(_QWORD *)(v270 + 16);
      if ( !v270 )
        goto LABEL_146;
    }
    v270 = *(_QWORD *)(v270 + 24);
  }
  while ( v270 );
LABEL_146:
  if ( v304.m128i_i64[0] != v271 )
  {
    v275 = *(_QWORD *)(v271 + 40);
    if ( !v275 )
      goto LABEL_155;
    v276 = 18;
    v277 = *(const void **)(v271 + 32);
    v304.m128i_i64[1] = (__int64)"no_external_blocks";
    if ( v275 <= 0x12 )
      v276 = v275;
    v278 = memcmp(v277, "no_external_blocks", v276);
    if ( !v278 )
    {
      v279 = v275 - 18;
      if ( v279 > 0x7FFFFFFF )
        goto LABEL_158;
      v278 = v279;
    }
    if ( v278 <= 0 )
    {
LABEL_155:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      LOBYTE(v326[0]) = 0;
      nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      if ( *(_BYTE *)a2 != 1 )
        goto LABEL_7;
      v280 = *(_QWORD *)(a2 + 8);
      v269 = *(_QWORD *)(v280 + 16);
      if ( !v269 )
        goto LABEL_7;
      v304.m128i_i64[0] = v280 + 8;
    }
  }
LABEL_158:
  v281 = v304.m128i_i64[0];
  do
  {
    while ( 1 )
    {
      v284 = *(_QWORD *)(v269 + 40);
      if ( !v284 )
        break;
      v282 = 15;
      if ( v284 <= 0xF )
        v282 = *(_QWORD *)(v269 + 40);
      v283 = memcmp(*(const void **)(v269 + 32), "call_ends_block", v282);
      if ( v283 || (v283 = v284 - 15, (__int64)(v284 - 15) <= 0x7FFFFFFF) )
      {
        if ( v283 < 0 )
          break;
      }
      v281 = v269;
      v269 = *(_QWORD *)(v269 + 16);
      if ( !v269 )
        goto LABEL_167;
    }
    v269 = *(_QWORD *)(v269 + 24);
  }
  while ( v269 );
LABEL_167:
  if ( v304.m128i_i64[0] != v281 )
  {
    v285 = *(_QWORD *)(v281 + 40);
    if ( !v285 )
      goto LABEL_174;
    v286 = 15;
    if ( v285 <= 0xF )
      v286 = *(_QWORD *)(v281 + 40);
    v287 = memcmp(*(const void **)(v281 + 32), "call_ends_block", v286);
    if ( v287 || (v287 = v285 - 15, (__int64)(v285 - 15) <= 0x7FFFFFFF) )
    {
      if ( v287 <= 0 )
      {
LABEL_174:
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        LOBYTE(v326[0]) = 0;
        nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      }
    }
  }
LABEL_7:
  v78 = func[1];
  v304.m128i_i64[0] = *func;
  LOBYTE(v334) = 0;
  *(_QWORD *)v333 = off_445398;
  *(_QWORD *)v335 = 0;
  *(_OWORD *)v336 = 0;
  v79 = (_BYTE *)qvector_reserve();
  v80 = _mm_loadl_epi64(&v304);
  *(_QWORD *)v335 = v79;
  *(_QWORD *)v336 = 1;
  *v79 = 0;
  *(__m128i *)v337 = _mm_unpacklo_epi64(v80, (__m128i)(unsigned __int64)v78);
  *(_QWORD *)v338 = func;
  v339 = 0;
  *(_QWORD *)v340 = 0;
  v342 = 0;
  v308 = (qflow_chart_t *)v333;
  *(_OWORD *)v341 = 0;
  create_qflow_chart();
  v81 = v313;
  *(_BYTE *)v313 = 0;
  *(_QWORD *)(v81 + 8) = 0;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v327,
    v343,
    v82,
    v83,
    v84,
    v85,
    v304.m128i_i32[0],
    v304.m128i_i32[2],
    (__int64)v305);
  *(_QWORD *)v324 = 0;
  v310 = (__int64)&v325;
  v325 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = (_QWORD *)operator new(0x20u);
  v87 = v86 + 2;
  v88 = v86;
  v89 = *(_QWORD *)v328;
  *v86 = v86 + 2;
  if ( v327 == v329 )
  {
    v289 = v89 + 1;
    if ( (unsigned int)(v89 + 1) >= 8 )
    {
      v88[2] = *(_QWORD *)v329;
      *(_QWORD *)((char *)v87 + v289 - 8) = *(_QWORD *)((char *)v328 + v289);
      v297 = (unsigned __int64)(v88 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v298 = (char *)v87 - v297;
      v299 = (char *)((char *)v329 - v298);
      v300 = ((_DWORD)v298 + v289) & 0xFFFFFFF8;
      if ( v300 >= 8 )
      {
        v301 = v300 & 0xFFFFFFF8;
        v302 = 0;
        do
        {
          v303 = v302;
          v302 += 8;
          *(_QWORD *)(v297 + v303) = *(_QWORD *)&v299[v303];
        }
        while ( v302 < v301 );
      }
    }
    else if ( (v289 & 4) != 0 )
    {
      *((_DWORD *)v88 + 4) = v329[0];
      *(_DWORD *)((char *)v87 + v289 - 4) = *(int *)((char *)&v328[1] + v289);
    }
    else if ( (_DWORD)v89 != -1 )
    {
      *((_BYTE *)v88 + 16) = v329[0];
      if ( (v289 & 2) != 0 )
        *(_WORD *)((char *)v87 + v289 - 2) = *(_WORD *)((char *)&v328[1] + v289 + 2);
    }
  }
  else
  {
    *v86 = v327;
    v86[2] = *(_QWORD *)v329;
  }
  v88[1] = v89;
  v327 = v329;
  *(_QWORD *)v328 = 0;
  LOBYTE(v329[0]) = 0;
  v90 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v91 = *(_BYTE *)v90;
  v92 = *(_QWORD *)(v90 + 8);
  *(_BYTE *)v90 = 3;
  *(_QWORD *)(v90 + 8) = v88;
  v324[0] = v91;
  v325 = v92;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v327 != v329 )
    operator delete(v327, *(_QWORD *)v329 + 1LL);
  qsnprintf();
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)v312,
    v344,
    v93,
    v94,
    v95,
    v96,
    v304.m128i_i32[0],
    v304.m128i_i32[2],
    (__int64)v305);
  v326[0] = 0;
  v326[1] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v97 = (_QWORD *)operator new(0x20u);
  v98 = v97 + 2;
  v99 = v97;
  v100 = *(char **)v306;
  v101 = *(_QWORD *)v331;
  *v97 = v97 + 2;
  if ( v330 == v100 )
  {
    v288 = v101 + 1;
    if ( (unsigned int)(v101 + 1) >= 8 )
    {
      v99[2] = *(_QWORD *)v100;
      *(_QWORD *)((char *)v98 + v288 - 8) = *(_QWORD *)&v100[v288 - 8];
      v290 = (unsigned __int64)(v99 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v291 = (char *)v98 - v290;
      v292 = ((_DWORD)v291 + v288) & 0xFFFFFFF8;
      v293 = (char *)(v100 - v291);
      if ( v292 >= 8 )
      {
        v294 = v292 & 0xFFFFFFF8;
        v295 = 0;
        do
        {
          v296 = v295;
          v295 += 8;
          *(_QWORD *)(v290 + v296) = *(_QWORD *)&v293[v296];
        }
        while ( v295 < v294 );
      }
    }
    else if ( (v288 & 4) != 0 )
    {
      *((_DWORD *)v99 + 4) = *(_DWORD *)v100;
      *(_DWORD *)((char *)v98 + v288 - 4) = *(_DWORD *)&v100[v288 - 4];
    }
    else if ( (_DWORD)v101 != -1 )
    {
      *((_BYTE *)v99 + 16) = *v100;
      if ( (v288 & 2) != 0 )
        *(_WORD *)((char *)v98 + v288 - 2) = *(_WORD *)(*(_QWORD *)v306 + v288 - 2LL);
    }
  }
  else
  {
    *v97 = v330;
    v97[2] = *(_QWORD *)v332;
  }
  v99[1] = v101;
  v102 = *(char **)v306;
  LOBYTE(v332[0]) = 0;
  v330 = *(void **)v306;
  *(_QWORD *)v331 = 0;
  v103 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v104 = *(_BYTE *)v103;
  v105 = *(_QWORD *)(v103 + 8);
  *(_BYTE *)v103 = 3;
  *(_QWORD *)(v103 + 8) = v99;
  LOBYTE(v326[0]) = v104;
  v326[1] = v105;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v330 != v102 )
    operator delete(v330, *(_QWORD *)v332 + 1LL);
  v106 = v341[0];
  v107 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v108 = *(_BYTE *)v107;
  v109 = *(_QWORD *)(v107 + 8);
  *(_BYTE *)v107 = 5;
  LOBYTE(v326[0]) = v108;
  *(_QWORD *)(v107 + 8) = v106;
  v326[1] = v109;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = v342;
  v111 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v112 = *(_BYTE *)v111;
  v113 = *(_QWORD *)(v111 + 8);
  *(_BYTE *)v111 = 5;
  LOBYTE(v326[0]) = v112;
  *(_QWORD *)(v111 + 8) = v110;
  v326[1] = v113;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v319) = 0;
  *(_QWORD *)v311 = &v319;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v319,
    0,
    0,
    v114,
    v115,
    v116,
    v304.m128i_i32[0],
    v304.m128i_i32[2],
    (int)v305,
    v306[0],
    v307[0],
    (int)v308,
    v309);
  v315 = v319;
  if ( v341[0] > 0 )
  {
    *(_QWORD *)v307 = 0;
    while ( 1 )
    {
      v117 = *(_QWORD *)v307;
      v118 = *(_QWORD *)v307 << 6;
      v119 = (_QWORD *)((*(_QWORD *)v307 << 6) + *(_QWORD *)v340);
      v120 = (unsigned int)fc_calc_block_type();
      *(_QWORD *)v320 = 0;
      v304.m128i_i64[1] = (__int64)v320;
      *(_QWORD *)v321 = 0;
      v121 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v122 = *(_BYTE *)v121;
      v123 = *(_QWORD *)(v121 + 8);
      *(_BYTE *)v121 = 5;
      v124 = v320[0];
      LOBYTE(v326[0]) = v122;
      *(_QWORD *)(v121 + 8) = v117;
      v304.m128i_i8[0] = v124;
      v326[1] = v123;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      qsnprintf();
      v330 = *(void **)v306;
      v125 = strlen(s);
      v326[0] = v125;
      v126 = v125;
      if ( v125 > 0xF )
      {
        v237 = (_QWORD *)std::string::_M_create();
        v330 = v237;
        *(_QWORD *)v332 = v326[0];
      }
      else
      {
        if ( v125 == 1 )
        {
          LOBYTE(v332[0]) = s[0];
LABEL_20:
          v127 = *(_BYTE **)v306;
          goto LABEL_21;
        }
        if ( !v125 )
          goto LABEL_20;
        v237 = *(_QWORD **)v306;
      }
      if ( v126 >= 8 )
      {
        *v237 = *(_QWORD *)s;
        *(_QWORD *)((char *)v237 + v126 - 8) = *(_QWORD *)&v344[v126 + 24];
        v240 = (unsigned __int64)(v237 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v241 = (char *)v237 - v240;
        v242 = (char *)(s - v241);
        v243 = (v126 + (_DWORD)v241) & 0xFFFFFFF8;
        if ( v243 >= 8 )
        {
          v244 = v243 & 0xFFFFFFF8;
          v245 = 0;
          do
          {
            v246 = v245;
            v245 += 8;
            *(_QWORD *)(v240 + v246) = *(_QWORD *)&v242[v246];
          }
          while ( v245 < v244 );
        }
      }
      else if ( (v126 & 4) != 0 )
      {
        *(_DWORD *)v237 = *(_DWORD *)s;
        *(_DWORD *)((char *)v237 + v126 - 4) = *(_DWORD *)&v344[v126 + 28];
      }
      else if ( v126 )
      {
        *(_BYTE *)v237 = s[0];
        if ( (v126 & 2) != 0 )
          *(_WORD *)((char *)v237 + v126 - 2) = *(_WORD *)&v344[v126 + 30];
      }
      v125 = v326[0];
      v127 = v330;
LABEL_21:
      *(_QWORD *)v331 = v125;
      v127[v125] = 0;
      v326[0] = 0;
      v326[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v128 = (_QWORD *)operator new(0x20u);
      v129 = v128 + 2;
      v130 = v128;
      v131 = *(char **)v306;
      v132 = *(_QWORD *)v331;
      *v128 = v128 + 2;
      if ( v330 == v131 )
      {
        v238 = v132 + 1;
        if ( (unsigned int)(v132 + 1) >= 8 )
        {
          v130[2] = *(_QWORD *)v131;
          *(_QWORD *)((char *)v129 + v238 - 8) = *(_QWORD *)&v131[v238 - 8];
          v254 = (unsigned __int64)(v130 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v255 = (char *)v129 - v254;
          v256 = (char *)(v131 - v255);
          v257 = ((_DWORD)v255 + v238) & 0xFFFFFFF8;
          if ( v257 >= 8 )
          {
            v258 = v257 & 0xFFFFFFF8;
            v259 = 0;
            do
            {
              v260 = v259;
              v259 += 8;
              *(_QWORD *)(v254 + v260) = *(_QWORD *)&v256[v260];
            }
            while ( v259 < v258 );
          }
        }
        else if ( (v238 & 4) != 0 )
        {
          *((_DWORD *)v130 + 4) = *(_DWORD *)v131;
          *(_DWORD *)((char *)v129 + v238 - 4) = *(_DWORD *)&v131[v238 - 4];
        }
        else if ( (_DWORD)v132 != -1 )
        {
          *((_BYTE *)v130 + 16) = *v131;
          if ( (v238 & 2) != 0 )
            *(_WORD *)((char *)v129 + v238 - 2) = *(_WORD *)(*(_QWORD *)v306 + v238 - 2LL);
        }
      }
      else
      {
        *v128 = v330;
        v128[2] = *(_QWORD *)v332;
      }
      v130[1] = v132;
      v133 = *(char **)v306;
      LOBYTE(v332[0]) = 0;
      v330 = *(void **)v306;
      *(_QWORD *)v331 = 0;
      v134 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v135 = *(_BYTE *)v134;
      v136 = *(_QWORD *)(v134 + 8);
      *(_BYTE *)v134 = 3;
      *(_QWORD *)(v134 + 8) = v130;
      LOBYTE(v326[0]) = v135;
      v304.m128i_i8[0] = v320[0];
      v326[1] = v136;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v330 != v133 )
        operator delete(v330, *(_QWORD *)v332 + 1LL);
      qsnprintf();
      v330 = *(void **)v306;
      v137 = strlen(v347);
      v326[0] = v137;
      v138 = v137;
      if ( v137 > 0xF )
      {
        v236 = (_QWORD *)std::string::_M_create();
        v330 = v236;
        *(_QWORD *)v332 = v326[0];
LABEL_86:
        if ( v138 >= 8 )
        {
          *v236 = *(_QWORD *)v347;
          *(_QWORD *)((char *)v236 + v138 - 8) = *(_QWORD *)&v346[v138];
          v247 = (unsigned __int64)(v236 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v248 = (char *)v236 - v247;
          v249 = (char *)(v347 - v248);
          v250 = (v138 + (_DWORD)v248) & 0xFFFFFFF8;
          if ( v250 >= 8 )
          {
            v251 = v250 & 0xFFFFFFF8;
            v252 = 0;
            do
            {
              v253 = v252;
              v252 += 8;
              *(_QWORD *)(v247 + v253) = *(_QWORD *)&v249[v253];
            }
            while ( v252 < v251 );
          }
        }
        else if ( (v138 & 4) != 0 )
        {
          *(_DWORD *)v236 = *(_DWORD *)v347;
          *(_DWORD *)((char *)v236 + v138 - 4) = *(_DWORD *)&v346[v138 + 4];
        }
        else if ( v138 )
        {
          *(_BYTE *)v236 = v347[0];
          if ( (v138 & 2) != 0 )
            *(_WORD *)((char *)v236 + v138 - 2) = *(_WORD *)&v346[v138 + 6];
        }
        v137 = v326[0];
        v139 = (char *)v330;
        goto LABEL_29;
      }
      if ( v137 == 1 )
      {
        LOBYTE(v332[0]) = v347[0];
      }
      else if ( v137 )
      {
        v236 = *(_QWORD **)v306;
        goto LABEL_86;
      }
      v139 = *(char **)v306;
LABEL_29:
      *(_QWORD *)v331 = v137;
      v139[v137] = 0;
      v326[0] = 0;
      v326[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v140 = (_QWORD *)operator new(0x20u);
      v141 = v140 + 2;
      v142 = v140;
      v143 = *(char **)v306;
      v144 = *(_QWORD *)v331;
      *v140 = v140 + 2;
      if ( v330 == v143 )
      {
        v239 = v144 + 1;
        if ( (unsigned int)(v144 + 1) >= 8 )
        {
          v142[2] = *(_QWORD *)v143;
          *(_QWORD *)((char *)v141 + v239 - 8) = *(_QWORD *)&v143[v239 - 8];
          v261 = (unsigned __int64)(v142 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v262 = (char *)v141 - v261;
          v263 = (char *)(v143 - v262);
          v264 = ((_DWORD)v262 + v239) & 0xFFFFFFF8;
          if ( v264 >= 8 )
          {
            v265 = v264 & 0xFFFFFFF8;
            v266 = 0;
            do
            {
              v267 = v266;
              v266 += 8;
              *(_QWORD *)(v261 + v267) = *(_QWORD *)&v263[v267];
            }
            while ( v266 < v265 );
          }
        }
        else if ( (v239 & 4) != 0 )
        {
          *((_DWORD *)v142 + 4) = *(_DWORD *)v143;
          *(_DWORD *)((char *)v141 + v239 - 4) = *(_DWORD *)&v143[v239 - 4];
        }
        else if ( (_DWORD)v144 != -1 )
        {
          *((_BYTE *)v142 + 16) = *v143;
          if ( (v239 & 2) != 0 )
            *(_WORD *)((char *)v141 + v239 - 2) = *(_WORD *)(*(_QWORD *)v306 + v239 - 2LL);
        }
      }
      else
      {
        *v140 = v330;
        v140[2] = *(_QWORD *)v332;
      }
      v142[1] = v144;
      v145 = *(char **)v306;
      LOBYTE(v332[0]) = 0;
      v330 = *(void **)v306;
      *(_QWORD *)v331 = 0;
      v146 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v147 = *(_BYTE *)v146;
      v148 = *(_QWORD *)(v146 + 8);
      *(_BYTE *)v146 = 3;
      *(_QWORD *)(v146 + 8) = v142;
      LOBYTE(v326[0]) = v147;
      v326[1] = v148;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v330 != v145 )
        operator delete(v330, *(_QWORD *)v332 + 1LL);
      v149 = v119[1] - *v119;
      v150 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v151 = *(_BYTE *)v150;
      v152 = *(_QWORD *)(v150 + 8);
      *(_BYTE *)v150 = 6;
      v153 = v320[0];
      LOBYTE(v326[0]) = v151;
      *(_QWORD *)(v150 + 8) = v149;
      v304.m128i_i8[0] = v153;
      v326[1] = v152;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      switch ( v120 )
      {
        case 0LL:
          v154 = "normal";
          break;
        case 1LL:
          v154 = "indirect_jump";
          break;
        case 2LL:
          v154 = "return";
          break;
        case 3LL:
          v154 = "conditional_return";
          break;
        case 4LL:
          v154 = "noreturn";
          break;
        case 5LL:
          v154 = "external_noreturn";
          break;
        case 6LL:
          v154 = "external";
          break;
        case 7LL:
          v154 = "error";
          break;
        default:
          v154 = "unknown";
          break;
      }
      v326[0] = 0;
      v326[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v155 = (__int64 *)operator new(0x20u);
      v156 = v155 + 2;
      v157 = v155;
      *v155 = (__int64)(v155 + 2);
      *(_QWORD *)v324 = strlen(v154);
      v158 = *(_DWORD *)v324;
      if ( *(_QWORD *)v324 > 0xFu )
      {
        v235 = std::string::_M_create();
        *v157 = v235;
        v156 = (_QWORD *)v235;
        v157[2] = *(_QWORD *)v324;
      }
      if ( v158 >= 8 )
      {
        *v156 = *(_QWORD *)v154;
        *(_QWORD *)((char *)v156 + v158 - 8) = *(_QWORD *)&v154[v158 - 8];
        v229 = (unsigned __int64)(v156 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v230 = v154 - ((const char *)v156 - v229);
        v231 = ((_DWORD)v156 - v229 + v158) & 0xFFFFFFF8;
        if ( v231 >= 8 )
        {
          v232 = v231 & 0xFFFFFFF8;
          v233 = 0;
          do
          {
            v234 = v233;
            v233 += 8;
            *(_QWORD *)(v229 + v234) = *(_QWORD *)(v230 + v234);
          }
          while ( v233 < v232 );
        }
      }
      else if ( (v158 & 4) != 0 )
      {
        *(_DWORD *)v156 = *(_DWORD *)v154;
        *(_DWORD *)((char *)v156 + v158 - 4) = *(_DWORD *)&v154[v158 - 4];
      }
      else if ( v158 )
      {
        *(_BYTE *)v156 = *v154;
        if ( (v158 & 2) != 0 )
          *(_WORD *)((char *)v156 + v158 - 2) = *(_WORD *)&v154[v158 - 2];
      }
      v159 = *v157;
      v160 = *(_QWORD *)v324;
      v157[1] = *(_QWORD *)v324;
      *(_BYTE *)(v159 + v160) = 0;
      v161 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v162 = *(_BYTE *)v161;
      v163 = *(_QWORD *)(v161 + 8);
      *(_BYTE *)v161 = 3;
      *(_QWORD *)(v161 + 8) = v157;
      LOBYTE(v326[0]) = v162;
      v304.m128i_i8[0] = v320[0];
      v326[1] = v163;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v326[1] = (unsigned int)fc_calc_block_type() - 2 <= 1;
      v164 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v165 = v320[0];
      v166 = *(_BYTE *)v164;
      *(_BYTE *)v164 = 4;
      v167 = *(_QWORD *)(v164 + 8);
      v304.m128i_i8[0] = v165;
      LOBYTE(v326[0]) = v166;
      *(_QWORD *)(v164 + 8) = v326[1];
      v326[1] = v167;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v326[1] = (unsigned int)fc_calc_block_type() - 4 <= 1;
      v168 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v169 = v320[0];
      v170 = *(_BYTE *)v168;
      *(_BYTE *)v168 = 4;
      v171 = *(_QWORD *)(v168 + 8);
      v304.m128i_i8[0] = v169;
      LOBYTE(v326[0]) = v170;
      *(_QWORD *)(v168 + 8) = v326[1];
      v326[1] = v171;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v322) = 0;
      v323 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v322,
        0,
        0,
        v172,
        v173,
        v174,
        v304.m128i_i32[0],
        v304.m128i_i32[2],
        (int)v305,
        v306[0],
        v307[0],
        (int)v308,
        v309);
      v178 = v323;
      v314 = v322;
      v179 = *(_DWORD *)(v118 + *(_QWORD *)v340 + 24);
      if ( v179 <= 0 )
      {
        v305 = v326;
      }
      else
      {
        v180 = **(int **)(v118 + *(_QWORD *)v340 + 16);
        if ( !(_BYTE)v322 )
        {
          v181 = operator new(0x18u);
          *(_QWORD *)(v181 + 16) = 0;
          v178 = v181;
          v182 = 0;
          *(_OWORD *)v181 = 0;
          v305 = v326;
LABEL_45:
          LOBYTE(v326[0]) = 5;
          v326[1] = v180;
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
          v183 = v326[0];
          v184 = v326[1];
          goto LABEL_49;
        }
        if ( (_BYTE)v322 != 2 )
          ida_mcp::tools::control_flow::`anonymous namespace'::get_function_flowchart(
            (int)&v322,
            v179,
            v175,
            (unsigned __int8)v322,
            v176,
            v177,
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
            a69);
        v182 = 0;
        v305 = v326;
        while ( 1 )
        {
          v185 = *(_QWORD *)(v178 + 8);
          if ( v185 == *(_QWORD *)(v178 + 16) )
            goto LABEL_45;
          LOBYTE(v326[0]) = 5;
          v186 = v185 + 16;
          v183 = 0;
          v326[1] = v180;
          *(__m128i *)(v186 - 16) = _mm_load_si128((const __m128i *)v326);
          *(_QWORD *)(v178 + 8) = v186;
          v184 = 0;
LABEL_49:
          v326[1] = v184;
          ++v182;
          LOBYTE(v326[0]) = v183;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( *(_DWORD *)(v118 + *(_QWORD *)v340 + 24) <= (int)v182 )
            break;
          v180 = *(int *)(*(_QWORD *)(v118 + *(_QWORD *)v340 + 16) + 4 * v182);
        }
        v314 = 2;
      }
      LOBYTE(v326[0]) = 0;
      v323 = v178;
      LOBYTE(v322) = v314;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v187 = v326[0];
      v188 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v189 = v326[1];
      v190 = *(_BYTE *)v188;
      *(_BYTE *)v188 = v187;
      v191 = *(_QWORD *)(v188 + 8);
      *(_QWORD *)(v188 + 8) = v189;
      LOBYTE(v326[0]) = v190;
      v326[1] = v191;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v192 = *(int *)(*(_QWORD *)v340 + v118 + 24);
      v193 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v194 = *(_BYTE *)v193;
      v195 = *(_QWORD *)(v193 + 8);
      *(_BYTE *)v193 = 5;
      v196 = v320[0];
      LOBYTE(v326[0]) = v194;
      *(_QWORD *)(v193 + 8) = v192;
      v304.m128i_i8[0] = v196;
      v326[1] = v195;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v324[0] = 0;
      v325 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v324,
        0,
        0,
        v197,
        v198,
        v199,
        v304.m128i_i32[0],
        v304.m128i_i32[2],
        (int)v305,
        v306[0],
        v307[0],
        (int)v308,
        (__int64)v324);
      v200 = v325;
      v201 = v324[0];
      if ( *(int *)(v118 + *(_QWORD *)v340 + 48) > 0 )
      {
        v202 = **(int **)(v118 + *(_QWORD *)v340 + 40);
        if ( !v324[0] )
        {
          v203 = operator new(0x18u);
          *(_QWORD *)(v203 + 16) = 0;
          v200 = v203;
          i = 0;
          *(_OWORD *)v203 = 0;
LABEL_54:
          LOBYTE(v326[0]) = 5;
          v326[1] = v202;
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
          v205 = v326[0];
          v206 = v326[1];
          goto LABEL_58;
        }
        if ( v324[0] != 2 )
          JUMPOUT(0xE43BF);
        for ( i = 0; ; v202 = *(int *)(*(_QWORD *)(v118 + *(_QWORD *)v340 + 40) + 4 * i) )
        {
          v207 = *(_QWORD *)(v200 + 8);
          if ( v207 == *(_QWORD *)(v200 + 16) )
            goto LABEL_54;
          LOBYTE(v326[0]) = 5;
          v208 = v207 + 16;
          v205 = 0;
          v326[1] = v202;
          *(__m128i *)(v208 - 16) = _mm_load_si128((const __m128i *)v326);
          *(_QWORD *)(v200 + 8) = v208;
          v206 = 0;
LABEL_58:
          v326[1] = v206;
          ++i;
          LOBYTE(v326[0]) = v205;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( *(_DWORD *)(v118 + *(_QWORD *)v340 + 48) <= (int)i )
            break;
        }
        v201 = 2;
      }
      LOBYTE(v326[0]) = 0;
      v324[0] = v201;
      v325 = v200;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v209 = v326[0];
      v210 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v211 = v326[1];
      v212 = *(_BYTE *)v210;
      *(_BYTE *)v210 = v209;
      v213 = *(_QWORD *)(v210 + 8);
      *(_QWORD *)(v210 + 8) = v211;
      LOBYTE(v326[0]) = v212;
      v326[1] = v213;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v214 = *(int *)(*(_QWORD *)v340 + v118 + 48);
      v215 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v216 = *(_BYTE *)v215;
      v217 = *(_QWORD *)(v215 + 8);
      *(_BYTE *)v215 = 5;
      v218 = v320[0];
      LOBYTE(v326[0]) = v216;
      *(_QWORD *)(v215 + 8) = v214;
      v304.m128i_i8[0] = v218;
      v326[1] = v217;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v319) = v315;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
      v315 = v319;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      ++*(_QWORD *)v307;
      if ( v341[0] <= v307[0] )
        goto LABEL_61;
    }
  }
  v305 = v326;
LABEL_61:
  LOBYTE(v326[0]) = 0;
  LOBYTE(v319) = v315;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v219 = v326[0];
  v220 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v221 = v326[1];
  v222 = *(_BYTE *)v220;
  *(_BYTE *)v220 = v219;
  v223 = *(_QWORD *)(v220 + 8);
  *(_QWORD *)(v220 + 8) = v221;
  v326[1] = v223;
  LOBYTE(v326[0]) = v222;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v224 = *(_QWORD *)v340;
  *(_QWORD *)v333 = off_445398;
  if ( *(_QWORD *)v340 )
  {
    v225 = *(_QWORD *)v341;
    if ( *(_QWORD *)v341 )
    {
      v226 = 0;
      do
      {
        while ( 1 )
        {
          v227 = (_QWORD *)(v224 + (v226 << 6));
          if ( v227[5] )
          {
            v227[6] = 0;
            qfree();
          }
          if ( !v227[2] )
            break;
          v227[3] = 0;
          ++v226;
          qfree();
          v224 = *(_QWORD *)v340;
          if ( v226 == v225 )
            goto LABEL_68;
        }
        ++v226;
        v224 = *(_QWORD *)v340;
      }
      while ( v225 != v226 );
    }
LABEL_68:
    *(_QWORD *)v341 = 0;
    qfree();
  }
  if ( *(_QWORD *)v335 )
  {
    *(_QWORD *)v336 = 0;
    qfree();
  }
  return v313;
}

