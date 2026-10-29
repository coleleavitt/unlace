_QWORD *__fastcall ida_mcp::tools::source_info::`anonymous namespace'::handle_get_tryblks(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v6; // rbp
  char *v7; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v9; // rax
  void *v10; // rbp
  size_t *v11; // r15
  __int64 v12; // rax
  _QWORD *v13; // rbp
  _QWORD *v14; // r14
  size_t v15; // r12
  const void *v16; // rdi
  _QWORD *v17; // r13
  size_t i; // rbx
  size_t v19; // rdx
  int v20; // eax
  __int64 v21; // rbx
  size_t v22; // rbx
  size_t v23; // rdx
  int v24; // eax
  __int64 v25; // r12
  char v26; // al
  char *v27; // rbx
  int *v28; // rax
  int *v29; // r13
  __int64 v30; // r12
  std::runtime_error *v31; // rbx
  __int64 *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  size_t v47; // rax
  unsigned int v48; // ebp
  _QWORD *v49; // rdx
  _QWORD *v50; // rax
  _QWORD *v51; // rcx
  _QWORD *v52; // rdx
  size_t v53; // rsi
  __int64 v54; // rdx
  __int64 *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 *v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  char *v68; // rbx
  _QWORD *v70; // rax
  unsigned __int64 v71; // rcx
  char *v72; // rax
  char *v73; // rbx
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // edx
  __int64 v77; // rsi
  unsigned int v78; // edi
  unsigned __int64 v79; // r8
  char *v80; // rdx
  char *v81; // r9
  unsigned int v82; // edx
  unsigned int v83; // edx
  unsigned int v84; // ecx
  __int64 v85; // rdi
  int v86; // [rsp+0h] [rbp-498h]
  int v87; // [rsp+0h] [rbp-498h]
  int v88; // [rsp+0h] [rbp-498h]
  int v89; // [rsp+0h] [rbp-498h]
  int v90; // [rsp+0h] [rbp-498h]
  int v91; // [rsp+0h] [rbp-498h]
  int v92; // [rsp+8h] [rbp-490h]
  int v93; // [rsp+8h] [rbp-490h]
  int v94; // [rsp+8h] [rbp-490h]
  int v95; // [rsp+8h] [rbp-490h]
  int v96; // [rsp+8h] [rbp-490h]
  int v97; // [rsp+8h] [rbp-490h]
  __int64 v98; // [rsp+8h] [rbp-490h]
  __int64 v99; // [rsp+10h] [rbp-488h]
  __int64 v100; // [rsp+10h] [rbp-488h]
  __int64 v101; // [rsp+10h] [rbp-488h]
  __int64 v102; // [rsp+10h] [rbp-488h]
  __int64 v103; // [rsp+10h] [rbp-488h]
  __int64 v104; // [rsp+10h] [rbp-488h]
  int v105; // [rsp+10h] [rbp-488h]
  char *v106; // [rsp+18h] [rbp-480h]
  int v107; // [rsp+38h] [rbp-460h]
  int v108; // [rsp+40h] [rbp-458h]
  int v109; // [rsp+48h] [rbp-450h]
  int v110; // [rsp+50h] [rbp-448h]
  int v111; // [rsp+68h] [rbp-430h]
  __int64 tryblks; // [rsp+108h] [rbp-390h]
  size_t v114; // [rsp+180h] [rbp-318h]
  _QWORD v115[4]; // [rsp+1B0h] [rbp-2E8h] BYREF
  void *v116; // [rsp+1D0h] [rbp-2C8h] BYREF
  size_t v117; // [rsp+1D8h] [rbp-2C0h]
  _QWORD v118[2]; // [rsp+1E0h] [rbp-2B8h] BYREF
  void *v119; // [rsp+1F0h] [rbp-2A8h] BYREF
  __int128 v120; // [rsp+1F8h] [rbp-2A0h]
  char v121; // [rsp+208h] [rbp-290h]
  __int128 v122; // [rsp+210h] [rbp-288h]
  char v123; // [rsp+220h] [rbp-278h] BYREF
  __int128 v124; // [rsp+228h] [rbp-270h] BYREF
  char v125; // [rsp+238h] [rbp-260h]
  __int128 v126; // [rsp+240h] [rbp-258h]
  char v127; // [rsp+250h] [rbp-248h] BYREF
  __int128 v128; // [rsp+258h] [rbp-240h] BYREF
  char v129; // [rsp+268h] [rbp-230h]
  __int128 v130; // [rsp+270h] [rbp-228h]
  void *s2; // [rsp+280h] [rbp-218h] BYREF
  size_t n[2]; // [rsp+288h] [rbp-210h] BYREF
  __int128 v133; // [rsp+2A0h] [rbp-1F8h]
  void *v134[3]; // [rsp+2B0h] [rbp-1E8h] BYREF
  _QWORD v135[3]; // [rsp+2C8h] [rbp-1D0h] BYREF
  _QWORD v136[3]; // [rsp+2E0h] [rbp-1B8h] BYREF
  _QWORD v137[3]; // [rsp+2F8h] [rbp-1A0h] BYREF
  char s[8]; // [rsp+310h] [rbp-188h] BYREF
  _BYTE v139[8]; // [rsp+428h] [rbp-70h]
  char v140[40]; // [rsp+430h] [rbp-68h] BYREF
  unsigned __int64 v141; // [rsp+458h] [rbp-40h]

  v141 = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>((__int64 *)&s2, "address", a3, a4, a5, a6, v86, v92, v99);
  v11 = (size_t *)s2;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v9 = "null";
        break;
      case 1:
        v9 = "object";
        break;
      case 2:
        v9 = (char *)"array";
        break;
      case 3:
        v9 = "string";
        break;
      case 4:
        v9 = "boolean";
        break;
      case 8:
        v9 = "binary";
        break;
      case 9:
        v9 = "discarded";
        break;
      default:
        v9 = "number";
        break;
    }
    v115[0] = v9;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_QWORD **)(v12 + 16);
  v14 = (_QWORD *)(v12 + 8);
  if ( !v13 )
    goto LABEL_25;
  v15 = n[0];
  v16 = (const void *)v13[4];
  v17 = (_QWORD *)(v12 + 8);
  for ( i = v13[5]; ; i = v13[5] )
  {
    v19 = i;
    if ( v15 <= i )
      v19 = v15;
    if ( !v19 || (v20 = memcmp(v16, v11, v19)) == 0 )
    {
      v21 = i - v15;
      if ( v21 > 0x7FFFFFFF )
        goto LABEL_4;
      if ( v21 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v20 = v21;
    }
    if ( v20 < 0 )
      break;
LABEL_4:
    v17 = v13;
    v13 = (_QWORD *)v13[2];
    if ( !v13 )
      goto LABEL_15;
LABEL_5:
    v16 = (const void *)v13[4];
  }
  v13 = (_QWORD *)v13[3];
  if ( v13 )
    goto LABEL_5;
LABEL_15:
  if ( v14 == v17 )
    goto LABEL_25;
  v22 = v17[5];
  v23 = v22;
  if ( v15 <= v22 )
    v23 = v15;
  if ( v23 )
  {
    v24 = memcmp(v11, (const void *)v17[4], v23);
    if ( v24 )
    {
LABEL_23:
      if ( v24 >= 0 )
        v14 = v17;
      goto LABEL_25;
    }
  }
  v25 = v15 - v22;
  if ( v25 > 0x7FFFFFFF )
  {
    v14 = v17;
    goto LABEL_26;
  }
  if ( v25 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v24 = v25;
    goto LABEL_23;
  }
LABEL_25:
  if ( v11 != &n[1] )
LABEL_26:
    operator delete(v11, n[1] + 1);
  LOBYTE(n[1]) = 0;
  v26 = *((_BYTE *)v14 + 64);
  s2 = &n[1];
  n[0] = 0;
  if ( v26 != 3 )
  {
    v6 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *((_BYTE *)v14 + 64) )
    {
      case 0:
        v7 = "null";
        break;
      case 1:
        v7 = "object";
        break;
      case 2:
        v7 = (char *)"array";
        break;
      case 3:
        v7 = "string";
        break;
      case 4:
        v7 = "boolean";
        break;
      case 8:
        v7 = "binary";
        break;
      case 9:
        v7 = "discarded";
        break;
      default:
        v7 = "number";
        break;
    }
    v115[0] = v7;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v6,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v6,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v27 = (char *)s2;
  if ( n[0] > 2 && *(_BYTE *)s2 == 48 && (*((_BYTE *)s2 + 1) & 0xDF) == 0x58 )
    v27 = (char *)s2 + 2;
  v28 = __errno_location();
  *v28 = 0;
  v29 = v28;
  v30 = __isoc23_strtoull();
  if ( v27 == (char *)v115[0] || *(_BYTE *)v115[0] || *v29 == 34 && v30 == -1 )
  {
    if ( s2 != &n[1] )
      operator delete(s2, n[1] + 1);
    v31 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v31, "Invalid address");
    __cxa_throw(
      v31,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( s2 != &n[1] )
    operator delete(s2, n[1] + 1);
  if ( !get_func() )
  {
    v10 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v10,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  tryblks = get_tryblks();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  memset(v115, 0, 24);
  get_func_name();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v119) = 3;
  v32 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v32, "function", v33, v34, v35, v36, v87, v93, v100);
  v120 = (unsigned __int64)v32;
  v121 = 0;
  *(_QWORD *)&v122 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v121 = 3;
  v37 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v37,
    _qstring<char>::c_str(void)const::nullstr,
    v38,
    v39,
    v40,
    v41,
    v88,
    v94,
    v101);
  v122 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v134,
    (const __m128i *)&v119);
  v134[2] = nullptr;
  v123 = 0;
  *(_QWORD *)&v124 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v123 = 3;
  v42 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v42, "function_address", v43, v44, v45, v46, (int)&v124, v95, v102);
  v124 = (unsigned __int64)v42;
  qsnprintf();
  v116 = v118;
  v47 = strlen(v140);
  v114 = v47;
  v48 = v47;
  if ( v47 > 0xF )
  {
    v70 = (_QWORD *)std::string::_M_create();
    v116 = v70;
    v118[0] = v114;
    goto LABEL_55;
  }
  if ( v47 == 1 )
  {
    LOBYTE(v118[0]) = v140[0];
LABEL_43:
    v49 = v118;
  }
  else
  {
    if ( !v47 )
      goto LABEL_43;
    v70 = v118;
LABEL_55:
    if ( v48 >= 8 )
    {
      *v70 = *(_QWORD *)v140;
      *(_QWORD *)((char *)v70 + v48 - 8) = *(_QWORD *)&v139[v48];
      v71 = (unsigned __int64)(v70 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v72 = (char *)v70 - v71;
      v73 = (char *)(v140 - v72);
      v74 = (v48 + (_DWORD)v72) & 0xFFFFFFF8;
      if ( v74 >= 8 )
      {
        v75 = v74 & 0xFFFFFFF8;
        v76 = 0;
        do
        {
          v77 = v76;
          v76 += 8;
          *(_QWORD *)(v71 + v77) = *(_QWORD *)&v73[v77];
        }
        while ( v76 < v75 );
      }
    }
    else if ( (v48 & 4) != 0 )
    {
      *(_DWORD *)v70 = *(_DWORD *)v140;
      *(_DWORD *)((char *)v70 + v48 - 4) = *(_DWORD *)&v139[v48 + 4];
    }
    else if ( v48 )
    {
      *(_BYTE *)v70 = v140[0];
      if ( (v48 & 2) != 0 )
        *(_WORD *)((char *)v70 + v48 - 2) = *(_WORD *)&v139[v48 + 6];
    }
    v47 = v114;
    v49 = v116;
  }
  v117 = v47;
  *((_BYTE *)v49 + v47) = 0;
  v125 = 0;
  *(_QWORD *)&v126 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v125 = 3;
  v50 = (_QWORD *)operator new(0x20u);
  v51 = v116;
  v52 = v50 + 2;
  v53 = v117;
  *v50 = v50 + 2;
  if ( v51 == v118 )
  {
    v78 = v53 + 1;
    if ( (unsigned int)(v53 + 1) >= 8 )
    {
      v50[2] = v118[0];
      *(_QWORD *)((char *)v52 + v78 - 8) = *(_QWORD *)((char *)&v118[-1] + v78);
      v79 = (unsigned __int64)(v50 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v80 = (char *)v52 - v79;
      v81 = (char *)((char *)v118 - v80);
      v82 = (v78 + (_DWORD)v80) & 0xFFFFFFF8;
      if ( v82 >= 8 )
      {
        v83 = v82 & 0xFFFFFFF8;
        v84 = 0;
        do
        {
          v85 = v84;
          v84 += 8;
          *(_QWORD *)(v79 + v85) = *(_QWORD *)&v81[v85];
        }
        while ( v84 < v83 );
      }
    }
    else if ( (v78 & 4) != 0 )
    {
      *((_DWORD *)v50 + 4) = v118[0];
      *(_DWORD *)((char *)v52 + v78 - 4) = *(_DWORD *)((char *)&v117 + v78 + 4);
    }
    else if ( (_DWORD)v53 != -1 )
    {
      *((_BYTE *)v50 + 16) = v118[0];
      if ( (v78 & 2) != 0 )
        *(_WORD *)((char *)v52 + v78 - 2) = *(_WORD *)((char *)&v117 + v78 + 6);
    }
  }
  else
  {
    v54 = v118[0];
    *v50 = v51;
    v50[2] = v54;
  }
  v50[1] = v53;
  v116 = v118;
  v117 = 0;
  LOBYTE(v118[0]) = 0;
  v126 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v135,
    (const __m128i *)&v123);
  v135[2] = 0;
  v127 = 0;
  *(_QWORD *)&v128 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v127 = 3;
  v55 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v55, "tryblk_count", v56, v57, v58, v59, v89, v96, v103);
  v129 = 6;
  v130 = (unsigned __int64)tryblks;
  v128 = (unsigned __int64)v55;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v136,
    (const __m128i *)&v127);
  v136[2] = 0;
  LOBYTE(s2) = 0;
  n[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(s2) = 3;
  v60 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v60, "tryblks", v61, v62, v63, v64, v90, v97, v104);
  *(_OWORD *)n = (unsigned __int64)v60;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *((_QWORD *)&v133 + 1) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v137,
    (const __m128i *)&s2);
  v137[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v134,
    4,
    v65,
    v66,
    v67,
    v91,
    v98,
    v105,
    (int)v134,
    (int)&v128,
    (int)n,
    (__int64)v115,
    v107,
    v108,
    v109,
    v110,
    (char)&v119,
    (__int64)&v116,
    v111,
    (__int64)&s2);
  v68 = s;
  do
  {
    v68 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v68 != v106 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v116 != v118 )
    operator delete(v116, v118[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v115[0] )
  {
    v115[1] = 0;
    qfree();
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

