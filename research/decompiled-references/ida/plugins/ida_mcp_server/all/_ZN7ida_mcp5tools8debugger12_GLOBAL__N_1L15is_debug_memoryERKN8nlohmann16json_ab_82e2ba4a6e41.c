__int64 __fastcall ida_mcp::tools::debugger::`anonymous namespace'::is_debug_memory(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r14
  size_t v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  size_t v11; // rdx
  int v12; // eax
  int *v13; // rax
  int *v14; // r15
  __int64 v15; // r14
  std::runtime_error *exception; // rax
  unsigned __int8 v17; // al
  unsigned __int8 v18; // r15
  size_t v19; // rax
  unsigned int v20; // ecx
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rbx
  size_t v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  char *v34; // rax
  char *v35; // r13
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // eax
  __int64 v39; // rsi
  unsigned int v40; // esi
  unsigned __int64 v41; // rdi
  char *v42; // r8
  unsigned int v43; // eax
  unsigned int v44; // edx
  __int64 v45; // rsi
  unsigned int v46; // [rsp+8h] [rbp-D0h]
  unsigned int v47; // [rsp+14h] [rbp-C4h]
  size_t v48; // [rsp+18h] [rbp-C0h]
  void **v49; // [rsp+20h] [rbp-B8h]
  char s2[16]; // [rsp+40h] [rbp-98h] BYREF
  void *v51; // [rsp+50h] [rbp-88h]
  size_t v52; // [rsp+58h] [rbp-80h]
  _QWORD v53[2]; // [rsp+60h] [rbp-78h] BYREF
  char s[40]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v55; // [rsp+98h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  strcpy(s2, "address");
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0xC96DA);
  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  v5 = v2 + 8;
  if ( v4 )
  {
    v6 = v2 + 8;
    do
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v4 + 40);
        if ( !v9 )
          break;
        v7 = 7;
        if ( v9 <= 7 )
          v7 = *(_QWORD *)(v4 + 40);
        v8 = memcmp(*(const void **)(v4 + 32), s2, v7);
        if ( v8 || (v8 = v9 - 7, (__int64)(v9 - 7) <= 0x7FFFFFFF) )
        {
          if ( v8 < 0 )
            break;
        }
        v6 = v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v4 )
          goto LABEL_12;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v4 );
LABEL_12:
    if ( v5 != v6 )
    {
      v10 = *(_QWORD *)(v6 + 40);
      if ( v10 )
      {
        v11 = 7;
        if ( v10 <= 7 )
          v11 = *(_QWORD *)(v6 + 40);
        v12 = memcmp(s2, *(const void **)(v6 + 32), v11);
        if ( v12 || (v12 = 7 - v10, (__int64)(7 - v10) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v12 >= 0 )
            v5 = v6;
        }
      }
      else
      {
        v5 = v6;
      }
    }
  }
  s2[0] = 0;
  if ( *(_BYTE *)(v5 + 64) != 3 )
    JUMPOUT(0xC9580);
  std::string::_M_assign();
  v13 = __errno_location();
  *v13 = 0;
  v14 = v13;
  v15 = __isoc23_strtoull();
  if ( s2 == (char *)v49 || *(_BYTE *)v49 || *v14 == 34 && v15 == -1 )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    ida_mcp::tools::debugger::`anonymous namespace'::is_debug_memory();
  }
  v17 = is_debugger_memory();
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v18 = v17;
  qsnprintf();
  v51 = v53;
  v19 = strlen(s);
  v48 = v19;
  v20 = v19;
  if ( v19 > 0xF )
  {
    v46 = v19;
    v31 = (_QWORD *)std::string::_M_create();
    v20 = v46;
    v51 = v31;
    v53[0] = v48;
  }
  else
  {
    if ( v19 == 1 )
    {
      LOBYTE(v53[0]) = s[0];
      goto LABEL_29;
    }
    if ( !v19 )
    {
LABEL_29:
      v21 = v53;
      goto LABEL_30;
    }
    v31 = v53;
  }
  if ( v20 >= 8 )
  {
    *v31 = *(_QWORD *)s;
    *(_QWORD *)((char *)v31 + v20 - 8) = *(_QWORD *)((char *)&v53[1] + v20);
    v33 = (unsigned __int64)(v31 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v34 = (char *)v31 - v33;
    v35 = (char *)(s - v34);
    v36 = ((_DWORD)v34 + v20) & 0xFFFFFFF8;
    if ( v36 >= 8 )
    {
      v37 = v36 & 0xFFFFFFF8;
      v38 = 0;
      do
      {
        v39 = v38;
        v38 += 8;
        *(_QWORD *)(v33 + v39) = *(_QWORD *)&v35[v39];
      }
      while ( v38 < v37 );
    }
  }
  else if ( (v20 & 4) != 0 )
  {
    *(_DWORD *)v31 = *(_DWORD *)s;
    *(_DWORD *)((char *)v31 + v20 - 4) = *(_DWORD *)((char *)&v53[1] + v20 + 4);
  }
  else if ( v20 )
  {
    *(_BYTE *)v31 = s[0];
    if ( (v20 & 2) != 0 )
      *(_WORD *)((char *)v31 + v20 - 2) = *(_WORD *)((char *)&v53[1] + v20 + 6);
  }
  v19 = v48;
  v21 = v51;
LABEL_30:
  v52 = v19;
  *((_BYTE *)v21 + v19) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v22 = (_QWORD *)operator new(0x20u);
  v23 = v22 + 2;
  v24 = v22;
  v25 = v52;
  *v22 = v22 + 2;
  if ( v51 == v53 )
  {
    v40 = v25 + 1;
    if ( (unsigned int)(v25 + 1) >= 8 )
    {
      v22[2] = v53[0];
      *(_QWORD *)((char *)v23 + v40 - 8) = *(_QWORD *)((char *)&v53[-1] + v40);
      v41 = (unsigned __int64)(v22 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v42 = (char *)((char *)v53 - ((char *)v23 - v41));
      if ( ((v40 + (_DWORD)v23 - (_DWORD)v41) & 0xFFFFFFF8) >= 8 )
      {
        v43 = (v40 + (_DWORD)v23 - v41) & 0xFFFFFFF8;
        v44 = 0;
        do
        {
          v45 = v44;
          v44 += 8;
          *(_QWORD *)(v41 + v45) = *(_QWORD *)&v42[v45];
        }
        while ( v44 < v43 );
      }
    }
    else if ( (v40 & 4) != 0 )
    {
      *((_DWORD *)v22 + 4) = v53[0];
      *(_DWORD *)((char *)v23 + v40 - 4) = *(_DWORD *)((char *)&v52 + v40 + 4);
    }
    else if ( (_DWORD)v25 != -1 )
    {
      *((_BYTE *)v22 + 16) = v53[0];
      if ( (v40 & 2) != 0 )
        *(_WORD *)((char *)v23 + v40 - 2) = *(_WORD *)((char *)&v52 + v40 + 6);
    }
  }
  else
  {
    *v22 = v51;
    v22[2] = v53[0];
  }
  v24[1] = v25;
  v51 = v53;
  v52 = 0;
  LOBYTE(v53[0]) = 0;
  v26 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v26 = 3;
  *(_QWORD *)(v26 + 8) = v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v51 != v53 )
    operator delete(v51, v53[0] + 1LL);
  v27 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v27 = 4;
  *(_QWORD *)(v27 + 8) = v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v18 )
  {
    if ( (unsigned __int8)get_dbg_byte() )
    {
      v29 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      *(_BYTE *)v29 = 4;
      *(_QWORD *)(v29 + 8) = 1;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v30 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      *(_BYTE *)v30 = 6;
      *(_QWORD *)(v30 + 8) = v47;
    }
    else
    {
      v32 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      *(_BYTE *)v32 = 4;
      *(_QWORD *)(v32 + 8) = 0;
    }
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  return a1;
}

