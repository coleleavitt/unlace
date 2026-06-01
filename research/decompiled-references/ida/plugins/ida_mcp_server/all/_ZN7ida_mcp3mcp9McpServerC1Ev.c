// Alternative name is '_ZN7ida_mcp3mcp9McpServerC2Ev'
unsigned __int64 __fastcall ida_mcp::mcp::McpServer::McpServer(ida_mcp::mcp::McpServer *this)
{
  __int64 *v1; // rbp
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __m128i v6; // xmm0
  __int64 *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i v12; // xmm0
  __int64 *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128i v18; // xmm0
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i v24; // xmm0
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  char v29; // si
  __int64 v30; // rax
  char *v31; // rbx
  __m128i v33; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v34; // [rsp+10h] [rbp-1D8h]
  char *v35; // [rsp+18h] [rbp-1D0h]
  int v36; // [rsp+20h] [rbp-1C8h]
  int v37; // [rsp+28h] [rbp-1C0h]
  __int64 v38; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v39; // [rsp+38h] [rbp-1B0h]
  __m128i v40; // [rsp+40h] [rbp-1A8h] BYREF
  __m128i v41; // [rsp+50h] [rbp-198h] BYREF
  __m128i v42; // [rsp+60h] [rbp-188h] BYREF
  __m128i v43; // [rsp+70h] [rbp-178h] BYREF
  char v44; // [rsp+80h] [rbp-168h] BYREF
  __int128 v45; // [rsp+88h] [rbp-160h]
  __m128i v46; // [rsp+98h] [rbp-150h]
  __int64 v47; // [rsp+A8h] [rbp-140h]
  char v48; // [rsp+B0h] [rbp-138h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-130h]
  __m128i v50; // [rsp+C8h] [rbp-120h]
  __int64 v51; // [rsp+D8h] [rbp-110h]
  char v52; // [rsp+E0h] [rbp-108h] BYREF
  __int128 v53; // [rsp+E8h] [rbp-100h]
  __m128i v54; // [rsp+F8h] [rbp-F0h]
  __int64 v55; // [rsp+108h] [rbp-E0h]
  char v56; // [rsp+110h] [rbp-D8h] BYREF
  __m128i v57; // [rsp+118h] [rbp-D0h]
  __m128i v58; // [rsp+128h] [rbp-C0h]
  __int64 v59; // [rsp+138h] [rbp-B0h]
  _QWORD v60[3]; // [rsp+140h] [rbp-A8h] BYREF
  _QWORD v61[3]; // [rsp+158h] [rbp-90h] BYREF
  _QWORD v62[3]; // [rsp+170h] [rbp-78h] BYREF
  _QWORD v63[3]; // [rsp+188h] [rbp-60h] BYREF
  char v64; // [rsp+1A0h] [rbp-48h] BYREF
  unsigned __int64 v65; // [rsp+1A8h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  *((_OWORD *)this + 6) = 0;
  *((_QWORD *)this + 3) = (char *)this + 8;
  *((_QWORD *)this + 4) = (char *)this + 8;
  *((_QWORD *)this + 9) = (char *)this + 56;
  *((_QWORD *)this + 10) = (char *)this + 56;
  *((_QWORD *)this + 18) = (char *)this + 128;
  *((_QWORD *)this + 19) = (char *)this + 128;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 20) = 0;
  *((_DWORD *)this + 42) = 1;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_QWORD *)this + 25) = (char *)this + 184;
  *((_QWORD *)this + 26) = (char *)this + 184;
  *((_QWORD *)this + 27) = 0;
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 37) = 0;
  *((_BYTE *)this + 304) = 0;
  *((_QWORD *)this + 39) = 0;
  *((_OWORD *)this + 14) = 0;
  *((_OWORD *)this + 15) = 0;
  *(_OWORD *)((char *)this + 264) = 0;
  *(_OWORD *)((char *)this + 280) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v44 = 3;
  v1 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v1, "tools", v2, v3, v4, v5, v33.m128i_i32[0], v33.m128i_i32[2], v34);
  v45 = (unsigned __int64)v1;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v6 = _mm_load_si128(&v40);
  v47 = 0;
  v46 = v6;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v60,
    (const __m128i *)&v44);
  v60[2] = 0;
  v48 = 0;
  *(_QWORD *)&v49 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v48 = 3;
  v7 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v7, "resources", v8, v9, v10, v11, v33.m128i_i32[0], (int)&v44, v34);
  v49 = (unsigned __int64)v7;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v12 = _mm_load_si128(&v41);
  v51 = 0;
  v50 = v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v61,
    (const __m128i *)&v48);
  v61[2] = 0;
  v52 = 0;
  *(_QWORD *)&v53 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v52 = 3;
  v13 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v13,
    "prompts",
    v14,
    v15,
    v16,
    v17,
    v33.m128i_i32[0],
    v33.m128i_i32[2],
    (__int64)&v48);
  v53 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v18 = _mm_load_si128(&v42);
  v35 = &v52;
  v55 = 0;
  v54 = v18;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v62,
    (const __m128i *)&v52);
  v62[2] = 0;
  v56 = 0;
  v57.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v56 = 3;
  v19 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v19, "logging", v20, v21, v22, v23, (int)v19, v33.m128i_i32[2], v34);
  v57 = _mm_loadl_epi64(&v33);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v24 = _mm_load_si128(&v43);
  v33.m128i_i64[0] = (__int64)&v56;
  v59 = 0;
  v58 = v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v63,
    (const __m128i *)&v56);
  v63[2] = 0;
  LOBYTE(v38) = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v38,
    (__int64)v60,
    4,
    v25,
    v26,
    v27,
    v33.m128i_i32[0],
    v33.m128i_i64[1],
    v34,
    (int)v35,
    v36,
    v37,
    v38,
    v39,
    v40.m128i_i32[0],
    v40.m128i_i32[2],
    v41.m128i_i32[0],
    v41.m128i_i8[8],
    v42.m128i_i64[0],
    v42.m128i_i32[2],
    v43.m128i_i64[0]);
  v28 = v39;
  v29 = *((_BYTE *)this + 304);
  *((_BYTE *)this + 304) = v38;
  v30 = *((_QWORD *)this + 39);
  *((_QWORD *)this + 39) = v28;
  v31 = &v64;
  v39 = v30;
  LOBYTE(v38) = v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  do
  {
    v31 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v31 != (char *)v60 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v65 - __readfsqword(0x28u);
}

