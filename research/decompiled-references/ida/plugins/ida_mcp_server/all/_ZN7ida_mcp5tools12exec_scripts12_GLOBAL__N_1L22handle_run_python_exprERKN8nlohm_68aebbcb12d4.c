__int64 __fastcall ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_run_python_expr(int a1)
{
  std::runtime_error *exception; // rbp
  _BYTE *v2; // rax
  __int64 extlang; // rax
  __int64 v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v10; // r13
  __int64 *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _BYTE *v21; // r13
  unsigned __int64 v22; // r15
  _QWORD *v23; // rax
  _BYTE *v24; // rdi
  __int64 *v25; // r12
  __m128i v26; // xmm0
  size_t v27; // rdx
  __int64 v28; // rax
  __int64 *v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  char *v42; // r15
  __int64 *v43; // r12
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _BYTE *v48; // r13
  unsigned __int64 v49; // r15
  _QWORD *v50; // rax
  _BYTE *v51; // rdi
  __int64 *v52; // r12
  __m128i v53; // xmm0
  size_t v54; // rdx
  __int64 v55; // rax
  __int64 *v56; // r12
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __m128i v61; // xmm0
  __int64 *v62; // r13
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 *v67; // r15
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  char *v75; // r15
  _QWORD *v76; // rdi
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned __int64 v81; // rax
  int v82; // [rsp+0h] [rbp-248h]
  int v83; // [rsp+0h] [rbp-248h]
  int v84; // [rsp+0h] [rbp-248h]
  int v85; // [rsp+0h] [rbp-248h]
  int v86; // [rsp+0h] [rbp-248h]
  int v87; // [rsp+0h] [rbp-248h]
  int v88; // [rsp+0h] [rbp-248h]
  int v89; // [rsp+0h] [rbp-248h]
  int v90; // [rsp+0h] [rbp-248h]
  int v91; // [rsp+0h] [rbp-248h]
  int v92; // [rsp+8h] [rbp-240h]
  int v93; // [rsp+8h] [rbp-240h]
  int v94; // [rsp+8h] [rbp-240h]
  int v95; // [rsp+8h] [rbp-240h]
  _QWORD *v96; // [rsp+8h] [rbp-240h]
  __int64 v97; // [rsp+8h] [rbp-240h]
  int v98; // [rsp+8h] [rbp-240h]
  int v99; // [rsp+8h] [rbp-240h]
  int v100; // [rsp+8h] [rbp-240h]
  _QWORD *v101; // [rsp+8h] [rbp-240h]
  __int64 v102; // [rsp+10h] [rbp-238h]
  __int64 v103; // [rsp+10h] [rbp-238h]
  __int64 v104; // [rsp+10h] [rbp-238h]
  __int64 v105; // [rsp+10h] [rbp-238h]
  int v106; // [rsp+10h] [rbp-238h]
  __int64 v107; // [rsp+10h] [rbp-238h]
  __int64 v108; // [rsp+10h] [rbp-238h]
  __int64 v109; // [rsp+10h] [rbp-238h]
  int v110; // [rsp+10h] [rbp-238h]
  __m128i v111; // [rsp+20h] [rbp-228h] BYREF
  __m128i *v112; // [rsp+30h] [rbp-218h]
  void **p_src; // [rsp+38h] [rbp-210h]
  __m128i v114; // [rsp+40h] [rbp-208h] BYREF
  char *v115; // [rsp+50h] [rbp-1F8h]
  _BYTE *v116; // [rsp+58h] [rbp-1F0h]
  __int64 v117; // [rsp+60h] [rbp-1E8h]
  unsigned __int64 v118; // [rsp+68h] [rbp-1E0h]
  __m128i v119; // [rsp+70h] [rbp-1D8h] BYREF
  const char *v120; // [rsp+80h] [rbp-1C8h] BYREF
  __int128 v121; // [rsp+88h] [rbp-1C0h]
  void *src; // [rsp+A0h] [rbp-1A8h] BYREF
  unsigned __int64 v123; // [rsp+A8h] [rbp-1A0h]
  _QWORD v124[2]; // [rsp+B0h] [rbp-198h] BYREF
  char v125[8]; // [rsp+C0h] [rbp-188h] BYREF
  __int128 v126; // [rsp+C8h] [rbp-180h]
  __int64 v127; // [rsp+D8h] [rbp-170h]
  __m128i v128; // [rsp+E0h] [rbp-168h] BYREF
  __int64 v129; // [rsp+F0h] [rbp-158h]
  __int64 v130; // [rsp+F8h] [rbp-150h]
  __int64 v131; // [rsp+100h] [rbp-148h]
  __int64 v132; // [rsp+108h] [rbp-140h]
  char v133; // [rsp+110h] [rbp-138h] BYREF
  __int128 v134; // [rsp+118h] [rbp-130h] BYREF
  char v135; // [rsp+128h] [rbp-120h]
  __m128i v136; // [rsp+130h] [rbp-118h] BYREF
  char v137; // [rsp+140h] [rbp-108h] BYREF
  __int128 v138; // [rsp+148h] [rbp-100h] BYREF
  _BYTE v139[24]; // [rsp+158h] [rbp-F0h] BYREF
  char v140; // [rsp+170h] [rbp-D8h] BYREF
  __int128 v141; // [rsp+178h] [rbp-D0h]
  char v142; // [rsp+188h] [rbp-C0h]
  __int128 v143; // [rsp+190h] [rbp-B8h]
  _QWORD v144[2]; // [rsp+1A0h] [rbp-A8h] BYREF
  __int64 v145; // [rsp+1B0h] [rbp-98h]
  _QWORD v146[2]; // [rsp+1B8h] [rbp-90h] BYREF
  __int64 v147; // [rsp+1C8h] [rbp-80h]
  _QWORD v148[2]; // [rsp+1D0h] [rbp-78h] BYREF
  __int64 v149; // [rsp+1E0h] [rbp-68h]
  _QWORD v150[2]; // [rsp+1E8h] [rbp-60h] BYREF
  __int64 v151; // [rsp+1F8h] [rbp-50h]
  char v152; // [rsp+200h] [rbp-48h] BYREF
  unsigned __int64 v153; // [rsp+208h] [rbp-40h]

  v153 = __readfsqword(0x28u);
  v2 = (_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  src = v124;
  v123 = 0;
  p_src = &src;
  LOBYTE(v124[0]) = 0;
  if ( *v2 != 3 )
    JUMPOUT(0xD7375);
  std::string::_M_assign();
  extlang = find_extlang();
  v4 = extlang;
  if ( !extlang )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x10u);
    std::runtime_error::runtime_error(exception, "Python extlang not available (IDAPython not loaded)");
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))&std::runtime_error::~runtime_error);
  }
  v125[0] = 2;
  v126 = 0;
  v127 = 0;
  v120 = nullptr;
  v121 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(char *, __int64, void *, const char **))(extlang + 64))(v125, -1, src, &v120) )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
    v129 = 0;
    v130 = 4;
    v131 = 0;
    v132 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v144,
      &v128);
    v145 = 0;
    v133 = 0;
    *(_QWORD *)&v134 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v133 = 3;
    v5 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v5, "error", v6, v7, v8, v9, v82, a1, (__int64)v125);
    v134 = (unsigned __int64)v5;
    if ( (_QWORD)v121 )
      v10 = v120;
    else
      v10 = _qstring<char>::c_str(void)const::nullstr;
    v135 = 0;
    v112 = &v136;
    v136.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v135 = 3;
    v11 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v11, v10, v12, v13, v14, v15, v83, v92, v102);
    v115 = &v133;
    v136 = (__m128i)(unsigned __int64)v11;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v146,
      (const __m128i *)&v133);
    v147 = 0;
    v137 = 0;
    *(_QWORD *)&v138 = 0;
    v111.m128i_i64[0] = (__int64)&v138;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v137 = 3;
    v16 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v16, "expression", v17, v18, v19, v20, v84, v93, v103);
    v139[0] = 0;
    v116 = &v139[8];
    *(_QWORD *)&v139[8] = 0;
    v138 = (unsigned __int64)v16;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v139[0] = 3;
    v21 = src;
    v22 = v123;
    v23 = (_QWORD *)operator new(0x20u);
    v24 = v23 + 2;
    v118 = v22;
    v25 = v23;
    *v23 = v23 + 2;
    if ( v22 > 0xF )
    {
      v80 = std::string::_M_create();
      *v25 = v80;
      v24 = (_BYTE *)v80;
      v81 = v118;
      v26 = (__m128i)(unsigned __int64)v25;
      v25[2] = v118;
      v27 = v81 + 1;
      if ( v81 )
      {
        v28 = -1;
        if ( v27 )
          goto LABEL_8;
LABEL_9:
        v25[1] = v28;
        v114.m128i_i64[0] = (__int64)&v137;
        *(__m128i *)&v139[8] = v26;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v148,
          (const __m128i *)&v137);
        v149 = 0;
        v140 = 0;
        *(_QWORD *)&v141 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v140 = 3;
        v29 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v29, "language", v30, v31, v32, v33, v85, v94, v104);
        v142 = 0;
        v141 = (unsigned __int64)v29;
        *(_QWORD *)&v143 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v142 = 3;
        v34 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v34, "python", v35, v36, v37, v38, v86, v95, v105);
        v143 = (unsigned __int64)v34;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v150,
          (const __m128i *)&v140);
        v151 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v96,
          (__int64)v144,
          4,
          v39,
          v40,
          v41,
          v87,
          (__int64)v96,
          v106,
          (int)&v134,
          v111.m128i_i32[0],
          v111.m128i_i32[2],
          (__int64)v112,
          (int)p_src,
          v114.m128i_i32[0],
          v114.m128i_i32[2],
          (int)v115,
          (char)v116,
          v117,
          v118,
          v119.m128i_i64[0]);
        v42 = &v152;
        do
        {
          v42 -= 24;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v42 != (char *)v144 );
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
      v26 = (__m128i)(unsigned __int64)v23;
      v27 = v22 + 1;
      if ( v22 )
      {
LABEL_8:
        v114 = v26;
        memcpy(v24, v21, v27);
        v28 = v118;
        v26 = _mm_load_si128(&v114);
        goto LABEL_9;
      }
    }
    *v24 = *v21;
    v28 = v118;
    goto LABEL_9;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v129 = 0;
  v130 = 4;
  v131 = 1;
  v132 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v144,
    &v128);
  v145 = 0;
  v133 = 0;
  *(_QWORD *)&v134 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v133 = 3;
  v43 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v43, "expression", v44, v45, v46, v47, v82, a1, (__int64)v125);
  v135 = 0;
  v112 = &v136;
  v136.m128i_i64[0] = 0;
  v134 = (unsigned __int64)v43;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v135 = 3;
  v48 = src;
  v49 = v123;
  v50 = (_QWORD *)operator new(0x20u);
  v51 = v50 + 2;
  v119.m128i_i64[0] = v49;
  v52 = v50;
  *v50 = v50 + 2;
  if ( v49 <= 0xF )
  {
    v53 = (__m128i)(unsigned __int64)v50;
    v54 = v49 + 1;
    if ( v49 )
    {
LABEL_14:
      v111 = v53;
      memcpy(v51, v48, v54);
      v55 = v119.m128i_i64[0];
      v53 = _mm_load_si128(&v111);
      goto LABEL_15;
    }
    goto LABEL_28;
  }
  v78 = std::string::_M_create();
  *v52 = v78;
  v51 = (_BYTE *)v78;
  v79 = v119.m128i_i64[0];
  v53 = (__m128i)(unsigned __int64)v52;
  v52[2] = v119.m128i_i64[0];
  v54 = v79 + 1;
  if ( !v79 )
  {
LABEL_28:
    *v51 = *v48;
    v55 = v119.m128i_i64[0];
    goto LABEL_15;
  }
  v55 = -1;
  if ( v54 )
    goto LABEL_14;
