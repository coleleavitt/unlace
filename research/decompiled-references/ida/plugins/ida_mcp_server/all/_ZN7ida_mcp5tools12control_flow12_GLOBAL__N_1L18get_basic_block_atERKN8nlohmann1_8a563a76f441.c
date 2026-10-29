__m128i *__fastcall ida_mcp::tools::control_flow::`anonymous namespace'::get_basic_block_at(__m128i *a1)
{
  std::runtime_error *v1; // rbx
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  std::runtime_error *v3; // rbx
  char *v4; // rax
  char *v5; // rbp
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // bp
  unsigned __int64 v10; // r14
  __int64 *func; // rax
  __int64 *v12; // rbp
  __int64 v13; // xmm0_8
  __int64 v14; // r12
  _BYTE *v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rax
  char v21; // si
  __int64 v22; // rdx
  size_t v23; // rax
  unsigned int v24; // r14d
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // r14
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  char v31; // si
  __int64 v32; // rdx
  _QWORD *v33; // r13
  __int64 v34; // rax
  char v35; // si
  __int64 v36; // rdx
  __int8 v37; // cl
  size_t v38; // rax
  unsigned int v39; // r15d
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  _QWORD *v43; // r14
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  __int8 v46; // cl
  char v47; // si
  __int64 v48; // rdx
  _QWORD *v49; // rax
  _QWORD *v50; // rdx
  _QWORD *v51; // r14
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  char v54; // si
  __int64 v55; // rdx
  __int64 v56; // r13
  __int64 v57; // rax
  char v58; // si
  __int64 v59; // rdx
  __int8 v60; // cl
  _DWORD *v61; // rdx
  unsigned __int64 v62; // rcx
  char *v63; // rdx
  char *v64; // r15
  unsigned int v65; // eax
  unsigned int v66; // edx
  __int64 v67; // rsi
  __int64 *v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  _QWORD *v77; // rax
  unsigned __int64 v78; // r8
  __int64 v79; // r9
  _QWORD *v80; // rdx
  char *v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdi
  __int64 v87; // r12
  __int64 v88; // rbp
  _QWORD *v89; // rbx
  _DWORD *v91; // rdx
  unsigned __int64 v92; // rcx
  char *v93; // rdx
  char *v94; // r14
  unsigned int v95; // eax
  unsigned int v96; // edx
  __int64 v97; // rsi
  const char *v98; // r14
  __int64 *v99; // r13
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  __int8 v105; // cl
  char v106; // si
  __int64 v107; // rdx
  __int64 v108; // rax
  __int8 v109; // cl
  char v110; // si
  __int64 v111; // rdx
  __int64 v112; // rax
  __int8 v113; // cl
  char v114; // si
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  __int64 v120; // r14
  _QWORD *v121; // rdx
  _QWORD *v122; // rax
  _QWORD *v123; // rdx
  _QWORD *v124; // r12
  unsigned __int64 v125; // rcx
  __int64 v126; // rax
  char v127; // si
  __int64 v128; // rdx
  size_t v129; // rax
  unsigned int v130; // r13d
  _QWORD *v131; // rdx
  _QWORD *v132; // rax
  _QWORD *v133; // rdx
  _QWORD *v134; // r12
  unsigned __int64 v135; // rcx
  __int64 v136; // rax
  char v137; // si
  __int64 v138; // rdx
  __int64 v139; // rax
  __int64 v140; // r12
  __int64 v141; // rax
  char v142; // si
  __int64 v143; // rdx
  char *v144; // r12
  size_t v145; // rax
  unsigned int v146; // r12d
  _QWORD *v147; // rax
  _QWORD *v148; // rax
  unsigned int v149; // eax
  unsigned int v150; // eax
  char *v151; // rdi
  unsigned __int64 v152; // rdx
  char *v153; // rax
  unsigned int v154; // r12d
  char *v155; // rsi
  unsigned int v156; // r12d
  unsigned int v157; // eax
  __int64 v158; // rcx
  unsigned __int64 v159; // rdx
  char *v160; // rax
  char *v161; // r12
  unsigned int v162; // r13d
  unsigned int v163; // r13d
  unsigned int v164; // eax
  __int64 v165; // rcx
  char v166; // r12
  __int64 v167; // rax
  __int8 v168; // cl
  char v169; // si
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rax
  __int64 v175; // r14
  _QWORD *v176; // rdx
  _QWORD *v177; // rax
  _QWORD *v178; // rdx
  _QWORD *v179; // r12
  unsigned __int64 v180; // rcx
  __int64 v181; // rax
  char v182; // si
  __int64 v183; // rdx
  size_t v184; // rax
  unsigned int v185; // r13d
  _QWORD *v186; // rdx
  _QWORD *v187; // rax
  _QWORD *v188; // rdx
  _QWORD *v189; // r12
  unsigned __int64 v190; // rcx
  __int64 v191; // rax
  char v192; // si
  __int64 v193; // rdx
  __int64 v194; // rax
  __int64 v195; // r12
  __int64 v196; // rax
  char v197; // si
  __int64 v198; // rdx
  char *v199; // r12
  size_t v200; // rax
  unsigned int v201; // r12d
  _QWORD *v202; // rax
  _QWORD *v203; // rax
  unsigned int v204; // eax
  unsigned int v205; // eax
  char *v206; // rsi
  unsigned __int64 v207; // rdx
  char *v208; // rax
  char *v209; // rsi
  unsigned int v210; // r12d
  unsigned int v211; // r12d
  unsigned int v212; // eax
  __int64 v213; // rcx
  unsigned __int64 v214; // rdx
  char *v215; // rax
  char *v216; // r12
  unsigned int v217; // r13d
  unsigned int v218; // r13d
  unsigned int v219; // eax
  __int64 v220; // rcx
  char v221; // bl
  __int64 v222; // rax
  _BOOL8 v223; // rcx
  __int64 v224; // rdx
  char v225; // si
  unsigned __int64 v226; // rsi
  char *v227; // rdx
  char *v228; // r8
  unsigned int v229; // eax
  unsigned int v230; // eax
  unsigned int v231; // edx
  __int64 v232; // rdi
  unsigned __int64 v233; // rsi
  char *v234; // rdx
  char *v235; // r8
  unsigned int v236; // eax
  unsigned int v237; // eax
  unsigned int v238; // edx
  __int64 v239; // rdi
  unsigned __int64 v240; // rsi
  char *v241; // rdx
  char *v242; // r8
  unsigned int v243; // eax
  unsigned int v244; // eax
  unsigned int v245; // edx
  __int64 v246; // rdi
  unsigned __int64 v247; // rsi
  char *v248; // rdx
  char *v249; // r8
  unsigned int v250; // eax
  unsigned int v251; // eax
  unsigned int v252; // edx
  __int64 v253; // rdi
  unsigned int v254; // esi
  unsigned int v255; // esi
  unsigned int v256; // esi
  char *v257; // rcx
  char *v258; // rcx
  unsigned int v259; // edi
  unsigned __int64 v260; // rdi
  char *v261; // r8
  unsigned int v262; // eax
  unsigned int v263; // edx
  __int64 v264; // rsi
  unsigned __int64 v265; // rdi
  char *v266; // r8
  unsigned int v267; // eax
  unsigned int v268; // edx
  __int64 v269; // rsi
  unsigned __int64 v270; // rdi
  char *v271; // r8
  unsigned int v272; // eax
  unsigned int v273; // edx
  __int64 v274; // rsi
  int v275; // edx
  unsigned int v276; // edi
  unsigned int v277; // edi
  unsigned int v278; // edx
  __m128i v279; // [rsp+2A0h] [rbp-2F8h] BYREF
  char *v280; // [rsp+2B0h] [rbp-2E8h]
  __int64 *v281; // [rsp+2B8h] [rbp-2E0h]
  char *v282; // [rsp+2C0h] [rbp-2D8h]
  void **v283; // [rsp+2C8h] [rbp-2D0h]
  char *v284; // [rsp+2D0h] [rbp-2C8h]
  __int64 *v285; // [rsp+2D8h] [rbp-2C0h]
  __m128i *v286; // [rsp+2E0h] [rbp-2B8h]
  __int64 v287; // [rsp+2E8h] [rbp-2B0h]
  size_t *v288; // [rsp+2F0h] [rbp-2A8h]
  void (__fastcall ***v289)(qflow_chart_t *__hidden); // [rsp+2F8h] [rbp-2A0h]
  __m128i *v290; // [rsp+300h] [rbp-298h]
  int v291; // [rsp+308h] [rbp-290h]
  char v292; // [rsp+30Dh] [rbp-28Bh]
  __int8 v293; // [rsp+30Eh] [rbp-28Ah]
  char v294; // [rsp+30Fh] [rbp-289h]
  __int64 v295; // [rsp+310h] [rbp-288h]
  __int64 v296; // [rsp+318h] [rbp-280h]
  __m128i v297; // [rsp+320h] [rbp-278h] BYREF
  __int64 v298; // [rsp+330h] [rbp-268h] BYREF
  __int64 v299; // [rsp+340h] [rbp-258h] BYREF
  __int64 v300; // [rsp+350h] [rbp-248h] BYREF
  __int64 v301; // [rsp+358h] [rbp-240h] BYREF
  size_t v302; // [rsp+360h] [rbp-238h] BYREF
  _BOOL8 v303; // [rsp+368h] [rbp-230h]
  void *v304; // [rsp+370h] [rbp-228h]
  __int64 v305; // [rsp+378h] [rbp-220h]
  _QWORD v306[2]; // [rsp+380h] [rbp-218h] BYREF
  char v307[8]; // [rsp+390h] [rbp-208h] BYREF
  __int128 v308; // [rsp+398h] [rbp-200h]
  __int64 v309; // [rsp+3A8h] [rbp-1F0h]
  __int64 v310; // [rsp+3B0h] [rbp-1E8h]
  __int64 v311; // [rsp+3B8h] [rbp-1E0h]
  char v312[8]; // [rsp+3C0h] [rbp-1D8h] BYREF
  __int128 v313; // [rsp+3C8h] [rbp-1D0h]
  char v314; // [rsp+3D8h] [rbp-1C0h]
  __int128 v315; // [rsp+3E0h] [rbp-1B8h]
  void *v316; // [rsp+3F0h] [rbp-1A8h] BYREF
  size_t v317; // [rsp+3F8h] [rbp-1A0h]
  size_t v318; // [rsp+400h] [rbp-198h] BYREF
  _QWORD v319[3]; // [rsp+408h] [rbp-190h] BYREF
  void (__fastcall **v320)(qflow_chart_t *__hidden); // [rsp+420h] [rbp-178h] BYREF
  char v321; // [rsp+428h] [rbp-170h]
  _BYTE *v322; // [rsp+430h] [rbp-168h]
  __int128 v323; // [rsp+438h] [rbp-160h]
  __m128i v324; // [rsp+448h] [rbp-150h]
  __int64 *v325; // [rsp+458h] [rbp-140h]
  int v326; // [rsp+460h] [rbp-138h]
  __int64 v327; // [rsp+468h] [rbp-130h]
  __int128 v328; // [rsp+470h] [rbp-128h]
  int v329; // [rsp+480h] [rbp-118h]
  _BYTE v330[8]; // [rsp+488h] [rbp-110h]
  char s[24]; // [rsp+490h] [rbp-108h] BYREF
  _BYTE v332[8]; // [rsp+4A8h] [rbp-F0h]
  char v333[32]; // [rsp+4B0h] [rbp-E8h] BYREF
  _BYTE v334[32]; // [rsp+4D0h] [rbp-C8h] BYREF
  char v335[32]; // [rsp+4F0h] [rbp-A8h] BYREF
  _BYTE v336[32]; // [rsp+510h] [rbp-88h] BYREF
  char v337[40]; // [rsp+530h] [rbp-68h] BYREF
  unsigned __int64 v338; // [rsp+558h] [rbp-40h]

  v290 = a1;
  v338 = __readfsqword(0x28u);
  LOBYTE(v318) = 0;
  v5 = (char *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v316 = &v318;
  v283 = &v316;
  v6 = *v5;
  v317 = 0;
  v294 = v6;
  if ( v6 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v5 )
    {
      case 0:
        v4 = "null";
        break;
      case 1:
        v4 = "object";
        break;
      case 2:
        v4 = (char *)"array";
        break;
      case 3:
        v4 = "string";
        break;
      case 4:
        v4 = "boolean";
        break;
      case 8:
        v4 = "binary";
        break;
      case 9:
        v4 = "discarded";
        break;
      default:
        v4 = "number";
        break;
    }
    v302 = (size_t)v4;
    v289 = &v320;
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
  v7 = ida_mcp::parse_ea(v316, v317);
  v296 = v8;
  v9 = v8;
  v295 = v7;
  if ( v316 != &v318 )
    operator delete(v316, v318 + 1);
  if ( !v9 )
  {
    v1 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v1, "Invalid address format");
    __cxa_throw(
      v1,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v10 = v295;
  func = (__int64 *)get_func();
  v12 = func;
  if ( !func )
  {
    v3 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v3, "No function at address");
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v13 = *func;
  v14 = func[1];
  v321 = 0;
  v279.m128i_i64[0] = v13;
  v320 = off_445398;
  v322 = nullptr;
  v323 = 0;
  v15 = (_BYTE *)qvector_reserve();
  v16 = _mm_loadl_epi64(&v279);
  v322 = v15;
  *(_QWORD *)&v323 = 1;
  *v15 = 0;
  v324 = _mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)v14);
  v325 = v12;
  v326 = 0;
  v327 = 0;
  v329 = 0;
  v289 = &v320;
  v328 = 0;
  create_qflow_chart();
  if ( (int)v328 <= 0 )
  {
LABEL_39:
    v307[0] = 0;
    *(_QWORD *)&v308 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v307[0] = 3;
    v68 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v68,
      "found",
      v69,
      v70,
      v71,
      v72,
      v279.m128i_i32[0],
      v279.m128i_i32[2],
      (__int64)v280);
    v309 = 4;
    v310 = 0;
    v311 = 0;
    v308 = (unsigned __int64)v68;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v283,
      (__int64)v307,
      2,
      v73,
      v74,
      v75,
      v279.m128i_i32[0],
      v279.m128i_i64[1],
      (int)v280,
      (int)v281,
      (int)v282,
      (int)v283,
      (__int64)v284,
      (int)v285,
      (int)v286,
      v287,
      (int)v288,
      (char)v289,
      (__int64)v290,
      v291,
      v295);
    v318 = 0;
    v312[0] = 0;
    *(_QWORD *)&v313 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v312[0] = 3;
    v76 = operator new(0x20u);
    strcpy((char *)(v76 + 16), "address");
    *(_QWORD *)v76 = v76 + 16;
    *(_QWORD *)(v76 + 8) = 7;
    v313 = (unsigned __int64)v76;
    ida_mcp::format_ea[abi:cxx11]();
    v314 = 0;
    *(_QWORD *)&v315 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v314 = 3;
    v77 = (_QWORD *)operator new(0x20u);
    v80 = v304;
    v81 = (char *)(v77 + 2);
    v82 = v305;
    *v77 = v77 + 2;
    if ( v80 == v306 )
    {
      v259 = v82 + 1;
      if ( (unsigned int)(v82 + 1) >= 8 )
      {
        v77[2] = v306[0];
        *(_QWORD *)&v81[v259 - 8] = *(_QWORD *)((char *)&v306[-1] + v259);
        v78 = (unsigned __int64)(v77 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v275 = (_DWORD)v81 - v78;
        v81 = (char *)((char *)v306 - &v81[-v78]);
        v276 = (v275 + v259) & 0xFFFFFFF8;
        if ( v276 >= 8 )
        {
          v277 = v276 & 0xFFFFFFF8;
          v278 = 0;
          do
          {
            v79 = v278;
            v278 += 8;
            *(_QWORD *)(v78 + v79) = *(_QWORD *)&v81[v79];
          }
          while ( v278 < v277 );
        }
      }
      else if ( (v259 & 4) != 0 )
      {
        *((_DWORD *)v77 + 4) = v306[0];
        *(_DWORD *)&v81[v259 - 4] = *(_DWORD *)((char *)&v305 + v259 + 4);
      }
      else if ( (_DWORD)v82 != -1 )
      {
        *((_BYTE *)v77 + 16) = v306[0];
        if ( (v259 & 2) != 0 )
          *(_WORD *)&v81[v259 - 2] = *(_WORD *)((char *)&v305 + v259 + 6);
      }
    }
    else
    {
      *v77 = v80;
      v77[2] = v306[0];
    }
    v77[1] = v82;
    v304 = v306;
    v305 = 0;
    LOBYTE(v306[0]) = 0;
    v315 = (unsigned __int64)v77;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v319,
      (__int64)v312,
      2,
      (__int64)v81,
      v78,
      v79,
      v279.m128i_i32[0],
      v279.m128i_i64[1],
      (int)v280,
      (int)v281,
      (int)v282,
      (int)v283,
      (__int64)v284,
      (int)v285,
      (int)v286,
      v287,
      (int)v288,
      (char)v289,
      (__int64)v290,
      v291,
      v295);
    v319[2] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v290,
      (__int64)v283,
      2,
      v83,
      v84,
      v85,
      v279.m128i_i32[0],
      v279.m128i_i64[1],
      (int)v280,
      (int)v281,
      (int)v282,
      (int)v283,
      (__int64)v284,
      (int)v285,
      (int)v286,
      v287,
      (int)v288,
      (char)v289,
      (__int64)v290,
      v291,
      v295);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v304 != v306 )
      operator delete(v304, v306[0] + 1LL);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    goto LABEL_44;
  }
  v17 = v327;
  v18 = 0;
  v19 = 0;
  while ( v10 < *(_QWORD *)(v327 + v18) || v10 >= *(_QWORD *)(v327 + v18 + 8) )
  {
    v18 += 64;
    if ( (_DWORD)v328 - 1 == v19 )
      goto LABEL_39;
    ++v19;
  }
  v279.m128i_i64[1] = v18;
  v279.m128i_i32[0] = fc_calc_block_type();
  v303 = 1;
  v297 = 0u;
  v286 = &v297;
  v20 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v21 = *(_BYTE *)v20;
  v22 = *(_QWORD *)(v20 + 8);
  *(_BYTE *)v20 = 4;
  LOBYTE(v302) = v21;
  v293 = v297.m128i_i8[0];
  v287 = v297.m128i_i64[1];
  *(_QWORD *)(v20 + 8) = v303;
  v303 = v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  qsnprintf();
  v316 = &v318;
  v23 = strlen(s);
  v302 = v23;
  v24 = v23;
  if ( v23 > 0xF )
  {
    v316 = (void *)std::string::_M_create();
    v61 = v316;
    v318 = v302;
  }
  else
  {
    if ( v23 == 1 )
    {
      LOBYTE(v318) = s[0];
LABEL_13:
      v25 = &v318;
      goto LABEL_14;
    }
    if ( !v23 )
      goto LABEL_13;
    v61 = &v318;
  }
  if ( v24 < 8 )
  {
    if ( (v24 & 4) != 0 )
    {
      *v61 = *(_DWORD *)s;
      *(_DWORD *)((char *)v61 + v24 - 4) = *(_DWORD *)&v330[v24 + 4];
    }
    else if ( v24 )
    {
      *(_BYTE *)v61 = s[0];
      if ( (v24 & 2) != 0 )
        *(_WORD *)((char *)v61 + v24 - 2) = *(_WORD *)&v330[v24 + 6];
    }
  }
  else
  {
    *(_QWORD *)v61 = *(_QWORD *)s;
    *(_QWORD *)((char *)v61 + v24 - 8) = *(_QWORD *)&v330[v24];
    v62 = (unsigned __int64)(v61 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    v63 = (char *)v61 - v62;
    v64 = (char *)(s - v63);
    if ( ((v24 + (_DWORD)v63) & 0xFFFFFFF8) >= 8 )
    {
      v65 = (v24 + (_DWORD)v63) & 0xFFFFFFF8;
      v66 = 0;
      do
      {
        v67 = v66;
        v66 += 8;
        *(_QWORD *)(v62 + v67) = *(_QWORD *)&v64[v67];
      }
      while ( v66 < v65 );
    }
  }
  v23 = v302;
  v25 = v316;
LABEL_14:
  v317 = v23;
  *((_BYTE *)v25 + v23) = 0;
  v302 = 0;
  v303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v26 = (_QWORD *)operator new(0x20u);
  v27 = v26 + 2;
  v28 = v26;
  v29 = v317;
  *v26 = v26 + 2;
  if ( v316 == &v318 )
  {
    v256 = v29 + 1;
    if ( (unsigned int)(v29 + 1) >= 8 )
    {
      v26[2] = v318;
      *(_QWORD *)((char *)v27 + v256 - 8) = *(size_t *)((char *)&v317 + v256);
      v260 = (unsigned __int64)(v26 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v261 = (char *)((char *)&v318 - ((char *)v27 - v260));
      if ( ((v256 + (_DWORD)v27 - (_DWORD)v260) & 0xFFFFFFF8) >= 8 )
      {
        v262 = (v256 + (_DWORD)v27 - v260) & 0xFFFFFFF8;
        v263 = 0;
        do
        {
          v264 = v263;
          v263 += 8;
          *(_QWORD *)(v260 + v264) = *(_QWORD *)&v261[v264];
        }
        while ( v263 < v262 );
      }
    }
    else if ( (v256 & 4) != 0 )
    {
      *((_DWORD *)v26 + 4) = v318;
      *(_DWORD *)((char *)v27 + v256 - 4) = *(_DWORD *)((char *)&v317 + v256 + 4);
    }
    else if ( (_DWORD)v29 != -1 )
    {
      *((_BYTE *)v26 + 16) = v318;
      if ( (v256 & 2) != 0 )
        *(_WORD *)((char *)v27 + v256 - 2) = *(_WORD *)((char *)&v317 + v256 + 6);
    }
  }
  else
  {
    *v26 = v316;
    v26[2] = v318;
  }
  v28[1] = v29;
  v316 = &v318;
  v317 = 0;
  LOBYTE(v318) = 0;
  v30 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v31 = *(_BYTE *)v30;
  v32 = *(_QWORD *)(v30 + 8);
  *(_BYTE *)v30 = 3;
  *(_QWORD *)(v30 + 8) = v28;
  LOBYTE(v302) = v31;
  v303 = v32;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v316 != &v318 )
    operator delete(v316, v318 + 1);
  v33 = (_QWORD *)(v279.m128i_i64[1] + v17);
  v34 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v35 = *(_BYTE *)v34;
  v36 = *(_QWORD *)(v34 + 8);
  *(_BYTE *)v34 = 5;
  v37 = v297.m128i_i8[0];
  LOBYTE(v302) = v35;
  *(_QWORD *)(v34 + 8) = (int)v19;
  v293 = v37;
  v303 = v36;
  v287 = v297.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  qsnprintf();
  v316 = &v318;
  v38 = strlen(v333);
  v302 = v38;
  v39 = v38;
  if ( v38 > 0xF )
  {
    v316 = (void *)std::string::_M_create();
    v91 = v316;
    v318 = v302;
    goto LABEL_62;
  }
  if ( v38 != 1 )
  {
    if ( !v38 )
      goto LABEL_21;
    v91 = &v318;
LABEL_62:
    if ( v39 < 8 )
    {
      if ( (v39 & 4) != 0 )
      {
        *v91 = *(_DWORD *)v333;
        *(_DWORD *)((char *)v91 + v39 - 4) = *(_DWORD *)&v332[v39 + 4];
      }
      else if ( v39 )
      {
        *(_BYTE *)v91 = v333[0];
        if ( (v39 & 2) != 0 )
          *(_WORD *)((char *)v91 + v39 - 2) = *(_WORD *)&v332[v39 + 6];
      }
    }
    else
    {
      *(_QWORD *)v91 = *(_QWORD *)v333;
      *(_QWORD *)((char *)v91 + v39 - 8) = *(_QWORD *)&v332[v39];
      v92 = (unsigned __int64)(v91 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v93 = (char *)v91 - v92;
      v94 = (char *)(v333 - v93);
      if ( ((v39 + (_DWORD)v93) & 0xFFFFFFF8) >= 8 )
      {
        v95 = (v39 + (_DWORD)v93) & 0xFFFFFFF8;
        v96 = 0;
        do
        {
          v97 = v96;
          v96 += 8;
          *(_QWORD *)(v92 + v97) = *(_QWORD *)&v94[v97];
        }
        while ( v96 < v95 );
      }
    }
    v38 = v302;
    v40 = v316;
    goto LABEL_22;
  }
  LOBYTE(v318) = v333[0];
LABEL_21:
  v40 = &v318;
LABEL_22:
  v317 = v38;
  *((_BYTE *)v40 + v38) = 0;
  v302 = 0;
  v303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v41 = (_QWORD *)operator new(0x20u);
  v42 = v41 + 2;
  v43 = v41;
  v44 = v317;
  *v41 = v41 + 2;
  if ( v316 == &v318 )
  {
    v255 = v44 + 1;
    if ( (unsigned int)(v44 + 1) >= 8 )
    {
      v41[2] = v318;
      *(_QWORD *)((char *)v42 + v255 - 8) = *(size_t *)((char *)&v317 + v255);
      v270 = (unsigned __int64)(v41 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v271 = (char *)((char *)&v318 - ((char *)v42 - v270));
      if ( ((v255 + (_DWORD)v42 - (_DWORD)v270) & 0xFFFFFFF8) >= 8 )
      {
        v272 = (v255 + (_DWORD)v42 - v270) & 0xFFFFFFF8;
        v273 = 0;
        do
        {
          v274 = v273;
          v273 += 8;
          *(_QWORD *)(v270 + v274) = *(_QWORD *)&v271[v274];
        }
        while ( v273 < v272 );
      }
    }
    else if ( (v255 & 4) != 0 )
    {
      *((_DWORD *)v41 + 4) = v318;
      *(_DWORD *)((char *)v42 + v255 - 4) = *(_DWORD *)((char *)&v317 + v255 + 4);
    }
    else if ( (_DWORD)v44 != -1 )
    {
      *((_BYTE *)v41 + 16) = v318;
      if ( (v255 & 2) != 0 )
        *(_WORD *)((char *)v42 + v255 - 2) = *(_WORD *)((char *)&v317 + v255 + 6);
    }
  }
  else
  {
    *v41 = v316;
    v41[2] = v318;
  }
  v43[1] = v44;
  v316 = &v318;
  v317 = 0;
  LOBYTE(v318) = 0;
  v45 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v46 = v297.m128i_i8[0];
  v47 = *(_BYTE *)v45;
  *(_BYTE *)v45 = 3;
  v48 = *(_QWORD *)(v45 + 8);
  *(_QWORD *)(v45 + 8) = v43;
  v293 = v46;
  LOBYTE(v302) = v47;
  v287 = v297.m128i_i64[1];
  v303 = v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v316 != &v318 )
    operator delete(v316, v318 + 1);
  ida_mcp::format_ea[abi:cxx11]();
  v302 = 0;
  v303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v49 = (_QWORD *)operator new(0x20u);
  v50 = v49 + 2;
  v51 = v49;
  v52 = v317;
  *v49 = v49 + 2;
  if ( v316 == &v318 )
  {
    v254 = v52 + 1;
    if ( (unsigned int)(v52 + 1) >= 8 )
    {
      v49[2] = v318;
      *(_QWORD *)((char *)v50 + v254 - 8) = *(size_t *)((char *)&v317 + v254);
      v265 = (unsigned __int64)(v49 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v266 = (char *)((char *)&v318 - ((char *)v50 - v265));
      if ( ((v254 + (_DWORD)v50 - (_DWORD)v265) & 0xFFFFFFF8) >= 8 )
      {
        v267 = (v254 + (_DWORD)v50 - v265) & 0xFFFFFFF8;
        v268 = 0;
        do
        {
          v269 = v268;
          v268 += 8;
          *(_QWORD *)(v265 + v269) = *(_QWORD *)&v266[v269];
        }
        while ( v268 < v267 );
      }
    }
    else if ( (v254 & 4) != 0 )
    {
      *((_DWORD *)v49 + 4) = v318;
      *(_DWORD *)((char *)v50 + v254 - 4) = *(_DWORD *)((char *)&v317 + v254 + 4);
    }
    else if ( (_DWORD)v52 != -1 )
    {
      *((_BYTE *)v49 + 16) = v318;
      if ( (v254 & 2) != 0 )
        *(_WORD *)((char *)v50 + v254 - 2) = *(_WORD *)((char *)&v317 + v254 + 6);
    }
  }
  else
  {
    *v49 = v316;
    v49[2] = v318;
  }
  v51[1] = v52;
  v316 = &v318;
  v317 = 0;
  LOBYTE(v318) = 0;
  v53 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v54 = *(_BYTE *)v53;
  v55 = *(_QWORD *)(v53 + 8);
  *(_BYTE *)v53 = 3;
  *(_QWORD *)(v53 + 8) = v51;
  LOBYTE(v302) = v54;
  v303 = v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v316 != &v318 )
    operator delete(v316, v318 + 1);
  v56 = v33[1] - *v33;
  v57 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v58 = *(_BYTE *)v57;
  v59 = *(_QWORD *)(v57 + 8);
  *(_BYTE *)v57 = 6;
  v60 = v297.m128i_i8[0];
  LOBYTE(v302) = v58;
  *(_QWORD *)(v57 + 8) = v56;
  v293 = v60;
  v303 = v59;
  v287 = v297.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  switch ( v279.m128i_i32[0] )
  {
    case 0:
      v98 = "normal";
      break;
    case 1:
      v98 = "indirect_jump";
      break;
    case 2:
      v98 = "return";
      break;
    case 3:
      v98 = "conditional_return";
      break;
    case 4:
      v98 = "noreturn";
      break;
    case 5:
      v98 = "external_noreturn";
      break;
    case 6:
      v98 = "external";
      break;
    case 7:
      v98 = "error";
      break;
    default:
      v98 = "unknown";
      break;
  }
  v302 = 0;
  v303 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v99 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v99,
    v98,
    v100,
    v101,
    v102,
    v103,
    v279.m128i_i32[0],
    v279.m128i_i32[2],
    (__int64)v280);
  v104 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v105 = v297.m128i_i8[0];
  v106 = *(_BYTE *)v104;
  *(_BYTE *)v104 = 3;
  v107 = *(_QWORD *)(v104 + 8);
  *(_QWORD *)(v104 + 8) = v99;
  v293 = v105;
  LOBYTE(v302) = v106;
  v287 = v297.m128i_i64[1];
  v303 = v107;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v303 = (unsigned int)fc_calc_block_type() - 2 <= 1;
  v108 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v109 = v297.m128i_i8[0];
  v110 = *(_BYTE *)v108;
  *(_BYTE *)v108 = 4;
  v111 = *(_QWORD *)(v108 + 8);
  v293 = v109;
  LOBYTE(v302) = v110;
  v287 = v297.m128i_i64[1];
  *(_QWORD *)(v108 + 8) = v303;
  v303 = v111;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v303 = (unsigned int)fc_calc_block_type() - 4 <= 1;
  v112 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v113 = v297.m128i_i8[0];
  v114 = *(_BYTE *)v112;
  *(_BYTE *)v112 = 4;
  v115 = *(_QWORD *)(v112 + 8);
  v293 = v113;
  LOBYTE(v302) = v114;
  v287 = v297.m128i_i64[1];
  *(_QWORD *)(v112 + 8) = v303;
  v303 = v115;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v298) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v298,
    0,
    0,
    v116,
    v117,
    v118,
    v279.m128i_i32[0],
    v279.m128i_i32[2],
    (int)v280,
    (int)v281,
    (int)v282,
    (int)v283,
    (__int64)&v298);
  v292 = v298;
  v119 = v327 + v279.m128i_i64[1];
  if ( *(int *)(v327 + v279.m128i_i64[1] + 24) > 0 )
  {
    v120 = 0;
    v282 = "id";
    v279.m128i_i64[0] = (__int64)&v300;
    v281 = &v301;
    v280 = v334;
    do
    {
      v139 = *(_QWORD *)(v119 + 16);
      v300 = 0;
      v301 = 0;
      v140 = *(int *)(v139 + 4 * v120);
      v141 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v142 = *(_BYTE *)v141;
      v143 = *(_QWORD *)(v141 + 8);
      *(_BYTE *)v141 = 5;
      LOBYTE(v302) = v142;
      *(_QWORD *)(v141 + 8) = v140;
      v303 = v143;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v144 = v280;
      qsnprintf();
      v316 = &v318;
      v145 = strlen(v144);
      v302 = v145;
      v146 = v145;
      if ( v145 > 0xF )
      {
        v147 = (_QWORD *)std::string::_M_create();
        v316 = v147;
        v318 = v302;
      }
      else
      {
        if ( v145 == 1 )
        {
          LOBYTE(v318) = v334[0];
LABEL_79:
          v121 = &v318;
          goto LABEL_80;
        }
        if ( !v145 )
          goto LABEL_79;
        v147 = &v318;
      }
      if ( v146 >= 8 )
      {
        v151 = v280;
        *v147 = *(_QWORD *)v280;
        *(_QWORD *)((char *)v147 + v146 - 8) = *(_QWORD *)&v151[v146 - 8];
        v152 = (unsigned __int64)(v147 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v153 = (char *)v147 - v152;
        v154 = ((_DWORD)v153 + v146) & 0xFFFFFFF8;
        v155 = (char *)(v151 - v153);
        if ( v154 >= 8 )
        {
          v156 = v154 & 0xFFFFFFF8;
          v157 = 0;
          do
          {
            v158 = v157;
            v157 += 8;
            *(_QWORD *)(v152 + v158) = *(_QWORD *)&v155[v158];
          }
          while ( v157 < v156 );
        }
      }
      else if ( (v146 & 4) != 0 )
      {
        v258 = v280;
        *(_DWORD *)v147 = *(_DWORD *)v280;
        *(_DWORD *)((char *)v147 + v146 - 4) = *(_DWORD *)&v258[v146 - 4];
      }
      else if ( v146 )
      {
        *(_BYTE *)v147 = *v280;
        if ( (v146 & 2) != 0 )
          *(_WORD *)((char *)v147 + v146 - 2) = *(_WORD *)&v280[v146 - 2];
      }
      v145 = v302;
      v121 = v316;
LABEL_80:
      v317 = v145;
      *((_BYTE *)v121 + v145) = 0;
      v302 = 0;
      v303 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v122 = (_QWORD *)operator new(0x20u);
      v123 = v122 + 2;
      v124 = v122;
      v125 = v317;
      *v122 = v122 + 2;
      if ( v316 == &v318 )
      {
        v150 = v125 + 1;
        if ( (unsigned int)(v125 + 1) >= 8 )
        {
          v124[2] = v318;
          *(_QWORD *)((char *)v123 + v150 - 8) = *(size_t *)((char *)&v317 + v150);
          v240 = (unsigned __int64)(v124 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v241 = (char *)v123 - v240;
          v242 = (char *)((char *)&v318 - v241);
          v243 = ((_DWORD)v241 + v150) & 0xFFFFFFF8;
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
        else if ( (v150 & 4) != 0 )
        {
          *((_DWORD *)v124 + 4) = v318;
          *(_DWORD *)((char *)v123 + v150 - 4) = *(_DWORD *)((char *)&v317 + v150 + 4);
        }
        else if ( (_DWORD)v125 != -1 )
        {
          *((_BYTE *)v124 + 16) = v318;
          if ( (v150 & 2) != 0 )
            *(_WORD *)((char *)v123 + v150 - 2) = *(_WORD *)((char *)&v317 + v150 + 6);
        }
      }
      else
      {
        *v122 = v316;
        v122[2] = v318;
      }
      v124[1] = v125;
      v316 = &v318;
      v317 = 0;
      LOBYTE(v318) = 0;
      v126 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v127 = *(_BYTE *)v126;
      v128 = *(_QWORD *)(v126 + 8);
      *(_BYTE *)v126 = 3;
      *(_QWORD *)(v126 + 8) = v124;
      LOBYTE(v302) = v127;
      v303 = v128;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v316 != &v318 )
        operator delete(v316, v318 + 1);
      qsnprintf();
      v316 = &v318;
      v129 = strlen(v335);
      v302 = v129;
      v130 = v129;
      if ( v129 > 0xF )
      {
        v148 = (_QWORD *)std::string::_M_create();
        v316 = v148;
        v318 = v302;
        goto LABEL_107;
      }
      if ( v129 == 1 )
      {
        LOBYTE(v318) = v335[0];
      }
      else if ( v129 )
      {
        v148 = &v318;
LABEL_107:
        if ( v130 >= 8 )
        {
          *v148 = *(_QWORD *)v335;
          *(_QWORD *)((char *)v148 + v130 - 8) = *(_QWORD *)&v334[v130 + 24];
          v159 = (unsigned __int64)(v148 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v160 = (char *)v148 - v159;
          v161 = (char *)(v335 - v160);
          v162 = ((_DWORD)v160 + v130) & 0xFFFFFFF8;
          if ( v162 >= 8 )
          {
            v163 = v162 & 0xFFFFFFF8;
            v164 = 0;
            do
            {
              v165 = v164;
              v164 += 8;
              *(_QWORD *)(v159 + v165) = *(_QWORD *)&v161[v165];
            }
            while ( v164 < v163 );
          }
        }
        else if ( (v130 & 4) != 0 )
        {
          *(_DWORD *)v148 = *(_DWORD *)v335;
          *(_DWORD *)((char *)v148 + v130 - 4) = *(_DWORD *)&v334[v130 + 28];
        }
        else if ( v130 )
        {
          *(_BYTE *)v148 = v335[0];
          if ( (v130 & 2) != 0 )
            *(_WORD *)((char *)v148 + v130 - 2) = *(_WORD *)&v334[v130 + 30];
        }
        v129 = v302;
        v131 = v316;
        goto LABEL_88;
      }
      v131 = &v318;
LABEL_88:
      v317 = v129;
      *((_BYTE *)v131 + v129) = 0;
      v302 = 0;
      v303 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v132 = (_QWORD *)operator new(0x20u);
      v133 = v132 + 2;
      v134 = v132;
      v135 = v317;
      *v132 = v132 + 2;
      if ( v316 == &v318 )
      {
        v149 = v135 + 1;
        if ( (unsigned int)(v135 + 1) >= 8 )
        {
          v134[2] = v318;
          *(_QWORD *)((char *)v133 + v149 - 8) = *(size_t *)((char *)&v317 + v149);
          v247 = (unsigned __int64)(v134 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v248 = (char *)v133 - v247;
          v249 = (char *)((char *)&v318 - v248);
          v250 = ((_DWORD)v248 + v149) & 0xFFFFFFF8;
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
        else if ( (v149 & 4) != 0 )
        {
          *((_DWORD *)v134 + 4) = v318;
          *(_DWORD *)((char *)v133 + v149 - 4) = *(_DWORD *)((char *)&v317 + v149 + 4);
        }
        else if ( (_DWORD)v135 != -1 )
        {
          *((_BYTE *)v134 + 16) = v318;
          if ( (v149 & 2) != 0 )
            *(_WORD *)((char *)v133 + v149 - 2) = *(_WORD *)((char *)&v317 + v149 + 6);
        }
      }
      else
      {
        *v132 = v316;
        v132[2] = v318;
      }
      v134[1] = v135;
      v316 = &v318;
      v317 = 0;
      LOBYTE(v318) = 0;
      v136 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v137 = *(_BYTE *)v136;
      v138 = *(_QWORD *)(v136 + 8);
      *(_BYTE *)v136 = 3;
      *(_QWORD *)(v136 + 8) = v134;
      LOBYTE(v302) = v137;
      v303 = v138;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v316 != &v318 )
        operator delete(v316, v318 + 1);
      LOBYTE(v298) = v292;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
      ++v120;
      v292 = v298;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v119 = v327 + v279.m128i_i64[1];
    }
    while ( *(_DWORD *)(v327 + v279.m128i_i64[1] + 24) > (int)v120 );
  }
  LOBYTE(v302) = 0;
  LOBYTE(v298) = v292;
  v288 = &v302;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v166 = v302;
  v167 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v168 = v297.m128i_i8[0];
  v169 = *(_BYTE *)v167;
  *(_BYTE *)v167 = v166;
  v170 = *(_QWORD *)(v167 + 8);
  v293 = v168;
  v287 = v297.m128i_i64[1];
  *(_QWORD *)(v167 + 8) = v303;
  v303 = v170;
  LOBYTE(v302) = v169;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v299) = 0;
  v285 = &v299;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v299,
    0,
    0,
    v171,
    v172,
    v173,
    v279.m128i_i32[0],
    v279.m128i_i32[2],
    (int)v280,
    (int)v281,
    (int)v282,
    (int)v283,
    (__int64)v284);
  LOBYTE(v280) = v299;
  v174 = v327 + v279.m128i_i64[1];
  if ( *(int *)(v327 + v279.m128i_i64[1] + 48) > 0 )
  {
    v175 = 0;
    v282 = "id";
    v279.m128i_i64[0] = (__int64)&v300;
    v281 = &v301;
    v284 = v336;
    do
    {
      v194 = *(_QWORD *)(v174 + 40);
      v300 = 0;
      v301 = 0;
      v195 = *(int *)(v194 + 4 * v175);
      v196 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v197 = *(_BYTE *)v196;
      v198 = *(_QWORD *)(v196 + 8);
      *(_BYTE *)v196 = 5;
      LOBYTE(v302) = v197;
      *(_QWORD *)(v196 + 8) = v195;
      v303 = v198;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v199 = v284;
      qsnprintf();
      v316 = &v318;
      v200 = strlen(v199);
      v302 = v200;
      v201 = v200;
      if ( v200 > 0xF )
      {
        v202 = (_QWORD *)std::string::_M_create();
        v316 = v202;
        v318 = v302;
      }
      else
      {
        if ( v200 == 1 )
        {
          LOBYTE(v318) = v336[0];
LABEL_141:
          v176 = &v318;
          goto LABEL_142;
        }
        if ( !v200 )
          goto LABEL_141;
        v202 = &v318;
      }
      if ( v201 >= 8 )
      {
        v206 = v284;
        *v202 = *(_QWORD *)v284;
        *(_QWORD *)((char *)v202 + v201 - 8) = *(_QWORD *)&v206[v201 - 8];
        v207 = (unsigned __int64)(v202 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v208 = (char *)v202 - v207;
        v209 = (char *)(v206 - v208);
        v210 = ((_DWORD)v208 + v201) & 0xFFFFFFF8;
        if ( v210 >= 8 )
        {
          v211 = v210 & 0xFFFFFFF8;
          v212 = 0;
          do
          {
            v213 = v212;
            v212 += 8;
            *(_QWORD *)(v207 + v213) = *(_QWORD *)&v209[v213];
          }
          while ( v212 < v211 );
        }
      }
      else if ( (v201 & 4) != 0 )
      {
        v257 = v284;
        *(_DWORD *)v202 = *(_DWORD *)v284;
        *(_DWORD *)((char *)v202 + v201 - 4) = *(_DWORD *)&v257[v201 - 4];
      }
      else if ( v201 )
      {
        *(_BYTE *)v202 = *v284;
        if ( (v201 & 2) != 0 )
          *(_WORD *)((char *)v202 + v201 - 2) = *(_WORD *)&v284[v201 - 2];
      }
      v200 = v302;
      v176 = v316;
LABEL_142:
      v317 = v200;
      *((_BYTE *)v176 + v200) = 0;
      v302 = 0;
      v303 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v177 = (_QWORD *)operator new(0x20u);
      v178 = v177 + 2;
      v179 = v177;
      v180 = v317;
      *v177 = v177 + 2;
      if ( v316 == &v318 )
      {
        v205 = v180 + 1;
        if ( (unsigned int)(v180 + 1) >= 8 )
        {
          v179[2] = v318;
          *(_QWORD *)((char *)v178 + v205 - 8) = *(size_t *)((char *)&v317 + v205);
          v226 = (unsigned __int64)(v179 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v227 = (char *)v178 - v226;
          v228 = (char *)((char *)&v318 - v227);
          v229 = ((_DWORD)v227 + v205) & 0xFFFFFFF8;
          if ( v229 >= 8 )
          {
            v230 = v229 & 0xFFFFFFF8;
            v231 = 0;
            do
            {
              v232 = v231;
              v231 += 8;
              *(_QWORD *)(v226 + v232) = *(_QWORD *)&v228[v232];
            }
            while ( v231 < v230 );
          }
        }
        else if ( (v205 & 4) != 0 )
        {
          *((_DWORD *)v179 + 4) = v318;
          *(_DWORD *)((char *)v178 + v205 - 4) = *(_DWORD *)((char *)&v317 + v205 + 4);
        }
        else if ( (_DWORD)v180 != -1 )
        {
          *((_BYTE *)v179 + 16) = v318;
          if ( (v205 & 2) != 0 )
            *(_WORD *)((char *)v178 + v205 - 2) = *(_WORD *)((char *)&v317 + v205 + 6);
        }
      }
      else
      {
        *v177 = v316;
        v177[2] = v318;
      }
      v179[1] = v180;
      v316 = &v318;
      v317 = 0;
      LOBYTE(v318) = 0;
      v181 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v182 = *(_BYTE *)v181;
      v183 = *(_QWORD *)(v181 + 8);
      *(_BYTE *)v181 = 3;
      *(_QWORD *)(v181 + 8) = v179;
      LOBYTE(v302) = v182;
      v303 = v183;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v316 != &v318 )
        operator delete(v316, v318 + 1);
      qsnprintf();
      v316 = &v318;
      v184 = strlen(v337);
      v302 = v184;
      v185 = v184;
      if ( v184 > 0xF )
      {
        v203 = (_QWORD *)std::string::_M_create();
        v316 = v203;
        v318 = v302;
        goto LABEL_162;
      }
      if ( v184 == 1 )
      {
        LOBYTE(v318) = v337[0];
      }
      else if ( v184 )
      {
        v203 = &v318;
LABEL_162:
        if ( v185 >= 8 )
        {
          *v203 = *(_QWORD *)v337;
          *(_QWORD *)((char *)v203 + v185 - 8) = *(_QWORD *)&v336[v185 + 24];
          v214 = (unsigned __int64)(v203 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v215 = (char *)v203 - v214;
          v216 = (char *)(v337 - v215);
          v217 = ((_DWORD)v215 + v185) & 0xFFFFFFF8;
          if ( v217 >= 8 )
          {
            v218 = v217 & 0xFFFFFFF8;
            v219 = 0;
            do
            {
              v220 = v219;
              v219 += 8;
              *(_QWORD *)(v214 + v220) = *(_QWORD *)&v216[v220];
            }
            while ( v219 < v218 );
          }
        }
        else if ( (v185 & 4) != 0 )
        {
          *(_DWORD *)v203 = *(_DWORD *)v337;
          *(_DWORD *)((char *)v203 + v185 - 4) = *(_DWORD *)&v336[v185 + 28];
        }
        else if ( v185 )
        {
          *(_BYTE *)v203 = v337[0];
          if ( (v185 & 2) != 0 )
            *(_WORD *)((char *)v203 + v185 - 2) = *(_WORD *)&v336[v185 + 30];
        }
        v184 = v302;
        v186 = v316;
        goto LABEL_150;
      }
      v186 = &v318;
LABEL_150:
      v317 = v184;
      *((_BYTE *)v186 + v184) = 0;
      v302 = 0;
      v303 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v187 = (_QWORD *)operator new(0x20u);
      v188 = v187 + 2;
      v189 = v187;
      v190 = v317;
      *v187 = v187 + 2;
      if ( v316 == &v318 )
      {
        v204 = v190 + 1;
        if ( (unsigned int)(v190 + 1) >= 8 )
        {
          v189[2] = v318;
          *(_QWORD *)((char *)v188 + v204 - 8) = *(size_t *)((char *)&v317 + v204);
          v233 = (unsigned __int64)(v189 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v234 = (char *)v188 - v233;
          v235 = (char *)((char *)&v318 - v234);
          v236 = ((_DWORD)v234 + v204) & 0xFFFFFFF8;
          if ( v236 >= 8 )
          {
            v237 = v236 & 0xFFFFFFF8;
            v238 = 0;
            do
            {
              v239 = v238;
              v238 += 8;
              *(_QWORD *)(v233 + v239) = *(_QWORD *)&v235[v239];
            }
            while ( v238 < v237 );
          }
        }
        else if ( (v204 & 4) != 0 )
        {
          *((_DWORD *)v189 + 4) = v318;
          *(_DWORD *)((char *)v188 + v204 - 4) = *(_DWORD *)((char *)&v317 + v204 + 4);
        }
        else if ( (_DWORD)v190 != -1 )
        {
          *((_BYTE *)v189 + 16) = v318;
          if ( (v204 & 2) != 0 )
            *(_WORD *)((char *)v188 + v204 - 2) = *(_WORD *)((char *)&v317 + v204 + 6);
        }
      }
      else
      {
        *v187 = v316;
        v187[2] = v318;
      }
      v189[1] = v190;
      v316 = &v318;
      v317 = 0;
      LOBYTE(v318) = 0;
      v191 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v192 = *(_BYTE *)v191;
      v193 = *(_QWORD *)(v191 + 8);
      *(_BYTE *)v191 = 3;
      *(_QWORD *)(v191 + 8) = v189;
      LOBYTE(v302) = v192;
      v303 = v193;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v316 != &v318 )
        operator delete(v316, v318 + 1);
      LOBYTE(v299) = (_BYTE)v280;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
      ++v175;
      LOBYTE(v280) = v299;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v174 = v327 + v279.m128i_i64[1];
    }
    while ( *(_DWORD *)(v327 + v279.m128i_i64[1] + 48) > (int)v175 );
  }
  LOBYTE(v302) = 0;
  LOBYTE(v299) = (_BYTE)v280;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v221 = v302;
  v222 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v223 = v303;
  v224 = *(_QWORD *)(v222 + 8);
  v225 = *(_BYTE *)v222;
  *(_BYTE *)v222 = v221;
  *(_QWORD *)(v222 + 8) = v223;
  v303 = v224;
  LOBYTE(v302) = v225;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *v290 = _mm_load_si128(&v297);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_44:
  v86 = v327;
  v320 = off_445398;
  if ( v327 )
  {
    v87 = v328;
    if ( (_QWORD)v328 )
    {
      v88 = 0;
      do
      {
        while ( 1 )
        {
          v89 = (_QWORD *)(v86 + (v88 << 6));
          if ( v89[5] )
          {
            v89[6] = 0;
            qfree();
          }
          if ( !v89[2] )
            break;
          v89[3] = 0;
          ++v88;
          qfree();
          v86 = v327;
          if ( v88 == v87 )
            goto LABEL_51;
        }
        ++v88;
        v86 = v327;
      }
      while ( v87 != v88 );
    }
LABEL_51:
    *(_QWORD *)&v328 = 0;
    qfree();
  }
  if ( v322 )
  {
    *(_QWORD *)&v323 = 0;
    qfree();
  }
  return v290;
}

