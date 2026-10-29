_QWORD *__fastcall ida_mcp::mcp::McpServer::handle_prompts_list(
        _QWORD *a1,
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
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        __int64 a18,
        __int64 a19,
        int a20,
        __int64 a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        pthread_mutex_t *a29,
        char a30,
        char a31,
        char a32,
        char a33,
        char a34,
        __int64 a35,
        char a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        char a40,
        char a41,
        int a42,
        int a43,
        char a44,
        int a45,
        int a46,
        char a47,
        char a48,
        int a49,
        int a50,
        __int64 a51)
{
  __int64 v51; // r14
  __int64 v52; // rax
  _QWORD *v53; // rax
  __m128i v54; // xmm0
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rbx
  __int64 v59; // rax
  char v60; // si
  __int64 v61; // rdx
  __int64 v62; // rbx
  __int64 v63; // rbp
  __int64 v64; // rax
  char v65; // si
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  char v72; // r12
  __int64 v73; // r13
  int v74; // esi
  int v75; // edi
  int v76; // edx
  int v77; // ecx
  int v78; // r8d
  int v79; // r9d
  __int64 v80; // rdx
  _QWORD *v81; // r15
  unsigned __int8 *v82; // rax
  __int64 v83; // rdx
  unsigned __int8 v84; // al
  unsigned __int8 *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rax
  char v90; // bl
  __int64 v91; // rax
  char v92; // si
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 *v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  int v104; // [rsp+0h] [rbp-1A8h]
  int v105; // [rsp+0h] [rbp-1A8h]
  __int64 v106; // [rsp+8h] [rbp-1A0h]
  __int64 v107; // [rsp+8h] [rbp-1A0h]
  int *v108; // [rsp+10h] [rbp-198h]
  int v109; // [rsp+10h] [rbp-198h]
  int v110; // [rsp+18h] [rbp-190h]
  __m128i v111; // [rsp+20h] [rbp-188h] BYREF
  char v112[16]; // [rsp+30h] [rbp-178h] BYREF
  int v113; // [rsp+40h] [rbp-168h]
  char v114; // [rsp+47h] [rbp-161h]
  char *v115; // [rsp+48h] [rbp-160h]
  __int64 v116; // [rsp+50h] [rbp-158h]
  __int64 v117; // [rsp+58h] [rbp-150h]
  const __m128i *v118; // [rsp+60h] [rbp-148h]
  char *v119; // [rsp+68h] [rbp-140h]
  __int64 v120; // [rsp+70h] [rbp-138h]
  __int64 *v121; // [rsp+78h] [rbp-130h]
  __int64 *v122; // [rsp+80h] [rbp-128h]
  char v123; // [rsp+8Eh] [rbp-11Ah]
  char v124; // [rsp+8Fh] [rbp-119h]
  int v125[2]; // [rsp+90h] [rbp-118h]
  char *v126; // [rsp+98h] [rbp-110h]
  __int64 v127; // [rsp+A0h] [rbp-108h]
  char *v128; // [rsp+A8h] [rbp-100h]
  _QWORD *v129; // [rsp+B0h] [rbp-F8h]
  pthread_mutex_t *mutex; // [rsp+B8h] [rbp-F0h]
  char v131; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v132; // [rsp+D0h] [rbp-D8h] BYREF
  char v133; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v134; // [rsp+E8h] [rbp-C0h]
  char v135[16]; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v136; // [rsp+100h] [rbp-A8h]
  __int64 v137; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v138; // [rsp+110h] [rbp-98h] BYREF
  char v139; // [rsp+118h] [rbp-90h] BYREF
  int v140[2]; // [rsp+120h] [rbp-88h]
  char v141; // [rsp+130h] [rbp-78h] BYREF
  int v142[4]; // [rsp+138h] [rbp-70h] BYREF
  char v143; // [rsp+148h] [rbp-60h]
  __m128i si128; // [rsp+150h] [rbp-58h] BYREF
  unsigned __int64 v145; // [rsp+168h] [rbp-40h]

  v129 = a1;
  v145 = __readfsqword(0x28u);
  mutex = (pthread_mutex_t *)(a2 + 224);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a2 + 224)) )
    JUMPOUT(0x53B19);
  v131 = 0;
  v126 = &v131;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v51 = *(_QWORD *)(a2 + 144);
  v124 = v131;
  v127 = a2 + 128;
  v108 = v142;
  v118 = (const __m128i *)&v141;
  while ( v127 != v51 )
  {
    v141 = 0;
    *(_QWORD *)v142 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v141 = 3;
    v52 = operator new(0x20u);
    *(_QWORD *)v52 = v52 + 16;
    strcpy((char *)(v52 + 16), "name");
    *(_QWORD *)(v52 + 8) = 4;
    v143 = 0;
    si128.m128i_i64[0] = 0;
    *(_OWORD *)v142 = (unsigned __int64)v52;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v143 = 3;
    v53 = (_QWORD *)operator new(0x20u);
    *v53 = v53 + 2;
    v111 = (__m128i)(unsigned __int64)v53;
    std::string::_M_construct<true>();
    v54 = _mm_load_si128(&v111);
    v111.m128i_i64[0] = (__int64)&v138;
    si128 = v54;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v138,
      v118);
    *(_QWORD *)v140 = 0;
    LOBYTE(v132) = 0;
    v122 = &v132;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      &v132,
      v111.m128i_i64[0],
      1,
      v55,
      v56,
      v57,
      v104,
      v106,
      (int)v108,
      (int)&si128,
      v111.m128i_i32[0],
      v111.m128i_i32[2],
      *(__int64 *)v112,
      *(int *)&v112[8],
      v113,
      (int)v115,
      v111.m128i_i32[0],
      1,
      (__int64)v118,
      (int)v119,
      v120);
    v123 = v132;
    v119 = &v139;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    if ( *(_BYTE *)(v51 + 128) )
    {
      v136 = 0;
      v137 = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v58 = (_QWORD *)operator new(0x20u);
      *v58 = v58 + 2;
      std::string::_M_construct<true>();
      v59 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
      v60 = *(_BYTE *)v59;
      v61 = *(_QWORD *)(v59 + 8);
      *(_BYTE *)v59 = 3;
      *(_QWORD *)(v59 + 8) = v58;
      LOBYTE(v136) = v60;
      v123 = v132;
      v137 = v61;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( !*(_BYTE *)(v51 + 160) )
        goto LABEL_5;
    }
    else if ( !*(_BYTE *)(v51 + 160) )
    {
      goto LABEL_5;
    }
    v133 = 0;
    v134 = 0;
    v128 = &v133;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v62 = *(_QWORD *)(v51 + 136);
    v63 = v134;
    v114 = v133;
    v120 = *(_QWORD *)(v51 + 144);
    if ( v62 != v120 )
    {
      v115 = v135;
      v121 = &v137;
      do
      {
        v141 = 0;
        *(_QWORD *)v142 = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v141 = 3;
        v67 = operator new(0x20u);
        *(_QWORD *)v67 = v67 + 16;
        strcpy((char *)(v67 + 16), "name");
        *(_QWORD *)(v67 + 8) = 4;
        v143 = 0;
        si128.m128i_i64[0] = 0;
        *(_OWORD *)v142 = (unsigned __int64)v67;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v143 = 3;
        v68 = (_QWORD *)operator new(0x20u);
        *v68 = v68 + 2;
        *(_OWORD *)v112 = (unsigned __int64)v68;
        std::string::_M_construct<true>();
        si128 = _mm_load_si128((const __m128i *)v112);
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v111.m128i_i64[0],
          v118);
        *(_QWORD *)v140 = 0;
        v135[0] = 0;
        *(_QWORD *)&v135[8] = 0;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          v115,
          v111.m128i_i64[0],
          1,
          v69,
          v70,
          v71,
          v111.m128i_i32[0],
          1,
          (int)v108,
          v110,
          v111.m128i_i32[0],
          v111.m128i_i32[2],
          *(__int64 *)v112,
          *(int *)&v112[8],
          v113,
          (int)v115,
          v116,
          v117,
          (__int64)v118,
          (int)v119,
          v120);
        v72 = v135[0];
        v73 = *(_QWORD *)&v135[8];
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v74 = (unsigned __int8)v141;
        v75 = (int)v108;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( *(_BYTE *)(v62 + 64) )
        {
          v136 = 0;
          v137 = 0;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v80 = *(_QWORD *)(v62 + 40);
          *(_QWORD *)v125 = *(_QWORD *)(v62 + 32);
          *(_QWORD *)v112 = v80;
          v81 = (_QWORD *)operator new(0x20u);
          *v81 = v81 + 2;
          std::string::_M_construct<true>();
          v82 = (unsigned __int8 *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
          v74 = *v82;
          v83 = *((_QWORD *)v82 + 1);
          *v82 = 3;
          *((_QWORD *)v82 + 1) = v81;
          v75 = (int)v121;
          LOBYTE(v136) = v74;
          v73 = *(_QWORD *)&v135[8];
          v137 = v83;
          v72 = v135[0];
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          if ( !*(_BYTE *)(v62 + 73) )
          {
LABEL_11:
            if ( !v114 )
              goto LABEL_12;
            goto LABEL_18;
          }
        }
        else if ( !*(_BYTE *)(v62 + 73) )
        {
          goto LABEL_11;
        }
        v84 = *(_BYTE *)(v62 + 72);
        v135[0] = v72;
        v137 = v84;
        *(_QWORD *)&v135[8] = v73;
        v85 = (unsigned __int8 *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
        v86 = v137;
        v74 = *v85;
        *v85 = 4;
        v87 = *((_QWORD *)v85 + 1);
        v75 = (int)v121;
        *((_QWORD *)v85 + 1) = v86;
        v73 = *(_QWORD *)&v135[8];
        LOBYTE(v136) = v74;
        v72 = v135[0];
        v137 = v87;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        if ( !v114 )
        {
LABEL_12:
          v64 = operator new(0x18u);
          *(_QWORD *)(v64 + 16) = 0;
          v63 = v64;
          *(_OWORD *)v64 = 0;
          goto LABEL_13;
        }
LABEL_18:
        if ( v114 != 2 )
          ida_mcp::mcp::McpServer::handle_prompts_list(
            v75,
            v74,
            v76,
            v77,
            v78,
            v79,
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
        v88 = *(_QWORD *)(v63 + 8);
        if ( v88 != *(_QWORD *)(v63 + 16) )
        {
          v135[0] = v72;
          v89 = v88 + 16;
          v65 = 0;
          *(_QWORD *)&v135[8] = v73;
          *(__m128i *)(v89 - 16) = _mm_load_si128((const __m128i *)v135);
          *(_QWORD *)(v63 + 8) = v89;
          v66 = 0;
          goto LABEL_14;
        }
LABEL_13:
        v135[0] = v72;
        *(_QWORD *)&v135[8] = v73;
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
        v65 = v135[0];
        v66 = *(_QWORD *)&v135[8];
LABEL_14:
        v135[0] = v65;
        v62 += 80;
        *(_QWORD *)&v135[8] = v66;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v114 = 2;
      }
      while ( v120 != v62 );
    }
    LOBYTE(v136) = 0;
    v134 = v63;
    v133 = v114;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v90 = v136;
    LOBYTE(v132) = v123;
    v91 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v92 = *(_BYTE *)v91;
    v93 = *(_QWORD *)(v91 + 8);
    *(_BYTE *)v91 = v90;
    LOBYTE(v136) = v92;
    v123 = v132;
    v94 = v137;
    v137 = v93;
    *(_QWORD *)(v91 + 8) = v94;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_5:
    v131 = v124;
    LOBYTE(v132) = v123;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::push_back();
    v124 = v131;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v51 = std::_Rb_tree_increment();
  }
  v141 = 0;
  *(_QWORD *)v142 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v141 = 3;
  v95 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v95, "prompts", v96, v97, v98, v99, v104, v106, (__int64)v108);
  *(_OWORD *)v142 = (unsigned __int64)v95;
  v131 = v124;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  si128.m128i_i64[1] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v138,
    v118);
  *(_QWORD *)v140 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    v129,
    (__int64)&v138,
    1,
    v100,
    v101,
    v102,
    v105,
    v107,
    v109,
    v110,
    v111.m128i_i32[0],
    v111.m128i_i32[2],
    *(__int64 *)v112,
    *(int *)&v112[8],
    v113,
    (int)v115,
    v116,
    v117,
    (__int64)v118,
    (int)v119,
    v120);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  pthread_mutex_unlock(mutex);
  return v129;
}

