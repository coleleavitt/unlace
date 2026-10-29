__int64 __fastcall ida_mcp::tools::frames::`anonymous namespace'::handle_get_frame_size(int a1, __int64 a2)
{
  void *v2; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *v3; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r14
  size_t v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  size_t v13; // rdx
  int v14; // eax
  _BYTE *v15; // rbx
  int *v16; // rax
  int *v17; // r13
  __int64 v18; // rbp
  std::runtime_error *v19; // rax
  __int64 frame_size; // r14
  __int64 *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 *v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // rsi
  __int64 *v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  char *v47; // rbp
  unsigned int v49; // edx
  unsigned __int64 v50; // rdi
  char *v51; // rcx
  char *v52; // r8
  unsigned int v53; // edx
  unsigned int v54; // edx
  unsigned int v55; // ecx
  __int64 v56; // r9
  int v57; // [rsp+0h] [rbp-1A8h]
  int v58; // [rsp+0h] [rbp-1A8h]
  int v59; // [rsp+0h] [rbp-1A8h]
  _QWORD *v60; // [rsp+0h] [rbp-1A8h]
  __int64 v61; // [rsp+0h] [rbp-1A8h]
  int v62; // [rsp+8h] [rbp-1A0h]
  int v63; // [rsp+8h] [rbp-1A0h]
  int v64; // [rsp+8h] [rbp-1A0h]
  __int64 v65; // [rsp+8h] [rbp-1A0h]
  __int64 v66; // [rsp+10h] [rbp-198h]
  __int64 v67; // [rsp+10h] [rbp-198h]
  __int64 v68; // [rsp+10h] [rbp-198h]
  int v69; // [rsp+10h] [rbp-198h]
  int v70; // [rsp+18h] [rbp-190h]
  int frame_retsize; // [rsp+1Ch] [rbp-18Ch]
  __int64 v72; // [rsp+30h] [rbp-178h]
  _BYTE *v73; // [rsp+38h] [rbp-170h]
  void *v74; // [rsp+40h] [rbp-168h] BYREF
  __int64 v75; // [rsp+48h] [rbp-160h]
  __int64 v76; // [rsp+50h] [rbp-158h] BYREF
  char v77; // [rsp+58h] [rbp-150h]
  __int64 v78; // [rsp+60h] [rbp-148h] BYREF
  __int128 v79; // [rsp+68h] [rbp-140h] BYREF
  char v80; // [rsp+78h] [rbp-130h]
  __int128 v81; // [rsp+80h] [rbp-128h] BYREF
  char v82; // [rsp+90h] [rbp-118h] BYREF
  __int128 v83; // [rsp+98h] [rbp-110h]
  char v84; // [rsp+A8h] [rbp-100h]
  __int64 v85; // [rsp+B0h] [rbp-F8h]
  __int64 v86; // [rsp+B8h] [rbp-F0h]
  void *v87; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 s2; // [rsp+C8h] [rbp-E0h] BYREF
  char v89; // [rsp+D8h] [rbp-D0h]
  __int64 v90; // [rsp+E0h] [rbp-C8h]
  __int64 v91; // [rsp+E8h] [rbp-C0h]
  _QWORD v92[3]; // [rsp+F0h] [rbp-B8h] BYREF
  _QWORD v93[3]; // [rsp+108h] [rbp-A0h] BYREF
  _QWORD v94[3]; // [rsp+120h] [rbp-88h] BYREF
  char v95; // [rsp+138h] [rbp-70h] BYREF
  char v96[40]; // [rsp+140h] [rbp-68h] BYREF
  unsigned __int64 v97; // [rsp+168h] [rbp-40h]

  v97 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v87 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
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
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(v5 + 16);
  v7 = v5 + 8;
  if ( v6 )
  {
    v8 = v5 + 8;
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v6 + 40);
        if ( !v11 )
          break;
        v9 = 7;
        if ( v11 <= 7 )
          v9 = *(_QWORD *)(v6 + 40);
        v10 = memcmp(*(const void **)(v6 + 32), (char *)&s2 + 8, v9);
        if ( v10 || (v10 = v11 - 7, (__int64)(v11 - 7) <= 0x7FFFFFFF) )
        {
          if ( v10 < 0 )
            break;
        }
        v8 = v6;
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v6 )
          goto LABEL_12;
      }
      v6 = *(_QWORD *)(v6 + 24);
    }
    while ( v6 );
LABEL_12:
    if ( v7 != v8 )
    {
      v12 = *(_QWORD *)(v8 + 40);
      if ( v12 )
      {
        v13 = 7;
        if ( v12 <= 7 )
          v13 = *(_QWORD *)(v8 + 40);
        v14 = memcmp((char *)&s2 + 8, *(const void **)(v8 + 32), v13);
        if ( v14 || (v14 = 7 - v12, (__int64)(7 - v12) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v14 >= 0 )
            v7 = v8;
        }
      }
      else
      {
        v7 = v8;
      }
    }
  }
  v87 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v7 + 64) != 3 )
  {
    v3 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
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
  v15 = v87;
  v16 = __errno_location();
  *v16 = 0;
  v17 = v16;
  v18 = __isoc23_strtoull();
  if ( v15 == v73 || *v73 || *v17 == 34 && v18 == -1 )
  {
    if ( v87 != (char *)&s2 + 8 )
      operator delete(v87, *((_QWORD *)&s2 + 1) + 1LL);
    v19 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v19, "Invalid address format");
    ida_mcp::tools::frames::`anonymous namespace'::handle_get_frame_size();
  }
  if ( v87 != (char *)&s2 + 8 )
    operator delete(v87, *((_QWORD *)&s2 + 1) + 1LL);
  if ( !get_func() )
  {
    v2 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  frame_size = get_frame_size();
  frame_retsize = get_frame_retsize();
  *(_QWORD *)&v79 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v78) = 3;
  v21 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v21, "function_address", v22, v23, v24, v25, a1, (int)&v79, v66);
  v79 = (unsigned __int64)v21;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v74, v96, v26, v27, v28, v29, v57, v62, v67);
  v80 = 0;
  *(_QWORD *)&v81 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v80 = 3;
  v30 = (_QWORD *)operator new(0x20u);
  v31 = (__int64 *)v74;
  v32 = v30 + 2;
  v33 = v75;
  *v30 = v30 + 2;
  if ( v31 == &v76 )
  {
    v49 = v33 + 1;
    if ( (unsigned int)(v33 + 1) >= 8 )
    {
      v30[2] = v76;
      *(_QWORD *)((char *)v32 + v49 - 8) = *(__int64 *)((char *)&v75 + v49);
      v50 = (unsigned __int64)(v30 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v51 = (char *)v32 - v50;
      v52 = (char *)((char *)&v76 - v51);
      v53 = ((_DWORD)v51 + v49) & 0xFFFFFFF8;
      if ( v53 >= 8 )
      {
        v54 = v53 & 0xFFFFFFF8;
        v55 = 0;
        do
        {
          v56 = v55;
          v55 += 8;
          *(_QWORD *)(v50 + v56) = *(_QWORD *)&v52[v56];
        }
        while ( v55 < v54 );
      }
    }
    else if ( (v49 & 4) != 0 )
    {
      *((_DWORD *)v30 + 4) = v76;
      *(_DWORD *)((char *)v32 + v49 - 4) = *(_DWORD *)((char *)&v75 + v49 + 4);
    }
    else if ( (_DWORD)v33 != -1 )
    {
      *((_BYTE *)v30 + 16) = v76;
      if ( (v49 & 2) != 0 )
        *(_WORD *)((char *)v32 + v49 - 2) = *(_WORD *)((char *)&v75 + v49 + 6);
    }
  }
  else
  {
    *v30 = v31;
    v30[2] = v76;
  }
  v30[1] = v33;
  v74 = &v76;
  v75 = 0;
  LOBYTE(v76) = 0;
  v81 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v92,
    (const __m128i *)&v78,
    2,
    1);
  v92[2] = 0;
  v82 = 0;
  *(_QWORD *)&v83 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v82 = 3;
  v34 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v34, "total_frame_size", v35, v36, v37, v38, v58, v63, (__int64)&v81);
  v84 = 6;
  v85 = frame_size;
  v86 = 0;
  v83 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v93,
    (const __m128i *)&v82,
    2,
    1);
  v93[2] = 0;
  LOBYTE(v87) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v87) = 3;
  v39 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v39, "return_address_size", v40, v41, v42, v43, v59, v64, v68);
  v89 = 5;
  v90 = frame_retsize;
  v91 = 0;
  s2 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v94,
    (const __m128i *)&v87,
    2,
    1);
  v94[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v60,
    (__int64)v92,
    3,
    v44,
    v45,
    v46,
    (int)v60,
    v65,
    v69,
    v70,
    (int)&v78,
    (int)&v74,
    v72,
    (int)v73,
    (int)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    *((__int64 *)&v79 + 1));
  v47 = &v95;
  do
  {
    v47 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v47 != (char *)v92 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v74 != &v76 )
    operator delete(v74, v76 + 1);
  return v61;
}

