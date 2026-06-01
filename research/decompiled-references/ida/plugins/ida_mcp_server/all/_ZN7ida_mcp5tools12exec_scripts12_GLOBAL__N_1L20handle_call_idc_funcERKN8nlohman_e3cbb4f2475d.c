__int64 __fastcall ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_call_idc_func(int a1)
{
  unsigned __int64 v1; // r14
  __int64 v2; // rax
  __int64 *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdx
  _BYTE *v20; // rdi
  __int64 *v21; // r14
  __m128i v22; // xmm0
  size_t v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rbp
  __int64 *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  unsigned __int64 v35; // rdx
  _BYTE *v36; // rdi
  __int64 *v37; // r14
  __m128i v38; // xmm0
  size_t v39; // rcx
  __int64 v40; // rax
  __int64 *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __m128i v46; // xmm0
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v50; // rbp
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  int v56; // [rsp+0h] [rbp-218h]
  int v57; // [rsp+0h] [rbp-218h]
  _QWORD *v58; // [rsp+0h] [rbp-218h]
  __int64 v59; // [rsp+0h] [rbp-218h]
  int v60; // [rsp+0h] [rbp-218h]
  _QWORD *v61; // [rsp+0h] [rbp-218h]
  int v62; // [rsp+8h] [rbp-210h]
  int v63; // [rsp+8h] [rbp-210h]
  __int64 v64; // [rsp+8h] [rbp-210h]
  int v65; // [rsp+8h] [rbp-210h]
  __int64 v66; // [rsp+8h] [rbp-210h]
  __m128i v67; // [rsp+10h] [rbp-208h] BYREF
  __m128i *v68; // [rsp+20h] [rbp-1F8h]
  void **v69; // [rsp+28h] [rbp-1F0h]
  void *v70; // [rsp+30h] [rbp-1E8h]
  __int128 *v71; // [rsp+38h] [rbp-1E0h]
  __m128i v72; // [rsp+40h] [rbp-1D8h] BYREF
  _BYTE *v73; // [rsp+50h] [rbp-1C8h]
  void *src; // [rsp+58h] [rbp-1C0h]
  __int64 v75; // [rsp+60h] [rbp-1B8h]
  unsigned __int64 v76; // [rsp+68h] [rbp-1B0h]
  __m128i v77; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v78; // [rsp+80h] [rbp-198h]
  __int128 v79; // [rsp+88h] [rbp-190h]
  void *v80; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-170h]
  _QWORD v82[2]; // [rsp+B0h] [rbp-168h] BYREF
  void *v83; // [rsp+C0h] [rbp-158h]
  __int64 v84; // [rsp+C8h] [rbp-150h]
  _QWORD v85[2]; // [rsp+D0h] [rbp-148h] BYREF
  char v86[8]; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v87; // [rsp+E8h] [rbp-130h]
  __int64 v88; // [rsp+F8h] [rbp-120h]
  char v89; // [rsp+100h] [rbp-118h] BYREF
  __int128 v90; // [rsp+108h] [rbp-110h] BYREF
  __int64 v91; // [rsp+118h] [rbp-100h]
  __int64 v92; // [rsp+120h] [rbp-F8h]
  __int64 v93; // [rsp+128h] [rbp-F0h]
  char v94; // [rsp+130h] [rbp-E8h] BYREF
  __int128 v95; // [rsp+138h] [rbp-E0h] BYREF
  char v96; // [rsp+148h] [rbp-D0h]
  __m128i v97; // [rsp+150h] [rbp-C8h] BYREF
  char v98; // [rsp+160h] [rbp-B8h] BYREF
  __int128 v99; // [rsp+168h] [rbp-B0h] BYREF
  _BYTE v100[24]; // [rsp+178h] [rbp-A0h] BYREF
  _QWORD v101[2]; // [rsp+190h] [rbp-88h] BYREF
  __int64 v102; // [rsp+1A0h] [rbp-78h]
  _QWORD v103[2]; // [rsp+1A8h] [rbp-70h] BYREF
  __int64 v104; // [rsp+1B8h] [rbp-60h]
  _QWORD v105[2]; // [rsp+1C0h] [rbp-58h] BYREF
  __int64 v106; // [rsp+1D0h] [rbp-48h]
  _QWORD v107[8]; // [rsp+1D8h] [rbp-40h] BYREF

  v107[0] = __readfsqword(0x28u);
  v80 = v82;
  v81 = 0;
  v69 = &v80;
  LOBYTE(v82[0]) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0xD646A);
  std::string::_M_assign();
  v1 = v81;
  v84 = 0;
  v83 = v85;
  LOBYTE(v85[0]) = 0;
  std::string::reserve();
  if ( 0x7FFFFFFFFFFFFFFELL - v84 < v1 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( (unsigned __int64)(v84 - 0x7FFFFFFFFFFFFFFDLL) <= 1 )
    JUMPOUT(0xD65E7);
  std::string::_M_append();
  v87 = 0;
  v86[0] = 2;
  v88 = 0;
  v78 = 0;
  v79 = 0;
  if ( !(unsigned __int8)eval_idc_expr() )
  {
    v89 = 0;
    v71 = &v90;
    *(_QWORD *)&v90 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v89 = 3;
    v2 = operator new(0x20u);
    strcpy((char *)(v2 + 16), "success");
    *(_QWORD *)v2 = v2 + 16;
    *(_QWORD *)(v2 + 8) = 7;
    v91 = 4;
    v92 = 0;
    v93 = 0;
    v90 = (unsigned __int64)v2;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v101,
      (const __m128i *)&v89);
    v102 = 0;
    v94 = 0;
    *(_QWORD *)&v95 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v94 = 3;
    v3 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v3, "error", v4, v5, v6, v7, a1, (int)&v95, v67.m128i_i64[0]);
    v95 = (unsigned __int64)v3;
    if ( (_QWORD)v79 )
      v67.m128i_i64[0] = v78;
    else
      v67.m128i_i64[0] = (__int64)_qstring<char>::c_str(void)const::nullstr;
    v96 = 0;
    v68 = &v97;
    v97.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v96 = 3;
    v8 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v8,
      (const char *)v67.m128i_i64[0],
      v9,
      v10,
      v11,
      v12,
      v56,
      v62,
      v67.m128i_i64[0]);
    v70 = &v94;
    v97 = (__m128i)(unsigned __int64)v8;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v103,
      (const __m128i *)&v94);
    v104 = 0;
    v98 = 0;
    *(_QWORD *)&v99 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v98 = 3;
    v13 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v13, "function_name", v14, v15, v16, v17, v57, v63, (__int64)&v99);
    v100[0] = 0;
    v73 = &v100[8];
    *(_QWORD *)&v100[8] = 0;
    v99 = (unsigned __int64)v13;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v100[0] = 3;
    src = v80;
    v72.m128i_i64[0] = v81;
    v18 = (_QWORD *)operator new(0x20u);
    v19 = v72.m128i_i64[0];
    v20 = v18 + 2;
    v21 = v18;
    *v18 = v18 + 2;
    v76 = v19;
    if ( v19 > 0xF )
    {
      v54 = std::string::_M_create();
      *v21 = v54;
      v20 = (_BYTE *)v54;
      v55 = v76;
      v22 = (__m128i)(unsigned __int64)v21;
      v21[2] = v76;
      v23 = v55 + 1;
      if ( v55 )
      {
        v24 = -1;
        if ( v23 )
          goto LABEL_9;
LABEL_10:
        v21[1] = v24;
        *(__m128i *)&v100[8] = v22;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v105,
          (const __m128i *)&v98);
        v106 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v58,
          (__int64)v101,
          3,
          v25,
          v26,
          v27,
          (int)v58,
          v64,
          v67.m128i_i32[0],
          v67.m128i_i32[2],
          (int)v68,
          (int)v69,
          (__int64)v70,
          (int)v71,
          v72.m128i_i32[0],
          v72.m128i_i32[2],
          (int)v73,
          (char)src,
          v75,
          v76,
          v77.m128i_i64[0]);
        v28 = v107;
        do
        {
          v28 -= 3;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v28 != v101 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_19;
      }
    }
    else
    {
      v22 = (__m128i)(unsigned __int64)v18;
      v23 = v19 + 1;
      if ( v19 )
      {
LABEL_9:
        v72 = v22;
        memcpy(v20, src, v23);
        v24 = v76;
        v22 = _mm_load_si128(&v72);
        goto LABEL_10;
      }
    }
    *v20 = *(_BYTE *)src;
    v24 = v76;
    goto LABEL_10;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v90 + 1) = 0;
  v91 = 4;
  v92 = 1;
  v93 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v101,
    (const __m128i *)&v89);
  v102 = 0;
  v94 = 0;
  *(_QWORD *)&v95 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v94 = 3;
  v29 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v29,
    "function_name",
    v30,
    v31,
    v32,
    v33,
    a1,
    (int)&v95,
    v67.m128i_i64[0]);
  v96 = 0;
  v68 = &v97;
  v97.m128i_i64[0] = 0;
  v95 = (unsigned __int64)v29;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v96 = 3;
  v70 = v80;
  v67.m128i_i64[0] = v81;
  v34 = (_QWORD *)operator new(0x20u);
  v35 = v67.m128i_i64[0];
  v36 = v34 + 2;
  v37 = v34;
  *v34 = v34 + 2;
  v77.m128i_i64[0] = v35;
  if ( v35 <= 0xF )
  {
    v38 = (__m128i)(unsigned __int64)v34;
    v39 = v35 + 1;
    if ( v35 )
    {
LABEL_15:
      v67 = v38;
      memcpy(v36, v70, v39);
      v40 = v77.m128i_i64[0];
      v38 = _mm_load_si128(&v67);
      goto LABEL_16;
    }
    goto LABEL_31;
  }
  v52 = std::string::_M_create();
  *v37 = v52;
  v36 = (_BYTE *)v52;
  v53 = v77.m128i_i64[0];
  v38 = (__m128i)(unsigned __int64)v37;
  v37[2] = v77.m128i_i64[0];
  v39 = v53 + 1;
  if ( !v53 )
  {
LABEL_31:
    *v36 = *(_BYTE *)v70;
    v40 = v77.m128i_i64[0];
    goto LABEL_16;
  }
  v40 = -1;
  if ( v39 )
    goto LABEL_15;
