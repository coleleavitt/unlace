__int64 __fastcall ida_mcp::tools::xrefs::get_code_xrefs_to(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  const char *v7; // rbp
  size_t *v8; // r15
  __int64 v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // r14
  const void *v12; // rdi
  size_t v13; // rbp
  size_t v14; // rbx
  _QWORD *v15; // r13
  _QWORD *v16; // r12
  size_t v17; // rdx
  int v18; // eax
  __int64 v19; // rbp
  _QWORD *v20; // rcx
  size_t v21; // rbp
  size_t v22; // rdx
  int v23; // eax
  char *v24; // r14
  int *v25; // rax
  int *v26; // r15
  __int64 v27; // r12
  std::runtime_error *v28; // rbx
  unsigned __int8 v29; // r13
  __int64 first_cref_to; // rax
  char *v31; // rbx
  char i; // al
  __int64 next_cref_to; // rax
  __int64 *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rax
  _QWORD *v44; // rcx
  _QWORD *v45; // rdx
  __int128 v46; // xmm0
  __int64 v47; // rdi
  __int64 *v48; // rbp
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // rax
  __int64 *v54; // rbp
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 *v59; // rbp
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  char *v67; // r15
  unsigned int v69; // esi
  unsigned __int64 v70; // r8
  char *v71; // r9
  unsigned int v72; // eax
  unsigned int v73; // ecx
  __int64 v74; // rsi
  int v75; // [rsp+0h] [rbp-238h]
  int v76; // [rsp+0h] [rbp-238h]
  int v77; // [rsp+0h] [rbp-238h]
  int v78; // [rsp+0h] [rbp-238h]
  int v79; // [rsp+0h] [rbp-238h]
  int v80; // [rsp+0h] [rbp-238h]
  int v81; // [rsp+0h] [rbp-238h]
  int v82; // [rsp+8h] [rbp-230h]
  int v83; // [rsp+8h] [rbp-230h]
  int v84; // [rsp+8h] [rbp-230h]
  int v85; // [rsp+8h] [rbp-230h]
  int v86; // [rsp+8h] [rbp-230h]
  __int64 v87; // [rsp+8h] [rbp-230h]
  __int64 v88; // [rsp+10h] [rbp-228h]
  __int64 v89; // [rsp+10h] [rbp-228h]
  __int64 v90; // [rsp+10h] [rbp-228h]
  __int64 v91; // [rsp+10h] [rbp-228h]
  __int64 v92; // [rsp+10h] [rbp-228h]
  int v93; // [rsp+10h] [rbp-228h]
  __int64 v95; // [rsp+20h] [rbp-218h]
  int v96; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v97; // [rsp+58h] [rbp-1E0h]
  __int64 v98; // [rsp+60h] [rbp-1D8h] BYREF
  int v99; // [rsp+68h] [rbp-1D0h]
  char *v100; // [rsp+70h] [rbp-1C8h] BYREF
  char v101; // [rsp+80h] [rbp-1B8h]
  void *v102; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v103; // [rsp+98h] [rbp-1A0h]
  _QWORD v104[2]; // [rsp+A0h] [rbp-198h] BYREF
  char v105; // [rsp+B0h] [rbp-188h] BYREF
  __int128 v106; // [rsp+B8h] [rbp-180h] BYREF
  char v107; // [rsp+C8h] [rbp-170h]
  __int128 v108; // [rsp+D0h] [rbp-168h] BYREF
  char v109; // [rsp+E0h] [rbp-158h] BYREF
  __int128 v110; // [rsp+E8h] [rbp-150h] BYREF
  char v111; // [rsp+F8h] [rbp-140h]
  unsigned __int64 v112; // [rsp+100h] [rbp-138h]
  __int64 v113; // [rsp+108h] [rbp-130h]
  char v114; // [rsp+110h] [rbp-128h] BYREF
  __int128 v115; // [rsp+118h] [rbp-120h] BYREF
  char v116; // [rsp+128h] [rbp-110h]
  __int64 v117; // [rsp+130h] [rbp-108h]
  __int64 v118; // [rsp+138h] [rbp-100h]
  void *s2; // [rsp+140h] [rbp-F8h] BYREF
  size_t n[2]; // [rsp+148h] [rbp-F0h] BYREF
  __int64 v121; // [rsp+168h] [rbp-D0h]
  _QWORD v122[2]; // [rsp+170h] [rbp-C8h] BYREF
  __int64 v123; // [rsp+180h] [rbp-B8h] BYREF
  _QWORD v124[3]; // [rsp+188h] [rbp-B0h] BYREF
  _QWORD v125[3]; // [rsp+1A0h] [rbp-98h] BYREF
  _QWORD v126[3]; // [rsp+1B8h] [rbp-80h] BYREF
  char v127[40]; // [rsp+1D0h] [rbp-68h] BYREF
  unsigned __int64 v128; // [rsp+1F8h] [rbp-40h]

  v128 = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>((__int64 *)&s2, "address", a3, a4, a5, a6, v75, v82, v88);
  v8 = (size_t *)s2;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        v7 = "null";
        break;
      case 1:
        v7 = "object";
        break;
      case 2:
        v7 = "array";
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
    LOBYTE(v123) = 0;
    v122[0] = &v123;
    v122[1] = 0;
    strlen(v7);
    std::string::reserve();
    std::string::append((__int64)v122, "cannot use operator[] with a string argument with ");
    std::string::append((__int64)v122, v7);
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(v9 + 16);
  if ( !v10 )
  {
    v11 = (_QWORD *)(v9 + 8);
    goto LABEL_25;
  }
  v76 = a2;
  v11 = (_QWORD *)(v9 + 8);
  v12 = *(const void **)(v10 + 32);
  v13 = *(_QWORD *)(v10 + 40);
  v14 = n[0];
  v15 = *(_QWORD **)(v9 + 16);
  v16 = (_QWORD *)(v9 + 8);
  while ( 1 )
  {
    v17 = v13;
    if ( v14 <= v13 )
      v17 = v14;
    if ( !v17 || (v18 = memcmp(v12, v8, v17)) == 0 )
    {
      v19 = v13 - v14;
      if ( v19 > 0x7FFFFFFF )
        goto LABEL_4;
      if ( v19 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v18 = v19;
    }
    if ( v18 < 0 )
      break;
LABEL_4:
    v11 = v15;
    v15 = (_QWORD *)v15[2];
    if ( !v15 )
      goto LABEL_15;
LABEL_5:
    v12 = (const void *)v15[4];
    v13 = v15[5];
  }
  v15 = (_QWORD *)v15[3];
  if ( v15 )
    goto LABEL_5;
LABEL_15:
  v20 = v16;
  if ( v16 != v11 )
  {
    v21 = v11[5];
    v22 = v21;
    if ( v14 <= v21 )
      v22 = v14;
    if ( v22 && (v76 = (int)v16, v23 = memcmp(v8, (const void *)v11[4], v22), v20 = v16, v23) )
    {
LABEL_23:
      if ( v23 < 0 )
        v11 = v20;
    }
    else if ( (__int64)(v14 - v21) <= 0x7FFFFFFF )
    {
      if ( (__int64)(v14 - v21) >= (__int64)0xFFFFFFFF80000000LL )
      {
        v23 = v14 - v21;
        goto LABEL_23;
      }
      v11 = v20;
    }
  }
LABEL_25:
  if ( v8 != &n[1] )
    operator delete(v8, n[1] + 1);
  s2 = &n[1];
  n[0] = 0;
  LOBYTE(n[1]) = 0;
  if ( *((_BYTE *)v11 + 64) != 3 )
    JUMPOUT(0x63605);
  std::string::_M_assign();
  v24 = (char *)s2;
  if ( n[0] > 2 && *(_BYTE *)s2 == 48 && (*((_BYTE *)s2 + 1) & 0xDF) == 0x58 )
    v24 = (char *)s2 + 2;
  v25 = __errno_location();
  *v25 = 0;
  v26 = v25;
  v27 = __isoc23_strtoull();
  if ( v24 == v100 || *v100 || *v26 == 34 && v27 == -1 )
  {
    if ( s2 != &n[1] )
      operator delete(s2, n[1] + 1);
    v28 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v28, "Invalid address format");
    __cxa_throw(
      v28,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( s2 != &n[1] )
    operator delete(s2, n[1] + 1);
  LOBYTE(v100) = 0;
  v29 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<bool,char const(&)[13],bool,0>();
  LOBYTE(v96) = 0;
  v97 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  LOBYTE(v76) = 0;
  if ( v29 )
    first_cref_to = get_first_cref_to();
  else
    first_cref_to = get_first_fcref_to();
  v31 = (char *)first_cref_to;
  if ( first_cref_to != -1 )
  {
    do
    {
      for ( i = xrefblk_t_first_to(); i; i = xrefblk_t_next_to() )
      {
        if ( v100 == v31 && v101 )
        {
          ida_mcp::tools::xrefs::build_xref_json((int)&v98, &v100);
          v97 = 0;
          LOBYTE(v96) = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          break;
        }
      }
      if ( v29 )
        next_cref_to = get_next_cref_to();
      else
        next_cref_to = get_next_fcref_to();
      v31 = (char *)next_cref_to;
    }
    while ( next_cref_to != -1 );
  }
  v105 = 0;
  *(_QWORD *)&v106 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v105 = 3;
  v34 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v34, "address", v35, v36, v37, v38, v76, (int)&v106, (__int64)&v96);
  v106 = (unsigned __int64)v34;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v102, v127, v39, v40, v41, v42, v77, v83, v89);
  v107 = 0;
  *(_QWORD *)&v108 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v107 = 3;
  v43 = (_QWORD *)operator new(0x20u);
  v44 = v43 + 2;
  v45 = v43;
  v46 = (unsigned __int64)v43;
  v47 = v103;
  *v43 = v43 + 2;
  if ( v102 == v104 )
  {
    v69 = v47 + 1;
    if ( (unsigned int)(v47 + 1) >= 8 )
    {
      v43[2] = v104[0];
      *(_QWORD *)((char *)v44 + v69 - 8) = *(_QWORD *)((char *)&v104[-1] + v69);
      v70 = (unsigned __int64)(v43 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v71 = (char *)((char *)v104 - ((char *)v44 - v70));
      if ( ((v69 + (_DWORD)v44 - (_DWORD)v70) & 0xFFFFFFF8) >= 8 )
      {
        v72 = (v69 + (_DWORD)v44 - v70) & 0xFFFFFFF8;
        v73 = 0;
        do
        {
          v74 = v73;
          v73 += 8;
          *(_QWORD *)(v70 + v74) = *(_QWORD *)&v71[v74];
        }
        while ( v73 < v72 );
      }
    }
    else if ( (v69 & 4) != 0 )
    {
      *((_DWORD *)v43 + 4) = v104[0];
      *(_DWORD *)((char *)v44 + v69 - 4) = *(_DWORD *)((char *)&v103 + v69 + 4);
    }
    else if ( (_DWORD)v47 != -1 )
    {
      *((_BYTE *)v43 + 16) = v104[0];
      if ( (v69 & 2) != 0 )
        *(_WORD *)((char *)v44 + v69 - 2) = *(_WORD *)((char *)&v103 + v69 + 6);
    }
  }
  else
  {
    *v43 = v102;
    v43[2] = v104[0];
  }
  v45[1] = v47;
  v102 = v104;
  v103 = 0;
  LOBYTE(v104[0]) = 0;
  v108 = v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v122,
    (const __m128i *)&v105);
  v123 = 0;
  v109 = 0;
  *(_QWORD *)&v110 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v109 = 3;
  v48 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v48, "xref_count", v49, v50, v51, v52, v78, v84, v90);
  v110 = (unsigned __int64)v48;
  if ( (_BYTE)v79 == 1 )
  {
    v53 = 4905200;
  }
  else if ( (_BYTE)v79 == 2 )
  {
    v53 = 0xFFCFEFEFDB9B3BA8LL;
  }
  else
  {
    v53 = (_BYTE)v79 != 0;
  }
  v111 = 6;
  v112 = v53;
  v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v124,
    (const __m128i *)&v109);
  v124[2] = 0;
  v114 = 0;
  *(_QWORD *)&v115 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v114 = 3;
  v54 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v54, "include_flow", v55, v56, v57, v58, v79, v85, v91);
  v116 = 4;
  v117 = v29;
  v118 = 0;
  v115 = (unsigned __int64)v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v125,
    (const __m128i *)&v114);
  v125[2] = 0;
  LOBYTE(s2) = 0;
  n[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(s2) = 3;
  v59 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v59, "xrefs", v60, v61, v62, v63, v80, v86, v92);
  v97 = 0;
  LOBYTE(v96) = v81;
  *(_OWORD *)n = (unsigned __int64)v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v126,
    (const __m128i *)&s2);
  v126[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v122,
    4,
    v64,
    v65,
    v66,
    v81,
    v87,
    v93,
    (int)&s2,
    (int)a1,
    (int)&v108,
    (__int64)&v110,
    (int)&v115,
    (int)&v105,
    (int)&v102,
    v96,
    v97,
    v98,
    v99,
    (__int64)v100);
  v67 = v127;
  do
  {
    v67 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v67 != (char *)v122 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v102 != v104 )
    operator delete(v102, v104[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v95;
}

