__int64 __fastcall ida_mcp::tools::segment_manipulation::`anonymous namespace'::handle_set_segment_class(int a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  char v3; // r13
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
  _BYTE *v22; // r13
  unsigned __int64 v23; // r15
  _QWORD *v24; // rax
  _BYTE *v25; // rdi
  __int64 *v26; // rbp
  __m128i v27; // xmm0
  size_t v28; // rdx
  __int64 v29; // rax
  __int64 *v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char *v38; // rbp
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned int v42; // edx
  unsigned __int64 v43; // rdi
  char *v44; // rcx
  char *v45; // r8
  unsigned int v46; // edx
  unsigned int v47; // edx
  unsigned int v48; // ecx
  __int64 v49; // r9
  int v50; // [rsp+0h] [rbp-208h]
  int v51; // [rsp+0h] [rbp-208h]
  int v52; // [rsp+0h] [rbp-208h]
  const __m128i *v53; // [rsp+0h] [rbp-208h]
  int v54; // [rsp+8h] [rbp-200h]
  int v55; // [rsp+8h] [rbp-200h]
  int v56; // [rsp+8h] [rbp-200h]
  _QWORD *v57; // [rsp+8h] [rbp-200h]
  __int64 v58; // [rsp+8h] [rbp-200h]
  __int64 v59; // [rsp+10h] [rbp-1F8h]
  __int64 v60; // [rsp+10h] [rbp-1F8h]
  __int64 v61; // [rsp+10h] [rbp-1F8h]
  int v62; // [rsp+10h] [rbp-1F8h]
  int v63; // [rsp+38h] [rbp-1D0h]
  int v64; // [rsp+3Ch] [rbp-1CCh]
  __m128i v65; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v66; // [rsp+60h] [rbp-1A8h]
  unsigned __int64 v67; // [rsp+68h] [rbp-1A0h]
  __int64 v68; // [rsp+70h] [rbp-198h]
  __int64 v69; // [rsp+78h] [rbp-190h]
  void *src; // [rsp+80h] [rbp-188h] BYREF
  unsigned __int64 v71; // [rsp+88h] [rbp-180h]
  _QWORD v72[2]; // [rsp+90h] [rbp-178h] BYREF
  void *v73; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-160h]
  _QWORD v75[2]; // [rsp+B0h] [rbp-158h] BYREF
  char v76; // [rsp+C0h] [rbp-148h] BYREF
  __int128 v77; // [rsp+C8h] [rbp-140h] BYREF
  char v78; // [rsp+D8h] [rbp-130h]
  __int128 v79; // [rsp+E0h] [rbp-128h] BYREF
  char v80; // [rsp+F0h] [rbp-118h] BYREF
  __int128 v81; // [rsp+F8h] [rbp-110h] BYREF
  char v82; // [rsp+108h] [rbp-100h]
  __m128i v83; // [rsp+110h] [rbp-F8h] BYREF
  void *v84; // [rsp+120h] [rbp-E8h] BYREF
  __int128 v85; // [rsp+128h] [rbp-E0h] BYREF
  char v86; // [rsp+138h] [rbp-D0h]
  _BOOL8 v87; // [rsp+140h] [rbp-C8h]
  __int64 v88; // [rsp+148h] [rbp-C0h]
  _QWORD v89[3]; // [rsp+150h] [rbp-B8h] BYREF
  _QWORD v90[3]; // [rsp+168h] [rbp-A0h] BYREF
  _QWORD v91[3]; // [rsp+180h] [rbp-88h] BYREF
  char v92; // [rsp+198h] [rbp-70h] BYREF
  char v93[40]; // [rsp+1A0h] [rbp-68h] BYREF
  unsigned __int64 v94; // [rsp+1C8h] [rbp-40h]

  v94 = __readfsqword(0x28u);
  v84 = (char *)&v85 + 8;
  *(_QWORD *)&v85 = 0;
  BYTE8(v85) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0x1386D8);
  std::string::_M_assign();
  v1 = ida_mcp::parse_ea(v84, v85);
  v69 = v2;
  v3 = v2;
  v68 = v1;
  if ( v84 != (char *)&v85 + 8 )
    operator delete(v84, *((_QWORD *)&v85 + 1) + 1LL);
  if ( !v3 )
    JUMPOUT(0x138428);
  if ( !getseg() )
    JUMPOUT(0x1384D1);
  src = v72;
  v71 = 0;
  LOBYTE(v72[0]) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0x1383FE);
  std::string::_M_assign();
  v64 = set_segm_class();
  v76 = 0;
  *(_QWORD *)&v77 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v76 = 3;
  v4 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v4, "address", v5, v6, v7, v8, (int)&v84, a1, (__int64)&src);
  v77 = (unsigned __int64)v4;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v73, v93, v9, v10, v11, v12, v50, v54, v59);
  v78 = 0;
  *(_QWORD *)&v79 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v78 = 3;
  v13 = (_QWORD *)operator new(0x20u);
  v14 = v73;
  v15 = v13 + 2;
  v16 = v74;
  *v13 = v13 + 2;
  if ( v14 == v75 )
  {
    v42 = v16 + 1;
    if ( (unsigned int)(v16 + 1) >= 8 )
    {
      v13[2] = v75[0];
      *(_QWORD *)((char *)v15 + v42 - 8) = *(_QWORD *)((char *)&v75[-1] + v42);
      v43 = (unsigned __int64)(v13 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v44 = (char *)v15 - v43;
      v45 = (char *)((char *)v75 - v44);
      v46 = ((_DWORD)v44 + v42) & 0xFFFFFFF8;
      if ( v46 >= 8 )
      {
        v47 = v46 & 0xFFFFFFF8;
        v48 = 0;
        do
        {
          v49 = v48;
          v48 += 8;
          *(_QWORD *)(v43 + v49) = *(_QWORD *)&v45[v49];
        }
        while ( v48 < v47 );
      }
    }
    else if ( (v42 & 4) != 0 )
    {
      *((_DWORD *)v13 + 4) = v75[0];
      *(_DWORD *)((char *)v15 + v42 - 4) = *(_DWORD *)((char *)&v74 + v42 + 4);
    }
    else if ( (_DWORD)v16 != -1 )
    {
      *((_BYTE *)v13 + 16) = v75[0];
      if ( (v42 & 2) != 0 )
        *(_WORD *)((char *)v15 + v42 - 2) = *(_WORD *)((char *)&v74 + v42 + 6);
    }
  }
  else
  {
    *v13 = v14;
    v13[2] = v75[0];
  }
  v13[1] = v16;
  v73 = v75;
  LOBYTE(v75[0]) = 0;
  v74 = 0;
  v79 = (unsigned __int64)v13;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v89,
    (const __m128i *)&v76,
    2,
    1);
  v89[2] = 0;
  v80 = 0;
  *(_QWORD *)&v81 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v80 = 3;
  v17 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v17, "class", v18, v19, v20, v21, v51, v55, v60);
  v82 = 0;
  v83.m128i_i64[0] = 0;
  v81 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v82 = 3;
  v22 = src;
  v23 = v71;
  v24 = (_QWORD *)operator new(0x20u);
  v25 = v24 + 2;
  v67 = v23;
  v26 = v24;
  *v24 = v24 + 2;
  if ( v23 > 0xF )
  {
    v40 = std::string::_M_create();
    *v26 = v40;
    v25 = (_BYTE *)v40;
    v41 = v67;
    v27 = (__m128i)(unsigned __int64)v26;
    v26[2] = v67;
    v28 = v41 + 1;
    if ( v41 )
    {
      v29 = -1;
      if ( !v28 )
        goto LABEL_12;
      goto LABEL_11;
    }
LABEL_19:
    *v25 = *v22;
    v29 = v67;
    goto LABEL_12;
  }
  v27 = (__m128i)(unsigned __int64)v24;
  v28 = v23 + 1;
  if ( !v23 )
    goto LABEL_19;
LABEL_11:
  v65 = v27;
  memcpy(v25, v22, v28);
  v29 = v67;
  v27 = _mm_load_si128(&v65);
LABEL_12:
  v26[1] = v29;
  v83 = v27;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v90,
    (const __m128i *)&v80,
    2,
    1);
  v90[2] = 0;
  LOBYTE(v84) = 0;
  *(_QWORD *)&v85 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v84) = 3;
  v30 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v30, "success", v31, v32, v33, v34, v52, v56, v61);
  v86 = 4;
  v88 = 0;
  v85 = (unsigned __int64)v30;
  v87 = v64 == 1;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v91,
    v53,
    2,
    1);
  v91[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v57,
    (__int64)v89,
    3,
    v35,
    v36,
    v37,
    (int)v53,
    (__int64)v57,
    v62,
    (int)&v77,
    (int)&v79,
    (int)&v81,
    (__int64)&v83,
    v63,
    (int)&v76,
    (int)&v73,
    v65.m128i_i32[0],
    v65.m128i_i8[8],
    v66,
    v67,
    v68);
  v38 = &v92;
  do
  {
    v38 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v38 != (char *)v89 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v73 != v75 )
    operator delete(v73, v75[0] + 1LL);
  if ( src != v72 )
    operator delete(src, v72[0] + 1LL);
  return v58;
}

