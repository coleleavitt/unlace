__int64 __fastcall ida_mcp::tools::jumptables::`anonymous namespace'::del_switch_info_impl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        __int64 a12,
        int a13,
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
        __int64 a24,
        __int64 a25,
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
        char a36,
        int a37,
        char a38,
        char a39,
        int a40,
        char a41,
        char a42,
        int a43,
        char a44,
        char a45,
        int a46,
        char a47,
        char a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        __int64 a55)
{
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rdx
  char v61; // bp
  __int64 *v62; // rbp
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  _QWORD *v71; // rax
  _QWORD *v72; // rdx
  _QWORD *v73; // rcx
  __int64 v74; // rsi
  __int64 *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __m128i v80; // xmm0
  unsigned int v82; // edx
  unsigned __int64 v83; // rdi
  char *v84; // rcx
  char *v85; // r8
  unsigned int v86; // edx
  unsigned int v87; // edx
  unsigned int v88; // ecx
  __int64 v89; // r9
  __m128i v90; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v91; // [rsp+10h] [rbp-1B8h]
  void **v92; // [rsp+18h] [rbp-1B0h]
  __int64 v93; // [rsp+20h] [rbp-1A8h]
  __int64 v94; // [rsp+28h] [rbp-1A0h]
  __int64 v95; // [rsp+30h] [rbp-198h]
  __m128i si128; // [rsp+38h] [rbp-190h]
  __int128 v97; // [rsp+48h] [rbp-180h]
  __int64 v98; // [rsp+58h] [rbp-170h]
  __int64 v99; // [rsp+60h] [rbp-168h]
  __int64 v100; // [rsp+68h] [rbp-160h]
  __int64 v101; // [rsp+70h] [rbp-158h]
  __int64 v102; // [rsp+78h] [rbp-150h]
  __int64 v103; // [rsp+80h] [rbp-148h]
  __int64 v104; // [rsp+88h] [rbp-140h]
  __int64 v105; // [rsp+90h] [rbp-138h]
  __int128 v106; // [rsp+98h] [rbp-130h]
  void *v107; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v108; // [rsp+B8h] [rbp-110h]
  _QWORD v109[2]; // [rsp+C0h] [rbp-108h] BYREF
  char v110; // [rsp+D0h] [rbp-F8h] BYREF
  __int128 v111; // [rsp+D8h] [rbp-F0h]
  char v112; // [rsp+E8h] [rbp-E0h]
  __int128 v113; // [rsp+F0h] [rbp-D8h]
  void *v114; // [rsp+100h] [rbp-C8h] BYREF
  __m128i v115; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v116; // [rsp+118h] [rbp-B0h]
  __int64 v117; // [rsp+120h] [rbp-A8h]
  __int64 v118; // [rsp+128h] [rbp-A0h]
  __m128i v119; // [rsp+130h] [rbp-98h] BYREF
  __int64 v120; // [rsp+140h] [rbp-88h]
  _QWORD v121[3]; // [rsp+148h] [rbp-80h] BYREF
  char v122[40]; // [rsp+160h] [rbp-68h] BYREF
  unsigned __int64 v123; // [rsp+188h] [rbp-40h]

  v90.m128i_i64[1] = a1;
  v123 = __readfsqword(0x28u);
  v114 = &v115.m128i_u64[1];
  v115.m128i_i64[0] = 0;
  v115.m128i_i8[8] = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    ida_mcp::tools::jumptables::`anonymous namespace'::del_switch_info_impl(
      a2,
      (__int64)"address",
      v55,
      v56,
      v57,
      v58,
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
      a55);
  std::string::_M_assign();
  v59 = ida_mcp::parse_ea(v114, v115.m128i_u64[0]);
  v94 = v60;
  v61 = v60;
  v93 = v59;
  if ( v114 != &v115.m128i_u64[1] )
    operator delete(v114, v115.m128i_i64[1] + 1);
  if ( !v61 )
    JUMPOUT(0xFCD4D);
  v95 = 0x800000;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3E2390);
  v97 = -1;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0xFFFFFFFFLL;
  v102 = 0;
  v103 = 2;
  v104 = -1;
  v105 = 0;
  v106 = 0;
  if ( get_switch_info() <= 0 )
    JUMPOUT(0xFCCC2);
  del_switch_info();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v110 = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v62,
    "address",
    v63,
    v64,
    v65,
    v66,
    v90.m128i_i32[0],
    v90.m128i_i32[2],
    v91);
  v111 = (unsigned __int64)v62;
  qsnprintf();
  v92 = &v107;
  std::string::basic_string<std::allocator<char>>(
    (__int64 *)&v107,
    v122,
    v67,
    v68,
    v69,
    v70,
    v90.m128i_i32[0],
    v90.m128i_i32[2],
    v91);
  v112 = 0;
  *(_QWORD *)&v113 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v112 = 3;
  v71 = (_QWORD *)operator new(0x20u);
  v72 = v107;
  v73 = v71 + 2;
  v74 = v108;
  *v71 = v71 + 2;
  if ( v72 == v109 )
  {
    v82 = v74 + 1;
    if ( (unsigned int)(v74 + 1) >= 8 )
    {
      v71[2] = v109[0];
      *(_QWORD *)((char *)v73 + v82 - 8) = *(_QWORD *)((char *)&v109[-1] + v82);
      v83 = (unsigned __int64)(v71 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v84 = (char *)v73 - v83;
      v85 = (char *)((char *)v109 - v84);
      v86 = ((_DWORD)v84 + v82) & 0xFFFFFFF8;
      if ( v86 >= 8 )
      {
        v87 = v86 & 0xFFFFFFF8;
        v88 = 0;
        do
        {
          v89 = v88;
          v88 += 8;
          *(_QWORD *)(v83 + v89) = *(_QWORD *)&v85[v89];
        }
        while ( v88 < v87 );
      }
    }
    else if ( (v82 & 4) != 0 )
    {
      *((_DWORD *)v71 + 4) = v109[0];
      *(_DWORD *)((char *)v73 + v82 - 4) = *(_DWORD *)((char *)&v108 + v82 + 4);
    }
    else if ( (_DWORD)v74 != -1 )
    {
      *((_BYTE *)v71 + 16) = v109[0];
      if ( (v82 & 2) != 0 )
        *(_WORD *)((char *)v73 + v82 - 2) = *(_WORD *)((char *)&v108 + v82 + 6);
    }
  }
  else
  {
    *v71 = v72;
    v71[2] = v109[0];
  }
  v71[1] = v74;
  v107 = v109;
  v108 = 0;
  LOBYTE(v109[0]) = 0;
  v113 = (unsigned __int64)v71;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v119,
    (const __m128i *)&v110);
  v120 = 0;
  LOBYTE(v114) = 0;
  v115.m128i_i64[0] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v114) = 3;
  v75 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(
    v75,
    "success",
    v76,
    v77,
    v78,
    v79,
    (int)v75,
    v90.m128i_i32[2],
    (__int64)&v110);
  v80 = _mm_loadl_epi64(&v90);
  v116 = 4;
  v117 = 1;
  v118 = 0;
  v115 = v80;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v121,
    (const __m128i *)&v114);
  v121[2] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    (_QWORD *)v90.m128i_i64[1],
    &v119);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v107 != v109 )
    operator delete(v107, v109[0] + 1LL);
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree();
  }
  return v90.m128i_i64[1];
}

