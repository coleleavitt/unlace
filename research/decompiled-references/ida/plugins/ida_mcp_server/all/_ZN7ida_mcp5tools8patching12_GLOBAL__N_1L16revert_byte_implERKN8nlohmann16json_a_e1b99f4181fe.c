__int64 __fastcall ida_mcp::tools::patching::`anonymous namespace'::revert_byte_impl(_QWORD *a1)
{
  _BYTE *v1; // rbp
  int *v2; // rax
  int *v3; // r15
  __int64 v4; // r12
  std::runtime_error *exception; // rax
  __int64 original_byte; // r13
  __int64 v7; // rax
  size_t v8; // rax
  unsigned int v9; // r15d
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  size_t *v12; // rdx
  _QWORD *v13; // rcx
  size_t v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rbx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdx
  char *v24; // rax
  char *v25; // rbp
  unsigned int v26; // r15d
  unsigned int v27; // r15d
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // edi
  unsigned __int64 v31; // r8
  char *v32; // rcx
  char *v33; // r9
  unsigned int v34; // edx
  unsigned int v35; // ecx
  __int64 v36; // rdi
  int v37; // [rsp+0h] [rbp-1A8h]
  __int64 v39; // [rsp+8h] [rbp-1A0h]
  int v40; // [rsp+18h] [rbp-190h]
  unsigned __int8 v41; // [rsp+1Fh] [rbp-189h]
  __int64 v42; // [rsp+30h] [rbp-178h]
  _BYTE *v43; // [rsp+38h] [rbp-170h]
  size_t v44; // [rsp+38h] [rbp-170h]
  void *v45; // [rsp+40h] [rbp-168h] BYREF
  size_t v46; // [rsp+48h] [rbp-160h]
  size_t v47; // [rsp+50h] [rbp-158h] BYREF
  char v48; // [rsp+58h] [rbp-150h]
  __int64 v49; // [rsp+60h] [rbp-148h] BYREF
  __int128 v50; // [rsp+68h] [rbp-140h] BYREF
  char v51; // [rsp+78h] [rbp-130h]
  __int128 v52; // [rsp+80h] [rbp-128h]
  char v53; // [rsp+90h] [rbp-118h] BYREF
  __int128 v54; // [rsp+98h] [rbp-110h]
  char v55; // [rsp+A8h] [rbp-100h]
  __int64 v56; // [rsp+B0h] [rbp-F8h]
  __int64 v57; // [rsp+B8h] [rbp-F0h]
  void *v58; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 v59; // [rsp+C8h] [rbp-E0h] BYREF
  char v60; // [rsp+D8h] [rbp-D0h]
  __int64 v61; // [rsp+E0h] [rbp-C8h]
  __int64 v62; // [rsp+E8h] [rbp-C0h]
  _QWORD v63[3]; // [rsp+F0h] [rbp-B8h] BYREF
  _QWORD v64[3]; // [rsp+108h] [rbp-A0h] BYREF
  _QWORD v65[3]; // [rsp+120h] [rbp-88h] BYREF
  char v66[8]; // [rsp+138h] [rbp-70h] BYREF
  char s[40]; // [rsp+140h] [rbp-68h] BYREF
  unsigned __int64 v68; // [rsp+168h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v58 = (char *)&v59 + 8;
  *(_QWORD *)&v59 = 0;
  BYTE8(v59) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0xED44D);
  std::string::_M_assign();
  v1 = v58;
  v2 = __errno_location();
  *v2 = 0;
  v3 = v2;
  v4 = __isoc23_strtoull();
  if ( v1 == v43 || *v43 || *v3 == 34 && v4 == -1 )
  {
    if ( v58 != (char *)&v59 + 8 )
      operator delete(v58, *((_QWORD *)&v59 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0xED588);
  }
  if ( v58 != (char *)&v59 + 8 )
    operator delete(v58, *((_QWORD *)&v59 + 1) + 1LL);
  original_byte = (unsigned __int8)get_original_byte();
  v41 = patch_byte();
  *(_QWORD *)&v50 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v49) = 3;
  v7 = operator new(0x20u);
  *(_QWORD *)v7 = v7 + 16;
  strcpy((char *)(v7 + 16), "address");
  *(_QWORD *)(v7 + 8) = 7;
  v50 = (unsigned __int64)v7;
  qsnprintf();
  v45 = &v47;
  v8 = strlen(s);
  v44 = v8;
  v9 = v8;
  if ( v8 > 0xF )
  {
    v22 = (_QWORD *)std::string::_M_create();
    v45 = v22;
    v47 = v44;
  }
  else
  {
    if ( v8 == 1 )
    {
      LOBYTE(v47) = s[0];
LABEL_14:
      v10 = &v47;
      goto LABEL_15;
    }
    if ( !v8 )
      goto LABEL_14;
    v22 = &v47;
  }
  if ( v9 >= 8 )
  {
    *v22 = *(_QWORD *)s;
    *(_QWORD *)((char *)v22 + v9 - 8) = *(_QWORD *)&v66[v9];
    v23 = (unsigned __int64)(v22 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v24 = (char *)v22 - v23;
    v25 = (char *)(s - v24);
    v26 = ((_DWORD)v24 + v9) & 0xFFFFFFF8;
    if ( v26 >= 8 )
    {
      v27 = v26 & 0xFFFFFFF8;
      v28 = 0;
      do
      {
        v29 = v28;
        v28 += 8;
        *(_QWORD *)(v23 + v29) = *(_QWORD *)&v25[v29];
      }
      while ( v28 < v27 );
    }
  }
  else if ( (v9 & 4) != 0 )
  {
    *(_DWORD *)v22 = *(_DWORD *)s;
    *(_DWORD *)((char *)v22 + v9 - 4) = *(_DWORD *)&v66[v9 + 4];
  }
  else if ( v9 )
  {
    *(_BYTE *)v22 = s[0];
    if ( (v9 & 2) != 0 )
      *(_WORD *)((char *)v22 + v9 - 2) = *(_WORD *)&v66[v9 + 6];
  }
  v8 = v44;
  v10 = v45;
LABEL_15:
  v46 = v8;
  *((_BYTE *)v10 + v8) = 0;
  v51 = 0;
  *(_QWORD *)&v52 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v51 = 3;
  v11 = (_QWORD *)operator new(0x20u);
  v12 = (size_t *)v45;
  v13 = v11 + 2;
  v14 = v46;
  *v11 = v11 + 2;
  if ( v12 == &v47 )
  {
    v30 = v14 + 1;
    if ( (unsigned int)(v14 + 1) >= 8 )
    {
      v11[2] = v47;
      *(_QWORD *)((char *)v13 + v30 - 8) = *(size_t *)((char *)&v46 + v30);
      v31 = (unsigned __int64)(v11 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v32 = (char *)v13 - v31;
      v33 = (char *)((char *)&v47 - v32);
      if ( (((_DWORD)v32 + v30) & 0xFFFFFFF8) >= 8 )
      {
        v34 = ((_DWORD)v32 + v30) & 0xFFFFFFF8;
        v35 = 0;
        do
        {
          v36 = v35;
          v35 += 8;
          *(_QWORD *)(v31 + v36) = *(_QWORD *)&v33[v36];
        }
        while ( v35 < v34 );
      }
    }
    else if ( (v30 & 4) != 0 )
    {
      *((_DWORD *)v11 + 4) = v47;
      *(_DWORD *)((char *)v13 + v30 - 4) = *(_DWORD *)((char *)&v46 + v30 + 4);
    }
    else if ( (_DWORD)v14 != -1 )
    {
      *((_BYTE *)v11 + 16) = v47;
      if ( (v30 & 2) != 0 )
        *(_WORD *)((char *)v13 + v30 - 2) = *(_WORD *)((char *)&v46 + v30 + 6);
    }
  }
  else
  {
    *v11 = v12;
    v11[2] = v47;
  }
  v11[1] = v14;
  v45 = &v47;
  v46 = 0;
  LOBYTE(v47) = 0;
  v52 = (unsigned __int64)v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v63,
    (const __m128i *)&v49,
    2,
    1);
  v63[2] = 0;
  v53 = 0;
  *(_QWORD *)&v54 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v53 = 3;
  v15 = operator new(0x20u);
  strcpy((char *)(v15 + 16), "reverted_to");
  *(_QWORD *)v15 = v15 + 16;
  *(_QWORD *)(v15 + 8) = 11;
  v55 = 6;
  v56 = original_byte;
  v57 = 0;
  v54 = (unsigned __int64)v15;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v64,
    (const __m128i *)&v53,
    2,
    1);
  v64[2] = 0;
  LOBYTE(v58) = 0;
  *(_QWORD *)&v59 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v58) = 3;
  v16 = operator new(0x20u);
  *(_QWORD *)v16 = v16 + 16;
  strcpy((char *)(v16 + 16), "success");
  *(_QWORD *)(v16 + 8) = 7;
  v60 = 4;
  v61 = v41;
  v62 = 0;
  v59 = (unsigned __int64)v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v65,
    (const __m128i *)&v58,
    2,
    1);
  v65[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v63,
    3,
    v17,
    v18,
    v19,
    v37,
    (__int64)a1,
    (int)&v50,
    v40,
    (int)&v45,
    (int)&v49,
    v42,
    v44,
    (int)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    *((__int64 *)&v50 + 1));
  v20 = v66;
  do
  {
    v20 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v20 != (char *)v63 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v45 != &v47 )
    operator delete(v45, v47 + 1);
  return v39;
}

