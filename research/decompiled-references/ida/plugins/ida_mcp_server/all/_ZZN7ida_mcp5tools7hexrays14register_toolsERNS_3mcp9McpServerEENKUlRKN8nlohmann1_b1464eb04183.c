__int64 __fastcall ida_mcp::tools::hexrays::register_tools(ida_mcp::mcp::McpServer &)::{lambda(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)#1}::operator()(
        char a1)
{
  std::runtime_error *v1; // rbp
  void *v2; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // rbp
  char *v4; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v6; // rax
  char *v7; // rbx
  char *v8; // rbx
  int *v9; // rax
  int *v10; // r14
  __int64 v11; // r12
  char v12; // r13
  std::runtime_error *v13; // rbx
  _QWORD *func; // rbp
  size_t v15; // rax
  size_t v16; // r15
  size_t v17; // rbx
  char *v18; // rsi
  __int64 v19; // rbx
  char *v20; // rbx
  char *v21; // r15
  __int64 *v22; // rax
  __int64 *v23; // rbx
  const char *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r8
  __m128 *v27; // rbx
  struct lconv *v28; // rax
  char v29; // dl
  char *thousands_sep; // rcx
  char *decimal_point; // rax
  int v32; // r8d
  int v33; // r9d
  char *v34; // rdi
  __int64 v35; // rax
  size_t v36; // r14
  char *v37; // rsi
  __int64 v38; // r13
  __int64 v39; // r15
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __m128i v43; // xmm1
  __m128i v44; // xmm0
  __m128i v45; // xmm3
  char *v46; // rax
  int v47; // eax
  char v48; // al
  __int64 v49; // r14
  char *v50; // rax
  unsigned int v51; // r13d
  _OWORD *v52; // rdx
  _QWORD *v53; // rax
  _QWORD *v54; // rdx
  _QWORD *v55; // rbx
  void *v56; // rcx
  __int64 v57; // rax
  char v58; // si
  __int64 v59; // rdx
  char *v60; // r12
  __int64 *v61; // rax
  __int64 *v62; // rbx
  size_t v63; // rax
  void *v64; // rcx
  size_t v65; // r8
  __int64 v66; // rax
  char v67; // si
  __int64 v68; // rdx
  __int64 v69; // rbx
  __int64 v70; // rax
  char v71; // si
  __int64 v72; // rdx
  __int64 *v73; // r12
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  char v79; // si
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  _QWORD *v85; // rax
  _QWORD *v86; // rcx
  _QWORD *v87; // rbx
  __int64 v88; // rsi
  __int64 v89; // rax
  char v90; // si
  __int64 v91; // rdx
  __int64 v92; // r12
  __int64 v93; // r13
  _QWORD *v94; // rbp
  size_t v95; // rdx
  int v96; // eax
  unsigned __int64 v97; // rbx
  size_t v98; // rsi
  void *v99; // rdi
  __int64 v100; // rbp
  char v101; // bp
  __int64 v102; // rax
  char v103; // si
  __int64 v104; // rdx
  char v105; // r12
  __int64 v106; // rax
  char v107; // si
  __int64 v108; // rdx
  char *v109; // rdi
  __int64 v111; // rax
  __int64 v112; // rax
  _QWORD *v113; // rax
  size_t v114; // rdx
  int v115; // eax
  unsigned __int64 v116; // r13
  __int64 *v117; // rbp
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rax
  char v123; // si
  __int64 v124; // rdx
  __int64 v125; // rbp
  __int64 v126; // rax
  char v127; // si
  __int64 v128; // rdx
  char v129; // r12
  __int64 v130; // rax
  char v131; // si
  __int64 v132; // rdx
  unsigned __int64 v133; // rdx
  char *v134; // rax
  char *v135; // rbx
  unsigned int v136; // r13d
  unsigned int v137; // r13d
  unsigned int v138; // eax
  __int64 v139; // rcx
  unsigned int v140; // eax
  const char *v141; // rbx
  __int64 v142; // r12
  __int64 v143; // r13
  int v144; // eax
  unsigned __int64 v145; // rsi
  char *v146; // rdx
  char *v147; // r8
  unsigned int v148; // eax
  unsigned int v149; // eax
  unsigned int v150; // edx
  __int64 v151; // rdi
  char v152; // r12
  __int64 v153; // rax
  __int64 v154; // rcx
  char v155; // si
  __int64 v156; // rdx
  unsigned int v157; // edi
  unsigned __int64 v158; // r8
  int v159; // eax
  char *v160; // rcx
  unsigned int v161; // edi
  unsigned int v162; // edi
  unsigned int v163; // eax
  __int64 v164; // r9
  __int64 v165; // [rsp+2498h] [rbp-24C8h]
  void *v166; // [rsp+24A0h] [rbp-24C0h]
  char **v167; // [rsp+24A8h] [rbp-24B8h]
  __int64 v168; // [rsp+24A8h] [rbp-24B8h]
  void *desta; // [rsp+24B0h] [rbp-24B0h]
  void *destb; // [rsp+24B0h] [rbp-24B0h]
  void *destc; // [rsp+24B0h] [rbp-24B0h]
  _QWORD *dest; // [rsp+24B0h] [rbp-24B0h]
  const char *destd; // [rsp+24B0h] [rbp-24B0h]
  void *deste; // [rsp+24B0h] [rbp-24B0h]
  __int64 *v175; // [rsp+24B8h] [rbp-24A8h] BYREF
  __int64 extlang; // [rsp+24C0h] [rbp-24A0h]
  void **v177; // [rsp+24C8h] [rbp-2498h]
  char v178; // [rsp+24D7h] [rbp-2489h]
  int v179; // [rsp+24DCh] [rbp-2484h]
  char *v180; // [rsp+24E0h] [rbp-2480h]
  char v181; // [rsp+24E8h] [rbp-2478h]
  __int64 v182; // [rsp+24F0h] [rbp-2470h]
  __int64 v183; // [rsp+24F8h] [rbp-2468h]
  __int64 v184; // [rsp+2500h] [rbp-2460h]
  char v185; // [rsp+2508h] [rbp-2458h]
  __int64 v186; // [rsp+2510h] [rbp-2450h]
  __int64 v187; // [rsp+2518h] [rbp-2448h]
  __int64 v188; // [rsp+2520h] [rbp-2440h]
  char v189; // [rsp+2528h] [rbp-2438h]
  __int64 v190; // [rsp+2530h] [rbp-2430h]
  __int64 v191; // [rsp+2538h] [rbp-2428h]
  __int64 v192; // [rsp+2540h] [rbp-2420h]
  char v193; // [rsp+2548h] [rbp-2418h]
  __int64 v194; // [rsp+2550h] [rbp-2410h]
  char v195; // [rsp+2558h] [rbp-2408h]
  __int64 v196; // [rsp+2560h] [rbp-2400h]
  __int64 v197; // [rsp+2568h] [rbp-23F8h]
  __int64 v198; // [rsp+2570h] [rbp-23F0h]
  size_t v199; // [rsp+2578h] [rbp-23E8h]
  __int64 v200; // [rsp+2580h] [rbp-23E0h]
  char *v201; // [rsp+2588h] [rbp-23D8h]
  __int128 v202; // [rsp+2590h] [rbp-23D0h]
  char *v203; // [rsp+25A8h] [rbp-23B8h]
  __int128 v204; // [rsp+25B0h] [rbp-23B0h]
  char *v205; // [rsp+25C8h] [rbp-2398h] BYREF
  __int128 v206; // [rsp+25D0h] [rbp-2390h]
  const char *v207; // [rsp+25E8h] [rbp-2378h] BYREF
  __int128 v208; // [rsp+25F0h] [rbp-2370h]
  char *v209; // [rsp+2608h] [rbp-2358h] BYREF
  __int128 v210; // [rsp+2610h] [rbp-2350h]
  __int128 v211; // [rsp+2628h] [rbp-2338h] BYREF
  void (__fastcall *v212)(__int128 *, __int128 *, __int64); // [rsp+2638h] [rbp-2328h]
  __int64 v213; // [rsp+2640h] [rbp-2320h]
  __m128i v214; // [rsp+2648h] [rbp-2318h] BYREF
  __int128 v215; // [rsp+2658h] [rbp-2308h] BYREF
  void *v216[2]; // [rsp+2668h] [rbp-22F8h] BYREF
  __int128 v217; // [rsp+2678h] [rbp-22E8h] BYREF
  void *v218[2]; // [rsp+2688h] [rbp-22D8h] BYREF
  _OWORD v219[3]; // [rsp+2698h] [rbp-22C8h] BYREF
  _BYTE v220[24]; // [rsp+26C8h] [rbp-2298h]
  _BYTE v221[512]; // [rsp+26E0h] [rbp-2280h] BYREF
  __int16 v222; // [rsp+28E0h] [rbp-2080h]
  char v223; // [rsp+28E2h] [rbp-207Eh]
  void *v224; // [rsp+28E8h] [rbp-2078h]
  _QWORD v225[2]; // [rsp+28F8h] [rbp-2068h] BYREF
  int v226; // [rsp+2908h] [rbp-2058h]
  char s[4096]; // [rsp+2918h] [rbp-2048h] BYREF
  _QWORD src[521]; // [rsp+3918h] [rbp-1048h] BYREF

  src[513] = __readfsqword(0x28u);
  LOBYTE(v217) = 0;
  v216[1] = nullptr;
  v7 = (char *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v175 = (__int64 *)v216;
  v216[0] = &v217;
  v178 = *v7;
  if ( v178 != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *v7 )
    {
      case 0:
        v6 = "null";
        break;
      case 1:
        v6 = "object";
        break;
      case 2:
        v6 = (char *)"array";
        break;
      case 3:
        v6 = "string";
        break;
      case 4:
        v6 = "boolean";
        break;
      case 8:
        v6 = "binary";
        break;
      case 9:
        v6 = "discarded";
        break;
      default:
        v6 = "number";
        break;
    }
    v209 = v6;
    v177 = v218;
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
  v8 = (char *)v216[0];
  if ( v216[1] > (char *)&dword_0 + 2 && *(_BYTE *)v216[0] == 48 && (*((_BYTE *)v216[0] + 1) & 0xDF) == 0x58 )
    v8 = (char *)v216[0] + 2;
  v9 = __errno_location();
  *v9 = 0;
  v10 = v9;
  v167 = &v209;
  v11 = __isoc23_strtoull();
  if ( v8 == v209 || (v12 = *v209) != 0 || *v10 == 34 && v11 == -1 )
  {
    if ( v216[0] != &v217 )
      operator delete(v216[0], v217 + 1);
    v13 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v13, "Invalid address");
    __cxa_throw(
      v13,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v216[0] != &v217 )
    operator delete(v216[0], v217 + 1);
  func = (_QWORD *)get_func();
  if ( !func )
  {
    v2 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    v177 = v218;
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v201 = nullptr;
  v202 = 0;
  get_func_name();
  extlang = find_extlang();
  if ( !extlang )
  {
    v1 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v1, "IDAPython not available");
    __cxa_throw(
      v1,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  qtmpnam();
  v204 = 0;
  v15 = strlen(s);
  v16 = v15 + 1;
  v17 = v15;
  v203 = (char *)qvector_reserve();
  *(_QWORD *)&v204 = v16;
  memmove(v203, s, v17);
  v203[v17] = 0;
  v18 = v203;
  v19 = ((_QWORD)v204 == 0) + (_QWORD)v204 - 1LL;
  if ( *((_QWORD *)&v204 + 1) < (unsigned __int64)(v19 + 6) )
  {
    v203 = (char *)qvector_reserve();
    v18 = v203;
  }
  *(_QWORD *)&v204 = v19 + 6;
  v18[v19 + 5] = 0;
  v20 = &v203[v19];
  *(_DWORD *)v20 = 1869834798;
  v20[4] = 110;
  v21 = v203;
  v205 = nullptr;
  v206 = 0;
  if ( !(_QWORD)v204 )
    v21 = _qstring<char>::c_str(void)const::nullstr;
  v209 = nullptr;
  *(_QWORD *)&v210 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v22 = (__int64 *)operator new(0x20u);
  v23 = v22;
  *v22 = (__int64)(v22 + 2);
  if ( !v21 )
    ida_mcp::tools::hexrays::register_tools(ida_mcp::mcp::McpServer &)::{lambda(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)#1}::operator()();
  desta = v22 + 2;
  v24 = (const char *)strlen(v21);
  v25 = (__int64)desta;
  v207 = v24;
  v26 = (size_t)v24;
  if ( (unsigned __int64)v24 > 0xF )
  {
    destd = v24;
    v111 = std::string::_M_create();
    *v23 = v111;
    v25 = v111;
    v26 = (size_t)destd;
    v23[2] = (__int64)v207;
LABEL_112:
    memcpy((void *)v25, v21, v26);
    v24 = v207;
    v25 = *v23;
    goto LABEL_23;
  }
  if ( v24 == (_BYTE *)&dword_0 + 1 )
  {
    *((_BYTE *)v23 + 16) = *v21;
    goto LABEL_23;
  }
  if ( v24 )
    goto LABEL_112;
LABEL_23:
  v23[1] = (__int64)v24;
  v24[v25] = 0;
  *(_QWORD *)&v210 = v23;
  v216[0] = &v217;
  v216[1] = nullptr;
  LOBYTE(v217) = 0;
  v27 = (__m128 *)operator new(0x20u);
  v27->m128_u64[1] = 0x100000001LL;
  v27[1] = _mm_loadh_ps((const double *)&v175);
  v27->m128_u64[0] = (unsigned __int64)off_444E78;
  if ( _libc_single_threaded )
    v27->m128_i32[2] = 2;
  else
    _InterlockedAdd(&v27->m128_i32[2], 1u);
  v218[0] = &v27[1];
  v218[1] = v27;
  memset(v219, 0, sizeof(v219));
  *(_OWORD *)v220 = 0;
  v28 = localeconv();
  v29 = 0;
  thousands_sep = v28->thousands_sep;
  *(_QWORD *)&v220[16] = v28;
  if ( thousands_sep )
    v29 = *thousands_sep;
  v221[0] = v29;
  decimal_point = v28->decimal_point;
  if ( decimal_point )
    v12 = *decimal_point;
  v221[1] = v12;
  memset(&v221[2], 0, 510);
  v222 = 0;
  v223 = 32;
  v224 = v225;
  std::string::_M_construct();
  v226 = 0;
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
  LOBYTE(v209) = 3;
  v177 = v218;
  nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump();
  if ( v224 != v225 )
    operator delete(v224, v225[0] + 1LL);
  if ( v218[1] )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
  _qstring<char>::sprnt(
    (int)&v205,
    (int)"import ida_hexrays as hr\n"
         "import ida_funcs\n"
         "import json\n"
         "\n"
         "ea = 0x%llX\n"
         "func = ida_funcs.get_func(ea)\n"
         "result = {}\n"
         "\n"
         "try:\n"
         "    cfunc = hr.decompile(ea)\n"
         "    if cfunc:\n"
         "        result = {'method': 'hexrays', 'pseudocode': str(cfunc)}\n"
         "    else:\n"
         "        raise Exception('returned None')\n"
         "except:\n"
         "    hf = hr.hexrays_failure_t()\n"
         "    mbr = hr.mba_ranges_t(func)\n"
         "    mba = hr.gen_microcode(mbr, hf, None, hr.DECOMP_WARNINGS, hr.MMAT_LOCOPT)\n"
         "    if mba:\n"
         "        lines = []\n"
         "        for i in range(mba.qty):\n"
         "            blk = mba.get_mblock(i)\n"
         "            if blk.start == 0xffffffffffffffff: continue\n"
         "            insn = blk.head\n"
         "            while insn:\n"
         "                lines.append(insn._print())\n"
         "                insn = insn.next\n"
         "        result = {'method': 'microcode', 'blocks': mba.qty, 'microcode': '\\n'.join(lines)}\n"
         "    else:\n"
         "        result = {'method': 'failed', 'error': hf.desc()}\n"
         "\n"
         "with open(%s, 'w') as f:\n"
         "    json.dump(result, f)\n",
    v11,
    (int)v216[0],
    v32,
    v33,
    a1);
  if ( v216[0] != &v217 )
    operator delete(v216[0], v217 + 1);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v207 = nullptr;
  v34 = v205;
  v208 = 0;
  if ( !(_QWORD)v206 )
    v34 = _qstring<char>::c_str(void)const::nullstr;
  (*(void (__fastcall **)(char *, const char **))(extlang + 72))(v34, &v207);
  v209 = nullptr;
  v210 = 0;
  if ( qfopen() )
  {
    while ( 1 )
    {
      v35 = qfread();
      v36 = v35;
      if ( v35 <= 0 )
        break;
      v37 = v209;
      v38 = ((_QWORD)v210 == 0) + (_QWORD)v210 - 1LL;
      v39 = v35 + v38;
      v40 = v35 + ((_QWORD)v210 == 0) + (_QWORD)v210;
      if ( *((_QWORD *)&v210 + 1) < v40 )
      {
        destb = (void *)(v35 + ((_QWORD)v210 == 0) + (_QWORD)v210);
        v209 = (char *)qvector_reserve();
        v40 = (unsigned __int64)destb;
        v37 = v209;
      }
      *(_QWORD *)&v210 = v40;
      v37[v39] = 0;
      memmove(&v209[v38], src, v36);
    }
    qfclose();
  }
  qunlink();
  if ( (unsigned __int64)v210 <= 1 )
  {
    LOBYTE(v167) = 0;
    v49 = 0;
  }
  else
  {
    v212 = nullptr;
    v213 = 0;
    LOBYTE(v199) = 0;
    v200 = 0;
    v215 = 0u;
    v211 = 0;
    v214 = 0;
    v41 = nlohmann::json_abi_v3_12_0::detail::input_adapter<char const*,0>();
    *(_QWORD *)&v217 = 0;
    *((_QWORD *)&v217 + 1) = *((_QWORD *)&v215 + 1);
    v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)v42);
    v44 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)&v221[48]);
    *(_OWORD *)v216 = 0;
    if ( (_QWORD)v215 )
    {
      v45 = _mm_load_si128(&v214);
      v219[0] = v215;
      *(__m128i *)v216 = v45;
      v215 = 0;
      *(__m128i *)v218 = v45;
      v217 = 0;
    }
    else
    {
      v219[0] = __PAIR128__(*((unsigned __int64 *)&v215 + 1), 0);
      *(_OWORD *)v218 = 0;
    }
    *(__m128i *)((char *)&v219[1] + 8) = v43;
    LODWORD(v219[1]) = 0;
    BYTE8(v219[2]) = 0;
    HIDWORD(v219[2]) = -1;
    v220[0] = 0;
    memset(v221, 0, 24);
    *(_QWORD *)&v221[40] = 0;
    v221[48] = 0;
    *(_QWORD *)&v221[64] = "";
    memset(&v221[72], 0, 24);
    *(_OWORD *)&v220[8] = 0;
    *(__m128i *)&v221[24] = v44;
    v46 = localeconv()->decimal_point;
    if ( v46 )
      v47 = *v46;
    else
      v47 = 46;
    *(_DWORD *)&v221[96] = v47;
    *(_QWORD *)&v221[104] = -1;
    v221[112] = 1;
    LODWORD(v219[1]) = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan();
    if ( (_QWORD)v217 )
      ((void (__fastcall *)(__int64 *, __int64 *, __int64))v217)(v175, v175, 3);
    nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::parse();
    if ( *(_BYTE **)&v221[32] != &v221[48] )
      operator delete(*(void **)&v221[32], *(_QWORD *)&v221[48] + 1LL);
    if ( *(_QWORD *)&v221[8] )
      operator delete(*(void **)&v221[8], *(_QWORD *)&v221[24] - *(_QWORD *)&v221[8]);
    if ( *(_QWORD *)&v219[0] )
      (*(void (__fastcall **)(void **, void **, __int64))&v219[0])(v177, v177, 3);
    if ( (_QWORD)v215 )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v215)(&v214, &v214, 3);
    v48 = v199;
    v49 = v200;
    LOBYTE(v199) = 0;
    LOBYTE(v167) = v48;
    v200 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v212 )
      v212(&v211, &v211, 3);
  }
  *(_BYTE *)v165 = 0;
  *(_QWORD *)(v165 + 8) = 0;
  qsnprintf();
  v218[0] = v219;
  v50 = (char *)strlen((const char *)src);
  v180 = v50;
  v51 = (unsigned int)v50;
  if ( (unsigned __int64)v50 > 0xF )
  {
    v113 = (_QWORD *)std::string::_M_create();
    v218[0] = v113;
    *(_QWORD *)&v219[0] = v180;
  }
  else
  {
    if ( v50 == (_BYTE *)&dword_0 + 1 )
    {
      LOBYTE(v219[0]) = src[0];
      goto LABEL_64;
    }
    if ( !v50 )
    {
LABEL_64:
      v52 = v219;
      goto LABEL_65;
    }
    v113 = v219;
  }
  if ( v51 >= 8 )
  {
    *v113 = src[0];
    *(_QWORD *)((char *)v113 + v51 - 8) = *(_QWORD *)&s[v51 + 4088];
    v133 = (unsigned __int64)(v113 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v134 = (char *)v113 - v133;
    v135 = (char *)((char *)src - v134);
    v136 = ((_DWORD)v134 + v51) & 0xFFFFFFF8;
    if ( v136 >= 8 )
    {
      v137 = v136 & 0xFFFFFFF8;
      v138 = 0;
      do
      {
        v139 = v138;
        v138 += 8;
        *(_QWORD *)(v133 + v139) = *(_QWORD *)&v135[v139];
      }
      while ( v138 < v137 );
    }
  }
  else if ( (v51 & 4) != 0 )
  {
    *(_DWORD *)v113 = src[0];
    *(_DWORD *)((char *)v113 + v51 - 4) = *(_DWORD *)&s[v51 + 4092];
  }
  else if ( v51 )
  {
    *(_BYTE *)v113 = src[0];
    if ( (v51 & 2) != 0 )
      *(_WORD *)((char *)v113 + v51 - 2) = *(_WORD *)&s[v51 + 4094];
  }
  v50 = v180;
  v52 = v218[0];
LABEL_65:
  v218[1] = v50;
  v50[(_QWORD)v52] = 0;
  v199 = 0;
  v200 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v53 = (_QWORD *)operator new(0x20u);
  v54 = v53 + 2;
  v55 = v53;
  v56 = v218[1];
  *v53 = v53 + 2;
  if ( v218[0] == v219 )
  {
    v140 = (_DWORD)v56 + 1;
    if ( (unsigned int)((_DWORD)v56 + 1) >= 8 )
    {
      v55[2] = *(_QWORD *)&v219[0];
      *(_QWORD *)((char *)v54 + v140 - 8) = *(void **)((char *)&v218[1] + v140);
      v145 = (unsigned __int64)(v55 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v146 = (char *)v54 - v145;
      v147 = (char *)((char *)v219 - v146);
      v148 = ((_DWORD)v146 + v140) & 0xFFFFFFF8;
      if ( v148 >= 8 )
      {
        v149 = v148 & 0xFFFFFFF8;
        v150 = 0;
        do
        {
          v151 = v150;
          v150 += 8;
          *(_QWORD *)(v145 + v151) = *(_QWORD *)&v147[v151];
        }
        while ( v150 < v149 );
      }
    }
    else if ( (v140 & 4) != 0 )
    {
      *((_DWORD *)v55 + 4) = v219[0];
      *(_DWORD *)((char *)v54 + v140 - 4) = *(_DWORD *)((char *)&v218[1] + v140 + 4);
    }
    else if ( (_DWORD)v56 != -1 )
    {
      *((_BYTE *)v55 + 16) = v219[0];
      if ( (v140 & 2) != 0 )
        *(_WORD *)((char *)v54 + v140 - 2) = *(_WORD *)((char *)&v218[1] + v140 + 6);
    }
  }
  else
  {
    *v53 = v218[0];
    v53[2] = *(_QWORD *)&v219[0];
  }
  v55[1] = v56;
  v218[0] = v219;
  v218[1] = nullptr;
  LOBYTE(v219[0]) = 0;
  v57 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v58 = *(_BYTE *)v57;
  v59 = *(_QWORD *)(v57 + 8);
  *(_BYTE *)v57 = 3;
  *(_QWORD *)(v57 + 8) = v55;
  LOBYTE(v199) = v58;
  v200 = v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v218[0] != v219 )
    operator delete(v218[0], *(_QWORD *)&v219[0] + 1LL);
  v60 = v201;
  if ( !(_QWORD)v202 )
    v60 = _qstring<char>::c_str(void)const::nullstr;
  v197 = 0;
  v198 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v61 = (__int64 *)operator new(0x20u);
  v62 = v61;
  *v61 = (__int64)(v61 + 2);
  if ( !v60 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  destc = v61 + 2;
  v63 = strlen(v60);
  v64 = destc;
  v199 = v63;
  v65 = v63;
  if ( v63 > 0xF )
  {
    deste = (void *)v63;
    v112 = std::string::_M_create();
    *v62 = v112;
    v64 = (void *)v112;
    v65 = (size_t)deste;
    v62[2] = v199;
  }
  else
  {
    if ( v63 == 1 )
    {
      *((_BYTE *)v62 + 16) = *v60;
      goto LABEL_75;
    }
    if ( !v63 )
      goto LABEL_75;
  }
  memcpy(v64, v60, v65);
  v63 = v199;
  v64 = (void *)*v62;
LABEL_75:
  v62[1] = v63;
  *((_BYTE *)v64 + v63) = 0;
  v66 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v67 = *(_BYTE *)v66;
  v68 = *(_QWORD *)(v66 + 8);
  *(_BYTE *)v66 = 3;
  *(_QWORD *)(v66 + 8) = v62;
  LOBYTE(v197) = v67;
  v198 = v68;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v69 = func[1] - *func;
  v70 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v71 = *(_BYTE *)v70;
  v72 = *(_QWORD *)(v70 + 8);
  *(_BYTE *)v70 = 6;
  LOBYTE(v199) = v71;
  *(_QWORD *)(v70 + 8) = v69;
  v200 = v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( (_BYTE)v167 != 1 )
    goto LABEL_76;
  v92 = *(_QWORD *)(v49 + 16);
  if ( !v92 )
    goto LABEL_76;
  v93 = *(_QWORD *)(v49 + 16);
  dest = (_QWORD *)(v49 + 8);
  v94 = (_QWORD *)(v49 + 8);
  do
  {
    while ( 1 )
    {
      v97 = *(_QWORD *)(v93 + 40);
      if ( !v97 )
        break;
      v95 = 10;
      if ( v97 <= 0xA )
        v95 = *(_QWORD *)(v93 + 40);
      v96 = memcmp(*(const void **)(v93 + 32), "pseudocode", v95);
      if ( v96 || (v96 = v97 - 10, (__int64)(v97 - 10) <= 0x7FFFFFFF) )
      {
        if ( v96 < 0 )
          break;
      }
      v94 = (_QWORD *)v93;
      v93 = *(_QWORD *)(v93 + 16);
      if ( !v93 )
        goto LABEL_94;
    }
    v93 = *(_QWORD *)(v93 + 24);
  }
  while ( v93 );
LABEL_94:
  if ( dest == v94 )
  {
    v100 = v49 + 8;
    goto LABEL_128;
  }
  v98 = v94[5];
  v99 = (void *)v94[4];
  v100 = v49 + 8;
  if ( std::string::compare(v99, v98, "pseudocode") <= 0 )
  {
    v195 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
    v101 = v195;
    v102 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v103 = *(_BYTE *)v102;
    v104 = *(_QWORD *)(v102 + 8);
    *(_BYTE *)v102 = v101;
    v195 = v103;
    *(_QWORD *)(v102 + 8) = v196;
    v196 = v104;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v181 = 1;
    v182 = v49;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v193 = 0;
    v49 = v182;
    LOBYTE(v168) = v181;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v105 = v193;
    v106 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v107 = *(_BYTE *)v106;
    v108 = *(_QWORD *)(v106 + 8);
    *(_BYTE *)v106 = v105;
    v193 = v107;
    *(_QWORD *)(v106 + 8) = v194;
    v194 = v108;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    goto LABEL_97;
  }
  do
  {
LABEL_128:
    while ( 1 )
    {
      v116 = *(_QWORD *)(v92 + 40);
      if ( !v116 )
        break;
      v114 = 9;
      if ( v116 <= 9 )
        v114 = *(_QWORD *)(v92 + 40);
      v115 = memcmp(*(const void **)(v92 + 32), "microcode", v114);
      if ( v115 || (v115 = v116 - 9, (__int64)(v116 - 9) <= 0x7FFFFFFF) )
      {
        if ( v115 < 0 )
          break;
      }
      v100 = v92;
      v92 = *(_QWORD *)(v92 + 16);
      if ( !v92 )
        goto LABEL_130;
    }
    v92 = *(_QWORD *)(v92 + 24);
  }
  while ( v92 );
LABEL_130:
  if ( dest != (_QWORD *)v100 && std::string::compare(*(void **)(v100 + 32), *(_QWORD *)(v100 + 40), "microcode") <= 0 )
  {
    v191 = 0;
    v192 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v117 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v117,
      "microcode_lift",
      v118,
      v119,
      v120,
      v121,
      v165,
      (int)&v217,
      (__int64)v167);
    v122 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v123 = *(_BYTE *)v122;
    v124 = *(_QWORD *)(v122 + 8);
    *(_BYTE *)v122 = 3;
    *(_QWORD *)(v122 + 8) = v117;
    LOBYTE(v191) = v123;
    v192 = v124;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v179 = 0;
    v181 = 1;
    v182 = v49;
    v125 = (int)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[7],int,0>();
    v126 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v127 = *(_BYTE *)v126;
    v128 = *(_QWORD *)(v126 + 8);
    *(_BYTE *)v126 = 5;
    LOBYTE(v199) = v127;
    *(_QWORD *)(v126 + 8) = v125;
    v200 = v128;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v189 = 0;
    v49 = v182;
    LOBYTE(v168) = v181;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v129 = v189;
    v130 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v131 = *(_BYTE *)v130;
    v132 = *(_QWORD *)(v130 + 8);
    *(_BYTE *)v130 = v129;
    v189 = v131;
    *(_QWORD *)(v130 + 8) = v190;
    v190 = v132;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  else
  {
LABEL_76:
    v187 = 0;
    v188 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v73 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v73, "failed", v74, v75, v76, v77, v165, (int)&v217, (__int64)v167);
    v78 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v79 = *(_BYTE *)v78;
    v80 = *(_QWORD *)(v78 + 8);
    *(_BYTE *)v78 = 3;
    *(_QWORD *)(v78 + 8) = v73;
    LOBYTE(v187) = v79;
    v188 = v80;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( (_BYTE)v168 == 1 )
    {
      v141 = v207;
      if ( !(_QWORD)v208 )
        v141 = _qstring<char>::c_str(void)const::nullstr;
      v142 = *(_QWORD *)(v49 + 16);
      if ( !v142 )
        goto LABEL_163;
      v143 = v49 + 8;
      do
      {
        v144 = std::string::compare(*(void **)(v142 + 32), *(_QWORD *)(v142 + 40), "error");
        v81 = *(_QWORD *)(v142 + 16);
        v82 = *(_QWORD *)(v142 + 24);
        if ( v144 >= 0 )
        {
          v143 = v142;
          v142 = *(_QWORD *)(v142 + 16);
        }
        else
        {
          v142 = *(_QWORD *)(v142 + 24);
        }
      }
      while ( v142 );
      if ( v143 == v49 + 8 || std::string::compare(*(void **)(v143 + 32), *(_QWORD *)(v143 + 40), "error") > 0 )
      {
LABEL_163:
        std::string::basic_string<std::allocator<char>>(v175, v141, v81, v82, v83, v84, v165, (int)v166, v168);
      }
      else
      {
        LOBYTE(v217) = 0;
        v216[1] = nullptr;
        v216[0] = v166;
        if ( *(_BYTE *)(v143 + 64) != 3 )
        {
          v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
          switch ( *(_BYTE *)(v143 + 64) )
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
          v199 = (size_t)v4;
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
            v3,
            302);
          std::string::_M_dispose();
          __cxa_throw(
            v3,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        std::string::_M_assign();
      }
      v185 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
      v152 = v185;
      v153 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v154 = v186;
      v155 = *(_BYTE *)v153;
      *(_BYTE *)v153 = v152;
      v156 = *(_QWORD *)(v153 + 8);
      *(_QWORD *)(v153 + 8) = v154;
      v186 = v156;
      v185 = v155;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      std::string::_M_dispose();
    }
    else
    {
      if ( (unsigned __int64)v208 <= 1 )
        std::string::basic_string<std::allocator<char>>(
          v214.m128i_i64,
          "decompile failed and python fallback produced no output",
          v81,
          v82,
          v83,
          v84,
          v165,
          (int)v166,
          v168);
      else
        std::string::basic_string<std::allocator<char>>(v214.m128i_i64, v207, v81, v82, v83, v84, v165, (int)v166, v168);
      v183 = 0;
      v184 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v85 = (_QWORD *)operator new(0x20u);
      v86 = v85 + 2;
      v87 = v85;
      v88 = v214.m128i_i64[1];
      *v85 = v85 + 2;
      if ( (__int128 *)v214.m128i_i64[0] == &v215 )
      {
        v157 = v88 + 1;
        if ( (unsigned int)(v88 + 1) >= 8 )
        {
          v85[2] = v215;
          *(_QWORD *)((char *)v86 + v157 - 8) = *(__int64 *)((char *)&v214.m128i_i64[1] + v157);
          v158 = (unsigned __int64)(v85 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v159 = (_DWORD)v86 - v158;
          v160 = (char *)((char *)&v215 - ((char *)v86 - v158));
          v161 = (v159 + v157) & 0xFFFFFFF8;
          if ( v161 >= 8 )
          {
            v162 = v161 & 0xFFFFFFF8;
            v163 = 0;
            do
            {
              v164 = v163;
              v163 += 8;
              *(_QWORD *)(v158 + v164) = *(_QWORD *)&v160[v164];
            }
            while ( v163 < v162 );
          }
        }
        else if ( (v157 & 4) != 0 )
        {
          *((_DWORD *)v85 + 4) = v215;
          *(_DWORD *)((char *)v86 + v157 - 4) = *(__int32 *)((char *)&v214.m128i_i32[3] + v157);
        }
        else if ( (_DWORD)v88 != -1 )
        {
          *((_BYTE *)v85 + 16) = v215;
          if ( (v157 & 2) != 0 )
            *(_WORD *)((char *)v86 + v157 - 2) = *(__int16 *)((char *)&v214.m128i_i16[7] + v157);
        }
      }
      else
      {
        *v85 = v214.m128i_i64[0];
        v85[2] = v215;
      }
      v87[1] = v88;
      v214 = (__m128i)(unsigned __int64)&v215;
      LOBYTE(v215) = 0;
      v89 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v90 = *(_BYTE *)v89;
      v91 = *(_QWORD *)(v89 + 8);
      *(_BYTE *)v89 = 3;
      *(_QWORD *)(v89 + 8) = v87;
      LOBYTE(v183) = v90;
      v184 = v91;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      std::string::_M_dispose();
    }
  }
LABEL_97:
  v182 = v49;
  v181 = v168;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v209 )
  {
    *(_QWORD *)&v210 = 0;
    qfree();
  }
  if ( v207 )
  {
    *(_QWORD *)&v208 = 0;
    qfree();
  }
  if ( v205 )
  {
    *(_QWORD *)&v206 = 0;
    qfree();
  }
  if ( v203 )
  {
    *(_QWORD *)&v204 = 0;
    qfree();
  }
  v109 = v201;
  --*(_DWORD *)(extlang + 12);
  if ( v109 )
  {
    *(_QWORD *)&v202 = 0;
    qfree();
  }
  return v165;
}

