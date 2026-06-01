_QWORD *__fastcall ida_mcp::tools::navigation::get_first_seg_nav(int a1)
{
  __int64 first_seg; // rax
  _QWORD *v2; // rbp
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // rsi
  __int64 *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // rsi
  __int64 *v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __m128i v44; // xmm0
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __m128i *v48; // rbp
  __int64 *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 *v55; // r12
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v60; // edx
  unsigned int v61; // edx
  unsigned __int64 v62; // rdi
  char *v63; // rcx
  char *v64; // r8
  unsigned int v65; // edx
  unsigned int v66; // edx
  unsigned int v67; // ecx
  __int64 v68; // r9
  unsigned __int64 v69; // rdi
  char *v70; // rcx
  char *v71; // r8
  unsigned int v72; // edx
  unsigned int v73; // edx
  unsigned int v74; // ecx
  __int64 v75; // r9
  int v76; // [rsp+0h] [rbp-298h]
  int v77; // [rsp+0h] [rbp-298h]
  int v78; // [rsp+0h] [rbp-298h]
  int v79; // [rsp+0h] [rbp-298h]
  int v80; // [rsp+0h] [rbp-298h]
  int v81; // [rsp+0h] [rbp-298h]
  int v82; // [rsp+0h] [rbp-298h]
  int v83; // [rsp+0h] [rbp-298h]
  int v84; // [rsp+0h] [rbp-298h]
  int v85; // [rsp+8h] [rbp-290h]
  int v86; // [rsp+8h] [rbp-290h]
  int v87; // [rsp+8h] [rbp-290h]
  int v88; // [rsp+8h] [rbp-290h]
  int v89; // [rsp+8h] [rbp-290h]
  __int64 v90; // [rsp+8h] [rbp-290h]
  _QWORD *v91; // [rsp+8h] [rbp-290h]
  _QWORD *v92; // [rsp+8h] [rbp-290h]
  int v93; // [rsp+8h] [rbp-290h]
  __int64 v94; // [rsp+10h] [rbp-288h]
  __int64 v95; // [rsp+10h] [rbp-288h]
  __int64 v96; // [rsp+10h] [rbp-288h]
  __int64 v97; // [rsp+10h] [rbp-288h]
  __int64 v98; // [rsp+10h] [rbp-288h]
  int v99; // [rsp+10h] [rbp-288h]
  int v100; // [rsp+10h] [rbp-288h]
  __int64 v101; // [rsp+10h] [rbp-288h]
  int v102; // [rsp+18h] [rbp-280h]
  int v103; // [rsp+20h] [rbp-278h]
  int v104; // [rsp+28h] [rbp-270h]
  __int64 v105; // [rsp+30h] [rbp-268h]
  int v106; // [rsp+38h] [rbp-260h]
  int v107; // [rsp+40h] [rbp-258h]
  int v108; // [rsp+48h] [rbp-250h]
  int v109; // [rsp+50h] [rbp-248h]
  char v110; // [rsp+58h] [rbp-240h]
  __int64 v111; // [rsp+60h] [rbp-238h]
  int v112; // [rsp+68h] [rbp-230h]
  __m128i v113; // [rsp+70h] [rbp-228h] BYREF
  __int64 v114; // [rsp+80h] [rbp-218h]
  __int128 v115; // [rsp+88h] [rbp-210h]
  void *v116[4]; // [rsp+A0h] [rbp-1F8h] BYREF
  void *v117; // [rsp+C0h] [rbp-1D8h] BYREF
  __int64 v118; // [rsp+C8h] [rbp-1D0h]
  _QWORD v119[2]; // [rsp+D0h] [rbp-1C8h] BYREF
  void *v120; // [rsp+E0h] [rbp-1B8h] BYREF
  __int64 v121; // [rsp+E8h] [rbp-1B0h]
  _QWORD v122[2]; // [rsp+F0h] [rbp-1A8h] BYREF
  char v123; // [rsp+100h] [rbp-198h] BYREF
  __int128 v124; // [rsp+108h] [rbp-190h] BYREF
  char v125; // [rsp+118h] [rbp-180h]
  __int128 v126; // [rsp+120h] [rbp-178h] BYREF
  char v127; // [rsp+130h] [rbp-168h] BYREF
  __int128 v128; // [rsp+138h] [rbp-160h] BYREF
  char v129; // [rsp+148h] [rbp-150h]
  __int128 v130; // [rsp+150h] [rbp-148h] BYREF
  char v131; // [rsp+160h] [rbp-138h] BYREF
  __int128 v132; // [rsp+168h] [rbp-130h] BYREF
  char v133; // [rsp+178h] [rbp-120h]
  __int128 v134; // [rsp+180h] [rbp-118h] BYREF
  char v135; // [rsp+190h] [rbp-108h] BYREF
  __int128 v136; // [rsp+198h] [rbp-100h]
  __int64 v137; // [rsp+1A8h] [rbp-F0h]
  __int128 v138; // [rsp+1B0h] [rbp-E8h]
  char v139; // [rsp+1C0h] [rbp-D8h] BYREF
  __int128 v140; // [rsp+1C8h] [rbp-D0h] BYREF
  _BYTE v141[24]; // [rsp+1D8h] [rbp-C0h]
  __m128i v142; // [rsp+1F0h] [rbp-A8h] BYREF
  __int64 v143; // [rsp+200h] [rbp-98h]
  __int64 v144; // [rsp+208h] [rbp-90h] BYREF
  __int64 v145; // [rsp+218h] [rbp-80h]
  _QWORD v146[3]; // [rsp+220h] [rbp-78h] BYREF
  _QWORD v147[3]; // [rsp+238h] [rbp-60h] BYREF
  char v148; // [rsp+250h] [rbp-48h] BYREF
  unsigned __int64 v149; // [rsp+258h] [rbp-40h]

  v149 = __readfsqword(0x28u);
  first_seg = get_first_seg();
  if ( first_seg )
  {
    v2 = (_QWORD *)first_seg;
    v115 = 0;
    v114 = 0;
    get_segm_name();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v139 = 3;
    v3 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v3, "first_segment", v4, v5, v6, v7, v76, a1, v94);
    v140 = (unsigned __int64)v3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v123 = 3;
    v8 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v8, "name", v9, v10, v11, v12, v77, v85, v95);
    v124 = (unsigned __int64)v8;
    v125 = 0;
    *(_QWORD *)&v126 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v125 = 3;
    v13 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v13,
      _qstring<char>::c_str(void)const::nullstr,
      v14,
      v15,
      v16,
      v17,
      v78,
      v86,
      v96);
    v126 = (unsigned __int64)v13;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v142,
      (const __m128i *)&v123);
    v143 = 0;
    v127 = 0;
    *(_QWORD *)&v128 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v127 = 3;
    v18 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v18, "start", v19, v20, v21, v22, v79, v87, v97);
    v128 = (unsigned __int64)v18;
    ida_mcp::format_ea[abi:cxx11]();
    v129 = 0;
    *(_QWORD *)&v130 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v129 = 3;
    v23 = (_QWORD *)operator new(0x20u);
    v24 = v117;
    v25 = v23 + 2;
    v26 = v118;
    *v23 = v23 + 2;
    if ( v24 == v119 )
    {
      v60 = v26 + 1;
      if ( (unsigned int)(v26 + 1) >= 8 )
      {
        v23[2] = v119[0];
        *(_QWORD *)((char *)v25 + v60 - 8) = *(_QWORD *)((char *)&v119[-1] + v60);
        v62 = (unsigned __int64)(v23 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v63 = (char *)v25 - v62;
        v64 = (char *)((char *)v119 - v63);
        v65 = ((_DWORD)v63 + v60) & 0xFFFFFFF8;
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
      else if ( (v60 & 4) != 0 )
      {
        *((_DWORD *)v23 + 4) = v119[0];
        *(_DWORD *)((char *)v25 + v60 - 4) = *(_DWORD *)((char *)&v118 + v60 + 4);
      }
      else if ( (_DWORD)v26 != -1 )
      {
        *((_BYTE *)v23 + 16) = v119[0];
        if ( (v60 & 2) != 0 )
          *(_WORD *)((char *)v25 + v60 - 2) = *(_WORD *)((char *)&v118 + v60 + 6);
      }
    }
    else
    {
      *v23 = v24;
      v23[2] = v119[0];
    }
    v23[1] = v26;
    v117 = v119;
    v118 = 0;
    LOBYTE(v119[0]) = 0;
    v130 = (unsigned __int64)v23;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v144,
      (const __m128i *)&v127);
    v145 = 0;
    v131 = 0;
    *(_QWORD *)&v132 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v131 = 3;
    v27 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v27, "end", v28, v29, v30, v31, v80, v88, v98);
    v132 = (unsigned __int64)v27;
    ida_mcp::format_ea[abi:cxx11]();
    v133 = 0;
    *(_QWORD *)&v134 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v133 = 3;
    v32 = (_QWORD *)operator new(0x20u);
    v33 = v120;
    v34 = v32 + 2;
    v35 = v121;
    *v32 = v32 + 2;
    if ( v33 == v122 )
    {
      v61 = v35 + 1;
      if ( (unsigned int)(v35 + 1) >= 8 )
      {
        v32[2] = v122[0];
        *(_QWORD *)((char *)v34 + v61 - 8) = *(_QWORD *)((char *)&v122[-1] + v61);
        v69 = (unsigned __int64)(v32 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v70 = (char *)v34 - v69;
        v71 = (char *)((char *)v122 - v70);
        v72 = ((_DWORD)v70 + v61) & 0xFFFFFFF8;
        if ( v72 >= 8 )
        {
          v73 = v72 & 0xFFFFFFF8;
          v74 = 0;
          do
          {
            v75 = v74;
            v74 += 8;
            *(_QWORD *)(v69 + v75) = *(_QWORD *)&v71[v75];
          }
          while ( v74 < v73 );
        }
      }
      else if ( (v61 & 4) != 0 )
      {
        *((_DWORD *)v32 + 4) = v122[0];
        *(_DWORD *)((char *)v34 + v61 - 4) = *(_DWORD *)((char *)&v121 + v61 + 4);
      }
      else if ( (_DWORD)v35 != -1 )
      {
        *((_BYTE *)v32 + 16) = v122[0];
        if ( (v61 & 2) != 0 )
          *(_WORD *)((char *)v34 + v61 - 2) = *(_WORD *)((char *)&v121 + v61 + 6);
      }
    }
    else
    {
      *v32 = v33;
      v32[2] = v122[0];
    }
    v32[1] = v35;
    v120 = v122;
    v121 = 0;
    LOBYTE(v122[0]) = 0;
    v134 = (unsigned __int64)v32;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v146,
      (const __m128i *)&v131);
    v146[2] = 0;
    v135 = 0;
    *(_QWORD *)&v136 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v135 = 3;
    v36 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v36, "size", v37, v38, v39, v40, v81, v89, (__int64)&v134);
    v136 = (unsigned __int64)v36;
    v138 = (unsigned __int64)(v2[1] - *v2);
    LOBYTE(v137) = 6;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v147,
      (const __m128i *)&v135);
    v147[2] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v113,
      (__int64)&v142,
      4,
      v41,
      v42,
      v43,
      v82,
      v90,
      v99,
      (int)&v140,
      (int)&v124,
      (int)&v126,
      (__int64)&v128,
      (int)&v130,
      (int)&v132,
      (int)&v127,
      (int)&v131,
      (char)&v123,
      (__int64)&v117,
      (int)&v120,
      v113.m128i_i64[0]);
    v44 = _mm_load_si128(&v113);
    *(_QWORD *)&v141[16] = 0;
    *(__m128i *)v141 = v44;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v116,
      (const __m128i *)&v139);
    v116[2] = nullptr;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v91,
      (__int64)v116,
      1,
      v45,
      v46,
      v47,
      v83,
      (__int64)v91,
      v100,
      v102,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113.m128i_i64[0]);
    v48 = (__m128i *)&v148;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    do
    {
      v48 = (__m128i *)((char *)v48 - 24);
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v48 != &v142 );
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v120 != v122 )
      operator delete(v120, v122[0] + 1LL);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v117 != v119 )
      operator delete(v117, v119[0] + 1LL);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( v114 )
    {
      *(_QWORD *)&v115 = 0;
      qfree();
    }
  }
  else
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v135 = 3;
    v50 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v50, "first_segment", v51, v52, v53, v54, v76, a1, v94);
    v136 = (unsigned __int64)v50;
    v137 = 0;
    v138 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v142,
      (const __m128i *)&v135);
    v143 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[5],char [5],0>();
    *((_QWORD *)&v140 + 1) = 0;
    v141[0] = 0;
    *(_QWORD *)&v141[8] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v141[0] = 3;
    v55 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v55,
      "No segments found in database",
      v56,
      v57,
      v58,
      v59,
      v84,
      v93,
      v101);
    *(_OWORD *)&v141[8] = (unsigned __int64)v55;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v144,
      (const __m128i *)&v139);
    v145 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v92,
      &v142);
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  return v92;
}

