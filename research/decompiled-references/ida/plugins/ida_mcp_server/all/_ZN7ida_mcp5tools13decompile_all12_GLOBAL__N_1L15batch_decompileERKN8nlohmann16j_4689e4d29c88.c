__int64 __fastcall ida_mcp::tools::decompile_all::`anonymous namespace'::batch_decompile(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6)
{
  void *v6; // rbp
  void *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *exception; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  std::runtime_error *v17; // rbp
  char *v18; // rax
  __int64 func_qty; // r15
  __int64 v21; // rbp
  __int64 v22; // r14
  __int64 v23; // rax
  std::ios_base **v24; // r13
  __int64 v25; // rcx
  std::ios_base *v26; // r8
  __int64 v27; // rsi
  __int64 v28; // rdx
  size_t v29; // rax
  size_t v30; // r8
  __int64 v31; // r14
  unsigned __int64 v32; // r15
  __int64 v33; // r8
  _BYTE *v34; // rsi
  char *v35; // rbx
  unsigned __int8 (__fastcall *hexdsp)(__int64, char *, __int64 *, __int64); // rax
  __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // rbp
  __int64 v45; // r13
  size_t v46; // rdx
  int v47; // eax
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rbp
  size_t v50; // rdx
  int v51; // eax
  __int64 v52; // r13
  size_t v53; // rdx
  int v54; // eax
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rbp
  size_t v57; // rax
  int v58; // eax
  unsigned __int8 v59; // al
  unsigned __int8 *v60; // r14
  void *v61; // rdi
  size_t v62; // r14
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 *v65; // r15
  __m128i v66; // xmm1
  unsigned __int64 v67; // rax
  void *v68; // rsi
  _QWORD *v69; // r15
  __int64 v70; // rax
  char v71; // si
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  char v75; // si
  __int64 v76; // rdx
  __int64 v77; // r15
  __int64 v78; // rax
  char v79; // si
  __int64 v80; // rdx
  __int64 v81; // r15
  __int64 v82; // rax
  char v83; // si
  __int64 v84; // rdx
  __int64 v85; // rax
  char v86; // si
  __m128i v87; // xmm0
  __int64 v88; // rdx
  std::ios_base *v89; // rdi
  __int64 v90; // rax
  __int64 v92; // rcx
  __int64 v93; // r15
  __int64 v94; // r13
  __int64 v95; // rbx
  __int64 v96; // r15
  size_t v97; // rdx
  int v98; // eax
  unsigned __int64 v99; // rbp
  __int64 v100; // r15
  __int64 v101; // r13
  __int64 v102; // rax
  void *v103; // r14
  int *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rsi
  __int64 v107; // rdx
  unsigned __int8 *v108; // rax
  unsigned __int64 v109; // rcx
  size_t v110; // rax
  const void *v111; // rdi
  int v112; // eax
  __int64 v113; // rax
  unsigned __int8 *v114; // rcx
  int v115; // [rsp+0h] [rbp-14D8h]
  __int64 v116; // [rsp+8h] [rbp-14D0h]
  std::ios_base *v117; // [rsp+10h] [rbp-14C8h]
  std::ios_base *v118; // [rsp+10h] [rbp-14C8h]
  std::ios_base *v119; // [rsp+10h] [rbp-14C8h]
  std::ios_base *v120; // [rsp+10h] [rbp-14C8h]
  std::ios_base *v121; // [rsp+10h] [rbp-14C8h]
  __int64 v122; // [rsp+18h] [rbp-14C0h]
  unsigned __int8 *v123; // [rsp+18h] [rbp-14C0h]
  __m128i v124; // [rsp+20h] [rbp-14B8h] BYREF
  unsigned __int8 *v125; // [rsp+30h] [rbp-14A8h]
  __m128i *v126; // [rsp+38h] [rbp-14A0h]
  __m128i v127; // [rsp+40h] [rbp-1498h] BYREF
  __int64 v128; // [rsp+50h] [rbp-1488h]
  __int64 v129; // [rsp+58h] [rbp-1480h]
  std::locale *v130; // [rsp+60h] [rbp-1478h]
  std::ios_base *v131; // [rsp+68h] [rbp-1470h]
  __m128i v132; // [rsp+70h] [rbp-1468h] BYREF
  char *v133; // [rsp+80h] [rbp-1458h]
  unsigned __int8 v134; // [rsp+8Fh] [rbp-1449h]
  void *v135; // [rsp+90h] [rbp-1448h]
  __int64 v136; // [rsp+98h] [rbp-1440h]
  __int64 v137; // [rsp+A0h] [rbp-1438h] BYREF
  __int128 v138; // [rsp+A8h] [rbp-1430h]
  void *dest; // [rsp+C0h] [rbp-1418h] BYREF
  __int128 v140; // [rsp+C8h] [rbp-1410h]
  char *v141; // [rsp+E0h] [rbp-13F8h] BYREF
  __int64 v142; // [rsp+E8h] [rbp-13F0h]
  char v143; // [rsp+F0h] [rbp-13E8h] BYREF
  __m128i v144; // [rsp+100h] [rbp-13D8h] BYREF
  _OWORD v145[2]; // [rsp+110h] [rbp-13C8h] BYREF
  __int128 v146; // [rsp+130h] [rbp-13A8h]
  char v147[8]; // [rsp+140h] [rbp-1398h] BYREF
  int v148; // [rsp+148h] [rbp-1390h]
  char *v149; // [rsp+150h] [rbp-1388h]
  __int64 v150; // [rsp+158h] [rbp-1380h]
  char v151; // [rsp+160h] [rbp-1378h] BYREF
  _QWORD v152[28]; // [rsp+170h] [rbp-1368h] BYREF
  __int16 v153; // [rsp+250h] [rbp-1288h]
  __int128 v154; // [rsp+258h] [rbp-1280h]
  __int128 v155; // [rsp+268h] [rbp-1270h]
  __int64 v156; // [rsp+280h] [rbp-1258h] BYREF
  __int64 v157; // [rsp+288h] [rbp-1250h]
  _QWORD s2[7]; // [rsp+290h] [rbp-1248h] BYREF
  char v159[48]; // [rsp+2C8h] [rbp-1210h] BYREF
  char v160; // [rsp+2F8h] [rbp-11E0h] BYREF
  _QWORD v161[28]; // [rsp+380h] [rbp-1158h] BYREF
  __int16 v162; // [rsp+460h] [rbp-1078h]
  __int128 v163; // [rsp+468h] [rbp-1070h]
  __int128 v164; // [rsp+478h] [rbp-1060h]
  char s[24]; // [rsp+490h] [rbp-1048h] BYREF
  unsigned __int64 v166; // [rsp+1498h] [rbp-40h]

  v166 = __readfsqword(0x28u);
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                       &byte_7,
                       0xDEC0DE00000004LL,
                       &dest,
                       0,
                       &callui,
                       a6) != 14598366 )
    JUMPOUT(0x15FA44);
  ida_mcp::tools::cpp_class_recovery::ensure_recovery_done((ida_mcp::tools::cpp_class_recovery *)&byte_7);
  v137 = 0;
  v138 = 0;
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_3;
  v41 = *(_QWORD *)(a2 + 8);
  v42 = *(_QWORD *)(v41 + 16);
  if ( !v42 )
    goto LABEL_3;
  v43 = v41 + 8;
  v44 = v42;
  v45 = v43;
  do
  {
    while ( 1 )
    {
      v48 = *(_QWORD *)(v44 + 40);
      if ( !v48 )
        break;
      v46 = 9;
      if ( v48 <= 9 )
        v46 = *(_QWORD *)(v44 + 40);
      v47 = memcmp(*(const void **)(v44 + 32), "addresses", v46);
      if ( v47 || (v47 = v48 - 9, (__int64)(v48 - 9) <= 0x7FFFFFFF) )
      {
        if ( v47 < 0 )
          break;
      }
      v45 = v44;
      v44 = *(_QWORD *)(v44 + 16);
      if ( !v44 )
        goto LABEL_33;
    }
    v44 = *(_QWORD *)(v44 + 24);
  }
  while ( v44 );
LABEL_33:
  if ( v43 == v45 )
    goto LABEL_3;
  v49 = *(_QWORD *)(v45 + 40);
  if ( v49 )
  {
    v50 = 9;
    if ( v49 <= 9 )
      v50 = *(_QWORD *)(v45 + 40);
    v51 = memcmp(*(const void **)(v45 + 32), "addresses", v50);
    if ( !v51 )
    {
      v51 = v49 - 9;
      if ( (__int64)(v49 - 9) > 0x7FFFFFFF )
        goto LABEL_3;
    }
    if ( v51 > 0 )
      goto LABEL_3;
  }
  v52 = v43;
  strcpy((char *)s2, "addresses");
  do
  {
    while ( 1 )
    {
      v55 = *(_QWORD *)(v42 + 40);
      if ( !v55 )
        break;
      v53 = 9;
      if ( v55 <= 9 )
        v53 = *(_QWORD *)(v42 + 40);
      v54 = memcmp(*(const void **)(v42 + 32), s2, v53);
      if ( v54 || (v54 = v55 - 9, (__int64)(v55 - 9) <= 0x7FFFFFFF) )
      {
        if ( v54 < 0 )
          break;
      }
      v52 = v42;
      v42 = *(_QWORD *)(v42 + 16);
      if ( !v42 )
        goto LABEL_49;
    }
    v42 = *(_QWORD *)(v42 + 24);
  }
  while ( v42 );
LABEL_49:
  if ( v43 != v52 )
  {
    v56 = *(_QWORD *)(v52 + 40);
    if ( v56 )
    {
      v57 = 9;
      if ( v56 <= 9 )
        v57 = *(_QWORD *)(v52 + 40);
      v58 = memcmp(s2, *(const void **)(v52 + 32), v57);
      if ( v58 || (v58 = 9 - v56, (__int64)(9 - v56) >= (__int64)0xFFFFFFFF80000000LL) )
      {
        if ( v58 >= 0 )
          v43 = v52;
      }
    }
    else
    {
      v43 = v52;
    }
  }
  if ( *(_BYTE *)(v43 + 64) != 2 )
  {
LABEL_3:
    func_qty = get_func_qty();
    v21 = 0;
    v22 = 0;
    if ( !func_qty )
      goto LABEL_13;
    while ( 1 )
    {
      v23 = getn_func();
      v24 = (std::ios_base **)v23;
      if ( !v23 || (*(_BYTE *)(v23 + 16) & 4) != 0 )
        goto LABEL_6;
      if ( (unsigned __int8)ida_mcp::is_go_pathological_func() )
      {
        ++v21;
LABEL_6:
        if ( func_qty == ++v22 )
          goto LABEL_13;
      }
      else
      {
        v25 = v138;
        v26 = *v24;
        v27 = v137;
        v28 = v138 + 1;
        if ( *((_QWORD *)&v138 + 1) < (unsigned __int64)(v138 + 1) )
        {
          v117 = *v24;
          v40 = qvector_reserve();
          v25 = v138;
          v137 = v40;
          v27 = v40;
          v26 = v117;
          v28 = v138 + 1;
        }
        ++v22;
        *(_QWORD *)(v27 + 8 * v25) = v26;
        *(_QWORD *)&v138 = v28;
        if ( func_qty == v22 )
          goto LABEL_13;
      }
    }
  }
  v125 = (unsigned __int8 *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v59 = *v125;
  if ( *v125 == 1 )
  {
    v100 = *((_QWORD *)v125 + 1);
    v101 = *(_QWORD *)(v100 + 24);
    v42 = v100 + 8;
    if ( v42 != v101 )
    {
      if ( *(_BYTE *)(v101 + 64) != 3 )
      {
        v21 = 0;
        v127.m128i_i64[0] = 0;
        v123 = nullptr;
        v129 = 0x8000000000000000LL;
        v118 = (std::ios_base *)0x8000000000000000LL;
        goto LABEL_103;
      }
      v60 = (unsigned __int8 *)(v101 + 64);
      v21 = 0;
      v127.m128i_i64[0] = 0;
      v123 = nullptr;
      v129 = 0x8000000000000000LL;
      v118 = (std::ios_base *)0x8000000000000000LL;
      goto LABEL_106;
    }
  }
  else
  {
    if ( !v59 )
    {
      v127.m128i_i64[0] = 0;
      v21 = 0;
      v123 = nullptr;
      v118 = (std::ios_base *)(&dword_0 + 1);
      v129 = 1;
      goto LABEL_66;
    }
    if ( v59 != 2 )
    {
      v127.m128i_i64[0] = 0;
      v21 = 0;
      v123 = nullptr;
      v118 = nullptr;
      v129 = 1;
      do
      {
        if ( v59 <= 2u )
        {
          exception = __cxa_allocate_exception(0x20u);
          v124.m128i_i64[0] = (__int64)&v156;
          std::string::basic_string<std::allocator<char>>(
            &v156,
            "cannot get value",
            v13,
            v14,
            v15,
            v16,
            v115,
            v116,
            (__int64)v118);
          nlohmann::json_abi_v3_12_0::detail::invalid_iterator::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
            (__int64)exception,
            214);
          std::string::_M_dispose();
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::invalid_iterator,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::invalid_iterator::~invalid_iterator);
        }
        if ( v118 )
        {
          v7 = __cxa_allocate_exception(0x20u);
          v124.m128i_i64[0] = (__int64)&v156;
          std::string::basic_string<std::allocator<char>>(
            &v156,
            "cannot get value",
            v8,
            v9,
            v10,
            v11,
            v115,
            v116,
            (__int64)v118);
          nlohmann::json_abi_v3_12_0::detail::invalid_iterator::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
            (__int64)v7,
            214);
          std::string::_M_dispose();
          __cxa_throw(
            v7,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::invalid_iterator,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::invalid_iterator::~invalid_iterator);
        }
        v60 = v125;
        if ( v59 == 3 )
          goto LABEL_106;
LABEL_65:
        v118 = (std::ios_base *)((char *)v118 + 1);
LABEL_66:
        ;
      }
      while ( v118 != (std::ios_base *)v129 );
      goto LABEL_67;
    }
    v113 = *((_QWORD *)v125 + 1);
    v114 = *(unsigned __int8 **)v113;
    v123 = v114;
    v127.m128i_i64[0] = *(_QWORD *)(v113 + 8);
    if ( (unsigned __int8 *)v127.m128i_i64[0] != v114 )
    {
      if ( *v114 != 3 )
      {
        v21 = 0;
        v129 = 0x8000000000000000LL;
        v118 = (std::ios_base *)0x8000000000000000LL;
        v108 = v114;
        goto LABEL_123;
      }
      v60 = v114;
      v21 = 0;
      v129 = 0x8000000000000000LL;
      v118 = (std::ios_base *)0x8000000000000000LL;
      while ( 1 )
      {
LABEL_106:
        LOBYTE(v145[0]) = 0;
        v126 = &v144;
        v144 = (__m128i)(unsigned __int64)v145;
        if ( *v60 != 3 )
        {
          v6 = __cxa_allocate_exception(0x20u);
          switch ( *v60 )
          {
            case 0u:
              v18 = "null";
              break;
            case 1u:
              v18 = "object";
              break;
            case 2u:
              v18 = (char *)"array";
              break;
            case 3u:
              v18 = "string";
              break;
            case 4u:
              v18 = "boolean";
              break;
            case 8u:
              v18 = "binary";
              break;
            case 9u:
              v18 = "discarded";
              break;
            default:
              v18 = "number";
              break;
          }
          dest = v18;
          v124.m128i_i64[0] = (__int64)&v156;
          nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
          nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
            (__int64)v6,
            302);
          std::string::_M_dispose();
          __cxa_throw(
            v6,
            (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
            (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
        }
        std::string::_M_assign();
        v103 = (void *)v144.m128i_i64[0];
        if ( v144.m128i_i64[1] > 2uLL
          && *(_BYTE *)v144.m128i_i64[0] == 48
          && (*(_BYTE *)(v144.m128i_i64[0] + 1) & 0xDF) == 0x58 )
        {
          v103 = (void *)(v144.m128i_i64[0] + 2);
        }
        v104 = __errno_location();
        *v104 = 0;
        v124.m128i_i64[0] = (__int64)v104;
        v128 = __isoc23_strtoull();
        if ( v103 == dest || *(_BYTE *)dest || *(_DWORD *)v124.m128i_i64[0] == 34 && v128 == -1 )
        {
          std::string::_M_dispose();
          v59 = *v125;
        }
        else
        {
          std::string::_M_dispose();
          if ( get_func() && (unsigned __int8)ida_mcp::is_go_pathological_func() )
          {
            ++v21;
            v59 = *v125;
          }
          else
          {
            v105 = v138;
            v106 = v137;
            v107 = v138 + 1;
            if ( *((_QWORD *)&v138 + 1) < (unsigned __int64)(v138 + 1) )
            {
              v137 = qvector_reserve();
              v106 = v137;
              v105 = v138;
              v107 = v138 + 1;
            }
            *(_QWORD *)(v106 + 8 * v105) = v128;
            *(_QWORD *)&v138 = v107;
            v59 = *v125;
          }
        }
        if ( v59 == 1 )
          break;
        if ( v59 != 2 )
          goto LABEL_65;
        v108 = v123;
LABEL_123:
        v60 = v108 + 16;
        if ( v108 + 16 == (unsigned __int8 *)v127.m128i_i64[0] )
          goto LABEL_67;
        while ( v108[16] != 3 )
        {
          v108 = v60;
          v60 += 16;
          if ( v60 == (unsigned __int8 *)v127.m128i_i64[0] )
            goto LABEL_67;
        }
        v123 = v60;
      }
LABEL_103:
      while ( 1 )
      {
        v102 = std::_Rb_tree_increment();
        if ( v42 == v102 )
          goto LABEL_67;
        if ( *(_BYTE *)(v102 + 64) == 3 )
        {
          v60 = (unsigned __int8 *)(v102 + 64);
          goto LABEL_106;
        }
      }
    }
  }
  v21 = 0;
LABEL_67:
  if ( !(_QWORD)v138 )
  {
    v17 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v17, "No valid addresses provided (all filtered as go.shape-pathological)");
    __cxa_throw(
      v17,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
LABEL_13:
  dest = nullptr;
  v140 = 0;
  qtmpnam();
  v29 = strlen(s);
  v30 = v29;
  v31 = v29;
  if ( v29 )
  {
    v61 = dest;
    v62 = v29 + 1;
    if ( *((_QWORD *)&v140 + 1) < v29 + 1 )
    {
      v121 = (std::ios_base *)v29;
      dest = (void *)qvector_reserve();
      v30 = (size_t)v121;
      v61 = dest;
    }
    v120 = (std::ios_base *)v30;
    *(_QWORD *)&v140 = v62;
    memmove(v61, s, v30);
    *((_BYTE *)v120 + (_QWORD)dest) = 0;
    v31 = ((_QWORD)v140 == 0) + (_QWORD)v140 - 1LL;
    v33 = v31 + 2;
    v32 = v31 + 3;
  }
  else
  {
    v32 = 3;
    v33 = 2;
    *(_QWORD *)&v140 = 0;
  }
  v34 = dest;
  if ( *((_QWORD *)&v140 + 1) < v32 )
  {
    v119 = (std::ios_base *)v33;
    dest = (void *)qvector_reserve();
    v33 = (__int64)v119;
    v34 = dest;
  }
  *(_QWORD *)&v140 = v32;
  v34[v33] = 0;
  *(_WORD *)((char *)dest + v31) = 25390;
  v35 = (char *)dest;
  if ( !(_QWORD)v140 )
    v35 = _qstring<char>::c_str(void)const::nullstr;
  hexdsp = (unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))get_hexdsp();
  if ( !hexdsp(439, v35, &v137, 20) )
  {
    qunlink();
    ida_mcp::tools::decompile_all::`anonymous namespace'::batch_decompile();
  }
  v124.m128i_i64[0] = (__int64)&v156;
  std::ios_base::ios_base((std::ios_base *)v161);
  v162 = 0;
  v163 = 0;
  v161[0] = (char *)&`vtable for'std::ios + 16;
  v164 = 0;
  v37 = `VTT for'std::ifstream[1];
  v38 = `VTT for'std::ifstream[2];
  v161[27] = 0;
  v39 = *(_QWORD *)(v37 - 24);
  v156 = v37;
  v122 = v38;
  *(__int64 *)((char *)&v156 + v39) = v38;
  v157 = 0;
  std::ios::init();
  v156 = (__int64)&`vtable for'std::ifstream + 24;
  v161[0] = (char *)&`vtable for'std::ifstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  std::filebuf::open();
  std::ios::clear();
  v125 = (unsigned __int8 *)&v160;
  if ( !(unsigned __int8)std::__basic_file<char>::is_open() )
  {
    qunlink();
    JUMPOUT(0x15FB77);
  }
  v126 = &v144;
  v131 = (std::ios_base *)v152;
  v132.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  v127 = _mm_unpacklo_epi64(
           (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
           (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v152);
  v153 = 0;
  v154 = 0;
  v152[0] = (char *)&`vtable for'std::ios + 16;
  v155 = 0;
  v152[27] = 0;
  v63 = `VTT for'std::ostringstream[1];
  v64 = `VTT for'std::ostringstream[2];
  v65 = (__int64 *)((char *)v144.m128i_i64 + *(_QWORD *)(v63 - 24));
  v144.m128i_i64[0] = v63;
  *v65 = v64;
  v128 = v63;
  v129 = v64;
  std::ios::init();
  v66 = _mm_load_si128(&v127);
  memset(v145, 0, sizeof(v145));
  v144 = v66;
  v152[0] = (char *)&`vtable for'std::ostringstream + 64;
  v130 = (std::locale *)v147;
  v146 = 0;
  std::locale::locale((std::locale *)v147);
  v148 = 16;
  v151 = 0;
  v144.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
  v149 = &v151;
  v150 = 0;
  std::ios::init();
  std::ostream::operator<<();
  if ( !std::filebuf::close() )
    std::ios::clear();
  qunlink();
  v142 = 0;
  v127.m128i_i64[0] = (__int64)&v141;
  v141 = &v143;
  v143 = 0;
  if ( (_QWORD)v146 )
    std::string::_M_replace();
  else
    std::string::_M_assign();
  if ( *(_BYTE *)a2 == 1 )
  {
    v92 = *(_QWORD *)(a2 + 8);
    v93 = *(_QWORD *)(v92 + 16);
    v94 = v92 + 8;
    if ( !v93 )
      goto LABEL_98;
    v133 = (char *)s2;
    v95 = v93;
    v96 = v92 + 8;
    v132.m128i_i64[1] = v21;
    do
    {
      v99 = *(_QWORD *)(v95 + 40);
      if ( !v99 )
        goto LABEL_97;
      v97 = 8;
      if ( v99 <= 8 )
        v97 = *(_QWORD *)(v95 + 40);
      if ( ((v98 = memcmp(*(const void **)(v95 + 32), "max_size", v97)) != 0
         || (v98 = v99 - 8, (__int64)(v99 - 8) <= 0x7FFFFFFF))
        && v98 < 0 )
      {
LABEL_97:
        v95 = *(_QWORD *)(v95 + 24);
      }
      else
      {
        v94 = v95;
        v95 = *(_QWORD *)(v95 + 16);
      }
    }
    while ( v95 );
    v21 = v132.m128i_i64[1];
    if ( v96 == v94 )
      goto LABEL_98;
    v109 = *(_QWORD *)(v94 + 40);
    if ( v109 )
    {
      v110 = 8;
      v111 = *(const void **)(v94 + 32);
      v132.m128i_i64[1] = *(_QWORD *)(v94 + 40);
      if ( v109 <= 8 )
        v110 = v109;
      v112 = memcmp(v111, "max_size", v110);
      if ( !v112 )
      {
        v112 = v132.m128i_i32[2] - 8;
        if ( v132.m128i_i64[1] - 8 > 0x7FFFFFFF )
          goto LABEL_98;
      }
      if ( v112 > 0 )
        goto LABEL_98;
    }
    if ( (unsigned __int8)(*(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>()
                         - 5) > 1u )
    {
LABEL_98:
      v68 = &unk_400000;
    }
    else
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v135 = nullptr;
      nlohmann::json_abi_v3_12_0::detail::get_arithmetic_value<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,unsigned long,0>();
      v68 = v135;
    }
    v67 = v142;
  }
  else
  {
    v67 = v142;
    v68 = &unk_400000;
  }
  if ( (unsigned __int64)v68 >= v67 )
  {
    v134 = 0;
  }
  else
  {
    std::string::resize();
    v134 = 1;
  }
  v135 = nullptr;
  v136 = 0;
  *(_BYTE *)v116 = 0;
  *(_QWORD *)(v116 + 8) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v133 = v141;
  v132.m128i_i64[1] = v142;
  v69 = (_QWORD *)operator new(0x20u);
  *v69 = v69 + 2;
  std::string::_M_construct<true>();
  v70 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v71 = *(_BYTE *)v70;
  v72 = *(_QWORD *)(v70 + 8);
  *(_BYTE *)v70 = 3;
  *(_QWORD *)(v70 + 8) = v69;
  LOBYTE(v135) = v71;
  v136 = v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v136 = v134;
  v73 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v74 = v136;
  v75 = *(_BYTE *)v73;
  *(_BYTE *)v73 = 4;
  v76 = *(_QWORD *)(v73 + 8);
  *(_QWORD *)(v73 + 8) = v74;
  LOBYTE(v135) = v75;
  v136 = v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v77 = v142;
  v78 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v79 = *(_BYTE *)v78;
  v80 = *(_QWORD *)(v78 + 8);
  *(_BYTE *)v78 = 6;
  *(_QWORD *)(v78 + 8) = v77;
  LOBYTE(v135) = v79;
  v136 = v80;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v81 = v138;
  v82 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v83 = *(_BYTE *)v82;
  v84 = *(_QWORD *)(v82 + 8);
  *(_BYTE *)v82 = 6;
  *(_QWORD *)(v82 + 8) = v81;
  LOBYTE(v135) = v83;
  v136 = v84;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v85 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v86 = *(_BYTE *)v85;
  *(_BYTE *)v85 = 6;
  v87 = _mm_loadl_epi64(&v132);
  LOBYTE(v135) = v86;
  v88 = *(_QWORD *)(v85 + 8);
  *(_QWORD *)(v85 + 8) = v21;
  v136 = v88;
  v124 = _mm_unpacklo_epi64(v87, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_dispose();
  v144 = _mm_load_si128(&v124);
  v152[0] = (char *)&`vtable for'std::ostringstream + 64;
  std::string::_M_dispose();
  v144.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v130);
  v89 = v131;
  v144.m128i_i64[0] = v128;
  *(__int64 *)((char *)v144.m128i_i64 + *(_QWORD *)(v128 - 24)) = v129;
  v152[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v89);
  v156 = (__int64)&`vtable for'std::ifstream + 24;
  v161[0] = (char *)&`vtable for'std::ifstream + 64;
  s2[0] = (char *)&`vtable for'std::filebuf + 16;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file();
  s2[0] = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v159);
  v90 = *(_QWORD *)(v37 - 24);
  v156 = v37;
  *(__int64 *)((char *)&v156 + v90) = v122;
  v157 = 0;
  v161[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v161);
  if ( dest )
  {
    *(_QWORD *)&v140 = 0;
    qfree();
  }
  if ( v137 )
  {
    *(_QWORD *)&v138 = 0;
    qfree();
  }
  return v116;
}

