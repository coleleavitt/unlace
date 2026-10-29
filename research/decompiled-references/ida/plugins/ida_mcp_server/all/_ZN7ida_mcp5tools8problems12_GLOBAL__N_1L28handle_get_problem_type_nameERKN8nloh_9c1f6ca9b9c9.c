__int64 __fastcall ida_mcp::tools::problems::`anonymous namespace'::handle_get_problem_type_name(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        char a10,
        int a11,
        int a12,
        char a13,
        char a14,
        int a15,
        char a16,
        int a17,
        int a18,
        char a19,
        char a20,
        int a21,
        char a22,
        int a23,
        int a24,
        char a25,
        int a26,
        int a27,
        __int64 a28,
        __int64 a29,
        char a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        __int64 a37)
{
  __int64 v37; // rdx
  __int64 v38; // r15
  __int64 v39; // r12
  _QWORD *v40; // rbp
  _QWORD *v41; // rbx
  size_t v42; // rdx
  int v43; // eax
  unsigned __int64 v44; // r13
  unsigned __int64 v45; // rbx
  size_t v46; // rdx
  int v47; // eax
  unsigned __int8 v48; // al
  int v49; // ebx
  __int64 v50; // rbp
  size_t v51; // rdx
  int v52; // eax
  unsigned __int64 v53; // r14
  unsigned __int64 v54; // r14
  size_t v55; // rdx
  int v56; // eax
  unsigned __int8 v57; // r14
  __int64 *v58; // rbp
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 *v63; // rbp
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 *v68; // rbp
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 *v73; // rbp
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  unsigned __int64 *v81; // rbp
  _BYTE *v83; // rax
  int v84; // [rsp+0h] [rbp-138h]
  int v85; // [rsp+0h] [rbp-138h]
  int v86; // [rsp+0h] [rbp-138h]
  int v87; // [rsp+0h] [rbp-138h]
  _QWORD *v88; // [rsp+0h] [rbp-138h]
  __int64 v89; // [rsp+0h] [rbp-138h]
  int problem_name; // [rsp+8h] [rbp-130h]
  int v91; // [rsp+8h] [rbp-130h]
  int v92; // [rsp+8h] [rbp-130h]
  const char *v93; // [rsp+8h] [rbp-130h]
  __int64 v94; // [rsp+8h] [rbp-130h]
  __int64 v95; // [rsp+10h] [rbp-128h]
  __int64 v96; // [rsp+10h] [rbp-128h]
  __int64 v97; // [rsp+10h] [rbp-128h]
  __int64 v98; // [rsp+10h] [rbp-128h]
  int v99; // [rsp+10h] [rbp-128h]
  int v100; // [rsp+18h] [rbp-120h]
  int v101; // [rsp+20h] [rbp-118h] BYREF
  __int128 v102; // [rsp+28h] [rbp-110h]
  int v103; // [rsp+38h] [rbp-100h]
  __int64 v104; // [rsp+40h] [rbp-F8h]
  __int64 v105; // [rsp+48h] [rbp-F0h]
  int v106; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v107; // [rsp+58h] [rbp-E0h]
  int v108; // [rsp+68h] [rbp-D0h]
  __int64 v109; // [rsp+70h] [rbp-C8h]
  __int64 v110; // [rsp+78h] [rbp-C0h]
  char *v111; // [rsp+80h] [rbp-B8h] BYREF
  __int128 s2; // [rsp+88h] [rbp-B0h] BYREF
  char v113[8]; // [rsp+98h] [rbp-A0h] BYREF
  __int128 v114; // [rsp+A0h] [rbp-98h]
  _QWORD v115[3]; // [rsp+B0h] [rbp-88h] BYREF
  _QWORD v116[3]; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v117[3]; // [rsp+E0h] [rbp-58h] BYREF
  unsigned __int64 v118; // [rsp+F8h] [rbp-40h] BYREF

  v84 = (int)a1;
  v118 = __readfsqword(0x28u);
  *((_QWORD *)&s2 + 1) = 0x5F6D656C626F7270LL;
  strcpy(v113, "type");
  *(_QWORD *)&s2 = 12;
  v111 = (char *)&s2 + 8;
  if ( *a2 != 1 )
    JUMPOUT(0xB8C9E);
  v37 = *((_QWORD *)a2 + 1);
  v38 = *(_QWORD *)(v37 + 16);
  v39 = v37 + 8;
  v40 = (_QWORD *)(v37 + 8);
  v41 = (_QWORD *)v38;
  if ( v38 )
  {
    do
    {
      while ( 1 )
      {
        v44 = v41[5];
        if ( !v44 )
          break;
        v42 = 12;
        a1 = (char *)v41[4];
        a2 = (char *)&s2 + 8;
        if ( v44 <= 0xC )
          v42 = v41[5];
        v43 = memcmp(a1, (char *)&s2 + 8, v42);
        if ( v43 || (v43 = v44 - 12, (__int64)(v44 - 12) <= 0x7FFFFFFF) )
        {
          if ( v43 < 0 )
            break;
        }
        v40 = v41;
        v41 = (_QWORD *)v41[2];
        if ( !v41 )
          goto LABEL_12;
      }
      v41 = (_QWORD *)v41[3];
    }
    while ( v41 );
LABEL_12:
    if ( (_QWORD *)v39 != v40 )
    {
      v45 = v40[5];
      if ( v45 )
      {
        v46 = 12;
        a2 = (char *)v40[4];
        a1 = (char *)&s2 + 8;
        if ( v45 <= 0xC )
          v46 = v40[5];
        v47 = memcmp((char *)&s2 + 8, a2, v46);
        if ( v47 || (v47 = 12 - v45, (__int64)(12 - v45) >= (__int64)0xFFFFFFFF80000000LL) )
        {
          if ( v47 < 0 )
            v40 = (_QWORD *)v39;
        }
        else
        {
          v40 = (_QWORD *)v39;
        }
      }
    }
    v48 = *((_BYTE *)v40 + 64);
    if ( v48 == 6 )
    {
      LOBYTE(v49) = v40[9];
      if ( (unsigned __int8)(v49 - 1) > 0xFu )
        goto LABEL_63;
      goto LABEL_26;
    }
  }
  else
  {
    v48 = *(_BYTE *)(v37 + 72);
    if ( v48 == 6 )
    {
      LOBYTE(v49) = *(_QWORD *)(v37 + 80);
      if ( (unsigned __int8)(v49 - 1) > 0xFu )
        goto LABEL_63;
      goto LABEL_42;
    }
  }
  if ( v48 > 6u )
  {
    if ( v48 != 7 )
      goto LABEL_47;
    v49 = (int)*((double *)v40 + 9);
  }
  else
  {
    if ( v48 != 4 && v48 != 5 )
LABEL_47:
      ida_mcp::tools::problems::`anonymous namespace'::handle_get_problem_type_name(
        (__int64)a1,
        (__int64)a2,
        v37,
        a4,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        a14,
        a15,
        a16,
        a17,
        a18,
        a19,
        a20,
        a21,
        a22,
        a23,
        a24,
        a25,
        a26,
        a27,
        a28,
        a29,
        a30,
        a31,
        a32,
        a33,
        a34,
        a35,
        a36,
        a37);
    LOBYTE(v49) = *((_BYTE *)v40 + 72);
  }
  if ( (unsigned __int8)(v49 - 1) > 0xFu )
