_QWORD *__fastcall ida_mcp::tools::dirtree_tools::`anonymous namespace'::list_directory(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12,
        int a13,
        __int64 a14,
        int a15,
        int a16,
        __int64 a17,
        int a18,
        int a19,
        __int64 a20,
        int a21,
        int a22,
        int a23,
        __int64 a24,
        int a25,
        int a26,
        int a27,
        char a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        int a34,
        int a35,
        __int64 a36,
        __int64 a37,
        int a38,
        int a39,
        int a40,
        int a41,
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
        char a68,
        int a69,
        int a70,
        int a71,
        int a72,
        int a73,
        int a74,
        int a75,
        int a76,
        __int64 a77)
{
  std::runtime_error *exception; // rbx
  void *v78; // rbp
  __int64 v79; // rbp
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r12
  char v90; // al
  __int64 v91; // rsi
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  unsigned __int64 v104; // rbp
  const char *v105; // rbp
  __int64 *v106; // rbx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  _DWORD *v115; // rax
  _QWORD *v116; // rbp
  unsigned __int64 *v117; // r15
  __int64 v118; // rax
  unsigned __int64 *v119; // r14
  _QWORD *v120; // r13
  unsigned __int64 v121; // rax
  size_t v122; // rcx
  void *v123; // rax
  _QWORD *v124; // rsi
  _QWORD *insert_hint_unique_pos; // rax
  __int64 v126; // rdx
  _QWORD *v127; // r12
  char v128; // si
  _QWORD *v129; // rdx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  _QWORD *v134; // r14
  void *v135; // rbx
  size_t v136; // r12
  const void *v137; // rdi
  size_t v138; // r15
  _QWORD *v139; // r13
  size_t v140; // rdx
  int v141; // eax
  __int64 v142; // r15
  size_t v143; // r15
  size_t v144; // rdx
  signed __int64 v145; // rax
  char v146; // si
  _QWORD *v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // r12
  _QWORD *v153; // r10
  void *v154; // r13
  size_t v155; // rbx
  size_t v156; // rcx
  const void *v157; // rdi
  size_t v158; // rbp
  _QWORD *v159; // r15
  _QWORD *v160; // rbx
  size_t v161; // r14
  size_t v162; // rdx
  int v163; // eax
  __int64 v164; // r14
  size_t v165; // rcx
  size_t v166; // rdx
  const void *v167; // rsi
  signed __int64 v168; // rax
  __int64 v169; // rsi
  _QWORD *v170; // rax
  __int64 v171; // rdi
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rax
  __int64 *v177; // rbx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  _BYTE *v182; // r13
  unsigned __int64 v183; // r14
  _QWORD *v184; // rax
  _BYTE *v185; // rdi
  __int64 *v186; // rbx
  __m128i v187; // xmm0
  size_t v188; // rdx
  __int64 v189; // rax
  __int64 *v190; // rbx
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 *v195; // rbx
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 *v203; // r15
  unsigned __int64 *v204; // rbx
  __int64 v206; // rax
  char *v207; // r14
  _QWORD *v208; // r15
  void *v209; // rax
  _QWORD *v210; // rax
  _QWORD *v211; // rdx
  _QWORD *v212; // r11
  _QWORD *v213; // r10
  void *v214; // r13
  size_t v215; // rbx
  size_t v216; // rcx
  const void *v217; // rdi
  size_t v218; // rbp
  _QWORD *v219; // r15
  _QWORD *v220; // rbx
  size_t i; // r14
  size_t v222; // rdx
  int v223; // eax
  __int64 v224; // r14
  size_t v225; // rcx
  size_t v226; // rdx
  const void *v227; // rsi
  signed __int64 v228; // rax
  _QWORD *v229; // rax
  char *v230; // rdi
  unsigned __int64 *v231; // rdi
  _QWORD *v232; // r10
  _QWORD *v233; // rax
  unsigned __int64 v234; // rax
  void *v235; // rax
  _QWORD *v236; // rax
  _QWORD *v237; // rdx
  _QWORD *v238; // r10
  _QWORD *v239; // r11
  _QWORD *v240; // r10
  _QWORD *v241; // rax
  unsigned __int64 v242; // rax
  void *v243; // rax
  _QWORD *v244; // rax
  _QWORD *v245; // rdx
  _QWORD *v246; // r10
  _QWORD *v247; // r11
  size_t v248; // rcx
  size_t v249; // rcx
  const void *v250; // rdx
  unsigned int v251; // eax
  unsigned int v252; // eax
  __int64 v253; // rbp
  __int64 v254; // rdx
  __int64 v255; // rcx
  __int64 v256; // r8
  __int64 v257; // r9
  __int64 v258; // rdx
  __int64 v259; // rcx
  __int64 v260; // r8
  __int64 v261; // r9
  _BYTE *v262; // rdx
  _BYTE *v263; // rcx
  size_t v264; // rax
  unsigned __int64 v265; // rcx
  __int64 v266; // rax
  unsigned __int64 v267; // rax
  __int64 v268; // rsi
  unsigned __int64 v269; // rdx
  unsigned __int64 v270; // rsi
  unsigned int v271; // eax
  unsigned int v272; // eax
  unsigned int v273; // ecx
  __int64 v274; // rdi
  __int64 v275; // rsi
  unsigned __int64 v276; // rdx
  unsigned __int64 v277; // rsi
  unsigned int v278; // eax
  unsigned int v279; // eax
  unsigned int v280; // ecx
  __int64 v281; // rdi
  unsigned int v282; // edx
  unsigned int v283; // edx
  size_t v284; // rcx
  const void *v285; // rdx
  size_t v286; // rcx
  const void *v287; // rdx
  __int64 v288; // rdi
  unsigned __int64 v289; // rsi
  unsigned int v290; // edx
  unsigned __int64 v291; // r11
  unsigned int v292; // edx
  unsigned int v293; // ecx
  __int64 v294; // rdi
  __int64 v295; // rdi
  unsigned __int64 v296; // rsi
  unsigned int v297; // edx
  unsigned __int64 v298; // r11
  unsigned int v299; // edx
  unsigned int v300; // ecx
  __int64 v301; // rdi
  __int64 v302; // rbx
  unsigned __int64 v303; // rsi
  char *v304; // rcx
  __int64 v305; // rbx
  unsigned int v306; // edx
  unsigned int v307; // eax
  __int64 v308; // rcx
  __m128i v309; // [rsp+0h] [rbp-278h] BYREF
  __int64 v310; // [rsp+10h] [rbp-268h]
  void *v311; // [rsp+18h] [rbp-260h]
  unsigned __int64 *v312; // [rsp+20h] [rbp-258h]
  __int64 *p_s2; // [rsp+28h] [rbp-250h]
  __int64 v314; // [rsp+30h] [rbp-248h]
  __int64 *v315; // [rsp+38h] [rbp-240h]
  __int64 v316; // [rsp+40h] [rbp-238h]
  __int64 *v317; // [rsp+48h] [rbp-230h]
  __int128 *v318; // [rsp+50h] [rbp-228h]
  void **v319; // [rsp+58h] [rbp-220h]
  _QWORD *v320; // [rsp+60h] [rbp-218h]
  _QWORD *v321; // [rsp+68h] [rbp-210h]
  void **v322; // [rsp+70h] [rbp-208h]
  char *v323; // [rsp+78h] [rbp-200h]
  __int64 dir_size; // [rsp+80h] [rbp-1F8h]
  char v325; // [rsp+8Dh] [rbp-1EBh]
  char v326; // [rsp+8Eh] [rbp-1EAh]
  char v327; // [rsp+8Fh] [rbp-1E9h]
  void **p_src; // [rsp+90h] [rbp-1E8h]
  _QWORD *v329; // [rsp+98h] [rbp-1E0h]
  __int64 v330; // [rsp+A7h] [rbp-1D1h]
  unsigned __int8 v331; // [rsp+AFh] [rbp-1C9h]
  char v332; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v333; // [rsp+B8h] [rbp-1C0h]
  unsigned __int64 v334; // [rsp+C0h] [rbp-1B8h]
  unsigned __int64 v335; // [rsp+C8h] [rbp-1B0h] BYREF
  __int64 v336; // [rsp+D0h] [rbp-1A8h] BYREF
  __int128 v337; // [rsp+D8h] [rbp-1A0h]
  __int64 v338; // [rsp+F0h] [rbp-188h] BYREF
  __int128 v339; // [rsp+F8h] [rbp-180h]
  __int128 v340; // [rsp+108h] [rbp-170h] BYREF
  void *src; // [rsp+120h] [rbp-158h] BYREF
  __m128 v342; // [rsp+128h] [rbp-150h] BYREF
  void *v343; // [rsp+140h] [rbp-138h] BYREF
  __int64 v344; // [rsp+148h] [rbp-130h]
  _QWORD v345[2]; // [rsp+150h] [rbp-128h] BYREF
  char v346; // [rsp+160h] [rbp-118h] BYREF
  __int128 v347; // [rsp+168h] [rbp-110h]
  char v348; // [rsp+178h] [rbp-100h]
  __m128i v349; // [rsp+180h] [rbp-F8h]
  char v350; // [rsp+190h] [rbp-E8h] BYREF
  __int128 v351; // [rsp+198h] [rbp-E0h]
  char v352; // [rsp+1A8h] [rbp-D0h]
  __int64 v353; // [rsp+1B0h] [rbp-C8h]
  __int64 v354; // [rsp+1B8h] [rbp-C0h]
  void *v355; // [rsp+1C0h] [rbp-B8h] BYREF
  __int128 v356; // [rsp+1C8h] [rbp-B0h] BYREF
  __int64 v357; // [rsp+1E8h] [rbp-90h]
  void *s2; // [rsp+1F0h] [rbp-88h] BYREF
  size_t n; // [rsp+1F8h] [rbp-80h]
  unsigned __int64 v360; // [rsp+200h] [rbp-78h] BYREF
  _QWORD v361[3]; // [rsp+208h] [rbp-70h] BYREF
  _QWORD v362[3]; // [rsp+220h] [rbp-58h] BYREF
  unsigned __int64 v363; // [rsp+238h] [rbp-40h] BYREF

  v321 = a1;
  v363 = __readfsqword(0x28u);
  v326 = *(_BYTE *)a2;
  if ( v326 != 1
    || (v79 = *(_QWORD *)(a2 + 8),
        v79 + 8 == std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_find_tr<char [5],void>())
    || *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
                   a2,
                   (__int64)"tree",
                   v81,
                   v82,
                   v83,
                   v84,
                   v309.m128i_i64[0],
                   v309.m128i_i8[8],
                   v310,
                   (int)v311,
                   (int)v312,
                   (char)p_s2,
                   v314,
                   (int)v315,
                   v316,
                   (int)v317,
                   (__int64)v318) != 3 )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Missing required parameter: tree");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  BYTE8(v356) = 0;
  v89 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
          a2,
          (__int64)"tree",
          v85,
          v86,
          v87,
          v88,
          v309.m128i_i64[0],
          v309.m128i_i8[8],
          v310,
          (int)v311,
          (int)v312,
          (char)p_s2,
          v314,
          (int)v315,
          v316,
          (int)v317,
          (__int64)v318);
  v355 = (char *)&v356 + 8;
  v319 = &v355;
  v90 = *(_BYTE *)v89;
  *(_QWORD *)&v356 = 0;
  v327 = v90;
  if ( v90 != 3 )
    JUMPOUT(0x11465D);
  v91 = *(_QWORD *)(v89 + 8);
  std::string::_M_assign();
  v314 = ida_mcp::tools::dirtree_tools::`anonymous namespace'::resolve_tree(
           v319,
           v91,
           v92,
           v93,
           v94,
           v95,
           v309.m128i_i32[0],
           v309.m128i_i32[2],
           v310,
           (char)v311,
           (int)v312,
           (int)p_s2,
           v314,
           (int)v315,
           v316);
  if ( v355 != (char *)&v356 + 8 )
    operator delete(v355, *((_QWORD *)&v356 + 1) + 1LL);
  p_src = &src;
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&src,
    "/",
    v96,
    v97,
    v98,
    v99,
    v309.m128i_i32[0],
    v309.m128i_i32[2],
    v310);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_8;
  v253 = *(_QWORD *)(a2 + 8) + 8LL;
  if ( v253 == std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_find_tr<char [5],void>()
    || *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
                   a2,
                   (__int64)"path",
                   v254,
                   v255,
                   v256,
                   v257,
                   v309.m128i_i64[0],
                   v309.m128i_i8[8],
                   v310,
                   (int)v311,
                   (int)v312,
                   (char)p_s2,
                   v314,
                   (int)v315,
                   v316,
                   (int)v317,
                   (__int64)v318) != 3 )
  {
    goto LABEL_8;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
    a2,
    (__int64)"path",
    v258,
    v259,
    v260,
    v261,
    v309.m128i_i64[0],
    v309.m128i_i8[8],
    v310,
    (int)v311,
    (int)v312,
    (char)p_s2,
    v314,
    (int)v315,
    v316,
    (int)v317,
    (__int64)v318);
  p_s2 = (__int64 *)&s2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
  v262 = src;
  v263 = src;
  if ( src == &v342.m128_u16[4] )
  {
    v309.m128i_i64[0] = (__int64)&v360;
    if ( s2 != &v360 )
    {
      src = s2;
      v342 = _mm_loadh_ps((const double *)&v360);
      goto LABEL_213;
    }
    v264 = n;
LABEL_217:
    if ( v264 )
    {
      if ( v264 == 1 )
      {
        *(_BYTE *)src = v360;
        v263 = src;
        v264 = n;
        goto LABEL_224;
      }
      if ( (unsigned int)v264 >= 8 )
      {
        *(_QWORD *)src = v360;
        v302 = v309.m128i_i64[0];
        *(_QWORD *)&v263[(unsigned int)v264 - 8] = *(_QWORD *)(v309.m128i_i64[0] + (unsigned int)v264 - 8);
        v303 = (unsigned __int64)(v263 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v304 = &v263[-v303];
        v305 = v302 - (_QWORD)v304;
        if ( (((_DWORD)v304 + (_DWORD)v264) & 0xFFFFFFF8) >= 8 )
        {
          v306 = ((_DWORD)v304 + v264) & 0xFFFFFFF8;
          v307 = 0;
          do
          {
            v308 = v307;
            v307 += 8;
            *(_QWORD *)(v303 + v308) = *(_QWORD *)(v305 + v308);
          }
          while ( v307 < v306 );
        }
LABEL_223:
        v263 = src;
        v264 = n;
        goto LABEL_224;
      }
      if ( (v264 & 4) != 0 )
      {
        *(_DWORD *)src = v360;
        *(_DWORD *)&v263[(unsigned int)v264 - 4] = *(_DWORD *)(v309.m128i_i64[0] + (unsigned int)v264 - 4);
        v263 = src;
        v264 = n;
        goto LABEL_224;
      }
      if ( (_DWORD)v264 )
      {
        *(_BYTE *)src = v360;
        if ( (v264 & 2) != 0 )
        {
          *(_WORD *)&v263[(unsigned int)v264 - 2] = *(_WORD *)(v309.m128i_i64[0] + (unsigned int)v264 - 2);
          v263 = src;
          v264 = n;
          goto LABEL_224;
        }
        goto LABEL_223;
      }
    }
LABEL_224:
    v342.m128_u64[0] = v264;
    v263[v264] = 0;
    v262 = s2;
    goto LABEL_177;
  }
  v264 = n;
  v309.m128i_i64[0] = (__int64)&v360;
  if ( s2 == &v360 )
    goto LABEL_217;
  v265 = v342.m128_u64[1];
  src = s2;
  v342 = _mm_loadh_ps((const double *)&v360);
  if ( !v262 )
  {
LABEL_213:
    v262 = &v360;
    s2 = (void *)v309.m128i_i64[0];
    goto LABEL_177;
  }
  s2 = v262;
  v360 = v265;
LABEL_177:
  n = 0;
  *v262 = 0;
  std::string::_M_dispose();
LABEL_8:
  v338 = -1;
  LOBYTE(v339) = 0;
  v315 = &v338;
  dirtree_resolve_path();
  if ( v338 == -1 || !(_BYTE)v339 )
  {
    v78 = __cxa_allocate_exception(0x10u);
    p_s2 = (__int64 *)&s2;
    std::operator+<char>((__int64)&s2, "Path not found or not a directory: ", (__int64)src, v342.m128_u64[0]);
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    __cxa_throw(
      v78,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  dir_size = dirtree_get_dir_size();
  v332 = 0;
  v323 = &v332;
  v333 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v104 = v342.m128_u64[0];
  v338 = 0;
  v339 = 0;
  v325 = v332;
  v340 = -1;
  v316 = v333;
  if ( v342.m128_u64[0] == 1 && *(_BYTE *)src == 47 )
  {
    v322 = &v343;
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v343,
      "/*",
      v100,
      v101,
      v102,
      v103,
      v309.m128i_i32[0],
      v309.m128i_i32[2],
      v310);
  }
  else
  {
    v344 = 0;
    v322 = &v343;
    v343 = v345;
    LOBYTE(v345[0]) = 0;
    std::string::reserve();
    if ( 0x7FFFFFFFFFFFFFFELL - v344 < v104 )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append();
    if ( (unsigned __int64)(v344 - 0x7FFFFFFFFFFFFFFDLL) <= 1 )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append();
  }
  if ( !(unsigned __int8)dirtree_findfirst() )
    goto LABEL_82;
  v318 = &v340;
  v317 = &v336;
  do
  {
    v336 = -1;
    LOBYTE(v337) = 0;
    dirtree_resolve_cursor();
    v330 = v336;
    v331 = v337;
    if ( v336 == -1 )
      continue;
    v337 = 0;
    v336 = 0;
    dirtree_get_entry_name();
    v105 = (const char *)v336;
    if ( !(_QWORD)v337 )
      v105 = _qstring<char>::c_str(void)const::nullstr;
    v334 = 0;
    v312 = &v335;
    v335 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v106 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v106,
      v105,
      v107,
      v108,
      v109,
      v110,
      v309.m128i_i32[0],
      v309.m128i_i32[2],
      v310);
    p_s2 = (__int64 *)&s2;
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&s2,
      "name",
      v111,
      v112,
      v113,
      v114,
      v309.m128i_i32[0],
      v309.m128i_i32[2],
      v310);
    v115 = (_DWORD *)operator new(0x30u);
    v115[2] = 0;
    v116 = v115;
    v115 += 2;
    *((_QWORD *)v115 + 1) = 0;
    v117 = (unsigned __int64 *)s2;
    v116[3] = v115;
    v116[4] = v115;
    v116[5] = 0;
    v311 = v115;
    v320 = (_QWORD *)n;
    v118 = operator new(0x50u);
    v119 = (unsigned __int64 *)(v118 + 48);
    v120 = (_QWORD *)v118;
    *(_QWORD *)(v118 + 32) = v118 + 48;
    v309.m128i_i64[0] = (__int64)&v360;
    if ( v117 == &v360 )
    {
      v251 = (_DWORD)v320 + 1;
      if ( (unsigned int)((_DWORD)v320 + 1) >= 8 )
      {
        v120[6] = v360;
        v275 = v309.m128i_i64[0];
        *(unsigned __int64 *)((char *)v119 + v251 - 8) = *(_QWORD *)(v309.m128i_i64[0] + v251 - 8);
        v276 = (unsigned __int64)(v120 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v277 = v275 - ((_QWORD)v119 - v276);
        v278 = ((_DWORD)v119 - v276 + v251) & 0xFFFFFFF8;
        if ( v278 >= 8 )
        {
          v279 = v278 & 0xFFFFFFF8;
          v280 = 0;
          do
          {
            v281 = v280;
            v280 += 8;
            *(_QWORD *)(v276 + v281) = *(_QWORD *)(v277 + v281);
          }
          while ( v280 < v279 );
        }
      }
      else if ( (v251 & 4) != 0 )
      {
        *((_DWORD *)v120 + 12) = v360;
        *(_DWORD *)((char *)v119 + v251 - 4) = *(_DWORD *)(v309.m128i_i64[0] + v251 - 4);
      }
      else if ( (_DWORD)v320 != -1 )
      {
        *((_BYTE *)v120 + 48) = v360;
        if ( (v251 & 2) != 0 )
          *(_WORD *)((char *)v119 + v251 - 2) = *(_WORD *)(v309.m128i_i64[0] + v251 - 2);
      }
      v117 = v119;
    }
    else
    {
      v121 = v360;
      v120[4] = v117;
      v120[6] = v121;
    }
    v122 = (size_t)v320;
    v123 = (void *)v309.m128i_i64[0];
    v120[8] = 0;
    v124 = v311;
    v120[5] = v122;
    v120[9] = 0;
    s2 = v123;
    n = 0;
    LOBYTE(v360) = 0;
    insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                               v116,
                               v124,
                               v117,
                               v122);
    v127 = insert_hint_unique_pos;
    if ( v126 )
    {
      if ( !insert_hint_unique_pos && v311 != (void *)v126 )
      {
        v248 = *(_QWORD *)(v126 + 40);
        v329 = (_QWORD *)v126;
        std::string::compare(v117, (size_t)v320, *(const void **)(v126 + 32), v248);
      }
      v127 = v120;
      std::_Rb_tree_insert_and_rebalance();
      ++v116[5];
    }
    else
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v231 = (unsigned __int64 *)v120[4];
      if ( v119 != v231 )
        operator delete(v231, v120[6] + 1LL);
      operator delete(v120, 0x50u);
    }
    if ( s2 != (void *)v309.m128i_i64[0] )
      operator delete(s2, v360 + 1);
    v128 = *((_BYTE *)v127 + 64);
    v129 = (_QWORD *)v127[9];
    *((_BYTE *)v127 + 64) = 3;
    v127[9] = v106;
    LOBYTE(v334) = v128;
    v335 = (unsigned __int64)v129;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v335 = v331;
    std::string::basic_string<std::allocator<char>>(
      p_s2,
      "is_dir",
      v130,
      v131,
      v132,
      v133,
      v309.m128i_i32[0],
      v309.m128i_i32[2],
      v310);
    v134 = (_QWORD *)v116[2];
    v135 = s2;
    v136 = n;
    if ( !v134 )
    {
      v139 = v311;
      goto LABEL_95;
    }
    v137 = (const void *)v134[4];
    v138 = v134[5];
    v139 = v311;
    while ( 1 )
    {
      v140 = v138;
      if ( v136 <= v138 )
        v140 = v136;
      if ( !v140 || (v141 = memcmp(v137, v135, v140)) == 0 )
      {
        v142 = v138 - v136;
        if ( v142 > 0x7FFFFFFF )
          goto LABEL_30;
        if ( v142 < (__int64)0xFFFFFFFF80000000LL )
          break;
        v141 = v142;
      }
      if ( v141 < 0 )
        break;
LABEL_30:
      v139 = v134;
      v134 = (_QWORD *)v134[2];
      if ( !v134 )
        goto LABEL_41;
LABEL_31:
      v137 = (const void *)v134[4];
      v138 = v134[5];
    }
    v134 = (_QWORD *)v134[3];
    if ( v134 )
      goto LABEL_31;
