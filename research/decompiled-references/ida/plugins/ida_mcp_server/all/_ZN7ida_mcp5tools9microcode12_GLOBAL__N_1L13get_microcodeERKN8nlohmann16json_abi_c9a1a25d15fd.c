__int64 __fastcall ida_mcp::tools::microcode::`anonymous namespace'::get_microcode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  std::runtime_error *v6; // rbx
  std::runtime_error *exception; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  std::runtime_error *v12; // rbx
  std::runtime_error *v13; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v14; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *v15; // rbx
  char *v16; // rax
  char *v17; // rax
  void *v18; // rax
  unsigned __int64 v19; // rbx
  void *v20; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v21; // rbx
  char *v22; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v23; // r12
  char *v24; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *v25; // rbx
  char *v26; // rax
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // rbp
  size_t v31; // rdx
  int v32; // eax
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r12
  size_t v35; // rdx
  int v36; // eax
  __int64 v37; // r14
  __int64 v38; // rbp
  size_t v39; // rdx
  int v40; // eax
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // r12
  size_t v43; // rdx
  int v44; // eax
  __int64 v45; // rbp
  __int64 v46; // r13
  size_t v47; // rdx
  int v48; // eax
  unsigned __int64 v49; // r14
  unsigned __int64 v50; // r12
  size_t v51; // rdx
  int v52; // eax
  char v53; // al
  char *v54; // r12
  int *v55; // rax
  int *v56; // r13
  __int64 v57; // r14
  std::runtime_error *v58; // rbx
  __m128i v59; // xmm1
  __int64 (__fastcall *hexdsp)(__int64, __m128i *, __int64, _QWORD, __int64, __int64); // rax
  char *v61; // rdi
  __int64 v62; // rsi
  signed int v63; // eax
  __int64 v64; // rbx
  __int64 v65; // rax
  __int8 v66; // si
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  _QWORD *v72; // rax
  _QWORD *v73; // rdx
  _QWORD *v74; // rbp
  size_t v75; // rcx
  __int64 v76; // rax
  unsigned __int8 v77; // dl
  __int8 v78; // si
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  _QWORD *v84; // rax
  _QWORD *v85; // rdx
  _QWORD *v86; // rbp
  size_t v87; // rcx
  __int64 v88; // rax
  __int8 v89; // si
  __int64 v90; // rdx
  __int64 v91; // rbp
  __int64 v92; // rax
  __int8 v93; // si
  unsigned __int8 v94; // dl
  __int64 v95; // rdx
  int v96; // r14d
  __int64 v97; // rbp
  __int64 v98; // r13
  __int8 v99; // si
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int8 v103; // bp
  __int64 v104; // rax
  __int64 v105; // rcx
  unsigned __int8 v106; // dl
  __int8 v107; // si
  __int64 v108; // rdx
  int v109; // r13d
  __int64 v110; // rbp
  __int64 i; // r12
  __int8 v112; // si
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int8 v116; // bp
  __int64 v117; // rax
  __int64 v118; // rcx
  unsigned __int8 v119; // dl
  __int8 v120; // si
  __int64 v121; // rdx
  int *v122; // rbx
  __int64 *v123; // r14
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rax
  char v129; // si
  __int64 v130; // rdx
  __int64 v131; // r13
  __int8 v132; // r12
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rax
  __int64 v138; // r14
  __int8 v139; // si
  __int64 v140; // rax
  size_t v141; // rax
  unsigned int v142; // r12d
  char *v143; // rdx
  _QWORD *v144; // rax
  _QWORD *v145; // rdx
  _QWORD *v146; // r13
  size_t v147; // rcx
  __int64 v148; // rax
  __int8 v149; // si
  __int64 v150; // rdx
  __int64 v151; // r14
  __int64 v152; // rax
  __int8 v153; // si
  __int64 v154; // rdx
  void (__fastcall *v155)(__int64, int *, __int64 *, __int64); // rax
  char v156; // r14
  __int64 v157; // rax
  __int64 v158; // rcx
  char v159; // si
  __int64 v160; // rdx
  char *v161; // rax
  __int64 v162; // rax
  __int64 v163; // rcx
  char v164; // si
  __int64 v165; // rdx
  __int64 v166; // rax
  __int64 v167; // rcx
  char v168; // si
  __int64 v169; // rdx
  unsigned int v170; // eax
  unsigned __int64 v171; // rdx
  char *v172; // rax
  char *v173; // rbp
  unsigned int v174; // r12d
  unsigned int v175; // r12d
  unsigned int v176; // eax
  __int64 v177; // rcx
  __int64 v178; // rax
  __int64 v179; // rax
  unsigned __int64 v180; // rsi
  char *v181; // rdx
  char *v182; // r8
  unsigned int v183; // eax
  unsigned int v184; // eax
  unsigned int v185; // edx
  __int64 v186; // rdi
  char v187; // bp
  char v188; // r12
  __int8 v189; // bl
  __int64 v190; // rax
  unsigned __int8 v191; // cl
  __int8 v192; // si
  __int64 v193; // rdx
  __int64 v194; // rax
  __int64 v195; // rax
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  char *v200; // rsi
  _QWORD *v201; // rax
  _QWORD *v202; // rdx
  _QWORD *v203; // rbx
  char *v204; // rdi
  unsigned __int64 v205; // rcx
  __int64 v206; // rax
  char v207; // si
  __int64 v208; // rdx
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // r9
  _QWORD *v213; // rax
  _QWORD *v214; // rdx
  _QWORD *v215; // rbx
  size_t v216; // rcx
  __int64 v217; // rax
  char v218; // si
  __int64 v219; // rdx
  __int64 v220; // rbx
  __int64 v221; // rax
  __int8 v222; // si
  __int64 v223; // rdx
  __int64 v224; // rbx
  __int64 v225; // rax
  __int8 v226; // si
  __int64 v227; // rdx
  __int64 v228; // rax
  __int8 v229; // si
  __int64 v230; // rdx
  __int64 v231; // rax
  __int8 v232; // si
  __int64 v233; // rdx
  __int64 v234; // rax
  __int64 v235; // rcx
  __int8 v236; // si
  __int64 v237; // rdx
  void (__fastcall *v238)(__int64, __int64); // rax
  __int64 v239; // rdi
  __int64 v240; // rbp
  __int64 j; // rbx
  __int64 v242; // rdx
  __int64 v243; // rdi
  __int64 v244; // r12
  __int64 v245; // rbp
  __int64 v246; // rbx
  _QWORD *v247; // r13
  void (__fastcall *v248)(__int64, __int64); // rax
  unsigned int v250; // eax
  unsigned int v251; // eax
  __int64 v252; // r12
  __int64 v253; // r15
  __int64 v254; // r12
  __int64 v255; // r13
  __int64 v256; // rbp
  size_t v257; // rdx
  int v258; // eax
  unsigned __int64 v259; // r14
  unsigned __int64 v260; // r13
  size_t v261; // rax
  int v262; // eax
  __int64 v263; // r12
  __int64 v264; // rbp
  size_t v265; // rdx
  int v266; // eax
  unsigned __int64 v267; // r14
  unsigned __int64 v268; // r14
  size_t v269; // rax
  int v270; // eax
  __int64 v271; // r14
  void (__fastcall *v272)(__int64, __m128i *, __int64); // rax
  void *v273; // rbp
  unsigned __int64 v274; // rsi
  char *v275; // rdx
  char *v276; // r8
  unsigned int v277; // eax
  unsigned int v278; // eax
  unsigned int v279; // edx
  __int64 v280; // rdi
  unsigned __int64 v281; // rsi
  char *v282; // rdx
  char *v283; // r8
  unsigned int v284; // eax
  unsigned int v285; // eax
  unsigned int v286; // edx
  __int64 v287; // rdi
  unsigned int v288; // eax
  unsigned int v289; // eax
  unsigned __int64 v290; // rsi
  char *v291; // rdx
  char *v292; // r8
  unsigned int v293; // eax
  unsigned int v294; // eax
  unsigned int v295; // edx
  __int64 v296; // rdi
  unsigned __int64 v297; // rsi
  char *v298; // rdx
  char *v299; // r11
  unsigned int v300; // eax
  unsigned int v301; // eax
  unsigned int v302; // edx
  __int64 v303; // rdi
  __int64 v304; // [rsp+0h] [rbp-2D8h]
  int v305; // [rsp+0h] [rbp-2D8h]
  int v306; // [rsp+0h] [rbp-2D8h]
  int v307; // [rsp+8h] [rbp-2D0h]
  int v308; // [rsp+8h] [rbp-2D0h]
  __m128i *v309; // [rsp+10h] [rbp-2C8h]
  __int64 v310; // [rsp+10h] [rbp-2C8h]
  __int64 v311; // [rsp+10h] [rbp-2C8h]
  const char *v312; // [rsp+18h] [rbp-2C0h]
  char v313; // [rsp+18h] [rbp-2C0h]
  char v314; // [rsp+18h] [rbp-2C0h]
  __int64 v315; // [rsp+20h] [rbp-2B8h]
  __int64 v316; // [rsp+28h] [rbp-2B0h]
  __int64 v317; // [rsp+30h] [rbp-2A8h]
  __int64 v318; // [rsp+38h] [rbp-2A0h]
  int v319; // [rsp+40h] [rbp-298h]
  int v320; // [rsp+44h] [rbp-294h]
  __int64 v321; // [rsp+50h] [rbp-288h]
  __int64 v322; // [rsp+68h] [rbp-270h]
  __m128i v323; // [rsp+70h] [rbp-268h] BYREF
  __int64 v324; // [rsp+80h] [rbp-258h]
  __int64 *v325; // [rsp+88h] [rbp-250h]
  char *v326; // [rsp+90h] [rbp-248h]
  char **v327; // [rsp+98h] [rbp-240h]
  char *v328; // [rsp+A0h] [rbp-238h]
  char v329; // [rsp+A9h] [rbp-22Fh]
  unsigned __int8 v330; // [rsp+AAh] [rbp-22Eh]
  char v331; // [rsp+ABh] [rbp-22Dh]
  char v332; // [rsp+ACh] [rbp-22Ch]
  char v333; // [rsp+ADh] [rbp-22Bh]
  unsigned __int8 v334; // [rsp+AEh] [rbp-22Ah]
  char v335; // [rsp+AFh] [rbp-229h]
  char v336; // [rsp+B0h] [rbp-228h] BYREF
  __int64 v337; // [rsp+B8h] [rbp-220h]
  __int64 v338; // [rsp+C0h] [rbp-218h]
  __int64 v339; // [rsp+C8h] [rbp-210h] BYREF
  char v340; // [rsp+D0h] [rbp-208h]
  __int64 v341; // [rsp+D8h] [rbp-200h]
  char v342; // [rsp+E0h] [rbp-1F8h]
  __int64 v343; // [rsp+E8h] [rbp-1F0h]
  char v344; // [rsp+F0h] [rbp-1E8h]
  __int64 v345; // [rsp+F8h] [rbp-1E0h]
  __m128i v346; // [rsp+100h] [rbp-1D8h] BYREF
  __int64 v347; // [rsp+110h] [rbp-1C8h] BYREF
  __int64 v348; // [rsp+118h] [rbp-1C0h] BYREF
  __int64 v349; // [rsp+120h] [rbp-1B8h] BYREF
  __int128 v350; // [rsp+128h] [rbp-1B0h]
  __m128i v351; // [rsp+140h] [rbp-198h] BYREF
  __m128i v352; // [rsp+160h] [rbp-178h] BYREF
  __int128 v353; // [rsp+170h] [rbp-168h]
  _QWORD v354[2]; // [rsp+180h] [rbp-158h] BYREF
  __int64 v355; // [rsp+190h] [rbp-148h]
  __int128 v356; // [rsp+198h] [rbp-140h]
  char *v357; // [rsp+1B0h] [rbp-128h] BYREF
  unsigned __int64 v358; // [rsp+1B8h] [rbp-120h]
  char v359; // [rsp+1C0h] [rbp-118h] BYREF
  void *v360; // [rsp+1D0h] [rbp-108h] BYREF
  unsigned __int64 v361; // [rsp+1D8h] [rbp-100h]
  _QWORD v362[2]; // [rsp+1E0h] [rbp-F8h] BYREF
  void *v363; // [rsp+1F0h] [rbp-E8h] BYREF
  size_t v364; // [rsp+1F8h] [rbp-E0h]
  char s2[16]; // [rsp+200h] [rbp-D8h] BYREF
  char v366[32]; // [rsp+210h] [rbp-C8h] BYREF
  char v367[32]; // [rsp+230h] [rbp-A8h] BYREF
  char s[32]; // [rsp+250h] [rbp-88h] BYREF
  char v369[40]; // [rsp+270h] [rbp-68h] BYREF
  unsigned __int64 v370; // [rsp+298h] [rbp-40h]

  v323.m128i_i64[1] = a1;
  v370 = __readfsqword(0x28u);
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                       &byte_7,
                       0xDEC0DE00000004LL,
                       v354,
                       0,
                       &callui,
                       a6,
                       v354) != 14598366 )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Hexrays decompiler not available");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  ida_mcp::tools::cpp_class_recovery::ensure_recovery_done((ida_mcp::tools::cpp_class_recovery *)&byte_7);
  v334 = *(_BYTE *)a2;
  if ( v334 != 1 )
    goto LABEL_318;
  v27 = *(_QWORD *)(a2 + 8);
  v28 = *(_QWORD *)(v27 + 16);
  v324 = v28;
  if ( !v28 )
    goto LABEL_318;
  v29 = v27 + 8;
  v30 = v27 + 8;
  do
  {
    while ( 1 )
    {
      v33 = *(_QWORD *)(v28 + 40);
      if ( !v33 )
        break;
      v31 = 7;
      if ( v33 <= 7 )
        v31 = *(_QWORD *)(v28 + 40);
      v32 = memcmp(*(const void **)(v28 + 32), "address", v31);
      if ( v32 || (v32 = v33 - 7, (__int64)(v33 - 7) <= 0x7FFFFFFF) )
      {
        if ( v32 < 0 )
          break;
      }
      v30 = v28;
      v28 = *(_QWORD *)(v28 + 16);
      if ( !v28 )
        goto LABEL_13;
    }
    v28 = *(_QWORD *)(v28 + 24);
  }
  while ( v28 );
LABEL_13:
  if ( v29 == v30 )
    goto LABEL_318;
  v34 = *(_QWORD *)(v30 + 40);
  if ( v34 )
  {
    v35 = 7;
    if ( v34 <= 7 )
      v35 = *(_QWORD *)(v30 + 40);
    v36 = memcmp(*(const void **)(v30 + 32), "address", v35);
    if ( !v36 )
    {
      v36 = v34 - 7;
      if ( (__int64)(v34 - 7) > 0x7FFFFFFF )
        goto LABEL_318;
    }
    if ( v36 > 0 )
      goto LABEL_318;
  }
  v307 = a2;
  v37 = v324;
  v38 = v27 + 8;
  strcpy(s2, "address");
  do
  {
    while ( 1 )
    {
      v41 = *(_QWORD *)(v37 + 40);
      if ( !v41 )
        break;
      v39 = 7;
      if ( v41 <= 7 )
        v39 = *(_QWORD *)(v37 + 40);
      v40 = memcmp(*(const void **)(v37 + 32), s2, v39);
      if ( v40 || (v40 = v41 - 7, (__int64)(v41 - 7) <= 0x7FFFFFFF) )
      {
        if ( v40 < 0 )
          break;
      }
      v38 = v37;
      v37 = *(_QWORD *)(v37 + 16);
      if ( !v37 )
        goto LABEL_29;
    }
    v37 = *(_QWORD *)(v37 + 24);
  }
  while ( v37 );
LABEL_29:
  if ( v29 != v38 )
  {
    v42 = *(_QWORD *)(v38 + 40);
    if ( !v42 )
      goto LABEL_129;
    v43 = 7;
    if ( v42 <= 7 )
      v43 = *(_QWORD *)(v38 + 40);
    v44 = memcmp(s2, *(const void **)(v38 + 32), v43);
    if ( v44 || (v44 = 7 - v42, (__int64)(7 - v42) >= (__int64)0xFFFFFFFF80000000LL) )
    {
      if ( v44 >= 0 )
      {
LABEL_129:
        if ( *(_BYTE *)(v38 + 64) == 3 )
          goto LABEL_37;
LABEL_318:
        v6 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
        std::runtime_error::runtime_error(v6, "Missing required parameter: address");
        __cxa_throw(
          v6,
          (struct type_info *)&`typeinfo for'std::runtime_error,
          (void (*)(void *))&std::runtime_error::~runtime_error);
      }
    }
  }
  if ( *(_BYTE *)(v27 + 72) != 3 )
    goto LABEL_318;