LABEL_15:
  v52[1] = v55;
  v115 = &v133;
  v136 = v53;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v146,
    (const __m128i *)&v133);
  v147 = 0;
  v137 = 0;
  *(_QWORD *)&v138 = 0;
  v111.m128i_i64[0] = (__int64)&v138;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v137 = 3;
  v56 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v56, "result", v57, v58, v59, v60, v88, v98, v107);
  v138 = (unsigned __int64)v56;
  ida_mcp::tools::exec_scripts::`anonymous namespace'::idc_value_to_json(&v119, v108);
  v61 = _mm_load_si128(&v119);
  v114.m128i_i64[0] = (__int64)&v137;
  *(_QWORD *)&v139[16] = 0;
  *(__m128i *)v139 = v61;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v148,
    (const __m128i *)&v137);
  v149 = 0;
  v140 = 0;
  *(_QWORD *)&v141 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v140 = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v62, "language", v63, v64, v65, v66, v89, v99, v108);
  v142 = 0;
  v141 = (unsigned __int64)v62;
  *(_QWORD *)&v143 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = 3;
  v67 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v67, "python", v68, v69, v70, v71, v90, v100, v109);
  v143 = (unsigned __int64)v67;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v150,
    (const __m128i *)&v140);
  v151 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v101,
    (__int64)v144,
    4,
    v72,
    v73,
    v74,
    v91,
    (__int64)v101,
    v110,
    (int)&v134,
    v111.m128i_i32[0],
    v111.m128i_i32[2],
    (__int64)v112,
    (int)p_src,
    v114.m128i_i32[0],
    v114.m128i_i32[2],
    (int)v115,
    (char)v116,
    v117,
    v118,
    v119.m128i_i64[0]);
  v75 = &v152;
  do
  {
    v75 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v75 != (char *)v144 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_18:
  if ( v120 )
  {
    *(_QWORD *)&v121 = 0;
    qfree();
  }
  free_idcv();
  v76 = src;
  --*(_DWORD *)(v4 + 12);
  if ( v76 != v124 )
    operator delete(v76, v124[0] + 1LL);
  return v97;
}