LABEL_41:
    if ( v311 == v139 )
      goto LABEL_95;
    v143 = v139[5];
    v144 = v143;
    if ( v136 <= v143 )
      v144 = v136;
    if ( v144 && (LODWORD(v145) = memcmp(v135, (const void *)v139[4], v144), (_DWORD)v145) )
    {
LABEL_48:
      if ( (int)v145 < 0 )
        goto LABEL_95;
    }
    else
    {
      v145 = v136 - v143;
      if ( (__int64)(v136 - v143) <= 0x7FFFFFFF )
      {
        if ( v145 >= (__int64)0xFFFFFFFF80000000LL )
          goto LABEL_48;
LABEL_95:
        v206 = operator new(0x50u);
        v207 = (char *)(v206 + 48);
        v208 = (_QWORD *)v206;
        *(_QWORD *)(v206 + 32) = v206 + 48;
        if ( v135 == (void *)v309.m128i_i64[0] )
        {
          v252 = v136 + 1;
          if ( (unsigned int)(v136 + 1) >= 8 )
          {
            v208[6] = v360;
            v268 = v309.m128i_i64[0];
            *(_QWORD *)&v207[v252 - 8] = *(_QWORD *)(v309.m128i_i64[0] + v252 - 8);
            v269 = (unsigned __int64)(v208 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            v270 = v268 - (_QWORD)&v207[-v269];
            v271 = ((_DWORD)v207 - v269 + v252) & 0xFFFFFFF8;
            if ( v271 >= 8 )
            {
              v272 = v271 & 0xFFFFFFF8;
              v273 = 0;
              do
              {
                v274 = v273;
                v273 += 8;
                *(_QWORD *)(v269 + v274) = *(_QWORD *)(v270 + v274);
              }
              while ( v273 < v272 );
            }
          }
          else if ( (v252 & 4) != 0 )
          {
            *((_DWORD *)v208 + 12) = v360;
            *(_DWORD *)&v207[v252 - 4] = *(_DWORD *)(v309.m128i_i64[0] + v252 - 4);
          }
          else if ( (_DWORD)v136 != -1 )
          {
            *((_BYTE *)v208 + 48) = v360;
            if ( (v252 & 2) != 0 )
              *(_WORD *)&v207[v252 - 2] = *(_WORD *)(v309.m128i_i64[0] + v252 - 2);
          }
          v135 = v207;
        }
        else
        {
          *(_QWORD *)(v206 + 32) = v135;
          *(_QWORD *)(v206 + 48) = v360;
        }
        v208[5] = v136;
        v209 = (void *)v309.m128i_i64[0];
        v208[8] = 0;
        v208[9] = 0;
        s2 = v209;
        n = 0;
        LOBYTE(v360) = 0;
        v210 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                 v116,
                 v139,
                 v135,
                 v136);
        v212 = v211;
        v139 = v210;
        if ( v211 )
        {
          if ( !v210 && v311 != v211 )
          {
            v249 = v211[5];
            v250 = (const void *)v211[4];
            v320 = v212;
            std::string::compare(v135, v136, v250, v249);
          }
          v139 = v208;
          std::_Rb_tree_insert_and_rebalance();
          ++v116[5];
        }
        else
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v230 = (char *)v208[4];
          if ( v207 != v230 )
            operator delete(v230, v208[6] + 1LL);
          operator delete(v208, 0x50u);
        }
        v135 = s2;
      }
    }
    if ( v135 != (void *)v309.m128i_i64[0] )
      operator delete(v135, v360 + 1);
    v146 = *((_BYTE *)v139 + 64);
    v147 = (_QWORD *)v139[9];
    *((_BYTE *)v139 + 64) = 4;
    LOBYTE(v334) = v146;
    v139[9] = v335;
    v335 = (unsigned __int64)v147;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v152 = v330;
    if ( v331 )
    {
      std::string::basic_string<std::allocator<char>>(
        p_s2,
        "dir_index",
        v148,
        v149,
        v150,
        v151,
        v309.m128i_i32[0],
        v309.m128i_i32[2],
        v310);
      v213 = (_QWORD *)v116[2];
      v214 = s2;
      v215 = n;
      if ( !v213 )
      {
        v219 = v311;
        goto LABEL_137;
      }
      v216 = v213[5];
      v217 = (const void *)v213[4];
      v320 = v116;
      v218 = n;
      v219 = v311;
      v220 = v213;
      for ( i = v216; ; i = v220[5] )
      {
        v222 = i;
        if ( v218 <= i )
          v222 = v218;
        if ( v222 )
        {
          v223 = memcmp(v217, v214, v222);
          if ( v223 )
            goto LABEL_114;
        }
        v224 = i - v218;
        if ( v224 > 0x7FFFFFFF )
          goto LABEL_105;
        if ( v224 >= (__int64)0xFFFFFFFF80000000LL )
          break;
LABEL_115:
        v220 = (_QWORD *)v220[3];
        if ( !v220 )
        {
LABEL_116:
          v215 = v218;
          v116 = v320;
          if ( v311 == v219 )
            goto LABEL_137;
          v225 = v219[5];
          v226 = v225;
          if ( v215 <= v225 )
            v226 = v215;
          if ( v226
            && (v227 = (const void *)v219[4],
                v320 = (_QWORD *)v219[5],
                LODWORD(v228) = memcmp(v214, v227, v226),
                v225 = (size_t)v320,
                (_DWORD)v228) )
          {
LABEL_123:
            if ( (int)v228 < 0 )
              goto LABEL_137;
          }
          else
          {
            v228 = v215 - v225;
            if ( (__int64)(v215 - v225) <= 0x7FFFFFFF )
            {
              if ( v228 >= (__int64)0xFFFFFFFF80000000LL )
                goto LABEL_123;
LABEL_137:
              v232 = (_QWORD *)operator new(0x50u);
              v233 = v232 + 6;
              v232[4] = v232 + 6;
              if ( v214 == (void *)v309.m128i_i64[0] )
              {
                v283 = v215 + 1;
                if ( (unsigned int)(v215 + 1) >= 8 )
                {
                  v232[6] = v360;
                  v288 = v309.m128i_i64[0];
                  *(_QWORD *)((char *)v233 + v283 - 8) = *(_QWORD *)(v309.m128i_i64[0] + v283 - 8);
                  v289 = (unsigned __int64)(v232 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  v290 = ((_DWORD)v233 - v289 + v283) & 0xFFFFFFF8;
                  v291 = v288 - ((_QWORD)v233 - v289);
                  if ( v290 >= 8 )
                  {
                    v292 = v290 & 0xFFFFFFF8;
                    v293 = 0;
                    do
                    {
                      v294 = v293;
                      v293 += 8;
                      *(_QWORD *)(v289 + v294) = *(_QWORD *)(v291 + v294);
                    }
                    while ( v293 < v292 );
                  }
                }
                else if ( (v283 & 4) != 0 )
                {
                  *((_DWORD *)v232 + 12) = v360;
                  *(_DWORD *)((char *)v233 + v283 - 4) = *(_DWORD *)(v309.m128i_i64[0] + v283 - 4);
                }
                else if ( (_DWORD)v215 != -1 )
                {
                  *((_BYTE *)v232 + 48) = v360;
                  if ( (v283 & 2) != 0 )
                    *(_WORD *)((char *)v233 + v283 - 2) = *(_WORD *)(v309.m128i_i64[0] + v283 - 2);
                }
                v214 = v232 + 6;
              }
              else
              {
                v234 = v360;
                v232[4] = v214;
                v232[6] = v234;
              }
              v232[5] = v215;
              v235 = (void *)v309.m128i_i64[0];
              v232[8] = 0;
              v232[9] = 0;
              v320 = v232;
              s2 = v235;
              n = 0;
              LOBYTE(v360) = 0;
              v236 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                       v116,
                       v219,
                       v214,
                       v215);
              v238 = v320;
              v239 = v237;
              v219 = v236;
              if ( v237 )
              {
                if ( !v236 && v311 != v237 )
                {
                  v284 = v237[5];
                  v285 = (const void *)v237[4];
                  v329 = v320;
                  v320 = v239;
                  std::string::compare(v214, v215, v285, v284);
                  v238 = v329;
                }
                v219 = v238;
                std::_Rb_tree_insert_and_rebalance();
                ++v116[5];
              }
              else
              {
                v311 = v320;
                nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
                std::string::_M_dispose();
                operator delete(v320, 0x50u);
              }
              v214 = s2;
            }
          }
          if ( v214 != (void *)v309.m128i_i64[0] )
            operator delete(v214, v360 + 1);
          v169 = *((unsigned __int8 *)v219 + 64);
          v229 = (_QWORD *)v219[9];
          *((_BYTE *)v219 + 64) = 6;
          v171 = (__int64)v312;
          LOBYTE(v334) = v169;
          v219[9] = v152;
          v335 = (unsigned __int64)v229;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( !v325 )
            goto LABEL_76;
          goto LABEL_127;
        }
LABEL_106:
        v217 = (const void *)v220[4];
      }
      v223 = v224;
LABEL_114:
      if ( v223 >= 0 )
      {
LABEL_105:
        v219 = v220;
        v220 = (_QWORD *)v220[2];
        if ( !v220 )
          goto LABEL_116;
        goto LABEL_106;
      }
      goto LABEL_115;
    }
    std::string::basic_string<std::allocator<char>>(
      p_s2,
      "inode",
      v148,
      v149,
      v150,
      v151,
      v309.m128i_i32[0],
      v309.m128i_i32[2],
      v310);
    v153 = (_QWORD *)v116[2];
    v154 = s2;
    v155 = n;
    if ( !v153 )
    {
      v159 = v311;
      goto LABEL_145;
    }
    v156 = v153[5];
    v157 = (const void *)v153[4];
    v320 = v116;
    v158 = n;
    v159 = v311;
    v160 = v153;
    v161 = v156;
    while ( 2 )
    {
      v162 = v158;
      if ( v161 <= v158 )
        v162 = v161;
      if ( v162 )
      {
        v163 = memcmp(v157, v154, v162);
        if ( v163 )
        {
LABEL_63:
          if ( v163 < 0 )
            goto LABEL_64;
LABEL_54:
          v159 = v160;
          v160 = (_QWORD *)v160[2];
          if ( !v160 )
            goto LABEL_65;
LABEL_55:
          v157 = (const void *)v160[4];
          v161 = v160[5];
          continue;
        }
      }
      break;
    }
    v164 = v161 - v158;
    if ( v164 > 0x7FFFFFFF )
      goto LABEL_54;
    if ( v164 >= (__int64)0xFFFFFFFF80000000LL )
    {
      v163 = v164;
      goto LABEL_63;
    }