LABEL_37:
  strcpy(s2, "address");
  v45 = v324;
  v46 = v27 + 8;
  do
  {
    while ( 1 )
    {
      v49 = *(_QWORD *)(v45 + 40);
      if ( !v49 )
        break;
      v47 = 7;
      if ( v49 <= 7 )
        v47 = *(_QWORD *)(v45 + 40);
      v48 = memcmp(*(const void **)(v45 + 32), s2, v47);
      if ( v48 || (v48 = v49 - 7, (__int64)(v49 - 7) <= 0x7FFFFFFF) )
      {
        if ( v48 < 0 )
          break;
      }
      v46 = v45;
      v45 = *(_QWORD *)(v45 + 16);
      if ( !v45 )
        goto LABEL_46;
    }
    v45 = *(_QWORD *)(v45 + 24);
  }
  while ( v45 );
LABEL_46:
  v324 = v45;
  if ( v29 != v46 )
  {
    v50 = *(_QWORD *)(v46 + 40);
    if ( v50 )
    {
      v51 = 7;
      if ( v50 <= 7 )
        v51 = *(_QWORD *)(v46 + 40);
      v52 = memcmp(s2, *(const void **)(v46 + 32), v51);
      if ( v52 || (v52 = 7 - v50, (__int64)(7 - v50) >= (__int64)0xFFFFFFFF80000000LL) )
      {
        if ( v52 >= 0 )
          v29 = v46;
      }
    }
    else
    {
      v29 = v46;
    }
  }
  LOBYTE(v362[0]) = 0;
  v325 = (__int64 *)&v360;
  v326 = (char *)v362;
  v360 = v362;
  v53 = *(_BYTE *)(v29 + 64);
  v361 = 0;
  v335 = v53;
  if ( v53 != 3 )
  {
    v23 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)(v29 + 64) )
    {
      case 0:
        v24 = "null";
        break;
      case 1:
        v24 = "object";
        break;
      case 2:
        v24 = (char *)"array";
        break;
      case 3:
        v24 = "string";
        break;
      case 4:
        v24 = "boolean";
        break;
      case 8:
        v24 = "binary";
        break;
      case 9:
        v24 = "discarded";
        break;
      default:
        v24 = "number";
        break;
    }
    v354[0] = v24;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v23,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v23,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v54 = (char *)v360;
  if ( v361 > 2 && *(_BYTE *)v360 == 48 && (*((_BYTE *)v360 + 1) & 0xDF) == 0x58 )
    v54 = (char *)v360 + 2;
  v55 = __errno_location();
  *v55 = 0;
  v56 = v55;
  v57 = __isoc23_strtoull();
  if ( v54 == (char *)v354[0] || *(_BYTE *)v354[0] || *v56 == 34 && v57 == -1 )
  {
    if ( v360 != v326 )
      operator delete(v360, v362[0] + 1LL);
    v58 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v58, "Invalid address");
    __cxa_throw(
      v58,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v360 != v326 )
    operator delete(v360, v362[0] + 1LL);
  v323.m128i_i64[0] = get_func();
  if ( !v323.m128i_i64[0] )
  {
    v12 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v12, "Address is not in a function");
    __cxa_throw(
      v12,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v358 = 0;
  v327 = &v357;
  v357 = &v359;
  v359 = 0;
  if ( (unsigned __int8)ida_mcp::is_go_pathological_func() )
  {
    v18 = __cxa_allocate_exception(0x10u);
    v19 = v358;
    s2[0] = 0;
    v20 = v18;
    v363 = s2;
    v364 = 0;
    std::string::reserve();
    if ( v364 - 0x7FFFFFFFFFFFFFBBLL > 0x43 )
    {
      std::string::_M_append();
      if ( 0x7FFFFFFFFFFFFFFELL - v364 >= v19 )
      {
        std::string::_M_append();
        std::runtime_error::runtime_error();
        std::string::_M_dispose();
        __cxa_throw(
          v20,
          (struct type_info *)&`typeinfo for'std::runtime_error,
          (void (*)(void *))&std::runtime_error::~runtime_error);
      }
      std::__throw_length_error("basic_string::append");
    }
    std::__throw_length_error("basic_string::append");
  }
  v320 = 500;
  if ( *(_BYTE *)a2 == 1 )
  {
    v252 = *(_QWORD *)(a2 + 8);
    v253 = *(_QWORD *)(v252 + 16);
    if ( !v253 )
      goto LABEL_262;
    v254 = v252 + 8;
    v255 = v253;
    v256 = v254;
    do
    {
      while ( 1 )
      {
        v259 = *(_QWORD *)(v255 + 40);
        if ( !v259 )
          break;
        v257 = 8;
        if ( v259 <= 8 )
          v257 = *(_QWORD *)(v255 + 40);
        v258 = memcmp(*(const void **)(v255 + 32), "maturity", v257);
        if ( v258 || (v258 = v259 - 8, (__int64)(v259 - 8) <= 0x7FFFFFFF) )
        {
          if ( v258 < 0 )
            break;
        }
        v256 = v255;
        v255 = *(_QWORD *)(v255 + 16);
        if ( !v255 )
          goto LABEL_236;
      }
      v255 = *(_QWORD *)(v255 + 24);
    }
    while ( v255 );
LABEL_236:
    if ( v254 != v256 )
    {
      v260 = *(_QWORD *)(v256 + 40);
      if ( !v260 )
        goto LABEL_243;
      v261 = 8;
      if ( v260 <= 8 )
        v261 = *(_QWORD *)(v256 + 40);
      v262 = memcmp(*(const void **)(v256 + 32), "maturity", v261);
      if ( v262 || (v262 = v260 - 8, (__int64)(v260 - 8) <= 0x7FFFFFFF) )
      {
        if ( v262 <= 0 )
        {
LABEL_243:
          if ( (unsigned __int8)(*(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>()
                               - 5) <= 1u )
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
            v13 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
            std::runtime_error::runtime_error(v13, "Invalid maturity level (1-8)");
            __cxa_throw(
              v13,
              (struct type_info *)&`typeinfo for'std::runtime_error,
              (void (*)(void *))&std::runtime_error::~runtime_error);
          }
          if ( *(_BYTE *)a2 != 1 )
            goto LABEL_262;
          v263 = *(_QWORD *)(a2 + 8);
          v253 = *(_QWORD *)(v263 + 16);
          v254 = v263 + 8;
          if ( !v253 )
            goto LABEL_262;
        }
      }
    }
    v264 = v254;
    do
    {
      while ( 1 )
      {
        v267 = *(_QWORD *)(v253 + 40);
        if ( !v267 )
          break;
        v265 = 16;
        if ( v267 <= 0x10 )
          v265 = *(_QWORD *)(v253 + 40);
        v266 = memcmp(*(const void **)(v253 + 32), "max_instructions", v265);
        if ( v266 || (v266 = v267 - 16, (__int64)(v267 - 16) <= 0x7FFFFFFF) )
        {
          if ( v266 < 0 )
            break;
        }
        v264 = v253;
        v253 = *(_QWORD *)(v253 + 16);
        if ( !v253 )
          goto LABEL_255;
      }
      v253 = *(_QWORD *)(v253 + 24);
    }
    while ( v253 );
