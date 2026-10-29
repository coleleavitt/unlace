_QWORD *__fastcall ida_mcp::mcp::Resource::to_json[abi:cxx11](_QWORD *a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbp
  __int64 *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rbp
  __int64 v15; // rax
  void *v16; // rdx
  __int64 v17; // rax
  void *v18; // rdx
  __int64 v19; // rax
  _DWORD *v20; // rbp
  const char *v21; // r13
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rax
  int v32; // [rsp+0h] [rbp-138h]
  int v33; // [rsp+0h] [rbp-138h]
  int v34; // [rsp+0h] [rbp-138h]
  int v35; // [rsp+8h] [rbp-130h]
  void *v36; // [rsp+8h] [rbp-130h]
  __int64 v37; // [rsp+10h] [rbp-128h]
  __int64 v38; // [rsp+10h] [rbp-128h]
  _DWORD *v39; // [rsp+20h] [rbp-118h]
  __int64 v40; // [rsp+38h] [rbp-100h]
  void *v41; // [rsp+58h] [rbp-E0h]
  char v42; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v43; // [rsp+68h] [rbp-D0h] BYREF
  char v44; // [rsp+78h] [rbp-C0h]
  __int128 v45; // [rsp+80h] [rbp-B8h] BYREF
  char v46; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v47; // [rsp+98h] [rbp-A0h]
  char v48; // [rsp+A8h] [rbp-90h]
  __int128 v49; // [rsp+B0h] [rbp-88h]
  __m128i v50; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-68h]
  _QWORD v52[12]; // [rsp+D8h] [rbp-60h] BYREF

  v52[4] = __readfsqword(0x28u);
  *(_QWORD *)&v43 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v42 = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "uri", v3, v4, v5, v6, v32, v35, (__int64)&v43);
  v44 = 0;
  *(_QWORD *)&v45 = 0;
  v43 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v44 = 3;
  v7 = (_QWORD *)operator new(0x20u);
  *v7 = v7 + 2;
  std::string::_M_construct<true>();
  v45 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v50,
    (const __m128i *)&v42);
  v51 = 0;
  v46 = 0;
  *(_QWORD *)&v47 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v46 = 3;
  v8 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v8, "name", v9, v10, v11, v12, v33, (int)&v45, v37);
  v48 = 0;
  v47 = (unsigned __int64)v8;
  *(_QWORD *)&v49 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v48 = 3;
  v13 = (_QWORD *)operator new(0x20u);
  *v13 = v13 + 2;
  std::string::_M_construct<true>();
  v49 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v52,
    (const __m128i *)&v46);
  v52[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v50);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( !*(_BYTE *)(a2 + 96) )
  {
    if ( !*(_BYTE *)(a2 + 136) )
      goto LABEL_3;
LABEL_6:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string const&,std::string,0>();
    v17 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v17 = 0;
    v18 = *(void **)(v17 + 8);
    *(_QWORD *)(v17 + 8) = v41;
    v41 = v18;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( !*(_BYTE *)(a2 + 232) )
      return a1;
LABEL_7:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    LOBYTE(v38) = 0;
    if ( *(_BYTE *)(a2 + 168) )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v20 = *(_DWORD **)(a2 + 144);
      v39 = *(_DWORD **)(a2 + 152);
      while ( v39 != v20 )
      {
        v21 = "assistant";
        if ( !*v20 )
          v21 = "user";
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v22 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v22, v21, v23, v24, v25, v26, v34, (int)v22, v38);
        v41 = v36;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
        ++v20;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v27 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      *(_BYTE *)v27 = 0;
      *(_QWORD *)(v27 + 8) = v41;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( !*(_BYTE *)(a2 + 184) )
      {
LABEL_9:
        if ( !*(_BYTE *)(a2 + 224) )
        {
LABEL_10:
          v19 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          *(_BYTE *)v19 = 0;
          *(_QWORD *)(v19 + 8) = v40;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          return a1;
        }
LABEL_17:
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v30 = (_QWORD *)operator new(0x20u);
        *v30 = v30 + 2;
        std::string::_M_construct<true>();
        v31 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        *(_BYTE *)v31 = 3;
        *(_QWORD *)(v31 + 8) = v30;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_10;
      }
    }
    else if ( !*(_BYTE *)(a2 + 184) )
    {
      goto LABEL_9;
    }
    v28 = *(_QWORD *)(a2 + 176);
    v29 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v29 = 7;
    *(_QWORD *)(v29 + 8) = v28;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( !*(_BYTE *)(a2 + 224) )
      goto LABEL_10;
    goto LABEL_17;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string const&,std::string,0>();
  v15 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v15 = 0;
  v16 = *(void **)(v15 + 8);
  *(_QWORD *)(v15 + 8) = v41;
  v41 = v16;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( *(_BYTE *)(a2 + 136) )
    goto LABEL_6;
LABEL_3:
  if ( *(_BYTE *)(a2 + 232) )
    goto LABEL_7;
  return a1;
}

