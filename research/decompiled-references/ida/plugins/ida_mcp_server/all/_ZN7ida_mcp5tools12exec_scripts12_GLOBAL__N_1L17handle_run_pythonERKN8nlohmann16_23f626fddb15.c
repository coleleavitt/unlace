__int64 __fastcall ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_run_python(int a1)
{
  _BYTE *v1; // rax
  __int64 extlang; // rax
  __int64 v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // r15
  __int64 *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r15
  _QWORD *v21; // rax
  _BYTE *v22; // rdi
  __int64 *v23; // r12
  __m128i v24; // xmm0
  size_t v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  char *v40; // r15
  __int64 *v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v46; // r15
  _QWORD *v47; // rax
  _BYTE *v48; // rdi
  __int64 *v49; // r12
  __m128i v50; // xmm0
  size_t v51; // rcx
  __int64 v52; // rax
  __int64 *v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 *v58; // r15
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  _QWORD *v66; // r15
  _QWORD *v67; // rdi
  __int64 v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  unsigned __int64 v72; // rax
  int v73; // [rsp+0h] [rbp-208h]
  int v74; // [rsp+0h] [rbp-208h]
  int v75; // [rsp+0h] [rbp-208h]
  int v76; // [rsp+0h] [rbp-208h]
  _QWORD *v77; // [rsp+0h] [rbp-208h]
  __int64 v78; // [rsp+0h] [rbp-208h]
  int v79; // [rsp+0h] [rbp-208h]
  int v80; // [rsp+0h] [rbp-208h]
  _QWORD *v81; // [rsp+0h] [rbp-208h]
  int v82; // [rsp+8h] [rbp-200h]
  int v83; // [rsp+8h] [rbp-200h]
  int v84; // [rsp+8h] [rbp-200h]
  int v85; // [rsp+8h] [rbp-200h]
  __int64 v86; // [rsp+8h] [rbp-200h]
  int v87; // [rsp+8h] [rbp-200h]
  __int64 v88; // [rsp+8h] [rbp-200h]
  void *src; // [rsp+10h] [rbp-1F8h]
  void *srca; // [rsp+10h] [rbp-1F8h]
  void *srcd; // [rsp+10h] [rbp-1F8h]
  _BYTE *srcb; // [rsp+10h] [rbp-1F8h]
  void *srce; // [rsp+10h] [rbp-1F8h]
  int srcf; // [rsp+10h] [rbp-1F8h]
  _BYTE *srcc; // [rsp+10h] [rbp-1F8h]
  void *srcg; // [rsp+10h] [rbp-1F8h]
  int srch; // [rsp+10h] [rbp-1F8h]
  __m128i v98; // [rsp+20h] [rbp-1E8h] BYREF
  __m128i v99; // [rsp+30h] [rbp-1D8h] BYREF
  __int128 *v100; // [rsp+40h] [rbp-1C8h]
  __int128 *v101; // [rsp+48h] [rbp-1C0h]
  unsigned __int64 v102; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v103; // [rsp+58h] [rbp-1B0h]
  const char *v104; // [rsp+60h] [rbp-1A8h] BYREF
  __int128 v105; // [rsp+68h] [rbp-1A0h]
  void *v106; // [rsp+80h] [rbp-188h] BYREF
  unsigned __int64 v107; // [rsp+88h] [rbp-180h]
  _QWORD v108[2]; // [rsp+90h] [rbp-178h] BYREF
  __m128i v109; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v110; // [rsp+B0h] [rbp-158h]
  __int64 v111; // [rsp+B8h] [rbp-150h]
  __int64 v112; // [rsp+C0h] [rbp-148h]
  __int64 v113; // [rsp+C8h] [rbp-140h]
  char v114; // [rsp+D0h] [rbp-138h] BYREF
  __int128 v115; // [rsp+D8h] [rbp-130h] BYREF
  __int64 v116; // [rsp+E8h] [rbp-120h]
  __int128 v117; // [rsp+F0h] [rbp-118h] BYREF
  char v118; // [rsp+100h] [rbp-108h] BYREF
  __int128 v119; // [rsp+108h] [rbp-100h]
  char v120; // [rsp+118h] [rbp-F0h]
  __m128i v121; // [rsp+120h] [rbp-E8h] BYREF
  char v122; // [rsp+130h] [rbp-D8h] BYREF
  __int128 v123; // [rsp+138h] [rbp-D0h] BYREF
  char v124; // [rsp+148h] [rbp-C0h]
  __int128 v125; // [rsp+150h] [rbp-B8h]
  _QWORD v126[2]; // [rsp+160h] [rbp-A8h] BYREF
  __int64 v127; // [rsp+170h] [rbp-98h]
  _QWORD v128[2]; // [rsp+178h] [rbp-90h] BYREF
  __int64 v129; // [rsp+188h] [rbp-80h]
  _QWORD v130[2]; // [rsp+190h] [rbp-78h] BYREF
  __int64 v131; // [rsp+1A0h] [rbp-68h]
  _QWORD v132[3]; // [rsp+1A8h] [rbp-60h] BYREF
  char v133; // [rsp+1C0h] [rbp-48h] BYREF
  unsigned __int64 v134; // [rsp+1C8h] [rbp-40h]

  v134 = __readfsqword(0x28u);
  v1 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v106 = v108;
  v107 = 0;
  LOBYTE(v108[0]) = 0;
  if ( *v1 != 3 )
    JUMPOUT(0xD6B0D);
  std::string::_M_assign();
  extlang = find_extlang();
  v3 = extlang;
  if ( !extlang )
    JUMPOUT(0xD6D9E);
  v104 = nullptr;
  v105 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(void *, const char **))(extlang + 72))(v106, &v104) )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
    v110 = 0;
    v111 = 4;
    v112 = 0;
    v113 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v126,
      &v109);
    v127 = 0;
    v114 = 0;
    *(_QWORD *)&v115 = 0;
    v100 = &v115;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v114 = 3;
    v4 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v4, "error", v5, v6, v7, v8, a1, v82, (__int64)src);
    v115 = (unsigned __int64)v4;
    if ( (_QWORD)v105 )
      v9 = v104;
    else
      v9 = _qstring<char>::c_str(void)const::nullstr;
    LOBYTE(v116) = 0;
    v101 = &v117;
    *(_QWORD *)&v117 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    LOBYTE(v116) = 3;
    v10 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v10, v9, v11, v12, v13, v14, v73, v83, (__int64)srca);
    v98.m128i_i64[0] = (__int64)&v114;
    v117 = (unsigned __int64)v10;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v128,
      (const __m128i *)&v114);
    v129 = 0;
    v118 = 0;
    *(_QWORD *)&v119 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v118 = 3;
    v15 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v15, "code", v16, v17, v18, v19, v74, v84, (__int64)srcd);
    v120 = 0;
    v121.m128i_i64[0] = 0;
    v119 = (unsigned __int64)v15;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v120 = 3;
    v20 = v107;
    srcb = v106;
    v21 = (_QWORD *)operator new(0x20u);
    v22 = v21 + 2;
    v102 = v20;
    v23 = v21;
    *v21 = v21 + 2;
    if ( v20 > 0xF )
    {
      v71 = std::string::_M_create();
      *v23 = v71;
      v22 = (_BYTE *)v71;
      v72 = v102;
      v24 = (__m128i)(unsigned __int64)v23;
      v23[2] = v102;
      v25 = v72 + 1;
      if ( v72 )
      {
        v26 = -1;
        if ( v25 )
          goto LABEL_8;
LABEL_9:
        v23[1] = v26;
        v99.m128i_i64[0] = (__int64)&v118;
        v121 = v24;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v130,
          (const __m128i *)&v118);
        v131 = 0;
        v122 = 0;
        *(_QWORD *)&v123 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v122 = 3;
        v27 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(
          v27,
          "language",
          v28,
          v29,
          v30,
          v31,
          v75,
          (int)&v121,
          (__int64)&v123);
        v124 = 0;
        v123 = (unsigned __int64)v27;
        *(_QWORD *)&v125 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v124 = 3;
        v32 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v32, "python", v33, v34, v35, v36, v76, v85, (__int64)srce);
        v125 = (unsigned __int64)v32;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v132,
          (const __m128i *)&v122);
        v132[2] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v77,
          (__int64)v126,
          4,
          v37,
          v38,
          v39,
          (int)v77,
          v86,
          srcf,
          (int)&v106,
          v98.m128i_i32[0],
          v98.m128i_i32[2],
          v99.m128i_i64[0],
          v99.m128i_i32[2],
          (int)v100,
          (int)v101,
          v102,
          v103,
          (__int64)v104,
          v105,
          *((__int64 *)&v105 + 1));
        v40 = &v133;
        do
        {
          v40 -= 24;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v40 != (char *)v126 );
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        goto LABEL_18;
      }
    }
    else
    {
      v24 = (__m128i)(unsigned __int64)v21;
      v25 = v20 + 1;
      if ( v20 )
      {
LABEL_8:
        v99 = v24;
        memcpy(v22, srcb, v25);
        v26 = v102;
        v24 = _mm_load_si128(&v99);
        goto LABEL_9;
      }
    }
    *v22 = *srcb;
    v26 = v102;
    goto LABEL_9;
  }
  v98.m128i_i64[0] = (__int64)&v114;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  *((_QWORD *)&v115 + 1) = 0;
  v116 = 4;
  v117 = 1u;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v126,
    (const __m128i *)&v114);
  v127 = 0;
  v118 = 0;
  *(_QWORD *)&v119 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v118 = 3;
  v41 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v41, "code", v42, v43, v44, v45, a1, v82, (__int64)src);
  v120 = 0;
  v121.m128i_i64[0] = 0;
  v119 = (unsigned __int64)v41;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v120 = 3;
  v46 = v107;
  srcc = v106;
  v47 = (_QWORD *)operator new(0x20u);
  v48 = v47 + 2;
  v103 = v46;
  v49 = v47;
  *v47 = v47 + 2;
  if ( v46 <= 0xF )
  {
    v50 = (__m128i)(unsigned __int64)v47;
    v51 = v46 + 1;
    if ( v46 )
    {
LABEL_14:
      v98 = v50;
      memcpy(v48, srcc, v51);
      v52 = v103;
      v50 = _mm_load_si128(&v98);
      goto LABEL_15;
    }
    goto LABEL_28;
  }
  v69 = std::string::_M_create();
  *v49 = v69;
  v48 = (_BYTE *)v69;
  v70 = v103;
  v50 = (__m128i)(unsigned __int64)v49;
  v49[2] = v103;
  v51 = v70 + 1;
  if ( !v70 )
  {
LABEL_28:
    *v48 = *srcc;
    v52 = v103;
    goto LABEL_15;
  }
  v52 = -1;
  if ( v51 )
    goto LABEL_14;