LABEL_64:
    v160 = (_QWORD *)v160[3];
    if ( v160 )
      goto LABEL_55;
LABEL_65:
    v155 = v158;
    v116 = v320;
    if ( v311 == v159 )
      goto LABEL_145;
    v165 = v159[5];
    v166 = v165;
    if ( v155 <= v165 )
      v166 = v155;
    if ( v166
      && (v167 = (const void *)v159[4],
          v320 = (_QWORD *)v159[5],
          LODWORD(v168) = memcmp(v154, v167, v166),
          v165 = (size_t)v320,
          (_DWORD)v168) )
    {
LABEL_72:
      if ( (int)v168 < 0 )
        goto LABEL_145;
    }
    else
    {
      v168 = v155 - v165;
      if ( (__int64)(v155 - v165) <= 0x7FFFFFFF )
      {
        if ( v168 >= (__int64)0xFFFFFFFF80000000LL )
          goto LABEL_72;
LABEL_145:
        v240 = (_QWORD *)operator new(0x50u);
        v241 = v240 + 6;
        v240[4] = v240 + 6;
        if ( v154 == (void *)v309.m128i_i64[0] )
        {
          v282 = v155 + 1;
          if ( (unsigned int)(v155 + 1) >= 8 )
          {
            v240[6] = v360;
            v295 = v309.m128i_i64[0];
            *(_QWORD *)((char *)v241 + v282 - 8) = *(_QWORD *)(v309.m128i_i64[0] + v282 - 8);
            v296 = (unsigned __int64)(v240 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            v297 = ((_DWORD)v241 - v296 + v282) & 0xFFFFFFF8;
            v298 = v295 - ((_QWORD)v241 - v296);
            if ( v297 >= 8 )
            {
              v299 = v297 & 0xFFFFFFF8;
              v300 = 0;
              do
              {
                v301 = v300;
                v300 += 8;
                *(_QWORD *)(v296 + v301) = *(_QWORD *)(v298 + v301);
              }
              while ( v300 < v299 );
            }
          }
          else if ( (v282 & 4) != 0 )
          {
            *((_DWORD *)v240 + 12) = v360;
            *(_DWORD *)((char *)v241 + v282 - 4) = *(_DWORD *)(v309.m128i_i64[0] + v282 - 4);
          }
          else if ( (_DWORD)v155 != -1 )
          {
            *((_BYTE *)v240 + 48) = v360;
            if ( (v282 & 2) != 0 )
              *(_WORD *)((char *)v241 + v282 - 2) = *(_WORD *)(v309.m128i_i64[0] + v282 - 2);
          }
          v154 = v240 + 6;
        }
        else
        {
          v242 = v360;
          v240[4] = v154;
          v240[6] = v242;
        }
        v240[5] = v155;
        v243 = (void *)v309.m128i_i64[0];
        v240[8] = 0;
        v240[9] = 0;
        v320 = v240;
        s2 = v243;
        n = 0;
        LOBYTE(v360) = 0;
        v244 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                 v116,
                 v159,
                 v154,
                 v155);
        v246 = v320;
        v247 = v245;
        v159 = v244;
        if ( v245 )
        {
          if ( v311 != v245 && !v244 )
          {
            v286 = v245[5];
            v287 = (const void *)v245[4];
            v329 = v320;
            v320 = v247;
            std::string::compare(v154, v155, v287, v286);
            v246 = v329;
          }
          v159 = v246;
          std::_Rb_tree_insert_and_rebalance();
          ++v116[5];
        }
        else
        {
          v311 = v320;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          std::string::_M_dispose();
          operator delete(v320, 0x50u);
        }
        v154 = s2;
      }
    }
    if ( v154 != (void *)v309.m128i_i64[0] )
      operator delete(v154, v360 + 1);
    v169 = *((unsigned __int8 *)v159 + 64);
    v170 = (_QWORD *)v159[9];
    *((_BYTE *)v159 + 64) = 6;
    v171 = (__int64)v312;
    LOBYTE(v334) = v169;
    v159[9] = v152;
    v335 = (unsigned __int64)v170;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( !v325 )
    {
LABEL_76:
      v176 = operator new(0x18u);
      *(_QWORD *)(v176 + 16) = 0;
      v316 = v176;
      *(_OWORD *)v176 = 0;
      goto LABEL_77;
    }
