__int64 __fastcall ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_get_item_color(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  char v3; // bp
  unsigned int item_color; // r13d
  __int64 *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  size_t v10; // rax
  unsigned int v11; // r14d
  __int64 *v12; // rdx
  _QWORD *v13; // rax
  __int64 *v14; // rdx
  _QWORD *v15; // rcx
  size_t v16; // rsi
  __int64 *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // dl
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128i v29; // xmm0
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  char *v33; // rbx
  __int64 *v35; // rax
  unsigned __int64 v36; // rdx
  char *v37; // rax
  char *v38; // rbp
  unsigned int v39; // r14d
  unsigned int v40; // r14d
  unsigned int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // edi
  unsigned __int64 v44; // r8
  char *v45; // rcx
  char *v46; // r9
  unsigned int v47; // edx
  unsigned int v48; // ecx
  __int64 v49; // rdi
  __m128i v50; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v51; // [rsp+10h] [rbp-1A8h]
  __int128 *v52; // [rsp+18h] [rbp-1A0h]
  void **v53; // [rsp+20h] [rbp-198h]
  __int64 *v54; // [rsp+28h] [rbp-190h]
  __int64 v55; // [rsp+30h] [rbp-188h]
  __int64 v56; // [rsp+38h] [rbp-180h]
  __int64 v57; // [rsp+40h] [rbp-178h]
  __int64 v58; // [rsp+48h] [rbp-170h]
  void *v59; // [rsp+50h] [rbp-168h] BYREF
  size_t v60; // [rsp+58h] [rbp-160h]
  __int64 v61; // [rsp+60h] [rbp-158h] BYREF
  int v62; // [rsp+68h] [rbp-150h]
  __int64 v63; // [rsp+70h] [rbp-148h] BYREF
  __int128 v64; // [rsp+78h] [rbp-140h] BYREF
  char v65; // [rsp+88h] [rbp-130h]
  __int128 v66; // [rsp+90h] [rbp-128h] BYREF
  char v67; // [rsp+A0h] [rbp-118h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-110h]
  char v69; // [rsp+B8h] [rbp-100h]
  __int64 v70; // [rsp+C0h] [rbp-F8h]
  __int64 v71; // [rsp+C8h] [rbp-F0h]
  void *v72; // [rsp+D0h] [rbp-E8h] BYREF
  __m128i v73; // [rsp+D8h] [rbp-E0h] BYREF
  char v74; // [rsp+E8h] [rbp-D0h]
  _BOOL8 v75; // [rsp+F0h] [rbp-C8h]
  __int64 v76; // [rsp+F8h] [rbp-C0h]
  _QWORD v77[3]; // [rsp+100h] [rbp-B8h] BYREF
  _QWORD v78[3]; // [rsp+118h] [rbp-A0h] BYREF
  _QWORD v79[3]; // [rsp+130h] [rbp-88h] BYREF
  char v80[8]; // [rsp+148h] [rbp-70h] BYREF
  char s[40]; // [rsp+150h] [rbp-68h] BYREF
  unsigned __int64 v82; // [rsp+178h] [rbp-40h]

  v50.m128i_i64[1] = a1;
  v82 = __readfsqword(0x28u);
  v72 = &v73.m128i_u64[1];
  v73.m128i_i64[0] = 0;
  v73.m128i_i8[8] = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0x12D88F);
  std::string::_M_assign();
  v1 = ida_mcp::parse_ea(v72, v73.m128i_u64[0]);
  v58 = v2;
  v3 = v2;
  v57 = v1;
  if ( v72 != &v73.m128i_u64[1] )
    operator delete(v72, v73.m128i_i64[1] + 1);
  if ( !v3 )
    JUMPOUT(0x12DA18);
  *(_QWORD *)&v64 = 0;
  item_color = get_item_color();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v63) = 3;
  v5 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v5,
    "address",
    v6,
    v7,
    v8,
    v9,
    v50.m128i_i32[0],
    v50.m128i_i32[2],
    (__int64)&v64);
  v64 = (unsigned __int64)v5;
  qsnprintf();
  v53 = &v59;
  v59 = &v61;
  v10 = strlen(s);
  v56 = v10;
  v11 = v10;
  if ( v10 > 0xF )
  {
    v35 = (__int64 *)std::string::_M_create();
    v59 = v35;
    v61 = v56;
  }
  else
  {
    if ( v10 == 1 )
    {
      LOBYTE(v61) = s[0];
LABEL_8:
      v12 = &v61;
      goto LABEL_9;
    }
    if ( !v10 )
      goto LABEL_8;
    v35 = &v61;
  }
  if ( v11 >= 8 )
  {
    *v35 = *(_QWORD *)s;
    *(__int64 *)((char *)v35 + v11 - 8) = *(_QWORD *)&v80[v11];
    v36 = (unsigned __int64)(v35 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v37 = (char *)v35 - v36;
    v38 = (char *)(s - v37);
    v39 = ((_DWORD)v37 + v11) & 0xFFFFFFF8;
    if ( v39 >= 8 )
    {
      v40 = v39 & 0xFFFFFFF8;
      v41 = 0;
      do
      {
        v42 = v41;
        v41 += 8;
        *(_QWORD *)(v36 + v42) = *(_QWORD *)&v38[v42];
      }
      while ( v41 < v40 );
    }
  }
  else if ( (v11 & 4) != 0 )
  {
    *(_DWORD *)v35 = *(_DWORD *)s;
    *(_DWORD *)((char *)v35 + v11 - 4) = *(_DWORD *)&v80[v11 + 4];
  }
  else if ( v11 )
  {
    *(_BYTE *)v35 = s[0];
    if ( (v11 & 2) != 0 )
      *(_WORD *)((char *)v35 + v11 - 2) = *(_WORD *)&v80[v11 + 6];
  }
  v10 = v56;
  v12 = (__int64 *)v59;
LABEL_9:
  v60 = v10;
  *((_BYTE *)v12 + v10) = 0;
  v65 = 0;
  *(_QWORD *)&v66 = 0;
  v52 = &v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v65 = 3;
  v13 = (_QWORD *)operator new(0x20u);
  v14 = (__int64 *)v59;
  v15 = v13 + 2;
  v16 = v60;
  *v13 = v13 + 2;
  if ( v14 == &v61 )
  {
    v43 = v16 + 1;
    if ( (unsigned int)(v16 + 1) >= 8 )
    {
      v13[2] = v61;
      *(_QWORD *)((char *)v15 + v43 - 8) = *(size_t *)((char *)&v60 + v43);
      v44 = (unsigned __int64)(v13 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v45 = (char *)v15 - v44;
      v46 = (char *)((char *)&v61 - v45);
      if ( (((_DWORD)v45 + v43) & 0xFFFFFFF8) >= 8 )
      {
        v47 = ((_DWORD)v45 + v43) & 0xFFFFFFF8;
        v48 = 0;
        do
        {
          v49 = v48;
          v48 += 8;
          *(_QWORD *)(v44 + v49) = *(_QWORD *)&v46[v49];
        }
        while ( v48 < v47 );
      }
    }
    else if ( (v43 & 4) != 0 )
    {
      *((_DWORD *)v13 + 4) = v61;
      *(_DWORD *)((char *)v15 + v43 - 4) = *(_DWORD *)((char *)&v60 + v43 + 4);
    }
    else if ( (_DWORD)v16 != -1 )
    {
      *((_BYTE *)v13 + 16) = v61;
      if ( (v43 & 2) != 0 )
        *(_WORD *)((char *)v15 + v43 - 2) = *(_WORD *)((char *)&v60 + v43 + 6);
    }
  }
  else
  {
    *v13 = v14;
    v13[2] = v61;
  }
  v13[1] = v16;
  v59 = &v61;
  v60 = 0;
  LOBYTE(v61) = 0;
  v54 = &v63;
  v66 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v77,
    (const __m128i *)&v63,
    2,
    1);
  v77[2] = 0;
  v67 = 0;
  *(_QWORD *)&v68 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v67 = 3;
  v17 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v17,
    "color",
    v18,
    v19,
    v20,
    v21,
    v50.m128i_i32[0],
    v50.m128i_i32[2],
    v51);
  v22 = 6;
  v23 = item_color;
  if ( item_color == -1 )
  {
    v22 = 0;
    v23 = 0;
  }
  v68 = (unsigned __int64)v17;
  v69 = v22;
  v70 = v23;
  v71 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v78,
    (const __m128i *)&v67,
    2,
    1);
  v78[2] = 0;
  LOBYTE(v72) = 0;
  v73.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v72) = 3;
  v24 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v24,
    "has_custom_color",
    v25,
    v26,
    v27,
    v28,
    (int)v24,
    v50.m128i_i32[2],
    v51);
  v29 = _mm_loadl_epi64(&v50);
  v74 = 4;
  v76 = 0;
  v73 = v29;
  v75 = item_color != -1;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v79,
    (const __m128i *)&v72,
    2,
    1);
  v79[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    (_QWORD *)v50.m128i_i64[1],
    (__int64)v77,
    3,
    v30,
    v31,
    v32,
    v50.m128i_i32[0],
    v50.m128i_i64[1],
    v51,
    (int)v52,
    (int)v53,
    (int)v54,
    v55,
    v56,
    v57,
    v58,
    (int)v59,
    v60,
    v61,
    v62,
    v63);
  v33 = v80;
  do
  {
    v33 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v33 != (char *)v77 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v59 != &v61 )
    operator delete(v59, v61 + 1);
  return v50.m128i_i64[1];
}

