_QWORD *__fastcall ida_mcp::tools::navigation::get_next_seg_nav(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  std::runtime_error *exception; // rbx
  char v7; // dl
  char v8; // bl
  _QWORD *next_seg; // rbp
  __int64 *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rsi
  __int64 *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  const char *v25; // r12
  __int64 *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __m128i v45; // xmm0
  char *v46; // rbp
  __int64 *v48; // rbp
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rbp
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _QWORD *v61; // rbp
  unsigned int v62; // edi
  unsigned __int64 v63; // r8
  int v64; // edx
  char *v65; // rcx
  unsigned int v66; // edi
  unsigned int v67; // edi
  unsigned int v68; // edx
  __int64 v69; // r9
  int v70; // [rsp+0h] [rbp-318h]
  int v71; // [rsp+0h] [rbp-318h]
  int v72; // [rsp+0h] [rbp-318h]
  int v73; // [rsp+0h] [rbp-318h]
  int v74; // [rsp+0h] [rbp-318h]
  int v75; // [rsp+0h] [rbp-318h]
  int v76; // [rsp+0h] [rbp-318h]
  int v77; // [rsp+0h] [rbp-318h]
  int v78; // [rsp+0h] [rbp-318h]
  int v79; // [rsp+8h] [rbp-310h]
  int v80; // [rsp+8h] [rbp-310h]
  int v81; // [rsp+8h] [rbp-310h]
  int v82; // [rsp+8h] [rbp-310h]
  int v83; // [rsp+8h] [rbp-310h]
  __int64 v84; // [rsp+8h] [rbp-310h]
  _QWORD *v85; // [rsp+8h] [rbp-310h]
  int v86; // [rsp+8h] [rbp-310h]
  _QWORD *v87; // [rsp+8h] [rbp-310h]
  int v88; // [rsp+10h] [rbp-308h]
  __int64 v89; // [rsp+10h] [rbp-308h]
  __int64 v90; // [rsp+10h] [rbp-308h]
  __int64 v91; // [rsp+10h] [rbp-308h]
  __int64 v92; // [rsp+10h] [rbp-308h]
  int v93; // [rsp+10h] [rbp-308h]
  __int64 v94; // [rsp+10h] [rbp-308h]
  int v95; // [rsp+10h] [rbp-308h]
  __int64 v96; // [rsp+18h] [rbp-300h]
  int v97; // [rsp+18h] [rbp-300h]
  __int64 v98; // [rsp+20h] [rbp-2F8h]
  int v99; // [rsp+20h] [rbp-2F8h]
  char v100; // [rsp+28h] [rbp-2F0h]
  int v101; // [rsp+28h] [rbp-2F0h]
  int v102; // [rsp+30h] [rbp-2E8h]
  __int64 v103; // [rsp+30h] [rbp-2E8h]
  int v104; // [rsp+38h] [rbp-2E0h]
  int v105; // [rsp+38h] [rbp-2E0h]
  __int64 v106; // [rsp+40h] [rbp-2D8h]
  int v107; // [rsp+40h] [rbp-2D8h]
  int v108; // [rsp+48h] [rbp-2D0h]
  char v109; // [rsp+58h] [rbp-2C0h]
  __int64 v110; // [rsp+60h] [rbp-2B8h]
  int v111; // [rsp+68h] [rbp-2B0h]
  __int64 v112; // [rsp+70h] [rbp-2A8h]
  __m128i v113; // [rsp+90h] [rbp-288h] BYREF
  const char *v114; // [rsp+A0h] [rbp-278h]
  __int128 v115; // [rsp+A8h] [rbp-270h]
  void *v116; // [rsp+C0h] [rbp-258h] BYREF
  __int64 v117; // [rsp+C8h] [rbp-250h]
  _QWORD v118[2]; // [rsp+D0h] [rbp-248h] BYREF
  void *v119; // [rsp+E0h] [rbp-238h] BYREF
  __int64 v120; // [rsp+F0h] [rbp-228h] BYREF
  void *v121; // [rsp+100h] [rbp-218h] BYREF
  __int64 v122; // [rsp+110h] [rbp-208h] BYREF
  char v123; // [rsp+120h] [rbp-1F8h] BYREF
  __int128 v124; // [rsp+128h] [rbp-1F0h] BYREF
  char v125; // [rsp+138h] [rbp-1E0h]
  __int128 v126; // [rsp+140h] [rbp-1D8h] BYREF
  char v127; // [rsp+150h] [rbp-1C8h] BYREF
  __int128 v128; // [rsp+158h] [rbp-1C0h] BYREF
  __int64 v129; // [rsp+178h] [rbp-1A0h]
  char v130; // [rsp+180h] [rbp-198h] BYREF
  __int128 v131; // [rsp+188h] [rbp-190h] BYREF
  __int64 v132; // [rsp+1A8h] [rbp-170h]
  char v133; // [rsp+1B0h] [rbp-168h] BYREF
  __int128 v134; // [rsp+1B8h] [rbp-160h]
  char v135; // [rsp+1C8h] [rbp-150h]
  __int64 v136; // [rsp+1D0h] [rbp-148h]
  __int64 v137; // [rsp+1D8h] [rbp-140h]
  __int64 v138; // [rsp+1E0h] [rbp-138h] BYREF
  __int128 v139; // [rsp+1E8h] [rbp-130h] BYREF
  char v140; // [rsp+1F8h] [rbp-120h]
  __int128 v141; // [rsp+200h] [rbp-118h] BYREF
  char v142; // [rsp+210h] [rbp-108h] BYREF
  __int128 v143; // [rsp+218h] [rbp-100h]
  _BYTE v144[24]; // [rsp+228h] [rbp-F0h] BYREF
  __m128i v145; // [rsp+240h] [rbp-D8h] BYREF
  __int64 v146; // [rsp+250h] [rbp-C8h] BYREF
  __int64 v147; // [rsp+258h] [rbp-C0h] BYREF
  __int128 v148; // [rsp+260h] [rbp-B8h]
  _QWORD v149[2]; // [rsp+270h] [rbp-A8h] BYREF
  __int64 v150; // [rsp+280h] [rbp-98h]
  _QWORD v151[2]; // [rsp+288h] [rbp-90h] BYREF
  __int64 v152; // [rsp+298h] [rbp-80h]
  _QWORD v153[2]; // [rsp+2A0h] [rbp-78h] BYREF
  __int64 v154; // [rsp+2B0h] [rbp-68h]
  _QWORD v155[3]; // [rsp+2B8h] [rbp-60h] BYREF
  char v156; // [rsp+2D0h] [rbp-48h] BYREF
  unsigned __int64 v157; // [rsp+2D8h] [rbp-40h]

  v157 = __readfsqword(0x28u);
  v145.m128i_i64[0] = (__int64)&v146;
  v145.m128i_i64[1] = 0;
  LOBYTE(v146) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
                   a2,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   v70,
                   a1,
                   v88,
                   v96,
                   v98,
                   v100,
                   v102,
                   v104,
                   v106) != 3 )
    JUMPOUT(0x7AAE3);
  std::string::_M_assign();
  ida_mcp::parse_ea(v145.m128i_i64[0], v145.m128i_u64[1]);
  v8 = v7;
  if ( (__int64 *)v145.m128i_i64[0] != &v146 )
    operator delete((void *)v145.m128i_i64[0], v146 + 1);
  if ( !v8 )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Invalid address format");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  next_seg = (_QWORD *)get_next_seg();
  if ( next_seg )
  {
    v114 = nullptr;
    v115 = 0;
    get_segm_name();
    *(_QWORD *)&v139 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v138) = 3;
    v10 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v10, "current_address", v11, v12, v13, v14, v71, v79, v89);
    v139 = (unsigned __int64)v10;
    ida_mcp::format_ea[abi:cxx11]();
    v140 = 0;
    *(_QWORD *)&v141 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v140 = 3;
    v15 = (_QWORD *)operator new(0x20u);
    v16 = v116;
    v17 = v15 + 2;
    v18 = v117;
    *v15 = v15 + 2;
    if ( v16 == v118 )
    {
      v62 = v18 + 1;
      if ( (unsigned int)(v18 + 1) >= 8 )
      {
        v15[2] = v118[0];
        *(_QWORD *)((char *)v17 + v62 - 8) = *(_QWORD *)((char *)&v118[-1] + v62);
        v63 = (unsigned __int64)(v15 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v64 = (_DWORD)v17 - v63;
        v65 = (char *)((char *)v118 - ((char *)v17 - v63));
        v66 = (v64 + v62) & 0xFFFFFFF8;
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
      else if ( (v62 & 4) != 0 )
      {
        *((_DWORD *)v15 + 4) = v118[0];
        *(_DWORD *)((char *)v17 + v62 - 4) = *(_DWORD *)((char *)&v117 + v62 + 4);
      }
      else if ( (_DWORD)v18 != -1 )
      {
        *((_BYTE *)v15 + 16) = v118[0];
        if ( (v62 & 2) != 0 )
          *(_WORD *)((char *)v17 + v62 - 2) = *(_WORD *)((char *)&v117 + v62 + 6);
      }
    }
    else
    {
      *v15 = v16;
      v15[2] = v118[0];
    }
    v15[1] = v18;
    v116 = v118;
    v117 = 0;
    LOBYTE(v118[0]) = 0;
    v141 = (unsigned __int64)v15;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v145,
      (const __m128i *)&v138);
    v146 = 0;
    v142 = 0;
    *(_QWORD *)&v143 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v142 = 3;
    v19 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v19, "next_segment", v20, v21, v22, v23, v72, v80, v90);
    v123 = 0;
    *(_QWORD *)&v124 = 0;
    v143 = (unsigned __int64)v19;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v123 = 3;
    v24 = operator new(0x20u);
    *(_QWORD *)v24 = v24 + 16;
    strcpy((char *)(v24 + 16), "name");
    *(_QWORD *)(v24 + 8) = 4;
    v124 = (unsigned __int64)v24;
    if ( (_QWORD)v115 )
      v25 = v114;
    else
      v25 = _qstring<char>::c_str(void)const::nullstr;
    v125 = 0;
    *(_QWORD *)&v126 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v125 = 3;
    v26 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v26, v25, v27, v28, v29, v30, v73, v81, (__int64)&v124);
    v126 = (unsigned __int64)v26;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v149,
      (const __m128i *)&v123);
    v150 = 0;
    v127 = 0;
    *(_QWORD *)&v128 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v127 = 3;
    v31 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v31, "start", v32, v33, v34, v35, v74, v82, v91);
    v128 = (unsigned __int64)v31;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    v129 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v151,
      (const __m128i *)&v127);
    v152 = 0;
    v130 = 0;
    *(_QWORD *)&v131 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v130 = 3;
    v36 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v36, "end", v37, v38, v39, v40, v75, v83, v92);
    v131 = (unsigned __int64)v36;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    v132 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v153,
      (const __m128i *)&v130);
    v154 = 0;
    v133 = 0;
    *(_QWORD *)&v134 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v133 = 3;
    v41 = operator new(0x20u);
    strcpy((char *)(v41 + 16), "size");
    *(_QWORD *)v41 = v41 + 16;
    *(_QWORD *)(v41 + 8) = 4;
    v134 = (unsigned __int64)v41;
    v136 = next_seg[1] - *next_seg;
    v135 = 6;
    v137 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v155,
      (const __m128i *)&v133);
    v155[2] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v113,
      (__int64)v149,
      4,
      v42,
      v43,
      v44,
      v76,
      v84,
      v93,
      (int)&v126,
      (int)&v128,
      (int)&v131,
      (__int64)&v139,
      (int)&v141,
      (int)&v119,
      (int)&v121,
      (int)&v138,
      (char)&v127,
      (__int64)&v130,
      (int)&v123,
      (__int64)&v116);
    v45 = _mm_load_si128(&v113);
    *(_QWORD *)&v144[16] = 0;
    *(__m128i *)v144 = v45;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v147,
      (const __m128i *)&v142);
    *((_QWORD *)&v148 + 1) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v85,
      &v145);
    v46 = &v156;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    do
    {
      v46 -= 24;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v46 != (char *)v149 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v121 != &v122 )
      operator delete(v121, v122 + 1);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v119 != &v120 )
      operator delete(v119, v120 + 1);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v116 != v118 )
      operator delete(v116, v118[0] + 1LL);
    if ( v114 )
    {
      *(_QWORD *)&v115 = 0;
      qfree();
    }
  }
  else
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[16],char [16],0>(&v138);
    *((_QWORD *)&v139 + 1) = 0;
    ida_mcp::format_ea[abi:cxx11]();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<std::string,std::string,0>();
    *((_QWORD *)&v141 + 1) = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v149,
      (const __m128i *)&v138);
    v150 = 0;
    v142 = 0;
    *(_QWORD *)&v143 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v142 = 3;
    v48 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v48, "next_segment", v49, v50, v51, v52, v71, v79, v89);
    memset(v144, 0, sizeof(v144));
    v143 = (unsigned __int64)v48;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v151,
      (const __m128i *)&v142);
    v152 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
    v146 = 0;
    LOBYTE(v147) = 0;
    *(_QWORD *)&v148 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v147) = 3;
    v53 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v53, "No next segment found", v54, v55, v56, v57, v77, v86, v94);
    v148 = (unsigned __int64)v53;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v153,
      &v145);
    v154 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v87,
      (__int64)v149,
      3,
      v58,
      v59,
      v60,
      v78,
      (__int64)v87,
      v95,
      v97,
      v99,
      v101,
      v103,
      v105,
      v107,
      v108,
      (int)&v138,
      v109,
      v110,
      v111,
      v112);
    v61 = v155;
    do
    {
      v61 -= 3;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v61 != v149 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    std::string::_M_dispose();
  }
  return v85;
}

