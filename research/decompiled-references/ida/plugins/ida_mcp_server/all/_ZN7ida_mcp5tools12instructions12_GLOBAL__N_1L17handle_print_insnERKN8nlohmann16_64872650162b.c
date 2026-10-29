__int64 __fastcall ida_mcp::tools::instructions::`anonymous namespace'::handle_print_insn(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r14
  size_t v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbx
  size_t v10; // rdx
  int v11; // eax
  _BYTE *v12; // rbx
  int *v13; // rax
  int *v14; // r14
  __int64 v15; // r12
  std::runtime_error *exception; // rax
  __int64 v17; // rax
  unsigned __int16 *v18; // rbx
  __int64 v19; // rax
  char *v20; // rbp
  size_t v21; // rax
  unsigned int v22; // r12d
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  size_t v27; // rsi
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 *v30; // r12
  size_t v31; // rax
  void *v32; // rcx
  size_t v33; // r8
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 *v36; // r12
  size_t v37; // rax
  void *v38; // rcx
  size_t v39; // r8
  __int64 v40; // rax
  __int128 v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  unsigned __int64 v50; // rdx
  char *v51; // rax
  char *v52; // rsi
  unsigned int v53; // r12d
  unsigned int v54; // r12d
  unsigned int v55; // eax
  __int64 v56; // rcx
  unsigned int v57; // edi
  unsigned __int64 v58; // r8
  char *v59; // rcx
  char *v60; // r9
  unsigned int v61; // edx
  unsigned int v62; // ecx
  __int64 v63; // rdi
  __int64 v65; // [rsp+8h] [rbp-270h]
  void *dest; // [rsp+30h] [rbp-248h]
  void *desta; // [rsp+30h] [rbp-248h]
  void *v68; // [rsp+40h] [rbp-238h]
  __int64 v69; // [rsp+60h] [rbp-218h]
  size_t v70; // [rsp+68h] [rbp-210h]
  size_t v71; // [rsp+68h] [rbp-210h]
  size_t v72; // [rsp+68h] [rbp-210h]
  __int64 v73; // [rsp+70h] [rbp-208h]
  _BYTE *v74; // [rsp+B0h] [rbp-1C8h]
  void *v75; // [rsp+D0h] [rbp-1A8h] BYREF
  size_t v76; // [rsp+D8h] [rbp-1A0h]
  _QWORD v77[2]; // [rsp+E0h] [rbp-198h] BYREF
  char v78; // [rsp+F0h] [rbp-188h] BYREF
  __int128 v79; // [rsp+F8h] [rbp-180h] BYREF
  char v80; // [rsp+108h] [rbp-170h]
  __int128 v81; // [rsp+110h] [rbp-168h] BYREF
  char v82; // [rsp+120h] [rbp-158h] BYREF
  __int128 v83; // [rsp+128h] [rbp-150h] BYREF
  char v84; // [rsp+138h] [rbp-140h]
  __int128 v85; // [rsp+140h] [rbp-138h] BYREF
  char v86; // [rsp+150h] [rbp-128h] BYREF
  __int128 v87; // [rsp+158h] [rbp-120h] BYREF
  char v88; // [rsp+168h] [rbp-110h]
  __int128 v89; // [rsp+170h] [rbp-108h] BYREF
  void *v90; // [rsp+180h] [rbp-F8h] BYREF
  __int128 s2; // [rsp+188h] [rbp-F0h] BYREF
  char v92; // [rsp+198h] [rbp-E0h]
  __int64 v93; // [rsp+1A0h] [rbp-D8h]
  __int64 v94; // [rsp+1A8h] [rbp-D0h]
  _QWORD v95[3]; // [rsp+1B0h] [rbp-C8h] BYREF
  _QWORD v96[3]; // [rsp+1C8h] [rbp-B0h] BYREF
  _QWORD v97[3]; // [rsp+1E0h] [rbp-98h] BYREF
  __int64 v98; // [rsp+1F8h] [rbp-80h] BYREF
  __int64 v99; // [rsp+208h] [rbp-70h]
  char s[40]; // [rsp+210h] [rbp-68h] BYREF
  unsigned __int64 v101; // [rsp+238h] [rbp-40h]

  v101 = __readfsqword(0x28u);
  HIBYTE(s2) = 0;
  DWORD2(s2) = 1919181921;
  *(_QWORD *)&s2 = 7;
  *(_DWORD *)((char *)&s2 + 11) = 1936942450;
  v90 = (char *)&s2 + 8;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x72D18);
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
  v90 = (char *)&s2 + 8;
  *(_QWORD *)&s2 = 0;
  BYTE8(s2) = 0;
  if ( *(_BYTE *)(v4 + 64) != 3 )
    JUMPOUT(0x72D4A);
  std::string::_M_assign();
  v12 = v90;
  v13 = __errno_location();
  *v13 = 0;
  v14 = v13;
  v15 = __isoc23_strtoull();
  if ( v12 == v74 || *v74 || *v14 == 34 && v15 == -1 )
  {
    if ( v90 != (char *)&s2 + 8 )
      operator delete(v90, *((_QWORD *)&s2 + 1) + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0x73247);
  }
  if ( v90 != (char *)&s2 + 8 )
    operator delete(v90, *((_QWORD *)&s2 + 1) + 1LL);
  if ( !(unsigned __int8)print_insn_mnem() )
    JUMPOUT(0x72B23);
  v17 = operator new(0x168u);
  *(_QWORD *)(v17 + 16) = -1;
  *(_OWORD *)v17 = -1;
  v18 = (unsigned __int16 *)v17;
  *(_QWORD *)(v17 + 24) = 0;
  *(_QWORD *)(v17 + 32) = 0;
  *(_QWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 64) = 0;
  *(_QWORD *)(v17 + 72) = 0;
  *(_QWORD *)(v17 + 80) = 0;
  *(_QWORD *)(v17 + 104) = 0;
  *(_QWORD *)(v17 + 112) = 0;
  *(_QWORD *)(v17 + 120) = 0;
  *(_QWORD *)(v17 + 144) = 0;
  *(_QWORD *)(v17 + 152) = 0;
  *(_QWORD *)(v17 + 160) = 0;
  *(_QWORD *)(v17 + 184) = 0;
  *(_QWORD *)(v17 + 192) = 0;
  *(_QWORD *)(v17 + 200) = 0;
  *(_QWORD *)(v17 + 224) = 0;
  *(_QWORD *)(v17 + 232) = 0;
  *(_QWORD *)(v17 + 240) = 0;
  *(_QWORD *)(v17 + 264) = 0;
  *(_QWORD *)(v17 + 272) = 0;
  *(_QWORD *)(v17 + 280) = 0;
  *(_QWORD *)(v17 + 304) = 0;
  *(_QWORD *)(v17 + 312) = 0;
  *(_OWORD *)(v17 + 48) = 0;
  *(_OWORD *)(v17 + 88) = 0;
  *(_OWORD *)(v17 + 128) = 0;
  *(_OWORD *)(v17 + 168) = 0;
  *(_OWORD *)(v17 + 208) = 0;
  *(_OWORD *)(v17 + 248) = 0;
  *(_OWORD *)(v17 + 288) = 0;
  *(_QWORD *)(v17 + 320) = 0;
  *(_QWORD *)(v17 + 344) = 0;
  *(_DWORD *)(v17 + 352) = 0;
  *(_OWORD *)(v17 + 328) = 0;
  if ( (int)decode_insn() <= 0 )
    JUMPOUT(0x72C37);
  generate_disasm_line();
  tag_remove();
  *(_QWORD *)&v79 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v78 = 3;
  v19 = operator new(0x20u);
  *(_QWORD *)v19 = v19 + 16;
  v20 = s;
  strcpy((char *)(v19 + 16), "address");
  *(_QWORD *)(v19 + 8) = 7;
  v79 = (unsigned __int64)v19;
  qsnprintf();
  v75 = v77;
  v21 = strlen(s);
  v70 = v21;
  v22 = v21;
  if ( v21 > 0xF )
  {
    v49 = (_QWORD *)std::string::_M_create();
    v75 = v49;
    v77[0] = v70;
  }
  else
  {
    if ( v21 == 1 )
    {
      LOBYTE(v77[0]) = s[0];
      goto LABEL_35;
    }
    if ( !v21 )
    {
LABEL_35:
      v23 = v77;
      goto LABEL_36;
    }
    v49 = v77;
  }
  if ( v22 >= 8 )
  {
    *v49 = *(_QWORD *)s;
    *(_QWORD *)((char *)v49 + v22 - 8) = *(_QWORD *)&s[v22 - 8];
    v50 = (unsigned __int64)(v49 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v51 = (char *)v49 - v50;
    v52 = (char *)(s - v51);
    v53 = ((_DWORD)v51 + v22) & 0xFFFFFFF8;
    if ( v53 >= 8 )
    {
      v54 = v53 & 0xFFFFFFF8;
      v55 = 0;
      do
      {
        v56 = v55;
        v55 += 8;
        *(_QWORD *)(v50 + v56) = *(_QWORD *)&v52[v56];
      }
      while ( v55 < v54 );
    }
  }
  else if ( (v22 & 4) != 0 )
  {
    *(_DWORD *)v49 = *(_DWORD *)s;
    *(_DWORD *)((char *)v49 + v22 - 4) = *(_DWORD *)&s[v22 - 4];
  }
  else if ( v22 )
  {
    *(_BYTE *)v49 = s[0];
    if ( (v22 & 2) != 0 )
      *(_WORD *)((char *)v49 + v22 - 2) = *(_WORD *)&s[v22 - 2];
  }
  v21 = v70;
  v23 = v75;
LABEL_36:
  v76 = v21;
  *((_BYTE *)v23 + v21) = 0;
  v80 = 0;
  *(_QWORD *)&v81 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v80 = 3;
  v24 = (_QWORD *)operator new(0x20u);
  v25 = v75;
  v26 = v24 + 2;
  v27 = v76;
  *v24 = v24 + 2;
  if ( v25 == v77 )
  {
    v57 = v27 + 1;
    if ( (unsigned int)(v27 + 1) >= 8 )
    {
      v24[2] = v77[0];
      *(_QWORD *)((char *)v26 + v57 - 8) = *(_QWORD *)((char *)&v77[-1] + v57);
      v58 = (unsigned __int64)(v24 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v59 = (char *)v26 - v58;
      v60 = (char *)((char *)v77 - v59);
      if ( (((_DWORD)v59 + v57) & 0xFFFFFFF8) >= 8 )
      {
        v61 = ((_DWORD)v59 + v57) & 0xFFFFFFF8;
        v62 = 0;
        do
        {
          v63 = v62;
          v62 += 8;
          *(_QWORD *)(v58 + v63) = *(_QWORD *)&v60[v63];
        }
        while ( v62 < v61 );
      }
    }
    else if ( (v57 & 4) != 0 )
    {
      *((_DWORD *)v24 + 4) = v77[0];
      *(_DWORD *)((char *)v26 + v57 - 4) = *(_DWORD *)((char *)&v76 + v57 + 4);
    }
    else if ( (_DWORD)v27 != -1 )
    {
      *((_BYTE *)v24 + 16) = v77[0];
      if ( (v57 & 2) != 0 )
        *(_WORD *)((char *)v26 + v57 - 2) = *(_WORD *)((char *)&v76 + v57 + 6);
    }
  }
  else
  {
    *v24 = v25;
    v24[2] = v77[0];
  }
  v24[1] = v27;
  v75 = v77;
  v76 = 0;
  LOBYTE(v77[0]) = 0;
  v81 = (unsigned __int64)v24;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v95,
    (const __m128i *)&v78);
  v95[2] = 0;
  v82 = 0;
  *(_QWORD *)&v83 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v82 = 3;
  v28 = operator new(0x20u);
  *(_QWORD *)v28 = v28 + 16;
  strcpy((char *)(v28 + 16), "mnemonic");
  *(_QWORD *)(v28 + 8) = 8;
  v83 = (unsigned __int64)v28;
  v84 = 0;
  *(_QWORD *)&v85 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v84 = 3;
  v29 = (__int64 *)operator new(0x20u);
  v30 = v29;
  *v29 = (__int64)(v29 + 2);
  if ( !_qstring<char>::c_str(void)const::nullstr )
    JUMPOUT(0x73050);
  dest = v29 + 2;
  v31 = strlen(_qstring<char>::c_str(void)const::nullstr);
  v32 = dest;
  v71 = v31;
  v33 = v31;
  if ( v31 > 0xF )
  {
    desta = (void *)v31;
    v47 = std::string::_M_create();
    *v30 = v47;
    v32 = (void *)v47;
    v33 = (size_t)desta;
    v30[2] = v71;
  }
  else
  {
    if ( v31 == 1 )
    {
      *((_BYTE *)v30 + 16) = _qstring<char>::c_str(void)const::nullstr[0];
      goto LABEL_42;
    }
    if ( !v31 )
      goto LABEL_42;
  }
  memcpy(v32, _qstring<char>::c_str(void)const::nullstr, v33);
  v31 = v71;
  v32 = (void *)*v30;
LABEL_42:
  v30[1] = v31;
  *((_BYTE *)v32 + v31) = 0;
  v85 = (unsigned __int64)v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v96,
    (const __m128i *)&v82);
  v96[2] = 0;
  v86 = 0;
  *(_QWORD *)&v87 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v86 = 3;
  v34 = operator new(0x20u);
  strcpy((char *)(v34 + 16), "disassembly");
  *(_QWORD *)v34 = v34 + 16;
  *(_QWORD *)(v34 + 8) = 11;
  v87 = (unsigned __int64)v34;
  v88 = 0;
  *(_QWORD *)&v89 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v88 = 3;
  v35 = (__int64 *)operator new(0x20u);
  v36 = v35;
  *v35 = (__int64)(v35 + 2);
  if ( !_qstring<char>::c_str(void)const::nullstr )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v68 = v35 + 2;
  v37 = strlen(_qstring<char>::c_str(void)const::nullstr);
  v38 = v68;
  v72 = v37;
  v39 = v37;
  if ( v37 > 0xF )
  {
    v68 = (void *)v37;
    v48 = std::string::_M_create();
    *v36 = v48;
    v38 = (void *)v48;
    v39 = (size_t)v68;
    v36[2] = v72;
    goto LABEL_60;
  }
  if ( v37 == 1 )
  {
    *((_BYTE *)v36 + 16) = _qstring<char>::c_str(void)const::nullstr[0];
    goto LABEL_46;
  }
  if ( v37 )
  {
LABEL_60:
    memcpy(v38, _qstring<char>::c_str(void)const::nullstr, v39);
    v37 = v72;
    v38 = (void *)*v36;
  }
LABEL_46:
  v36[1] = v37;
  *((_BYTE *)v38 + v37) = 0;
  v89 = (unsigned __int64)v36;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v97,
    (const __m128i *)&v86);
  v97[2] = 0;
  LOBYTE(v90) = 0;
  *(_QWORD *)&s2 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v90) = 3;
  v40 = operator new(0x20u);
  *(_DWORD *)(v40 + 16) = 1702521203;
  v41 = (unsigned __int64)v40;
  *(_QWORD *)v40 = v40 + 16;
  *(_QWORD *)(v40 + 8) = 4;
  *(_BYTE *)(v40 + 20) = 0;
  v42 = v18[13];
  v92 = 6;
  v93 = v42;
  v94 = 0;
  s2 = v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v98,
    (const __m128i *)&v90);
  v99 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v95,
    4,
    v43,
    v44,
    v45,
    (int)&v90,
    (__int64)a1,
    (int)&v79,
    (int)&v81,
    (int)&v83,
    (int)&v85,
    (__int64)&v87,
    (int)&v89,
    (int)v68,
    (int)&v75,
    (int)&v78,
    (char)&v82,
    v69,
    v72,
    0);
  do
  {
    v20 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v20 != (char *)v95 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v75 != v77 )
    operator delete(v75, v77[0] + 1LL);
  operator delete(v18, 0x168u);
  if ( v73 )
    qfree();
  return v65;
}