LABEL_255:
    if ( v254 == v264 )
      goto LABEL_262;
    v268 = *(_QWORD *)(v264 + 40);
    if ( v268 )
    {
      v269 = 16;
      if ( v268 <= 0x10 )
        v269 = *(_QWORD *)(v264 + 40);
      v270 = memcmp(*(const void **)(v264 + 32), "max_instructions", v269);
      if ( !v270 )
      {
        v271 = v268 - 16;
        v270 = v271;
        if ( v271 > 0x7FFFFFFF )
          goto LABEL_262;
      }
      if ( v270 > 0 )
        goto LABEL_262;
    }
    if ( (unsigned __int8)(*(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>()
                         - 5) <= 1u )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      LODWORD(v354[0]) = 0;
      nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
      v320 = v354[0];
    }
    else
    {
LABEL_262:
      v320 = 500;
    }
  }
  v59 = _mm_loadl_epi64(&v323);
  v354[0] = 0;
  v354[1] = -1;
  v355 = 0;
  v356 = 0;
  v352 = v59;
  v353 = 0;
  hexdsp = (__int64 (__fastcall *)(__int64, __m128i *, __int64, _QWORD, __int64, __int64))get_hexdsp();
  v321 = hexdsp(567, &v352, v304, 0, 1, 7);
  if ( !v321 )
  {
    memset(&v351, 0, 24);
    v272 = (void (__fastcall *)(__int64, __m128i *, __int64))get_hexdsp();
    v272(440, &v351, v304);
    v273 = __cxa_allocate_exception(0x10u);
    std::string::basic_string<std::allocator<char>>(
      v325,
      "Microcode generation failed: ",
      v8,
      v9,
      v10,
      v11,
      v304,
      a2,
      (__int64)v309);
    std::string::append();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v273,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v61 = &v336;
  v62 = 0;
  v336 = 0;
  v337 = 0;
  v328 = &v336;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v319 = 0;
  v317 = 0;
  v333 = v336;
  v322 = v337;
  if ( *(int *)(v321 + 64) > 0 )
  {
LABEL_74:
    v64 = *(_QWORD *)(*(_QWORD *)(v321 + 528) + 8 * v317);
    if ( !v64 )
    {
      v63 = *(_DWORD *)(v321 + 64);
      if ( v63 > (int)v317 + 1 )
        goto LABEL_73;
      goto LABEL_281;
    }
    v338 = 0;
    v339 = 0;
    v65 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v66 = *(_BYTE *)v65;
    *(_BYTE *)v65 = 5;
    v351.m128i_i8[0] = v66;
    v330 = v338;
    v67 = *(_QWORD *)(v65 + 8);
    *(_QWORD *)(v65 + 8) = v317;
    v351.m128i_i64[1] = v67;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    qsnprintf();
    std::string::basic_string<std::allocator<char>>(
      (__int64 *)&v363,
      v366,
      v68,
      v69,
      v70,
      v71,
      (int)&v351.m128i_i32[2],
      v307,
      (__int64)v309);
    v351 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v72 = (_QWORD *)operator new(0x20u);
    v73 = v72 + 2;
    v74 = v72;
    v75 = v364;
    *v72 = v72 + 2;
    if ( v363 == s2 )
    {
      v251 = v75 + 1;
      if ( (unsigned int)(v75 + 1) >= 8 )
      {
        v74[2] = *(_QWORD *)s2;
        *(_QWORD *)((char *)v73 + v251 - 8) = *(_QWORD *)&s2[v251 - 8];
        v274 = (unsigned __int64)(v74 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v275 = (char *)v73 - v274;
        v276 = (char *)(s2 - v275);
        v277 = ((_DWORD)v275 + v251) & 0xFFFFFFF8;
        if ( v277 >= 8 )
        {
          v278 = v277 & 0xFFFFFFF8;
          v279 = 0;
          do
          {
            v280 = v279;
            v279 += 8;
            *(_QWORD *)(v274 + v280) = *(_QWORD *)&v276[v280];
          }
          while ( v279 < v278 );
        }
      }
      else if ( (v251 & 4) != 0 )
      {
        *((_DWORD *)v74 + 4) = *(_DWORD *)s2;
        *(_DWORD *)((char *)v73 + v251 - 4) = *(_DWORD *)&s2[v251 - 4];
      }
      else if ( (_DWORD)v75 != -1 )
      {
        *((_BYTE *)v74 + 16) = s2[0];
        if ( (v251 & 2) != 0 )
          *(_WORD *)((char *)v73 + v251 - 2) = *(_WORD *)&s2[v251 - 2];
      }
    }
    else
    {
      *v72 = v363;
      v72[2] = *(_QWORD *)s2;
    }
    v74[1] = v75;
    v363 = s2;
    v364 = 0;
    s2[0] = 0;
    v76 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v77 = v338;
    v78 = *(_BYTE *)v76;
    *(_BYTE *)v76 = 3;
    v330 = v77;
    v79 = *(_QWORD *)(v76 + 8);
    *(_QWORD *)(v76 + 8) = v74;
    v351.m128i_i8[0] = v78;
    v351.m128i_i64[1] = v79;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v363 != s2 )
      operator delete(v363, *(_QWORD *)s2 + 1LL);
    qsnprintf();
    std::string::basic_string<std::allocator<char>>((__int64 *)&v363, v367, v80, v81, v82, v83, v305, v308, v310);
    v351 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v84 = (_QWORD *)operator new(0x20u);
    v85 = v84 + 2;
    v86 = v84;
    v87 = v364;
    *v84 = v84 + 2;
    if ( v363 == s2 )
    {
      v250 = v87 + 1;
      if ( (unsigned int)(v87 + 1) >= 8 )
      {
        v86[2] = *(_QWORD *)s2;
        *(_QWORD *)((char *)v85 + v250 - 8) = *(_QWORD *)&s2[v250 - 8];
        v281 = (unsigned __int64)(v86 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v282 = (char *)v85 - v281;
        v283 = (char *)(s2 - v282);
        v284 = ((_DWORD)v282 + v250) & 0xFFFFFFF8;
        if ( v284 >= 8 )
        {
          v285 = v284 & 0xFFFFFFF8;
          v286 = 0;
          do
          {
            v287 = v286;
            v286 += 8;
            *(_QWORD *)(v281 + v287) = *(_QWORD *)&v283[v287];
          }
          while ( v286 < v285 );
        }
      }
      else if ( (v250 & 4) != 0 )
      {
        *((_DWORD *)v86 + 4) = *(_DWORD *)s2;
        *(_DWORD *)((char *)v85 + v250 - 4) = *(_DWORD *)&s2[v250 - 4];
      }
      else if ( (_DWORD)v87 != -1 )
      {
        *((_BYTE *)v86 + 16) = s2[0];
        if ( (v250 & 2) != 0 )
          *(_WORD *)((char *)v85 + v250 - 2) = *(_WORD *)&s2[v250 - 2];
      }
    }
    else
    {
      *v84 = v363;
      v84[2] = *(_QWORD *)s2;
    }
    v86[1] = v87;
    v363 = s2;
    v364 = 0;
    s2[0] = 0;
    v88 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v89 = *(_BYTE *)v88;
    v90 = *(_QWORD *)(v88 + 8);
    *(_BYTE *)v88 = 3;
    *(_QWORD *)(v88 + 8) = v86;
    v351.m128i_i8[0] = v89;
    v351.m128i_i64[1] = v90;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v363 != s2 )
      operator delete(v363, *(_QWORD *)s2 + 1LL);
    v91 = *(unsigned int *)(v64 + 76);
    v92 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v93 = *(_BYTE *)v92;
    v94 = v338;
    *(_BYTE *)v92 = 6;
    v351.m128i_i8[0] = v93;
    v330 = v94;
    v95 = *(_QWORD *)(v92 + 8);
    *(_QWORD *)(v92 + 8) = v91;
    v351.m128i_i64[1] = v95;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v340 = 0;
    v341 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v96 = *(_DWORD *)(v64 + 376);
    v331 = v340;
    if ( v96 <= 0 )
    {
      v316 = v341;
      v309 = &v351;
    }
    else
    {
      v97 = **(int **)(v64 + 368);
      if ( !v340 )
      {
        v316 = operator new(0x18u);
        v98 = 0;
        *(_QWORD *)(v316 + 16) = 0;
        *(_OWORD *)v316 = 0;
        v309 = &v351;
LABEL_86:
        v351.m128i_i8[0] = 5;
        v351.m128i_i64[1] = v97;
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
        v99 = v351.m128i_i8[0];
        v100 = v351.m128i_i64[1];
        goto LABEL_90;
      }
      if ( v340 != 2 )
      {
        v15 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
        switch ( v331 )
        {
          case 1:
            v17 = "object";
            break;
          case 2:
            v17 = (char *)"array";
            break;
          case 3:
            v17 = "string";
            break;
          case 4:
            v17 = "boolean";
            break;
          case 8:
            v17 = "binary";
            break;
          case 9:
            v17 = "discarded";
            break;
          default:
            v17 = "number";
            break;
        }
        v351.m128i_i64[0] = (__int64)v17;
        nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
        nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
          v15,
          308);
        std::string::_M_dispose();
        __cxa_throw(
          v15,
          (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
          (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
      }
      v316 = v341;
      v98 = 0;
      v309 = &v351;
      while ( 1 )
      {
        v101 = *(_QWORD *)(v316 + 8);
        if ( v101 == *(_QWORD *)(v316 + 16) )
          goto LABEL_86;
        v351.m128i_i8[0] = 5;
        v102 = v101 + 16;
        v99 = 0;
        v351.m128i_i64[1] = v97;
        *(__m128i *)(v102 - 16) = _mm_load_si128(&v351);
        *(_QWORD *)(v316 + 8) = v102;
        v100 = 0;
LABEL_90:
        v351.m128i_i8[0] = v99;
        ++v98;
        v351.m128i_i64[1] = v100;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( *(_DWORD *)(v64 + 376) <= (int)v98 )
          break;
        v97 = *(int *)(*(_QWORD *)(v64 + 368) + 4 * v98);
      }
      v331 = 2;
    }
    v351.m128i_i8[0] = 0;
    v340 = v331;
    v341 = v316;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v103 = v351.m128i_i8[0];
    v104 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v105 = v351.m128i_i64[1];
    v106 = v338;
    v107 = *(_BYTE *)v104;
    *(_BYTE *)v104 = v103;
    v330 = v106;
    v108 = *(_QWORD *)(v104 + 8);
    *(_QWORD *)(v104 + 8) = v105;
    v351.m128i_i64[1] = v108;
    v351.m128i_i8[0] = v107;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v342 = 0;
    v343 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v109 = *(_DWORD *)(v64 + 352);
    v332 = v342;
    if ( v109 <= 0 )
    {
      v315 = v343;
    }
    else
    {
      v110 = **(int **)(v64 + 344);
      if ( !v342 )
      {
        v315 = operator new(0x18u);
        i = 0;
        *(_QWORD *)(v315 + 16) = 0;
        *(_OWORD *)v315 = 0;
LABEL_95:
        v351.m128i_i8[0] = 5;
        v351.m128i_i64[1] = v110;
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
        v112 = v351.m128i_i8[0];
        v113 = v351.m128i_i64[1];
        goto LABEL_99;
      }
      if ( v342 != 2 )
      {
        v14 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
        switch ( v332 )
        {
          case 1:
            v16 = "object";
            break;
          case 2:
            v16 = (char *)"array";
            break;
          case 3:
            v16 = "string";
            break;
          case 4:
            v16 = "boolean";
            break;
          case 8:
            v16 = "binary";
            break;
          case 9:
            v16 = "discarded";
            break;
          default:
            v16 = "number";
            break;
        }
        v351.m128i_i64[0] = (__int64)v16;
        nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
        nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
          v14,
          308);
        std::string::_M_dispose();
        __cxa_throw(
          v14,
          (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
          (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
      }
      v315 = v343;
      for ( i = 0; ; v110 = *(int *)(*(_QWORD *)(v64 + 344) + 4 * i) )
      {
        v114 = *(_QWORD *)(v315 + 8);
        if ( v114 == *(_QWORD *)(v315 + 16) )
          goto LABEL_95;
        v351.m128i_i8[0] = 5;
        v115 = v114 + 16;
        v112 = 0;
        v351.m128i_i64[1] = v110;
        *(__m128i *)(v115 - 16) = _mm_load_si128(&v351);
        *(_QWORD *)(v315 + 8) = v115;
        v113 = 0;
LABEL_99:
        v351.m128i_i8[0] = v112;
        ++i;
        v351.m128i_i64[1] = v113;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( *(_DWORD *)(v64 + 352) <= (int)i )
          break;
      }
      v332 = 2;
    }
    v351.m128i_i8[0] = 0;
    v342 = v332;
    v343 = v315;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v116 = v351.m128i_i8[0];
    v117 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v118 = v351.m128i_i64[1];
    v119 = v338;
    v120 = *(_BYTE *)v117;
    *(_BYTE *)v117 = v116;
    v330 = v119;
    v121 = *(_QWORD *)(v117 + 8);
    *(_QWORD *)(v117 + 8) = v118;
    v351.m128i_i64[1] = v121;
    v351.m128i_i8[0] = v120;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v344 = 0;
    v345 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v122 = *(int **)(v64 + 48);
    v329 = v344;
    v318 = v345;
    if ( !v122 )
    {
LABEL_157:
      v187 = 0;
      v188 = 0;
      goto LABEL_158;
    }
    while ( 1 )
    {
      if ( v320 <= v319 )
      {
        v188 = 1;
        v187 = 1;
LABEL_158:
        v351.m128i_i8[0] = 0;
        v344 = v329;
        v345 = v318;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v189 = v351.m128i_i8[0];
        v190 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v191 = v338;
        v192 = *(_BYTE *)v190;
        *(_BYTE *)v190 = v189;
        v193 = *(_QWORD *)(v190 + 8);
        v330 = v191;
        *(_QWORD *)(v190 + 8) = v351.m128i_i64[1];
        v351.m128i_i64[1] = v193;
        v351.m128i_i8[0] = v192;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( !v333 )
        {
          v194 = operator new(0x18u);
          *(_QWORD *)(v194 + 16) = 0;
          v322 = v194;
          *(_OWORD *)v194 = 0;
          goto LABEL_160;
        }
        if ( v333 != 2 )
        {
          v25 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          switch ( v333 )
          {
            case 1:
              v26 = "object";
              break;
            case 2:
              v26 = (char *)"array";
              break;
            case 3:
              v26 = "string";
              break;
            case 4:
              v26 = "boolean";
              break;
            case 8:
              v26 = "binary";
              break;
            case 9:
              v26 = "discarded";
              break;
            default:
              v26 = "number";
              break;
          }
          v351.m128i_i64[0] = (__int64)v26;
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
            v25,
            308);
          std::string::_M_dispose();
          __cxa_throw(
            v25,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        if ( *(_QWORD *)(v322 + 8) == *(_QWORD *)(v322 + 16) )
        {
LABEL_160:
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
        }
        else
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          *(_QWORD *)(v322 + 8) += 16LL;
        }
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v62 = v330;
        v61 = (char *)&v339;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v63 = *(_DWORD *)(v321 + 64);
        if ( (int)v317 + 1 >= v63 )
        {
          v334 = v188;
          v333 = 2;
          goto LABEL_163;
        }
        v333 = 2;
        if ( v187 )
          goto LABEL_163;
LABEL_73:
        if ( (unsigned int)++v317 >= v63 )
        {
          if ( !under_debugger )
            interr();
          ida_mcp::tools::microcode::`anonymous namespace'::get_microcode(v61, v62);
        }
        goto LABEL_74;
      }
      qsnprintf();
      v363 = s2;
      v141 = strlen(s);
      v351.m128i_i64[0] = v141;
      v142 = v141;
      if ( v141 > 0xF )
      {
        v161 = (char *)std::string::_M_create();
        v363 = v161;
        *(_QWORD *)s2 = v351.m128i_i64[0];
      }
      else
      {
        if ( v141 == 1 )
        {
          s2[0] = s[0];
LABEL_122:
          v143 = s2;
          goto LABEL_123;
        }
        if ( !v141 )
          goto LABEL_122;
        v161 = s2;
      }
      if ( v142 >= 8 )
      {
        *(_QWORD *)v161 = *(_QWORD *)s;
        *(_QWORD *)&v161[v142 - 8] = *(_QWORD *)&v367[v142 + 24];
        v171 = (unsigned __int64)(v161 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v172 = &v161[-v171];
        v173 = (char *)(s - v172);
        v174 = ((_DWORD)v172 + v142) & 0xFFFFFFF8;
        if ( v174 >= 8 )
        {
          v175 = v174 & 0xFFFFFFF8;
          v176 = 0;
          do
          {
            v177 = v176;
            v176 += 8;
            *(_QWORD *)(v171 + v177) = *(_QWORD *)&v173[v177];
          }
          while ( v176 < v175 );
        }
      }
      else if ( (v142 & 4) != 0 )
      {
        *(_DWORD *)v161 = *(_DWORD *)s;
        *(_DWORD *)&v161[v142 - 4] = *(_DWORD *)&v367[v142 + 28];
      }
      else if ( v142 )
      {
        *v161 = s[0];
        if ( (v142 & 2) != 0 )
          *(_WORD *)&v161[v142 - 2] = *(_WORD *)&v367[v142 + 30];
      }
      v141 = v351.m128i_i64[0];
      v143 = (char *)v363;
LABEL_123:
      v364 = v141;
      v143[v141] = 0;
      v351 = 0u;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v144 = (_QWORD *)operator new(0x20u);
      v145 = v144 + 2;
      v146 = v144;
      v147 = v364;
      *v144 = v144 + 2;
      if ( v363 == s2 )
      {
        v170 = v147 + 1;
        if ( (unsigned int)(v147 + 1) >= 8 )
        {
          v146[2] = *(_QWORD *)s2;
          *(_QWORD *)((char *)v145 + v170 - 8) = *(_QWORD *)&s2[v170 - 8];
          v180 = (unsigned __int64)(v146 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v181 = (char *)v145 - v180;
          v182 = (char *)(s2 - v181);
          v183 = ((_DWORD)v181 + v170) & 0xFFFFFFF8;
          if ( v183 >= 8 )
          {
            v184 = v183 & 0xFFFFFFF8;
            v185 = 0;
            do
            {
              v186 = v185;
              v185 += 8;
              *(_QWORD *)(v180 + v186) = *(_QWORD *)&v182[v186];
            }
            while ( v185 < v184 );
          }
        }
        else if ( (v170 & 4) != 0 )
        {
          *((_DWORD *)v146 + 4) = *(_DWORD *)s2;
          *(_DWORD *)((char *)v145 + v170 - 4) = *(_DWORD *)&s2[v170 - 4];
        }
        else if ( (_DWORD)v147 != -1 )
        {
          *((_BYTE *)v146 + 16) = s2[0];
          if ( (v170 & 2) != 0 )
            *(_WORD *)((char *)v145 + v170 - 2) = *(_WORD *)&s2[v170 - 2];
        }
      }
      else
      {
        *v144 = v363;
        v144[2] = *(_QWORD *)s2;
      }
      v146[1] = v147;
      v363 = s2;
      v364 = 0;
      s2[0] = 0;
      v346.m128i_i8[0] = 0;
      v346.m128i_i64[1] = 0;
      v148 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v149 = *(_BYTE *)v148;
      v150 = *(_QWORD *)(v148 + 8);
      *(_BYTE *)v148 = 3;
      *(_QWORD *)(v148 + 8) = v146;
      v351.m128i_i8[0] = v149;
      v351.m128i_i64[1] = v150;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v363 != s2 )
        operator delete(v363, *(_QWORD *)s2 + 1LL);
      v151 = *v122;
      v152 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v153 = *(_BYTE *)v152;
      v154 = *(_QWORD *)(v152 + 8);
      *(_BYTE *)v152 = 5;
      v351.m128i_i8[0] = v153;
      *(_QWORD *)(v152 + 8) = v151;
      v351.m128i_i64[1] = v154;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v349 = 0;
      v350 = 0;
      v155 = (void (__fastcall *)(__int64, int *, __int64 *, __int64))get_hexdsp();
      v155(337, v122, &v349, 6);
      memset(&v351, 0, 24);
      tag_remove();
      if ( v351.m128i_i64[1] )
        v312 = (const char *)v351.m128i_i64[0];
      else
        v312 = _qstring<char>::c_str(void)const::nullstr;
      v347 = 0;
      v348 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v123 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(
        v123,
        v312,
        v124,
        v125,
        v126,
        v127,
        v304,
        (int)&v348,
        (__int64)v309);
      v128 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v129 = *(_BYTE *)v128;
      v130 = *(_QWORD *)(v128 + 8);
      *(_BYTE *)v128 = 3;
      *(_QWORD *)(v128 + 8) = v123;
      LOBYTE(v347) = v129;
      v131 = v346.m128i_i64[1];
      v348 = v130;
      v132 = v346.m128i_i8[0];
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( *((_BYTE *)v122 + 32) )
      {
        ida_mcp::tools::microcode::`anonymous namespace'::operand_to_json(
          (__int64)&v347,
          (__int64)(v122 + 8),
          v133,
          v134,
          v135,
          v136);
        v314 = v347;
        v166 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v167 = v348;
        v168 = *(_BYTE *)v166;
        *(_BYTE *)v166 = v314;
        v169 = *(_QWORD *)(v166 + 8);
        *(_QWORD *)(v166 + 8) = v167;
        v131 = v346.m128i_i64[1];
        v348 = v169;
        v132 = v346.m128i_i8[0];
        LOBYTE(v347) = v168;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      if ( *((_BYTE *)v122 + 48) )
      {
        ida_mcp::tools::microcode::`anonymous namespace'::operand_to_json(
          (__int64)&v347,
          (__int64)(v122 + 12),
          v133,
          v134,
          v135,
          v136);
        v346.m128i_i8[0] = v132;
        v346.m128i_i64[1] = v131;
        v313 = v347;
        v162 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v163 = v348;
        v164 = *(_BYTE *)v162;
        *(_BYTE *)v162 = v313;
        v165 = *(_QWORD *)(v162 + 8);
        *(_QWORD *)(v162 + 8) = v163;
        v131 = v346.m128i_i64[1];
        v348 = v165;
        v132 = v346.m128i_i8[0];
        LOBYTE(v347) = v164;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      if ( *((_BYTE *)v122 + 64) )
      {
        ida_mcp::tools::microcode::`anonymous namespace'::operand_to_json(
          (__int64)&v347,
          (__int64)(v122 + 16),
          v133,
          v134,
          v135,
          v136);
        v346.m128i_i8[0] = v132;
        v156 = v347;
        v346.m128i_i64[1] = v131;
        v157 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v158 = v348;
        v159 = *(_BYTE *)v157;
        *(_BYTE *)v157 = v156;
        v160 = *(_QWORD *)(v157 + 8);
        *(_QWORD *)(v157 + 8) = v158;
        v131 = v346.m128i_i64[1];
        v348 = v160;
        v132 = v346.m128i_i8[0];
        LOBYTE(v347) = v159;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      if ( v351.m128i_i64[0] )
      {
        v351.m128i_i64[1] = 0;
        qfree();
      }
      if ( v349 )
      {
        *(_QWORD *)&v350 = 0;
        qfree();
      }
      if ( v329 )
      {
        if ( v329 != 2 )
        {
          v21 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          switch ( v329 )
          {
            case 1:
              v22 = "object";
              break;
            case 2:
              v22 = (char *)"array";
              break;
            case 3:
              v22 = "string";
              break;
            case 4:
              v22 = "boolean";
              break;
            case 8:
              v22 = "binary";
              break;
            case 9:
              v22 = "discarded";
              break;
            default:
              v22 = "number";
              break;
          }
          v351.m128i_i64[0] = (__int64)v22;
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
            v21,
            308);
          std::string::_M_dispose();
          __cxa_throw(
            v21,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        v178 = *(_QWORD *)(v318 + 8);
        if ( v178 != *(_QWORD *)(v318 + 16) )
        {
          v346.m128i_i8[0] = v132;
          v179 = v178 + 16;
          v139 = 0;
          v346.m128i_i64[1] = v131;
          *(__m128i *)(v179 - 16) = _mm_load_si128(&v346);
          *(_QWORD *)(v318 + 8) = v179;
          v140 = 0;
          goto LABEL_117;
        }
        v138 = v318;
      }
      else
      {
        v137 = operator new(0x18u);
        *(_QWORD *)(v137 + 16) = 0;
        v138 = v137;
        *(_OWORD *)v137 = 0;
      }
      v346.m128i_i8[0] = v132;
      v346.m128i_i64[1] = v131;
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      v318 = v138;
      v139 = v346.m128i_i8[0];
      v140 = v346.m128i_i64[1];
LABEL_117:
      v346.m128i_i8[0] = v139;
      v346.m128i_i64[1] = v140;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v122 = *((int **)v122 + 1);
      ++v319;
      v329 = 2;
      if ( !v122 )
        goto LABEL_157;
    }
  }
LABEL_281:
  v334 = 0;
  v309 = &v351;
LABEL_163:
  v195 = v323.m128i_i64[1];
  memset(&v351, 0, 24);
  *(_BYTE *)v323.m128i_i64[1] = 0;
  *(_QWORD *)(v195 + 8) = 0;
  if ( get_func_name() <= 0 )
  {
    qsnprintf();
    v200 = s;
  }
  else
  {
    v200 = (char *)v351.m128i_i64[0];
    if ( !v351.m128i_i64[1] )
      v200 = _qstring<char>::c_str(void)const::nullstr;
  }
  std::string::basic_string<std::allocator<char>>(v325, v200, v196, v197, v198, v199, v304, v307, (__int64)v309);
  if ( v351.m128i_i64[0] )
  {
    v351.m128i_i64[1] = 0;
    qfree();
  }
  v347 = 0;
  v348 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v201 = (_QWORD *)operator new(0x20u);
  v202 = v201 + 2;
  v203 = v201;
  v204 = v326;
  v205 = v361;
  *v201 = v201 + 2;
  if ( v360 == v204 )
  {
    v289 = v205 + 1;
    if ( (unsigned int)(v205 + 1) >= 8 )
    {
      v203[2] = *(_QWORD *)v204;
      *(_QWORD *)((char *)v202 + v289 - 8) = *(_QWORD *)&v204[v289 - 8];
      v297 = (unsigned __int64)(v203 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v298 = (char *)v202 - v297;
      v299 = (char *)(v204 - v298);
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
      *((_DWORD *)v203 + 4) = *(_DWORD *)v204;
      *(_DWORD *)((char *)v202 + v289 - 4) = *(_DWORD *)&v204[v289 - 4];
    }
    else if ( (_DWORD)v205 != -1 )
    {
      *((_BYTE *)v203 + 16) = *v204;
      if ( (v289 & 2) != 0 )
        *(_WORD *)((char *)v202 + v289 - 2) = *(_WORD *)&v326[v289 - 2];
    }
  }
  else
  {
    *v201 = v360;
    v201[2] = v362[0];
  }
  v203[1] = v205;
  LOBYTE(v362[0]) = 0;
  v360 = v326;
  v361 = 0;
  v206 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v207 = *(_BYTE *)v206;
  v208 = *(_QWORD *)(v206 + 8);
  *(_BYTE *)v206 = 3;
  *(_QWORD *)(v206 + 8) = v203;
  LOBYTE(v347) = v207;
  v348 = v208;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  qsnprintf();
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v363,
    v369,
    v209,
    v210,
    v211,
    v212,
    v306,
    (int)&v348,
    v311);
  v349 = 0;
  *(_QWORD *)&v350 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v213 = (_QWORD *)operator new(0x20u);
  v214 = v213 + 2;
  v215 = v213;
  v216 = v364;
  *v213 = v213 + 2;
  if ( v363 == s2 )
  {
    v288 = v216 + 1;
    if ( (unsigned int)(v216 + 1) >= 8 )
    {
      v215[2] = *(_QWORD *)s2;
      *(_QWORD *)((char *)v214 + v288 - 8) = *(_QWORD *)&s2[v288 - 8];
      v290 = (unsigned __int64)(v215 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v291 = (char *)v214 - v290;
      v292 = (char *)(s2 - v291);
      v293 = ((_DWORD)v291 + v288) & 0xFFFFFFF8;
      if ( v293 >= 8 )
      {
        v294 = v293 & 0xFFFFFFF8;
        v295 = 0;
        do
        {
          v296 = v295;
          v295 += 8;
          *(_QWORD *)(v290 + v296) = *(_QWORD *)&v292[v296];
        }
        while ( v295 < v294 );
      }
    }
    else if ( (v288 & 4) != 0 )
    {
      *((_DWORD *)v215 + 4) = *(_DWORD *)s2;
      *(_DWORD *)((char *)v214 + v288 - 4) = *(_DWORD *)&s2[v288 - 4];
    }
    else if ( (_DWORD)v216 != -1 )
    {
      *((_BYTE *)v215 + 16) = s2[0];
      if ( (v288 & 2) != 0 )
        *(_WORD *)((char *)v214 + v288 - 2) = *(_WORD *)&s2[v288 - 2];
    }
  }
  else
  {
    *v213 = v363;
    v213[2] = *(_QWORD *)s2;
  }
  v363 = s2;
  v215[1] = v216;
  s2[0] = 0;
  v364 = 0;
  v217 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v218 = *(_BYTE *)v217;
  v219 = *(_QWORD *)(v217 + 8);
  *(_BYTE *)v217 = 3;
  *(_QWORD *)(v217 + 8) = v215;
  LOBYTE(v349) = v218;
  *(_QWORD *)&v350 = v219;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  v220 = *(int *)(v321 + 312);
  v221 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v222 = *(_BYTE *)v221;
  v223 = *(_QWORD *)(v221 + 8);
  *(_BYTE *)v221 = 5;
  v351.m128i_i8[0] = v222;
  *(_QWORD *)(v221 + 8) = v220;
  v351.m128i_i64[1] = v223;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v224 = *(int *)(v321 + 64);
  v225 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v226 = *(_BYTE *)v225;
  v227 = *(_QWORD *)(v225 + 8);
  *(_BYTE *)v225 = 5;
  v351.m128i_i8[0] = v226;
  *(_QWORD *)(v225 + 8) = v224;
  v351.m128i_i64[1] = v227;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v228 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v229 = *(_BYTE *)v228;
  v230 = *(_QWORD *)(v228 + 8);
  *(_BYTE *)v228 = 5;
  v351.m128i_i8[0] = v229;
  *(_QWORD *)(v228 + 8) = v319;
  v351.m128i_i64[1] = v230;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v351.m128i_i64[1] = v334;
  v231 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v232 = *(_BYTE *)v231;
  v233 = *(_QWORD *)(v231 + 8);
  *(_BYTE *)v231 = 4;
  v351.m128i_i8[0] = v232;
  *(_QWORD *)(v231 + 8) = v351.m128i_i64[1];
  v351.m128i_i64[1] = v233;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v351.m128i_i8[0] = 0;
  v336 = v333;
  v337 = v322;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  LOBYTE(v224) = v351.m128i_i8[0];
  v234 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v235 = v351.m128i_i64[1];
  v236 = *(_BYTE *)v234;
  *(_BYTE *)v234 = v224;
  v237 = *(_QWORD *)(v234 + 8);
  *(_QWORD *)(v234 + 8) = v235;
  v351.m128i_i64[1] = v237;
  v351.m128i_i8[0] = v236;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v238 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
  v238(391, v321);
  v239 = *(_QWORD *)(v321 + 728);
  if ( v239 )
  {
    v240 = *(_QWORD *)(v321 + 736);
    if ( v240 )
    {
      for ( j = 0; j != v240; ++j )
      {
        while ( 1 )
        {
          v242 = v239 + 40 * j;
          if ( !*(_QWORD *)(v242 + 16) )
            break;
          *(_QWORD *)(v242 + 24) = 0;
          ++j;
          qfree();
          v239 = *(_QWORD *)(v321 + 728);
          if ( j == v240 )
            goto LABEL_177;
        }
      }
    }
LABEL_177:
    *(_QWORD *)(v321 + 736) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v321 + 496) )
  {
    *(_QWORD *)(v321 + 504) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v321 + 456) )
  {
    *(_QWORD *)(v321 + 464) = 0;
    qfree();
  }
  v243 = *(_QWORD *)(v321 + 432);
  if ( v243 )
  {
    v244 = *(_QWORD *)(v321 + 440);
    if ( v244 )
    {
      v245 = 0;
      v246 = 0;
      while ( 1 )
      {
        v247 = (_QWORD *)(v243 + v245);
        clear_tinfo_t();
        if ( *(_QWORD *)(v243 + v245 + 56) )
        {
          v247[8] = 0;
          qfree();
        }
        if ( v247[4] )
        {
          v247[5] = 0;
          ++v246;
          qfree();
          cleanup_argloc();
          v243 = *(_QWORD *)(v321 + 432);
          if ( v246 == v244 )
            break;
        }
        else
        {
          ++v246;
          cleanup_argloc();
          v243 = *(_QWORD *)(v321 + 432);
          if ( v244 == v246 )
            break;
        }
        v245 += 104;
      }
    }
    *(_QWORD *)(v321 + 440) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v321 + 408) )
  {
    *(_QWORD *)(v321 + 416) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v321 + 376) )
  {
    *(_QWORD *)(v321 + 384) = 0;
    qfree();
  }
  qfree();
  if ( *(_QWORD *)(v321 + 336) )
  {
    *(_QWORD *)(v321 + 344) = 0;
    qfree();
  }
  clear_tinfo_t();
  qfree();
  if ( *(_QWORD *)(v321 + 272) )
  {
    *(_QWORD *)(v321 + 280) = 0;
    qfree();
  }
  qfree();
  if ( *(_QWORD *)(v321 + 232) )
  {
    *(_QWORD *)(v321 + 240) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v321 + 208) )
  {
    *(_QWORD *)(v321 + 216) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v321 + 184) )
  {
    *(_QWORD *)(v321 + 192) = 0;
    qfree();
  }
  if ( *(_QWORD *)(v321 + 16) )
  {
    *(_QWORD *)(v321 + 24) = 0;
    qfree();
  }
  v248 = (void (__fastcall *)(__int64, __int64))get_hexdsp();
  v248(130, v321);
  if ( v352.m128i_i64[1] )
  {
    *(_QWORD *)&v353 = 0;
    qfree();
  }
  if ( v355 )
  {
    *(_QWORD *)&v356 = 0;
    qfree();
  }
  std::string::_M_dispose();
  return v323.m128i_i64[1];
}

