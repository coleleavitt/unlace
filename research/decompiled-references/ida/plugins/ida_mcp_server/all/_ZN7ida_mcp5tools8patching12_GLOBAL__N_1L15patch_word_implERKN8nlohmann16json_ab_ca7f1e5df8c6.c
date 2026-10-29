__int64 __fastcall ida_mcp::tools::patching::`anonymous namespace'::patch_word_impl(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        char a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        __int64 a51)
{
  void *exception; // r12
  _BYTE *v52; // rbx
  int *v53; // rax
  int *v54; // r15
  __int64 v55; // rbp
  std::runtime_error *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int8 v62; // al
  int v63; // r12d
  __int64 *v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  size_t v69; // rax
  unsigned int v70; // r14d
  _QWORD *v71; // rdx
  _QWORD *v72; // rax
  size_t *v73; // rdx
  _QWORD *v74; // rcx
  size_t v75; // rsi
  __int64 *v76; // r13
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  char *v85; // r13
  _QWORD *v87; // rax
  unsigned __int64 v88; // rdx
  char *v89; // rax
  char *v90; // rbx
  unsigned int v91; // r14d
  unsigned int v92; // r14d
  unsigned int v93; // eax
  __int64 v94; // rcx
  unsigned int v95; // edi
  unsigned __int64 v96; // r8
  char *v97; // rcx
  char *v98; // r9
  unsigned int v99; // edx
  unsigned int v100; // ecx
  __int64 v101; // rdi
  int v102; // [rsp+0h] [rbp-1A8h]
  const __m128i *v103; // [rsp+0h] [rbp-1A8h]
  int v104; // [rsp+8h] [rbp-1A0h]
  _QWORD *v105; // [rsp+8h] [rbp-1A0h]
  __int64 v106; // [rsp+8h] [rbp-1A0h]
  __int64 v107; // [rsp+10h] [rbp-198h]
  int v108; // [rsp+10h] [rbp-198h]
  int v109; // [rsp+18h] [rbp-190h]
  unsigned __int8 v110; // [rsp+1Fh] [rbp-189h]
  __int64 v111; // [rsp+30h] [rbp-178h]
  _BYTE *v112; // [rsp+38h] [rbp-170h]
  size_t v113; // [rsp+38h] [rbp-170h]
  void *v114; // [rsp+40h] [rbp-168h] BYREF
  size_t v115; // [rsp+48h] [rbp-160h]
  size_t v116; // [rsp+50h] [rbp-158h] BYREF
  char v117; // [rsp+58h] [rbp-150h]
  __int64 v118; // [rsp+60h] [rbp-148h] BYREF
  __int128 v119; // [rsp+68h] [rbp-140h]
  char v120; // [rsp+78h] [rbp-130h]
  __int128 v121; // [rsp+80h] [rbp-128h] BYREF
  char v122; // [rsp+90h] [rbp-118h] BYREF
  __int128 v123; // [rsp+98h] [rbp-110h]
  char v124; // [rsp+A8h] [rbp-100h]
  __int64 v125; // [rsp+B0h] [rbp-F8h]
  __int64 v126; // [rsp+B8h] [rbp-F0h]
  void *v127; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 v128; // [rsp+C8h] [rbp-E0h] BYREF
  char v129; // [rsp+D8h] [rbp-D0h]
  __int64 v130; // [rsp+E0h] [rbp-C8h]
  __int64 v131; // [rsp+E8h] [rbp-C0h]
  _QWORD v132[3]; // [rsp+F0h] [rbp-B8h] BYREF
  _QWORD v133[3]; // [rsp+108h] [rbp-A0h] BYREF
  _QWORD v134[3]; // [rsp+120h] [rbp-88h] BYREF
  char v135[8]; // [rsp+138h] [rbp-70h] BYREF
  char s[40]; // [rsp+140h] [rbp-68h] BYREF
  unsigned __int64 v137; // [rsp+168h] [rbp-40h]

  v137 = __readfsqword(0x28u);
  v127 = (char *)&v128 + 8;
  *(_QWORD *)&v128 = 0;
  BYTE8(v128) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
  {
    exception = __cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[29],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      302);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  std::string::_M_assign();
  v52 = v127;
  v53 = __errno_location();
  *v53 = 0;
  v54 = v53;
  v55 = __isoc23_strtoull();
  if ( v52 == v112 || *v112 || *v54 == 34 && v55 == -1 )
  {
    if ( v127 != (char *)&v128 + 8 )
      operator delete(v127, *((_QWORD *)&v128 + 1) + 1LL);
    v56 = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(v56, "Invalid address format");
    __cxa_throw(
      v56,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  if ( v127 != (char *)&v128 + 8 )
    operator delete(v127, *((_QWORD *)&v128 + 1) + 1LL);
  v59 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v62 = *(_BYTE *)v59;
  if ( *(_BYTE *)v59 == 6 )
  {
LABEL_15:
    v63 = *(_DWORD *)(v59 + 8);
    goto LABEL_16;
  }
  if ( v62 <= 6u )
  {
    if ( v62 == 4 )
    {
      v63 = *(unsigned __int8 *)(v59 + 8);
      goto LABEL_17;
    }
    if ( v62 == 5 )
      goto LABEL_15;
LABEL_55:
    ida_mcp::tools::patching::`anonymous namespace'::patch_word_impl(
      a2,
      (__int64)"value",
      v57,
      v58,
      v60,
      v61,
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
      a37,
      a38,
      a39,
      a40,
      a41,
      a42,
      a43,
      a44,
      a45,
      a46,
      a47,
      a48,
      a49,
      a50,
      a51);
  }
  if ( v62 != 7 )
    goto LABEL_55;
  v63 = (int)*(double *)(v59 + 8);
