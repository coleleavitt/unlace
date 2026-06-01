__int64 __fastcall ida_mcp::tools::exec_scripts::`anonymous namespace'::handle_eval_expr(int a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  const char *v7; // r15
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r15
  _QWORD *v19; // rax
  _BYTE *v20; // rdi
  __int64 *v21; // r12
  __m128i v22; // xmm0
  size_t v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char *v38; // r12
  __int64 *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // r15
  _QWORD *v45; // rax
  _BYTE *v46; // rdi
  __int64 *v47; // r12
  __m128i si128; // xmm0
  size_t v49; // rcx
  __int64 v50; // rax
  __int64 *v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __m128i v56; // xmm0
  __int64 *v57; // r12
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // r12
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  char *v70; // r12
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // r14
  __int64 v75; // r15
  size_t v76; // rdx
  int v77; // eax
  unsigned __int64 v78; // r12
  unsigned __int64 v79; // r12
  size_t v80; // rdx
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rax
  int v87; // [rsp+0h] [rbp-248h]
  int v88; // [rsp+0h] [rbp-248h]
  int v89; // [rsp+0h] [rbp-248h]
  int v90; // [rsp+0h] [rbp-248h]
  int v91; // [rsp+0h] [rbp-248h]
  int v92; // [rsp+0h] [rbp-248h]
  int v93; // [rsp+0h] [rbp-248h]
  int v94; // [rsp+0h] [rbp-248h]
  int v95; // [rsp+0h] [rbp-248h]
  int v96; // [rsp+0h] [rbp-248h]
  int v97; // [rsp+8h] [rbp-240h]
  int v98; // [rsp+8h] [rbp-240h]
  int v99; // [rsp+8h] [rbp-240h]
  int v100; // [rsp+8h] [rbp-240h]
  _QWORD *v101; // [rsp+8h] [rbp-240h]
  __int64 v102; // [rsp+8h] [rbp-240h]
  int v103; // [rsp+8h] [rbp-240h]
  int v104; // [rsp+8h] [rbp-240h]
  int v105; // [rsp+8h] [rbp-240h]
  _QWORD *v106; // [rsp+8h] [rbp-240h]
  __int64 v107; // [rsp+10h] [rbp-238h]
  __int64 v108; // [rsp+10h] [rbp-238h]
  __int64 v109; // [rsp+10h] [rbp-238h]
  __int64 v110; // [rsp+10h] [rbp-238h]
  int v111; // [rsp+10h] [rbp-238h]
  __int64 v112; // [rsp+10h] [rbp-238h]
  __int64 v113; // [rsp+10h] [rbp-238h]
  __int64 v114; // [rsp+10h] [rbp-238h]
  int v115; // [rsp+10h] [rbp-238h]
  void *src[2]; // [rsp+20h] [rbp-228h] BYREF
  void *v117; // [rsp+30h] [rbp-218h]
  char *v118; // [rsp+38h] [rbp-210h]
  __m128i v119; // [rsp+40h] [rbp-208h] BYREF
  char *v120; // [rsp+50h] [rbp-1F8h]
  _BYTE *v121; // [rsp+58h] [rbp-1F0h]
  __int64 v122; // [rsp+60h] [rbp-1E8h]
  unsigned __int64 v123; // [rsp+68h] [rbp-1E0h]
  __m128i v124; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v125; // [rsp+80h] [rbp-1C8h]
  __int128 v126; // [rsp+88h] [rbp-1C0h]
  void *v127; // [rsp+A0h] [rbp-1A8h] BYREF
  unsigned __int64 v128; // [rsp+A8h] [rbp-1A0h]
  _QWORD v129[2]; // [rsp+B0h] [rbp-198h] BYREF
  char v130[8]; // [rsp+C0h] [rbp-188h] BYREF
  __int128 v131; // [rsp+C8h] [rbp-180h]
  __int64 v132; // [rsp+D8h] [rbp-170h]
  __m128i v133; // [rsp+E0h] [rbp-168h] BYREF
  __int64 v134; // [rsp+F0h] [rbp-158h]
  __int64 v135; // [rsp+F8h] [rbp-150h]
  __int64 v136; // [rsp+100h] [rbp-148h]
  __int64 v137; // [rsp+108h] [rbp-140h]
  char v138; // [rsp+110h] [rbp-138h] BYREF
  __int128 v139; // [rsp+118h] [rbp-130h]
  char v140; // [rsp+128h] [rbp-120h]
  __m128i v141; // [rsp+130h] [rbp-118h] BYREF
  char v142; // [rsp+140h] [rbp-108h] BYREF
  __int128 v143; // [rsp+148h] [rbp-100h] BYREF
  _BYTE v144[24]; // [rsp+158h] [rbp-F0h] BYREF
  char v145; // [rsp+170h] [rbp-D8h] BYREF
  __int128 v146; // [rsp+178h] [rbp-D0h]
  char v147; // [rsp+188h] [rbp-C0h]
  __int128 v148; // [rsp+190h] [rbp-B8h] BYREF
  _BYTE *v149; // [rsp+1A0h] [rbp-A8h] BYREF
  unsigned __int64 v150; // [rsp+1A8h] [rbp-A0h]
  __int64 v151; // [rsp+1B0h] [rbp-98h]
  _QWORD v152[2]; // [rsp+1B8h] [rbp-90h] BYREF
  __int64 v153; // [rsp+1C8h] [rbp-80h]
  _QWORD v154[2]; // [rsp+1D0h] [rbp-78h] BYREF
  __int64 v155; // [rsp+1E0h] [rbp-68h]
  _QWORD v156[2]; // [rsp+1E8h] [rbp-60h] BYREF
  __int64 v157; // [rsp+1F8h] [rbp-50h]
  char v158; // [rsp+200h] [rbp-48h] BYREF
  unsigned __int64 v159; // [rsp+208h] [rbp-40h]

  v159 = __readfsqword(0x28u);
  v127 = v129;
  v128 = 0;
  LOBYTE(v129[0]) = 0;
  if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() != 3 )
    JUMPOUT(0xD5007);
  std::string::_M_assign();
  if ( *(_BYTE *)a2 == 1 )
  {
    v72 = *(_QWORD *)(a2 + 8);
    v73 = *(_QWORD *)(v72 + 16);
    if ( v73 )
    {
      v74 = v72 + 8;
      v75 = v72 + 8;
      do
      {
        while ( 1 )
        {
          v78 = *(_QWORD *)(v73 + 40);
          if ( !v78 )
            break;
          v76 = 7;
          if ( v78 <= 7 )
            v76 = *(_QWORD *)(v73 + 40);
          v77 = memcmp(*(const void **)(v73 + 32), "address", v76);
          if ( v77 || (v77 = v78 - 7, (__int64)(v78 - 7) <= 0x7FFFFFFF) )
          {
            if ( v77 < 0 )
              break;
          }
          v75 = v73;
          v73 = *(_QWORD *)(v73 + 16);
          if ( !v73 )
            goto LABEL_34;
        }
        v73 = *(_QWORD *)(v73 + 24);
      }
      while ( v73 );
LABEL_34:
      if ( v74 != v75 )
      {
        v79 = *(_QWORD *)(v75 + 40);
        if ( !v79 )
          goto LABEL_58;
        v80 = 7;
        if ( v79 <= 7 )
          v80 = *(_QWORD *)(v75 + 40);
        v81 = memcmp(*(const void **)(v75 + 32), "address", v80);
        if ( v81 || (v81 = v79 - 7, (__int64)(v79 - 7) <= 0x7FFFFFFF) )
        {
          if ( v81 <= 0 )
          {
LABEL_58:
            if ( *(_BYTE *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>() )
            {
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::get<std::string,std::string>();
              if ( v150 != 1 || *v149 != 48 )
              {
                v125 = ida_mcp::parse_ea(v149, v150);
                *(_QWORD *)&v126 = v82;
              }
              std::string::_M_dispose();
            }
          }
        }
      }
    }
  }
  v131 = 0;
  v130[0] = 2;
  v132 = 0;
  v125 = 0;
  v126 = 0;
  if ( !(unsigned __int8)eval_idc_expr() )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
    v134 = 0;
    v135 = 4;
    v136 = 0;
    v137 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v149,
      &v133);
    v151 = 0;
    v138 = 0;
    *(_QWORD *)&v139 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v138 = 3;
    v2 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v2, "error", v3, v4, v5, v6, v87, a1, (__int64)&v127);
    v139 = (unsigned __int64)v2;
    if ( (_QWORD)v126 )
      v7 = (const char *)v125;
    else
      v7 = _qstring<char>::c_str(void)const::nullstr;
    v140 = 0;
    v141.m128i_i64[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v140 = 3;
    v8 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v8, v7, v9, v10, v11, v12, v88, v97, v107);
    v118 = &v138;
    v141 = (__m128i)(unsigned __int64)v8;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      v152,
      (const __m128i *)&v138);
    v153 = 0;
    v142 = 0;
    *(_QWORD *)&v143 = 0;
    v117 = &v143;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v142 = 3;
    v13 = (__int64 *)operator new(0x20u);
    std::string::basic_string<std::allocator<char>>(v13, "expression", v14, v15, v16, v17, v89, v98, v108);
    v144[0] = 0;
    v121 = &v144[8];
    *(_QWORD *)&v144[8] = 0;
    v143 = (unsigned __int64)v13;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v144[0] = 3;
    v18 = v128;
    src[0] = v127;
    v19 = (_QWORD *)operator new(0x20u);
    v20 = v19 + 2;
    v123 = v18;
    v21 = v19;
    *v19 = v19 + 2;
    if ( v18 > 0xF )
    {
      v85 = std::string::_M_create();
      *v21 = v85;
      v20 = (_BYTE *)v85;
      v86 = v123;
      v22 = (__m128i)(unsigned __int64)v21;
      v21[2] = v123;
      v23 = v86 + 1;
      if ( v86 )
      {
        v24 = -1;
        if ( v23 )
          goto LABEL_8;
LABEL_9:
        v21[1] = v24;
        v119.m128i_i64[0] = (__int64)&v142;
        *(__m128i *)&v144[8] = v22;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v154,
          (const __m128i *)&v142);
        v155 = 0;
        v145 = 0;
        *(_QWORD *)&v146 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v145 = 3;
        v25 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v25, "language", v26, v27, v28, v29, v90, v99, v109);
        v147 = 0;
        *(_QWORD *)&v148 = 0;
        v146 = (unsigned __int64)v25;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v147 = 3;
        v30 = (__int64 *)operator new(0x20u);
        std::string::basic_string<std::allocator<char>>(v30, "idc", v31, v32, v33, v34, v91, v100, v110);
        v120 = &v145;
        v148 = (unsigned __int64)v30;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v156,
          (const __m128i *)&v145);
        v157 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v101,
          (__int64)&v149,
          4,
          v35,
          v36,
          v37,
          v92,
          (__int64)v101,
          v111,
          (int)&v141,
          (int)&v148,
          (int)src[1],
          (__int64)v117,
          (int)v118,
          v119.m128i_i32[0],
          v119.m128i_i32[2],
          (int)v120,
          (char)v121,
          v122,
          v123,
          v124.m128i_i64[0]);
        v38 = &v158;
        do
        {
          v38 -= 24;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v38 != (char *)&v149 );
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
      v22 = (__m128i)(unsigned __int64)v19;
      v23 = v18 + 1;
      if ( v18 )
      {
LABEL_8:
        v119 = v22;
        memcpy(v20, src[0], v23);
        v24 = v123;
        v22 = _mm_load_si128(&v119);
        goto LABEL_9;
      }
    }
    *v20 = *(_BYTE *)src[0];
    v24 = v123;
    goto LABEL_9;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[8],char [8],0>();
  v134 = 0;
  v135 = 4;
  v136 = 1;
  v137 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v149,
    &v133);
  v151 = 0;
  v138 = 0;
  *(_QWORD *)&v139 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v138 = 3;
  v39 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v39, "expression", v40, v41, v42, v43, v87, a1, (__int64)&v127);
  v140 = 0;
  v141.m128i_i64[0] = 0;
  v139 = (unsigned __int64)v39;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v140 = 3;
  v44 = v128;
  v117 = v127;
  v45 = (_QWORD *)operator new(0x20u);
  v46 = v45 + 2;
  v124.m128i_i64[0] = v44;
  v47 = v45;
  *v45 = v45 + 2;
  if ( v44 <= 0xF )
  {
    si128 = (__m128i)(unsigned __int64)v45;
    v49 = v44 + 1;
    if ( v44 )
    {
LABEL_14:
      *(__m128i *)src = si128;
      memcpy(v46, v117, v49);
      v50 = v124.m128i_i64[0];
      si128 = _mm_load_si128((const __m128i *)src);
      goto LABEL_15;
    }
    goto LABEL_48;
  }
  v83 = std::string::_M_create();
  *v47 = v83;
  v46 = (_BYTE *)v83;
  v84 = v124.m128i_i64[0];
  si128 = (__m128i)(unsigned __int64)v47;
  v47[2] = v124.m128i_i64[0];
  v49 = v84 + 1;
  if ( !v84 )
  {
LABEL_48:
    *v46 = *(_BYTE *)v117;
    v50 = v124.m128i_i64[0];
    goto LABEL_15;
  }
  v50 = -1;
  if ( v49 )
    goto LABEL_14;
LABEL_15:
  v47[1] = v50;
  v118 = &v138;
  v141 = si128;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v152,
    (const __m128i *)&v138);
  v153 = 0;
  v142 = 0;
  *(_QWORD *)&v143 = 0;
  v117 = &v143;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v142 = 3;
  v51 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v51, "result", v52, v53, v54, v55, v93, v103, v112);
  v143 = (unsigned __int64)v51;
  ida_mcp::tools::exec_scripts::`anonymous namespace'::idc_value_to_json(&v124, (__int64)v130);
  v56 = _mm_load_si128(&v124);
  v119.m128i_i64[0] = (__int64)&v142;
  *(_QWORD *)&v144[16] = 0;
  *(__m128i *)v144 = v56;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v154,
    (const __m128i *)&v142);
  v155 = 0;
  v145 = 0;
  *(_QWORD *)&v146 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v145 = 3;
  v57 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v57, "language", v58, v59, v60, v61, v94, v104, v113);
  v147 = 0;
  src[0] = &v148;
  *(_QWORD *)&v148 = 0;
  v146 = (unsigned __int64)v57;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v147 = 3;
  v62 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v62, "idc", v63, v64, v65, v66, v95, v105, v114);
  v120 = &v145;
  v148 = (unsigned __int64)v62;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v156,
    (const __m128i *)&v145);
  v157 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v106,
    (__int64)&v149,
    4,
    v67,
    v68,
    v69,
    v96,
    (__int64)v106,
    v115,
    (int)&v141,
    (int)src[0],
    (int)src[1],
    (__int64)v117,
    (int)v118,
    v119.m128i_i32[0],
    v119.m128i_i32[2],
    (int)v120,
    (char)v121,
    v122,
    v123,
    v124.m128i_i64[0]);
  v70 = &v158;
  do
  {
    v70 -= 24;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v70 != (char *)&v149 );
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_18:
  if ( v125 )
  {
    *(_QWORD *)&v126 = 0;
    qfree();
  }
  free_idcv();
  if ( v127 != v129 )
    operator delete(v127, v129[0] + 1LL);
  return v102;
}

