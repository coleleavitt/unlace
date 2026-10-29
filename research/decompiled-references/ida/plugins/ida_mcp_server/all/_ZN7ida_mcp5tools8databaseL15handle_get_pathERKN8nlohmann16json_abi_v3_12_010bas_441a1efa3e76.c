_QWORD *__fastcall ida_mcp::tools::database::handle_get_path(int a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rbp
  size_t v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r12
  size_t v10; // rdx
  int v11; // eax
  __int64 v12; // rbx
  unsigned __int8 v13; // al
  int v14; // r12d
  char *path; // rbx
  const char *v16; // rbp
  __int64 v17; // rax
  __int64 *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  const char *v24; // rsi
  __int64 *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char v31; // bp
  int v32; // [rsp+0h] [rbp-108h]
  int v33; // [rsp+0h] [rbp-108h]
  int v34; // [rsp+8h] [rbp-100h]
  _QWORD *v35; // [rsp+8h] [rbp-100h]
  __int64 v36; // [rsp+10h] [rbp-F8h]
  char v37; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v38; // [rsp+38h] [rbp-D0h]
  char v39; // [rsp+48h] [rbp-C0h]
  __int128 v40; // [rsp+50h] [rbp-B8h]
  char v41; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v42; // [rsp+68h] [rbp-A0h]
  char v43; // [rsp+78h] [rbp-90h]
  __int128 v44; // [rsp+80h] [rbp-88h]
  __m128i v45; // [rsp+90h] [rbp-78h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-68h]
  _QWORD v47[12]; // [rsp+A8h] [rbp-60h] BYREF

  v47[4] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_46;
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(v2 + 16);
  if ( !v3 )
    goto LABEL_46;
  v4 = v2 + 8;
  v5 = v4;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v3 + 40);
      if ( !v8 )
        break;
      v6 = 9;
      if ( v8 <= 9 )
        v6 = *(_QWORD *)(v3 + 40);
      v7 = memcmp(*(const void **)(v3 + 32), "path_type", v6);
      if ( v7 || (v7 = v8 - 9, (__int64)(v8 - 9) <= 0x7FFFFFFF) )
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
  if ( v4 == v5 )
    goto LABEL_46;
  v9 = *(_QWORD *)(v5 + 40);
  if ( v9 )
  {
    v10 = 9;
    if ( v9 <= 9 )
      v10 = *(_QWORD *)(v5 + 40);
    v11 = memcmp(*(const void **)(v5 + 32), "path_type", v10);
    if ( !v11 )
    {
      v11 = v9 - 9;
      if ( (__int64)(v9 - 9) > 0x7FFFFFFF )
        goto LABEL_46;
    }
    if ( v11 > 0 )
      goto LABEL_46;
  }
  if ( !*(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
LABEL_46:
    JUMPOUT(0x55D21);
  v12 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v13 = *(_BYTE *)v12;
  if ( *(_BYTE *)v12 == 6 )
    goto LABEL_24;
  if ( v13 > 6u )
  {
    if ( v13 == 7 )
    {
      v14 = (int)*(double *)(v12 + 8);
LABEL_25:
      path = (char *)get_path();
      if ( v14 != 1 )
      {
        v16 = "id0_file";
        if ( v14 == 2 )
          goto LABEL_29;
        if ( v14 )
        {
          v16 = "unknown";
          goto LABEL_29;
        }
        goto LABEL_36;
      }
LABEL_35:
      v16 = "idb_file";
      goto LABEL_29;
    }
    goto LABEL_45;
  }
  if ( v13 != 4 )
  {
    if ( v13 == 5 )
    {
LABEL_24:
      v14 = *(_DWORD *)(v12 + 8);
      goto LABEL_25;
    }
LABEL_45:
    JUMPOUT(0x55C0A);
  }
  v31 = *(_BYTE *)(v12 + 8);
  path = (char *)get_path();
  if ( v31 )
    goto LABEL_35;
LABEL_36:
  v16 = "command_line";
LABEL_29:
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v37 = 3;
  v17 = operator new(0x20u);
  *(_QWORD *)v17 = v17 + 16;
  strcpy((char *)(v17 + 16), "path_type");
  *(_QWORD *)(v17 + 8) = 9;
  v38 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v39 = 3;
  v18 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v18, v16, v19, v20, v21, v22, v32, a1, v36);
  v40 = (unsigned __int64)v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v45,
    (const __m128i *)&v37);
  v41 = 0;
  v46 = 0;
  *(_QWORD *)&v42 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v41 = 3;
  v23 = operator new(0x20u);
  *(_QWORD *)v23 = v23 + 16;
  strcpy((char *)(v23 + 16), "path");
  *(_QWORD *)(v23 + 8) = 4;
  if ( !path )
    path = "";
  v43 = 0;
  *(_QWORD *)&v44 = 0;
  v42 = (unsigned __int64)v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v43 = 3;
  v24 = path;
  v25 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v25, v24, v26, v27, v28, v29, v33, v34, (__int64)&v37);
  v44 = (unsigned __int64)v25;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v47,
    (const __m128i *)&v41);
  v47[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v35,
    &v45);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v35;
}

