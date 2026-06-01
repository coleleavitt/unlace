__int64 __fastcall ida_mcp::tools::demangling::`anonymous namespace'::handle_demangle_name(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r12
  size_t v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  size_t v10; // rdx
  int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r14
  size_t v16; // rdx
  int v17; // eax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rbx
  size_t v20; // rax
  int v21; // eax
  __int64 v22; // rax
  _BYTE *v23; // rbp
  unsigned __int64 v24; // r14
  _QWORD *v25; // rax
  _BYTE *v26; // rdi
  __int64 *v27; // rbx
  __m128i v28; // xmm0
  size_t v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __m128i si128; // xmm0
  __m128i v37; // xmm0
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rbx
  unsigned __int8 v45; // al
  __int64 v46; // rax
  _BYTE *v47; // rbp
  unsigned __int64 v48; // r14
  _QWORD *v49; // rax
  _BYTE *v50; // rdi
  __int64 *v51; // rbx
  __m128i v52; // xmm0
  size_t v53; // rdx
  __int64 v54; // rax
  __int64 *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  const char *v60; // rbx
  __int64 *v61; // r15
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 *v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  _QWORD *v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // [rsp+0h] [rbp-1B8h]
  int v80; // [rsp+0h] [rbp-1B8h]
  int v81; // [rsp+0h] [rbp-1B8h]
  int v82; // [rsp+0h] [rbp-1B8h]
  __int64 v84; // [rsp+8h] [rbp-1B0h]
  int v85; // [rsp+8h] [rbp-1B0h]
  int v86; // [rsp+8h] [rbp-1B0h]
  _QWORD *v87; // [rsp+8h] [rbp-1B0h]
  __int64 v88; // [rsp+10h] [rbp-1A8h]
  __int64 v89; // [rsp+10h] [rbp-1A8h]
  int v90; // [rsp+10h] [rbp-1A8h]
  __m128i v91; // [rsp+20h] [rbp-198h] BYREF
  __m128i v92; // [rsp+30h] [rbp-188h] BYREF
  __int128 *v93; // [rsp+40h] [rbp-178h]
  char *v94; // [rsp+48h] [rbp-170h]
  __int64 v95; // [rsp+50h] [rbp-168h]
  __int64 v96; // [rsp+58h] [rbp-160h]
  const char *v97; // [rsp+60h] [rbp-158h]
  __int128 v98; // [rsp+68h] [rbp-150h]
  void *src; // [rsp+80h] [rbp-138h] BYREF
  unsigned __int64 v100; // [rsp+88h] [rbp-130h]
  _QWORD v101[2]; // [rsp+90h] [rbp-128h] BYREF
  char v102; // [rsp+A0h] [rbp-118h] BYREF
  __int128 v103; // [rsp+A8h] [rbp-110h] BYREF
  char v104; // [rsp+B8h] [rbp-100h]
  __m128i v105; // [rsp+C0h] [rbp-F8h]
  char v106; // [rsp+D0h] [rbp-E8h] BYREF
  __int128 v107; // [rsp+D8h] [rbp-E0h]
  __int64 v108; // [rsp+E8h] [rbp-D0h]
  __int128 v109; // [rsp+F0h] [rbp-C8h] BYREF
  char *v110; // [rsp+100h] [rbp-B8h] BYREF
  __int128 s2; // [rsp+108h] [rbp-B0h] BYREF
  char v112[8]; // [rsp+118h] [rbp-A0h] BYREF
  __int128 v113; // [rsp+120h] [rbp-98h] BYREF
  _QWORD v114[2]; // [rsp+130h] [rbp-88h] BYREF
  __int64 v115; // [rsp+140h] [rbp-78h]
  _QWORD v116[2]; // [rsp+148h] [rbp-70h] BYREF
  __int64 v117; // [rsp+158h] [rbp-60h]
  _QWORD v118[2]; // [rsp+160h] [rbp-58h] BYREF
  __int64 v119; // [rsp+170h] [rbp-48h]
  _QWORD v120[8]; // [rsp+178h] [rbp-40h] BYREF

  v120[0] = __readfsqword(0x28u);
  v110 = (char *)&s2 + 8;
  *((_QWORD *)&s2 + 1) = 0x5F64656C676E616DLL;
  strcpy(v112, "name");
  *(_QWORD *)&s2 = 12;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x9E7B2);
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(v2 + 16);
  v4 = v2 + 8;
  if ( v3 )
  {
    v5 = v2 + 8;
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v3 + 40);
        if ( !v8 )
          break;
        v6 = 12;
        if ( v8 <= 0xC )
          v6 = *(_QWORD *)(v3 + 40);
        v7 = memcmp(*(const void **)(v3 + 32), (char *)&s2 + 8, v6);
        if ( v7 || (v7 = v8 - 12, (__int64)(v8 - 12) <= 0x7FFFFFFF) )
        {
          if ( v7 < 0 )
            break;
        }
        v5 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        if ( !v3 )
          goto LABEL_12;
      }
      v3 = *(_QWORD *)(v3 + 24);
    }
    while ( v3 );
LABEL_12:
    if ( v4 != v5 )
    {
      v9 = *(_QWORD *)(v5 + 40);
      if ( v9 )
      {
        v10 = 12;
        if ( v9 <= 0xC )
          v10 = *(_QWORD *)(v5 + 40);
        v11 = memcmp((char *)&s2 + 8, *(const void **)(v5 + 32), v10);
        if ( v11 || (v11 = 12 - v9, (__int64)(12 - v9) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v11 >= 0 )
            v4 = v5;
        }
      }
      else
      {
        v4 = v5;
      }
    }
  }
  v100 = 0;
  src = v101;
  LOBYTE(v101[0]) = 0;
  if ( *(_BYTE *)(v4 + 64) != 3 )
    JUMPOUT(0x9E846);
  std::string::_M_assign();
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x9ED44);
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_QWORD *)(v12 + 16);
  if ( !v13 )
    goto LABEL_71;
  v14 = v12 + 8;
  v15 = v14;
  do
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(v13 + 40);
      if ( !v18 )
        break;
      v16 = 4;
      if ( v18 <= 4 )
        v16 = *(_QWORD *)(v13 + 40);
      v17 = memcmp(*(const void **)(v13 + 32), "mask", v16);
      if ( v17 || (v17 = v18 - 4, (__int64)(v18 - 4) <= 0x7FFFFFFF) )
      {
        if ( v17 < 0 )
          break;
      }
      v15 = v13;
      v13 = *(_QWORD *)(v13 + 16);
      if ( !v13 )
        goto LABEL_32;
    }
    v13 = *(_QWORD *)(v13 + 24);
  }
  while ( v13 );
LABEL_32:
  if ( v14 == v15 )
  {
LABEL_71:
    v91.m128i_i32[0] = 0;
    goto LABEL_39;
  }
  v19 = *(_QWORD *)(v15 + 40);
  if ( !v19 )
    goto LABEL_53;
  v20 = 4;
  if ( v19 <= 4 )
    v20 = *(_QWORD *)(v15 + 40);
  v21 = memcmp(*(const void **)(v15 + 32), "mask", v20);
  v91.m128i_i32[0] = 0;
  if ( v21 || (v21 = v19 - 4, (__int64)(v19 - 4) <= 0x7FFFFFFF) )
  {
    if ( v21 <= 0 )
    {
LABEL_53:
      v45 = *(_BYTE *)(v15 + 64);
      if ( v45 != 6 )
      {
        if ( v45 > 6u )
        {
          if ( v45 == 7 )
          {
            v91.m128i_i32[0] = (int)*(double *)(v15 + 72);
            goto LABEL_39;
          }
        }
        else
        {
          if ( v45 == 4 )
          {
            v91.m128i_i32[0] = *(unsigned __int8 *)(v15 + 72);
            goto LABEL_39;
          }
          if ( v45 == 5 )
            goto LABEL_57;
        }
        JUMPOUT(0x9EB7A);
      }
LABEL_57:
      v91.m128i_i32[0] = *(_DWORD *)(v15 + 72);
    }
  }
LABEL_39:
  v98 = 0;
  v97 = nullptr;
  if ( (int)demangle_name() <= 0 || (unsigned __int64)v98 <= 1 )
  {
    v102 = 0;
    *(_QWORD *)&v103 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v102 = 3;
    v22 = operator new(0x20u);
    *(_QWORD *)v22 = v22 + 16;
    strcpy((char *)(v22 + 16), "mangled_name");
    *(_QWORD *)(v22 + 8) = 12;
    v104 = 0;
    v105.m128i_i64[0] = 0;
    v103 = (unsigned __int64)v22;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v104 = 3;
    v23 = src;
    v24 = v100;
    v25 = (_QWORD *)operator new(0x20u);
    v26 = v25 + 2;
    v96 = v100;
    v27 = v25;
    *v25 = v25 + 2;
    if ( v24 > 0xF )
    {
      v75 = std::string::_M_create();
      *v27 = v75;
      v26 = (_BYTE *)v75;
      v76 = v96;
      v28 = (__m128i)(unsigned __int64)v27;
      v27[2] = v96;
      v29 = v76 + 1;
      if ( v76 )
      {
        v30 = -1;
        if ( v29 )
          goto LABEL_43;
LABEL_44:
        v27[1] = v30;
        v92.m128i_i64[0] = (__int64)&v102;
        v105 = v28;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v114,
          (const __m128i *)&v102);
        v115 = 0;
        v106 = 0;
        *(_QWORD *)&v107 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v106 = 3;
        v31 = operator new(0x20u);
        strcpy((char *)(v31 + 16), "demangled_name");
        *(_QWORD *)v31 = v31 + 16;
        *(_QWORD *)(v31 + 8) = 14;
        v107 = (unsigned __int64)v31;
        v108 = 0;
        v109 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v116,
          (const __m128i *)&v106);
        v117 = 0;
        LOBYTE(v110) = 0;
        *(_QWORD *)&s2 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v110) = 3;
        v32 = operator new(0x20u);
        *(_DWORD *)(v32 + 16) = 1869771365;
        *(_QWORD *)v32 = v32 + 16;
        *(_BYTE *)(v32 + 20) = 114;
        *(_QWORD *)(v32 + 8) = 5;
        *(_BYTE *)(v32 + 21) = 0;
        v112[0] = 0;
        *(_QWORD *)&v113 = 0;
        v91.m128i_i64[0] = (__int64)&v113;
        s2 = (unsigned __int64)v32;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v112[0] = 3;
        v33 = (__int64 *)operator new(0x20u);
        *v33 = (__int64)(v33 + 2);
        v96 = 72;
        v34 = std::string::_M_create();
        v35 = v96;
        *v33 = v34;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3E21B0);
        v33[2] = v35;
        *(__m128i *)v34 = si128;
        v37 = _mm_load_si128((const __m128i *)&xmmword_3E21C0);
        *(_QWORD *)(v34 + 64) = 0x2974616D726F6620LL;
        *(__m128i *)(v34 + 16) = v37;
        *(__m128i *)(v34 + 32) = _mm_load_si128((const __m128i *)&xmmword_3E21D0);
        *(__m128i *)(v34 + 48) = _mm_load_si128((const __m128i *)&xmmword_3E21E0);
        v38 = *v33;
        v39 = v96;
        v33[1] = v96;
        *(_BYTE *)(v38 + v39) = 0;
        v113 = (unsigned __int64)v33;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v118,
          (const __m128i *)&v110);
        v119 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          a1,
          (__int64)v114,
          3,
          v40,
          v41,
          v42,
          v79,
          (__int64)a1,
          (int)&src,
          (int)&v103,
          v91.m128i_i32[0],
          v91.m128i_i32[2],
          v92.m128i_i64[0],
          v92.m128i_i32[2],
          (int)v93,
          (int)v94,
          v95,
          v96,
          (__int64)v97,
          v98,
          *((__int64 *)&v98 + 1));
        v43 = v120;
        do
        {
          v43 -= 3;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v43 != v114 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_47;
      }
    }
    else
    {
      v28 = (__m128i)(unsigned __int64)v25;
      v29 = v24 + 1;
      if ( v24 )
      {
LABEL_43:
        v91 = v28;
        memcpy(v26, v23, v29);
        v30 = v96;
        v28 = _mm_load_si128(&v91);
        goto LABEL_44;
      }
    }
    *v26 = *v23;
    v30 = v96;
    goto LABEL_44;
  }
  v102 = 0;
  *(_QWORD *)&v103 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v102 = 3;
  v46 = operator new(0x20u);
  *(_QWORD *)v46 = v46 + 16;
  strcpy((char *)(v46 + 16), "mangled_name");
  *(_QWORD *)(v46 + 8) = 12;
  v104 = 0;
  v105.m128i_i64[0] = 0;
  v103 = (unsigned __int64)v46;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v104 = 3;
  v47 = src;
  v48 = v100;
  v49 = (_QWORD *)operator new(0x20u);
  v50 = v49 + 2;
  v95 = v100;
  v51 = v49;
  *v49 = v49 + 2;
  if ( v48 > 0xF )
  {
    v77 = std::string::_M_create();
    *v51 = v77;
    v50 = (_BYTE *)v77;
    v78 = v95;
    v52 = (__m128i)(unsigned __int64)v51;
    v51[2] = v95;
    v53 = v78 + 1;
    if ( v78 )
    {
      v54 = -1;
      if ( !v53 )
        goto LABEL_61;
      goto LABEL_60;
    }
LABEL_72:
    *v50 = *v47;
    v54 = v95;
    goto LABEL_61;
  }
  v52 = (__m128i)(unsigned __int64)v49;
  v53 = v48 + 1;
  if ( !v48 )
    goto LABEL_72;
LABEL_60:
  v92 = v52;
  memcpy(v50, v47, v53);
  v54 = v95;
  v52 = _mm_load_si128(&v92);
LABEL_61:
  v51[1] = v54;
  v92.m128i_i64[0] = (__int64)&v102;
  v105 = v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v114,
    (const __m128i *)&v102);
  v115 = 0;
  v106 = 0;
  *(_QWORD *)&v107 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v106 = 3;
  v55 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v55,
    "demangled_name",
    v56,
    v57,
    v58,
    v59,
    v79,
    (int)a1,
    (__int64)&src);
  v107 = (unsigned __int64)v55;
  if ( (_QWORD)v98 )
    v60 = v97;
  else
    v60 = _qstring<char>::c_str(void)const::nullstr;
  LOBYTE(v108) = 0;
  v93 = &v109;
  *(_QWORD *)&v109 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v108) = 3;
  v61 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v61, v60, v62, v63, v64, v65, v80, v85, v88);
  v94 = &v106;
  v109 = (unsigned __int64)v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v116,
    (const __m128i *)&v106);
  v117 = 0;
  LOBYTE(v110) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v110) = 3;
  v66 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v66, "mask", v67, v68, v69, v70, v81, v86, v89);
  v112[0] = 6;
  v113 = v91.m128i_u32[0];
  s2 = (unsigned __int64)v66;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v118,
    (const __m128i *)&v110);
  v119 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v87,
    (__int64)v114,
    3,
    v71,
    v72,
    v73,
    v82,
    (__int64)v87,
    v90,
    (int)&v103,
    v91.m128i_i32[0],
    v91.m128i_i32[2],
    v92.m128i_i64[0],
    v92.m128i_i32[2],
    (int)v93,
    (int)v94,
    v95,
    v96,
    (__int64)v97,
    v98,
    *((__int64 *)&v98 + 1));
  v74 = v120;
  do
  {
    v74 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v74 != v114 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_47:
  if ( v97 )
  {
    *(_QWORD *)&v98 = 0;
    qfree();
  }
  if ( src != v101 )
    operator delete(src, v101[0] + 1LL);
  return v84;
}

