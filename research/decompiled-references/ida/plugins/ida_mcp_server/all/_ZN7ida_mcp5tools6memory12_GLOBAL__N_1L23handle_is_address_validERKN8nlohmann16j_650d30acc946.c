__int64 __fastcall ida_mcp::tools::memory::`anonymous namespace'::handle_is_address_valid(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r14
  size_t v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  size_t v10; // rdx
  int v11; // eax
  _BYTE *v12; // r13
  int *v13; // rax
  int *v14; // r14
  __int64 v15; // rbp
  std::runtime_error *exception; // rax
  unsigned __int8 v17; // r14
  __int64 v18; // rax
  int *v19; // r15
  size_t v20; // rax
  unsigned int v21; // r12d
  int *v22; // rdx
  _QWORD *v23; // rax
  int *v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int *v31; // rax
  unsigned __int64 v32; // rdx
  char *v33; // rax
  char *v34; // rsi
  unsigned int v35; // r12d
  unsigned int v36; // r12d
  unsigned int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // edi
  unsigned __int64 v40; // r8
  char *v41; // rcx
  char *v42; // r9
  unsigned int v43; // edx
  unsigned int v44; // ecx
  __int64 v45; // rdi
  unsigned __int8 v47; // [rsp+1Fh] [rbp-1D9h]
  _BYTE *v48; // [rsp+48h] [rbp-1B0h]
  int v49[2]; // [rsp+48h] [rbp-1B0h]
  void *v50; // [rsp+50h] [rbp-1A8h]
  char v51[8]; // [rsp+58h] [rbp-1A0h]
  int v52[4]; // [rsp+60h] [rbp-198h] BYREF
  int v53; // [rsp+70h] [rbp-188h] BYREF
  int v54[4]; // [rsp+78h] [rbp-180h]
  char v55; // [rsp+88h] [rbp-170h]
  __int64 v56[2]; // [rsp+90h] [rbp-168h]
  char v57; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v58; // [rsp+A8h] [rbp-150h]
  char v59; // [rsp+B8h] [rbp-140h]
  __int64 v60; // [rsp+C0h] [rbp-138h]
  __int64 v61; // [rsp+C8h] [rbp-130h]
  char v62; // [rsp+D0h] [rbp-128h] BYREF
  __int128 v63; // [rsp+D8h] [rbp-120h]
  char v64; // [rsp+E8h] [rbp-110h]
  __int64 v65; // [rsp+F0h] [rbp-108h]
  __int64 v66; // [rsp+F8h] [rbp-100h]
  void *v67; // [rsp+100h] [rbp-F8h] BYREF
  __int128 s2; // [rsp+108h] [rbp-F0h] BYREF
  char v69; // [rsp+118h] [rbp-E0h]
  __int64 v70; // [rsp+120h] [rbp-D8h]
  __int64 v71; // [rsp+128h] [rbp-D0h]
  int v72[4]; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+140h] [rbp-B8h]
  _QWORD v74[3]; // [rsp+148h] [rbp-B0h] BYREF
  _QWORD v75[3]; // [rsp+160h] [rbp-98h] BYREF
  __int64 v76; // [rsp+178h] [rbp-80h] BYREF
  __int64 v77; // [rsp+188h] [rbp-70h]
  char s[40]; // [rsp+190h] [rbp-68h] BYREF
  unsigned __int64 v79; // [rsp+1B8h] [rbp-40h]

  v79 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v67 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0xAC719);
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(v2 + 16);
  v4 = v2 + 8;
  if ( v3 )
  {
    v5 = v2 + 8;
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v3 + 40);
        if ( !v8 )
          break;
        v6 = 7;
        if ( v8 <= 7 )
          v6 = *(_QWORD *)(v3 + 40);
        v7 = memcmp(*(const void **)(v3 + 32), (char *)&s2 + 8, v6);
        if ( v7 || (v7 = v8 - 7, (__int64)(v8 - 7) <= 0x7FFFFFFF) )
        {
          if ( v7 < 0 )
            break;
        }
        v5 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        if ( !v3 )
          goto LABEL_12;
      }
      v3 = *(_QWORD *)(v3 + 24);
    }
    while ( v3 );
LABEL_12:
    if ( v4 != v5 )
    {
      v9 = *(_QWORD *)(v5 + 40);
      if ( v9 )
      {
        v10 = 7;
        if ( v9 <= 7 )
          v10 = *(_QWORD *)(v5 + 40);
        v11 = memcmp((char *)&s2 + 8, *(const void **)(v5 + 32), v10);
        if ( v11 || (v11 = 7 - v9, (__int64)(7 - v9) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v11 >= 0 )
            v4 = v5;
        }
      }
      else
      {
        v4 = v5;
      }
    }
  }
  v67 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v4 + 64) != 3 )
    JUMPOUT(0xAC3CB);
  std::string::_M_assign();
  v12 = v67;
  v13 = __errno_location();
  *v13 = 0;
  v14 = v13;
  v15 = __isoc23_strtoull();
  if ( v12 == v48 || *v48 || *v14 == 34 && v15 == -1 )
  {
    if ( v67 != (char *)&s2 + 8 )
      operator delete(v67, *((_QWORD *)&s2 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    ida_mcp::tools::memory::`anonymous namespace'::handle_is_address_valid();
  }
  if ( v67 != (char *)&s2 + 8 )
    operator delete(v67, *((_QWORD *)&s2 + 1) + 1LL);
  v17 = is_loaded();
  v47 = is_mapped();
  *(_QWORD *)v54 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v53) = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  v19 = (int *)s;
  strcpy((char *)(v18 + 16), "address");
  *(_QWORD *)(v18 + 8) = 7;
  *(_OWORD *)v54 = (unsigned __int64)v18;
  qsnprintf();
  v50 = v52;
  v20 = strlen(s);
  *(_QWORD *)v49 = v20;
  v21 = v20;
  if ( v20 > 0xF )
  {
    v31 = (int *)std::string::_M_create();
    v50 = v31;
    *(_QWORD *)v52 = *(_QWORD *)v49;
  }
  else
  {
    if ( v20 == 1 )
    {
      LOBYTE(v52[0]) = s[0];
      goto LABEL_33;
    }
    if ( !v20 )
    {
LABEL_33:
      v22 = v52;
      goto LABEL_34;
    }
    v31 = v52;
  }
  if ( v21 >= 8 )
  {
    *(_QWORD *)v31 = *(_QWORD *)s;
    *(_QWORD *)((char *)v31 + v21 - 8) = *(_QWORD *)&s[v21 - 8];
    v32 = (unsigned __int64)(v31 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    v33 = (char *)v31 - v32;
    v34 = (char *)(s - v33);
    v35 = ((_DWORD)v33 + v21) & 0xFFFFFFF8;
    if ( v35 >= 8 )
    {
      v36 = v35 & 0xFFFFFFF8;
      v37 = 0;
      do
      {
        v38 = v37;
        v37 += 8;
        *(_QWORD *)(v32 + v38) = *(_QWORD *)&v34[v38];
      }
      while ( v37 < v36 );
    }
  }
  else if ( (v21 & 4) != 0 )
  {
    *v31 = *(_DWORD *)s;
    *(int *)((char *)v31 + v21 - 4) = *(_DWORD *)&s[v21 - 4];
  }
  else if ( v21 )
  {
    *(_BYTE *)v31 = s[0];
    if ( (v21 & 2) != 0 )
      *(_WORD *)((char *)v31 + v21 - 2) = *(_WORD *)&s[v21 - 2];
  }
  v20 = *(_QWORD *)v49;
  v22 = (int *)v50;
LABEL_34:
  *(_QWORD *)v51 = v20;
  *((_BYTE *)v22 + v20) = 0;
  v55 = 0;
  v56[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v55 = 3;
  v23 = (_QWORD *)operator new(0x20u);
  v24 = (int *)v50;
  v25 = v23 + 2;
  v26 = *(_QWORD *)v51;
  *v23 = v23 + 2;
  if ( v24 == v52 )
  {
    v39 = v26 + 1;
    if ( (unsigned int)(v26 + 1) >= 8 )
    {
      v23[2] = *(_QWORD *)v52;
      *(_QWORD *)((char *)v25 + v39 - 8) = *(_QWORD *)&v51[v39];
      v40 = (unsigned __int64)(v23 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v41 = (char *)v25 - v40;
      v42 = (char *)((char *)v52 - v41);
      if ( (((_DWORD)v41 + v39) & 0xFFFFFFF8) >= 8 )
      {
        v43 = ((_DWORD)v41 + v39) & 0xFFFFFFF8;
        v44 = 0;
        do
        {
          v45 = v44;
          v44 += 8;
          *(_QWORD *)(v40 + v45) = *(_QWORD *)&v42[v45];
        }
        while ( v44 < v43 );
      }
    }
    else if ( (v39 & 4) != 0 )
    {
      *((_DWORD *)v23 + 4) = v52[0];
      *(_DWORD *)((char *)v25 + v39 - 4) = *(_DWORD *)&v51[v39 + 4];
    }
    else if ( (_DWORD)v26 != -1 )
    {
      *((_BYTE *)v23 + 16) = v52[0];
      if ( (v39 & 2) != 0 )
        *(_WORD *)((char *)v25 + v39 - 2) = *(_WORD *)&v51[v39 + 6];
    }
  }
  else
  {
    *v23 = v24;
    v23[2] = *(_QWORD *)v52;
  }
  v23[1] = v26;
  v50 = v52;
  *(_QWORD *)v51 = 0;
  LOBYTE(v52[0]) = 0;
  *(_OWORD *)v56 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v72,
    (const __m128i *)&v53);
  v73 = 0;
  v57 = 0;
  *(_QWORD *)&v58 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v57 = 3;
  v27 = operator new(0x20u);
  *(_DWORD *)(v27 + 16) = 1768710518;
  *(_QWORD *)v27 = v27 + 16;
  *(_BYTE *)(v27 + 20) = 100;
  *(_QWORD *)(v27 + 8) = 5;
  *(_BYTE *)(v27 + 21) = 0;
  v59 = 4;
  v60 = (unsigned __int8)(v17 | v47);
  v61 = 0;
  v58 = (unsigned __int64)v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v74,
    (const __m128i *)&v57);
  v74[2] = 0;
  v62 = 0;
  *(_QWORD *)&v63 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v62 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  strcpy((char *)(v28 + 16), "loaded");
  *(_QWORD *)(v28 + 8) = 6;
  v64 = 4;
  v65 = v17;
  v66 = 0;
  v63 = (unsigned __int64)v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v75,
    (const __m128i *)&v62);
  v75[2] = 0;
  LOBYTE(v67) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v67) = 3;
  v29 = operator new(0x20u);
  strcpy((char *)(v29 + 16), "mapped");
  *(_QWORD *)v29 = v29 + 16;
  *(_QWORD *)(v29 + 8) = 6;
  v69 = 4;
  v70 = v47;
  v71 = 0;
  s2 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v76,
    (const __m128i *)&v67);
  v77 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  do
  {
    v19 -= 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v19 != v72 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v50 != v52 )
    operator delete(v50, *(_QWORD *)v52 + 1LL);
  return a1;
}

