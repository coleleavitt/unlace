__m128i *__fastcall ida_mcp::mcp::McpResponse::make_error(
        __m128i *a1,
        const __m128i *a2,
        __int64 a3,
        char **a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r14d
  __m128i v9; // xmm0
  __int64 *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  char *v21; // rdx
  _QWORD *v22; // rsi
  char *v23; // rcx
  char *v24; // rdi
  __m128i v25; // xmm0
  __int8 v27; // si
  __int64 v28; // rax
  unsigned int v29; // r8d
  unsigned __int64 v30; // r9
  int v31; // edx
  signed __int64 v32; // rsi
  unsigned int v33; // r8d
  unsigned int v34; // r8d
  unsigned int v35; // edx
  __int64 v36; // r10
  int v37; // [rsp+0h] [rbp-108h]
  int v38; // [rsp+0h] [rbp-108h]
  int v39; // [rsp+0h] [rbp-108h]
  int v40; // [rsp+8h] [rbp-100h]
  int v41; // [rsp+8h] [rbp-100h]
  int v42; // [rsp+8h] [rbp-100h]
  __m128i v43; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v44; // [rsp+20h] [rbp-E8h]
  char v45; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v46; // [rsp+38h] [rbp-D0h]
  char v47; // [rsp+48h] [rbp-C0h]
  __int64 v48; // [rsp+50h] [rbp-B8h]
  __int64 v49; // [rsp+58h] [rbp-B0h]
  char v50; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+68h] [rbp-A0h]
  char v52; // [rsp+78h] [rbp-90h]
  __int128 v53; // [rsp+80h] [rbp-88h]
  __m128i v54; // [rsp+90h] [rbp-78h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-68h]
  _QWORD v56[12]; // [rsp+A8h] [rbp-60h] BYREF

  v6 = a3;
  v56[4] = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>(
    a1->m128i_i64,
    "2.0",
    a3,
    (__int64)a4,
    a5,
    a6,
    v37,
    v40,
    v43.m128i_i64[0]);
  a1[6].m128i_i8[8] = 0;
  v9 = _mm_loadu_si128(a2);
  a1[4].m128i_i8[8] = 0;
  a1[6].m128i_i8[0] = 0;
  a2->m128i_i8[0] = 0;
  a2->m128i_i64[1] = 0;
  a1[3].m128i_i8[0] = 1;
  a1[2] = v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v45 = 3;
  v10 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v10, "code", v11, v12, v13, v14, v38, v41, v43.m128i_i64[0]);
  v47 = 5;
  v48 = v6;
  v49 = 0;
  v46 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v54,
    (const __m128i *)&v45);
  v50 = 0;
  v55 = 0;
  *(_QWORD *)&v51 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v50 = 3;
  v15 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v15, "message", v16, v17, v18, v19, v39, v42, v43.m128i_i64[0]);
  v52 = 0;
  v51 = (unsigned __int64)v15;
  *(_QWORD *)&v53 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v52 = 3;
  v20 = (_QWORD *)operator new(0x20u);
  v21 = *a4;
  v22 = v20 + 2;
  v23 = (char *)(a4 + 2);
  v24 = a4[1];
  *v20 = v20 + 2;
  if ( v21 == (char *)(a4 + 2) )
  {
    v29 = (_DWORD)v24 + 1;
    if ( (unsigned int)((_DWORD)v24 + 1) >= 8 )
    {
      v20[2] = a4[2];
      *(_QWORD *)((char *)v22 + v29 - 8) = *(_QWORD *)&v23[v29 - 8];
      v30 = (unsigned __int64)(v20 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v31 = (_DWORD)v22 - v30;
      v32 = v23 - ((char *)v22 - v30);
      v33 = (v31 + v29) & 0xFFFFFFF8;
      if ( v33 >= 8 )
      {
        v34 = v33 & 0xFFFFFFF8;
        v35 = 0;
        do
        {
          v36 = v35;
          v35 += 8;
          *(_QWORD *)(v30 + v36) = *(_QWORD *)(v32 + v36);
        }
        while ( v35 < v34 );
      }
    }
    else if ( (v29 & 4) != 0 )
    {
      *((_DWORD *)v20 + 4) = *((_DWORD *)a4 + 4);
      *(_DWORD *)((char *)v22 + v29 - 4) = *(_DWORD *)&v23[v29 - 4];
    }
    else if ( (_DWORD)v24 != -1 )
    {
      *((_BYTE *)v20 + 16) = *((_BYTE *)a4 + 16);
      if ( (v29 & 2) != 0 )
        *(_WORD *)((char *)v22 + v29 - 2) = *(_WORD *)&v23[v29 - 2];
    }
  }
  else
  {
    *v20 = v21;
    v20[2] = a4[2];
  }
  v20[1] = v24;
  *a4 = v23;
  a4[1] = nullptr;
  *((_BYTE *)a4 + 16) = 0;
  v53 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v56,
    (const __m128i *)&v50);
  v56[2] = 0;
  v43.m128i_i8[0] = 0;
  v43.m128i_i64[1] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v43,
    &v54);
  v25 = _mm_load_si128(&v43);
  if ( a1[6].m128i_i8[0] )
  {
    v44 = v25;
    v27 = a1[5].m128i_i8[0];
    a1[5].m128i_i8[0] = v43.m128i_i8[0];
    v28 = a1[5].m128i_i64[1];
    a1[5].m128i_i64[1] = v25.m128i_i64[1];
    v44.m128i_i64[1] = v28;
    v44.m128i_i8[0] = v27;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  else
  {
    a1[6].m128i_i8[0] = 1;
    a1[5] = v25;
  }
  v43.m128i_i8[0] = 0;
  v43.m128i_i64[1] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

