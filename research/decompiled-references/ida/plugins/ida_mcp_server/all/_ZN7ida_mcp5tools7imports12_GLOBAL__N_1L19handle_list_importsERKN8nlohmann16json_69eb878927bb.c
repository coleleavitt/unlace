_QWORD *__fastcall ida_mcp::tools::imports::`anonymous namespace'::handle_list_imports(_QWORD *a1)
{
  unsigned __int64 v1; // rbx
  unsigned int import_module_qty; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __m128i si128; // xmm0
  __int64 v7; // rax
  __int64 *v8; // r12
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rdx
  char *v12; // rax
  __m128i *v13; // r12
  unsigned int v15; // r14d
  int v16; // ebp
  unsigned __int64 v17; // rax
  char *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // r8
  __m128i *v27; // r12
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  char *v30; // rcx
  char *v31; // rax
  __int64 v32; // rax
  __m128i *v33; // r12
  _QWORD *v34; // rax
  _BYTE *v35; // rdi
  size_t v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 *v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  int *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v56; // [rsp+8h] [rbp-1E0h]
  __int64 v57; // [rsp+8h] [rbp-1E0h]
  size_t v58; // [rsp+8h] [rbp-1E0h]
  __int64 *v59; // [rsp+8h] [rbp-1E0h]
  __int64 *v60; // [rsp+8h] [rbp-1E0h]
  __int64 v61; // [rsp+8h] [rbp-1E0h]
  __int64 v62; // [rsp+8h] [rbp-1E0h]
  __int64 v63; // [rsp+8h] [rbp-1E0h]
  int v64[2]; // [rsp+10h] [rbp-1D8h]
  int v65[2]; // [rsp+10h] [rbp-1D8h]
  int v66[2]; // [rsp+10h] [rbp-1D8h]
  int v67[2]; // [rsp+10h] [rbp-1D8h]
  int v68[2]; // [rsp+10h] [rbp-1D8h]
  _BYTE *src; // [rsp+18h] [rbp-1D0h]
  __m128i *srca; // [rsp+18h] [rbp-1D0h]
  unsigned __int64 v71; // [rsp+28h] [rbp-1C0h] BYREF
  int v72; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v73; // [rsp+38h] [rbp-1B0h]
  char v74[8]; // [rsp+40h] [rbp-1A8h] BYREF
  int v75[4]; // [rsp+48h] [rbp-1A0h]
  char v76[16]; // [rsp+60h] [rbp-188h] BYREF
  unsigned __int64 *v77; // [rsp+70h] [rbp-178h]
  unsigned __int64 v78; // [rsp+78h] [rbp-170h]
  char v79; // [rsp+80h] [rbp-168h] BYREF
  __int128 v80; // [rsp+88h] [rbp-160h]
  __int64 v81; // [rsp+98h] [rbp-150h]
  __int128 v82; // [rsp+A0h] [rbp-148h]
  char v83; // [rsp+B0h] [rbp-138h] BYREF
  __int128 v84; // [rsp+B8h] [rbp-130h]
  __int64 v85; // [rsp+C8h] [rbp-120h]
  __int128 v86; // [rsp+D0h] [rbp-118h]
  int v87; // [rsp+E0h] [rbp-108h] BYREF
  __int128 v88; // [rsp+E8h] [rbp-100h]
  __m128i v89; // [rsp+F8h] [rbp-F0h]
  __int64 v90; // [rsp+108h] [rbp-E0h]
  char v91; // [rsp+110h] [rbp-D8h] BYREF
  __int128 v92; // [rsp+118h] [rbp-D0h]
  char v93; // [rsp+128h] [rbp-C0h]
  int v94[4]; // [rsp+130h] [rbp-B8h]
  __m128i v95; // [rsp+140h] [rbp-A8h] BYREF
  __int64 v96; // [rsp+150h] [rbp-98h]
  char v97[16]; // [rsp+158h] [rbp-90h] BYREF
  __int64 v98; // [rsp+168h] [rbp-80h]
  char v99[16]; // [rsp+170h] [rbp-78h] BYREF
  __int64 v100; // [rsp+180h] [rbp-68h]
  char v101[16]; // [rsp+188h] [rbp-60h] BYREF
  __int64 v102; // [rsp+198h] [rbp-50h]
  char v103; // [rsp+1A0h] [rbp-48h] BYREF
  unsigned __int64 v104; // [rsp+1A8h] [rbp-40h]

  v104 = __readfsqword(0x28u);
  *(_DWORD *)v76 = 1000;
  v1 = (int)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::value<int,char const(&)[6],int,0>();
  import_module_qty = get_import_module_qty();
  if ( !import_module_qty )
  {
    *(_QWORD *)&v80 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v79 = 3;
    v3 = operator new(0x20u);
    *(_QWORD *)v3 = v3 + 16;
    strcpy((char *)(v3 + 16), "module_count");
    *(_QWORD *)(v3 + 8) = 12;
    v80 = (unsigned __int64)v3;
    v81 = 5;
    v82 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v95,
      (const __m128i *)&v79,
      2);
    v96 = 0;
    v83 = 0;
    *(_QWORD *)&v84 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v83 = 3;
    v4 = operator new(0x20u);
    *(_QWORD *)v4 = v4 + 16;
    strcpy((char *)(v4 + 16), "import_count");
    *(_QWORD *)(v4 + 8) = 12;
    v84 = (unsigned __int64)v4;
    v85 = 5;
    v86 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v97,
      (const __m128i *)&v83,
      2);
    v98 = 0;
    LOBYTE(v87) = 0;
    *(_QWORD *)&v88 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v87) = 3;
    v5 = operator new(0x20u);
    strcpy((char *)(v5 + 16), "imports");
    *(_QWORD *)v5 = v5 + 16;
    *(_QWORD *)(v5 + 8) = 7;
    v88 = (unsigned __int64)v5;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    si128 = _mm_load_si128((const __m128i *)v76);
    v90 = 0;
    v89 = si128;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v99,
      (const __m128i *)&v87,
      2);
    v100 = 0;
    v91 = 0;
    *(_QWORD *)&v92 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v91 = 3;
    v7 = operator new(0x20u);
    *(_QWORD *)v7 = v7 + 16;
    strcpy((char *)(v7 + 16), "note");
    *(_QWORD *)(v7 + 8) = 4;
    v93 = 0;
    *(_QWORD *)v94 = 0;
    v92 = (unsigned __int64)v7;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v93 = 3;
    v8 = (__int64 *)operator new(0x20u);
    *v8 = (__int64)(v8 + 2);
    *(_QWORD *)v74 = 39;
    v9 = std::string::_M_create();
    *v8 = v9;
    v10 = _mm_load_si128((const __m128i *)&xmmword_3E2250);
    v8[2] = 39;
    *(__m128i *)v9 = v10;
    *(__m128i *)(v9 + 16) = _mm_load_si128((const __m128i *)&xmmword_3E2260);
    *(_QWORD *)(v9 + 31) = 0x2E7972616E696220LL;
    v11 = *v8;
    v12 = *(char **)v74;
    v8[1] = *(_QWORD *)v74;
    v12[v11] = 0;
    *(_OWORD *)v94 = (unsigned __int64)v8;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v101,
      (const __m128i *)&v91,
      2);
    v102 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      a1,
      &v95,
      4);
    v13 = (__m128i *)&v103;
    do
    {
      v13 = (__m128i *)((char *)v13 - 24);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v13 != &v95 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    return a1;
  }
  v15 = import_module_qty;
  v16 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v17 = 0;
  v71 = 0;
  while ( v17 < v1 )
  {
    *(_QWORD *)v74 = 0;
    *(_OWORD *)v75 = 0;
    if ( (unsigned __int8)get_import_module_name() )
    {
      *(_QWORD *)v76 = &v72;
      v18 = *(char **)v74;
      if ( !*(_QWORD *)v75 )
        v18 = _qstring<char>::c_str(void)const::nullstr;
      *(_QWORD *)&v76[8] = v18;
      v77 = &v71;
      v78 = v1;
      enum_import_names();
      if ( *(_QWORD *)v74 )
      {
        *(_QWORD *)v75 = 0;
        qfree();
      }
LABEL_11:
      if ( v15 == ++v16 )
        break;
      goto LABEL_12;
    }
    if ( !*(_QWORD *)v74 )
      goto LABEL_11;
    *(_QWORD *)v75 = 0;
    ++v16;
    qfree();
    if ( v15 == v16 )
      break;
LABEL_12:
    v17 = v71;
  }
  v79 = 0;
  *(_QWORD *)&v80 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v79 = 3;
  v19 = operator new(0x20u);
  *(_QWORD *)v19 = v19 + 16;
  strcpy((char *)(v19 + 16), "module_count");
  *(_QWORD *)(v19 + 8) = 12;
  LOBYTE(v81) = 6;
  v82 = v15;
  v80 = (unsigned __int64)v19;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v95,
    (const __m128i *)&v79,
    2);
  v96 = 0;
  v83 = 0;
  *(_QWORD *)&v84 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v83 = 3;
  v20 = operator new(0x20u);
  *(_QWORD *)v20 = v20 + 16;
  strcpy((char *)(v20 + 16), "import_count");
  *(_QWORD *)(v20 + 8) = 12;
  v84 = (unsigned __int64)v20;
  if ( (_BYTE)v72 == 1 )
  {
    v21 = *(_QWORD *)(v73 + 40);
  }
  else if ( (_BYTE)v72 == 2 )
  {
    v21 = (__int64)(*(_QWORD *)(v73 + 8) - *(_QWORD *)v73) >> 4;
  }
  else
  {
    v21 = (_BYTE)v72 != 0;
  }
  LOBYTE(v85) = 6;
  v86 = (unsigned __int64)v21;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v97,
    (const __m128i *)&v83,
    2);
  v98 = 0;
  LOBYTE(v87) = 0;
  *(_QWORD *)&v88 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v87) = 3;
  v22 = operator new(0x20u);
  *(_QWORD *)v22 = v22 + 16;
  strcpy((char *)(v22 + 16), "truncated");
  *(_QWORD *)(v22 + 8) = 9;
  v88 = (unsigned __int64)v22;
  if ( (_BYTE)v72 == 1 )
  {
    v23 = *(_QWORD *)(v73 + 40);
  }
  else if ( (_BYTE)v72 == 2 )
  {
    v23 = (__int64)(*(_QWORD *)(v73 + 8) - *(_QWORD *)v73) >> 4;
  }
  else
  {
    v23 = (_BYTE)v72 != 0;
  }
  v89.m128i_i8[0] = 4;
  v90 = 0;
  v89.m128i_i64[1] = v23 >= v1;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v99,
    (const __m128i *)&v87,
    2);
  v100 = 0;
  v91 = 0;
  *(_QWORD *)&v92 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v91 = 3;
  v24 = operator new(0x20u);
  strcpy((char *)(v24 + 16), "imports");
  *(_QWORD *)v24 = v24 + 16;
  *(_QWORD *)(v24 + 8) = 7;
  *(_QWORD *)v94 = 0;
  v93 = v72;
  v92 = (unsigned __int64)v24;
  switch ( (char)v72 )
  {
    case 1:
      v63 = v73;
      v45 = operator new(0x30u);
      *(_QWORD *)(v45 + 16) = 0;
      v27 = (__m128i *)v45;
      *(_DWORD *)(v45 + 8) = 0;
      v46 = *(int **)(v63 + 16);
      *(_QWORD *)(v45 + 24) = v45 + 8;
      *(_QWORD *)(v45 + 32) = v45 + 8;
      *(_QWORD *)(v45 + 40) = 0;
      if ( v46 )
      {
        v47 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                v46,
                v45 + 8);
        v48 = v47;
        do
        {
          v49 = v47;
          v47 = *(_QWORD *)(v47 + 16);
        }
        while ( v47 );
        v27[1].m128i_i64[1] = v49;
        v50 = v48;
        do
        {
          v51 = v50;
          v50 = *(_QWORD *)(v50 + 24);
        }
        while ( v50 );
        v52 = *(_QWORD *)(v63 + 40);
        v27[2].m128i_i64[0] = v51;
        v27[1].m128i_i64[0] = v48;
        v27[2].m128i_i64[1] = v52;
      }
      goto LABEL_29;
    case 2:
      v60 = (__int64 *)v73;
      v38 = operator new(0x18u);
      v39 = v60;
      srca = (__m128i *)v38;
      v40 = v60[1] - *v60;
      *(_QWORD *)(v38 + 16) = 0;
      *(_OWORD *)v38 = 0;
      if ( v40 )
      {
        *(_QWORD *)v67 = v60;
        v61 = v40;
        v41 = operator new(v40);
        v40 = v61;
        v39 = *(__int64 **)v67;
        v42 = v41;
      }
      else
      {
        v42 = 0;
      }
      *srca = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v42, (__m128i)(unsigned __int64)v42);
      srca[1].m128i_i64[0] = v42 + v40;
      v43 = v39[1];
      v44 = *v39;
      *(_QWORD *)v74 = v42;
      *(_QWORD *)v68 = v43;
      *(__m128i *)v76 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v42, (__m128i)(unsigned __int64)v74);
      if ( v43 != v44 )
      {
        do
        {
          v62 = v44;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v42 = *(_QWORD *)v74 + 16LL;
          v44 = v62 + 16;
          *(_QWORD *)v74 += 16LL;
        }
        while ( *(_QWORD *)v68 != v62 + 16 );
      }
      srca->m128i_i64[1] = v42;
      *(_QWORD *)v94 = srca;
      goto LABEL_30;
    case 3:
      src = *(_BYTE **)v73;
      *(_QWORD *)v66 = *(_QWORD *)(v73 + 8);
      v34 = (_QWORD *)operator new(0x20u);
      v35 = v34 + 2;
      v59 = v34;
      *v34 = v34 + 2;
      *(_QWORD *)v76 = *(_QWORD *)v66;
      if ( *(_QWORD *)v66 <= 0xFu )
      {
        v36 = *(_QWORD *)v66 + 1LL;
        if ( *(_QWORD *)v66 )
        {
LABEL_39:
          memcpy(v35, src, v36);
          v37 = *(_QWORD *)v76;
          goto LABEL_40;
        }
        goto LABEL_60;
      }
      v53 = std::string::_M_create();
      *v59 = v53;
      v35 = (_BYTE *)v53;
      v54 = *(_QWORD *)v76;
      v59[2] = *(_QWORD *)v76;
      v36 = v54 + 1;
      if ( !v54 )
      {
LABEL_60:
        *v35 = *src;
        v37 = *(_QWORD *)v76;
        goto LABEL_40;
      }
      v37 = -1;
      if ( v36 )
        goto LABEL_39;
LABEL_40:
      v59[1] = v37;
      *(_QWORD *)v94 = v59;
LABEL_30:
      *(_QWORD *)&v94[2] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        v101,
        (const __m128i *)&v91,
        2);
      v102 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        a1,
        &v95,
        4);
      v33 = (__m128i *)&v103;
      do
      {
        v33 = (__m128i *)((char *)v33 - 24);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
      while ( v33 != &v95 );
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      return a1;
    case 4:
      LOBYTE(v94[0]) = v73;
      goto LABEL_30;
    case 5:
    case 6:
      *(_QWORD *)v94 = v73;
      goto LABEL_30;
    case 7:
      *(_QWORD *)v94 = v73;
      goto LABEL_30;
    case 8:
      v56 = (_QWORD *)v73;
      v25 = operator new(0x28u);
      v26 = v56;
      v27 = (__m128i *)v25;
      v28 = v56[1] - *v56;
      *(_QWORD *)(v25 + 16) = 0;
      *(_OWORD *)v25 = 0;
      if ( v28 )
      {
        *(_QWORD *)v64 = v56;
        v57 = v28;
        v29 = operator new(v28);
        v28 = v57;
        v26 = *(_QWORD **)v64;
        v30 = (char *)v29;
      }
      else
      {
        v30 = nullptr;
      }
      v27[1].m128i_i64[0] = (__int64)&v30[v28];
      *v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
      if ( (__int64)(v26[1] - *v26) > 0 )
      {
        *(_QWORD *)v65 = v26;
        v58 = v26[1] - *v26;
        v31 = (char *)memcpy(v30, (const void *)*v26, v58);
        v26 = *(_QWORD **)v65;
        v30 = &v31[v58];
      }
      v32 = v26[3];
      v27->m128i_i64[1] = (__int64)v30;
      v27[1].m128i_i64[1] = v32;
      v27[2].m128i_i8[0] = *((_BYTE *)v26 + 32);
LABEL_29:
      *(_QWORD *)v94 = v27;
      goto LABEL_30;
    default:
      goto LABEL_30;
  }
}