LABEL_15:
  v49[1] = v52;
  v99.m128i_i64[0] = (__int64)&v118;
  v121 = v50;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v128,
    (const __m128i *)&v118);
  v129 = 0;
  v122 = 0;
  *(_QWORD *)&v123 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v122 = 3;
  v53 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v53, "language", v54, v55, v56, v57, v79, (int)&v121, (__int64)&v123);
  v124 = 0;
  v123 = (unsigned __int64)v53;
  *(_QWORD *)&v125 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v124 = 3;
  v58 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v58, "python", v59, v60, v61, v62, v80, v87, (__int64)srcg);
  v125 = (unsigned __int64)v58;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v130,
    (const __m128i *)&v122);
  v131 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v81,
    (__int64)v126,
    3,
    v63,
    v64,
    v65,
    (int)v81,
    v88,
    srch,
    (int)&v106,
    v98.m128i_i32[0],
    v98.m128i_i32[2],
    v99.m128i_i64[0],
    v99.m128i_i32[2],
    (int)v100,
    (int)v101,
    v102,
    v103,
    (__int64)v104,
    v105,
    *((__int64 *)&v105 + 1));
  v66 = v132;
  do
  {
    v66 -= 3;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v66 != v126 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_18:
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree();
  }
  v67 = v106;
  --*(_DWORD *)(v3 + 12);
  if ( v67 != v108 )
    operator delete(v67, v108[0] + 1LL);
  return v78;
}

