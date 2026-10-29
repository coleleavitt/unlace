_QWORD *__fastcall ida_mcp::mcp::ToolDefinition::to_json[abi:cxx11](_QWORD *a1, _BYTE *a2)
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
  __int64 *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 *v22; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+0h] [rbp-168h]
  int v33; // [rsp+0h] [rbp-168h]
  int v34; // [rsp+0h] [rbp-168h]
  int v35; // [rsp+0h] [rbp-168h]
  int v36; // [rsp+8h] [rbp-160h]
  int v37; // [rsp+8h] [rbp-160h]
  __int64 v38; // [rsp+8h] [rbp-160h]
  __int64 v39; // [rsp+10h] [rbp-158h]
  __int64 v40; // [rsp+10h] [rbp-158h]
  int v41; // [rsp+10h] [rbp-158h]
  __int64 v42; // [rsp+30h] [rbp-138h]
  int v43; // [rsp+38h] [rbp-130h]
  __int64 v44; // [rsp+38h] [rbp-130h]
  int v45; // [rsp+40h] [rbp-128h]
  int v46; // [rsp+48h] [rbp-120h]
  __int64 v47; // [rsp+48h] [rbp-120h]
  __int64 v48; // [rsp+48h] [rbp-120h]
  __int64 v49; // [rsp+48h] [rbp-120h]
  __int64 v50; // [rsp+48h] [rbp-120h]
  __int64 v51; // [rsp+48h] [rbp-120h]
  int v52; // [rsp+50h] [rbp-118h] BYREF
  __int128 v53; // [rsp+58h] [rbp-110h] BYREF
  int v54; // [rsp+68h] [rbp-100h]
  __int128 v55; // [rsp+70h] [rbp-F8h] BYREF
  char v56; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v57; // [rsp+88h] [rbp-E0h]
  char v58; // [rsp+98h] [rbp-D0h]
  __int128 v59; // [rsp+A0h] [rbp-C8h]
  char v60; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v61; // [rsp+B8h] [rbp-B0h] BYREF
  char v62; // [rsp+C8h] [rbp-A0h]
  __int64 v63; // [rsp+D0h] [rbp-98h]
  _BYTE *v64; // [rsp+D8h] [rbp-90h]
  _QWORD v65[3]; // [rsp+E0h] [rbp-88h] BYREF
  _QWORD v66[3]; // [rsp+F8h] [rbp-70h] BYREF
  _QWORD v67[3]; // [rsp+110h] [rbp-58h] BYREF
  unsigned __int64 v68; // [rsp+128h] [rbp-40h] BYREF

  v68 = __readfsqword(0x28u);
  *(_QWORD *)&v53 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v52) = 3;
  v2 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v2, "name", v3, v4, v5, v6, v32, v36, (__int64)&v53);
  LOBYTE(v54) = 0;
  *(_QWORD *)&v55 = 0;
  v53 = (unsigned __int64)v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v54) = 3;
  v7 = (_QWORD *)operator new(0x20u);
  *v7 = v7 + 2;
  std::string::_M_construct<true>();
  v55 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v65,
    (const __m128i *)&v52);
  v65[2] = 0;
  v56 = 0;
  *(_QWORD *)&v57 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v56 = 3;
  v8 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v8, "description", v9, v10, v11, v12, v33, v37, v39);
  v58 = 0;
  v57 = (unsigned __int64)v8;
  *(_QWORD *)&v59 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v58 = 3;
  v13 = (_QWORD *)operator new(0x20u);
  *v13 = v13 + 2;
  std::string::_M_construct<true>();
  v59 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v66,
    (const __m128i *)&v56);
  v66[2] = 0;
  v60 = 0;
  *(_QWORD *)&v61 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v60 = 3;
  v14 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v14, "inputSchema", v15, v16, v17, v18, v34, (int)&v61, v40);
  v62 = 0;
  v63 = 0;
  v64 = a2 + 64;
  v61 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v67,
    (const __m128i *)&v60);
  v67[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v65,
    3,
    v19,
    v20,
    v21,
    v35,
    v38,
    v41,
    (int)&v55,
    (int)&v56,
    (int)&v52,
    v42,
    v43,
    v45,
    v46,
    v52,
    v53,
    *((__int64 *)&v53 + 1),
    v54,
    v55);
  v22 = &v68;
  do
  {
    v22 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v22 != v65 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( a2[96] )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v24 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v24 = 0;
    *(_QWORD *)(v24 + 8) = v47;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( !a2[152] )
      return a1;
LABEL_7:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    if ( a2[136] )
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v26 = (_QWORD *)operator new(0x20u);
      *v26 = v26 + 2;
      std::string::_M_construct<true>();
      v27 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      *(_BYTE *)v27 = 3;
      *(_QWORD *)(v27 + 8) = v26;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( !a2[145] )
      {
LABEL_9:
        if ( !a2[147] )
          goto LABEL_10;
        goto LABEL_15;
      }
    }
    else if ( !a2[145] )
    {
      goto LABEL_9;
    }
    v48 = (unsigned __int8)a2[144];
    v28 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v28 = 4;
    *(_QWORD *)(v28 + 8) = v48;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( !a2[147] )
    {
LABEL_10:
      if ( !a2[149] )
        goto LABEL_11;
      goto LABEL_16;
    }
LABEL_15:
    v49 = (unsigned __int8)a2[146];
    v29 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v29 = 4;
    *(_QWORD *)(v29 + 8) = v49;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( !a2[149] )
    {
LABEL_11:
      if ( !a2[151] )
      {
LABEL_12:
        v25 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        *(_BYTE *)v25 = 0;
        *(_QWORD *)(v25 + 8) = v44;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        return a1;
      }
LABEL_17:
      v51 = (unsigned __int8)a2[150];
      v31 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      *(_BYTE *)v31 = 4;
      *(_QWORD *)(v31 + 8) = v51;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      goto LABEL_12;
    }
LABEL_16:
    v50 = (unsigned __int8)a2[148];
    v30 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v30 = 4;
    *(_QWORD *)(v30 + 8) = v50;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( !a2[151] )
      goto LABEL_12;
    goto LABEL_17;
  }
  if ( a2[152] )
    goto LABEL_7;
  return a1;
}

