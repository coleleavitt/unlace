__int64 __fastcall ida_mcp::tools::patching::`anonymous namespace'::patch_bytes_impl(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void *a9,
        int a10,
        __int64 a11,
        __int64 a12,
        int a13,
        int a14,
        __int64 a15,
        int a16,
        __int64 a17,
        int a18,
        __int64 a19,
        int a20,
        int a21,
        int a22,
        int a23,
        char a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        char a32,
        int a33,
        int a34,
        char a35,
        int a36,
        int a37,
        char a38,
        int a39,
        int a40,
        char a41,
        char a42,
        int a43,
        char a44,
        int a45,
        int a46,
        char a47,
        char a48,
        int a49,
        char a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        char a59,
        int a60,
        int a61,
        int a62,
        int a63,
        int a64,
        __int64 a65)
{
  int v65; // edx
  int v66; // ecx
  int v67; // r8d
  int v68; // r9d
  _BYTE *v69; // rbx
  int *v70; // rax
  int *v71; // rbp
  std::runtime_error *exception; // rax
  _BYTE *v73; // rax
  char *v74; // rbx
  unsigned __int64 v75; // rsi
  char *v76; // r15
  char v77; // r12
  _BYTE *v78; // rax
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // r9
  char *v81; // rbx
  unsigned __int64 v82; // r14
  int v83; // r13d
  _BYTE *v84; // r12
  int v85; // esi
  unsigned __int64 v86; // rsi
  void *v87; // rax
  _BYTE *v88; // rdx
  size_t v89; // rbx
  __int64 v90; // r13
  unsigned __int64 v91; // r13
  char *v92; // rax
  char *v93; // r9
  char *v94; // rax
  char *v95; // rdi
  __int64 v96; // r14
  signed __int64 v97; // rbx
  __int64 *v98; // rbp
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  _QWORD *v107; // rax
  _QWORD *v108; // rdx
  _QWORD *v109; // rcx
  __int64 v110; // rsi
  __int64 *v111; // r14
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 *v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  void **v124; // rbx
  unsigned int v126; // edx
  unsigned __int64 v127; // rdi
  char *v128; // rcx
  char *v129; // r8
  unsigned int v130; // edx
  unsigned int v131; // edx
  unsigned int v132; // ecx
  __int64 v133; // r9
  int v134; // [rsp+0h] [rbp-218h]
  int v135; // [rsp+0h] [rbp-218h]
  int v136; // [rsp+0h] [rbp-218h]
  int v137; // [rsp+0h] [rbp-218h]
  int v138; // [rsp+0h] [rbp-218h]
  char *v139; // [rsp+8h] [rbp-210h]
  int v140; // [rsp+8h] [rbp-210h]
  int v141; // [rsp+8h] [rbp-210h]
  int v142; // [rsp+8h] [rbp-210h]
  __int64 v143; // [rsp+8h] [rbp-210h]
  __int64 v144; // [rsp+8h] [rbp-210h]
  __int64 v145; // [rsp+10h] [rbp-208h]
  __int64 v146; // [rsp+10h] [rbp-208h]
  int v147; // [rsp+10h] [rbp-208h]
  char *src; // [rsp+18h] [rbp-200h]
  char *srcb; // [rsp+18h] [rbp-200h]
  void *srca; // [rsp+18h] [rbp-200h]
  void *v151; // [rsp+20h] [rbp-1F8h]
  __int64 v152; // [rsp+30h] [rbp-1E8h]
  int v154[2]; // [rsp+38h] [rbp-1E0h]
  int v155; // [rsp+40h] [rbp-1D8h]
  void *v156; // [rsp+50h] [rbp-1C8h]
  __int64 v157; // [rsp+60h] [rbp-1B8h]
  _BYTE *v158; // [rsp+68h] [rbp-1B0h] BYREF
  void *v159; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v160; // [rsp+78h] [rbp-1A0h]
  _QWORD v161[2]; // [rsp+80h] [rbp-198h] BYREF
  void *v162; // [rsp+90h] [rbp-188h]
  unsigned __int64 v163; // [rsp+98h] [rbp-180h]
  _QWORD v164[2]; // [rsp+A0h] [rbp-178h] BYREF
  void *v165; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v166; // [rsp+B8h] [rbp-160h]
  _QWORD v167[2]; // [rsp+C0h] [rbp-158h] BYREF
  char v168; // [rsp+D0h] [rbp-148h] BYREF
  __int128 v169; // [rsp+D8h] [rbp-140h]
  char v170; // [rsp+E8h] [rbp-130h]
  __int128 v171; // [rsp+F0h] [rbp-128h] BYREF
  char v172; // [rsp+100h] [rbp-118h] BYREF
  __int128 v173; // [rsp+108h] [rbp-110h]
  char v174; // [rsp+118h] [rbp-100h]
  __int64 v175; // [rsp+120h] [rbp-F8h]
  __int64 v176; // [rsp+128h] [rbp-F0h]
  void *v177; // [rsp+130h] [rbp-E8h] BYREF
  char v178[16]; // [rsp+138h] [rbp-E0h] BYREF
  char v179; // [rsp+148h] [rbp-D0h]
  __int64 v180; // [rsp+150h] [rbp-C8h]
  __int64 v181; // [rsp+158h] [rbp-C0h]
  void *v182[2]; // [rsp+160h] [rbp-B8h] BYREF
  __int64 v183; // [rsp+170h] [rbp-A8h] BYREF
  _QWORD v184[3]; // [rsp+178h] [rbp-A0h] BYREF
  _QWORD v185[3]; // [rsp+190h] [rbp-88h] BYREF
  char v186; // [rsp+1A8h] [rbp-70h] BYREF
  char v187[40]; // [rsp+1B0h] [rbp-68h] BYREF
  __int64 v188; // [rsp+1D8h] [rbp-40h]

  v188 = __readfsqword(0x28u);
  v177 = &v178[8];
  *(_QWORD *)v178 = 0;
  v178[8] = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    ida_mcp::tools::patching::`anonymous namespace'::patch_bytes_impl(
      a2,
      (int)"address",
      v65,
      v66,
      v67,
      v68,
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
      a51,
      a52,
      a53,
      a54,
      a55,
      a56,
      a57,
      a58,
      a59,
      a60,
      a61,
      a62,
      a63,
      a64,
      a65);
  std::string::_M_assign();
  v69 = v177;
  v70 = __errno_location();
  *v70 = 0;
  v71 = v70;
  v152 = __isoc23_strtoull();
  if ( v69 == v158 || *v158 || *v71 == 34 && v152 == -1 )
  {
    if ( v177 != &v178[8] )
      operator delete(v177, *(_QWORD *)&v178[8] + 1LL);
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    JUMPOUT(0xECD6C);
  }
  if ( v177 != &v178[8] )
    operator delete(v177, *(_QWORD *)&v178[8] + 1LL);
  v73 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  LOBYTE(v161[0]) = 0;
  v160 = 0;
  v159 = v161;
  if ( *v73 != 3 )
    JUMPOUT(0xECB58);
  std::string::_M_assign();
  v74 = (char *)v159;
  v75 = 0;
  v76 = (char *)v159 + v160;
  v162 = v164;
  v163 = 0;
  LOBYTE(v164[0]) = 0;
  if ( (char *)v159 + v160 != v159 )
  {
    do
    {
      v77 = *v74;
      if ( *v74 != 32 && v77 != 9 )
      {
        v78 = v162;
        v79 = 15;
        v80 = v75 + 1;
        if ( v162 != v164 )
          v79 = v164[0];
        if ( v79 < v80 )
        {
          std::string::_M_mutate();
          v78 = v162;
          v80 = v75 + 1;
        }
        v78[v75] = v77;
        v163 = v80;
        *((_BYTE *)v162 + v80) = 0;
        v75 = v163;
      }
      ++v74;
    }
    while ( v76 != v74 );
    if ( (v75 & 1) != 0 )
      JUMPOUT(0xECD9A);
  }
  v139 = nullptr;
  v81 = nullptr;
  v82 = 0;
  src = nullptr;
  while ( v82 < v75 )
  {
    v86 = v75 - v82;
    v87 = &dword_0 + 2;
    v182[0] = &v183;
    v88 = (char *)v162 + v82;
    if ( v86 <= 2 )
      v87 = (void *)v86;
    if ( v86 == 1 )
      LOBYTE(v183) = *v88;
    else
      LOWORD(v183) = *(_WORD *)v88;
    v83 = *v71;
    v182[1] = v87;
    *v71 = 0;
    *((_BYTE *)&v184[-1] + (_QWORD)v87) = 0;
    v84 = v182[0];
    v85 = __isoc23_strtoul();
    if ( v84 == v158 )
      JUMPOUT(0xEC938);
    if ( *v71 == 34 )
      JUMPOUT(0xEC957);
    if ( !*v71 )
      *v71 = v83;
    if ( v139 == v81 )
    {
      v89 = v139 - src;
      if ( v139 - src == 0x7FFFFFFFFFFFFFFFLL )
        JUMPOUT(0xECAB6);
      v90 = 1;
      v155 = v85;
      if ( v89 )
        v90 = v139 - src;
      v91 = v89 + v90;
      if ( v91 > 0x7FFFFFFFFFFFFFFFLL )
        v91 = 0x7FFFFFFFFFFFFFFFLL;
      v92 = (char *)operator new(v91);
      v93 = v92;
      v92[v89] = v85;
      if ( v89 )
        v93 = (char *)memcpy(v92, src, v89);
      v94 = src;
      v81 = &v93[v89 + 1];
      if ( src )
      {
        v95 = src;
        srcb = v93;
        operator delete(v95, v139 - v94);
        v93 = srcb;
      }
      src = v93;
      v139 = &v93[v91];
    }
    else
    {
      *v81++ = v85;
    }
    if ( v182[0] != &v183 )
      operator delete(v182[0], v183 + 1);
    v75 = v163;
    v82 += 2LL;
  }
  if ( src == v81 )
    JUMPOUT(0xECCBF);
  v96 = v152;
  v97 = v81 - src;
  patch_bytes();
  while ( src[v96 - v152] == (unsigned __int8)get_byte() )
  {
    if ( v97 + v152 == ++v96 )
    {
      LOBYTE(v155) = 1;
      goto LABEL_53;
    }
  }
  LOBYTE(v155) = 0;
