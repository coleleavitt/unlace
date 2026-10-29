__int64 __fastcall ida_mcp::tools::patching::`anonymous namespace'::get_original_byte_impl(int a1)
{
  _BYTE *v1; // rbx
  int *v2; // rax
  int *v3; // r14
  __int64 v4; // r12
  std::runtime_error *exception; // rax
  unsigned __int8 original_byte; // r14
  unsigned __int8 byte; // r13
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // xmm0
  char *v14; // rbx
  size_t v15; // rax
  unsigned int v16; // r15d
  __int64 *v17; // rdx
  _QWORD *v18; // rax
  __int64 *v19; // rdx
  _QWORD *v20; // rcx
  size_t v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v33; // rax
  unsigned __int64 v34; // rdx
  char *v35; // rax
  char *v36; // rsi
  unsigned int v37; // r15d
  unsigned int v38; // r15d
  unsigned int v39; // eax
  __int64 v40; // rcx
  unsigned int v41; // edi
  unsigned __int64 v42; // r8
  char *v43; // rcx
  char *v44; // r9
  unsigned int v45; // edx
  unsigned int v46; // ecx
  __int64 v47; // rdi
  int v48; // [rsp+0h] [rbp-1F8h]
  const __m128i *v49; // [rsp+0h] [rbp-1F8h]
  int v50; // [rsp+8h] [rbp-1F0h]
  _QWORD *v51; // [rsp+8h] [rbp-1F0h]
  __int64 v52; // [rsp+8h] [rbp-1F0h]
  __int64 v53; // [rsp+10h] [rbp-1E8h]
  int v54; // [rsp+10h] [rbp-1E8h]
  int v55; // [rsp+28h] [rbp-1D0h]
  bool v56; // [rsp+2Fh] [rbp-1C9h]
  int v57; // [rsp+40h] [rbp-1B8h]
  _BYTE *v58; // [rsp+48h] [rbp-1B0h]
  __int64 v59; // [rsp+48h] [rbp-1B0h]
  void *v60; // [rsp+50h] [rbp-1A8h] BYREF
  size_t v61; // [rsp+58h] [rbp-1A0h]
  __int64 v62; // [rsp+60h] [rbp-198h] BYREF
  int v63; // [rsp+68h] [rbp-190h]
  __int64 v64; // [rsp+70h] [rbp-188h] BYREF
  __int128 v65; // [rsp+78h] [rbp-180h] BYREF
  char v66; // [rsp+88h] [rbp-170h]
  __int128 v67; // [rsp+90h] [rbp-168h] BYREF
  char v68; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v69; // [rsp+A8h] [rbp-150h] BYREF
  char v70; // [rsp+B8h] [rbp-140h]
  __int64 v71; // [rsp+C0h] [rbp-138h]
  __int64 v72; // [rsp+C8h] [rbp-130h]
  char v73; // [rsp+D0h] [rbp-128h] BYREF
  __int128 v74; // [rsp+D8h] [rbp-120h]
  char v75; // [rsp+E8h] [rbp-110h]
  __int64 v76; // [rsp+F0h] [rbp-108h]
  __int64 v77; // [rsp+F8h] [rbp-100h]
  void *v78; // [rsp+100h] [rbp-F8h] BYREF
  __int128 v79; // [rsp+108h] [rbp-F0h] BYREF
  char v80; // [rsp+118h] [rbp-E0h]
  _BOOL8 v81; // [rsp+120h] [rbp-D8h]
  __int64 v82; // [rsp+128h] [rbp-D0h]
  _QWORD v83[3]; // [rsp+130h] [rbp-C8h] BYREF
  _QWORD v84[3]; // [rsp+148h] [rbp-B0h] BYREF
  _QWORD v85[3]; // [rsp+160h] [rbp-98h] BYREF
  __int64 v86; // [rsp+178h] [rbp-80h] BYREF
  __int64 v87; // [rsp+188h] [rbp-70h]
  char s[40]; // [rsp+190h] [rbp-68h] BYREF
  unsigned __int64 v89; // [rsp+1B8h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  v78 = (char *)&v79 + 8;
  *(_QWORD *)&v79 = 0;
  BYTE8(v79) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0xED01D);
  std::string::_M_assign();
  v1 = v78;
  v2 = __errno_location();
  *v2 = 0;
  v3 = v2;
  v4 = __isoc23_strtoull();
  if ( v1 == v58 || *v58 || *v3 == 34 && v4 == -1 )
  {
    if ( v78 != (char *)&v79 + 8 )
      operator delete(v78, *((_QWORD *)&v79 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0xECFBE);
  }
  if ( v78 != (char *)&v79 + 8 )
    operator delete(v78, *((_QWORD *)&v79 + 1) + 1LL);
  original_byte = get_original_byte();
  *(_QWORD *)&v65 = 0;
  byte = get_byte();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v64) = 3;
  v8 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v8, "address", v9, v10, v11, v12, (int)&v78, a1, (__int64)&v65);
  v13 = (unsigned __int64)v8;
  v14 = s;
  v65 = v13;
  qsnprintf();
  v60 = &v62;
  v15 = strlen(s);
  v59 = v15;
  v16 = v15;
  if ( v15 > 0xF )
  {
    v33 = (__int64 *)std::string::_M_create();
    v60 = v33;
    v62 = v59;
  }
  else
  {
    if ( v15 == 1 )
    {
      LOBYTE(v62) = s[0];
LABEL_14:
      v17 = &v62;
      goto LABEL_15;
    }
    if ( !v15 )
      goto LABEL_14;
    v33 = &v62;
  }
  if ( v16 >= 8 )
  {
    *v33 = *(_QWORD *)s;
    *(__int64 *)((char *)v33 + v16 - 8) = *(_QWORD *)&s[v16 - 8];
    v34 = (unsigned __int64)(v33 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v35 = (char *)v33 - v34;
    v36 = (char *)(s - v35);
    v37 = ((_DWORD)v35 + v16) & 0xFFFFFFF8;
    if ( v37 >= 8 )
    {
      v38 = v37 & 0xFFFFFFF8;
      v39 = 0;
      do
      {
        v40 = v39;
        v39 += 8;
        *(_QWORD *)(v34 + v40) = *(_QWORD *)&v36[v40];
      }
      while ( v39 < v38 );
    }
  }
  else if ( (v16 & 4) != 0 )
  {
    *(_DWORD *)v33 = *(_DWORD *)s;
    *(_DWORD *)((char *)v33 + v16 - 4) = *(_DWORD *)&s[v16 - 4];
  }
  else if ( v16 )
  {
    *(_BYTE *)v33 = s[0];
    if ( (v16 & 2) != 0 )
      *(_WORD *)((char *)v33 + v16 - 2) = *(_WORD *)&s[v16 - 2];
  }
  v15 = v59;
  v17 = (__int64 *)v60;
LABEL_15:
  v61 = v15;
  *((_BYTE *)v17 + v15) = 0;
  v66 = 0;
  *(_QWORD *)&v67 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v66 = 3;
  v18 = (_QWORD *)operator new(0x20u);
  v19 = (__int64 *)v60;
  v20 = v18 + 2;
  v21 = v61;
  *v18 = v18 + 2;
  if ( v19 == &v62 )
  {
    v41 = v21 + 1;
    if ( (unsigned int)(v21 + 1) >= 8 )
    {
      v18[2] = v62;
      *(_QWORD *)((char *)v20 + v41 - 8) = *(size_t *)((char *)&v61 + v41);
      v42 = (unsigned __int64)(v18 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v43 = (char *)v20 - v42;
      v44 = (char *)((char *)&v62 - v43);
      if ( (((_DWORD)v43 + v41) & 0xFFFFFFF8) >= 8 )
      {
        v45 = ((_DWORD)v43 + v41) & 0xFFFFFFF8;
        v46 = 0;
        do
        {
          v47 = v46;
          v46 += 8;
          *(_QWORD *)(v42 + v47) = *(_QWORD *)&v44[v47];
        }
        while ( v46 < v45 );
      }
    }
    else if ( (v41 & 4) != 0 )
    {
      *((_DWORD *)v18 + 4) = v62;
      *(_DWORD *)((char *)v20 + v41 - 4) = *(_DWORD *)((char *)&v61 + v41 + 4);
    }
    else if ( (_DWORD)v21 != -1 )
    {
      *((_BYTE *)v18 + 16) = v62;
      if ( (v41 & 2) != 0 )
        *(_WORD *)((char *)v20 + v41 - 2) = *(_WORD *)((char *)&v61 + v41 + 6);
    }
  }
  else
  {
    *v18 = v19;
    v18[2] = v62;
  }
  v18[1] = v21;
  v60 = &v62;
  v61 = 0;
  LOBYTE(v62) = 0;
  v56 = byte != original_byte;
  v67 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v83,
    (const __m128i *)&v64,
    2,
    1);
  v83[2] = 0;
  v68 = 0;
  *(_QWORD *)&v69 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v68 = 3;
  v22 = operator new(0x20u);
  strcpy((char *)(v22 + 16), "original_byte");
  *(_QWORD *)v22 = v22 + 16;
  *(_QWORD *)(v22 + 8) = 13;
  v70 = 6;
  v71 = original_byte;
  v72 = 0;
  v69 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v84,
    (const __m128i *)&v68,
    2,
    1);
  v84[2] = 0;
  v73 = 0;
  *(_QWORD *)&v74 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v73 = 3;
  v23 = operator new(0x20u);
  *(_QWORD *)v23 = v23 + 16;
  strcpy((char *)(v23 + 16), "current_byte");
  *(_QWORD *)(v23 + 8) = 12;
  v75 = 6;
  v76 = byte;
  v77 = 0;
  v74 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v85,
    (const __m128i *)&v73,
    2,
    1);
  v85[2] = 0;
  LOBYTE(v78) = 0;
  *(_QWORD *)&v79 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v78) = 3;
  v24 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v24, "is_patched", v25, v26, v27, v28, v48, v50, v53);
  v80 = 4;
  v81 = v56;
  v82 = 0;
  v79 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v86,
    v49,
    2,
    1);
  v87 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v51,
    (__int64)v83,
    4,
    v29,
    v30,
    v31,
    (int)v49,
    (__int64)v51,
    v54,
    (int)&v67,
    (int)&v69,
    v55,
    (__int64)&v60,
    (int)&v64,
    v57,
    v59,
    (int)v60,
    v61,
    v62,
    v63,
    v64);
  do
  {
    v14 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v14 != (char *)v83 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v60 != &v62 )
    operator delete(v60, v62 + 1);
  return v52;
}