LABEL_16:
  if ( (unsigned int)v63 > 0xFFFF )
    JUMPOUT(0xEB916);
LABEL_17:
  v110 = patch_word();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v118) = 3;
  v64 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v64, "address", v65, v66, v67, v68, (int)&v127, a1, v107);
  v119 = (unsigned __int64)v64;
  qsnprintf();
  v114 = &v116;
  v69 = strlen(s);
  v113 = v69;
  v70 = v69;
  if ( v69 > 0xF )
  {
    v87 = (_QWORD *)std::string::_M_create();
    v114 = v87;
    v116 = v113;
  }
  else
  {
    if ( v69 == 1 )
    {
      LOBYTE(v116) = s[0];
      goto LABEL_20;
    }
    if ( !v69 )
    {
LABEL_20:
      v71 = &v116;
      goto LABEL_21;
    }
    v87 = &v116;
  }
  if ( v70 >= 8 )
  {
    *v87 = *(_QWORD *)s;
    *(_QWORD *)((char *)v87 + v70 - 8) = *(_QWORD *)&v135[v70];
    v88 = (unsigned __int64)(v87 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v89 = (char *)v87 - v88;
    v90 = (char *)(s - v89);
    v91 = ((_DWORD)v89 + v70) & 0xFFFFFFF8;
    if ( v91 >= 8 )
    {
      v92 = v91 & 0xFFFFFFF8;
      v93 = 0;
      do
      {
        v94 = v93;
        v93 += 8;
        *(_QWORD *)(v88 + v94) = *(_QWORD *)&v90[v94];
      }
      while ( v93 < v92 );
    }
  }
  else if ( (v70 & 4) != 0 )
  {
    *(_DWORD *)v87 = *(_DWORD *)s;
    *(_DWORD *)((char *)v87 + v70 - 4) = *(_DWORD *)&v135[v70 + 4];
  }
  else if ( v70 )
  {
    *(_BYTE *)v87 = s[0];
    if ( (v70 & 2) != 0 )
      *(_WORD *)((char *)v87 + v70 - 2) = *(_WORD *)&v135[v70 + 6];
  }
  v69 = v113;
  v71 = v114;
LABEL_21:
  v115 = v69;
  *((_BYTE *)v71 + v69) = 0;
  v120 = 0;
  *(_QWORD *)&v121 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v120 = 3;
  v72 = (_QWORD *)operator new(0x20u);
  v73 = (size_t *)v114;
  v74 = v72 + 2;
  v75 = v115;
  *v72 = v72 + 2;
  if ( v73 == &v116 )
  {
    v95 = v75 + 1;
    if ( (unsigned int)(v75 + 1) >= 8 )
    {
      v72[2] = v116;
      *(_QWORD *)((char *)v74 + v95 - 8) = *(size_t *)((char *)&v115 + v95);
      v96 = (unsigned __int64)(v72 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v97 = (char *)v74 - v96;
      v98 = (char *)((char *)&v116 - v97);
      if ( (((_DWORD)v97 + v95) & 0xFFFFFFF8) >= 8 )
      {
        v99 = ((_DWORD)v97 + v95) & 0xFFFFFFF8;
        v100 = 0;
        do
        {
          v101 = v100;
          v100 += 8;
          *(_QWORD *)(v96 + v101) = *(_QWORD *)&v98[v101];
        }
        while ( v100 < v99 );
      }
    }
    else if ( (v95 & 4) != 0 )
    {
      *((_DWORD *)v72 + 4) = v116;
      *(_DWORD *)((char *)v74 + v95 - 4) = *(_DWORD *)((char *)&v115 + v95 + 4);
    }
    else if ( (_DWORD)v75 != -1 )
    {
      *((_BYTE *)v72 + 16) = v116;
      if ( (v95 & 2) != 0 )
        *(_WORD *)((char *)v74 + v95 - 2) = *(_WORD *)((char *)&v115 + v95 + 6);
    }
  }
  else
  {
    *v72 = v73;
    v72[2] = v116;
  }
  v72[1] = v75;
  v114 = &v116;
  v115 = 0;
  LOBYTE(v116) = 0;
  v121 = (unsigned __int64)v72;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v132,
    (const __m128i *)&v118,
    2,
    1);
  v132[2] = 0;
  v122 = 0;
  *(_QWORD *)&v123 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v122 = 3;
  v76 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v76, "value", v77, v78, v79, v80, v102, v104, (__int64)&v121);
  v124 = 5;
  v125 = v63;
  v126 = 0;
  v123 = (unsigned __int64)v76;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v133,
    (const __m128i *)&v122,
    2,
    1);
  v133[2] = 0;
  LOBYTE(v127) = 0;
  *(_QWORD *)&v128 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v127) = 3;
  v81 = operator new(0x20u);
  strcpy((char *)(v81 + 16), "success");
  *(_QWORD *)v81 = v81 + 16;
  *(_QWORD *)(v81 + 8) = 7;
  v129 = 4;
  v130 = v110;
  v131 = 0;
  v128 = (unsigned __int64)v81;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v134,
    v103,
    2,
    1);
  v134[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v105,
    (__int64)v132,
    3,
    v82,
    v83,
    v84,
    (int)v103,
    (__int64)v105,
    v108,
    v109,
    (int)&v114,
    (int)&v118,
    v111,
    v113,
    (int)v114,
    v115,
    v116,
    v117,
    v118,
    v119,
    *((__int64 *)&v119 + 1));
  v85 = v135;
  do
  {
    v85 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v85 != (char *)v132 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v114 != &v116 )
    operator delete(v114, v116 + 1);
  return v106;
}

