__int64 __fastcall ida_mcp::tools::xrefs::get_data_xrefs_to(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  char *v7; // rax
  size_t *v8; // r14
  __int64 v9; // rax
  _QWORD *v10; // rbp
  _QWORD *v11; // r15
  size_t v12; // r12
  const void *v13; // rdi
  _QWORD *v14; // r13
  size_t i; // rbx
  size_t v16; // rdx
  int v17; // eax
  __int64 v18; // rbx
  size_t v19; // rbx
  size_t v20; // rdx
  int v21; // eax
  __int64 v22; // r12
  char *v23; // rbp
  int *v24; // rax
  int *v25; // r12
  __int64 v26; // r14
  std::runtime_error *v27; // rbx
  __int64 first_dref_to; // r12
  char j; // al
  __int64 next_dref_to; // rax
  __int64 *v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  _QWORD *v42; // rcx
  __int64 v43; // rdi
  __int64 *v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __m128i v54; // xmm0
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  char *v58; // rbp
  unsigned int v60; // esi
  unsigned __int64 v61; // r8
  char *v62; // rcx
  char *v63; // r9
  unsigned int v64; // edx
  unsigned int v65; // ecx
  __int64 v66; // rsi
  int v67; // [rsp+0h] [rbp-1E8h]
  int v68; // [rsp+0h] [rbp-1E8h]
  int v69; // [rsp+0h] [rbp-1E8h]
  int v70; // [rsp+0h] [rbp-1E8h]
  int v71; // [rsp+0h] [rbp-1E8h]
  int v72; // [rsp+8h] [rbp-1E0h]
  int v73; // [rsp+8h] [rbp-1E0h]
  int v74; // [rsp+8h] [rbp-1E0h]
  int v75; // [rsp+8h] [rbp-1E0h]
  const __m128i *v76; // [rsp+8h] [rbp-1E0h]
  __m128i v77; // [rsp+10h] [rbp-1D8h] BYREF
  __int128 *v78; // [rsp+20h] [rbp-1C8h]
  __int128 *v79; // [rsp+28h] [rbp-1C0h]
  char *v80; // [rsp+30h] [rbp-1B8h]
  void **v81; // [rsp+38h] [rbp-1B0h]
  int v82; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v83; // [rsp+48h] [rbp-1A0h]
  int v84; // [rsp+50h] [rbp-198h] BYREF
  char v85; // [rsp+58h] [rbp-190h]
  char *v86; // [rsp+60h] [rbp-188h] BYREF
  int v87; // [rsp+68h] [rbp-180h]
  __int64 v88; // [rsp+70h] [rbp-178h]
  void *v89; // [rsp+80h] [rbp-168h] BYREF
  __int64 v90; // [rsp+88h] [rbp-160h]
  _QWORD v91[2]; // [rsp+90h] [rbp-158h] BYREF
  char v92; // [rsp+A0h] [rbp-148h] BYREF
  __int128 v93; // [rsp+A8h] [rbp-140h]
  char v94; // [rsp+B8h] [rbp-130h]
  __int128 v95; // [rsp+C0h] [rbp-128h] BYREF
  char v96; // [rsp+D0h] [rbp-118h] BYREF
  __int128 v97; // [rsp+D8h] [rbp-110h] BYREF
  char v98; // [rsp+E8h] [rbp-100h]
  __int64 v99; // [rsp+F0h] [rbp-F8h]
  __int64 v100; // [rsp+F8h] [rbp-F0h]
  void *s2; // [rsp+100h] [rbp-E8h] BYREF
  size_t n[2]; // [rsp+108h] [rbp-E0h] BYREF
  __int64 v103; // [rsp+128h] [rbp-C0h]
  _QWORD v104[3]; // [rsp+130h] [rbp-B8h] BYREF
  _QWORD v105[3]; // [rsp+148h] [rbp-A0h] BYREF
  _QWORD v106[3]; // [rsp+160h] [rbp-88h] BYREF
  char v107; // [rsp+178h] [rbp-70h] BYREF
  char v108[40]; // [rsp+180h] [rbp-68h] BYREF
  unsigned __int64 v109; // [rsp+1A8h] [rbp-40h]

  v77.m128i_i64[1] = a1;
  v109 = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&s2,
    "address",
    a3,
    a4,
    a5,
    a6,
    v67,
    (int)&s2,
    v77.m128i_i64[0]);
  v8 = (size_t *)s2;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x629C5);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD **)(v9 + 16);
  v11 = (_QWORD *)(v9 + 8);
  if ( !v10 )
    goto LABEL_63;
  v12 = n[0];
  v13 = (const void *)v10[4];
  v14 = (_QWORD *)(v9 + 8);
  for ( i = v10[5]; ; i = v10[5] )
  {
    v16 = i;
    if ( v12 <= i )
      v16 = v12;
    if ( !v16 || (v17 = memcmp(v13, v8, v16)) == 0 )
    {
      v18 = i - v12;
      if ( v18 > 0x7FFFFFFF )
        goto LABEL_4;
      if ( v18 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v17 = v18;
    }
    if ( v17 < 0 )
      break;
LABEL_4:
    v14 = v10;
    v10 = (_QWORD *)v10[2];
    if ( !v10 )
      goto LABEL_15;
LABEL_5:
    v13 = (const void *)v10[4];
  }
  v10 = (_QWORD *)v10[3];
  if ( v10 )
    goto LABEL_5;
LABEL_15:
  if ( v11 != v14 )
  {
    v19 = v14[5];
    v20 = v19;
    if ( v12 <= v19 )
      v20 = v12;
    if ( v20 && (v21 = memcmp(v8, (const void *)v14[4], v20)) != 0 )
    {
LABEL_23:
      if ( v21 < 0 )
        v14 = v11;
    }
    else
    {
      v22 = v12 - v19;
      if ( v22 <= 0x7FFFFFFF )
      {
        if ( v22 >= (__int64)0xFFFFFFFF80000000LL )
        {
          v21 = v22;
          goto LABEL_23;
        }
LABEL_63:
        v14 = v11;
      }
    }
  }
  if ( v8 != &n[1] )
    operator delete(v8, n[1] + 1);
  s2 = &n[1];
  n[0] = 0;
  LOBYTE(n[1]) = 0;
  if ( *((_BYTE *)v14 + 64) != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
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
    v86 = v7;
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
  v23 = (char *)s2;
  if ( n[0] > 2 && *(_BYTE *)s2 == 48 && (*((_BYTE *)s2 + 1) & 0xDF) == 0x58 )
    v23 = (char *)s2 + 2;
  v24 = __errno_location();
  *v24 = 0;
  v25 = v24;
  v26 = __isoc23_strtoull();
  if ( v23 == v86 || *v86 || *v25 == 34 && v26 == -1 )
  {
    if ( s2 != &n[1] )
      operator delete(s2, n[1] + 1);
    v27 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v27, "Invalid address format");
    __cxa_throw(
      v27,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( s2 != &n[1] )
    operator delete(s2, n[1] + 1);
  LOBYTE(v82) = 0;
  v83 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  first_dref_to = get_first_dref_to();
  if ( first_dref_to != -1 )
  {
    do
    {
      for ( j = xrefblk_t_first_to(); ; j = xrefblk_t_next_to() )
      {
        if ( !j )
        {
          next_dref_to = get_next_dref_to();
          goto LABEL_46;
        }
        if ( v86 == (char *)first_dref_to && !(_BYTE)v88 )
          break;
      }
      ida_mcp::tools::xrefs::build_xref_json((int)&v84, &v86);
      LOBYTE(v82) = 0;
      v83 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      next_dref_to = get_next_dref_to();
LABEL_46:
      first_dref_to = next_dref_to;
    }
    while ( next_dref_to != -1 );
  }
  v92 = 0;
  *(_QWORD *)&v93 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v92 = 3;
  v31 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v31, "address", v32, v33, v34, v35, (int)&v82, v72, v77.m128i_i64[0]);
  v93 = (unsigned __int64)v31;
  qsnprintf();
  v81 = &v89;
  std::string::basic_string<std::allocator<char>>((__int64 *)&v89, v108, v36, v37, v38, v39, v68, v73, v77.m128i_i64[0]);
  v94 = 0;
  v78 = &v95;
  *(_QWORD *)&v95 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v94 = 3;
  v40 = (_QWORD *)operator new(0x20u);
  v41 = v89;
  v42 = v40 + 2;
  v43 = v90;
  *v40 = v40 + 2;
  if ( v41 == v91 )
  {
    v60 = v43 + 1;
    if ( (unsigned int)(v43 + 1) >= 8 )
    {
      v40[2] = v91[0];
      *(_QWORD *)((char *)v42 + v60 - 8) = *(_QWORD *)((char *)&v91[-1] + v60);
      v61 = (unsigned __int64)(v40 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v62 = (char *)v42 - v61;
      v63 = (char *)((char *)v91 - v62);
      if ( (((_DWORD)v62 + v60) & 0xFFFFFFF8) >= 8 )
      {
        v64 = ((_DWORD)v62 + v60) & 0xFFFFFFF8;
        v65 = 0;
        do
        {
          v66 = v65;
          v65 += 8;
          *(_QWORD *)(v61 + v66) = *(_QWORD *)&v63[v66];
        }
        while ( v65 < v64 );
      }
    }
    else if ( (v60 & 4) != 0 )
    {
      *((_DWORD *)v40 + 4) = v91[0];
      *(_DWORD *)((char *)v42 + v60 - 4) = *(_DWORD *)((char *)&v90 + v60 + 4);
    }
    else if ( (_DWORD)v43 != -1 )
    {
      *((_BYTE *)v40 + 16) = v91[0];
      if ( (v60 & 2) != 0 )
        *(_WORD *)((char *)v42 + v60 - 2) = *(_WORD *)((char *)&v90 + v60 + 6);
    }
  }
  else
  {
    *v40 = v41;
    v40[2] = v91[0];
  }
  v40[1] = v43;
  v89 = v91;
  v90 = 0;
  LOBYTE(v91[0]) = 0;
  v80 = &v92;
  v95 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v104,
    (const __m128i *)&v92);
  v104[2] = 0;
  v96 = 0;
  *(_QWORD *)&v97 = 0;
  v79 = &v97;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v96 = 3;
  v44 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v44, "xref_count", v45, v46, v47, v48, v69, v74, v77.m128i_i64[0]);
  v97 = (unsigned __int64)v44;
  v98 = 6;
  v99 = 0;
  v100 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v105,
    (const __m128i *)&v96);
  v105[2] = 0;
  LOBYTE(s2) = 0;
  n[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(s2) = 3;
  v49 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v49, "xrefs", v50, v51, v52, v53, v70, v75, (__int64)v49);
  v54 = _mm_loadl_epi64(&v77);
  LOBYTE(v82) = 0;
  v83 = 0;
  *(__m128i *)n = v54;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v103 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v106,
    v76);
  v106[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    (_QWORD *)v77.m128i_i64[1],
    (__int64)v104,
    3,
    v55,
    v56,
    v57,
    v71,
    (__int64)v76,
    v77.m128i_i32[0],
    v77.m128i_i32[2],
    (int)v78,
    (int)v79,
    (__int64)v80,
    (int)v81,
    v82,
    v83,
    v84,
    v85,
    (__int64)v86,
    v87,
    v88);
  v58 = &v107;
  do
  {
    v58 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v58 != (char *)v104 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v89 != v91 )
    operator delete(v89, v91[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v77.m128i_i64[1];
}

