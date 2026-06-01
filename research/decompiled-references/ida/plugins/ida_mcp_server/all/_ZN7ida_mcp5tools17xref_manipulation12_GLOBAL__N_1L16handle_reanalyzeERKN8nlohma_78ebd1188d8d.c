__int64 __fastcall ida_mcp::tools::xref_manipulation::`anonymous namespace'::handle_reanalyze(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  char v3; // r12
  __int64 v4; // r13
  __int64 *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  size_t v10; // rax
  unsigned int v11; // r15d
  __int64 *v12; // rdx
  _QWORD *v13; // rax
  __int64 *v14; // rdx
  _QWORD *v15; // rcx
  size_t v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128i v22; // xmm0
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128i v28; // xmm0
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  char *v32; // rbx
  __int64 *v34; // rax
  unsigned __int64 v35; // rdx
  char *v36; // rax
  char *v37; // rbp
  unsigned int v38; // r15d
  unsigned int v39; // r15d
  unsigned int v40; // eax
  __int64 v41; // rcx
  unsigned int v42; // edi
  unsigned __int64 v43; // r8
  char *v44; // rcx
  char *v45; // r9
  unsigned int v46; // edx
  unsigned int v47; // ecx
  __int64 v48; // rdi
  int v49; // [rsp+0h] [rbp-1B8h]
  int v50; // [rsp+0h] [rbp-1B8h]
  int v51; // [rsp+0h] [rbp-1B8h]
  int v52; // [rsp+0h] [rbp-1B8h]
  __m128i v53; // [rsp+8h] [rbp-1B0h] BYREF
  __int128 *v54; // [rsp+18h] [rbp-1A0h]
  void **v55; // [rsp+20h] [rbp-198h]
  __int64 *v56; // [rsp+28h] [rbp-190h]
  __int64 v57; // [rsp+30h] [rbp-188h]
  __int64 v58; // [rsp+38h] [rbp-180h]
  __int64 v59; // [rsp+40h] [rbp-178h]
  __int64 v60; // [rsp+48h] [rbp-170h]
  void *v61; // [rsp+50h] [rbp-168h] BYREF
  size_t v62; // [rsp+58h] [rbp-160h]
  __int64 v63; // [rsp+60h] [rbp-158h] BYREF
  int v64; // [rsp+68h] [rbp-150h]
  __int64 v65; // [rsp+70h] [rbp-148h] BYREF
  __int128 v66; // [rsp+78h] [rbp-140h] BYREF
  char v67; // [rsp+88h] [rbp-130h]
  __int128 v68; // [rsp+90h] [rbp-128h]
  char v69; // [rsp+A0h] [rbp-118h] BYREF
  __m128i v70; // [rsp+A8h] [rbp-110h]
  char v71; // [rsp+B8h] [rbp-100h]
  __int64 v72; // [rsp+C0h] [rbp-F8h]
  __int64 v73; // [rsp+C8h] [rbp-F0h]
  void *v74; // [rsp+D0h] [rbp-E8h] BYREF
  __m128i v75; // [rsp+D8h] [rbp-E0h] BYREF
  __int64 v76; // [rsp+E8h] [rbp-D0h]
  __int64 v77; // [rsp+F0h] [rbp-C8h]
  __int64 v78; // [rsp+F8h] [rbp-C0h]
  _QWORD v79[3]; // [rsp+100h] [rbp-B8h] BYREF
  _QWORD v80[3]; // [rsp+118h] [rbp-A0h] BYREF
  _QWORD v81[3]; // [rsp+130h] [rbp-88h] BYREF
  char v82[8]; // [rsp+148h] [rbp-70h] BYREF
  char s[40]; // [rsp+150h] [rbp-68h] BYREF
  unsigned __int64 v84; // [rsp+178h] [rbp-40h]

  v53.m128i_i64[1] = a1;
  v84 = __readfsqword(0x28u);
  v74 = &v75.m128i_u64[1];
  v75.m128i_i64[0] = 0;
  v75.m128i_i8[8] = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0x12F58F);
  std::string::_M_assign();
  v1 = ida_mcp::parse_ea(v74, v75.m128i_u64[0]);
  v60 = v2;
  v3 = v2;
  v59 = v1;
  if ( v74 != &v75.m128i_u64[1] )
    operator delete(v74, v75.m128i_i64[1] + 1);
  if ( !v3 )
    JUMPOUT(0x12F753);
  v4 = (int)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[5],int,0>();
  auto_mark_range();
  v54 = &v66;
  *(_QWORD *)&v66 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v65) = 3;
  v5 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v5,
    "address",
    v6,
    v7,
    v8,
    v9,
    v49,
    v53.m128i_i32[0],
    v53.m128i_i64[1]);
  v66 = (unsigned __int64)v5;
  qsnprintf();
  v55 = &v61;
  v61 = &v63;
  v10 = strlen(s);
  v58 = v10;
  v11 = v10;
  if ( v10 > 0xF )
  {
    v34 = (__int64 *)std::string::_M_create();
    v61 = v34;
    v63 = v58;
  }
  else
  {
    if ( v10 == 1 )
    {
      LOBYTE(v63) = s[0];
LABEL_8:
      v12 = &v63;
      goto LABEL_9;
    }
    if ( !v10 )
      goto LABEL_8;
    v34 = &v63;
  }
  if ( v11 >= 8 )
  {
    *v34 = *(_QWORD *)s;
    *(__int64 *)((char *)v34 + v11 - 8) = *(_QWORD *)&v82[v11];
    v35 = (unsigned __int64)(v34 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v36 = (char *)v34 - v35;
    v37 = (char *)(s - v36);
    v38 = ((_DWORD)v36 + v11) & 0xFFFFFFF8;
    if ( v38 >= 8 )
    {
      v39 = v38 & 0xFFFFFFF8;
      v40 = 0;
      do
      {
        v41 = v40;
        v40 += 8;
        *(_QWORD *)(v35 + v41) = *(_QWORD *)&v37[v41];
      }
      while ( v40 < v39 );
    }
  }
  else if ( (v11 & 4) != 0 )
  {
    *(_DWORD *)v34 = *(_DWORD *)s;
    *(_DWORD *)((char *)v34 + v11 - 4) = *(_DWORD *)&v82[v11 + 4];
  }
  else if ( v11 )
  {
    *(_BYTE *)v34 = s[0];
    if ( (v11 & 2) != 0 )
      *(_WORD *)((char *)v34 + v11 - 2) = *(_WORD *)&v82[v11 + 6];
  }
  v10 = v58;
  v12 = (__int64 *)v61;
LABEL_9:
  v62 = v10;
  *((_BYTE *)v12 + v10) = 0;
  v67 = 0;
  *(_QWORD *)&v68 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v67 = 3;
  v13 = (_QWORD *)operator new(0x20u);
  v14 = (__int64 *)v61;
  v15 = v13 + 2;
  v16 = v62;
  *v13 = v13 + 2;
  if ( v14 == &v63 )
  {
    v42 = v16 + 1;
    if ( (unsigned int)(v16 + 1) >= 8 )
    {
      v13[2] = v63;
      *(_QWORD *)((char *)v15 + v42 - 8) = *(size_t *)((char *)&v62 + v42);
      v43 = (unsigned __int64)(v13 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v44 = (char *)v15 - v43;
      v45 = (char *)((char *)&v63 - v44);
      if ( (((_DWORD)v44 + v42) & 0xFFFFFFF8) >= 8 )
      {
        v46 = ((_DWORD)v44 + v42) & 0xFFFFFFF8;
        v47 = 0;
        do
        {
          v48 = v47;
          v47 += 8;
          *(_QWORD *)(v43 + v48) = *(_QWORD *)&v45[v48];
        }
        while ( v47 < v46 );
      }
    }
    else if ( (v42 & 4) != 0 )
    {
      *((_DWORD *)v13 + 4) = v63;
      *(_DWORD *)((char *)v15 + v42 - 4) = *(_DWORD *)((char *)&v62 + v42 + 4);
    }
    else if ( (_DWORD)v16 != -1 )
    {
      *((_BYTE *)v13 + 16) = v63;
      if ( (v42 & 2) != 0 )
        *(_WORD *)((char *)v15 + v42 - 2) = *(_WORD *)((char *)&v62 + v42 + 6);
    }
  }
  else
  {
    *v13 = v14;
    v13[2] = v63;
  }
  v13[1] = v16;
  v61 = &v63;
  v62 = 0;
  LOBYTE(v63) = 0;
  v56 = &v65;
  v68 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v79,
    (const __m128i *)&v65,
    2,
    1);
  v79[2] = 0;
  v69 = 0;
  v70.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v69 = 3;
  v17 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v17, "size", v18, v19, v20, v21, v50, (int)v17, v53.m128i_i64[1]);
  v22 = _mm_loadl_epi64(&v53);
  v71 = 6;
  v72 = v4;
  v73 = 0;
  v70 = v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v80,
    (const __m128i *)&v69,
    2,
    1);
  v80[2] = 0;
  LOBYTE(v74) = 0;
  v75.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v74) = 3;
  v23 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v23, "success", v24, v25, v26, v27, v51, (int)v23, v53.m128i_i64[1]);
  v28 = _mm_loadl_epi64(&v53);
  v76 = 4;
  v77 = 1;
  v78 = 0;
  v75 = v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v81,
    (const __m128i *)&v74,
    2,
    1);
  v81[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    (_QWORD *)v53.m128i_i64[1],
    (__int64)v79,
    3,
    v29,
    v30,
    v31,
    v52,
    v53.m128i_i64[0],
    v53.m128i_i32[2],
    (int)v54,
    (int)v55,
    (int)v56,
    v57,
    v58,
    v59,
    v60,
    (int)v61,
    v62,
    v63,
    v64,
    v65);
  v32 = v82;
  do
  {
    v32 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v32 != (char *)v79 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v61 != &v63 )
    operator delete(v61, v63 + 1);
  return v53.m128i_i64[1];
}

