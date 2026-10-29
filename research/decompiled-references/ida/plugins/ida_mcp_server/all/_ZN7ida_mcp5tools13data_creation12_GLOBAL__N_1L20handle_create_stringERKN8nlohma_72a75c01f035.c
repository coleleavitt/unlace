__int64 __fastcall ida_mcp::tools::data_creation::`anonymous namespace'::handle_create_string(__int64 a1, __int64 a2)
{
  const char *v2; // rbx
  __int8 v3; // r12
  int v4; // eax
  char v5; // dl
  char v6; // bp
  __int64 v7; // r8
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  size_t v13; // rdx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // rbx
  size_t v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // rbp
  int v23; // eax
  unsigned __int8 strlit; // bp
  __int64 *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // rsi
  __int64 *v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // rbp
  __m128i v49; // xmm0
  __int64 *v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rbp
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned int v64; // edx
  unsigned __int64 v65; // rdi
  char *v66; // rcx
  char *v67; // r8
  unsigned int v68; // edx
  unsigned int v69; // edx
  unsigned int v70; // ecx
  __int64 v71; // r9
  int v72; // [rsp+0h] [rbp-248h]
  int v73; // [rsp+0h] [rbp-248h]
  int v74; // [rsp+0h] [rbp-248h]
  int v75; // [rsp+0h] [rbp-248h]
  const __m128i *v76; // [rsp+0h] [rbp-248h]
  __int64 v77; // [rsp+8h] [rbp-240h]
  __int64 v78; // [rsp+8h] [rbp-240h]
  int v79; // [rsp+8h] [rbp-240h]
  int v80; // [rsp+8h] [rbp-240h]
  int v81; // [rsp+8h] [rbp-240h]
  int v82; // [rsp+8h] [rbp-240h]
  __int64 v83; // [rsp+8h] [rbp-240h]
  __int64 v84; // [rsp+10h] [rbp-238h]
  __int64 v85; // [rsp+10h] [rbp-238h]
  __int64 v86; // [rsp+10h] [rbp-238h]
  __int64 v87; // [rsp+10h] [rbp-238h]
  _QWORD *v88; // [rsp+10h] [rbp-238h]
  __int64 v89; // [rsp+10h] [rbp-238h]
  _QWORD *v90; // [rsp+18h] [rbp-230h]
  const char *v91; // [rsp+28h] [rbp-220h]
  int v92; // [rsp+48h] [rbp-200h]
  int v93; // [rsp+50h] [rbp-1F8h]
  char v94; // [rsp+58h] [rbp-1F0h]
  __m128i v95; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v96; // [rsp+70h] [rbp-1D8h]
  unsigned __int64 v97; // [rsp+78h] [rbp-1D0h]
  const char *v98; // [rsp+80h] [rbp-1C8h]
  __int128 v99; // [rsp+88h] [rbp-1C0h]
  unsigned __int64 v100; // [rsp+98h] [rbp-1B0h]
  void *v101; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v102; // [rsp+A8h] [rbp-1A0h]
  _QWORD v103[2]; // [rsp+B0h] [rbp-198h] BYREF
  char v104; // [rsp+C0h] [rbp-188h] BYREF
  __int128 v105; // [rsp+C8h] [rbp-180h] BYREF
  char v106; // [rsp+D8h] [rbp-170h]
  __int128 v107; // [rsp+E0h] [rbp-168h] BYREF
  char v108; // [rsp+F0h] [rbp-158h] BYREF
  __int128 v109; // [rsp+F8h] [rbp-150h] BYREF
  char v110; // [rsp+108h] [rbp-140h]
  __int64 v111; // [rsp+110h] [rbp-138h]
  __int64 v112; // [rsp+118h] [rbp-130h]
  char v113; // [rsp+120h] [rbp-128h] BYREF
  __int128 v114; // [rsp+128h] [rbp-120h]
  __m128i v115; // [rsp+138h] [rbp-110h]
  __int64 v116; // [rsp+148h] [rbp-100h]
  void *v117; // [rsp+150h] [rbp-F8h] BYREF
  __int128 v118; // [rsp+158h] [rbp-F0h] BYREF
  char v119; // [rsp+168h] [rbp-E0h]
  __int64 v120; // [rsp+170h] [rbp-D8h]
  __int64 v121; // [rsp+178h] [rbp-D0h]
  _QWORD v122[3]; // [rsp+180h] [rbp-C8h] BYREF
  _QWORD v123[3]; // [rsp+198h] [rbp-B0h] BYREF
  _QWORD v124[3]; // [rsp+1B0h] [rbp-98h] BYREF
  _QWORD v125[3]; // [rsp+1C8h] [rbp-80h] BYREF
  char v126[40]; // [rsp+1E0h] [rbp-68h] BYREF
  unsigned __int64 v127; // [rsp+208h] [rbp-40h]

  v127 = __readfsqword(0x28u);
  v2 = (const char *)a2;
  BYTE8(v118) = 0;
  v117 = (char *)&v118 + 8;
  v3 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_QWORD *)&v118 = 0;
  if ( v3 != 3 )
    JUMPOUT(0x123FAD);
  std::string::_M_assign();
  v4 = ida_mcp::parse_ea(v117, v118);
  v94 = v5;
  v6 = v5;
  v93 = v4;
  if ( v117 != (char *)&v118 + 8 )
    operator delete(v117, *((_QWORD *)&v118 + 1) + 1LL);
  if ( !v6 )
    JUMPOUT(0x124442);
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x123F87);
  v7 = *(_QWORD *)(a2 + 8);
  v98 = (const char *)a2;
  *((_QWORD *)&v99 + 1) = 0;
  v8 = *(_QWORD *)(v7 + 16);
  v100 = 0x8000000000000000LL;
  if ( v8 )
  {
    v77 = v7;
    v9 = v7 + 8;
    v10 = v7 + 8;
    v11 = v8;
    do
    {
      v12 = *(_QWORD *)(v11 + 40);
      if ( !v12 )
        goto LABEL_47;
      v13 = 6;
      if ( v12 <= 6 )
        v13 = *(_QWORD *)(v11 + 40);
      if ( ((v14 = memcmp(*(const void **)(v11 + 32), "length", v13)) != 0
         || (v14 = v12 - 6, (__int64)(v12 - 6) <= 0x7FFFFFFF))
        && v14 < 0 )
      {
LABEL_47:
        v11 = *(_QWORD *)(v11 + 24);
      }
      else
      {
        v9 = v11;
        v11 = *(_QWORD *)(v11 + 16);
      }
    }
    while ( v11 );
    v7 = v77;
    v2 = (const char *)a2;
    if ( v10 != v9 )
    {
      v15 = std::string::compare(*(void **)(v9 + 32), *(_QWORD *)(v9 + 40), "length");
      v7 = v77;
      if ( v15 <= 0 )
      {
        *(_QWORD *)&v99 = v9;
        nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
        v95.m128i_i32[0] = 0;
        nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
        if ( *(_BYTE *)a2 != 1 )
          JUMPOUT(0x1242E6);
        v7 = *(_QWORD *)(a2 + 8);
      }
    }
  }
  v16 = *(_QWORD *)(v7 + 16);
  v17 = v7 + 8;
  v95.m128i_i64[0] = (__int64)v2;
  v96 = 0;
  v18 = v17;
  v97 = 0x8000000000000000LL;
  if ( v16 )
  {
    v91 = v2;
    v19 = v16;
    v78 = v17;
    do
    {
      while ( 1 )
      {
        v22 = *(_QWORD *)(v19 + 40);
        if ( !v22 )
          break;
        v20 = 11;
        if ( v22 <= 0xB )
          v20 = *(_QWORD *)(v19 + 40);
        v21 = memcmp(*(const void **)(v19 + 32), "string_type", v20);
        if ( v21 || (v21 = v22 - 11, (__int64)(v22 - 11) <= 0x7FFFFFFF) )
        {
          if ( v21 < 0 )
            break;
        }
        v18 = v19;
        v19 = *(_QWORD *)(v19 + 16);
        if ( !v19 )
          goto LABEL_28;
      }
      v19 = *(_QWORD *)(v19 + 24);
    }
    while ( v19 );
LABEL_28:
    v17 = v78;
    v2 = v91;
    if ( v78 != v18 )
    {
      v23 = std::string::compare(*(void **)(v18 + 32), *(_QWORD *)(v18 + 40), "string_type");
      v17 = v78;
      if ( v23 > 0 )
        v18 = v78;
    }
  }
  v95.m128i_i64[1] = v18;
  v98 = v2;
  v100 = 0x8000000000000000LL;
  v99 = (unsigned __int64)v17;
  if ( !(unsigned __int8)_ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_() )
  {
    nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const>::operator->();
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
  }
  strlit = create_strlit();
  v98 = nullptr;
  v99 = 0;
  if ( strlit )
  {
    get_max_strlit_length();
    get_strlit_contents();
  }
  v104 = 0;
  *(_QWORD *)&v105 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v104 = 3;
  v25 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v25, "address", v26, v27, v28, v29, (int)&v117, 0, a1);
  v105 = (unsigned __int64)v25;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v101, v126, v30, v31, v32, v33, v72, v79, v84);
  v106 = 0;
  *(_QWORD *)&v107 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v106 = 3;
  v34 = (_QWORD *)operator new(0x20u);
  v35 = v101;
  v36 = v34 + 2;
  v37 = v102;
  *v34 = v34 + 2;
  if ( v35 == v103 )
  {
    v64 = v37 + 1;
    if ( (unsigned int)(v37 + 1) >= 8 )
    {
      v34[2] = v103[0];
      *(_QWORD *)((char *)v36 + v64 - 8) = *(_QWORD *)((char *)&v103[-1] + v64);
      v65 = (unsigned __int64)(v34 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v66 = (char *)v36 - v65;
      v67 = (char *)((char *)v103 - v66);
      v68 = ((_DWORD)v66 + v64) & 0xFFFFFFF8;
      if ( v68 >= 8 )
      {
        v69 = v68 & 0xFFFFFFF8;
        v70 = 0;
        do
        {
          v71 = v70;
          v70 += 8;
          *(_QWORD *)(v65 + v71) = *(_QWORD *)&v67[v71];
        }
        while ( v70 < v69 );
      }
    }
    else if ( (v64 & 4) != 0 )
    {
      *((_DWORD *)v34 + 4) = v103[0];
      *(_DWORD *)((char *)v36 + v64 - 4) = *(_DWORD *)((char *)&v102 + v64 + 4);
    }
    else if ( (_DWORD)v37 != -1 )
    {
      *((_BYTE *)v34 + 16) = v103[0];
      if ( (v64 & 2) != 0 )
        *(_WORD *)((char *)v36 + v64 - 2) = *(_WORD *)((char *)&v102 + v64 + 6);
    }
  }
  else
  {
    *v34 = v35;
    v34[2] = v103[0];
  }
  v34[1] = v37;
  v101 = v103;
  v102 = 0;
  LOBYTE(v103[0]) = 0;
  v107 = (unsigned __int64)v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v122,
    (const __m128i *)&v104);
  v122[2] = 0;
  v108 = 0;
  *(_QWORD *)&v109 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v108 = 3;
  v38 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v38, "success", v39, v40, v41, v42, v73, v80, v85);
  v110 = 4;
  v111 = strlit;
  v112 = 0;
  v109 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v123,
    (const __m128i *)&v108);
  v123[2] = 0;
  v113 = 0;
  *(_QWORD *)&v114 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v113 = 3;
  v43 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v43, "content", v44, v45, v46, v47, v74, v81, v86);
  v114 = (unsigned __int64)v43;
  if ( strlit && (unsigned __int64)v99 > 1 )
  {
    v95 = 0u;
    v92 = (int)v98;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v48 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v48, v98, v60, v61, v62, v63, v75, v82, v87);
  }
  else
  {
    v48 = nullptr;
    v3 = 0;
  }
  v95.m128i_i8[0] = v3;
  v95.m128i_i64[1] = (__int64)v48;
  v49 = _mm_load_si128(&v95);
  v116 = 0;
  v115 = v49;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v124,
    (const __m128i *)&v113);
  v124[2] = 0;
  LOBYTE(v117) = 0;
  *(_QWORD *)&v118 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v117) = 3;
  v50 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v50, "string_type", v51, v52, v53, v54, v75, v82, v87);
  v119 = 5;
  v120 = (int)v83;
  v121 = 0;
  v118 = (unsigned __int64)v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v125,
    v76);
  v125[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v88,
    (__int64)v122,
    4,
    v55,
    v56,
    v57,
    (int)v76,
    v83,
    (int)v88,
    (int)v126,
    (int)&v109,
    (int)&v105,
    (__int64)&v107,
    (int)&v104,
    (int)&v101,
    v92,
    v93,
    v94,
    v95.m128i_i64[0],
    v95.m128i_i32[2],
    v96);
  v58 = v90;
  do
  {
    v58 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v58 != v122 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v101 != v103 )
    operator delete(v101, v103[0] + 1LL);
  if ( v98 )
  {
    *(_QWORD *)&v99 = 0;
    qfree();
  }
  return v89;
}

