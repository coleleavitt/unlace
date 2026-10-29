__int64 __fastcall ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_set_func_bounds(
        __int64 a1,
        __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // r13
  void *v3; // rbp
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  std::runtime_error *v5; // rbx
  char v6; // bl
  char v7; // dl
  char v8; // bp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  char *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  _QWORD *v17; // rbp
  __int64 v18; // rcx
  char *v19; // rbx
  size_t v20; // r14
  __int64 v21; // rax
  __int64 v22; // r12
  _QWORD *v23; // r15
  size_t v24; // r13
  size_t v25; // rdx
  int v26; // eax
  __int64 v27; // r13
  size_t v28; // rcx
  size_t v29; // rdx
  signed __int64 v30; // rax
  _QWORD *v32; // r10
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD *insert_hint_unique_pos; // rax
  __int64 v36; // rdx
  _QWORD *v37; // r10
  __int64 v38; // rbp
  __int64 v39; // rbx
  __int64 v40; // rbp
  __int64 v41; // r13
  __int64 v42; // r15
  size_t v43; // rdx
  int v44; // eax
  unsigned __int64 v45; // r12
  __int64 v46; // r14
  size_t v47; // rdx
  int v48; // eax
  unsigned __int64 v49; // r12
  char v50; // dl
  char v51; // bl
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  char v55; // dl
  char v56; // r13
  __int64 v57; // rbp
  unsigned int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // eax
  unsigned __int64 v62; // rsi
  char *v63; // rbx
  unsigned int v64; // eax
  unsigned int v65; // eax
  __int64 v66; // rdi
  unsigned __int64 v67; // rcx
  unsigned int v68; // edx
  unsigned int v69; // edx
  unsigned int v70; // esi
  __int64 v71; // rdi
  int v72; // [rsp+0h] [rbp-1C8h]
  int v73; // [rsp+0h] [rbp-1C8h]
  int v74; // [rsp+8h] [rbp-1C0h]
  __int64 v75; // [rsp+8h] [rbp-1C0h]
  __int64 v76; // [rsp+10h] [rbp-1B8h]
  char *v77; // [rsp+10h] [rbp-1B8h]
  _QWORD *v79; // [rsp+30h] [rbp-198h]
  __int64 v80; // [rsp+48h] [rbp-180h]
  size_t v81; // [rsp+50h] [rbp-178h]
  _QWORD *v82; // [rsp+50h] [rbp-178h]
  __int64 v83; // [rsp+98h] [rbp-130h]
  __int64 v84; // [rsp+B8h] [rbp-110h]
  __int64 v85; // [rsp+B8h] [rbp-110h]
  _BOOL8 v86; // [rsp+B8h] [rbp-110h]
  void *v87; // [rsp+C0h] [rbp-108h] BYREF
  __int64 v88; // [rsp+C8h] [rbp-100h]
  _QWORD v89[6]; // [rsp+D0h] [rbp-F8h] BYREF
  void *s2; // [rsp+120h] [rbp-A8h] BYREF
  size_t n; // [rsp+128h] [rbp-A0h]
  _QWORD v92[2]; // [rsp+130h] [rbp-98h] BYREF
  char v93[40]; // [rsp+160h] [rbp-68h] BYREF
  unsigned __int64 v94; // [rsp+188h] [rbp-40h]

  v94 = __readfsqword(0x28u);
  LOBYTE(v92[0]) = 0;
  n = 0;
  v6 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  s2 = v92;
  if ( v6 != 3 )
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
  ida_mcp::parse_ea(s2, n);
  v8 = v7;
  if ( s2 != v92 )
    operator delete(s2, v92[0] + 1LL);
  if ( !v8 )
  {
    v5 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v5, "Invalid address");
    __cxa_throw(
      v5,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( !get_func() )
  {
    v3 = __cxa_allocate_exception(0x10u);
    ida_mcp::format_ea[abi:cxx11]();
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v3,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v87, v93, v9, v10, v11, v12, v72, a1, (__int64)v92);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v13 = (_QWORD *)operator new(0x20u);
  v16 = (__int64)(v13 + 2);
  v17 = v13;
  v18 = v88;
  *v13 = v13 + 2;
  if ( v87 == v89 )
  {
    v61 = v18 + 1;
    if ( (unsigned int)(v18 + 1) >= 8 )
    {
      v17[2] = v89[0];
      *(_QWORD *)(v16 + v61 - 8) = *(_QWORD *)((char *)&v89[-1] + v61);
      v62 = (unsigned __int64)(v17 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v16 -= v62;
      v63 = (char *)v89 - v16;
      v64 = (v16 + v61) & 0xFFFFFFF8;
      v14 = (char *)v89 - v16;
      if ( v64 >= 8 )
      {
        v65 = v64 & 0xFFFFFFF8;
        LODWORD(v16) = 0;
        do
        {
          v66 = (unsigned int)v16;
          v16 = (unsigned int)(v16 + 8);
          v15 = *(_QWORD *)&v63[v66];
          *(_QWORD *)(v62 + v66) = v15;
        }
        while ( (unsigned int)v16 < v65 );
      }
    }
    else if ( (v61 & 4) != 0 )
    {
      *((_DWORD *)v17 + 4) = v89[0];
      *(_DWORD *)(v16 + v61 - 4) = *(_DWORD *)((char *)&v88 + v61 + 4);
    }
    else if ( (_DWORD)v18 != -1 )
    {
      *((_BYTE *)v17 + 16) = v89[0];
      if ( (v61 & 2) != 0 )
        *(_WORD *)(v16 + v61 - 2) = *(_WORD *)((char *)&v88 + v61 + 6);
    }
  }
  else
  {
    *v13 = v87;
    v13[2] = v89[0];
  }
  v17[1] = v18;
  LOBYTE(v89[0]) = 0;
  v87 = v89;
  v88 = 0;
  std::string::basic_string<std::allocator<char>>((__int64 *)&s2, "address", v16, v18, (__int64)v14, v15, v73, v74, v76);
  if ( !*(_BYTE *)v75 )
  {
    *(_BYTE *)v75 = 1;
    v80 = operator new(0x30u);
    v20 = n;
    *(_DWORD *)(v80 + 8) = 0;
    v23 = (_QWORD *)(v80 + 8);
    *(_QWORD *)(v80 + 16) = 0;
    *(_QWORD *)(v80 + 24) = v80 + 8;
    *(_QWORD *)(v80 + 32) = v80 + 8;
    *(_QWORD *)(v80 + 40) = 0;
    v79 = (_QWORD *)(v80 + 8);
    *(_QWORD *)(v75 + 8) = v80;
    v19 = (char *)s2;
    goto LABEL_37;
  }
  if ( *(_BYTE *)v75 != 1 )
  {
    v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
      v2,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v19 = (char *)s2;
  v20 = n;
  v21 = *(_QWORD *)(v75 + 8);
  v22 = *(_QWORD *)(v21 + 16);
  v23 = (_QWORD *)(v21 + 8);
  v80 = v21;
  v79 = (_QWORD *)(v21 + 8);
  if ( !v22 )
  {
LABEL_37:
    v32 = (_QWORD *)operator new(0x50u);
    v33 = v32 + 6;
    v32[4] = v32 + 6;
    if ( v19 == v77 )
    {
      v58 = v20 + 1;
      if ( (unsigned int)(v20 + 1) >= 8 )
      {
        v32[6] = *(_QWORD *)v77;
        *(_QWORD *)((char *)v33 + v58 - 8) = *(_QWORD *)&v77[v58 - 8];
        v67 = (unsigned __int64)(v32 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v68 = ((_DWORD)v33 - v67 + v58) & 0xFFFFFFF8;
        if ( v68 >= 8 )
        {
          v69 = v68 & 0xFFFFFFF8;
          v70 = 0;
          do
          {
            v71 = v70;
            v70 += 8;
            *(_QWORD *)(v67 + v71) = *(_QWORD *)(v77 - ((char *)v33 - v67) + v71);
          }
          while ( v70 < v69 );
        }
      }
      else if ( (v58 & 4) != 0 )
      {
        *((_DWORD *)v32 + 12) = *(_DWORD *)v77;
        *(_DWORD *)((char *)v33 + v58 - 4) = *(_DWORD *)&v77[v58 - 4];
      }
      else if ( (_DWORD)v20 != -1 )
      {
        *((_BYTE *)v32 + 48) = *v77;
        if ( (v58 & 2) != 0 )
          *(_WORD *)((char *)v33 + v58 - 2) = *(_WORD *)&v77[v58 - 2];
      }
      v19 = (char *)(v32 + 6);
    }
    else
    {
      v34 = v92[0];
      v32[4] = v19;
      v32[6] = v34;
    }
    v32[5] = v20;
    v32[8] = 0;
    v32[9] = 0;
    v82 = v32;
    s2 = v77;
    n = 0;
    LOBYTE(v92[0]) = 0;
    insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                               (_QWORD *)v80,
                               v23,
                               v19,
                               v20);
    v37 = v82;
    v23 = insert_hint_unique_pos;
    if ( v36 )
    {
      if ( !insert_hint_unique_pos && v79 != (_QWORD *)v36 )
      {
        std::string::compare(v19, v20, *(const void **)(v36 + 32), *(_QWORD *)(v36 + 40));
        v37 = v82;
      }
      v23 = v37;
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(v80 + 40);
    }
    else
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      std::string::_M_dispose();
      operator delete(v82, 0x50u);
    }
    v19 = (char *)s2;
    goto LABEL_30;
  }
  do
  {
    while ( 1 )
    {
      v24 = *(_QWORD *)(v22 + 40);
      v25 = v20;
      if ( v24 <= v20 )
        v25 = *(_QWORD *)(v22 + 40);
      if ( v25 )
      {
        v26 = memcmp(*(const void **)(v22 + 32), v19, v25);
        if ( v26 )
          goto LABEL_20;
      }
      v27 = v24 - v20;
      if ( v27 <= 0x7FFFFFFF )
        break;
LABEL_12:
      v23 = (_QWORD *)v22;
      v22 = *(_QWORD *)(v22 + 16);
      if ( !v22 )
        goto LABEL_22;
    }
    if ( v27 < (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_21;
    v26 = v27;
LABEL_20:
    if ( v26 >= 0 )
      goto LABEL_12;
LABEL_21:
    v22 = *(_QWORD *)(v22 + 24);
  }
  while ( v22 );
LABEL_22:
  if ( v79 == v23 )
    goto LABEL_37;
  v28 = v23[5];
  v29 = v28;
  if ( v20 <= v28 )
    v29 = v20;
  if ( v29 && (v81 = v23[5], LODWORD(v30) = memcmp(v19, (const void *)v23[4], v29), v28 = v81, (_DWORD)v30) )
  {
LABEL_29:
    if ( (int)v30 < 0 )
      goto LABEL_37;
  }
  else
  {
    v30 = v20 - v28;
    if ( (__int64)(v20 - v28) <= 0x7FFFFFFF )
    {
      if ( v30 >= (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_29;
      goto LABEL_37;
    }
  }
LABEL_30:
  if ( v19 != v77 )
    operator delete(v19, v92[0] + 1LL);
  *((_BYTE *)v23 + 64) = 3;
  v23[9] = v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v87 != v89 )
    operator delete(v87, v89[0] + 1LL);
  if ( *(_BYTE *)a2 == 1 )
  {
    v38 = *(_QWORD *)(a2 + 8);
    v39 = *(_QWORD *)(v38 + 16);
    if ( v39 )
    {
      v40 = v38 + 8;
      v41 = v39;
      v42 = v40;
      do
      {
        while ( 1 )
        {
          v45 = *(_QWORD *)(v41 + 40);
          if ( !v45 )
            break;
          v43 = 9;
          if ( v45 <= 9 )
            v43 = *(_QWORD *)(v41 + 40);
          v44 = memcmp(*(const void **)(v41 + 32), "new_start", v43);
          if ( v44 || (v44 = v45 - 9, (__int64)(v45 - 9) <= 0x7FFFFFFF) )
          {
            if ( v44 < 0 )
              break;
          }
          v42 = v41;
          v41 = *(_QWORD *)(v41 + 16);
          if ( !v41 )
            goto LABEL_55;
        }
        v41 = *(_QWORD *)(v41 + 24);
      }
      while ( v41 );
LABEL_55:
      if ( v40 == v42 || std::string::compare(*(void **)(v42 + 32), *(_QWORD *)(v42 + 40), "new_start") > 0 )
      {
LABEL_57:
        v46 = v40;
        do
        {
          while ( 1 )
          {
            v49 = *(_QWORD *)(v39 + 40);
            if ( !v49 )
              break;
            v47 = 7;
            if ( v49 <= 7 )
              v47 = *(_QWORD *)(v39 + 40);
            v48 = memcmp(*(const void **)(v39 + 32), "new_end", v47);
            if ( v48 || (v48 = v49 - 7, (__int64)(v49 - 7) <= 0x7FFFFFFF) )
            {
              if ( v48 < 0 )
                break;
            }
            v46 = v39;
            v39 = *(_QWORD *)(v39 + 16);
            if ( !v39 )
              goto LABEL_66;
          }
          v39 = *(_QWORD *)(v39 + 24);
        }
        while ( v39 );
LABEL_66:
        if ( v40 != v46 && std::string::compare(*(void **)(v46 + 32), *(_QWORD *)(v46 + 40), "new_end") <= 0 )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
          ida_mcp::parse_ea(s2, n);
          v51 = v50;
          std::string::_M_dispose();
          if ( v51 )
          {
            v84 = (unsigned __int8)set_func_end();
            v52 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            v53 = *(_QWORD *)(v52 + 8);
            *(_BYTE *)v52 = 4;
            *(_QWORD *)(v52 + 8) = v84;
            v85 = v53;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            ida_mcp::format_ea[abi:cxx11]();
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
            v54 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
            *(_BYTE *)v54 = 0;
            *(_QWORD *)(v54 + 8) = v85;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            std::string::_M_dispose();
          }
        }
      }
      else
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
        ida_mcp::parse_ea((_BYTE *)v89[2], v89[3]);
        v56 = v55;
        std::string::_M_dispose();
        if ( v56 )
        {
          v86 = (unsigned int)set_func_start() != 0;
          v59 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          *(_BYTE *)v59 = 4;
          *(_QWORD *)(v59 + 8) = v86;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          ida_mcp::format_ea[abi:cxx11]();
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
          v60 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          *(_BYTE *)v60 = 0;
          *(_QWORD *)(v60 + 8) = v83;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          std::string::_M_dispose();
        }
        if ( *(_BYTE *)a2 == 1 )
        {
          v57 = *(_QWORD *)(a2 + 8);
          v39 = *(_QWORD *)(v57 + 16);
          if ( v39 )
          {
            v40 = v57 + 8;
            goto LABEL_57;
          }
        }
      }
    }
  }
  return v75;
}

