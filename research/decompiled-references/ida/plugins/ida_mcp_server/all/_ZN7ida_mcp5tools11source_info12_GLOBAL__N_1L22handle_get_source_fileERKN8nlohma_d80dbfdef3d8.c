_QWORD *__fastcall ida_mcp::tools::source_info::`anonymous namespace'::handle_get_source_file(_QWORD *a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *v2; // r12
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r14
  size_t v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbx
  size_t v12; // rdx
  int v13; // eax
  _BYTE *v14; // r12
  int *v15; // rax
  int *v16; // r14
  __int64 v17; // rbx
  std::runtime_error *v18; // rbx
  const char *sourcefile; // r12
  __int64 v20; // rax
  size_t v21; // rax
  unsigned int v22; // ebx
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  size_t v27; // rsi
  __int64 v28; // rax
  __int64 *v29; // rax
  void *v30; // r13
  __int64 *v31; // rbp
  size_t v32; // rax
  size_t v33; // r14
  __int64 v34; // rax
  size_t v35; // rax
  unsigned int v36; // r13d
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // rcx
  size_t v41; // rsi
  __int64 v42; // rax
  size_t v43; // rax
  unsigned int v44; // r14d
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  _QWORD *v48; // rcx
  size_t v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __m128i *v54; // r15
  __int64 *v56; // rbp
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  size_t v61; // rax
  unsigned int v62; // ebx
  char *v63; // rdx
  _QWORD *v64; // rax
  _OWORD *v65; // rdx
  _QWORD *v66; // rcx
  __int64 v67; // rsi
  __int64 *v68; // r12
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  _DWORD *v73; // rax
  unsigned __int64 v74; // rcx
  char *v75; // rax
  char *v76; // rbp
  unsigned int v77; // ebx
  unsigned int v78; // ebx
  unsigned int v79; // eax
  __int64 v80; // rdx
  _DWORD *v81; // rax
  unsigned __int64 v82; // rcx
  char *v83; // rax
  char *v84; // r13
  unsigned int v85; // r14d
  unsigned int v86; // r14d
  unsigned int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rax
  _DWORD *v90; // rax
  unsigned __int64 v91; // rcx
  char *v92; // rax
  char *v93; // r12
  unsigned int v94; // r13d
  unsigned int v95; // r13d
  unsigned int v96; // eax
  __int64 v97; // rdx
  unsigned int v98; // edi
  unsigned int v99; // edi
  unsigned int v100; // edi
  _QWORD *v101; // rax
  unsigned __int64 v102; // r8
  char *v103; // rcx
  char *v104; // r9
  unsigned int v105; // edx
  unsigned int v106; // ecx
  __int64 v107; // rdi
  unsigned __int64 v108; // r8
  char *v109; // rcx
  char *v110; // rbx
  unsigned int v111; // edx
  unsigned int v112; // ecx
  __int64 v113; // rdi
  unsigned __int64 v114; // r8
  char *v115; // rcx
  char *v116; // r9
  unsigned int v117; // edx
  unsigned int v118; // ecx
  __int64 v119; // rdi
  unsigned int v120; // edi
  unsigned __int64 v121; // rdx
  char *v122; // rax
  char *v123; // r13
  unsigned int v124; // ebx
  unsigned int v125; // ebx
  unsigned int v126; // eax
  __int64 v127; // rcx
  unsigned __int64 v128; // r8
  char *v129; // rcx
  char *v130; // r9
  unsigned int v131; // edx
  unsigned int v132; // ecx
  __int64 v133; // rdi
  int v134; // [rsp+0h] [rbp-318h]
  void *v135; // [rsp+0h] [rbp-318h]
  int v136; // [rsp+0h] [rbp-318h]
  _QWORD *v138; // [rsp+8h] [rbp-310h]
  int v139; // [rsp+8h] [rbp-310h]
  __int64 v140; // [rsp+10h] [rbp-308h]
  size_t v141; // [rsp+88h] [rbp-290h]
  size_t v142; // [rsp+88h] [rbp-290h]
  size_t v143; // [rsp+88h] [rbp-290h]
  size_t v144; // [rsp+88h] [rbp-290h]
  size_t v145; // [rsp+88h] [rbp-290h]
  _BYTE *v146; // [rsp+90h] [rbp-288h]
  void *v147; // [rsp+A0h] [rbp-278h] BYREF
  size_t v148; // [rsp+A8h] [rbp-270h]
  _QWORD v149[2]; // [rsp+B0h] [rbp-268h] BYREF
  void *v150; // [rsp+C0h] [rbp-258h] BYREF
  size_t v151; // [rsp+C8h] [rbp-250h]
  _QWORD v152[2]; // [rsp+D0h] [rbp-248h] BYREF
  void *v153; // [rsp+E0h] [rbp-238h] BYREF
  size_t v154; // [rsp+E8h] [rbp-230h]
  _QWORD v155[2]; // [rsp+F0h] [rbp-228h] BYREF
  char v156; // [rsp+100h] [rbp-218h] BYREF
  __int128 v157; // [rsp+108h] [rbp-210h] BYREF
  char v158; // [rsp+118h] [rbp-200h]
  __int128 v159; // [rsp+120h] [rbp-1F8h] BYREF
  char v160; // [rsp+130h] [rbp-1E8h] BYREF
  __int128 v161; // [rsp+138h] [rbp-1E0h] BYREF
  char v162; // [rsp+148h] [rbp-1D0h]
  __int128 v163; // [rsp+150h] [rbp-1C8h] BYREF
  void *v164; // [rsp+160h] [rbp-1B8h] BYREF
  __int128 v165; // [rsp+168h] [rbp-1B0h] BYREF
  char v166; // [rsp+178h] [rbp-1A0h]
  __int128 v167; // [rsp+180h] [rbp-198h] BYREF
  char v168; // [rsp+190h] [rbp-188h] BYREF
  __int128 v169; // [rsp+198h] [rbp-180h] BYREF
  char v170; // [rsp+1A8h] [rbp-170h]
  __int128 v171; // [rsp+1B0h] [rbp-168h]
  void *v172; // [rsp+1C0h] [rbp-158h] BYREF
  __int128 s2; // [rsp+1C8h] [rbp-150h] BYREF
  __int64 v174; // [rsp+1D8h] [rbp-140h]
  __int64 v175; // [rsp+1E0h] [rbp-138h]
  __int64 v176; // [rsp+1E8h] [rbp-130h]
  __m128i v177; // [rsp+1F0h] [rbp-128h] BYREF
  __int64 v178; // [rsp+200h] [rbp-118h]
  __int64 v179; // [rsp+208h] [rbp-110h] BYREF
  __int64 v180; // [rsp+218h] [rbp-100h]
  _QWORD v181[3]; // [rsp+220h] [rbp-F8h] BYREF
  _QWORD v182[3]; // [rsp+238h] [rbp-E0h] BYREF
  _QWORD v183[3]; // [rsp+250h] [rbp-C8h] BYREF
  char v184[8]; // [rsp+268h] [rbp-B0h] BYREF
  char s[24]; // [rsp+270h] [rbp-A8h] BYREF
  _BYTE v186[8]; // [rsp+288h] [rbp-90h]
  char v187[24]; // [rsp+290h] [rbp-88h] BYREF
  _BYTE v188[8]; // [rsp+2A8h] [rbp-70h]
  char v189[40]; // [rsp+2B0h] [rbp-68h] BYREF
  unsigned __int64 v190; // [rsp+2D8h] [rbp-40h]

  v190 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v172 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(v4 + 16);
  v6 = v4 + 8;
  if ( v5 )
  {
    v7 = v4 + 8;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v5 + 40);
        if ( !v10 )
          break;
        v8 = 7;
        if ( v10 <= 7 )
          v8 = *(_QWORD *)(v5 + 40);
        v9 = memcmp(*(const void **)(v5 + 32), (char *)&s2 + 8, v8);
        if ( v9 || (v9 = v10 - 7, (__int64)(v10 - 7) <= 0x7FFFFFFF) )
        {
          if ( v9 < 0 )
            break;
        }
        v7 = v5;
        v5 = *(_QWORD *)(v5 + 16);
        if ( !v5 )
          goto LABEL_12;
      }
      v5 = *(_QWORD *)(v5 + 24);
    }
    while ( v5 );
LABEL_12:
    if ( v6 != v7 )
    {
      v11 = *(_QWORD *)(v7 + 40);
      if ( v11 )
      {
        v12 = 7;
        if ( v11 <= 7 )
          v12 = *(_QWORD *)(v7 + 40);
        v13 = memcmp((char *)&s2 + 8, *(const void **)(v7 + 32), v12);
        if ( v13 || (v13 = 7 - v11, (__int64)(7 - v11) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v13 >= 0 )
            v6 = v7;
        }
      }
      else
      {
        v6 = v7;
      }
    }
  }
  v172 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v6 + 64) != 3 )
  {
    v2 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      v2,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      v2,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v14 = v172;
  v15 = __errno_location();
  *v15 = 0;
  v16 = v15;
  v17 = __isoc23_strtoull();
  if ( v14 == v146 || *v146 || *v16 == 34 && v17 == -1 )
  {
    if ( v172 != (char *)&s2 + 8 )
      operator delete(v172, *((_QWORD *)&s2 + 1) + 1LL);
    v18 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v18, "Invalid address");
    __cxa_throw(
      v18,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v172 != (char *)&s2 + 8 )
    operator delete(v172, *((_QWORD *)&s2 + 1) + 1LL);
  sourcefile = (const char *)get_sourcefile();
  if ( sourcefile )
  {
    *(_QWORD *)&v157 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v156 = 3;
    v20 = operator new(0x20u);
    *(_QWORD *)v20 = v20 + 16;
    strcpy((char *)(v20 + 16), "address");
    *(_QWORD *)(v20 + 8) = 7;
    v157 = (unsigned __int64)v20;
    qsnprintf();
    v147 = v149;
    v21 = strlen(s);
    v141 = v21;
    v22 = v21;
    if ( v21 > 0xF )
    {
      v73 = (_DWORD *)std::string::_M_create();
      v147 = v73;
      v149[0] = v141;
    }
    else
    {
      if ( v21 == 1 )
      {
        LOBYTE(v149[0]) = s[0];
        goto LABEL_34;
      }
      if ( !v21 )
      {
LABEL_34:
        v23 = v149;
        goto LABEL_35;
      }
      v73 = v149;
    }
    if ( v22 < 8 )
    {
      if ( (v22 & 4) != 0 )
      {
        *v73 = *(_DWORD *)s;
        *(_DWORD *)((char *)v73 + v22 - 4) = *(_DWORD *)&v184[v22 + 4];
      }
      else if ( v22 )
      {
        *(_BYTE *)v73 = s[0];
        if ( (v22 & 2) != 0 )
          *(_WORD *)((char *)v73 + v22 - 2) = *(_WORD *)&v184[v22 + 6];
      }
    }
    else
    {
      *(_QWORD *)v73 = *(_QWORD *)s;
      *(_QWORD *)((char *)v73 + v22 - 8) = *(_QWORD *)&v184[v22];
      v74 = (unsigned __int64)(v73 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v75 = (char *)v73 - v74;
      v76 = (char *)(s - v75);
      v77 = ((_DWORD)v75 + v22) & 0xFFFFFFF8;
      if ( v77 >= 8 )
      {
        v78 = v77 & 0xFFFFFFF8;
        v79 = 0;
        do
        {
          v80 = v79;
          v79 += 8;
          *(_QWORD *)(v74 + v80) = *(_QWORD *)&v76[v80];
        }
        while ( v79 < v78 );
      }
    }
    v21 = v141;
    v23 = v147;
LABEL_35:
    v148 = v21;
    *((_BYTE *)v23 + v21) = 0;
    v158 = 0;
    *(_QWORD *)&v159 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v158 = 3;
    v24 = (_QWORD *)operator new(0x20u);
    v25 = v147;
    v26 = v24 + 2;
    *v24 = v24 + 2;
    v27 = v148;
    if ( v25 == v149 )
    {
      v99 = v148 + 1;
      if ( (unsigned int)(v148 + 1) >= 8 )
      {
        v24[2] = v149[0];
        *(_QWORD *)((char *)v26 + v99 - 8) = *(_QWORD *)((char *)&v149[-1] + v99);
        v108 = (unsigned __int64)(v24 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v109 = (char *)v26 - v108;
        v110 = (char *)((char *)v149 - v109);
        if ( (((_DWORD)v109 + v99) & 0xFFFFFFF8) >= 8 )
        {
          v111 = ((_DWORD)v109 + v99) & 0xFFFFFFF8;
          v112 = 0;
          do
          {
            v113 = v112;
            v112 += 8;
            *(_QWORD *)(v108 + v113) = *(_QWORD *)&v110[v113];
          }
          while ( v112 < v111 );
        }
      }
      else if ( (v99 & 4) != 0 )
      {
        *((_DWORD *)v24 + 4) = v149[0];
        *(_DWORD *)((char *)v26 + v99 - 4) = *(_DWORD *)((char *)&v148 + v99 + 4);
      }
      else if ( (_DWORD)v148 != -1 )
      {
        *((_BYTE *)v24 + 16) = v149[0];
        if ( (v99 & 2) != 0 )
          *(_WORD *)((char *)v26 + v99 - 2) = *(_WORD *)((char *)&v148 + v99 + 6);
      }
    }
    else
    {
      *v24 = v25;
      v24[2] = v149[0];
    }
    v24[1] = v27;
    LOBYTE(v149[0]) = 0;
    v147 = v149;
    v148 = 0;
    v159 = (unsigned __int64)v24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v177,
      (const __m128i *)&v156);
    v178 = 0;
    v160 = 0;
    *(_QWORD *)&v161 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v160 = 3;
    v28 = operator new(0x20u);
    *(_QWORD *)v28 = v28 + 16;
    strcpy((char *)(v28 + 16), "source_file");
    *(_QWORD *)(v28 + 8) = 11;
    v162 = 0;
    *(_QWORD *)&v163 = 0;
    v161 = (unsigned __int64)v28;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v162 = 3;
    v29 = (__int64 *)operator new(0x20u);
    v30 = v29 + 2;
    v31 = v29;
    *v29 = (__int64)(v29 + 2);
    v32 = strlen(sourcefile);
    v142 = v32;
    v33 = v32;
    if ( v32 > 0xF )
    {
      v89 = std::string::_M_create();
      *v31 = v89;
      v30 = (void *)v89;
      v31[2] = v142;
    }
    else
    {
      if ( v32 == 1 )
      {
        *((_BYTE *)v31 + 16) = *sourcefile;
        goto LABEL_40;
      }
      if ( !v32 )
        goto LABEL_40;
    }
    memcpy(v30, sourcefile, v33);
    v32 = v142;
    v30 = (void *)*v31;
LABEL_40:
    v31[1] = v32;
    *((_BYTE *)v30 + v32) = 0;
    v163 = (unsigned __int64)v31;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v179,
      (const __m128i *)&v160);
    v180 = 0;
    LOBYTE(v164) = 0;
    *(_QWORD *)&v165 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v164) = 3;
    v34 = operator new(0x20u);
    *(_QWORD *)v34 = v34 + 16;
    strcpy((char *)(v34 + 16), "range_start");
    *(_QWORD *)(v34 + 8) = 11;
    v165 = (unsigned __int64)v34;
    qsnprintf();
    v150 = v152;
    v35 = strlen(v187);
    v143 = v35;
    v36 = v35;
    if ( v35 > 0xF )
    {
      v90 = (_DWORD *)std::string::_M_create();
      v150 = v90;
      v152[0] = v143;
    }
    else
    {
      if ( v35 == 1 )
      {
        LOBYTE(v152[0]) = v187[0];
        goto LABEL_43;
      }
      if ( !v35 )
      {
LABEL_43:
        v37 = v152;
        goto LABEL_44;
      }
      v90 = v152;
    }
    if ( v36 < 8 )
    {
      if ( (v36 & 4) != 0 )
      {
        *v90 = *(_DWORD *)v187;
        *(_DWORD *)((char *)v90 + v36 - 4) = *(_DWORD *)&v186[v36 + 4];
      }
      else if ( v36 )
      {
        *(_BYTE *)v90 = v187[0];
        if ( (v36 & 2) != 0 )
          *(_WORD *)((char *)v90 + v36 - 2) = *(_WORD *)&v186[v36 + 6];
      }
    }
    else
    {
      *(_QWORD *)v90 = *(_QWORD *)v187;
      *(_QWORD *)((char *)v90 + v36 - 8) = *(_QWORD *)&v186[v36];
      v91 = (unsigned __int64)(v90 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v92 = (char *)v90 - v91;
      v93 = (char *)(v187 - v92);
      v94 = ((_DWORD)v92 + v36) & 0xFFFFFFF8;
      if ( v94 >= 8 )
      {
        v95 = v94 & 0xFFFFFFF8;
        v96 = 0;
        do
        {
          v97 = v96;
          v96 += 8;
          *(_QWORD *)(v91 + v97) = *(_QWORD *)&v93[v97];
        }
        while ( v96 < v95 );
      }
    }
    v35 = v143;
    v37 = v150;
LABEL_44:
    v151 = v35;
    *((_BYTE *)v37 + v35) = 0;
    v166 = 0;
    *(_QWORD *)&v167 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v166 = 3;
    v38 = (_QWORD *)operator new(0x20u);
    v39 = v150;
    v40 = v38 + 2;
    v41 = v151;
    *v38 = v38 + 2;
    if ( v39 == v152 )
    {
      v100 = v41 + 1;
      if ( (unsigned int)(v41 + 1) >= 8 )
      {
        v38[2] = v152[0];
        *(_QWORD *)((char *)v40 + v100 - 8) = *(_QWORD *)((char *)&v152[-1] + v100);
        v102 = (unsigned __int64)(v38 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v103 = (char *)v40 - v102;
        v104 = (char *)((char *)v152 - v103);
        if ( (((_DWORD)v103 + v100) & 0xFFFFFFF8) >= 8 )
        {
          v105 = ((_DWORD)v103 + v100) & 0xFFFFFFF8;
          v106 = 0;
          do
          {
            v107 = v106;
            v106 += 8;
            *(_QWORD *)(v102 + v107) = *(_QWORD *)&v104[v107];
          }
          while ( v106 < v105 );
        }
      }
      else if ( (v100 & 4) != 0 )
      {
        *((_DWORD *)v38 + 4) = v152[0];
        *(_DWORD *)((char *)v40 + v100 - 4) = *(_DWORD *)((char *)&v151 + v100 + 4);
      }
      else if ( (_DWORD)v41 != -1 )
      {
        *((_BYTE *)v38 + 16) = v152[0];
        if ( (v100 & 2) != 0 )
          *(_WORD *)((char *)v40 + v100 - 2) = *(_WORD *)((char *)&v151 + v100 + 6);
      }
    }
    else
    {
      *v38 = v39;
      v38[2] = v152[0];
    }
    v38[1] = v41;
    v150 = v152;
    v151 = 0;
    LOBYTE(v152[0]) = 0;
    v167 = (unsigned __int64)v38;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v181,
      (const __m128i *)&v164);
    v181[2] = 0;
    v168 = 0;
    *(_QWORD *)&v169 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v168 = 3;
    v42 = operator new(0x20u);
    *(_QWORD *)v42 = v42 + 16;
    strcpy((char *)(v42 + 16), "range_end");
    *(_QWORD *)(v42 + 8) = 9;
    v169 = (unsigned __int64)v42;
    qsnprintf();
    v153 = v155;
    v43 = strlen(v189);
    v144 = v43;
    v44 = v43;
    if ( v43 > 0xF )
    {
      v81 = (_DWORD *)std::string::_M_create();
      v153 = v81;
      v155[0] = v144;
    }
    else
    {
      if ( v43 == 1 )
      {
        LOBYTE(v155[0]) = v189[0];
        goto LABEL_49;
      }
      if ( !v43 )
      {
LABEL_49:
        v45 = v155;
LABEL_50:
        v154 = v43;
        *((_BYTE *)v45 + v43) = 0;
        v170 = 0;
        *(_QWORD *)&v171 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v170 = 3;
        v46 = (_QWORD *)operator new(0x20u);
        v47 = v153;
        v48 = v46 + 2;
        v49 = v154;
        *v46 = v46 + 2;
        if ( v47 == v155 )
        {
          v98 = v49 + 1;
          if ( (unsigned int)(v49 + 1) >= 8 )
          {
            v46[2] = v155[0];
            *(_QWORD *)((char *)v48 + v98 - 8) = *(_QWORD *)((char *)&v155[-1] + v98);
            v114 = (unsigned __int64)(v46 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v115 = (char *)v48 - v114;
            v116 = (char *)((char *)v155 - v115);
            if ( (((_DWORD)v115 + v98) & 0xFFFFFFF8) >= 8 )
            {
              v117 = ((_DWORD)v115 + v98) & 0xFFFFFFF8;
              v118 = 0;
              do
              {
                v119 = v118;
                v118 += 8;
                *(_QWORD *)(v114 + v119) = *(_QWORD *)&v116[v119];
              }
              while ( v118 < v117 );
            }
          }
          else if ( (v98 & 4) != 0 )
          {
            *((_DWORD *)v46 + 4) = v155[0];
            *(_DWORD *)((char *)v48 + v98 - 4) = *(_DWORD *)((char *)&v154 + v98 + 4);
          }
          else if ( (_DWORD)v49 != -1 )
          {
            *((_BYTE *)v46 + 16) = v155[0];
            if ( (v98 & 2) != 0 )
              *(_WORD *)((char *)v48 + v98 - 2) = *(_WORD *)((char *)&v154 + v98 + 6);
          }
        }
        else
        {
          *v46 = v47;
          v46[2] = v155[0];
        }
        v46[1] = v49;
        v153 = v155;
        v154 = 0;
        LOBYTE(v155[0]) = 0;
        v171 = (unsigned __int64)v46;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v182,
          (const __m128i *)&v168);
        v182[2] = 0;
        LOBYTE(v172) = 0;
        *(_QWORD *)&s2 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        LOBYTE(v172) = 3;
        v50 = operator new(0x20u);
        *(_BYTE *)(v50 + 20) = 100;
        *(_QWORD *)v50 = v50 + 16;
        *(_DWORD *)(v50 + 16) = 1853189990;
        *(_QWORD *)(v50 + 8) = 5;
        *(_BYTE *)(v50 + 21) = 0;
        v174 = 4;
        v175 = 1;
        v176 = 0;
        s2 = (unsigned __int64)v50;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v183,
          (const __m128i *)&v172);
        v183[2] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          a1,
          (__int64)&v177,
          5,
          v51,
          v52,
          v53,
          (int)v149,
          (__int64)a1,
          (int)&v169,
          (int)&v157,
          (int)&v159,
          (int)&v161,
          (__int64)&v163,
          (int)&v165,
          (int)&v167,
          (int)&v164,
          (int)&v168,
          (char)&v147,
          (__int64)&v150,
          (int)&v153,
          (__int64)&v156);
        v54 = (__m128i *)v184;
        do
        {
          v54 = (__m128i *)((char *)v54 - 24);
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v54 != &v177 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v153 != v155 )
          operator delete(v153, v155[0] + 1LL);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v150 != v152 )
          operator delete(v150, v152[0] + 1LL);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( v147 != v135 )
          operator delete(v147, v149[0] + 1LL);
        return v138;
      }
      v81 = v155;
    }
    if ( v44 < 8 )
    {
      if ( (v44 & 4) != 0 )
      {
        *v81 = *(_DWORD *)v189;
        *(_DWORD *)((char *)v81 + v44 - 4) = *(_DWORD *)&v188[v44 + 4];
      }
      else if ( v44 )
      {
        *(_BYTE *)v81 = v189[0];
        if ( (v44 & 2) != 0 )
          *(_WORD *)((char *)v81 + v44 - 2) = *(_WORD *)&v188[v44 + 6];
      }
    }
    else
    {
      *(_QWORD *)v81 = *(_QWORD *)v189;
      *(_QWORD *)((char *)v81 + v44 - 8) = *(_QWORD *)&v188[v44];
      v82 = (unsigned __int64)(v81 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v83 = (char *)v81 - v82;
      v84 = (char *)(v189 - v83);
      v85 = ((_DWORD)v83 + v44) & 0xFFFFFFF8;
      if ( v85 >= 8 )
      {
        v86 = v85 & 0xFFFFFFF8;
        v87 = 0;
        do
        {
          v88 = v87;
          v87 += 8;
          *(_QWORD *)(v82 + v88) = *(_QWORD *)&v84[v88];
        }
        while ( v87 < v86 );
      }
    }
    v43 = v144;
    v45 = v153;
    goto LABEL_50;
  }
  *(_QWORD *)&v169 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v168 = 3;
  v56 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v56, "address", v57, v58, v59, v60, v134, (int)a1, (__int64)&v169);
  v169 = (unsigned __int64)v56;
  qsnprintf();
  v164 = (char *)&v165 + 8;
  v61 = strlen(v189);
  v145 = v61;
  v62 = v61;
  if ( v61 > 0xF )
  {
    v101 = (_QWORD *)std::string::_M_create();
    v164 = v101;
    *((_QWORD *)&v165 + 1) = v145;
LABEL_123:
    if ( v62 >= 8 )
    {
      *v101 = *(_QWORD *)v189;
      *(_QWORD *)((char *)v101 + v62 - 8) = *(_QWORD *)&v188[v62];
      v121 = (unsigned __int64)(v101 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v122 = (char *)v101 - v121;
      v123 = (char *)(v189 - v122);
      v124 = ((_DWORD)v122 + v62) & 0xFFFFFFF8;
      if ( v124 >= 8 )
      {
        v125 = v124 & 0xFFFFFFF8;
        v126 = 0;
        do
        {
          v127 = v126;
          v126 += 8;
          *(_QWORD *)(v121 + v127) = *(_QWORD *)&v123[v127];
        }
        while ( v126 < v125 );
      }
    }
    else if ( (v62 & 4) != 0 )
    {
      *(_DWORD *)v101 = *(_DWORD *)v189;
      *(_DWORD *)((char *)v101 + v62 - 4) = *(_DWORD *)&v188[v62 + 4];
    }
    else if ( v62 )
    {
      *(_BYTE *)v101 = v189[0];
      if ( (v62 & 2) != 0 )
        *(_WORD *)((char *)v101 + v62 - 2) = *(_WORD *)&v188[v62 + 6];
    }
    v61 = v145;
    v63 = (char *)v164;
    goto LABEL_66;
  }
  if ( v61 == 1 )
  {
    BYTE8(v165) = v189[0];
    goto LABEL_65;
  }
  if ( v61 )
  {
    v101 = (_QWORD *)&v165 + 1;
    goto LABEL_123;
  }
LABEL_65:
  v63 = (char *)&v165 + 8;
LABEL_66:
  *(_QWORD *)&v165 = v61;
  v63[v61] = 0;
  v170 = 0;
  *(_QWORD *)&v171 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v170 = 3;
  v64 = (_QWORD *)operator new(0x20u);
  v65 = v164;
  v66 = v64 + 2;
  v67 = v165;
  *v64 = v64 + 2;
  if ( v65 == (__int128 *)((char *)&v165 + 8) )
  {
    v120 = v67 + 1;
    if ( (unsigned int)(v67 + 1) >= 8 )
    {
      v64[2] = *((_QWORD *)&v165 + 1);
      *(_QWORD *)((char *)v66 + v120 - 8) = *(_QWORD *)((char *)&v165 + v120);
      v128 = (unsigned __int64)(v64 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v129 = (char *)v66 - v128;
      v130 = (char *)((char *)&v165 + 8 - v129);
      if ( (((_DWORD)v129 + v120) & 0xFFFFFFF8) >= 8 )
      {
        v131 = ((_DWORD)v129 + v120) & 0xFFFFFFF8;
        v132 = 0;
        do
        {
          v133 = v132;
          v132 += 8;
          *(_QWORD *)(v128 + v133) = *(_QWORD *)&v130[v133];
        }
        while ( v132 < v131 );
      }
    }
    else if ( (v120 & 4) != 0 )
    {
      *((_DWORD *)v64 + 4) = DWORD2(v165);
      *(_DWORD *)((char *)v66 + v120 - 4) = *(_DWORD *)((char *)&v165 + v120 + 4);
    }
    else if ( (_DWORD)v67 != -1 )
    {
      *((_BYTE *)v64 + 16) = BYTE8(v165);
      if ( (v120 & 2) != 0 )
        *(_WORD *)((char *)v66 + v120 - 2) = *(_WORD *)((char *)&v165 + v120 + 6);
    }
  }
  else
  {
    *v64 = v65;
    v64[2] = *((_QWORD *)&v165 + 1);
  }
  v64[1] = v67;
  v164 = (char *)&v165 + 8;
  *(_QWORD *)&v165 = 0;
  BYTE8(v165) = 0;
  v171 = (unsigned __int64)v64;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v177,
    (const __m128i *)&v168);
  v178 = 0;
  LOBYTE(v172) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v172) = 3;
  v68 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v68, "found", v69, v70, v71, v72, v136, v139, v140);
  v174 = 4;
  s2 = (unsigned __int64)v68;
  v175 = 0;
  v176 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v179,
    (const __m128i *)&v172);
  v180 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v138,
    &v177);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v164 != (char *)&v165 + 8 )
    operator delete(v164, *((_QWORD *)&v165 + 1) + 1LL);
  return v138;
}

