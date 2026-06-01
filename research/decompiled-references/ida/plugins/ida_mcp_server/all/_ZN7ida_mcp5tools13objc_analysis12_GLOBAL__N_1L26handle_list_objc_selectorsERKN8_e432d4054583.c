_QWORD *__fastcall ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_list_objc_selectors(_QWORD *a1)
{
  unsigned __int64 i; // rbx
  __int64 *v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  __int64 *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i si128; // xmm0
  unsigned __int64 *segm_by_name; // [rsp+0h] [rbp-1C8h]
  int v26; // [rsp+0h] [rbp-1C8h]
  int v27; // [rsp+0h] [rbp-1C8h]
  int v28; // [rsp+8h] [rbp-1C0h]
  int v29; // [rsp+8h] [rbp-1C0h]
  int v30; // [rsp+8h] [rbp-1C0h]
  __int64 v31; // [rsp+10h] [rbp-1B8h]
  __int64 v32; // [rsp+10h] [rbp-1B8h]
  __int64 v33; // [rsp+10h] [rbp-1B8h]
  int v34; // [rsp+20h] [rbp-1A8h]
  __m128i v35[2]; // [rsp+90h] [rbp-138h] BYREF
  char v36; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v37; // [rsp+B8h] [rbp-110h]
  char v38; // [rsp+C8h] [rbp-100h]
  __int128 v39; // [rsp+D0h] [rbp-F8h]
  char v40; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v41; // [rsp+E8h] [rbp-E0h]
  __m128i v42; // [rsp+F8h] [rbp-D0h]
  __int64 v43; // [rsp+108h] [rbp-C0h]
  __m128i v44; // [rsp+110h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+120h] [rbp-A8h]
  __int64 v46; // [rsp+128h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+138h] [rbp-90h]
  unsigned __int64 v48; // [rsp+188h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  segm_by_name = (unsigned __int64 *)get_segm_by_name();
  if ( segm_by_name || (segm_by_name = (unsigned __int64 *)get_segm_by_name()) != nullptr )
  {
    v35[0].m128i_i32[0] = 100;
    v34 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[6],int,0>();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    for ( i = *segm_by_name; i < segm_by_name[1]; i += 8LL )
    {
      if ( v34 <= 0 )
        break;
      if ( (unsigned __int64)(get_qword() - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        get_max_strlit_length();
        get_strlit_contents();
      }
    }
    v36 = 0;
    *(_QWORD *)&v37 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v36 = 3;
    v2 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v2, "selector_count", v3, v4, v5, v6, (int)segm_by_name, v28, v31);
    v37 = (unsigned __int64)v2;
    v39 = 0u;
    v38 = 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v44,
      (const __m128i *)&v36);
    v45 = 0;
    v40 = 0;
    *(_QWORD *)&v41 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v40 = 3;
    v7 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v7, "selectors", v8, v9, v10, v11, v26, v29, v32);
    v41 = (unsigned __int64)v7;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v43 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v46,
      (const __m128i *)&v40);
    v47 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      a1,
      &v44);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  else
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v36 = 3;
    v13 = operator new(0x20u);
    *(_DWORD *)(v13 + 16) = 1869771365;
    *(_QWORD *)v13 = v13 + 16;
    *(_BYTE *)(v13 + 20) = 114;
    *(_QWORD *)(v13 + 8) = 5;
    *(_BYTE *)(v13 + 21) = 0;
    v37 = (unsigned __int64)v13;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v38 = 3;
    v14 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v14, "No __objc_selrefs segment", v15, v16, v17, v18, 0, v28, v31);
    v39 = (unsigned __int64)v14;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v44,
      (const __m128i *)&v36);
    v45 = 0;
    v40 = 0;
    *(_QWORD *)&v41 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v40 = 3;
    v19 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v19, "selectors", v20, v21, v22, v23, v27, v30, v33);
    v41 = (unsigned __int64)v19;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    si128 = _mm_load_si128(v35);
    v43 = 0;
    v42 = si128;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v46,
      (const __m128i *)&v40);
    v47 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      a1,
      &v44);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  return a1;
}

