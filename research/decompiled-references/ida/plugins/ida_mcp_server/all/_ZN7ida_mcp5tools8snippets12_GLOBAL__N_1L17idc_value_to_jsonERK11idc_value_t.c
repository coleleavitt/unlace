_QWORD *__fastcall ida_mcp::tools::snippets::`anonymous namespace'::idc_value_to_json(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int128 v13; // xmm0
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128i v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int128 v33; // xmm0
  unsigned __int64 v34; // rax
  int v35; // [rsp+0h] [rbp-108h]
  int v36; // [rsp+8h] [rbp-100h]
  __m128i v37; // [rsp+10h] [rbp-F8h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-E0h]
  char v39; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v40; // [rsp+38h] [rbp-D0h]
  char v41; // [rsp+48h] [rbp-C0h]
  __int128 v42; // [rsp+50h] [rbp-B8h]
  char v43; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+78h] [rbp-90h]
  __m128i v46; // [rsp+80h] [rbp-88h]
  __m128i v47; // [rsp+90h] [rbp-78h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-68h]
  __int64 v49; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v51; // [rsp+C8h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  switch ( *(_BYTE *)a2 )
  {
    case 2:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v39 = 3;
      v10 = operator new(0x20u);
      *(_QWORD *)v10 = v10 + 16;
      strcpy((char *)(v10 + 16), "type");
      *(_QWORD *)(v10 + 8) = 4;
      *(_QWORD *)&v42 = 0;
      v40 = (unsigned __int64)v10;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v41 = 3;
      v11 = operator new(0x20u);
      strcpy((char *)(v11 + 16), "long");
      *(_QWORD *)v11 = v11 + 16;
      *(_QWORD *)(v11 + 8) = 4;
      v42 = (unsigned __int64)v11;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v47,
        (const __m128i *)&v39);
      v43 = 0;
      v48 = 0;
      *(_QWORD *)&v44 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v43 = 3;
      v12 = operator new(0x20u);
      *(_DWORD *)(v12 + 16) = 1970037110;
      v13 = (unsigned __int64)v12;
      *(_QWORD *)v12 = v12 + 16;
      *(_BYTE *)(v12 + 20) = 101;
      *(_QWORD *)(v12 + 8) = 5;
      *(_BYTE *)(v12 + 21) = 0;
      v14 = *(_QWORD *)(a2 + 8);
      LOBYTE(v45) = 5;
      v46 = (__m128i)v14;
      v44 = v13;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v49,
        (const __m128i *)&v43);
      v50 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        a1,
        &v47);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      break;
    case 3:
      v38 = 0;
      ieee_realcvt();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v39 = 3;
      v15 = operator new(0x20u);
      *(_QWORD *)v15 = v15 + 16;
      strcpy((char *)(v15 + 16), "type");
      *(_QWORD *)(v15 + 8) = 4;
      v40 = (unsigned __int64)v15;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v41 = 3;
      v16 = operator new(0x20u);
      *(_DWORD *)(v16 + 16) = 1634692198;
      *(_QWORD *)v16 = v16 + 16;
      *(_BYTE *)(v16 + 20) = 116;
      *(_QWORD *)(v16 + 8) = 5;
      *(_BYTE *)(v16 + 21) = 0;
      v42 = (unsigned __int64)v16;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v47,
        (const __m128i *)&v39);
      v43 = 0;
      v48 = 0;
      *(_QWORD *)&v44 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v43 = 3;
      v17 = operator new(0x20u);
      *(_BYTE *)(v17 + 20) = 101;
      *(_QWORD *)v17 = v17 + 16;
      *(_DWORD *)(v17 + 16) = 1970037110;
      *(_QWORD *)(v17 + 8) = 5;
      *(_BYTE *)(v17 + 21) = 0;
      v44 = (unsigned __int64)v17;
      LOBYTE(v45) = 7;
      v46 = (__m128i)v38;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v49,
        (const __m128i *)&v43);
      v50 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        a1,
        &v47);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      break;
    case 4:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v39 = 3;
      v18 = operator new(0x20u);
      *(_QWORD *)v18 = v18 + 16;
      strcpy((char *)(v18 + 16), "type");
      *(_QWORD *)(v18 + 8) = 4;
      *(_QWORD *)&v42 = 0;
      v40 = (unsigned __int64)v18;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v41 = 3;
      v19 = operator new(0x20u);
      strcpy((char *)(v19 + 16), "void");
      *(_QWORD *)v19 = v19 + 16;
      *(_QWORD *)(v19 + 8) = 4;
      v42 = (unsigned __int64)v19;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v47,
        (const __m128i *)&v39);
      v43 = 0;
      v48 = 0;
      *(_QWORD *)&v44 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v43 = 3;
      v20 = operator new(0x20u);
      *(_DWORD *)(v20 + 16) = 1970037110;
      *(_QWORD *)v20 = v20 + 16;
      *(_BYTE *)(v20 + 20) = 101;
      *(_QWORD *)(v20 + 8) = 5;
      *(_BYTE *)(v20 + 21) = 0;
      v44 = (unsigned __int64)v20;
      v45 = 0;
      v46 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v49,
        (const __m128i *)&v43);
      v50 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        a1,
        &v47);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      break;
    case 7:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v39 = 3;
      v21 = operator new(0x20u);
      *(_QWORD *)v21 = v21 + 16;
      strcpy((char *)(v21 + 16), "type");
      *(_QWORD *)(v21 + 8) = 4;
      *(_QWORD *)&v42 = 0;
      v40 = (unsigned __int64)v21;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v41 = 3;
      v22 = operator new(0x20u);
      strcpy((char *)(v22 + 16), "string");
      *(_QWORD *)v22 = v22 + 16;
      *(_QWORD *)(v22 + 8) = 6;
      v42 = (unsigned __int64)v22;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v47,
        (const __m128i *)&v39);
      v43 = 0;
      v48 = 0;
      *(_QWORD *)&v44 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v43 = 3;
      v23 = operator new(0x20u);
      *(_BYTE *)(v23 + 20) = 101;
      *(_QWORD *)v23 = v23 + 16;
      *(_DWORD *)(v23 + 16) = 1970037110;
      *(_QWORD *)(v23 + 8) = 5;
      *(_BYTE *)(v23 + 21) = 0;
      v44 = (unsigned __int64)v23;
      if ( *(_QWORD *)(a2 + 16) )
        v37.m128i_i64[0] = *(_QWORD *)(a2 + 8);
      else
        v37.m128i_i64[0] = (__int64)_qstring<char>::c_str(void)const::nullstr;
      LOBYTE(v45) = 0;
      v46.m128i_i64[0] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      LOBYTE(v45) = 3;
      v24 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(
        v24,
        (const char *)v37.m128i_i64[0],
        v25,
        v26,
        v27,
        v28,
        v35,
        (int)&v39,
        (__int64)v24);
      v29 = _mm_loadl_epi64(&v37);
      v37.m128i_i64[0] = (__int64)&v43;
      v46 = v29;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v49,
        (const __m128i *)&v43);
      v50 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        a1,
        &v47);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      break;
    case 9:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v39 = 3;
      v30 = operator new(0x20u);
      *(_QWORD *)v30 = v30 + 16;
      strcpy((char *)(v30 + 16), "type");
      *(_QWORD *)(v30 + 8) = 4;
      v40 = (unsigned __int64)v30;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v41 = 3;
      v31 = operator new(0x20u);
      *(_DWORD *)(v31 + 16) = 913600105;
      *(_QWORD *)v31 = v31 + 16;
      *(_BYTE *)(v31 + 20) = 52;
      *(_QWORD *)(v31 + 8) = 5;
      *(_BYTE *)(v31 + 21) = 0;
      v42 = (unsigned __int64)v31;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v47,
        (const __m128i *)&v39);
      v43 = 0;
      v48 = 0;
      *(_QWORD *)&v44 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v43 = 3;
      v32 = operator new(0x20u);
      *(_DWORD *)(v32 + 16) = 1970037110;
      v33 = (unsigned __int64)v32;
      *(_QWORD *)v32 = v32 + 16;
      *(_BYTE *)(v32 + 20) = 101;
      *(_QWORD *)(v32 + 8) = 5;
      *(_BYTE *)(v32 + 21) = 0;
      v34 = *(_QWORD *)(a2 + 8);
      LOBYTE(v45) = 5;
      v46 = (__m128i)v34;
      v44 = v33;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v49,
        (const __m128i *)&v43);
      v50 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        a1,
        &v47);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      break;
    default:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v39 = 3;
      v2 = operator new(0x20u);
      *(_QWORD *)v2 = v2 + 16;
      strcpy((char *)(v2 + 16), "type");
      *(_QWORD *)(v2 + 8) = 4;
      v40 = (unsigned __int64)v2;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v41 = 3;
      v3 = (__int64 *)operator new(0x20u);
      std::string::basic_string<std::allocator<char>>(v3, "unknown", v4, v5, v6, v7, v35, v36, v37.m128i_i64[0]);
      v42 = (unsigned __int64)v3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v47,
        (const __m128i *)&v39);
      v43 = 0;
      v48 = 0;
      *(_QWORD *)&v44 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v43 = 3;
      v8 = operator new(0x20u);
      *(_DWORD *)(v8 + 16) = 1970037110;
      *(_QWORD *)v8 = v8 + 16;
      *(_BYTE *)(v8 + 20) = 101;
      *(_QWORD *)(v8 + 8) = 5;
      *(_BYTE *)(v8 + 21) = 0;
      v44 = (unsigned __int64)v8;
      v45 = 0;
      v46 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        &v49,
        (const __m128i *)&v43);
      v50 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        a1,
        &v47);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      break;
  }
  return a1;
}