LABEL_53:
  v168 = 0;
  *(_QWORD *)&v169 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v168 = 3;
  v98 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v98,
    "address",
    v99,
    v100,
    v101,
    v102,
    v134,
    (int)v139,
    (__int64)&v158);
  v169 = (unsigned __int64)v98;
  qsnprintf();
  std::string::basic_string<std::allocator<char>>((__int64 *)&v165, v187, v103, v104, v105, v106, v135, v140, v145);
  v170 = 0;
  *(_QWORD *)&v171 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v170 = 3;
  v107 = (_QWORD *)operator new(0x20u);
  v108 = v165;
  v109 = v107 + 2;
  v110 = v166;
  *v107 = v107 + 2;
  if ( v108 == v167 )
  {
    v126 = v110 + 1;
    if ( (unsigned int)(v110 + 1) >= 8 )
    {
      v107[2] = v167[0];
      *(_QWORD *)((char *)v109 + v126 - 8) = *(_QWORD *)((char *)&v167[-1] + v126);
      v127 = (unsigned __int64)(v107 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v128 = (char *)v109 - v127;
      v129 = (char *)((char *)v167 - v128);
      v130 = ((_DWORD)v128 + v126) & 0xFFFFFFF8;
      if ( v130 >= 8 )
      {
        v131 = v130 & 0xFFFFFFF8;
        v132 = 0;
        do
        {
          v133 = v132;
          v132 += 8;
          *(_QWORD *)(v127 + v133) = *(_QWORD *)&v129[v133];
        }
        while ( v132 < v131 );
      }
    }
    else if ( (v126 & 4) != 0 )
    {
      *((_DWORD *)v107 + 4) = v167[0];
      *(_DWORD *)((char *)v109 + v126 - 4) = *(_DWORD *)((char *)&v166 + v126 + 4);
    }
    else if ( (_DWORD)v110 != -1 )
    {
      *((_BYTE *)v107 + 16) = v167[0];
      if ( (v126 & 2) != 0 )
        *(_WORD *)((char *)v109 + v126 - 2) = *(_WORD *)((char *)&v166 + v126 + 6);
    }
  }
  else
  {
    *v107 = v108;
    v107[2] = v167[0];
  }
  v107[1] = v110;
  v165 = v167;
  LOBYTE(v167[0]) = 0;
  v166 = 0;
  v171 = (unsigned __int64)v107;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v182,
    (const __m128i *)&v168,
    2,
    1);
  v183 = 0;
  v172 = 0;
  *(_QWORD *)&v173 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v172 = 3;
  v111 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v111, "size", v112, v113, v114, v115, v136, v141, (__int64)&v171);
  v174 = 6;
  v175 = v97;
  v176 = 0;
  v173 = (unsigned __int64)v111;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v184,
    (const __m128i *)&v172,
    2,
    1);
  v184[2] = 0;
  LOBYTE(v177) = 0;
  *(_QWORD *)v178 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v177) = 3;
  v116 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v116, "success", v117, v118, v119, v120, v137, v142, v146);
  v179 = 4;
  v180 = (unsigned __int8)v155;
  v181 = 0;
  *(_OWORD *)v178 = (unsigned __int64)v116;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v185,
    (const __m128i *)&v177,
    2,
    1);
  v185[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    (__int64)v182,
    3,
    v121,
    v122,
    v123,
    v138,
    v143,
    v147,
    (int)src,
    (int)v164,
    (int)&v177,
    (__int64)&v168,
    (int)a1,
    v155,
    (int)&v159,
    (int)v161,
    (char)&v165,
    v157,
    (int)v158,
    (__int64)v159);
  v124 = (void **)&v186;
  do
  {
    v124 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v124 != v182 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v165 != v167 )
    operator delete(v165, v167[0] + 1LL);
  if ( srca )
    operator delete(srca, v144 - (_QWORD)srca);
  if ( v162 != v151 )
    operator delete(v162, v164[0] + 1LL);
  if ( v159 != v156 )
    operator delete(v159, v161[0] + 1LL);
  return *(_QWORD *)v154;
}

