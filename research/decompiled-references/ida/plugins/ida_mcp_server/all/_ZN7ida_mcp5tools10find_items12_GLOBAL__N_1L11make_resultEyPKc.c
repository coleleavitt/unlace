ida_mcp::tools::find_items::_anonymous_namespace_ *__fastcall ida_mcp::tools::find_items::`anonymous namespace'::make_result(
        ida_mcp::tools::find_items::_anonymous_namespace_ *this,
        __int64 a2,
        const char *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  size_t v7; // rax
  unsigned int v8; // r14d
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  size_t v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // rax
  void *v16; // r14
  __int64 *v17; // r13
  size_t v18; // rax
  size_t v19; // rcx
  __int64 v20; // rax
  char *v21; // r14
  __int64 *v22; // rax
  __int64 *v23; // rbp
  size_t v24; // rax
  _BYTE *v25; // rcx
  size_t v26; // r8
  __int8 v27; // al
  _DWORD *v28; // rax
  unsigned __int64 v29; // rdx
  char *v30; // rax
  char *v31; // r13
  unsigned int v32; // r14d
  unsigned int v33; // r14d
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 *v39; // r12
  char *v40; // rax
  __int64 v41; // rcx
  size_t v42; // r8
  __m128i v43; // xmm0
  __int64 v44; // rax
  __m128i *v45; // rbp
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // edi
  __int64 v50; // rax
  unsigned __int64 v51; // r8
  char *v52; // rcx
  char *v53; // r9
  unsigned int v54; // edx
  unsigned int v55; // ecx
  __int64 v56; // rdi
  void *v57; // [rsp+10h] [rbp-288h]
  char *v58; // [rsp+10h] [rbp-288h]
  __int64 func; // [rsp+30h] [rbp-268h]
  _BYTE *dest; // [rsp+40h] [rbp-258h]
  void *desta; // [rsp+40h] [rbp-258h]
  void *destb; // [rsp+40h] [rbp-258h]
  size_t v63; // [rsp+68h] [rbp-230h]
  __m128i v64; // [rsp+70h] [rbp-228h] BYREF
  char *v65; // [rsp+80h] [rbp-218h]
  __int128 v66; // [rsp+88h] [rbp-210h]
  void *v67; // [rsp+A0h] [rbp-1F8h]
  size_t v68; // [rsp+A8h] [rbp-1F0h]
  _QWORD v69[2]; // [rsp+B0h] [rbp-1E8h] BYREF
  char v70; // [rsp+C0h] [rbp-1D8h] BYREF
  int v71[4]; // [rsp+C8h] [rbp-1D0h]
  __int64 v72; // [rsp+D8h] [rbp-1C0h]
  __int64 v73; // [rsp+E0h] [rbp-1B8h]
  __int64 v74; // [rsp+E8h] [rbp-1B0h]
  int v75; // [rsp+F0h] [rbp-1A8h] BYREF
  int v76[4]; // [rsp+F8h] [rbp-1A0h]
  char v77; // [rsp+108h] [rbp-190h]
  int v78[4]; // [rsp+110h] [rbp-188h]
  int v79; // [rsp+120h] [rbp-178h] BYREF
  int v80[4]; // [rsp+128h] [rbp-170h]
  char v81; // [rsp+138h] [rbp-160h]
  int v82[4]; // [rsp+140h] [rbp-158h]
  char v83; // [rsp+150h] [rbp-148h] BYREF
  __int128 v84; // [rsp+158h] [rbp-140h]
  __m128i v85; // [rsp+168h] [rbp-130h]
  __int64 v86; // [rsp+178h] [rbp-120h]
  char v87; // [rsp+180h] [rbp-118h] BYREF
  __int128 v88; // [rsp+188h] [rbp-110h]
  char v89; // [rsp+198h] [rbp-100h]
  int v90[4]; // [rsp+1A0h] [rbp-F8h]
  __m128i v91; // [rsp+1B0h] [rbp-E8h] BYREF
  __int64 v92; // [rsp+1C0h] [rbp-D8h]
  __int64 v93; // [rsp+1C8h] [rbp-D0h] BYREF
  __int64 v94; // [rsp+1D8h] [rbp-C0h]
  _QWORD v95[3]; // [rsp+1E0h] [rbp-B8h] BYREF
  _QWORD v96[3]; // [rsp+1F8h] [rbp-A0h] BYREF
  _QWORD v97[3]; // [rsp+210h] [rbp-88h] BYREF
  char v98[8]; // [rsp+228h] [rbp-70h] BYREF
  char s[40]; // [rsp+230h] [rbp-68h] BYREF
  unsigned __int64 v100; // [rsp+258h] [rbp-40h]

  v100 = __readfsqword(0x28u);
  if ( a2 == -1 )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v83 = 3;
    v36 = operator new(0x20u);
    *(_DWORD *)(v36 + 16) = 1853189990;
    *(_QWORD *)v36 = v36 + 16;
    *(_BYTE *)(v36 + 20) = 100;
    *(_QWORD *)(v36 + 8) = 5;
    *(_BYTE *)(v36 + 21) = 0;
    v85 = (__m128i)4uLL;
    v86 = 0;
    v84 = (unsigned __int64)v36;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v91,
      (const __m128i *)&v83,
      2);
    v92 = 0;
    v87 = 0;
    *(_QWORD *)&v88 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v87 = 3;
    v37 = operator new(0x20u);
    *(_QWORD *)v37 = v37 + 16;
    strcpy((char *)(v37 + 16), "type");
    *(_QWORD *)(v37 + 8) = 4;
    v89 = 0;
    *(_QWORD *)v90 = 0;
    v88 = (unsigned __int64)v37;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v89 = 3;
    v38 = (__int64 *)operator new(0x20u);
    v39 = v38;
    *v38 = (__int64)(v38 + 2);
    if ( !a3 )
      JUMPOUT(0x11F585);
    v57 = v38 + 2;
    v40 = (char *)strlen(a3);
    v41 = (__int64)v57;
    v65 = v40;
    v42 = (size_t)v40;
    if ( (unsigned __int64)v40 > 0xF )
    {
      v58 = v40;
      v50 = std::string::_M_create();
      *v39 = v50;
      v41 = v50;
      v42 = (size_t)v58;
      v39[2] = (__int64)v65;
    }
    else
    {
      if ( v40 == (_BYTE *)&dword_0 + 1 )
      {
        *((_BYTE *)v39 + 16) = *a3;
LABEL_28:
        v39[1] = (__int64)v40;
        v40[v41] = 0;
        *(_OWORD *)v90 = (unsigned __int64)v39;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          &v93,
          (const __m128i *)&v87,
          2);
        v94 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          this,
          &v91,
          2);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        return this;
      }
      if ( !v40 )
        goto LABEL_28;
    }
    memcpy((void *)v41, a3, v42);
    v40 = v65;
    v41 = *v39;
    goto LABEL_28;
  }
  v65 = nullptr;
  v66 = 0;
  get_ea_name();
  func = get_func();
  *(_QWORD *)v71 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v70 = 3;
  v5 = operator new(0x20u);
  *(_DWORD *)(v5 + 16) = 1853189990;
  *(_QWORD *)v5 = v5 + 16;
  *(_BYTE *)(v5 + 20) = 100;
  *(_QWORD *)(v5 + 8) = 5;
  *(_BYTE *)(v5 + 21) = 0;
  v72 = 4;
  v73 = 1;
  v74 = 0;
  *(_OWORD *)v71 = (unsigned __int64)v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v91,
    (const __m128i *)&v70,
    2);
  v92 = 0;
  LOBYTE(v75) = 0;
  *(_QWORD *)v76 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v75) = 3;
  v6 = operator new(0x20u);
  *(_QWORD *)v6 = v6 + 16;
  strcpy((char *)(v6 + 16), "address");
  *(_QWORD *)(v6 + 8) = 7;
  *(_OWORD *)v76 = (unsigned __int64)v6;
  qsnprintf();
  v67 = v69;
  v7 = strlen(s);
  v64.m128i_i64[0] = v7;
  v8 = v7;
  if ( v7 > 0xF )
  {
    v28 = (_DWORD *)std::string::_M_create();
    v67 = v28;
    v69[0] = v64.m128i_i64[0];
  }
  else
  {
    if ( v7 == 1 )
    {
      LOBYTE(v69[0]) = s[0];
LABEL_5:
      v9 = v69;
      goto LABEL_6;
    }
    if ( !v7 )
      goto LABEL_5;
    v28 = v69;
  }
  if ( v8 < 8 )
  {
    if ( (v8 & 4) != 0 )
    {
      *v28 = *(_DWORD *)s;
      *(_DWORD *)((char *)v28 + v8 - 4) = *(_DWORD *)&v98[v8 + 4];
    }
    else if ( v8 )
    {
      *(_BYTE *)v28 = s[0];
      if ( (v8 & 2) != 0 )
        *(_WORD *)((char *)v28 + v8 - 2) = *(_WORD *)&v98[v8 + 6];
    }
  }
  else
  {
    *(_QWORD *)v28 = *(_QWORD *)s;
    *(_QWORD *)((char *)v28 + v8 - 8) = *(_QWORD *)&v98[v8];
    v29 = (unsigned __int64)(v28 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    v30 = (char *)v28 - v29;
    v31 = (char *)(s - v30);
    v32 = ((_DWORD)v30 + v8) & 0xFFFFFFF8;
    if ( v32 >= 8 )
    {
      v33 = v32 & 0xFFFFFFF8;
      v34 = 0;
      do
      {
        v35 = v34;
        v34 += 8;
        *(_QWORD *)(v29 + v35) = *(_QWORD *)&v31[v35];
      }
      while ( v34 < v33 );
    }
  }
  v7 = v64.m128i_i64[0];
  v9 = v67;
LABEL_6:
  v68 = v7;
  *((_BYTE *)v9 + v7) = 0;
  v77 = 0;
  *(_QWORD *)v78 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v77 = 3;
  v10 = (_QWORD *)operator new(0x20u);
  v11 = v67;
  v12 = v10 + 2;
  v13 = v68;
  *v10 = v10 + 2;
  if ( v11 == v69 )
  {
    v49 = v13 + 1;
    if ( (unsigned int)(v13 + 1) >= 8 )
    {
      v10[2] = v69[0];
      *(_QWORD *)((char *)v12 + v49 - 8) = *(_QWORD *)((char *)&v69[-1] + v49);
      v51 = (unsigned __int64)(v10 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v52 = (char *)v12 - v51;
      v53 = (char *)((char *)v69 - v52);
      if ( (((_DWORD)v52 + v49) & 0xFFFFFFF8) >= 8 )
      {
        v54 = ((_DWORD)v52 + v49) & 0xFFFFFFF8;
        v55 = 0;
        do
        {
          v56 = v55;
          v55 += 8;
          *(_QWORD *)(v51 + v56) = *(_QWORD *)&v53[v56];
        }
        while ( v55 < v54 );
      }
    }
    else if ( (v49 & 4) != 0 )
    {
      *((_DWORD *)v10 + 4) = v69[0];
      *(_DWORD *)((char *)v12 + v49 - 4) = *(_DWORD *)((char *)&v68 + v49 + 4);
    }
    else if ( (_DWORD)v13 != -1 )
    {
      *((_BYTE *)v10 + 16) = v69[0];
      if ( (v49 & 2) != 0 )
        *(_WORD *)((char *)v12 + v49 - 2) = *(_WORD *)((char *)&v68 + v49 + 6);
    }
  }
  else
  {
    *v10 = v11;
    v10[2] = v69[0];
  }
  v10[1] = v13;
  v67 = v69;
  v68 = 0;
  LOBYTE(v69[0]) = 0;
  *(_OWORD *)v78 = (unsigned __int64)v10;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v93,
    (const __m128i *)&v75,
    2);
  v94 = 0;
  LOBYTE(v79) = 0;
  *(_QWORD *)v80 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v79) = 3;
  v14 = operator new(0x20u);
  *(_QWORD *)v14 = v14 + 16;
  strcpy((char *)(v14 + 16), "type");
  *(_QWORD *)(v14 + 8) = 4;
  v81 = 0;
  *(_QWORD *)v82 = 0;
  *(_OWORD *)v80 = (unsigned __int64)v14;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v81 = 3;
  v15 = (__int64 *)operator new(0x20u);
  v16 = v15 + 2;
  v17 = v15;
  *v15 = (__int64)(v15 + 2);
  if ( !a3 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v18 = strlen(a3);
  v64.m128i_i64[0] = v18;
  v19 = v18;
  if ( v18 > 0xF )
  {
    desta = (void *)v18;
    v47 = std::string::_M_create();
    *v17 = v47;
    v16 = (void *)v47;
    v19 = (size_t)desta;
    v17[2] = v64.m128i_i64[0];
LABEL_42:
    memcpy(v16, a3, v19);
    v18 = v64.m128i_i64[0];
    v16 = (void *)*v17;
    goto LABEL_12;
  }
  if ( v18 == 1 )
  {
    *((_BYTE *)v17 + 16) = *a3;
    goto LABEL_12;
  }
  if ( v18 )
    goto LABEL_42;
LABEL_12:
  v17[1] = v18;
  *((_BYTE *)v16 + v18) = 0;
  *(_OWORD *)v82 = (unsigned __int64)v17;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v95,
    (const __m128i *)&v79,
    2);
  v95[2] = 0;
  v83 = 0;
  *(_QWORD *)&v84 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v83 = 3;
  v20 = operator new(0x20u);
  *(_QWORD *)v20 = v20 + 16;
  strcpy((char *)(v20 + 16), "name");
  *(_QWORD *)(v20 + 8) = 4;
  v84 = (unsigned __int64)v20;
  if ( (unsigned __int64)v66 > 1 )
  {
    v64 = 0u;
    v21 = v65;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v22 = (__int64 *)operator new(0x20u);
    v23 = v22;
    *v22 = (__int64)(v22 + 2);
    if ( !v21 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    dest = v22 + 2;
    v24 = strlen(v21);
    v25 = dest;
    v63 = v24;
    v26 = v24;
    if ( v24 > 0xF )
    {
      destb = (void *)v24;
      v48 = std::string::_M_create();
      *v23 = v48;
      v25 = (_BYTE *)v48;
      v26 = (size_t)destb;
      v23[2] = v63;
    }
    else
    {
      if ( v24 == 1 )
      {
        *((_BYTE *)v23 + 16) = *v21;
LABEL_17:
        v23[1] = v24;
        v25[v24] = 0;
        v27 = 3;
        goto LABEL_30;
      }
      if ( !v24 )
        goto LABEL_17;
    }
    memcpy(v25, v21, v26);
    v24 = v63;
    v25 = (_BYTE *)*v23;
    goto LABEL_17;
  }
  v23 = nullptr;
  v27 = 0;
LABEL_30:
  v64.m128i_i64[1] = (__int64)v23;
  v64.m128i_i8[0] = v27;
  v43 = _mm_load_si128(&v64);
  v86 = 0;
  v85 = v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v96,
    (const __m128i *)&v83,
    2);
  v96[2] = 0;
  v87 = 0;
  *(_QWORD *)&v88 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v87 = 3;
  v44 = operator new(0x20u);
  *(_QWORD *)v44 = v44 + 16;
  strcpy((char *)(v44 + 16), "in_function");
  *(_QWORD *)(v44 + 8) = 11;
  v89 = 4;
  *(_QWORD *)&v90[2] = 0;
  v88 = (unsigned __int64)v44;
  *(_QWORD *)v90 = func != 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v97,
    (const __m128i *)&v87,
    2);
  v97[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    this,
    &v91,
    5);
  v45 = (__m128i *)v98;
  do
  {
    v45 = (__m128i *)((char *)v45 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v45 != &v91 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v67 != v69 )
    operator delete(v67, v69[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree();
  }
  return this;
}