LABEL_127:
    if ( v325 != 2 )
      ida_mcp::tools::dirtree_tools::`anonymous namespace'::list_directory(
        v171,
        v169,
        v172,
        v173,
        v174,
        v175,
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
        a77);
    if ( *(_QWORD *)(v316 + 16) == *(_QWORD *)(v316 + 8) )
    {
LABEL_77:
      LOBYTE(v334) = 1;
      v335 = (unsigned __int64)v116;
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
    }
    else
    {
      LOBYTE(v334) = 1;
      v335 = (unsigned __int64)v116;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      *(_QWORD *)(v316 + 8) += 16LL;
    }
    if ( v336 )
    {
      *(_QWORD *)&v337 = 0;
      qfree();
    }
    LOBYTE(v334) = 1;
    v335 = (unsigned __int64)v116;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v325 = 2;
  }
  while ( (unsigned __int8)dirtree_findnext() );
LABEL_82:
  v346 = 0;
  *(_QWORD *)&v347 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v346 = 3;
  v177 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v177,
    "path",
    v178,
    v179,
    v180,
    v181,
    v309.m128i_i32[0],
    v309.m128i_i32[2],
    v310);
  v348 = 0;
  v347 = (unsigned __int64)v177;
  v349.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v348 = 3;
  v182 = src;
  v183 = v342.m128_u64[0];
  v184 = (_QWORD *)operator new(0x20u);
  v185 = v184 + 2;
  v334 = v183;
  v186 = v184;
  *v184 = v184 + 2;
  if ( v183 > 0xF )
  {
    v266 = std::string::_M_create();
    *v186 = v266;
    v185 = (_BYTE *)v266;
    v267 = v334;
    v187 = (__m128i)(unsigned __int64)v186;
    v186[2] = v334;
    v188 = v267 + 1;
    if ( !v267 )
      goto LABEL_156;
    v189 = -1;
    if ( v188 )
    {
LABEL_84:
      v309 = v187;
      memcpy(v185, v182, v188);
      v189 = v334;
      v187 = _mm_load_si128(&v309);
    }
  }
  else
  {
    v187 = (__m128i)(unsigned __int64)v184;
    v188 = v183 + 1;
    if ( v183 )
      goto LABEL_84;
LABEL_156:
    *v185 = *v182;
    v189 = v334;
  }
  v186[1] = v189;
  p_s2 = (__int64 *)&s2;
  v349 = v187;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &s2,
    (const __m128i *)&v346);
  v360 = 0;
  v350 = 0;
  *(_QWORD *)&v351 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v350 = 3;
  v190 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v190,
    "entry_count",
    v191,
    v192,
    v193,
    v194,
    v309.m128i_i32[0],
    v309.m128i_i32[2],
    v310);
  v352 = 5;
  v353 = dir_size;
  v354 = 0;
  v351 = (unsigned __int64)v190;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v361,
    (const __m128i *)&v350);
  v361[2] = 0;
  LOBYTE(v355) = 0;
  *(_QWORD *)&v356 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v355) = 3;
  v195 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v195,
    "entries",
    v196,
    v197,
    v198,
    v199,
    v309.m128i_i32[0],
    v309.m128i_i32[2],
    v310);
  v356 = (unsigned __int64)v195;
  v332 = v325;
  v333 = v316;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v357 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v362,
    (const __m128i *)v319);
  v362[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v321,
    (__int64)p_s2,
    3,
    v200,
    v201,
    v202,
    v309.m128i_i32[0],
    v309.m128i_i64[1],
    v310,
    (int)v311,
    (int)v312,
    (int)p_s2,
    v314,
    (int)v315,
    v316,
    (int)v317,
    (int)v318,
    (char)v319,
    (__int64)v320,
    (int)v321,
    (__int64)v322);
  v203 = p_s2;
  v204 = &v363;
  do
  {
    v204 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v204 != (unsigned __int64 *)v203 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v343 != v345 )
    operator delete(v343, v345[0] + 1LL);
  if ( v338 )
  {
    *(_QWORD *)&v339 = 0;
    qfree();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( src != &v342.m128_u16[4] )
    operator delete(src, v342.m128_u64[1] + 1);
  return v321;
}