LABEL_16:
  v37[1] = v40;
  v70 = &v94;
  v97 = v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v103,
    (const __m128i *)&v94);
  v104 = 0;
  v98 = 0;
  *(_QWORD *)&v99 = 0;
  v67.m128i_i64[0] = (__int64)&v99;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v98 = 3;
  v41 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v41, "result", v42, v43, v44, v45, v60, v65, v67.m128i_i64[0]);
  v99 = (unsigned __int64)v41;
  ida_mcp::tools::exec_scripts::`anonymous namespace'::idc_value_to_json(&v77, (__int64)v86);
  v46 = _mm_load_si128(&v77);
  *(_QWORD *)&v100[16] = 0;
  *(__m128i *)v100 = v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v105,
    (const __m128i *)&v98);
  v106 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v61,
    (__int64)v101,
    3,
    v47,
    v48,
    v49,
    (int)v61,
    v66,
    v67.m128i_i32[0],
    v67.m128i_i32[2],
    (int)v68,
    (int)v69,
    (__int64)v70,
    (int)v71,
    v72.m128i_i32[0],
    v72.m128i_i32[2],
    (int)v73,
    (char)src,
    v75,
    v76,
    v77.m128i_i64[0]);
  v50 = v107;
  do
  {
    v50 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v50 != v101 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_19:
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree();
  }
  free_idcv();
  if ( v83 != v85 )
    operator delete(v83, v85[0] + 1LL);
  if ( v80 != v82 )
    operator delete(v80, v82[0] + 1LL);
  return v59;
}

