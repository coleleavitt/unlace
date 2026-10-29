__int64 __fastcall ida_mcp::tools::debugger::`anonymous namespace'::enable_breakpoint(__int64 a1)
{
  _BYTE *v1; // rbp
  int *v2; // rax
  int *v3; // r15
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r12
  std::runtime_error *exception; // rax
  unsigned __int8 v8; // bp
  __int64 v9; // rax
  __int64 v10; // rax
  size_t v11; // rax
  unsigned int v12; // r15d
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  size_t *v15; // rdx
  _QWORD *v16; // rcx
  size_t v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char *v22; // rbx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rdx
  char *v26; // rax
  char *v27; // r13
  unsigned int v28; // r15d
  unsigned int v29; // r15d
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // edi
  unsigned __int64 v33; // r8
  char *v34; // rcx
  char *v35; // r9
  unsigned int v36; // edx
  unsigned int v37; // ecx
  __int64 v38; // rdi
  _QWORD *v39; // [rsp+0h] [rbp-198h]
  __int64 v40; // [rsp+0h] [rbp-198h]
  int v41; // [rsp+20h] [rbp-178h]
  _BYTE *v42; // [rsp+28h] [rbp-170h]
  size_t v43; // [rsp+28h] [rbp-170h]
  void *v44; // [rsp+30h] [rbp-168h] BYREF
  size_t v45; // [rsp+38h] [rbp-160h]
  size_t v46; // [rsp+40h] [rbp-158h] BYREF
  int v47; // [rsp+48h] [rbp-150h]
  int v48; // [rsp+50h] [rbp-148h] BYREF
  __int128 v49; // [rsp+58h] [rbp-140h] BYREF
  int v50; // [rsp+68h] [rbp-130h]
  __int64 v51; // [rsp+70h] [rbp-128h]
  __int64 v52; // [rsp+78h] [rbp-120h]
  char v53; // [rsp+80h] [rbp-118h] BYREF
  __int128 v54; // [rsp+88h] [rbp-110h] BYREF
  char v55; // [rsp+98h] [rbp-100h]
  __int128 v56; // [rsp+A0h] [rbp-F8h]
  void *v57; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v58; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-D0h]
  __int64 v60; // [rsp+D0h] [rbp-C8h]
  __int64 v61; // [rsp+D8h] [rbp-C0h]
  _QWORD v62[3]; // [rsp+E0h] [rbp-B8h] BYREF
  _QWORD v63[3]; // [rsp+F8h] [rbp-A0h] BYREF
  _QWORD v64[3]; // [rsp+110h] [rbp-88h] BYREF
  char v65[8]; // [rsp+128h] [rbp-70h] BYREF
  char s[40]; // [rsp+130h] [rbp-68h] BYREF
  unsigned __int64 v67; // [rsp+158h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v57 = (char *)&v58 + 8;
  *(_QWORD *)&v58 = 0;
  BYTE8(v58) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0xCC5AA);
  std::string::_M_assign();
  v1 = v57;
  v2 = __errno_location();
  *v2 = 0;
  v3 = v2;
  v6 = __isoc23_strtoull();
  if ( v1 == v42 || *v42 || *v3 == 34 && v6 == -1 )
  {
    if ( v57 != (char *)&v58 + 8 )
      operator delete(v57, *((_QWORD *)&v58 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0xCC676);
  }
  if ( v57 != (char *)&v58 + 8 )
    operator delete(v57, *((_QWORD *)&v58 + 1) + 1LL);
  *(_QWORD *)&v49 = 0;
  v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
         1030,
         v6,
         1,
         &callui,
         v4,
         v5,
         a1);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v48) = 3;
  v9 = operator new(0x20u);
  strcpy((char *)(v9 + 16), "success");
  *(_QWORD *)v9 = v9 + 16;
  *(_QWORD *)(v9 + 8) = 7;
  v51 = v8;
  LOBYTE(v50) = 4;
  v52 = 0;
  v49 = (unsigned __int64)v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v62,
    (const __m128i *)&v48);
  v62[2] = 0;
  v53 = 0;
  *(_QWORD *)&v54 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v53 = 3;
  v10 = operator new(0x20u);
  *(_QWORD *)v10 = v10 + 16;
  strcpy((char *)(v10 + 16), "address");
  *(_QWORD *)(v10 + 8) = 7;
  v54 = (unsigned __int64)v10;
  qsnprintf();
  v44 = &v46;
  v11 = strlen(s);
  v43 = v11;
  v12 = v11;
  if ( v11 > 0xF )
  {
    v24 = (_QWORD *)std::string::_M_create();
    v44 = v24;
    v46 = v43;
  }
  else
  {
    if ( v11 == 1 )
    {
      LOBYTE(v46) = s[0];
LABEL_14:
      v13 = &v46;
      goto LABEL_15;
    }
    if ( !v11 )
      goto LABEL_14;
    v24 = &v46;
  }
  if ( v12 >= 8 )
  {
    *v24 = *(_QWORD *)s;
    *(_QWORD *)((char *)v24 + v12 - 8) = *(_QWORD *)&v65[v12];
    v25 = (unsigned __int64)(v24 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v26 = (char *)v24 - v25;
    v27 = (char *)(s - v26);
    v28 = ((_DWORD)v26 + v12) & 0xFFFFFFF8;
    if ( v28 >= 8 )
    {
      v29 = v28 & 0xFFFFFFF8;
      v30 = 0;
      do
      {
        v31 = v30;
        v30 += 8;
        *(_QWORD *)(v25 + v31) = *(_QWORD *)&v27[v31];
      }
      while ( v30 < v29 );
    }
  }
  else if ( (v12 & 4) != 0 )
  {
    *(_DWORD *)v24 = *(_DWORD *)s;
    *(_DWORD *)((char *)v24 + v12 - 4) = *(_DWORD *)&v65[v12 + 4];
  }
  else if ( v12 )
  {
    *(_BYTE *)v24 = s[0];
    if ( (v12 & 2) != 0 )
      *(_WORD *)((char *)v24 + v12 - 2) = *(_WORD *)&v65[v12 + 6];
  }
  v11 = v43;
  v13 = v44;
LABEL_15:
  v45 = v11;
  *((_BYTE *)v13 + v11) = 0;
  v55 = 0;
  *(_QWORD *)&v56 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v55 = 3;
  v14 = (_QWORD *)operator new(0x20u);
  v15 = (size_t *)v44;
  v16 = v14 + 2;
  v17 = v45;
  *v14 = v14 + 2;
  if ( v15 == &v46 )
  {
    v32 = v17 + 1;
    if ( (unsigned int)(v17 + 1) >= 8 )
    {
      v14[2] = v46;
      *(_QWORD *)((char *)v16 + v32 - 8) = *(size_t *)((char *)&v45 + v32);
      v33 = (unsigned __int64)(v14 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v34 = (char *)v16 - v33;
      v35 = (char *)((char *)&v46 - v34);
      if ( (((_DWORD)v34 + v32) & 0xFFFFFFF8) >= 8 )
      {
        v36 = ((_DWORD)v34 + v32) & 0xFFFFFFF8;
        v37 = 0;
        do
        {
          v38 = v37;
          v37 += 8;
          *(_QWORD *)(v33 + v38) = *(_QWORD *)&v35[v38];
        }
        while ( v37 < v36 );
      }
    }
    else if ( (v32 & 4) != 0 )
    {
      *((_DWORD *)v14 + 4) = v46;
      *(_DWORD *)((char *)v16 + v32 - 4) = *(_DWORD *)((char *)&v45 + v32 + 4);
    }
    else if ( (_DWORD)v17 != -1 )
    {
      *((_BYTE *)v14 + 16) = v46;
      if ( (v32 & 2) != 0 )
        *(_WORD *)((char *)v16 + v32 - 2) = *(_WORD *)((char *)&v45 + v32 + 6);
    }
  }
  else
  {
    *v14 = v15;
    v14[2] = v46;
  }
  v14[1] = v17;
  v44 = &v46;
  v45 = 0;
  LOBYTE(v46) = 0;
  v56 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v63,
    (const __m128i *)&v53);
  v63[2] = 0;
  LOBYTE(v57) = 0;
  *(_QWORD *)&v58 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v57) = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "enabled");
  *(_QWORD *)(v18 + 8) = 7;
  v59 = 4;
  v60 = 1;
  v61 = 0;
  v58 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v64,
    (const __m128i *)&v57);
  v64[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v39,
    (__int64)v62,
    3,
    v19,
    v20,
    v21,
    (int)v39,
    (__int64)&v49,
    (int)&v54,
    (int)&v44,
    v41,
    v43,
    (__int64)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    *((__int64 *)&v49 + 1),
    v50,
    v51);
  v22 = v65;
  do
  {
    v22 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v22 != (char *)v62 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v44 != &v46 )
    operator delete(v44, v46 + 1);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v40;
}

