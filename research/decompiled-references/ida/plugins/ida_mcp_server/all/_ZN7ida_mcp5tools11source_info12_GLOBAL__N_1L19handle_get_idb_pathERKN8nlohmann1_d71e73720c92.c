__int64 __fastcall ida_mcp::tools::source_info::`anonymous namespace'::handle_get_idb_path(_QWORD *a1)
{
  const char *path; // rbp
  const char *v2; // r14
  const char *v3; // r13
  const char *v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rax
  _BYTE *v7; // r15
  __int64 *v8; // rbx
  size_t v9; // rax
  size_t v10; // r8
  __int8 v11; // al
  __m128i v12; // xmm0
  __int64 v13; // rax
  _QWORD *v14; // rax
  _BYTE *v15; // r15
  __int64 *v16; // rbp
  size_t v17; // rax
  size_t v18; // r8
  __int8 v19; // al
  __m128i v20; // xmm0
  __int64 v21; // rax
  _QWORD *v22; // rax
  _BYTE *v23; // r15
  __int64 *v24; // rbp
  size_t v25; // rax
  size_t v26; // rcx
  __int8 v27; // al
  __m128i v28; // xmm0
  __int64 v29; // rax
  _QWORD *v30; // rax
  _BYTE *v31; // r14
  __int64 *v32; // rbp
  size_t v33; // rax
  size_t v34; // rcx
  __int8 v35; // al
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 *v38; // rax
  void *v39; // r14
  __int64 *v40; // rbp
  size_t v41; // rax
  size_t v42; // r8
  __int8 v43; // al
  __m128i v44; // xmm0
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 *v48; // rbp
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  char *s; // [rsp+0h] [rbp-258h]
  __int64 v56; // [rsp+8h] [rbp-250h]
  size_t n; // [rsp+20h] [rbp-238h]
  size_t v58; // [rsp+30h] [rbp-228h]
  size_t v59; // [rsp+38h] [rbp-220h]
  __int64 *v60; // [rsp+40h] [rbp-218h]
  size_t v61; // [rsp+48h] [rbp-210h]
  int v62; // [rsp+50h] [rbp-208h]
  size_t v63; // [rsp+58h] [rbp-200h]
  __m128i v64; // [rsp+60h] [rbp-1F8h] BYREF
  __m128i v65; // [rsp+70h] [rbp-1E8h] BYREF
  __m128i v66; // [rsp+80h] [rbp-1D8h] BYREF
  __m128i v67; // [rsp+90h] [rbp-1C8h] BYREF
  __m128i v68; // [rsp+A0h] [rbp-1B8h] BYREF
  char v69; // [rsp+B0h] [rbp-1A8h] BYREF
  _OWORD v70[2]; // [rsp+B8h] [rbp-1A0h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-180h]
  char v72; // [rsp+E0h] [rbp-178h] BYREF
  _OWORD v73[2]; // [rsp+E8h] [rbp-170h] BYREF
  __int64 v74; // [rsp+108h] [rbp-150h]
  char v75; // [rsp+110h] [rbp-148h] BYREF
  _OWORD v76[2]; // [rsp+118h] [rbp-140h] BYREF
  __int64 v77; // [rsp+138h] [rbp-120h]
  char v78; // [rsp+140h] [rbp-118h] BYREF
  __int128 v79; // [rsp+148h] [rbp-110h]
  __m128i v80; // [rsp+158h] [rbp-100h]
  __int64 v81; // [rsp+168h] [rbp-F0h]
  char v82; // [rsp+170h] [rbp-E8h] BYREF
  __int128 v83; // [rsp+178h] [rbp-E0h]
  __m128i v84; // [rsp+188h] [rbp-D0h]
  __int64 v85; // [rsp+198h] [rbp-C0h]
  _QWORD v86[3]; // [rsp+1A0h] [rbp-B8h] BYREF
  _QWORD v87[3]; // [rsp+1B8h] [rbp-A0h] BYREF
  _QWORD v88[3]; // [rsp+1D0h] [rbp-88h] BYREF
  _QWORD v89[3]; // [rsp+1E8h] [rbp-70h] BYREF
  _QWORD v90[3]; // [rsp+200h] [rbp-58h] BYREF
  unsigned __int64 v91; // [rsp+218h] [rbp-40h] BYREF

  v91 = __readfsqword(0x28u);
  path = (const char *)get_path();
  v2 = (const char *)get_path();
  v3 = (const char *)get_path();
  v4 = (const char *)idadir();
  s = (char *)get_user_idadir();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v69 = 3;
  v5 = operator new(0x20u);
  *(_QWORD *)v5 = v5 + 16;
  strcpy((char *)(v5 + 16), "idb_path");
  *(_QWORD *)(v5 + 8) = 8;
  v70[0] = (unsigned __int64)v5;
  if ( path )
  {
    v64 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v6 = (_QWORD *)operator new(0x20u);
    v7 = v6 + 2;
    v8 = v6;
    *v6 = v6 + 2;
    v9 = strlen(path);
    v68.m128i_i64[0] = v9;
    v10 = v9;
    if ( v9 > 0xF )
    {
      n = v9;
      v50 = std::string::_M_create();
      *v8 = v50;
      v7 = (_BYTE *)v50;
      v10 = n;
      v8[2] = v68.m128i_i64[0];
    }
    else
    {
      if ( v9 == 1 )
      {
        *((_BYTE *)v8 + 16) = *path;
LABEL_5:
        v8[1] = v9;
        v7[v9] = 0;
        v11 = 3;
        goto LABEL_6;
      }
      if ( !v9 )
        goto LABEL_5;
    }
    memcpy(v7, path, v10);
    v9 = v68.m128i_i64[0];
    v7 = (_BYTE *)*v8;
    goto LABEL_5;
  }
  v8 = nullptr;
  v11 = 0;
LABEL_6:
  v64.m128i_i8[0] = v11;
  v64.m128i_i64[1] = (__int64)v8;
  v12 = _mm_load_si128(&v64);
  v71 = 0;
  v70[1] = v12;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v86,
    (const __m128i *)&v69);
  v86[2] = 0;
  v72 = 0;
  *(_QWORD *)&v73[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v72 = 3;
  v13 = operator new(0x20u);
  strcpy((char *)(v13 + 16), "ida_command");
  *(_QWORD *)v13 = v13 + 16;
  *(_QWORD *)(v13 + 8) = 11;
  v73[0] = (unsigned __int64)v13;
  if ( v2 )
  {
    v65 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v14 = (_QWORD *)operator new(0x20u);
    v15 = v14 + 2;
    v16 = v14;
    *v14 = v14 + 2;
    v17 = strlen(v2);
    v68.m128i_i64[0] = v17;
    v18 = v17;
    if ( v17 > 0xF )
    {
      v58 = v17;
      v51 = std::string::_M_create();
      *v16 = v51;
      v15 = (_BYTE *)v51;
      v18 = v58;
      v16[2] = v68.m128i_i64[0];
    }
    else
    {
      if ( v17 == 1 )
      {
        *((_BYTE *)v16 + 16) = *v2;
LABEL_10:
        v16[1] = v17;
        v15[v17] = 0;
        v19 = 3;
        goto LABEL_11;
      }
      if ( !v17 )
        goto LABEL_10;
    }
    memcpy(v15, v2, v18);
    v17 = v68.m128i_i64[0];
    v15 = (_BYTE *)*v16;
    goto LABEL_10;
  }
  v16 = nullptr;
  v19 = 0;
LABEL_11:
  v65.m128i_i8[0] = v19;
  v65.m128i_i64[1] = (__int64)v16;
  v20 = _mm_load_si128(&v65);
  v74 = 0;
  v73[1] = v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v87,
    (const __m128i *)&v72);
  v87[2] = 0;
  v75 = 0;
  *(_QWORD *)&v76[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v75 = 3;
  v21 = operator new(0x20u);
  *(_QWORD *)v21 = v21 + 16;
  strcpy((char *)(v21 + 16), "id0_path");
  *(_QWORD *)(v21 + 8) = 8;
  v76[0] = (unsigned __int64)v21;
  if ( v3 )
  {
    v66 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v22 = (_QWORD *)operator new(0x20u);
    v23 = v22 + 2;
    v24 = v22;
    *v22 = v22 + 2;
    v25 = strlen(v3);
    v68.m128i_i64[0] = v25;
    v26 = v25;
    if ( v25 > 0xF )
    {
      v59 = v25;
      v53 = std::string::_M_create();
      *v24 = v53;
      v23 = (_BYTE *)v53;
      v26 = v59;
      v24[2] = v68.m128i_i64[0];
    }
    else
    {
      if ( v25 == 1 )
      {
        *((_BYTE *)v24 + 16) = *v3;
LABEL_15:
        v24[1] = v25;
        v23[v25] = 0;
        v27 = 3;
        goto LABEL_16;
      }
      if ( !v25 )
        goto LABEL_15;
    }
    memcpy(v23, v3, v26);
    v25 = v68.m128i_i64[0];
    v23 = (_BYTE *)*v24;
    goto LABEL_15;
  }
  v24 = nullptr;
  v27 = 0;
LABEL_16:
  v66.m128i_i8[0] = v27;
  v66.m128i_i64[1] = (__int64)v24;
  v28 = _mm_load_si128(&v66);
  v77 = 0;
  v76[1] = v28;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v88,
    (const __m128i *)&v75);
  v88[2] = 0;
  v78 = 0;
  *(_QWORD *)&v79 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v78 = 3;
  v29 = operator new(0x20u);
  strcpy((char *)(v29 + 16), "ida_directory");
  *(_QWORD *)v29 = v29 + 16;
  *(_QWORD *)(v29 + 8) = 13;
  v79 = (unsigned __int64)v29;
  if ( v4 )
  {
    v67 = 0u;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v30 = (_QWORD *)operator new(0x20u);
    v31 = v30 + 2;
    v32 = v30;
    *v30 = v30 + 2;
    v33 = strlen(v4);
    v68.m128i_i64[0] = v33;
    v34 = v33;
    if ( v33 > 0xF )
    {
      v60 = (__int64 *)v33;
      v52 = std::string::_M_create();
      *v32 = v52;
      v31 = (_BYTE *)v52;
      v34 = (size_t)v60;
      v32[2] = v68.m128i_i64[0];
    }
    else
    {
      if ( v33 == 1 )
      {
        *((_BYTE *)v32 + 16) = *v4;
LABEL_20:
        v32[1] = v33;
        v31[v33] = 0;
        v35 = 3;
        goto LABEL_21;
      }
      if ( !v33 )
        goto LABEL_20;
    }
    memcpy(v31, v4, v34);
    v33 = v68.m128i_i64[0];
    v31 = (_BYTE *)*v32;
    goto LABEL_20;
  }
  v32 = nullptr;
  v35 = 0;
LABEL_21:
  v67.m128i_i8[0] = v35;
  v67.m128i_i64[1] = (__int64)v32;
  v36 = _mm_load_si128(&v67);
  v81 = 0;
  v80 = v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v89,
    (const __m128i *)&v78);
  v89[2] = 0;
  v82 = 0;
  *(_QWORD *)&v83 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v82 = 3;
  v37 = operator new(0x20u);
  strcpy((char *)(v37 + 16), "user_directory");
  *(_QWORD *)v37 = v37 + 16;
  *(_QWORD *)(v37 + 8) = 14;
  v83 = (unsigned __int64)v37;
  if ( !s )
  {
    v40 = nullptr;
    v43 = 0;
    goto LABEL_26;
  }
  v68 = 0u;
  v60 = &v68.m128i_i64[1];
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v38 = (__int64 *)operator new(0x20u);
  v39 = v38 + 2;
  v40 = v38;
  *v38 = (__int64)(v38 + 2);
  v41 = strlen(s);
  v63 = v41;
  v42 = v41;
  if ( v41 > 0xF )
  {
    v61 = v41;
    v54 = std::string::_M_create();
    *v40 = v54;
    v39 = (void *)v54;
    v42 = v61;
    v40[2] = v63;
    goto LABEL_53;
  }
  if ( v41 != 1 )
  {
    if ( !v41 )
      goto LABEL_25;
LABEL_53:
    memcpy(v39, s, v42);
    v41 = v63;
    v39 = (void *)*v40;
    goto LABEL_25;
  }
  *((_BYTE *)v40 + 16) = *s;
LABEL_25:
  v40[1] = v41;
  *((_BYTE *)v39 + v41) = 0;
  v43 = 3;
LABEL_26:
  v68.m128i_i64[1] = (__int64)v40;
  v68.m128i_i8[0] = v43;
  v44 = _mm_load_si128(&v68);
  v85 = 0;
  v84 = v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v90,
    (const __m128i *)&v82);
  v90[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v86,
    5,
    v45,
    v46,
    v47,
    (int)s,
    (__int64)a1,
    (int)v70,
    (int)v73,
    (int)v76,
    (int)&v69,
    (__int64)&v72,
    (int)&v75,
    (int)v60,
    v61,
    v62,
    v63,
    v64.m128i_i64[0],
    v64.m128i_i32[2],
    v65.m128i_i64[0]);
  v48 = &v91;
  do
  {
    v48 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v48 != v86 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v56;
}

