_QWORD *__fastcall ida_mcp::tools::database::handle_get_database_flag(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        int a9,
        int a10,
        char a11,
        char a12,
        int a13,
        char a14,
        int a15,
        int a16,
        char a17,
        char a18,
        int a19,
        char a20,
        char a21,
        int a22,
        char a23,
        char a24,
        int a25,
        int a26,
        __int64 a27)
{
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 v29; // r12
  __int64 v30; // rbp
  size_t v31; // rdx
  int v32; // eax
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r12
  size_t v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int8 v42; // al
  unsigned int v43; // ebx
  unsigned __int8 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rax
  char v48; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v49; // [rsp+18h] [rbp-D0h]
  char v50; // [rsp+28h] [rbp-C0h]
  __int64 v51; // [rsp+30h] [rbp-B8h]
  __int64 v52; // [rsp+38h] [rbp-B0h]
  char v53; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+48h] [rbp-A0h]
  char v55; // [rsp+58h] [rbp-90h]
  __int64 v56; // [rsp+60h] [rbp-88h]
  __int64 v57; // [rsp+68h] [rbp-80h]
  __m128i v58; // [rsp+70h] [rbp-78h] BYREF
  __int64 v59; // [rsp+80h] [rbp-68h]
  _QWORD v60[12]; // [rsp+88h] [rbp-60h] BYREF

  v60[4] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_31;
  v27 = *(_QWORD *)(a2 + 8);
  v28 = *(_QWORD *)(v27 + 16);
  if ( !v28 )
    goto LABEL_31;
  v29 = v27 + 8;
  v30 = v29;
  do
  {
    while ( 1 )
    {
      v33 = *(_QWORD *)(v28 + 40);
      if ( !v33 )
        break;
      v31 = 4;
      if ( v33 <= 4 )
        v31 = *(_QWORD *)(v28 + 40);
      v32 = memcmp(*(const void **)(v28 + 32), "flag", v31);
      if ( v32 || (v32 = v33 - 4, (__int64)(v33 - 4) <= 0x7FFFFFFF) )
      {
        if ( v32 < 0 )
          break;
      }
      v30 = v28;
      v28 = *(_QWORD *)(v28 + 16);
      if ( !v28 )
        goto LABEL_12;
    }
    v28 = *(_QWORD *)(v28 + 24);
  }
  while ( v28 );
LABEL_12:
  if ( v29 == v30 )
    goto LABEL_31;
  v34 = *(_QWORD *)(v30 + 40);
  if ( v34 )
  {
    v35 = 4;
    if ( v34 <= 4 )
      v35 = *(_QWORD *)(v30 + 40);
    v36 = memcmp(*(const void **)(v30 + 32), "flag", v35);
    if ( !v36 )
    {
      v36 = v34 - 4;
      if ( (__int64)(v34 - 4) > 0x7FFFFFFF )
        goto LABEL_31;
    }
    if ( v36 > 0 )
      goto LABEL_31;
  }
  if ( !*(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
LABEL_31:
    JUMPOUT(0x55612);
  v39 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v42 = *(_BYTE *)v39;
  if ( *(_BYTE *)v39 != 6 )
  {
    if ( v42 > 6u )
    {
      if ( v42 == 7 )
      {
        v43 = (int)*(double *)(v39 + 8);
        goto LABEL_25;
      }
    }
    else
    {
      if ( v42 == 4 )
      {
        v43 = *(unsigned __int8 *)(v39 + 8);
        goto LABEL_25;
      }
      if ( v42 == 5 )
        goto LABEL_24;
    }
    ida_mcp::tools::database::handle_get_database_flag(
      a2,
      (__int64)"flag",
      v37,
      v38,
      v40,
      v41,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16,
      a17,
      a18,
      a19,
      a20,
      a21,
      a22,
      a23,
      a24,
      a25,
      a26,
      a27);
  }
LABEL_24:
  v43 = *(_DWORD *)(v39 + 8);
LABEL_25:
  *(_QWORD *)&v49 = 0;
  v44 = is_database_flag();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v48 = 3;
  v45 = operator new(0x20u);
  strcpy((char *)(v45 + 16), "flag");
  *(_QWORD *)v45 = v45 + 16;
  *(_QWORD *)(v45 + 8) = 4;
  v50 = 6;
  v51 = v43;
  v52 = 0;
  v49 = (unsigned __int64)v45;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v58,
    (const __m128i *)&v48);
  v53 = 0;
  v59 = 0;
  *(_QWORD *)&v54 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v53 = 3;
  v46 = operator new(0x20u);
  strcpy((char *)(v46 + 16), "is_set");
  *(_QWORD *)v46 = v46 + 16;
  *(_QWORD *)(v46 + 8) = 6;
  v55 = 4;
  v56 = v44;
  v57 = 0;
  v54 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v60,
    (const __m128i *)&v53);
  v60[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v58);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

