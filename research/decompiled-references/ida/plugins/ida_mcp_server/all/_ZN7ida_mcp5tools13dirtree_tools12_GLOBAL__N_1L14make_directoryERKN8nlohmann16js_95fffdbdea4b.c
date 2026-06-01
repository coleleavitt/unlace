__int64 __fastcall ida_mcp::tools::dirtree_tools::`anonymous namespace'::make_directory(int a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  _BYTE *v42; // rdx
  int v43; // r14d
  __int64 *v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __m128i v56; // xmm0
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  int v61; // [rsp+0h] [rbp-C8h]
  __int64 v62; // [rsp+0h] [rbp-C8h]
  int v63; // [rsp+0h] [rbp-C8h]
  __int64 v64; // [rsp+0h] [rbp-C8h]
  int v65; // [rsp+0h] [rbp-C8h]
  __int64 v66; // [rsp+0h] [rbp-C8h]
  int v67; // [rsp+0h] [rbp-C8h]
  int v68; // [rsp+0h] [rbp-C8h]
  __int64 v69; // [rsp+0h] [rbp-C8h]
  int v70; // [rsp+0h] [rbp-C8h]
  int v71; // [rsp+0h] [rbp-C8h]
  __int64 v72; // [rsp+0h] [rbp-C8h]
  int v73; // [rsp+0h] [rbp-C8h]
  char v74; // [rsp+8h] [rbp-C0h]
  int v75; // [rsp+8h] [rbp-C0h]
  char v76; // [rsp+8h] [rbp-C0h]
  int v77; // [rsp+8h] [rbp-C0h]
  char v78; // [rsp+8h] [rbp-C0h]
  int v79; // [rsp+8h] [rbp-C0h]
  int v80; // [rsp+8h] [rbp-C0h]
  char v81; // [rsp+8h] [rbp-C0h]
  int v82; // [rsp+8h] [rbp-C0h]
  int v83; // [rsp+8h] [rbp-C0h]
  char v84; // [rsp+8h] [rbp-C0h]
  _QWORD *v85; // [rsp+8h] [rbp-C0h]
  __int64 v86; // [rsp+8h] [rbp-C0h]
  __m128i v87; // [rsp+10h] [rbp-B8h] BYREF
  int v88; // [rsp+20h] [rbp-A8h]
  int v89; // [rsp+28h] [rbp-A0h]
  void *v90; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v91; // [rsp+38h] [rbp-90h]
  __int64 v92; // [rsp+40h] [rbp-88h] BYREF
  int v93; // [rsp+48h] [rbp-80h]
  void *v94; // [rsp+50h] [rbp-78h] BYREF
  __int128 v95; // [rsp+58h] [rbp-70h] BYREF
  int v96; // [rsp+68h] [rbp-60h]
  __m128i v97; // [rsp+70h] [rbp-58h]
  unsigned __int64 v98; // [rsp+88h] [rbp-40h]

  v98 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_35;
  v3 = *(_QWORD *)(a2 + 8) + 8LL;
  if ( v3 == std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_find_tr<char [5],void>() )
    goto LABEL_35;
  std::string::basic_string<std::allocator<char>>((__int64 *)&v94, "tree", v4, v5, v6, v7, v61, a1, v87.m128i_i64[0]);
  v11 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
          a2,
          v94,
          v95,
          v8,
          v9,
          v10,
          v62,
          v74,
          v87.m128i_i32[0],
          v87.m128i_i32[2],
          v88,
          v89,
          (__int64)v90);
  if ( v94 != (char *)&v95 + 8 )
    operator delete(v94, *((_QWORD *)&v95 + 1) + 1LL);
  if ( *(_BYTE *)v11 != 3 )
LABEL_35:
    JUMPOUT(0x114FCE);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_34;
  v12 = *(_QWORD *)(a2 + 8) + 8LL;
  if ( v12 == std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_find_tr<char [5],void>() )
    goto LABEL_34;
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v94,
    "path",
    v13,
    v14,
    v15,
    v16,
    v63,
    v75,
    v87.m128i_i64[0]);
  v22 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
          a2,
          v94,
          v95,
          v17,
          v18,
          v19,
          v64,
          v76,
          v87.m128i_i32[0],
          v87.m128i_i32[2],
          v88,
          v89,
          (__int64)v90);
  if ( v94 != (char *)&v95 + 8 )
    operator delete(v94, *((_QWORD *)&v95 + 1) + 1LL);
  if ( *(_BYTE *)v22 != 3 )
LABEL_34:
    JUMPOUT(0x114F28);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v94,
    "tree",
    v20,
    v21,
    v23,
    v24,
    v65,
    v77,
    v87.m128i_i64[0]);
  v28 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
          a2,
          v94,
          v95,
          v25,
          v26,
          v27,
          v66,
          v78,
          v87.m128i_i32[0],
          v87.m128i_i32[2],
          v88,
          v89,
          (__int64)v90);
  if ( v94 != (char *)&v95 + 8 )
    operator delete(v94, *((_QWORD *)&v95 + 1) + 1LL);
  LOBYTE(v92) = 0;
  v90 = &v92;
  v91 = 0;
  if ( *(_BYTE *)v28 != 3 )
    JUMPOUT(0x115220);
  v29 = v28[1];
  std::string::_M_assign();
  ida_mcp::tools::dirtree_tools::`anonymous namespace'::resolve_tree(
    &v90,
    v29,
    v30,
    v31,
    v32,
    v33,
    v67,
    v79,
    v87.m128i_i32[0],
    v87.m128i_i8[8],
    v88,
    v89,
    (int)v90,
    v91,
    v92);
  if ( v90 != &v92 )
    operator delete(v90, v92 + 1);
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v94,
    "path",
    v34,
    v35,
    v36,
    v37,
    v68,
    v80,
    v87.m128i_i64[0]);
  v41 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
          a2,
          v94,
          v95,
          v38,
          v39,
          v40,
          v69,
          v81,
          v87.m128i_i32[0],
          v87.m128i_i32[2],
          v88,
          v89,
          (__int64)v90);
  v42 = v41;
  if ( v94 != (char *)&v95 + 8 )
  {
    v87.m128i_i64[0] = (__int64)v41;
    operator delete(v94, *((_QWORD *)&v95 + 1) + 1LL);
    v42 = (_BYTE *)v87.m128i_i64[0];
  }
  v90 = &v92;
  v91 = 0;
  LOBYTE(v92) = 0;
  if ( *v42 != 3 )
    JUMPOUT(0x1150EC);
  std::string::_M_assign();
  v43 = dirtree_mkdir();
  if ( v90 != &v92 )
    operator delete(v90, v92 + 1);
  if ( v43 )
    JUMPOUT(0x114E02);
  LOBYTE(v94) = 0;
  *(_QWORD *)&v95 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v94) = 3;
  v44 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v44, "created", v45, v46, v47, v48, v70, v82, v87.m128i_i64[0]);
  v95 = (unsigned __int64)v44;
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v90,
    "path",
    v49,
    v50,
    v51,
    v52,
    v71,
    v83,
    v87.m128i_i64[0]);
  v56 = _mm_unpacklo_epi64(
          (__m128i)0LL,
          (__m128i)(unsigned __int64)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
                                       a2,
                                       v90,
                                       v91,
                                       v53,
                                       v54,
                                       v55,
                                       v72,
                                       v84,
                                       v87.m128i_i32[0],
                                       v87.m128i_i32[2],
                                       v88,
                                       v89,
                                       (__int64)v90));
  if ( v90 != &v92 )
  {
    v87 = v56;
    operator delete(v90, v92 + 1);
    v56 = _mm_load_si128(&v87);
  }
  LOBYTE(v96) = 0;
  v97 = v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v90,
    (const __m128i *)&v94);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v85,
    (__int64)&v90,
    1,
    v57,
    v58,
    v59,
    v73,
    (__int64)v85,
    v87.m128i_i32[0],
    v87.m128i_i32[2],
    v88,
    v89,
    (__int64)v90,
    v91,
    0,
    v93,
    (int)v94,
    v95,
    *((__int64 *)&v95 + 1),
    v96,
    v97.m128i_i64[0]);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v86;
}

