__int64 __fastcall ida_mcp::tools::problems::`anonymous namespace'::handle_get_problems_at_address(_QWORD *a1)
{
  char v1; // al
  const char *v2; // rbx
  int *v3; // rax
  int *v4; // r12
  std::runtime_error *exception; // rbx
  __int64 v6; // rbx
  __int64 v7; // r13
  char v8; // si
  __int64 v9; // rax
  __int64 problem_name; // rax
  const char *v11; // r15
  __int64 *v12; // rax
  __int64 *v13; // r12
  size_t v14; // rax
  void *v15; // rcx
  size_t v16; // r8
  __int64 v17; // r15
  char v18; // si
  __int64 v19; // rax
  const char *v20; // r15
  __int64 *v21; // rax
  __int64 *v22; // r12
  size_t v23; // rax
  void *v24; // rcx
  size_t v25; // r8
  __int64 v26; // r15
  char v27; // si
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  _QWORD *v40; // rdx
  _QWORD *v41; // rcx
  __int64 v42; // rsi
  __int64 *v43; // rbp
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 *v49; // rbp
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  void **v57; // rbp
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // edx
  unsigned __int64 v62; // rdi
  char *v63; // rcx
  char *v64; // r8
  unsigned int v65; // edx
  unsigned int v66; // edx
  unsigned int v67; // ecx
  __int64 v68; // r9
  __int64 v69; // [rsp+0h] [rbp-218h]
  int v70; // [rsp+0h] [rbp-218h]
  int v71; // [rsp+0h] [rbp-218h]
  int v72; // [rsp+0h] [rbp-218h]
  __int64 *v73; // [rsp+8h] [rbp-210h]
  int v74; // [rsp+8h] [rbp-210h]
  int v75; // [rsp+8h] [rbp-210h]
  __int64 v76; // [rsp+8h] [rbp-210h]
  __int64 v77; // [rsp+10h] [rbp-208h]
  __int64 v78; // [rsp+10h] [rbp-208h]
  int v79; // [rsp+10h] [rbp-208h]
  void *dest; // [rsp+18h] [rbp-200h]
  void *desta; // [rsp+18h] [rbp-200h]
  void *destb; // [rsp+18h] [rbp-200h]
  _QWORD *v83; // [rsp+20h] [rbp-1F8h]
  __int64 v85; // [rsp+38h] [rbp-1E0h]
  int v86; // [rsp+48h] [rbp-1D0h]
  char v87; // [rsp+4Eh] [rbp-1CAh]
  int v88; // [rsp+50h] [rbp-1C8h]
  size_t v89; // [rsp+58h] [rbp-1C0h]
  size_t v90; // [rsp+58h] [rbp-1C0h]
  __int64 v91; // [rsp+60h] [rbp-1B8h] BYREF
  _QWORD *v92; // [rsp+68h] [rbp-1B0h]
  __int64 v93[2]; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v94; // [rsp+80h] [rbp-198h]
  __int64 v95; // [rsp+88h] [rbp-190h]
  const char *v96; // [rsp+90h] [rbp-188h] BYREF
  __int128 v97; // [rsp+98h] [rbp-180h]
  void *v98; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v99; // [rsp+B8h] [rbp-160h]
  _QWORD v100[2]; // [rsp+C0h] [rbp-158h] BYREF
  char v101; // [rsp+D0h] [rbp-148h] BYREF
  __int128 v102; // [rsp+D8h] [rbp-140h]
  char v103; // [rsp+E8h] [rbp-130h]
  __int128 v104; // [rsp+F0h] [rbp-128h] BYREF
  char v105; // [rsp+100h] [rbp-118h] BYREF
  __int128 v106; // [rsp+108h] [rbp-110h]
  char v107; // [rsp+118h] [rbp-100h]
  __int64 v108; // [rsp+120h] [rbp-F8h]
  __int64 v109; // [rsp+128h] [rbp-F0h]
  void *v110; // [rsp+130h] [rbp-E8h] BYREF
  __int128 v111; // [rsp+138h] [rbp-E0h] BYREF
  __int64 v112; // [rsp+158h] [rbp-C0h]
  void *v113; // [rsp+160h] [rbp-B8h] BYREF
  __int64 v114; // [rsp+168h] [rbp-B0h]
  _QWORD v115[4]; // [rsp+170h] [rbp-A8h] BYREF
  _QWORD v116[3]; // [rsp+190h] [rbp-88h] BYREF
  char v117; // [rsp+1A8h] [rbp-70h] BYREF
  char v118[40]; // [rsp+1B0h] [rbp-68h] BYREF
  unsigned __int64 v119; // [rsp+1D8h] [rbp-40h]

  v119 = __readfsqword(0x28u);
  BYTE8(v111) = 0;
  v110 = (char *)&v111 + 8;
  v1 = *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_QWORD *)&v111 = 0;
  if ( v1 != 3 )
    JUMPOUT(0xB8285);
  std::string::_M_assign();
  v2 = (const char *)v110;
  v3 = __errno_location();
  *v3 = 0;
  v4 = v3;
  v69 = __isoc23_strtoull();
  if ( v2 == v96 || *v96 || *v4 == 34 && v69 == -1 )
  {
    if ( v110 != (char *)&v111 + 8 )
      operator delete(v110, *((_QWORD *)&v111 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v110 != (char *)&v111 + 8 )
    operator delete(v110, *((_QWORD *)&v111 + 1) + 1LL);
  v6 = 1;
  LOBYTE(v91) = 0;
  v92 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v87 = 0;
  v83 = nullptr;
  do
  {
    while ( !(unsigned __int8)is_problem_present() )
    {
      if ( ++v6 == 17 )
        goto LABEL_36;
    }
    v96 = nullptr;
    v97 = 0;
    get_problem_desc();
    strcpy((char *)v115, "type");
    v113 = v115;
    v114 = 4;
    v93[0] = 0;
    v93[1] = 0;
    v73 = v93;
    v7 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]();
    if ( v113 != v115 )
      operator delete(v113, v115[0] + 1LL);
    v8 = *(_BYTE *)v7;
    v9 = *(_QWORD *)(v7 + 8);
    *(_BYTE *)v7 = 5;
    *(_QWORD *)(v7 + 8) = v6;
    LOBYTE(v94) = v8;
    v95 = v9;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    problem_name = get_problem_name();
    v94 = 0;
    v11 = (const char *)problem_name;
    v95 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v12 = (__int64 *)operator new(0x20u);
    v13 = v12;
    *v12 = (__int64)(v12 + 2);
    if ( !v11 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    desta = v12 + 2;
    v14 = strlen(v11);
    v15 = desta;
    v90 = v14;
    v16 = v14;
    if ( v14 > 0xF )
    {
      destb = (void *)v14;
      v60 = std::string::_M_create();
      *v13 = v60;
      v15 = (void *)v60;
      v16 = (size_t)destb;
      v13[2] = v90;
LABEL_52:
      memcpy(v15, v11, v16);
      v14 = v90;
      v15 = (void *)*v13;
      goto LABEL_20;
    }
    if ( v14 == 1 )
    {
      *((_BYTE *)v13 + 16) = *v11;
      goto LABEL_20;
    }
    if ( v14 )
      goto LABEL_52;
LABEL_20:
    v13[1] = v14;
    *((_BYTE *)v15 + v14) = 0;
    v113 = v115;
    strcpy((char *)v115, "type_name");
    v114 = 9;
    v17 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]();
    if ( v113 != v115 )
      operator delete(v113, v115[0] + 1LL);
    v18 = *(_BYTE *)v17;
    v19 = *(_QWORD *)(v17 + 8);
    *(_BYTE *)v17 = 3;
    *(_QWORD *)(v17 + 8) = v13;
    LOBYTE(v94) = v18;
    v95 = v19;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( (_QWORD)v97 )
      v20 = v96;
    else
      v20 = _qstring<char>::c_str(void)const::nullstr;
    v94 = 0;
    v95 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v21 = (__int64 *)operator new(0x20u);
    v22 = v21;
    *v21 = (__int64)(v21 + 2);
    if ( !v20 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    dest = v21 + 2;
    v23 = strlen(v20);
    v24 = dest;
    v89 = v23;
    v25 = v23;
    if ( v23 > 0xF )
    {
      dest = (void *)v23;
      v59 = std::string::_M_create();
      *v22 = v59;
      v24 = (void *)v59;
      v25 = (size_t)dest;
      v22[2] = v89;
    }
    else
    {
      if ( v23 == 1 )
      {
        *((_BYTE *)v22 + 16) = *v20;
        goto LABEL_28;
      }
      if ( !v23 )
        goto LABEL_28;
    }
    memcpy(v24, v20, v25);
    v23 = v89;
    v24 = (void *)*v22;
LABEL_28:
    v22[1] = v23;
    *((_BYTE *)v24 + v23) = 0;
    strcpy((char *)v115, "description");
    v113 = v115;
    v114 = 11;
    v26 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]();
    if ( v113 != v115 )
      operator delete(v113, v115[0] + 1LL);
    v27 = *(_BYTE *)v26;
    v28 = *(_QWORD *)(v26 + 8);
    *(_BYTE *)v26 = 3;
    *(_QWORD *)(v26 + 8) = v22;
    LOBYTE(v94) = v27;
    v95 = v28;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( !v87 )
    {
      v29 = operator new(0x18u);
      *(_QWORD *)(v29 + 16) = 0;
      v83 = (_QWORD *)v29;
      *(_OWORD *)v29 = 0;
LABEL_32:
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
      goto LABEL_33;
    }
    if ( v83[1] == v83[2] )
      goto LABEL_32;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v83[1] += 16LL;
LABEL_33:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v96 )
    {
      *(_QWORD *)&v97 = 0;
      qfree();
    }
    ++v6;
    v87 = 2;
  }
  while ( v6 != 17 );
LABEL_36:
  v101 = 0;
  *(_QWORD *)&v102 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v101 = 3;
  v30 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v30, "address", v31, v32, v33, v34, v69, (int)v73, (__int64)&v113);
  v102 = (unsigned __int64)v30;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v98, v118, v35, v36, v37, v38, v70, v74, (__int64)&v98);
  v103 = 0;
  *(_QWORD *)&v104 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v103 = 3;
  v39 = (_QWORD *)operator new(0x20u);
  v40 = v98;
  v41 = v39 + 2;
  v42 = v99;
  *v39 = v39 + 2;
  if ( v40 == v100 )
  {
    v61 = v42 + 1;
    if ( (unsigned int)(v42 + 1) >= 8 )
    {
      v39[2] = v100[0];
      *(_QWORD *)((char *)v41 + v61 - 8) = *(_QWORD *)((char *)&v100[-1] + v61);
      v62 = (unsigned __int64)(v39 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v63 = (char *)v41 - v62;
      v64 = (char *)((char *)v100 - v63);
      v65 = ((_DWORD)v63 + v61) & 0xFFFFFFF8;
      if ( v65 >= 8 )
      {
        v66 = v65 & 0xFFFFFFF8;
        v67 = 0;
        do
        {
          v68 = v67;
          v67 += 8;
          *(_QWORD *)(v62 + v68) = *(_QWORD *)&v64[v68];
        }
        while ( v67 < v66 );
      }
    }
    else if ( (v61 & 4) != 0 )
    {
      *((_DWORD *)v39 + 4) = v100[0];
      *(_DWORD *)((char *)v41 + v61 - 4) = *(_DWORD *)((char *)&v99 + v61 + 4);
    }
    else if ( (_DWORD)v42 != -1 )
    {
      *((_BYTE *)v39 + 16) = v100[0];
      if ( (v61 & 2) != 0 )
        *(_WORD *)((char *)v41 + v61 - 2) = *(_WORD *)((char *)&v99 + v61 + 6);
    }
  }
  else
  {
    *v39 = v40;
    v39[2] = v100[0];
  }
  v39[1] = v42;
  v98 = v100;
  v99 = 0;
  LOBYTE(v100[0]) = 0;
  v104 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v113,
    (const __m128i *)&v101);
  v115[0] = 0;
  v105 = 0;
  *(_QWORD *)&v106 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v105 = 3;
  v43 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v43, "problem_count", v44, v45, v46, v47, (int)&v104, (int)&v101, v77);
  v106 = (unsigned __int64)v43;
  if ( v87 == 2 )
    v48 = (__int64)(v83[1] - *v83) >> 4;
  else
    v48 = v87 != 0;
  v107 = 6;
  v108 = v48;
  v109 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v115[1],
    (const __m128i *)&v105);
  v115[3] = 0;
  LOBYTE(v110) = 0;
  *(_QWORD *)&v111 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v110) = 3;
  v49 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v49, "problems", v50, v51, v52, v53, v71, v75, v78);
  v111 = (unsigned __int64)v49;
  LOBYTE(v91) = v87;
  v92 = v83;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v112 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v116,
    (const __m128i *)&v110);
  v116[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)&v113,
    3,
    v54,
    v55,
    v56,
    v72,
    v76,
    v79,
    (int)dest,
    (int)v83,
    (int)&v96,
    (__int64)&v110,
    (int)a1,
    (int)&v91,
    v86,
    v88,
    v89,
    v91,
    (int)v92,
    v93[0]);
  v57 = (void **)&v117;
  do
  {
    v57 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v57 != &v113 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v98 != v100 )
    operator delete(v98, v100[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v85;
}

