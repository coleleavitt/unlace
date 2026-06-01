__int64 __fastcall ida_mcp::tools::frames::`anonymous namespace'::handle_get_stack_pointer_delta(_QWORD *a1)
{
  void *v1; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // r12
  std::runtime_error *v3; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r13
  void *v5; // rbp
  std::runtime_error *v6; // rbx
  char v7; // dl
  char v8; // r12
  _BYTE *v9; // rbp
  char v10; // dl
  char v11; // bp
  __int64 func; // rax
  unsigned __int64 spd; // r12
  unsigned __int64 effective_spd; // r13
  unsigned __int64 sp_delta; // r14
  __int64 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rsi
  __int64 *v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // rcx
  __int64 v41; // rsi
  __int64 *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 *v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 *v57; // r15
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // r15
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rsi
  int v69; // ecx
  unsigned __int64 v70; // r15
  char *v71; // rdi
  __m128i si128; // xmm0
  char *v73; // rdi
  int v74; // ecx
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // r8
  __int64 v77; // rdx
  __int8 v78; // al
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rsi
  int v81; // r15d
  unsigned __int64 v82; // r14
  char *v83; // rdi
  __m128i v84; // xmm0
  char *v85; // rdi
  int v86; // r15d
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rcx
  __int64 v89; // rdx
  __int8 v90; // al
  unsigned __int64 v91; // r15
  unsigned __int64 v92; // rsi
  int v93; // r14d
  unsigned __int64 v94; // r13
  char *v95; // rdi
  __m128i v96; // xmm0
  char *v97; // rdi
  int v98; // r14d
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rcx
  __int64 v101; // rdx
  __int8 v102; // al
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // r8
  _QWORD *v113; // rcx
  unsigned __int64 v114; // rdx
  unsigned __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rdx
  void *v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // r8
  _QWORD *v122; // rcx
  unsigned __int64 v123; // rdx
  unsigned __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rdx
  void *v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // r8
  _QWORD *v131; // rcx
  unsigned __int64 v132; // rdx
  unsigned __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rdx
  void *v136; // rcx
  _QWORD *v137; // rax
  _QWORD *v138; // rdx
  _QWORD *v139; // rcx
  __int64 v140; // rsi
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  char *v144; // r15
  _DWORD *v146; // r8
  _DWORD *v147; // rsi
  __int64 v148; // rcx
  __int64 v149; // rsi
  __int64 v150; // rdi
  _DWORD *v151; // r8
  _DWORD *v152; // rsi
  __int64 v153; // rcx
  __int64 v154; // rsi
  __int64 v155; // rdi
  _DWORD *v156; // r8
  _DWORD *v157; // rsi
  __int64 v158; // rcx
  __int64 v159; // rsi
  __int64 v160; // rdi
  unsigned int v161; // edx
  unsigned int v162; // edx
  unsigned int v163; // edx
  _DWORD *v164; // r8
  _DWORD *v165; // rsi
  __int64 v166; // rcx
  __int64 v167; // rdi
  _DWORD *v168; // r8
  _DWORD *v169; // rsi
  __int64 v170; // rcx
  __int64 v171; // rdi
  _DWORD *v172; // r8
  _DWORD *v173; // rsi
  __int64 v174; // rcx
  __int64 v175; // rdi
  _DWORD *v176; // r8
  _DWORD *v177; // rsi
  __int64 v178; // rcx
  __int64 v179; // rdi
  __int64 v180; // rdi
  __int64 v181; // rdi
  __int64 v182; // rdi
  unsigned __int64 v183; // rdi
  char *v184; // rcx
  char *v185; // r8
  unsigned int v186; // edx
  unsigned int v187; // edx
  unsigned int v188; // ecx
  __int64 v189; // r9
  unsigned __int64 v190; // rdi
  char *v191; // rcx
  char *v192; // r11
  unsigned int v193; // edx
  unsigned int v194; // edx
  unsigned int v195; // ecx
  __int64 v196; // r9
  unsigned __int64 v197; // rdi
  char *v198; // rcx
  char *v199; // rbx
  unsigned int v200; // edx
  unsigned int v201; // edx
  unsigned int v202; // ecx
  __int64 v203; // r9
  __int64 v204; // rsi
  __int64 v205; // rdi
  __int64 v206; // rsi
  __int64 v207; // rdi
  __int64 v208; // rsi
  __int64 v209; // rdi
  __int64 v210; // rsi
  __int64 v211; // rdi
  __int64 v212; // rdi
  __int64 v213; // rdi
  __int64 v214; // rdi
  int v215; // [rsp+B40h] [rbp-608h]
  int v216; // [rsp+B40h] [rbp-608h]
  int v217; // [rsp+B40h] [rbp-608h]
  int v218; // [rsp+B40h] [rbp-608h]
  int v219; // [rsp+B40h] [rbp-608h]
  int v220; // [rsp+B40h] [rbp-608h]
  int v221; // [rsp+B40h] [rbp-608h]
  int v222; // [rsp+B40h] [rbp-608h]
  int v223; // [rsp+B40h] [rbp-608h]
  const __m128i *v224; // [rsp+B40h] [rbp-608h]
  int v225; // [rsp+B48h] [rbp-600h]
  int v226; // [rsp+B48h] [rbp-600h]
  int v227; // [rsp+B48h] [rbp-600h]
  int v228; // [rsp+B48h] [rbp-600h]
  int v229; // [rsp+B48h] [rbp-600h]
  int v230; // [rsp+B48h] [rbp-600h]
  int v231; // [rsp+B48h] [rbp-600h]
  int v232; // [rsp+B48h] [rbp-600h]
  int v233; // [rsp+B48h] [rbp-600h]
  __int64 v234; // [rsp+B48h] [rbp-600h]
  void *v235; // [rsp+B48h] [rbp-600h]
  __int64 v236; // [rsp+B50h] [rbp-5F8h]
  __int64 v237; // [rsp+B50h] [rbp-5F8h]
  __int64 v238; // [rsp+B50h] [rbp-5F8h]
  __int64 v239; // [rsp+B50h] [rbp-5F8h]
  __int64 v240; // [rsp+B50h] [rbp-5F8h]
  __int64 v241; // [rsp+B50h] [rbp-5F8h]
  __int64 v242; // [rsp+B50h] [rbp-5F8h]
  __int64 v243; // [rsp+B50h] [rbp-5F8h]
  __int64 v244; // [rsp+B50h] [rbp-5F8h]
  int v245; // [rsp+B50h] [rbp-5F8h]
  void *v246; // [rsp+B50h] [rbp-5F8h]
  __int64 v248; // [rsp+B58h] [rbp-5F0h]
  unsigned __int64 v249; // [rsp+B60h] [rbp-5E8h]
  unsigned __int64 v250; // [rsp+B60h] [rbp-5E8h]
  void *v251; // [rsp+B60h] [rbp-5E8h]
  int v252; // [rsp+B68h] [rbp-5E0h]
  void *v253; // [rsp+B68h] [rbp-5E0h]
  void *v254; // [rsp+B70h] [rbp-5D8h]
  void *v255; // [rsp+B78h] [rbp-5D0h]
  void *v256; // [rsp+B80h] [rbp-5C8h]
  void *v257; // [rsp+B88h] [rbp-5C0h]
  void *v258; // [rsp+C50h] [rbp-4F8h] BYREF
  __int64 v259; // [rsp+C58h] [rbp-4F0h]
  _QWORD v260[2]; // [rsp+C60h] [rbp-4E8h] BYREF
  void *v261; // [rsp+C70h] [rbp-4D8h] BYREF
  __int64 v262; // [rsp+C78h] [rbp-4D0h]
  _QWORD v263[2]; // [rsp+C80h] [rbp-4C8h] BYREF
  void *v264; // [rsp+C90h] [rbp-4B8h] BYREF
  __int64 v265; // [rsp+CA0h] [rbp-4A8h] BYREF
  void *v266; // [rsp+CB0h] [rbp-498h]
  __int64 v267; // [rsp+CB8h] [rbp-490h]
  _QWORD v268[2]; // [rsp+CC0h] [rbp-488h] BYREF
  void *v269; // [rsp+CD0h] [rbp-478h]
  __int64 v270; // [rsp+CD8h] [rbp-470h]
  _QWORD v271[2]; // [rsp+CE0h] [rbp-468h] BYREF
  void *v272; // [rsp+CF0h] [rbp-458h]
  unsigned __int64 v273; // [rsp+CF8h] [rbp-450h]
  _QWORD v274[2]; // [rsp+D00h] [rbp-448h] BYREF
  void *v275; // [rsp+D10h] [rbp-438h]
  __int64 v276; // [rsp+D18h] [rbp-430h]
  _QWORD v277[2]; // [rsp+D20h] [rbp-428h] BYREF
  void *v278; // [rsp+D30h] [rbp-418h]
  __int64 v279; // [rsp+D38h] [rbp-410h]
  _QWORD v280[2]; // [rsp+D40h] [rbp-408h] BYREF
  void *v281; // [rsp+D50h] [rbp-3F8h]
  unsigned __int64 v282; // [rsp+D58h] [rbp-3F0h]
  _QWORD v283[2]; // [rsp+D60h] [rbp-3E8h] BYREF
  void *v284; // [rsp+D70h] [rbp-3D8h]
  __int64 v285; // [rsp+D78h] [rbp-3D0h]
  _QWORD v286[2]; // [rsp+D80h] [rbp-3C8h] BYREF
  void *v287; // [rsp+D90h] [rbp-3B8h]
  __int64 v288; // [rsp+D98h] [rbp-3B0h]
  _QWORD v289[2]; // [rsp+DA0h] [rbp-3A8h] BYREF
  void *v290; // [rsp+DB0h] [rbp-398h]
  unsigned __int64 v291; // [rsp+DB8h] [rbp-390h]
  _QWORD v292[2]; // [rsp+DC0h] [rbp-388h] BYREF
  void *v293; // [rsp+DD0h] [rbp-378h]
  __int64 v294; // [rsp+DD8h] [rbp-370h]
  _QWORD v295[2]; // [rsp+DE0h] [rbp-368h] BYREF
  char v296; // [rsp+DF0h] [rbp-358h] BYREF
  __int128 v297; // [rsp+DF8h] [rbp-350h]
  char v298; // [rsp+E08h] [rbp-340h]
  __int128 v299; // [rsp+E10h] [rbp-338h]
  char v300; // [rsp+E20h] [rbp-328h] BYREF
  __int128 v301; // [rsp+E28h] [rbp-320h]
  char v302; // [rsp+E38h] [rbp-310h]
  __int128 v303; // [rsp+E40h] [rbp-308h]
  char v304; // [rsp+E50h] [rbp-2F8h] BYREF
  __int128 v305; // [rsp+E58h] [rbp-2F0h]
  char v306; // [rsp+E68h] [rbp-2E0h]
  unsigned __int64 v307; // [rsp+E70h] [rbp-2D8h]
  __int64 v308; // [rsp+E78h] [rbp-2D0h]
  char v309; // [rsp+E80h] [rbp-2C8h] BYREF
  __int128 v310; // [rsp+E88h] [rbp-2C0h] BYREF
  char v311; // [rsp+E98h] [rbp-2B0h]
  unsigned __int64 v312; // [rsp+EA0h] [rbp-2A8h]
  __int64 v313; // [rsp+EA8h] [rbp-2A0h]
  char v314; // [rsp+EB0h] [rbp-298h] BYREF
  __int128 v315; // [rsp+EB8h] [rbp-290h] BYREF
  char v316; // [rsp+EC8h] [rbp-280h]
  unsigned __int64 v317; // [rsp+ED0h] [rbp-278h]
  __int64 v318; // [rsp+ED8h] [rbp-270h]
  char v319; // [rsp+EE0h] [rbp-268h] BYREF
  __int128 v320; // [rsp+EE8h] [rbp-260h] BYREF
  __int64 v321; // [rsp+EF8h] [rbp-250h]
  __int64 v322; // [rsp+F00h] [rbp-248h]
  __int64 v323; // [rsp+F08h] [rbp-240h]
  void *v324; // [rsp+F10h] [rbp-238h] BYREF
  __int128 v325; // [rsp+F18h] [rbp-230h] BYREF
  char v326; // [rsp+F28h] [rbp-220h]
  __int128 v327; // [rsp+F30h] [rbp-218h] BYREF
  _QWORD v328[3]; // [rsp+F40h] [rbp-208h] BYREF
  _QWORD v329[3]; // [rsp+F58h] [rbp-1F0h] BYREF
  _QWORD v330[3]; // [rsp+F70h] [rbp-1D8h] BYREF
  _QWORD v331[3]; // [rsp+F88h] [rbp-1C0h] BYREF
  _QWORD v332[3]; // [rsp+FA0h] [rbp-1A8h] BYREF
  _QWORD v333[3]; // [rsp+FB8h] [rbp-190h] BYREF
  _QWORD v334[3]; // [rsp+FD0h] [rbp-178h] BYREF
  char v335; // [rsp+FE8h] [rbp-160h] BYREF
  char v336[32]; // [rsp+FF0h] [rbp-158h] BYREF
  char v337[32]; // [rsp+1010h] [rbp-138h] BYREF
  __m128i v338; // [rsp+1030h] [rbp-118h] BYREF
  __m128i v339; // [rsp+1040h] [rbp-108h]
  __m128i v340; // [rsp+1050h] [rbp-F8h]
  __m128i v341; // [rsp+1060h] [rbp-E8h]
  __m128i v342; // [rsp+1070h] [rbp-D8h]
  __m128i v343; // [rsp+1080h] [rbp-C8h]
  __m128i v344; // [rsp+1090h] [rbp-B8h]
  __m128i v345; // [rsp+10A0h] [rbp-A8h]
  __m128i v346; // [rsp+10B0h] [rbp-98h]
  __m128i v347; // [rsp+10C0h] [rbp-88h]
  __m128i v348; // [rsp+10D0h] [rbp-78h]
  __m128i v349[2]; // [rsp+10E0h] [rbp-68h]
  unsigned __int64 v350; // [rsp+1108h] [rbp-40h]

  v350 = __readfsqword(0x28u);
  v324 = (char *)&v325 + 8;
  *(_QWORD *)&v325 = 0;
  BYTE8(v325) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
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
  ida_mcp::parse_ea(v324, v325);
  v8 = v7;
  if ( v324 != (char *)&v325 + 8 )
    operator delete(v324, *((_QWORD *)&v325 + 1) + 1LL);
  if ( !v8 )
  {
    v3 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v3, "Invalid function_address format");
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v324 = (char *)&v325 + 8;
  *(_QWORD *)&v325 = 0;
  v9 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  BYTE8(v325) = 0;
  if ( *v9 != 3 )
  {
    v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v2,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  ida_mcp::parse_ea(v324, v325);
  v11 = v10;
  if ( v324 != (char *)&v325 + 8 )
    operator delete(v324, *((_QWORD *)&v325 + 1) + 1LL);
  if ( !v11 )
  {
    v6 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v6, "Invalid query_address format");
    __cxa_throw(
      v6,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  func = get_func();
  if ( !func )
  {
    v5 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v5,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( (*(_BYTE *)(func + 17) & 4) == 0 )
  {
    v1 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::string::append();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v1,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  spd = get_spd();
  effective_spd = get_effective_spd();
  *(_QWORD *)&v297 = 0;
  sp_delta = get_sp_delta();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v296 = 3;
  v16 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v16, "function_address", v17, v18, v19, v20, (int)&v324, v225, v236);
  v297 = (unsigned __int64)v16;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v258, v336, v21, v22, v23, v24, v215, v226, v237);
  v298 = 0;
  *(_QWORD *)&v299 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v298 = 3;
  v25 = (_QWORD *)operator new(0x20u);
  v26 = v258;
  v27 = v25 + 2;
  v28 = v259;
  *v25 = v25 + 2;
  if ( v26 == v260 )
  {
    v162 = v28 + 1;
    if ( (unsigned int)(v28 + 1) >= 8 )
    {
      v25[2] = v260[0];
      *(_QWORD *)((char *)v27 + v162 - 8) = *(_QWORD *)((char *)&v260[-1] + v162);
      v197 = (unsigned __int64)(v25 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v198 = (char *)v27 - v197;
      v199 = (char *)((char *)v260 - v198);
      v200 = ((_DWORD)v198 + v162) & 0xFFFFFFF8;
      if ( v200 >= 8 )
      {
        v201 = v200 & 0xFFFFFFF8;
        v202 = 0;
        do
        {
          v203 = v202;
          v202 += 8;
          *(_QWORD *)(v197 + v203) = *(_QWORD *)&v199[v203];
        }
        while ( v202 < v201 );
      }
    }
    else if ( (v162 & 4) != 0 )
    {
      *((_DWORD *)v25 + 4) = v260[0];
      *(_DWORD *)((char *)v27 + v162 - 4) = *(_DWORD *)((char *)&v259 + v162 + 4);
    }
    else if ( (_DWORD)v28 != -1 )
    {
      *((_BYTE *)v25 + 16) = v260[0];
      if ( (v162 & 2) != 0 )
        *(_WORD *)((char *)v27 + v162 - 2) = *(_WORD *)((char *)&v259 + v162 + 6);
    }
  }
  else
  {
    *v25 = v26;
    v25[2] = v260[0];
  }
  v25[1] = v28;
  v259 = 0;
  v258 = v260;
  LOBYTE(v260[0]) = 0;
  v299 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v328,
    (const __m128i *)&v296,
    2,
    1);
  v328[2] = 0;
  v300 = 0;
  *(_QWORD *)&v301 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v300 = 3;
  v29 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v29, "query_address", v30, v31, v32, v33, v216, (int)v260, v238);
  v301 = (unsigned __int64)v29;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v261, v337, v34, v35, v36, v37, v217, v227, v239);
  v302 = 0;
  *(_QWORD *)&v303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v302 = 3;
  v38 = (_QWORD *)operator new(0x20u);
  v39 = v261;
  v40 = v38 + 2;
  v41 = v262;
  *v38 = v38 + 2;
  if ( v39 == v263 )
  {
    v163 = v41 + 1;
    if ( (unsigned int)(v41 + 1) >= 8 )
    {
      v38[2] = v263[0];
      *(_QWORD *)((char *)v40 + v163 - 8) = *(_QWORD *)((char *)&v263[-1] + v163);
      v190 = (unsigned __int64)(v38 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v191 = (char *)v40 - v190;
      v192 = (char *)((char *)v263 - v191);
      v193 = ((_DWORD)v191 + v163) & 0xFFFFFFF8;
      if ( v193 >= 8 )
      {
        v194 = v193 & 0xFFFFFFF8;
        v195 = 0;
        do
        {
          v196 = v195;
          v195 += 8;
          *(_QWORD *)(v190 + v196) = *(_QWORD *)&v192[v196];
        }
        while ( v195 < v194 );
      }
    }
    else if ( (v163 & 4) != 0 )
    {
      *((_DWORD *)v38 + 4) = v263[0];
      *(_DWORD *)((char *)v40 + v163 - 4) = *(_DWORD *)((char *)&v262 + v163 + 4);
    }
    else if ( (_DWORD)v41 != -1 )
    {
      *((_BYTE *)v38 + 16) = v263[0];
      if ( (v163 & 2) != 0 )
        *(_WORD *)((char *)v40 + v163 - 2) = *(_WORD *)((char *)&v262 + v163 + 6);
    }
  }
  else
  {
    *v38 = v39;
    v38[2] = v263[0];
  }
  v38[1] = v41;
  LOBYTE(v263[0]) = 0;
  v261 = v263;
  v262 = 0;
  v303 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v329,
    (const __m128i *)&v300,
    2,
    1);
  v329[2] = 0;
  v304 = 0;
  *(_QWORD *)&v305 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v304 = 3;
  v42 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v42, "spd", v43, v44, v45, v46, v218, v228, (__int64)v263);
  v306 = 5;
  v307 = spd;
  v308 = 0;
  v305 = (unsigned __int64)v42;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v330,
    (const __m128i *)&v304,
    2,
    1);
  v330[2] = 0;
  v309 = 0;
  *(_QWORD *)&v310 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v309 = 3;
  v47 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v47, "effective_spd", v48, v49, v50, v51, v219, v229, v240);
  v311 = 5;
  v312 = effective_spd;
  v313 = 0;
  v310 = (unsigned __int64)v47;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v331,
    (const __m128i *)&v309,
    2,
    1);
  v331[2] = 0;
  v314 = 0;
  *(_QWORD *)&v315 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v314 = 3;
  v52 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v52, "sp_delta", v53, v54, v55, v56, v220, v230, v241);
  v316 = 5;
  v317 = sp_delta;
  v318 = 0;
  v315 = (unsigned __int64)v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v332,
    (const __m128i *)&v314,
    2,
    1);
  v332[2] = 0;
  v319 = 0;
  *(_QWORD *)&v320 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v319 = 3;
  v57 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v57, "sp_analysis_ready", v58, v59, v60, v61, v221, v231, v242);
  v321 = 4;
  v322 = 1;
  v323 = 0;
  v320 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v333,
    (const __m128i *)&v319,
    2,
    1);
  v333[2] = 0;
  LOBYTE(v324) = 0;
  *(_QWORD *)&v325 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v324) = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v62, "description", v63, v64, v65, v66, v222, v232, v243);
  v67 = sp_delta >> 63;
  v325 = (unsigned __int64)v62;
  if ( (__int64)sp_delta <= 0 )
    sp_delta = -(__int64)sp_delta;
  if ( sp_delta <= 9 )
  {
    v69 = 1;
  }
  else
  {
    v68 = sp_delta;
    v69 = 1;
    while ( 1 )
    {
      if ( v68 <= 0x63 )
      {
        ++v69;
        goto LABEL_25;
      }
      if ( v68 <= 0x3E7 )
      {
        v69 += 2;
        goto LABEL_25;
      }
      if ( v68 <= 0x270F )
        break;
      v69 += 4;
      if ( v68 <= 0x1869F )
        goto LABEL_25;
      v68 /= 0x2710u;
    }
    v69 += 3;
  }
LABEL_25:
  v70 = (unsigned int)(v69 + v67);
  v252 = v69;
  v290 = v292;
  v291 = 0;
  LOBYTE(v292[0]) = 0;
  v249 = v67;
  std::string::reserve();
  v71 = (char *)v290;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
  *(_BYTE *)v290 = 45;
  v73 = &v71[v249];
  v338 = si128;
  v339 = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
  v340 = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
  v341 = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
  v342 = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
  v343 = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
  v344 = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
  v345 = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
  v346 = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
  v347 = _mm_load_si128((const __m128i *)&xmmword_3E2000);
  v348 = _mm_load_si128((const __m128i *)&xmmword_3E2010);
  v349[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
  *(__m128i *)((char *)v349 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
  if ( sp_delta > 0x63 )
  {
    v74 = v252 - 1;
    do
    {
      v75 = sp_delta % 0x64;
      v76 = sp_delta;
      sp_delta /= 0x64u;
      v73[v74] = v338.m128i_i8[2 * v75 + 1];
      v77 = (unsigned int)(v74 - 1);
      v74 -= 2;
      v73[v77] = v338.m128i_i8[2 * v75];
    }
    while ( v76 > 0x270F );
  }
  v78 = sp_delta + 48;
  if ( sp_delta > 9 )
  {
    v73[1] = v338.m128i_i8[2 * sp_delta + 1];
    v78 = v338.m128i_i8[2 * sp_delta];
  }
  *v73 = v78;
  v291 = v70;
  v79 = effective_spd >> 63;
  *((_BYTE *)v290 + v70) = 0;
  if ( (__int64)effective_spd <= 0 )
    effective_spd = -(__int64)effective_spd;
  if ( effective_spd <= 9 )
  {
    v81 = 1;
  }
  else
  {
    v80 = effective_spd;
    v81 = 1;
    while ( 1 )
    {
      if ( v80 <= 0x63 )
      {
        ++v81;
        goto LABEL_40;
      }
      if ( v80 <= 0x3E7 )
      {
        v81 += 2;
        goto LABEL_40;
      }
      if ( v80 <= 0x270F )
        break;
      v81 += 4;
      if ( v80 <= 0x1869F )
        goto LABEL_40;
      v80 /= 0x2710u;
    }
    v81 += 3;
  }
LABEL_40:
  v82 = (unsigned int)(v81 + v79);
  v282 = 0;
  v281 = v283;
  LOBYTE(v283[0]) = 0;
  v250 = v79;
  std::string::reserve();
  v83 = (char *)v281;
  v84 = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
  *(_BYTE *)v281 = 45;
  v85 = &v83[v250];
  v338 = v84;
  v339 = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
  v340 = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
  v341 = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
  v342 = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
  v343 = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
  v344 = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
  v345 = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
  v346 = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
  v347 = _mm_load_si128((const __m128i *)&xmmword_3E2000);
  v348 = _mm_load_si128((const __m128i *)&xmmword_3E2010);
  v349[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
  *(__m128i *)((char *)v349 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
  if ( effective_spd > 0x63 )
  {
    v86 = v81 - 1;
    do
    {
      v87 = effective_spd % 0x64;
      v88 = effective_spd;
      effective_spd /= 0x64u;
      v85[v86] = v338.m128i_i8[2 * v87 + 1];
      v89 = (unsigned int)(v86 - 1);
      v86 -= 2;
      v85[v89] = v338.m128i_i8[2 * v87];
    }
    while ( v88 > 0x270F );
  }
  v90 = effective_spd + 48;
  if ( effective_spd > 9 )
  {
    v85[1] = v338.m128i_i8[2 * effective_spd + 1];
    v90 = v338.m128i_i8[2 * effective_spd];
  }
  *v85 = v90;
  v282 = v82;
  v91 = spd >> 63;
  *((_BYTE *)v281 + v82) = 0;
  if ( (__int64)spd <= 0 )
    spd = -(__int64)spd;
  if ( spd <= 9 )
  {
    v93 = 1;
  }
  else
  {
    v92 = spd;
    v93 = 1;
    while ( 1 )
    {
      if ( v92 <= 0x63 )
      {
        ++v93;
        goto LABEL_55;
      }
      if ( v92 <= 0x3E7 )
      {
        v93 += 2;
        goto LABEL_55;
      }
      if ( v92 <= 0x270F )
        break;
      v93 += 4;
      if ( v92 <= 0x1869F )
        goto LABEL_55;
      v92 /= 0x2710u;
    }
    v93 += 3;
  }
LABEL_55:
  v94 = (unsigned int)(v93 + v91);
  v273 = 0;
  v272 = v274;
  LOBYTE(v274[0]) = 0;
  std::string::reserve();
  v95 = (char *)v272;
  v96 = _mm_load_si128((const __m128i *)&xmmword_3E1F70);
  *(_BYTE *)v272 = 45;
  v97 = &v95[v91];
  v338 = v96;
  v339 = _mm_load_si128((const __m128i *)&xmmword_3E1F80);
  v340 = _mm_load_si128((const __m128i *)&xmmword_3E1F90);
  v341 = _mm_load_si128((const __m128i *)&xmmword_3E1FA0);
  v342 = _mm_load_si128((const __m128i *)&xmmword_3E1FB0);
  v343 = _mm_load_si128((const __m128i *)&xmmword_3E1FC0);
  v344 = _mm_load_si128((const __m128i *)&xmmword_3E1FD0);
  v345 = _mm_load_si128((const __m128i *)&xmmword_3E1FE0);
  v346 = _mm_load_si128((const __m128i *)&xmmword_3E1FF0);
  v347 = _mm_load_si128((const __m128i *)&xmmword_3E2000);
  v348 = _mm_load_si128((const __m128i *)&xmmword_3E2010);
  v349[0] = _mm_load_si128((const __m128i *)&xmmword_3E2020);
  *(__m128i *)((char *)v349 + 9) = _mm_load_si128((const __m128i *)&xmmword_3E2030);
  if ( spd > 0x63 )
  {
    v98 = v93 - 1;
    do
    {
      v99 = spd % 0x64;
      v100 = spd;
      spd /= 0x64u;
      v97[v98] = v338.m128i_i8[2 * v99 + 1];
      v101 = (unsigned int)(v98 - 1);
      v98 -= 2;
      v97[v101] = v338.m128i_i8[2 * v99];
    }
    while ( v100 > 0x270F );
  }
  v102 = spd + 48;
  if ( spd > 9 )
  {
    v97[1] = v338.m128i_i8[2 * spd + 1];
    v102 = v338.m128i_i8[2 * spd];
  }
  *v97 = v102;
  v273 = v94;
  *((_BYTE *)v272 + v94) = 0;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v264,
    v338.m128i_i8,
    v103,
    v104,
    v105,
    v106,
    v223,
    v233,
    v244);
  v107 = std::string::_M_replace();
  v108 = v107 + 16;
  v266 = v268;
  if ( *(_QWORD *)v107 == v107 + 16 )
  {
    v164 = v268;
    v165 = (_DWORD *)(v107 + 16);
    v166 = *(_QWORD *)(v107 + 8) + 1LL;
    if ( (unsigned int)v166 >= 8 )
    {
      LODWORD(v208) = 0;
      do
      {
        v209 = (unsigned int)v208;
        v208 = (unsigned int)(v208 + 8);
        *(_QWORD *)((char *)v268 + v209) = *(_QWORD *)(v108 + v209);
      }
      while ( (unsigned int)v208 < ((unsigned int)v166 & 0xFFFFFFF8) );
      v164 = (_DWORD *)((char *)v268 + v208);
      v165 = (_DWORD *)(v108 + v208);
    }
    v167 = 0;
    if ( (v166 & 4) != 0 )
    {
      *v164 = *v165;
      v167 = 4;
    }
    if ( (v166 & 2) != 0 )
    {
      *(_WORD *)((char *)v164 + v167) = *(_WORD *)((char *)v165 + v167);
      v167 += 2;
    }
    if ( (v166 & 1) != 0 )
      *((_BYTE *)v164 + v167) = *((_BYTE *)v165 + v167);
  }
  else
  {
    v266 = *(void **)v107;
    v268[0] = *(_QWORD *)(v107 + 16);
  }
  v109 = *(_QWORD *)(v107 + 8);
  *(_QWORD *)v107 = v108;
  *(_QWORD *)(v107 + 8) = 0;
  *(_BYTE *)(v107 + 16) = 0;
  v267 = v109;
  if ( (unsigned __int64)(v109 - 0x7FFFFFFFFFFFFFF9LL) <= 5 )
    std::__throw_length_error("basic_string::append");
  v110 = std::string::_M_append();
  v111 = v110 + 16;
  v269 = v271;
  if ( *(_QWORD *)v110 == v110 + 16 )
  {
    v172 = v271;
    v173 = (_DWORD *)(v110 + 16);
    v174 = *(_QWORD *)(v110 + 8) + 1LL;
    if ( (unsigned int)v174 >= 8 )
    {
      LODWORD(v204) = 0;
      do
      {
        v205 = (unsigned int)v204;
        v204 = (unsigned int)(v204 + 8);
        *(_QWORD *)((char *)v271 + v205) = *(_QWORD *)(v111 + v205);
      }
      while ( (unsigned int)v204 < ((unsigned int)v174 & 0xFFFFFFF8) );
      v172 = (_DWORD *)((char *)v271 + v204);
      v173 = (_DWORD *)(v111 + v204);
    }
    v175 = 0;
    if ( (v174 & 4) != 0 )
    {
      *v172 = *v173;
      v175 = 4;
    }
    if ( (v174 & 2) != 0 )
    {
      *(_WORD *)((char *)v172 + v175) = *(_WORD *)((char *)v173 + v175);
      v175 += 2;
    }
    if ( (v174 & 1) != 0 )
      *((_BYTE *)v172 + v175) = *((_BYTE *)v173 + v175);
  }
  else
  {
    v269 = *(void **)v110;
    v271[0] = *(_QWORD *)(v110 + 16);
  }
  *(_QWORD *)v110 = v111;
  v112 = *(_QWORD *)(v110 + 8);
  v113 = v269;
  *(_QWORD *)(v110 + 8) = 0;
  v114 = v273;
  *(_BYTE *)(v110 + 16) = 0;
  v270 = v112;
  v115 = v112 + v114;
  if ( v113 == v271 )
  {
    if ( v115 <= 0xF || v272 == v274 )
      goto LABEL_70;
    goto LABEL_68;
  }
  if ( v271[0] < v115 && v272 != v274 )
  {
LABEL_68:
    if ( v274[0] >= v115 )
    {
      v116 = std::string::_M_replace();
      v117 = v116 + 16;
      v275 = v277;
      v118 = *(void **)v116;
      if ( *(_QWORD *)v116 != v116 + 16 )
        goto LABEL_71;
      v156 = v277;
      v157 = (_DWORD *)(v116 + 16);
      v158 = *(_QWORD *)(v116 + 8) + 1LL;
      if ( (unsigned int)v158 < 8 )
        goto LABEL_204;
      LODWORD(v159) = 0;
      do
      {
        v160 = (unsigned int)v159;
        v159 = (unsigned int)(v159 + 8);
        *(_QWORD *)((char *)v277 + v160) = *(_QWORD *)(v117 + v160);
      }
      while ( (unsigned int)v159 < ((unsigned int)v158 & 0xFFFFFFF8) );
LABEL_137:
      v156 = (_DWORD *)((char *)v277 + v159);
      v157 = (_DWORD *)(v117 + v159);
      goto LABEL_204;
    }
  }
  if ( 0x7FFFFFFFFFFFFFFELL - v112 < v114 )
    std::__throw_length_error("basic_string::append");
LABEL_70:
  v116 = std::string::_M_append();
  v117 = v116 + 16;
  v275 = v277;
  v118 = *(void **)v116;
  if ( *(_QWORD *)v116 != v116 + 16 )
  {
LABEL_71:
    v275 = v118;
    v277[0] = *(_QWORD *)(v116 + 16);
    goto LABEL_72;
  }
  v156 = v277;
  v157 = (_DWORD *)(v116 + 16);
  v158 = *(_QWORD *)(v116 + 8) + 1LL;
  if ( (unsigned int)v158 >= 8 )
  {
    LODWORD(v159) = 0;
    do
    {
      v213 = (unsigned int)v159;
      v159 = (unsigned int)(v159 + 8);
      *(_QWORD *)((char *)v277 + v213) = *(_QWORD *)(v117 + v213);
    }
    while ( (unsigned int)v159 < ((unsigned int)v158 & 0xFFFFFFF8) );
    goto LABEL_137;
  }
LABEL_204:
  v181 = 0;
  if ( (v158 & 4) != 0 )
  {
    *v156 = *v157;
    v181 = 4;
  }
  if ( (v158 & 2) != 0 )
  {
    *(_WORD *)((char *)v156 + v181) = *(_WORD *)((char *)v157 + v181);
    v181 += 2;
  }
  if ( (v158 & 1) != 0 )
    *((_BYTE *)v156 + v181) = *((_BYTE *)v157 + v181);
LABEL_72:
  v276 = *(_QWORD *)(v116 + 8);
  *(_QWORD *)(v116 + 8) = 0;
  *(_BYTE *)(v116 + 16) = 0;
  *(_QWORD *)v116 = v117;
  if ( (unsigned __int64)(v276 - 0x7FFFFFFFFFFFFFEFLL) <= 0xF )
    std::__throw_length_error("basic_string::append");
  v119 = std::string::_M_append();
  v120 = v119 + 16;
  v278 = v280;
  if ( *(_QWORD *)v119 == v119 + 16 )
  {
    v176 = v280;
    v177 = (_DWORD *)(v119 + 16);
    v178 = *(_QWORD *)(v119 + 8) + 1LL;
    if ( (unsigned int)v178 >= 8 )
    {
      LODWORD(v210) = 0;
      do
      {
        v211 = (unsigned int)v210;
        v210 = (unsigned int)(v210 + 8);
        *(_QWORD *)((char *)v280 + v211) = *(_QWORD *)(v120 + v211);
      }
      while ( (unsigned int)v210 < ((unsigned int)v178 & 0xFFFFFFF8) );
      v176 = (_DWORD *)((char *)v280 + v210);
      v177 = (_DWORD *)(v120 + v210);
    }
    v179 = 0;
    if ( (v178 & 4) != 0 )
    {
      *v176 = *v177;
      v179 = 4;
    }
    if ( (v178 & 2) != 0 )
    {
      *(_WORD *)((char *)v176 + v179) = *(_WORD *)((char *)v177 + v179);
      v179 += 2;
    }
    if ( (v178 & 1) != 0 )
      *((_BYTE *)v176 + v179) = *((_BYTE *)v177 + v179);
  }
  else
  {
    v278 = *(void **)v119;
    v280[0] = *(_QWORD *)(v119 + 16);
  }
  *(_QWORD *)v119 = v120;
  v121 = *(_QWORD *)(v119 + 8);
  v122 = v278;
  *(_QWORD *)(v119 + 8) = 0;
  v123 = v282;
  *(_BYTE *)(v119 + 16) = 0;
  v279 = v121;
  v124 = v121 + v123;
  if ( v122 == v280 )
  {
    if ( v124 <= 0xF || v281 == v283 )
      goto LABEL_80;
    goto LABEL_78;
  }
  if ( v280[0] < v124 && v281 != v283 )
  {
LABEL_78:
    if ( v283[0] >= v124 )
    {
      v125 = std::string::_M_replace();
      v126 = v125 + 16;
      v284 = v286;
      v127 = *(void **)v125;
      if ( *(_QWORD *)v125 != v125 + 16 )
        goto LABEL_81;
      v151 = v286;
      v152 = (_DWORD *)(v125 + 16);
      v153 = *(_QWORD *)(v125 + 8) + 1LL;
      if ( (unsigned int)v153 < 8 )
        goto LABEL_197;
      LODWORD(v154) = 0;
      do
      {
        v155 = (unsigned int)v154;
        v154 = (unsigned int)(v154 + 8);
        *(_QWORD *)((char *)v286 + v155) = *(_QWORD *)(v126 + v155);
      }
      while ( (unsigned int)v154 < ((unsigned int)v153 & 0xFFFFFFF8) );
LABEL_132:
      v151 = (_DWORD *)((char *)v286 + v154);
      v152 = (_DWORD *)(v126 + v154);
      goto LABEL_197;
    }
  }
  if ( 0x7FFFFFFFFFFFFFFELL - v121 < v123 )
    std::__throw_length_error("basic_string::append");
LABEL_80:
  v125 = std::string::_M_append();
  v126 = v125 + 16;
  v284 = v286;
  v127 = *(void **)v125;
  if ( *(_QWORD *)v125 != v125 + 16 )
  {
LABEL_81:
    v284 = v127;
    v286[0] = *(_QWORD *)(v125 + 16);
    goto LABEL_82;
  }
  v151 = v286;
  v152 = (_DWORD *)(v125 + 16);
  v153 = *(_QWORD *)(v125 + 8) + 1LL;
  if ( (unsigned int)v153 >= 8 )
  {
    LODWORD(v154) = 0;
    do
    {
      v214 = (unsigned int)v154;
      v154 = (unsigned int)(v154 + 8);
      *(_QWORD *)((char *)v286 + v214) = *(_QWORD *)(v126 + v214);
    }
    while ( (unsigned int)v154 < ((unsigned int)v153 & 0xFFFFFFF8) );
    goto LABEL_132;
  }
LABEL_197:
  v180 = 0;
  if ( (v153 & 4) != 0 )
  {
    *v151 = *v152;
    v180 = 4;
  }
  if ( (v153 & 2) != 0 )
  {
    *(_WORD *)((char *)v151 + v180) = *(_WORD *)((char *)v152 + v180);
    v180 += 2;
  }
  if ( (v153 & 1) != 0 )
    *((_BYTE *)v151 + v180) = *((_BYTE *)v152 + v180);
LABEL_82:
  v285 = *(_QWORD *)(v125 + 8);
  *(_QWORD *)(v125 + 8) = 0;
  *(_BYTE *)(v125 + 16) = 0;
  *(_QWORD *)v125 = v126;
  if ( (unsigned __int64)(v285 - 0x7FFFFFFFFFFFFFF7LL) <= 7 )
    std::__throw_length_error("basic_string::append");
  v128 = std::string::_M_append();
  v129 = v128 + 16;
  v287 = v289;
  if ( *(_QWORD *)v128 == v128 + 16 )
  {
    v168 = v289;
    v169 = (_DWORD *)(v128 + 16);
    v170 = *(_QWORD *)(v128 + 8) + 1LL;
    if ( (unsigned int)v170 >= 8 )
    {
      LODWORD(v206) = 0;
      do
      {
        v207 = (unsigned int)v206;
        v206 = (unsigned int)(v206 + 8);
        *(_QWORD *)((char *)v289 + v207) = *(_QWORD *)(v129 + v207);
      }
      while ( (unsigned int)v206 < ((unsigned int)v170 & 0xFFFFFFF8) );
      v168 = (_DWORD *)((char *)v289 + v206);
      v169 = (_DWORD *)(v129 + v206);
    }
    v171 = 0;
    if ( (v170 & 4) != 0 )
    {
      *v168 = *v169;
      v171 = 4;
    }
    if ( (v170 & 2) != 0 )
    {
      *(_WORD *)((char *)v168 + v171) = *(_WORD *)((char *)v169 + v171);
      v171 += 2;
    }
    if ( (v170 & 1) != 0 )
      *((_BYTE *)v168 + v171) = *((_BYTE *)v169 + v171);
  }
  else
  {
    v287 = *(void **)v128;
    v289[0] = *(_QWORD *)(v128 + 16);
  }
  *(_QWORD *)v128 = v129;
  v130 = *(_QWORD *)(v128 + 8);
  v131 = v287;
  *(_QWORD *)(v128 + 8) = 0;
  v132 = v291;
  *(_BYTE *)(v128 + 16) = 0;
  v288 = v130;
  v133 = v130 + v132;
  if ( v131 == v289 )
  {
    if ( v133 <= 0xF || v290 == v292 )
      goto LABEL_90;
    goto LABEL_88;
  }
  if ( v289[0] < v133 && v290 != v292 )
  {
LABEL_88:
    if ( v292[0] >= v133 )
    {
      v134 = std::string::_M_replace();
      v135 = v134 + 16;
      v293 = v295;
      v136 = *(void **)v134;
      if ( *(_QWORD *)v134 != v134 + 16 )
        goto LABEL_91;
      v146 = v295;
      v147 = (_DWORD *)(v134 + 16);
      v148 = *(_QWORD *)(v134 + 8) + 1LL;
      if ( (unsigned int)v148 < 8 )
        goto LABEL_211;
      LODWORD(v149) = 0;
      do
      {
        v150 = (unsigned int)v149;
        v149 = (unsigned int)(v149 + 8);
        *(_QWORD *)((char *)v295 + v150) = *(_QWORD *)(v135 + v150);
      }
      while ( (unsigned int)v149 < ((unsigned int)v148 & 0xFFFFFFF8) );
LABEL_127:
      v146 = (_DWORD *)((char *)v295 + v149);
      v147 = (_DWORD *)(v135 + v149);
      goto LABEL_211;
    }
  }
  if ( 0x7FFFFFFFFFFFFFFELL - v130 < v132 )
    std::__throw_length_error("basic_string::append");
LABEL_90:
  v134 = std::string::_M_append();
  v135 = v134 + 16;
  v293 = v295;
  v136 = *(void **)v134;
  if ( *(_QWORD *)v134 != v134 + 16 )
  {
LABEL_91:
    v293 = v136;
    v295[0] = *(_QWORD *)(v134 + 16);
    goto LABEL_92;
  }
  v146 = v295;
  v147 = (_DWORD *)(v134 + 16);
  v148 = *(_QWORD *)(v134 + 8) + 1LL;
  if ( (unsigned int)v148 >= 8 )
  {
    LODWORD(v149) = 0;
    do
    {
      v212 = (unsigned int)v149;
      v149 = (unsigned int)(v149 + 8);
      *(_QWORD *)((char *)v295 + v212) = *(_QWORD *)(v135 + v212);
    }
    while ( (unsigned int)v149 < ((unsigned int)v148 & 0xFFFFFFF8) );
    goto LABEL_127;
  }
LABEL_211:
  v182 = 0;
  if ( (v148 & 4) != 0 )
  {
    *v146 = *v147;
    v182 = 4;
  }
  if ( (v148 & 2) != 0 )
  {
    *(_WORD *)((char *)v146 + v182) = *(_WORD *)((char *)v147 + v182);
    v182 += 2;
  }
  if ( (v148 & 1) != 0 )
    *((_BYTE *)v146 + v182) = *((_BYTE *)v147 + v182);
LABEL_92:
  v294 = *(_QWORD *)(v134 + 8);
  *(_QWORD *)v134 = v135;
  *(_QWORD *)(v134 + 8) = 0;
  *(_BYTE *)(v134 + 16) = 0;
  v326 = 0;
  *(_QWORD *)&v327 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v326 = 3;
  v137 = (_QWORD *)operator new(0x20u);
  v138 = v293;
  v139 = v137 + 2;
  v140 = v294;
  *v137 = v137 + 2;
  if ( v138 == v295 )
  {
    v161 = v140 + 1;
    if ( (unsigned int)(v140 + 1) >= 8 )
    {
      v137[2] = v295[0];
      *(_QWORD *)((char *)v139 + v161 - 8) = *(_QWORD *)((char *)&v295[-1] + v161);
      v183 = (unsigned __int64)(v137 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v184 = (char *)v139 - v183;
      v185 = (char *)((char *)v295 - v184);
      v186 = ((_DWORD)v184 + v161) & 0xFFFFFFF8;
      if ( v186 >= 8 )
      {
        v187 = v186 & 0xFFFFFFF8;
        v188 = 0;
        do
        {
          v189 = v188;
          v188 += 8;
          *(_QWORD *)(v183 + v189) = *(_QWORD *)&v185[v189];
        }
        while ( v188 < v187 );
      }
    }
    else if ( (v161 & 4) != 0 )
    {
      *((_DWORD *)v137 + 4) = v295[0];
      *(_DWORD *)((char *)v139 + v161 - 4) = *(_DWORD *)((char *)&v294 + v161 + 4);
    }
    else if ( (_DWORD)v140 != -1 )
    {
      *((_BYTE *)v137 + 16) = v295[0];
      if ( (v161 & 2) != 0 )
        *(_WORD *)((char *)v139 + v161 - 2) = *(_WORD *)((char *)&v294 + v161 + 6);
    }
  }
  else
  {
    *v137 = v138;
    v137[2] = v295[0];
  }
  v137[1] = v140;
  v293 = v295;
  v294 = 0;
  LOBYTE(v295[0]) = 0;
  v327 = (unsigned __int64)v137;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v334,
    v224,
    2,
    1);
  v334[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v328,
    7,
    v141,
    v142,
    v143,
    (int)v224,
    v234,
    v245,
    (int)a1,
    (int)v274,
    (int)v283,
    (__int64)v292,
    (int)v268,
    (int)v277,
    (int)v286,
    (int)&v310,
    (char)&v315,
    (__int64)&v320,
    (int)&v325,
    (__int64)&v327);
  v144 = &v335;
  do
  {
    v144 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v144 != (char *)v328 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v293 != v295 )
    operator delete(v293, v295[0] + 1LL);
  if ( v287 != v289 )
    operator delete(v287, v289[0] + 1LL);
  if ( v284 != v257 )
    operator delete(v284, v286[0] + 1LL);
  if ( v278 != v280 )
    operator delete(v278, v280[0] + 1LL);
  if ( v275 != v256 )
    operator delete(v275, v277[0] + 1LL);
  if ( v269 != v271 )
    operator delete(v269, v271[0] + 1LL);
  if ( v266 != v255 )
    operator delete(v266, v268[0] + 1LL);
  if ( v264 != &v265 )
    operator delete(v264, v265 + 1);
  if ( v272 != v251 )
    operator delete(v272, v274[0] + 1LL);
  if ( v281 != v253 )
    operator delete(v281, v283[0] + 1LL);
  if ( v290 != v254 )
    operator delete(v290, v292[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v261 != v246 )
    operator delete(v261, v263[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v258 != v235 )
    operator delete(v258, v260[0] + 1LL);
  return v248;
}

