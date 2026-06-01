__int64 __fastcall ida_mcp::tools::jumptables::`anonymous namespace'::create_switch_xrefs_impl(int a1)
{
  int v1; // eax
  char v2; // dl
  char v3; // bl
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rsi
  __int64 *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // rsi
  __int64 *v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char *v38; // rbp
  unsigned int v40; // edx
  unsigned int v41; // edx
  unsigned __int64 v42; // rdi
  char *v43; // rcx
  char *v44; // r8
  unsigned int v45; // edx
  unsigned int v46; // edx
  unsigned int v47; // ecx
  __int64 v48; // r9
  unsigned __int64 v49; // rdi
  char *v50; // rcx
  char *v51; // r8
  unsigned int v52; // edx
  unsigned int v53; // edx
  unsigned int v54; // ecx
  __int64 v55; // r9
  int v56; // [rsp+0h] [rbp-288h]
  int v57; // [rsp+0h] [rbp-288h]
  int v58; // [rsp+0h] [rbp-288h]
  int v59; // [rsp+0h] [rbp-288h]
  int v60; // [rsp+0h] [rbp-288h]
  int v61; // [rsp+0h] [rbp-288h]
  int v62; // [rsp+8h] [rbp-280h]
  int v63; // [rsp+8h] [rbp-280h]
  int v64; // [rsp+8h] [rbp-280h]
  int v65; // [rsp+8h] [rbp-280h]
  _QWORD *v66; // [rsp+8h] [rbp-280h]
  __int64 v67; // [rsp+8h] [rbp-280h]
  __int64 v68; // [rsp+10h] [rbp-278h]
  __int64 v69; // [rsp+10h] [rbp-278h]
  __int64 v70; // [rsp+10h] [rbp-278h]
  __int64 v71; // [rsp+10h] [rbp-278h]
  int v72; // [rsp+10h] [rbp-278h]
  int v73; // [rsp+50h] [rbp-238h]
  char v74; // [rsp+58h] [rbp-230h]
  __m128i si128; // [rsp+68h] [rbp-220h]
  void *v76; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v77; // [rsp+E8h] [rbp-1A0h]
  _QWORD v78[2]; // [rsp+F0h] [rbp-198h] BYREF
  void *v79; // [rsp+100h] [rbp-188h] BYREF
  __int64 v80; // [rsp+108h] [rbp-180h]
  _QWORD v81[2]; // [rsp+110h] [rbp-178h] BYREF
  char v82; // [rsp+120h] [rbp-168h] BYREF
  __int128 v83; // [rsp+128h] [rbp-160h] BYREF
  char v84; // [rsp+138h] [rbp-150h]
  __int128 v85; // [rsp+140h] [rbp-148h] BYREF
  char v86; // [rsp+150h] [rbp-138h] BYREF
  __int128 v87; // [rsp+158h] [rbp-130h] BYREF
  char v88; // [rsp+168h] [rbp-120h]
  __int128 v89; // [rsp+170h] [rbp-118h] BYREF
  void *v90; // [rsp+180h] [rbp-108h] BYREF
  __int128 v91; // [rsp+188h] [rbp-100h] BYREF
  __int64 v92; // [rsp+198h] [rbp-F0h]
  __int64 v93; // [rsp+1A0h] [rbp-E8h]
  __int64 v94; // [rsp+1A8h] [rbp-E0h]
  _QWORD v95[3]; // [rsp+1B0h] [rbp-D8h] BYREF
  _QWORD v96[3]; // [rsp+1C8h] [rbp-C0h] BYREF
  _QWORD v97[3]; // [rsp+1E0h] [rbp-A8h] BYREF
  char v98; // [rsp+1F8h] [rbp-90h] BYREF
  char v99[32]; // [rsp+200h] [rbp-88h] BYREF
  char v100[40]; // [rsp+220h] [rbp-68h] BYREF
  unsigned __int64 v101; // [rsp+248h] [rbp-40h]

  v101 = __readfsqword(0x28u);
  v90 = (char *)&v91 + 8;
  *(_QWORD *)&v91 = 0;
  BYTE8(v91) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0xFD24A);
  std::string::_M_assign();
  v1 = ida_mcp::parse_ea(v90, v91);
  v74 = v2;
  v3 = v2;
  v73 = v1;
  if ( v90 != (char *)&v91 + 8 )
    operator delete(v90, *((_QWORD *)&v91 + 1) + 1LL);
  if ( !v3 )
    JUMPOUT(0xFD1B3);
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2390);
  if ( get_switch_info() <= 0 )
    JUMPOUT(0xFD47F);
  create_switch_table();
  *(_QWORD *)&v83 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v82 = 3;
  v4 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v4, "address", v5, v6, v7, v8, v56, a1, (__int64)&v83);
  v83 = (unsigned __int64)v4;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v76, v99, v9, v10, v11, v12, v57, v62, v68);
  v84 = 0;
  *(_QWORD *)&v85 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v84 = 3;
  v13 = (_QWORD *)operator new(0x20u);
  v14 = v76;
  v15 = v13 + 2;
  v16 = v77;
  *v13 = v13 + 2;
  if ( v14 == v78 )
  {
    v40 = v16 + 1;
    if ( (unsigned int)(v16 + 1) >= 8 )
    {
      v13[2] = v78[0];
      *(_QWORD *)((char *)v15 + v40 - 8) = *(_QWORD *)((char *)&v78[-1] + v40);
      v42 = (unsigned __int64)(v13 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v43 = (char *)v15 - v42;
      v44 = (char *)((char *)v78 - v43);
      v45 = ((_DWORD)v43 + v40) & 0xFFFFFFF8;
      if ( v45 >= 8 )
      {
        v46 = v45 & 0xFFFFFFF8;
        v47 = 0;
        do
        {
          v48 = v47;
          v47 += 8;
          *(_QWORD *)(v42 + v48) = *(_QWORD *)&v44[v48];
        }
        while ( v47 < v46 );
      }
    }
    else if ( (v40 & 4) != 0 )
    {
      *((_DWORD *)v13 + 4) = v78[0];
      *(_DWORD *)((char *)v15 + v40 - 4) = *(_DWORD *)((char *)&v77 + v40 + 4);
    }
    else if ( (_DWORD)v16 != -1 )
    {
      *((_BYTE *)v13 + 16) = v78[0];
      if ( (v40 & 2) != 0 )
        *(_WORD *)((char *)v15 + v40 - 2) = *(_WORD *)((char *)&v77 + v40 + 6);
    }
  }
  else
  {
    *v13 = v14;
    v13[2] = v78[0];
  }
  v13[1] = v16;
  v76 = v78;
  v77 = 0;
  LOBYTE(v78[0]) = 0;
  v85 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v95,
    (const __m128i *)&v82);
  v95[2] = 0;
  v86 = 0;
  *(_QWORD *)&v87 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = 3;
  v17 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v17, "jump_table", v18, v19, v20, v21, v58, v63, v69);
  v87 = (unsigned __int64)v17;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v79, v100, v22, v23, v24, v25, v59, v64, v70);
  v88 = 0;
  *(_QWORD *)&v89 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v88 = 3;
  v26 = (_QWORD *)operator new(0x20u);
  v27 = v79;
  v28 = v26 + 2;
  v29 = v80;
  *v26 = v26 + 2;
  if ( v27 == v81 )
  {
    v41 = v29 + 1;
    if ( (unsigned int)(v29 + 1) >= 8 )
    {
      v26[2] = v81[0];
      *(_QWORD *)((char *)v28 + v41 - 8) = *(_QWORD *)((char *)&v81[-1] + v41);
      v49 = (unsigned __int64)(v26 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v50 = (char *)v28 - v49;
      v51 = (char *)((char *)v81 - v50);
      v52 = ((_DWORD)v50 + v41) & 0xFFFFFFF8;
      if ( v52 >= 8 )
      {
        v53 = v52 & 0xFFFFFFF8;
        v54 = 0;
        do
        {
          v55 = v54;
          v54 += 8;
          *(_QWORD *)(v49 + v55) = *(_QWORD *)&v51[v55];
        }
        while ( v54 < v53 );
      }
    }
    else if ( (v41 & 4) != 0 )
    {
      *((_DWORD *)v26 + 4) = v81[0];
      *(_DWORD *)((char *)v28 + v41 - 4) = *(_DWORD *)((char *)&v80 + v41 + 4);
    }
    else if ( (_DWORD)v29 != -1 )
    {
      *((_BYTE *)v26 + 16) = v81[0];
      if ( (v41 & 2) != 0 )
        *(_WORD *)((char *)v28 + v41 - 2) = *(_WORD *)((char *)&v80 + v41 + 6);
    }
  }
  else
  {
    *v26 = v27;
    v26[2] = v81[0];
  }
  v26[1] = v29;
  v79 = v81;
  v80 = 0;
  LOBYTE(v81[0]) = 0;
  v89 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v96,
    (const __m128i *)&v86);
  v96[2] = 0;
  LOBYTE(v90) = 0;
  *(_QWORD *)&v91 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v90) = 3;
  v30 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v30, "success", v31, v32, v33, v34, v60, v65, v71);
  v92 = 4;
  v91 = (unsigned __int64)v30;
  v93 = 1;
  v94 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v97,
    (const __m128i *)&v90);
  v97[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v66,
    (__int64)v95,
    3,
    v35,
    v36,
    v37,
    v61,
    (__int64)v66,
    v72,
    (int)&v85,
    (int)&v87,
    (int)&v89,
    (__int64)&v82,
    (int)&v86,
    (int)&v76,
    (int)&v79,
    v73,
    v74,
    0x800000,
    si128.m128i_i32[0],
    si128.m128i_i64[1]);
  v38 = &v98;
  do
  {
    v38 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v38 != (char *)v95 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v79 != v81 )
    operator delete(v79, v81[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v76 != v78 )
    operator delete(v76, v78[0] + 1LL);
  return v67;
}

