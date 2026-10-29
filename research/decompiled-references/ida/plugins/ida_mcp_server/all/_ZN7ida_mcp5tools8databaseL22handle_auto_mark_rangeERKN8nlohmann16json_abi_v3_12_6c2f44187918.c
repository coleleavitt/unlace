__int64 __fastcall ida_mcp::tools::database::handle_auto_mark_range(int a1, __int64 a2)
{
  _BYTE *v2; // r13
  int *v3; // rax
  int *v4; // r15
  std::runtime_error *exception; // rax
  _BYTE *v6; // rax
  _BYTE *v7; // r12
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 *v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rsi
  __int64 *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  std::runtime_error *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // r12
  __int64 v47; // r15
  size_t v48; // rdx
  int v49; // eax
  unsigned __int64 v50; // rbp
  unsigned __int64 v51; // r15
  size_t v52; // rdx
  int v53; // eax
  unsigned int v54; // edx
  unsigned int v55; // edx
  unsigned __int64 v56; // rdi
  char *v57; // rcx
  char *v58; // r8
  unsigned int v59; // edx
  unsigned int v60; // edx
  unsigned int v61; // ecx
  __int64 v62; // r9
  unsigned __int64 v63; // rdi
  char *v64; // rcx
  char *v65; // r8
  unsigned int v66; // edx
  unsigned int v67; // edx
  unsigned int v68; // ecx
  __int64 v69; // r9
  int v70; // [rsp+0h] [rbp-248h]
  int v71; // [rsp+0h] [rbp-248h]
  int v72; // [rsp+0h] [rbp-248h]
  const __m128i *v73; // [rsp+0h] [rbp-248h]
  int v74; // [rsp+8h] [rbp-240h]
  int v75; // [rsp+8h] [rbp-240h]
  int v76; // [rsp+8h] [rbp-240h]
  _QWORD *v77; // [rsp+8h] [rbp-240h]
  __int64 v78; // [rsp+8h] [rbp-240h]
  __int64 v79; // [rsp+10h] [rbp-238h]
  __int64 v80; // [rsp+10h] [rbp-238h]
  __int64 v81; // [rsp+10h] [rbp-238h]
  __int64 v82; // [rsp+10h] [rbp-238h]
  int v83; // [rsp+10h] [rbp-238h]
  int v84; // [rsp+50h] [rbp-1F8h]
  _BYTE *v85; // [rsp+58h] [rbp-1F0h]
  void *v86; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v87; // [rsp+68h] [rbp-1E0h]
  __int64 v88[2]; // [rsp+70h] [rbp-1D8h] BYREF
  void *v89; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v90; // [rsp+88h] [rbp-1C0h]
  _QWORD v91[2]; // [rsp+90h] [rbp-1B8h] BYREF
  char v92; // [rsp+A0h] [rbp-1A8h] BYREF
  __int128 v93; // [rsp+A8h] [rbp-1A0h] BYREF
  char v94; // [rsp+B8h] [rbp-190h]
  __int128 v95; // [rsp+C0h] [rbp-188h] BYREF
  char v96; // [rsp+D0h] [rbp-178h] BYREF
  __int128 v97; // [rsp+D8h] [rbp-170h] BYREF
  char v98; // [rsp+E8h] [rbp-160h]
  __int128 v99; // [rsp+F0h] [rbp-158h] BYREF
  char v100; // [rsp+100h] [rbp-148h] BYREF
  __int128 v101; // [rsp+108h] [rbp-140h]
  char v102; // [rsp+118h] [rbp-130h]
  __int64 v103; // [rsp+120h] [rbp-128h]
  __int64 v104; // [rsp+128h] [rbp-120h]
  void *v105; // [rsp+130h] [rbp-118h] BYREF
  __int128 v106; // [rsp+138h] [rbp-110h] BYREF
  __int64 v107; // [rsp+148h] [rbp-100h]
  __int64 v108; // [rsp+150h] [rbp-F8h]
  __int64 v109; // [rsp+158h] [rbp-F0h]
  _QWORD v110[3]; // [rsp+160h] [rbp-E8h] BYREF
  _QWORD v111[3]; // [rsp+178h] [rbp-D0h] BYREF
  _QWORD v112[3]; // [rsp+190h] [rbp-B8h] BYREF
  _QWORD v113[3]; // [rsp+1A8h] [rbp-A0h] BYREF
  char v114[32]; // [rsp+1C0h] [rbp-88h] BYREF
  char v115[40]; // [rsp+1E0h] [rbp-68h] BYREF
  unsigned __int64 v116; // [rsp+208h] [rbp-40h]

  v116 = __readfsqword(0x28u);
  v105 = (char *)&v106 + 8;
  *(_QWORD *)&v106 = 0;
  BYTE8(v106) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0x56860);
  std::string::_M_assign();
  v2 = v105;
  v3 = __errno_location();
  *v3 = 0;
  v4 = v3;
  v79 = __isoc23_strtoull();
  if ( v2 == v85 || *v85 || *v4 == 34 && v79 == -1 )
  {
    if ( v105 != (char *)&v106 + 8 )
      operator delete(v105, *((_QWORD *)&v106 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid start_address format");
    ida_mcp::tools::database::handle_auto_mark_range();
  }
  if ( v105 != (char *)&v106 + 8 )
    operator delete(v105, *((_QWORD *)&v106 + 1) + 1LL);
  v6 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v105 = (char *)&v106 + 8;
  *(_QWORD *)&v106 = 0;
  BYTE8(v106) = 0;
  if ( *v6 != 3 )
    JUMPOUT(0x565B0);
  std::string::_M_assign();
  v7 = v105;
  *v4 = 0;
  v8 = __isoc23_strtoull();
  if ( v7 == v85 || *v85 || *v4 == 34 && v8 == -1 )
  {
    if ( v105 != (char *)&v106 + 8 )
      operator delete(v105, *((_QWORD *)&v106 + 1) + 1LL);
    v43 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v43, "Invalid end_address format");
    __cxa_throw(
      v43,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v105 != (char *)&v106 + 8 )
    operator delete(v105, *((_QWORD *)&v106 + 1) + 1LL);
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_19;
  v44 = *(_QWORD *)(a2 + 8);
  v45 = *(_QWORD *)(v44 + 16);
  if ( !v45 )
    goto LABEL_19;
  v46 = v44 + 8;
  v47 = v44 + 8;
  do
  {
    while ( 1 )
    {
      v50 = *(_QWORD *)(v45 + 40);
      if ( !v50 )
        break;
      v48 = 4;
      if ( v50 <= 4 )
        v48 = *(_QWORD *)(v45 + 40);
      v49 = memcmp(*(const void **)(v45 + 32), "type", v48);
      if ( v49 || (v49 = v50 - 4, (__int64)(v50 - 4) <= 0x7FFFFFFF) )
      {
        if ( v49 < 0 )
          break;
      }
      v46 = v45;
      v45 = *(_QWORD *)(v45 + 16);
      if ( !v45 )
        goto LABEL_44;
    }
    v45 = *(_QWORD *)(v45 + 24);
  }
  while ( v45 );
LABEL_44:
  if ( v47 == v46 )
    goto LABEL_19;
  v51 = *(_QWORD *)(v46 + 40);
  if ( v51 )
  {
    v52 = 4;
    if ( v51 <= 4 )
      v52 = *(_QWORD *)(v46 + 40);
    v53 = memcmp(*(const void **)(v46 + 32), "type", v52);
    if ( !v53 )
    {
      v53 = v51 - 4;
      if ( (__int64)(v51 - 4) > 0x7FFFFFFF )
        goto LABEL_19;
    }
    if ( v53 > 0 )
      goto LABEL_19;
  }
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    LOBYTE(v85) = 0;
    nlohmann::json_abi_v3_12_0::detail::from_json<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,int,0>();
    v9 = 0;
  }
  else
  {
LABEL_19:
    v9 = 10;
  }
  auto_mark_range();
  *(_QWORD *)&v93 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v92 = 3;
  v10 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v10,
    "start_address",
    v11,
    v12,
    v13,
    v14,
    (int)&v105,
    a1,
    (__int64)&v93);
  v15 = v114;
  v93 = (unsigned __int64)v10;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v86, v114, v16, v17, v18, v19, v70, v74, v80);
  v94 = 0;
  *(_QWORD *)&v95 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v94 = 3;
  v20 = (_QWORD *)operator new(0x20u);
  v21 = (__int64 *)v86;
  v22 = v20 + 2;
  v23 = v87;
  *v20 = v20 + 2;
  if ( v21 == v88 )
  {
    v55 = v23 + 1;
    if ( (unsigned int)(v23 + 1) >= 8 )
    {
      v20[2] = v88[0];
      *(_QWORD *)((char *)v22 + v55 - 8) = *(__int64 *)((char *)&v88[-1] + v55);
      v63 = (unsigned __int64)(v20 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v64 = (char *)v22 - v63;
      v65 = (char *)((char *)v88 - v64);
      v66 = ((_DWORD)v64 + v55) & 0xFFFFFFF8;
      if ( v66 >= 8 )
      {
        v67 = v66 & 0xFFFFFFF8;
        v68 = 0;
        do
        {
          v69 = v68;
          v68 += 8;
          *(_QWORD *)(v63 + v69) = *(_QWORD *)&v65[v69];
        }
        while ( v68 < v67 );
      }
    }
    else if ( (v55 & 4) != 0 )
    {
      *((_DWORD *)v20 + 4) = v88[0];
      *(_DWORD *)((char *)v22 + v55 - 4) = *(_DWORD *)((char *)&v87 + v55 + 4);
    }
    else if ( (_DWORD)v23 != -1 )
    {
      *((_BYTE *)v20 + 16) = v88[0];
      if ( (v55 & 2) != 0 )
        *(_WORD *)((char *)v22 + v55 - 2) = *(_WORD *)((char *)&v87 + v55 + 6);
    }
  }
  else
  {
    *v20 = v21;
    v20[2] = v88[0];
  }
  v20[1] = v23;
  v86 = v88;
  v87 = 0;
  LOBYTE(v88[0]) = 0;
  v95 = (unsigned __int64)v20;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v110,
    (const __m128i *)&v92);
  v110[2] = 0;
  v96 = 0;
  *(_QWORD *)&v97 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v96 = 3;
  v24 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v24, "end_address", v25, v26, v27, v28, v71, v75, v81);
  v97 = (unsigned __int64)v24;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v89, v115, v29, v30, v31, v32, v72, v76, v82);
  v98 = 0;
  *(_QWORD *)&v99 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v98 = 3;
  v33 = (_QWORD *)operator new(0x20u);
  v34 = v89;
  v35 = v33 + 2;
  v36 = v90;
  *v33 = v33 + 2;
  if ( v34 == v91 )
  {
    v54 = v36 + 1;
    if ( (unsigned int)(v36 + 1) >= 8 )
    {
      v33[2] = v91[0];
      *(_QWORD *)((char *)v35 + v54 - 8) = *(_QWORD *)((char *)&v91[-1] + v54);
      v56 = (unsigned __int64)(v33 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v57 = (char *)v35 - v56;
      v58 = (char *)((char *)v91 - v57);
      v59 = ((_DWORD)v57 + v54) & 0xFFFFFFF8;
      if ( v59 >= 8 )
      {
        v60 = v59 & 0xFFFFFFF8;
        v61 = 0;
        do
        {
          v62 = v61;
          v61 += 8;
          *(_QWORD *)(v56 + v62) = *(_QWORD *)&v58[v62];
        }
        while ( v61 < v60 );
      }
    }
    else if ( (v54 & 4) != 0 )
    {
      *((_DWORD *)v33 + 4) = v91[0];
      *(_DWORD *)((char *)v35 + v54 - 4) = *(_DWORD *)((char *)&v90 + v54 + 4);
    }
    else if ( (_DWORD)v36 != -1 )
    {
      *((_BYTE *)v33 + 16) = v91[0];
      if ( (v54 & 2) != 0 )
        *(_WORD *)((char *)v35 + v54 - 2) = *(_WORD *)((char *)&v90 + v54 + 6);
    }
  }
  else
  {
    *v33 = v34;
    v33[2] = v91[0];
  }
  v33[1] = v36;
  v89 = v91;
  v90 = 0;
  LOBYTE(v91[0]) = 0;
  v99 = (unsigned __int64)v33;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v111,
    (const __m128i *)&v96);
  v111[2] = 0;
  v100 = 0;
  *(_QWORD *)&v101 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v100 = 3;
  v37 = operator new(0x20u);
  strcpy((char *)(v37 + 16), "type");
  *(_QWORD *)v37 = v37 + 16;
  *(_QWORD *)(v37 + 8) = 4;
  v102 = 5;
  v103 = v9;
  v104 = 0;
  v101 = (unsigned __int64)v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v112,
    (const __m128i *)&v100);
  v112[2] = 0;
  LOBYTE(v105) = 0;
  *(_QWORD *)&v106 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v105) = 3;
  v38 = operator new(0x20u);
  strcpy((char *)(v38 + 16), "marked");
  *(_QWORD *)v38 = v38 + 16;
  *(_QWORD *)(v38 + 8) = 6;
  v107 = 4;
  v108 = 1;
  v109 = 0;
  v106 = (unsigned __int64)v38;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v113,
    v73);
  v113[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v77,
    (__int64)v110,
    4,
    v39,
    v40,
    v41,
    (int)v73,
    (__int64)v77,
    v83,
    (int)&v95,
    (int)&v97,
    (int)&v99,
    (__int64)&v92,
    (int)&v96,
    (int)&v86,
    (int)&v89,
    v84,
    (char)v85,
    (__int64)v86,
    v87,
    v88[0]);
  do
  {
    v15 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v15 != (char *)v110 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v89 != v91 )
    operator delete(v89, v91[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v86 != v88 )
    operator delete(v86, v88[0] + 1);
  return v78;
}

