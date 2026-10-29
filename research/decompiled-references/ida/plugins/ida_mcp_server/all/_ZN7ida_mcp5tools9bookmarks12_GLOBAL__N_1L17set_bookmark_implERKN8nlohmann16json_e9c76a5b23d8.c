_QWORD *__fastcall ida_mcp::tools::bookmarks::`anonymous namespace'::set_bookmark_impl(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r15
  size_t v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  size_t v10; // rdx
  int v11; // eax
  void *v12; // r15
  int *v13; // rax
  int *v14; // r12
  std::runtime_error *exception; // rax
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // rbx
  size_t v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r13
  size_t v23; // rax
  int v24; // eax
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // r15
  size_t v28; // rdx
  int v29; // eax
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // r13
  size_t v32; // rax
  int v33; // eax
  unsigned int v34; // r15d
  __int64 v35; // rax
  __m128i *v36; // rbx
  size_t v37; // rax
  unsigned int v38; // r12d
  _QWORD *v39; // rdx
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  _QWORD *v42; // rcx
  size_t v43; // rsi
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  _BYTE *v47; // rdi
  __int64 *v48; // r13
  __m128i si128; // xmm0
  size_t v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v55; // rax
  size_t v56; // rax
  _QWORD *v57; // rax
  unsigned __int8 v58; // al
  unsigned int v59; // edi
  unsigned __int64 v60; // rdx
  char *v61; // rax
  char *v62; // rsi
  unsigned int v63; // r12d
  unsigned int v64; // r12d
  unsigned int v65; // eax
  __int64 v66; // rcx
  unsigned __int64 v67; // r8
  char *v68; // rcx
  char *v69; // r9
  unsigned int v70; // edx
  unsigned int v71; // ecx
  __int64 v72; // rdi
  __int64 v74; // [rsp+8h] [rbp-280h]
  char v75[8]; // [rsp+30h] [rbp-258h]
  bool v76; // [rsp+30h] [rbp-258h]
  _BYTE *src; // [rsp+38h] [rbp-250h]
  int v78[4]; // [rsp+50h] [rbp-238h] BYREF
  char v79[8]; // [rsp+68h] [rbp-220h]
  __int64 (__fastcall **v80)(); // [rsp+70h] [rbp-218h] BYREF
  int v81; // [rsp+78h] [rbp-210h]
  __int64 v82; // [rsp+80h] [rbp-208h]
  __int128 v83; // [rsp+90h] [rbp-1F8h]
  __int64 v84; // [rsp+A0h] [rbp-1E8h]
  __int64 v85; // [rsp+A8h] [rbp-1E0h]
  __int64 v86; // [rsp+B0h] [rbp-1D8h]
  __int64 (__fastcall ***v87)(); // [rsp+B8h] [rbp-1D0h]
  void *v88; // [rsp+C0h] [rbp-1C8h]
  int v89[2]; // [rsp+C8h] [rbp-1C0h]
  _QWORD v90[2]; // [rsp+D0h] [rbp-1B8h] BYREF
  void *v91; // [rsp+E0h] [rbp-1A8h]
  size_t v92; // [rsp+E8h] [rbp-1A0h]
  _QWORD v93[2]; // [rsp+F0h] [rbp-198h] BYREF
  int v94; // [rsp+100h] [rbp-188h] BYREF
  int v95[4]; // [rsp+108h] [rbp-180h]
  char v96; // [rsp+118h] [rbp-170h]
  int v97[4]; // [rsp+120h] [rbp-168h]
  int v98; // [rsp+130h] [rbp-158h] BYREF
  int v99[4]; // [rsp+138h] [rbp-150h]
  char v100; // [rsp+148h] [rbp-140h]
  __int64 v101[2]; // [rsp+150h] [rbp-138h]
  char v102; // [rsp+160h] [rbp-128h] BYREF
  __int128 v103; // [rsp+168h] [rbp-120h]
  char v104; // [rsp+178h] [rbp-110h]
  __int64 v105; // [rsp+180h] [rbp-108h]
  __int64 v106; // [rsp+188h] [rbp-100h]
  void *v107; // [rsp+190h] [rbp-F8h] BYREF
  __int128 s2; // [rsp+198h] [rbp-F0h] BYREF
  char v109; // [rsp+1A8h] [rbp-E0h]
  _BOOL8 v110; // [rsp+1B0h] [rbp-D8h]
  __int64 v111; // [rsp+1B8h] [rbp-D0h]
  __m128i v112; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v113; // [rsp+1D0h] [rbp-B8h]
  _QWORD v114[3]; // [rsp+1D8h] [rbp-B0h] BYREF
  _QWORD v115[3]; // [rsp+1F0h] [rbp-98h] BYREF
  __int64 v116; // [rsp+208h] [rbp-80h] BYREF
  __int64 v117; // [rsp+218h] [rbp-70h]
  char s[40]; // [rsp+220h] [rbp-68h] BYREF
  unsigned __int64 v119; // [rsp+248h] [rbp-40h]

  v119 = __readfsqword(0x28u);
  v107 = (char *)&s2 + 8;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  HIBYTE(s2) = 0;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0xF3918);
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
        v6 = 7;
        if ( v8 <= 7 )
          v6 = *(_QWORD *)(v3 + 40);
        v7 = memcmp(*(const void **)(v3 + 32), (char *)&s2 + 8, v6);
        if ( v7 || (v7 = v8 - 7, (__int64)(v8 - 7) <= 0x7FFFFFFF) )
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
        v10 = 7;
        if ( v9 <= 7 )
          v10 = *(_QWORD *)(v5 + 40);
        v11 = memcmp((char *)&s2 + 8, *(const void **)(v5 + 32), v10);
        if ( v11 || (v11 = 7 - v9, (__int64)(7 - v9) >= (__int64)0xFFFFFFFF80000000LL) )
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
  v107 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v4 + 64) != 3 )
    JUMPOUT(0xF371E);
  std::string::_M_assign();
  v12 = v107;
  v13 = __errno_location();
  *v13 = 0;
  v14 = v13;
  v74 = __isoc23_strtoull();
  if ( v12 == (void *)v83 || *(_BYTE *)v83 || *v14 == 34 && v74 == -1 )
  {
    if ( v107 != (char *)&s2 + 8 )
      operator delete(v107, *((_QWORD *)&s2 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0xF35BE);
  }
  if ( v107 != (char *)&s2 + 8 )
    operator delete(v107, *((_QWORD *)&s2 + 1) + 1LL);
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0xF3681);
  v16 = *(_QWORD *)(a2 + 8);
  if ( !*(_QWORD *)(v16 + 16) )
    goto LABEL_48;
  v17 = v16 + 8;
  v18 = *(_QWORD *)(v16 + 16);
  do
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)(v18 + 40);
      if ( !v21 )
        break;
      v19 = 11;
      if ( v21 <= 0xB )
        v19 = *(_QWORD *)(v18 + 40);
      v20 = memcmp(*(const void **)(v18 + 32), "description", v19);
      if ( v20 || (v20 = v21 - 11, (__int64)(v21 - 11) <= 0x7FFFFFFF) )
      {
        if ( v20 < 0 )
          break;
      }
      v17 = v18;
      v18 = *(_QWORD *)(v18 + 16);
      if ( !v18 )
        goto LABEL_41;
    }
    v18 = *(_QWORD *)(v18 + 24);
  }
  while ( v18 );
LABEL_41:
  if ( v16 + 8 == v17 )
    goto LABEL_48;
  v22 = *(_QWORD *)(v17 + 40);
  if ( !v22 )
    goto LABEL_84;
  v23 = 11;
  if ( v22 <= 0xB )
    v23 = *(_QWORD *)(v17 + 40);
  if ( ((v24 = memcmp(*(const void **)(v17 + 32), "description", v23)) != 0
     || (v24 = v22 - 11, (__int64)(v22 - 11) <= 0x7FFFFFFF))
    && v24 <= 0 )
  {
LABEL_84:
    LOBYTE(v90[0]) = 0;
    v88 = v90;
    *(_QWORD *)v89 = 0;
    if ( *(_BYTE *)(v17 + 64) != 3 )
      JUMPOUT(0xF3651);
    std::string::_M_assign();
    if ( *(_BYTE *)a2 != 1 )
      JUMPOUT(0xF3592);
    v16 = *(_QWORD *)(a2 + 8);
  }
  else
  {
LABEL_48:
    LOBYTE(v90[0]) = 0;
    v88 = v90;
    *(_QWORD *)v89 = 0;
  }
  v25 = *(_QWORD *)(v16 + 16);
  if ( v25 )
  {
    v26 = v16 + 8;
    v27 = v16 + 8;
    do
    {
      while ( 1 )
      {
        v30 = *(_QWORD *)(v25 + 40);
        if ( !v30 )
          break;
        v28 = 5;
        if ( v30 <= 5 )
          v28 = *(_QWORD *)(v25 + 40);
        v29 = memcmp(*(const void **)(v25 + 32), "index", v28);
        if ( v29 || (v29 = v30 - 5, (__int64)(v30 - 5) <= 0x7FFFFFFF) )
        {
          if ( v29 < 0 )
            break;
        }
        v27 = v25;
        v25 = *(_QWORD *)(v25 + 16);
        if ( !v25 )
          goto LABEL_59;
      }
      v25 = *(_QWORD *)(v25 + 24);
    }
    while ( v25 );
LABEL_59:
    if ( v26 != v27 )
    {
      v31 = *(_QWORD *)(v27 + 40);
      if ( !v31 )
        goto LABEL_99;
      v32 = 5;
      if ( v31 <= 5 )
        v32 = *(_QWORD *)(v27 + 40);
      v33 = memcmp(*(const void **)(v27 + 32), "index", v32);
      if ( v33 || (v33 = v31 - 5, (__int64)(v31 - 5) <= 0x7FFFFFFF) )
      {
        if ( v33 <= 0 )
        {
LABEL_99:
          v58 = *(_BYTE *)(v27 + 64);
          if ( v58 != 6 )
          {
            if ( v58 > 6u )
            {
              if ( v58 == 7 )
                goto LABEL_65;
            }
            else if ( v58 == 4 || v58 == 5 )
            {
              goto LABEL_65;
            }
            JUMPOUT(0xF38DE);
          }
        }
      }
    }
  }
LABEL_65:
  v81 = 0;
  v87 = &v80;
  v84 = 0;
  v80 = &off_445468;
  v85 = -1;
  v82 = v74;
  v86 = 0;
  v83 = 0;
  v87 = (__int64 (__fastcall ***)())idaplace_t__clone();
  v34 = bookmarks_t_mark();
  LOBYTE(v94) = 0;
  *(_QWORD *)v95 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v94) = 3;
  v35 = operator new(0x20u);
  strcpy((char *)(v35 + 16), "address");
  v36 = (__m128i *)s;
  *(_QWORD *)v35 = v35 + 16;
  *(_QWORD *)(v35 + 8) = 7;
  *(_OWORD *)v95 = (unsigned __int64)v35;
  qsnprintf();
  v91 = v93;
  v37 = strlen(s);
  *(_QWORD *)v79 = v37;
  v38 = v37;
  if ( v37 > 0xF )
  {
    v57 = (_QWORD *)std::string::_M_create();
    v91 = v57;
    v93[0] = *(_QWORD *)v79;
  }
  else
  {
    if ( v37 == 1 )
    {
      LOBYTE(v93[0]) = s[0];
      goto LABEL_68;
    }
    if ( !v37 )
    {
LABEL_68:
      v39 = v93;
      goto LABEL_69;
    }
    v57 = v93;
  }
  if ( v38 >= 8 )
  {
    *v57 = *(_QWORD *)s;
    *(_QWORD *)((char *)v57 + v38 - 8) = *(_QWORD *)&s[v38 - 8];
    v60 = (unsigned __int64)(v57 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v61 = (char *)v57 - v60;
    v62 = (char *)(s - v61);
    v63 = ((_DWORD)v61 + v38) & 0xFFFFFFF8;
    if ( v63 >= 8 )
    {
      v64 = v63 & 0xFFFFFFF8;
      v65 = 0;
      do
      {
        v66 = v65;
        v65 += 8;
        *(_QWORD *)(v60 + v66) = *(_QWORD *)&v62[v66];
      }
      while ( v65 < v64 );
    }
  }
  else if ( (v38 & 4) != 0 )
  {
    *(_DWORD *)v57 = *(_DWORD *)s;
    *(_DWORD *)((char *)v57 + v38 - 4) = *(_DWORD *)&s[v38 - 4];
  }
  else if ( v38 )
  {
    *(_BYTE *)v57 = s[0];
    if ( (v38 & 2) != 0 )
      *(_WORD *)((char *)v57 + v38 - 2) = *(_WORD *)&s[v38 - 2];
  }
  v37 = *(_QWORD *)v79;
  v39 = v91;
LABEL_69:
  v92 = v37;
  *((_BYTE *)v39 + v37) = 0;
  v96 = 0;
  *(_QWORD *)v97 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v96 = 3;
  v40 = (_QWORD *)operator new(0x20u);
  v41 = v91;
  v42 = v40 + 2;
  v43 = v92;
  *v40 = v40 + 2;
  if ( v41 == v93 )
  {
    v59 = v43 + 1;
    if ( (unsigned int)(v43 + 1) >= 8 )
    {
      v40[2] = v93[0];
      *(_QWORD *)((char *)v42 + v59 - 8) = *(_QWORD *)((char *)&v93[-1] + v59);
      v67 = (unsigned __int64)(v40 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v68 = (char *)v42 - v67;
      v69 = (char *)((char *)v93 - v68);
      if ( (((_DWORD)v68 + v59) & 0xFFFFFFF8) >= 8 )
      {
        v70 = ((_DWORD)v68 + v59) & 0xFFFFFFF8;
        v71 = 0;
        do
        {
          v72 = v71;
          v71 += 8;
          *(_QWORD *)(v67 + v72) = *(_QWORD *)&v69[v72];
        }
        while ( v71 < v70 );
      }
    }
    else if ( (v59 & 4) != 0 )
    {
      *((_DWORD *)v40 + 4) = v93[0];
      *(_DWORD *)((char *)v42 + v59 - 4) = *(_DWORD *)((char *)&v92 + v59 + 4);
    }
    else if ( (_DWORD)v43 != -1 )
    {
      *((_BYTE *)v40 + 16) = v93[0];
      if ( (v59 & 2) != 0 )
        *(_WORD *)((char *)v42 + v59 - 2) = *(_WORD *)((char *)&v92 + v59 + 6);
    }
  }
  else
  {
    *v40 = v41;
    v40[2] = v93[0];
  }
  v40[1] = v43;
  v91 = v93;
  v92 = 0;
  LOBYTE(v93[0]) = 0;
  *(_OWORD *)v97 = (unsigned __int64)v40;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v112,
    (const __m128i *)&v94);
  v113 = 0;
  LOBYTE(v98) = 0;
  *(_QWORD *)v99 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v98) = 3;
  v44 = operator new(0x20u);
  *(_QWORD *)v44 = v44 + 16;
  strcpy((char *)(v44 + 16), "description");
  *(_QWORD *)(v44 + 8) = 11;
  v100 = 0;
  v101[0] = 0;
  *(_OWORD *)v99 = (unsigned __int64)v44;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v100 = 3;
  src = v88;
  *(_QWORD *)v75 = *(_QWORD *)v89;
  v45 = (_QWORD *)operator new(0x20u);
  v46 = *(_QWORD *)v75;
  v47 = v45 + 2;
  v48 = v45;
  *v45 = v45 + 2;
  *(_QWORD *)v79 = *(_QWORD *)v75;
  if ( *(_QWORD *)v75 > 0xFu )
  {
    v55 = std::string::_M_create();
    *v48 = v55;
    v47 = (_BYTE *)v55;
    v56 = *(_QWORD *)v79;
    si128 = (__m128i)(unsigned __int64)v48;
    v76 = v34 != -1;
    v48[2] = *(_QWORD *)v79;
    v50 = v56 + 1;
    if ( v56 )
    {
      v51 = -1;
      if ( !v50 )
        goto LABEL_74;
      goto LABEL_73;
    }
LABEL_87:
    *v47 = *src;
    v51 = *(_QWORD *)v79;
    goto LABEL_74;
  }
  si128 = (__m128i)(unsigned __int64)v45;
  v50 = *(_QWORD *)v75 + 1LL;
  v76 = v34 != -1;
  if ( !v46 )
    goto LABEL_87;
LABEL_73:
  *(__m128i *)v78 = si128;
  memcpy(v47, src, v50);
  v51 = *(_QWORD *)v79;
  si128 = _mm_load_si128((const __m128i *)v78);
LABEL_74:
  v48[1] = v51;
  *(__m128i *)v101 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v114,
    (const __m128i *)&v98);
  v114[2] = 0;
  v102 = 0;
  *(_QWORD *)&v103 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v102 = 3;
  v52 = operator new(0x20u);
  *(_DWORD *)(v52 + 16) = 1701080681;
  *(_QWORD *)v52 = v52 + 16;
  *(_BYTE *)(v52 + 20) = 120;
  *(_QWORD *)(v52 + 8) = 5;
  *(_BYTE *)(v52 + 21) = 0;
  v104 = 6;
  v105 = v34;
  v106 = 0;
  v103 = (unsigned __int64)v52;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v115,
    (const __m128i *)&v102);
  v115[2] = 0;
  LOBYTE(v107) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v107) = 3;
  v53 = operator new(0x20u);
  *(_QWORD *)v53 = v53 + 16;
  strcpy((char *)(v53 + 16), "success");
  *(_QWORD *)(v53 + 8) = 7;
  v109 = 4;
  v110 = v76;
  v111 = 0;
  s2 = (unsigned __int64)v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v116,
    (const __m128i *)&v107);
  v117 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v112,
    4);
  do
  {
    v36 = (__m128i *)((char *)v36 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v36 != &v112 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v91 != v93 )
    operator delete(v91, v93[0] + 1LL);
  if ( v87 )
    qfree();
  if ( v88 != v90 )
    operator delete(v88, v90[0] + 1LL);
  return a1;
}

