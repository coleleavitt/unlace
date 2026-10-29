__int64 __fastcall ida_mcp::tools::objc_analysis::`anonymous namespace'::handle_resolve_objc_call(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  void *v6; // rbp
  size_t v7; // rax
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  _QWORD *v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // r15
  _QWORD *v14; // rbp
  size_t v15; // r13
  const void *v16; // rdi
  size_t i; // r12
  size_t v18; // rdx
  signed __int64 v19; // rax
  size_t v20; // r15
  size_t v21; // rdx
  int v22; // eax
  char *v23; // r15
  int *v24; // rax
  int *v25; // r14
  __int64 v26; // r12
  std::runtime_error *exception; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // r12
  size_t v35; // rcx
  __int64 v36; // rax
  __int64 *v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 *v43; // r12
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rax
  char v50; // si
  __int64 v51; // rdx
  unsigned int v53; // eax
  unsigned __int64 v54; // rsi
  char *v55; // rdx
  char *v56; // r8
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // edx
  __int64 v60; // rdi
  int v61; // [rsp+0h] [rbp-2F8h]
  int v62; // [rsp+0h] [rbp-2F8h]
  int v63; // [rsp+0h] [rbp-2F8h]
  int v64; // [rsp+0h] [rbp-2F8h]
  int v65; // [rsp+8h] [rbp-2F0h]
  _QWORD *v66; // [rsp+8h] [rbp-2F0h]
  int v67; // [rsp+8h] [rbp-2F0h]
  int v68; // [rsp+8h] [rbp-2F0h]
  __int64 *v69; // [rsp+10h] [rbp-2E8h]
  __int64 v70; // [rsp+10h] [rbp-2E8h]
  __int64 v71; // [rsp+10h] [rbp-2E8h]
  char *v72; // [rsp+C0h] [rbp-238h] BYREF
  __int128 v73; // [rsp+C8h] [rbp-230h]
  _QWORD *v74; // [rsp+E0h] [rbp-218h]
  char *v75; // [rsp+E8h] [rbp-210h]
  _QWORD v76[2]; // [rsp+F0h] [rbp-208h] BYREF
  void *s2; // [rsp+100h] [rbp-1F8h] BYREF
  size_t n; // [rsp+108h] [rbp-1F0h]
  _QWORD v79[2]; // [rsp+110h] [rbp-1E8h] BYREF
  __int128 v80; // [rsp+120h] [rbp-1D8h]
  __int64 v81; // [rsp+130h] [rbp-1C8h]
  __int64 v82; // [rsp+138h] [rbp-1C0h]
  __int64 v83; // [rsp+140h] [rbp-1B8h]
  __int64 v84; // [rsp+148h] [rbp-1B0h]
  __int128 v85; // [rsp+150h] [rbp-1A8h]
  __int64 v86; // [rsp+160h] [rbp-198h]
  __int64 v87; // [rsp+168h] [rbp-190h]
  __int64 v88; // [rsp+170h] [rbp-188h]
  __int128 v89; // [rsp+178h] [rbp-180h]
  __int64 v90; // [rsp+188h] [rbp-170h]
  __int64 v91; // [rsp+190h] [rbp-168h]
  __int64 v92; // [rsp+198h] [rbp-160h]
  __int128 v93; // [rsp+1A0h] [rbp-158h]
  __int64 v94; // [rsp+1B0h] [rbp-148h]
  __int64 v95; // [rsp+1B8h] [rbp-140h]
  __int64 v96; // [rsp+1C0h] [rbp-138h]
  __int128 v97; // [rsp+1C8h] [rbp-130h]
  __int64 v98; // [rsp+1D8h] [rbp-120h]
  __int64 v99; // [rsp+1E0h] [rbp-118h]
  __int64 v100; // [rsp+1E8h] [rbp-110h]
  __int128 v101; // [rsp+1F0h] [rbp-108h]
  __int64 v102; // [rsp+200h] [rbp-F8h]
  __int64 v103; // [rsp+208h] [rbp-F0h]
  __int64 v104; // [rsp+210h] [rbp-E8h]
  __int128 v105; // [rsp+218h] [rbp-E0h]
  __int64 v106; // [rsp+228h] [rbp-D0h]
  __int64 v107; // [rsp+230h] [rbp-C8h]
  __int64 v108; // [rsp+238h] [rbp-C0h]
  __int128 v109; // [rsp+240h] [rbp-B8h]
  __int64 v110; // [rsp+250h] [rbp-A8h]
  __int64 v111; // [rsp+258h] [rbp-A0h]
  __int64 v112; // [rsp+260h] [rbp-98h]
  __int128 v113; // [rsp+268h] [rbp-90h]
  __int64 v114; // [rsp+278h] [rbp-80h]
  int v115; // [rsp+280h] [rbp-78h]
  char s[40]; // [rsp+290h] [rbp-68h] BYREF
  unsigned __int64 v117; // [rsp+2B8h] [rbp-40h]

  v117 = __readfsqword(0x28u);
  std::string::basic_string<std::allocator<char>>((__int64 *)&s2, "address", a3, a4, a5, a6, v61, v65, (__int64)&s2);
  v11 = s2;
  if ( *(_BYTE *)a2 != 1 )
    JUMPOUT(0x1438FC);
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_QWORD **)(v12 + 16);
  v14 = (_QWORD *)(v12 + 8);
  v66 = (_QWORD *)(v12 + 8);
  if ( !v13 )
    goto LABEL_25;
  v15 = n;
  v16 = (const void *)v13[4];
  for ( i = v13[5]; ; i = v13[5] )
  {
    v18 = i;
    if ( v15 <= i )
      v18 = v15;
    if ( !v18 || (LODWORD(v19) = memcmp(v16, v11, v18), !(_DWORD)v19) )
    {
      v19 = i - v15;
      if ( (__int64)(i - v15) > 0x7FFFFFFF )
        goto LABEL_4;
      if ( v19 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v19 < 0 )
      break;
LABEL_4:
    v14 = v13;
    v13 = (_QWORD *)v13[2];
    if ( !v13 )
      goto LABEL_14;
LABEL_5:
    v16 = (const void *)v13[4];
  }
  v13 = (_QWORD *)v13[3];
  if ( v13 )
    goto LABEL_5;
LABEL_14:
  if ( v66 == v14 )
    goto LABEL_25;
  v20 = v14[5];
  v21 = v20;
  if ( v15 <= v20 )
    v21 = v15;
  if ( v21 )
  {
    v22 = memcmp(v11, (const void *)v14[4], v21);
    if ( v22 )
    {
LABEL_22:
      if ( v22 < 0 )
        v14 = v66;
      v66 = v14;
      goto LABEL_25;
    }
  }
  if ( (__int64)(v15 - v20) > 0x7FFFFFFF )
  {
    v66 = v14;
    goto LABEL_26;
  }
  if ( (__int64)(v15 - v20) >= (__int64)0xFFFFFFFF80000000LL )
  {
    v22 = v15 - v20;
    goto LABEL_22;
  }
LABEL_25:
  if ( v11 != v79 )
LABEL_26:
    operator delete(v11, v79[0] + 1LL);
  LOBYTE(v79[0]) = 0;
  s2 = v79;
  n = 0;
  if ( *((_BYTE *)v66 + 64) != 3 )
    JUMPOUT(0x143924);
  std::string::_M_assign();
  v23 = (char *)s2;
  if ( n > 2 && *(_BYTE *)s2 == 48 && (*((_BYTE *)s2 + 1) & 0xDF) == 0x58 )
    v23 = (char *)s2 + 2;
  v24 = __errno_location();
  *v24 = 0;
  v25 = v24;
  v26 = __isoc23_strtoull();
  if ( v23 == v72 || *v72 || *v25 == 34 && v26 == -1 )
  {
    if ( s2 != v79 )
      operator delete(s2, v79[0] + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address");
    JUMPOUT(0x14388A);
  }
  if ( s2 != v79 )
    operator delete(s2, v79[0] + 1LL);
  v81 = -1;
  v80 = -1;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v110 = 0;
  v111 = 0;
  v85 = 0;
  v89 = 0;
  v93 = 0;
  v97 = 0;
  v101 = 0;
  v105 = 0;
  v109 = 0;
  v112 = 0;
  v114 = 0;
  v115 = 0;
  v113 = 0;
  if ( !(unsigned int)decode_insn() )
  {
    v6 = __cxa_allocate_exception(0x10u);
    qsnprintf();
    v74 = v76;
    v7 = strlen(s);
    v72 = (char *)v7;
    v8 = v7;
    if ( v7 > 0xF )
    {
      v9 = (_QWORD *)std::string::_M_create();
      v74 = v9;
      v76[0] = v72;
LABEL_62:
      qmemcpy(v9, s, v8);
      goto LABEL_63;
    }
    if ( v7 == 1 )
    {
      LOBYTE(v76[0]) = s[0];
    }
    else if ( v7 )
    {
      v9 = v76;
      goto LABEL_62;
    }
LABEL_63:
    v75 = v72;
    v72[(_QWORD)v74] = 0;
    std::string::insert();
    std::string::basic_string();
    std::runtime_error::runtime_error();
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      v6,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  print_insn_mnem();
  generate_disasm_line();
  tag_remove();
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>(v69, s, v28, v29, v30, v31, v62, (int)&v72, (__int64)v69);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v32 = (_QWORD *)operator new(0x20u);
  v33 = v32 + 2;
  v34 = v32;
  v35 = n;
  *v32 = v32 + 2;
  if ( s2 == v79 )
  {
    v53 = v35 + 1;
    if ( (unsigned int)(v35 + 1) >= 8 )
    {
      v34[2] = v79[0];
      *(_QWORD *)((char *)v33 + v53 - 8) = *(_QWORD *)((char *)&v79[-1] + v53);
      v54 = (unsigned __int64)(v34 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v55 = (char *)v33 - v54;
      v56 = (char *)((char *)v79 - v55);
      v57 = ((_DWORD)v55 + v53) & 0xFFFFFFF8;
      if ( v57 >= 8 )
      {
        v58 = v57 & 0xFFFFFFF8;
        v59 = 0;
        do
        {
          v60 = v59;
          v59 += 8;
          *(_QWORD *)(v54 + v60) = *(_QWORD *)&v56[v60];
        }
        while ( v59 < v58 );
      }
    }
    else if ( (v53 & 4) != 0 )
    {
      *((_DWORD *)v34 + 4) = v79[0];
      *(_DWORD *)((char *)v33 + v53 - 4) = *(_DWORD *)((char *)&n + v53 + 4);
    }
    else if ( (_DWORD)v35 != -1 )
    {
      *((_BYTE *)v34 + 16) = v79[0];
      if ( (v53 & 2) != 0 )
        *(_WORD *)((char *)v33 + v53 - 2) = *(_WORD *)((char *)&n + v53 + 6);
    }
  }
  else
  {
    *v32 = s2;
    v32[2] = v79[0];
  }
  v34[1] = v35;
  s2 = v79;
  n = 0;
  LOBYTE(v79[0]) = 0;
  v36 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v36 = 3;
  *(_QWORD *)(v36 + 8) = v34;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( s2 != v79 )
    operator delete(s2, v79[0] + 1LL);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v37 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v37,
    _qstring<char>::c_str(void)const::nullstr,
    v38,
    v39,
    v40,
    v41,
    v63,
    v67,
    v70);
  v42 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v42 = 3;
  *(_QWORD *)(v42 + 8) = v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v43 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v43,
    _qstring<char>::c_str(void)const::nullstr,
    v44,
    v45,
    v46,
    v47,
    v64,
    v68,
    v71);
  v48 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v48 = 3;
  *(_QWORD *)(v48 + 8) = v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *(_QWORD *)&v73 = 0;
  v49 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v50 = *(_BYTE *)v49;
  v51 = *(_QWORD *)(v49 + 8);
  *(_BYTE *)v49 = 4;
  LOBYTE(v72) = v50;
  *(_QWORD *)(v49 + 8) = v73;
  *(_QWORD *)&v73 = v51;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