LABEL_63:
    JUMPOUT(0xB8C55);
  if ( !v38 )
    goto LABEL_42;
LABEL_26:
  v50 = v39;
  do
  {
    while ( 1 )
    {
      v53 = *(_QWORD *)(v38 + 40);
      if ( !v53 )
        break;
      v51 = 9;
      if ( v53 <= 9 )
        v51 = *(_QWORD *)(v38 + 40);
      v52 = memcmp(*(const void **)(v38 + 32), "long_name", v51);
      if ( v52 || (v52 = v53 - 9, (__int64)(v53 - 9) <= 0x7FFFFFFF) )
      {
        if ( v52 < 0 )
          break;
      }
      v50 = v38;
      v38 = *(_QWORD *)(v38 + 16);
      if ( !v38 )
        goto LABEL_35;
    }
    v38 = *(_QWORD *)(v38 + 24);
  }
  while ( v38 );
LABEL_35:
  if ( v39 == v50 )
    goto LABEL_42;
  v54 = *(_QWORD *)(v50 + 40);
  if ( v54 )
  {
    v55 = 9;
    if ( v54 <= 9 )
      v55 = *(_QWORD *)(v50 + 40);
    v56 = memcmp(*(const void **)(v50 + 32), "long_name", v55);
    if ( !v56 )
    {
      v56 = v54 - 9;
      if ( (__int64)(v54 - 9) > 0x7FFFFFFF )
        goto LABEL_42;
    }
    if ( v56 > 0 )
      goto LABEL_42;
  }
  if ( !*(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
  {
LABEL_42:
    v57 = 1;
    goto LABEL_43;
  }
  v83 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  if ( *v83 != 4 )
    JUMPOUT(0xB892C);
  v57 = v83[8];
LABEL_43:
  problem_name = get_problem_name();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v101) = 3;
  v58 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v58, "problem_type", v59, v60, v61, v62, v84, problem_name, v95);
  v104 = (unsigned __int8)v49;
  LOBYTE(v103) = 5;
  v105 = 0;
  v102 = (unsigned __int64)v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v115,
    (const __m128i *)&v101);
  LOBYTE(v106) = 0;
  v115[2] = 0;
  *(_QWORD *)&v107 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v106) = 3;
  v63 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v63, "long_name", v64, v65, v66, v67, v85, v91, v96);
  LOBYTE(v108) = 4;
  v109 = v57;
  v110 = 0;
  v107 = (unsigned __int64)v63;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v116,
    (const __m128i *)&v106);
  v116[2] = 0;
  LOBYTE(v111) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v111) = 3;
  v68 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v68, "description", v69, v70, v71, v72, v86, v92, v97);
  v113[0] = 0;
  s2 = (unsigned __int64)v68;
  *(_QWORD *)&v114 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v113[0] = 3;
  v73 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v73, v93, v74, v75, v76, v77, v87, (int)v93, v98);
  v114 = (unsigned __int64)v73;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v117,
    (const __m128i *)&v111);
  v117[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v88,
    (__int64)v115,
    3,
    v78,
    v79,
    v80,
    (int)v88,
    v94,
    v99,
    v100,
    v101,
    v102,
    *((__int64 *)&v102 + 1),
    v103,
    v104,
    v105,
    v106,
    v107,
    *((__int64 *)&v107 + 1),
    v108,
    v109);
  v81 = &v118;
  do
  {
    v81 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v81 != v115 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v89;
}

