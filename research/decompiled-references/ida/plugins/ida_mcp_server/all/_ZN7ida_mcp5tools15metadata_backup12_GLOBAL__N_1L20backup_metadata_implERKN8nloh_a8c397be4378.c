_QWORD *__fastcall ida_mcp::tools::metadata_backup::`anonymous namespace'::backup_metadata_impl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r14
  size_t v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  size_t v10; // rdx
  int v11; // eax
  char *v12; // r13
  int *v13; // rax
  int *v14; // r14
  __int64 v15; // rbp
  std::runtime_error *exception; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  size_t v19; // rax
  unsigned int v20; // r14d
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  size_t v25; // rsi
  __int64 v26; // rax
  _BYTE *v27; // r14
  unsigned __int64 v28; // r15
  _QWORD *v29; // rax
  _BYTE *v30; // rdi
  __int64 *v31; // r12
  __m128i si128; // xmm0
  size_t v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  size_t v36; // rax
  unsigned int v37; // r14d
  _QWORD *v38; // rdx
  _QWORD *v39; // rax
  _QWORD *v40; // rdx
  _QWORD *v41; // rcx
  size_t v42; // rsi
  __int64 v43; // rax
  __m128i *v44; // r15
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  unsigned int v51; // ecx
  size_t *v52; // rdx
  _BYTE *v53; // rax
  _BYTE *v54; // rsi
  __int64 v55; // rdx
  size_t v56; // rsi
  unsigned __int64 v57; // rcx
  char *v58; // rax
  char *v59; // r13
  unsigned int v60; // r14d
  unsigned int v61; // r14d
  unsigned int v62; // eax
  __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  char *v65; // rax
  char *v66; // r12
  unsigned int v67; // r14d
  unsigned int v68; // r14d
  unsigned int v69; // eax
  __int64 v70; // rdx
  _QWORD *v71; // rax
  unsigned int v72; // edi
  unsigned int v73; // edi
  unsigned __int64 v74; // r8
  char *v75; // rcx
  char *v76; // r9
  unsigned int v77; // edx
  unsigned int v78; // ecx
  __int64 v79; // rdi
  unsigned __int64 v80; // r8
  char *v81; // rcx
  char *v82; // r9
  unsigned int v83; // edx
  unsigned int v84; // ecx
  __int64 v85; // rdi
  unsigned __int64 v86; // rsi
  char *v87; // rax
  char *v88; // r14
  unsigned int v89; // eax
  unsigned int v90; // eax
  unsigned int v91; // edx
  __int64 v92; // rcx
  unsigned __int64 v93; // rcx
  char *v94; // rdi
  unsigned int v95; // eax
  unsigned int v96; // edx
  __int64 v97; // rsi
  const __m128i *v98; // [rsp+0h] [rbp-2C8h]
  _QWORD *v99; // [rsp+8h] [rbp-2C0h]
  unsigned int v100; // [rsp+18h] [rbp-2B0h]
  int v101[4]; // [rsp+30h] [rbp-298h] BYREF
  int v102[2]; // [rsp+40h] [rbp-288h]
  unsigned __int8 v103; // [rsp+4Fh] [rbp-279h]
  int v104[2]; // [rsp+50h] [rbp-278h]
  char v105[8]; // [rsp+58h] [rbp-270h]
  int v106[2]; // [rsp+60h] [rbp-268h]
  char v107[8]; // [rsp+68h] [rbp-260h]
  size_t v108; // [rsp+78h] [rbp-250h]
  char *s; // [rsp+80h] [rbp-248h]
  __int128 v110; // [rsp+88h] [rbp-240h]
  void *src; // [rsp+A0h] [rbp-228h]
  __m128 v112; // [rsp+A8h] [rbp-220h] BYREF
  void *v113; // [rsp+C0h] [rbp-208h] BYREF
  size_t v114; // [rsp+C8h] [rbp-200h]
  _QWORD v115[2]; // [rsp+D0h] [rbp-1F8h] BYREF
  void *v116; // [rsp+E0h] [rbp-1E8h] BYREF
  size_t v117; // [rsp+E8h] [rbp-1E0h]
  _QWORD v118[2]; // [rsp+F0h] [rbp-1D8h] BYREF
  int v119; // [rsp+100h] [rbp-1C8h] BYREF
  int v120[4]; // [rsp+108h] [rbp-1C0h]
  char v121; // [rsp+118h] [rbp-1B0h]
  int v122[4]; // [rsp+120h] [rbp-1A8h]
  char v123; // [rsp+130h] [rbp-198h] BYREF
  __int64 v124[2]; // [rsp+138h] [rbp-190h]
  char v125; // [rsp+148h] [rbp-180h]
  int v126[4]; // [rsp+150h] [rbp-178h] BYREF
  char v127; // [rsp+160h] [rbp-168h] BYREF
  int v128[4]; // [rsp+168h] [rbp-160h] BYREF
  char v129; // [rsp+178h] [rbp-150h]
  __int128 v130; // [rsp+180h] [rbp-148h]
  void *v131; // [rsp+190h] [rbp-138h] BYREF
  __int128 s2; // [rsp+198h] [rbp-130h] BYREF
  char v133; // [rsp+1A8h] [rbp-120h]
  __int64 v134; // [rsp+1B0h] [rbp-118h]
  __int64 v135; // [rsp+1B8h] [rbp-110h]
  __m128i v136; // [rsp+1C0h] [rbp-108h] BYREF
  size_t v137; // [rsp+1D0h] [rbp-F8h] BYREF
  _QWORD v138[3]; // [rsp+1D8h] [rbp-F0h] BYREF
  _QWORD v139[3]; // [rsp+1F0h] [rbp-D8h] BYREF
  __int64 v140; // [rsp+208h] [rbp-C0h] BYREF
  __int64 v141; // [rsp+218h] [rbp-B0h]
  char v142[24]; // [rsp+220h] [rbp-A8h] BYREF
  _BYTE v143[8]; // [rsp+238h] [rbp-90h]
  char v144[24]; // [rsp+240h] [rbp-88h] BYREF
  _BYTE v145[8]; // [rsp+258h] [rbp-70h]
  char v146[40]; // [rsp+260h] [rbp-68h] BYREF
  unsigned __int64 v147; // [rsp+288h] [rbp-40h]

  v147 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v131 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x1111CA);
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
  v131 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v4 + 64) != 3 )
    JUMPOUT(0x111079);
  std::string::_M_assign();
  v12 = (char *)v131;
  v13 = __errno_location();
  *v13 = 0;
  v14 = v13;
  v15 = __isoc23_strtoull();
  if ( v12 == s || *s || *v14 == 34 && v15 == -1 )
  {
    if ( v131 != (char *)&s2 + 8 )
      operator delete(v131, *((_QWORD *)&s2 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0x11119C);
  }
  if ( v131 != (char *)&s2 + 8 )
    operator delete(v131, *((_QWORD *)&s2 + 1) + 1LL);
  if ( !get_func() )
    JUMPOUT(0x1111FC);
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, void **, __int64))callui)(
    115,
    v15,
    0xFFFFFFFFLL,
    1,
    &callui,
    v17,
    &v131,
    a1);
  v112.m128_i8[8] = 0;
  v103 = backup_metadata();
  s = nullptr;
  src = &v112.m128_u16[4];
  v112.m128_u64[0] = 0;
  v110 = 0;
  if ( get_func_name() > 0 )
  {
    if ( (_QWORD)v110 )
      strlen(s);
    std::string::_M_replace();
    goto LABEL_35;
  }
  qsnprintf();
  v136.m128i_i64[0] = (__int64)&v137;
  v50 = strlen(v142);
  v108 = v50;
  v51 = v50;
  if ( v50 > 0xF )
  {
    v100 = v50;
    v71 = (_QWORD *)std::string::_M_create();
    v136.m128i_i64[0] = (__int64)v71;
    v51 = v100;
    v137 = v108;
  }
  else
  {
    if ( v50 == 1 )
    {
      LOBYTE(v137) = v142[0];
      goto LABEL_86;
    }
    if ( !v50 )
    {
LABEL_86:
      v52 = &v137;
      goto LABEL_87;
    }
    v71 = &v137;
  }
  if ( v51 >= 8 )
  {
    *v71 = *(_QWORD *)v142;
    *(_QWORD *)((char *)v71 + v51 - 8) = *(_QWORD *)&v142[v51 - 8];
    v86 = (unsigned __int64)(v71 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v87 = (char *)v71 - v86;
    v88 = (char *)(v142 - v87);
    v89 = (v51 + (_DWORD)v87) & 0xFFFFFFF8;
    if ( v89 >= 8 )
    {
      v90 = v89 & 0xFFFFFFF8;
      v91 = 0;
      do
      {
        v92 = v91;
        v91 += 8;
        *(_QWORD *)(v86 + v92) = *(_QWORD *)&v88[v92];
      }
      while ( v91 < v90 );
    }
  }
  else if ( (v51 & 4) != 0 )
  {
    *(_DWORD *)v71 = *(_DWORD *)v142;
    *(_DWORD *)((char *)v71 + v51 - 4) = *(_DWORD *)&v142[v51 - 4];
  }
  else if ( v51 )
  {
    *(_BYTE *)v71 = v142[0];
    if ( (v51 & 2) != 0 )
      *(_WORD *)((char *)v71 + v51 - 2) = *(_WORD *)&v142[v51 - 2];
  }
  v50 = v108;
  v52 = (size_t *)v136.m128i_i64[0];
LABEL_87:
  v136.m128i_i64[1] = v50;
  *((_BYTE *)v52 + v50) = 0;
  v53 = src;
  v54 = src;
  if ( src == &v112.m128_u16[4] )
  {
    v55 = v136.m128i_i64[1];
    if ( (size_t *)v136.m128i_i64[0] != &v137 )
    {
      src = (void *)v136.m128i_i64[0];
      v112 = _mm_loadh_ps((const double *)&v137);
LABEL_131:
      v136.m128i_i64[0] = (__int64)&v137;
      v53 = &v137;
      goto LABEL_91;
    }
  }
  else
  {
    v55 = v136.m128i_i64[1];
    if ( (size_t *)v136.m128i_i64[0] != &v137 )
    {
      v56 = v112.m128_u64[1];
      src = (void *)v136.m128i_i64[0];
      v112 = _mm_loadh_ps((const double *)&v137);
      if ( v53 )
      {
        v136.m128i_i64[0] = (__int64)v53;
        v137 = v56;
        goto LABEL_91;
      }
      goto LABEL_131;
    }
  }
  if ( v55 )
  {
    if ( v55 == 1 )
    {
      *(_BYTE *)src = v137;
      v54 = src;
      v55 = v136.m128i_i64[1];
      goto LABEL_143;
    }
    if ( (unsigned int)v55 >= 8 )
    {
      *(_QWORD *)src = v137;
      *(_QWORD *)&v54[(unsigned int)v55 - 8] = *(__int64 *)((char *)&v136.m128i_i64[1] + (unsigned int)v55);
      v93 = (unsigned __int64)(v54 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v94 = (char *)((char *)&v137 - &v54[-v93]);
      if ( (((_DWORD)v55 + (_DWORD)v54 - (_DWORD)v93) & 0xFFFFFFF8) >= 8 )
      {
        v95 = (v55 + (_DWORD)v54 - v93) & 0xFFFFFFF8;
        v96 = 0;
        do
        {
          v97 = v96;
          v96 += 8;
          *(_QWORD *)(v93 + v97) = *(_QWORD *)&v94[v97];
        }
        while ( v96 < v95 );
      }
LABEL_142:
      v54 = src;
      v55 = v136.m128i_i64[1];
      goto LABEL_143;
    }
    if ( (v55 & 4) != 0 )
    {
      *(_DWORD *)src = v137;
      *(_DWORD *)&v54[(unsigned int)v55 - 4] = *(__int32 *)((char *)&v136.m128i_i32[3] + (unsigned int)v55);
      v54 = src;
      v55 = v136.m128i_i64[1];
      goto LABEL_143;
    }
    if ( (_DWORD)v55 )
    {
      *(_BYTE *)src = v137;
      if ( (v55 & 2) != 0 )
      {
        *(_WORD *)&v54[(unsigned int)v55 - 2] = *(__int16 *)((char *)&v136.m128i_i16[7] + (unsigned int)v55);
        v54 = src;
        v55 = v136.m128i_i64[1];
        goto LABEL_143;
      }
      goto LABEL_142;
    }
  }
LABEL_143:
  v112.m128_u64[0] = v55;
  v54[v55] = 0;
  v53 = (_BYTE *)v136.m128i_i64[0];
LABEL_91:
  *v53 = 0;
  if ( (size_t *)v136.m128i_i64[0] != &v137 )
    operator delete((void *)v136.m128i_i64[0], v137 + 1);
LABEL_35:
  LOBYTE(v119) = 0;
  *(_QWORD *)v120 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v119) = 3;
  v18 = operator new(0x20u);
  *(_QWORD *)v18 = v18 + 16;
  strcpy((char *)(v18 + 16), "address");
  *(_QWORD *)(v18 + 8) = 7;
  *(_OWORD *)v120 = (unsigned __int64)v18;
  qsnprintf();
  *(_QWORD *)v104 = &v113;
  v113 = v115;
  v19 = strlen(v144);
  v108 = v19;
  v20 = v19;
  if ( v19 > 0xF )
  {
    v46 = (_QWORD *)std::string::_M_create();
    v113 = v46;
    v115[0] = v108;
  }
  else
  {
    if ( v19 == 1 )
    {
      LOBYTE(v115[0]) = v144[0];
      goto LABEL_38;
    }
    if ( !v19 )
    {
LABEL_38:
      v21 = v115;
      goto LABEL_39;
    }
    v46 = v115;
  }
  if ( v20 >= 8 )
  {
    *v46 = *(_QWORD *)v144;
    *(_QWORD *)((char *)v46 + v20 - 8) = *(_QWORD *)&v143[v20];
    v64 = (unsigned __int64)(v46 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v65 = (char *)v46 - v64;
    v66 = (char *)(v144 - v65);
    v67 = ((_DWORD)v65 + v20) & 0xFFFFFFF8;
    if ( v67 >= 8 )
    {
      v68 = v67 & 0xFFFFFFF8;
      v69 = 0;
      do
      {
        v70 = v69;
        v69 += 8;
        *(_QWORD *)(v64 + v70) = *(_QWORD *)&v66[v70];
      }
      while ( v69 < v68 );
    }
  }
  else if ( (v20 & 4) != 0 )
  {
    *(_DWORD *)v46 = *(_DWORD *)v144;
    *(_DWORD *)((char *)v46 + v20 - 4) = *(_DWORD *)&v143[v20 + 4];
  }
  else if ( v20 )
  {
    *(_BYTE *)v46 = v144[0];
    if ( (v20 & 2) != 0 )
      *(_WORD *)((char *)v46 + v20 - 2) = *(_WORD *)&v143[v20 + 6];
  }
  v19 = v108;
  v21 = v113;
LABEL_39:
  v114 = v19;
  *((_BYTE *)v21 + v19) = 0;
  v121 = 0;
  *(_QWORD *)v122 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v121 = 3;
  v22 = (_QWORD *)operator new(0x20u);
  v23 = v113;
  v24 = v22 + 2;
  v25 = v114;
  *v22 = v22 + 2;
  if ( v23 == v115 )
  {
    v73 = v25 + 1;
    if ( (unsigned int)(v25 + 1) >= 8 )
    {
      v22[2] = v115[0];
      *(_QWORD *)((char *)v24 + v73 - 8) = *(_QWORD *)((char *)&v115[-1] + v73);
      v80 = (unsigned __int64)(v22 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v81 = (char *)v24 - v80;
      v82 = (char *)((char *)v115 - v81);
      if ( (((_DWORD)v81 + v73) & 0xFFFFFFF8) >= 8 )
      {
        v83 = ((_DWORD)v81 + v73) & 0xFFFFFFF8;
        v84 = 0;
        do
        {
          v85 = v84;
          v84 += 8;
          *(_QWORD *)(v80 + v85) = *(_QWORD *)&v82[v85];
        }
        while ( v84 < v83 );
      }
    }
    else if ( (v73 & 4) != 0 )
    {
      *((_DWORD *)v22 + 4) = v115[0];
      *(_DWORD *)((char *)v24 + v73 - 4) = *(_DWORD *)((char *)&v114 + v73 + 4);
    }
    else if ( (_DWORD)v25 != -1 )
    {
      *((_BYTE *)v22 + 16) = v115[0];
      if ( (v73 & 2) != 0 )
        *(_WORD *)((char *)v24 + v73 - 2) = *(_WORD *)((char *)&v114 + v73 + 6);
    }
  }
  else
  {
    *v22 = v23;
    v22[2] = v115[0];
  }
  v22[1] = v25;
  v113 = v115;
  v114 = 0;
  LOBYTE(v115[0]) = 0;
  *(_QWORD *)v106 = &v119;
  *(_OWORD *)v122 = (unsigned __int64)v22;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v136,
    (const __m128i *)&v119);
  v137 = 0;
  v123 = 0;
  v124[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v123 = 3;
  v26 = operator new(0x20u);
  *(_QWORD *)v26 = v26 + 16;
  strcpy((char *)(v26 + 16), "function");
  *(_QWORD *)(v26 + 8) = 8;
  v125 = 0;
  *(_QWORD *)v126 = 0;
  *(_QWORD *)v102 = v126;
  *(_OWORD *)v124 = (unsigned __int64)v26;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v125 = 3;
  v27 = src;
  v28 = v112.m128_u64[0];
  v29 = (_QWORD *)operator new(0x20u);
  v30 = v29 + 2;
  v108 = v28;
  v31 = v29;
  *v29 = v29 + 2;
  if ( v28 <= 0xF )
  {
    si128 = (__m128i)(unsigned __int64)v29;
    v33 = v28 + 1;
    if ( v28 )
    {
LABEL_43:
      *(__m128i *)v101 = si128;
      memcpy(v30, v27, v33);
      v34 = v108;
      si128 = _mm_load_si128((const __m128i *)v101);
      goto LABEL_44;
    }
    goto LABEL_63;
  }
  v48 = std::string::_M_create();
  *v31 = v48;
  v30 = (_BYTE *)v48;
  v49 = v108;
  si128 = (__m128i)(unsigned __int64)v31;
  v31[2] = v108;
  v33 = v49 + 1;
  if ( !v49 )
  {
LABEL_63:
    *v30 = *v27;
    v34 = v108;
    goto LABEL_44;
  }
  v34 = -1;
  if ( v33 )
    goto LABEL_43;
LABEL_44:
  v31[1] = v34;
  *(_QWORD *)v107 = &v123;
  *(__m128i *)v126 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v138,
    (const __m128i *)&v123);
  v138[2] = 0;
  v127 = 0;
  *(_QWORD *)v128 = 0;
  *(_QWORD *)v101 = v128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v127 = 3;
  v35 = operator new(0x20u);
  strcpy((char *)(v35 + 16), "function_start");
  *(_QWORD *)v35 = v35 + 16;
  *(_QWORD *)(v35 + 8) = 14;
  *(_OWORD *)v128 = (unsigned __int64)v35;
  qsnprintf();
  *(_QWORD *)v105 = &v116;
  v116 = v118;
  v36 = strlen(v146);
  v108 = v36;
  v37 = v36;
  if ( v36 > 0xF )
  {
    v47 = (_QWORD *)std::string::_M_create();
    v116 = v47;
    v118[0] = v108;
  }
  else
  {
    if ( v36 == 1 )
    {
      LOBYTE(v118[0]) = v146[0];
      goto LABEL_47;
    }
    if ( !v36 )
    {
LABEL_47:
      v38 = v118;
      goto LABEL_48;
    }
    v47 = v118;
  }
  if ( v37 >= 8 )
  {
    *v47 = *(_QWORD *)v146;
    *(_QWORD *)((char *)v47 + v37 - 8) = *(_QWORD *)&v145[v37];
    v57 = (unsigned __int64)(v47 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v58 = (char *)v47 - v57;
    v59 = (char *)(v146 - v58);
    v60 = ((_DWORD)v58 + v37) & 0xFFFFFFF8;
    if ( v60 >= 8 )
    {
      v61 = v60 & 0xFFFFFFF8;
      v62 = 0;
      do
      {
        v63 = v62;
        v62 += 8;
        *(_QWORD *)(v57 + v63) = *(_QWORD *)&v59[v63];
      }
      while ( v62 < v61 );
    }
  }
  else if ( (v37 & 4) != 0 )
  {
    *(_DWORD *)v47 = *(_DWORD *)v146;
    *(_DWORD *)((char *)v47 + v37 - 4) = *(_DWORD *)&v145[v37 + 4];
  }
  else if ( v37 )
  {
    *(_BYTE *)v47 = v146[0];
    if ( (v37 & 2) != 0 )
      *(_WORD *)((char *)v47 + v37 - 2) = *(_WORD *)&v145[v37 + 6];
  }
  v36 = v108;
  v38 = v116;
LABEL_48:
  v117 = v36;
  *((_BYTE *)v38 + v36) = 0;
  v129 = 0;
  *(_QWORD *)&v130 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v129 = 3;
  v39 = (_QWORD *)operator new(0x20u);
  v40 = v116;
  v41 = v39 + 2;
  v42 = v117;
  *v39 = v39 + 2;
  if ( v40 == v118 )
  {
    v72 = v42 + 1;
    if ( (unsigned int)(v42 + 1) >= 8 )
    {
      v39[2] = v118[0];
      *(_QWORD *)((char *)v41 + v72 - 8) = *(_QWORD *)((char *)&v118[-1] + v72);
      v74 = (unsigned __int64)(v39 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v75 = (char *)v41 - v74;
      v76 = (char *)((char *)v118 - v75);
      if ( (((_DWORD)v75 + v72) & 0xFFFFFFF8) >= 8 )
      {
        v77 = ((_DWORD)v75 + v72) & 0xFFFFFFF8;
        v78 = 0;
        do
        {
          v79 = v78;
          v78 += 8;
          *(_QWORD *)(v74 + v79) = *(_QWORD *)&v76[v79];
        }
        while ( v78 < v77 );
      }
    }
    else if ( (v72 & 4) != 0 )
    {
      *((_DWORD *)v39 + 4) = v118[0];
      *(_DWORD *)((char *)v41 + v72 - 4) = *(_DWORD *)((char *)&v117 + v72 + 4);
    }
    else if ( (_DWORD)v42 != -1 )
    {
      *((_BYTE *)v39 + 16) = v118[0];
      if ( (v72 & 2) != 0 )
        *(_WORD *)((char *)v41 + v72 - 2) = *(_WORD *)((char *)&v117 + v72 + 6);
    }
  }
  else
  {
    *v39 = v40;
    v39[2] = v118[0];
  }
  v39[1] = v42;
  v116 = v118;
  v117 = 0;
  LOBYTE(v118[0]) = 0;
  v130 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v139,
    (const __m128i *)&v127);
  v139[2] = 0;
  LOBYTE(v131) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v131) = 3;
  v43 = operator new(0x20u);
  strcpy((char *)(v43 + 16), "success");
  *(_QWORD *)v43 = v43 + 16;
  *(_QWORD *)(v43 + 8) = 7;
  v133 = 4;
  v134 = v103;
  v135 = 0;
  s2 = (unsigned __int64)v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v140,
    v98);
  v141 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v99,
    &v136,
    4);
  v44 = (__m128i *)v142;
  do
  {
    v44 = (__m128i *)((char *)v44 - 24);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v44 != &v136 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v116 != v118 )
    operator delete(v116, v118[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v113 != v115 )
    operator delete(v113, v115[0] + 1LL);
  if ( src != &v112.m128_u16[4] )
    operator delete(src, v112.m128_u64[1] + 1);
  if ( s )
  {
    *(_QWORD *)&v110 = 0;
    qfree();
  }
  return v99;
}

