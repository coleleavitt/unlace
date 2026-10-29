_QWORD *__fastcall ida_mcp::tools::problems::`anonymous namespace'::handle_list_all_problems(_QWORD *a1)
{
  size_t v1; // rax
  unsigned int v2; // ebp
  char *v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // r12
  _QWORD *v10; // rbp
  __int64 v11; // rax
  void *v12; // r8
  _QWORD *v13; // r15
  __int64 v14; // rax
  _QWORD *insert_hint_unique_pos; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // r13
  _QWORD *v20; // r14
  size_t v21; // rdx
  int v22; // eax
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r13
  size_t v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  const void *v28; // r15
  _QWORD *v29; // r13
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  const char *problem_name; // r14
  __int64 *v34; // rax
  void *v35; // r15
  __int64 *v36; // r13
  size_t v37; // rax
  size_t v38; // rcx
  __int64 v39; // r14
  _QWORD *v40; // r15
  size_t v41; // rdx
  int v42; // eax
  unsigned __int64 v43; // rbp
  unsigned __int64 v44; // r14
  size_t v45; // rdx
  int v46; // eax
  __int64 v47; // r14
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdx
  _QWORD *v51; // rax
  const char *v52; // r14
  __int64 *v53; // rax
  void *v54; // r15
  __int64 *v55; // r13
  size_t v56; // rax
  size_t v57; // rcx
  __int64 v58; // r14
  _QWORD *v59; // r15
  size_t v60; // rdx
  int v61; // eax
  unsigned __int64 v62; // rbp
  unsigned __int64 v63; // r14
  size_t v64; // rdx
  int v65; // eax
  __int64 v66; // r14
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  void *v75; // rdi
  void *v76; // rdi
  void *v77; // rdi
  void *v78; // rdi
  _QWORD *v79; // rax
  unsigned int v80; // eax
  unsigned __int64 v81; // rdx
  char *v82; // rax
  char *v83; // rbx
  unsigned int v84; // ebp
  unsigned int v85; // ebp
  unsigned int v86; // eax
  __int64 v87; // rcx
  __int64 *v88; // r12
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rax
  __int64 *v94; // r13
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  _QWORD *v100; // r12
  __int64 v101; // rax
  int *v102; // rdi
  _QWORD *v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rax
  _QWORD *v110; // rax
  unsigned __int64 v111; // rsi
  char *v112; // rdx
  char *v113; // r8
  unsigned int v114; // eax
  unsigned int v115; // eax
  unsigned int v116; // edx
  __int64 v117; // rdi
  unsigned __int64 v118; // r14
  size_t v119; // rax
  unsigned __int64 v120; // rcx
  size_t v121; // rax
  unsigned __int64 v122; // r15
  size_t v123; // rax
  unsigned __int64 v124; // r15
  size_t v125; // rax
  int v126; // [rsp+0h] [rbp-198h]
  int v127; // [rsp+0h] [rbp-198h]
  _QWORD *v128; // [rsp+8h] [rbp-190h]
  int v129; // [rsp+8h] [rbp-190h]
  __int64 v130; // [rsp+10h] [rbp-188h]
  __int64 v131; // [rsp+10h] [rbp-188h]
  _QWORD *v132; // [rsp+20h] [rbp-178h]
  void *s1; // [rsp+28h] [rbp-170h]
  _QWORD *s1c; // [rsp+28h] [rbp-170h]
  _QWORD *s1a; // [rsp+28h] [rbp-170h]
  _QWORD *s1b; // [rsp+28h] [rbp-170h]
  void *s1d; // [rsp+28h] [rbp-170h]
  void *s1e; // [rsp+28h] [rbp-170h]
  _QWORD *s1f; // [rsp+28h] [rbp-170h]
  __int64 v140; // [rsp+30h] [rbp-168h]
  _QWORD *v141; // [rsp+38h] [rbp-160h]
  size_t v143; // [rsp+58h] [rbp-140h]
  size_t v144; // [rsp+58h] [rbp-140h]
  size_t v145; // [rsp+70h] [rbp-128h]
  _QWORD *v146; // [rsp+78h] [rbp-120h] BYREF
  const char *v147; // [rsp+80h] [rbp-118h]
  __int128 v148; // [rsp+88h] [rbp-110h]
  char v149; // [rsp+A0h] [rbp-F8h] BYREF
  __int128 v150; // [rsp+A8h] [rbp-F0h]
  char v151; // [rsp+B8h] [rbp-E0h]
  __int64 v152; // [rsp+C0h] [rbp-D8h]
  __int64 v153; // [rsp+C8h] [rbp-D0h]
  void *v154; // [rsp+D0h] [rbp-C8h] BYREF
  __int128 v155; // [rsp+D8h] [rbp-C0h] BYREF
  __int64 v156; // [rsp+F8h] [rbp-A0h]
  __m128i v157; // [rsp+100h] [rbp-98h] BYREF
  _QWORD s2[2]; // [rsp+110h] [rbp-88h] BYREF
  __int64 v159; // [rsp+128h] [rbp-70h]
  char s[40]; // [rsp+130h] [rbp-68h] BYREF
  unsigned __int64 v161; // [rsp+158h] [rbp-40h]

  v161 = __readfsqword(0x28u);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v140 = 1;
  HIBYTE(v130) = 0;
  v132 = nullptr;
  do
  {
    getinf();
    LODWORD(v130) = v140;
    while ( get_problem() != -1 )
    {
      v147 = nullptr;
      v148 = 0;
      get_problem_desc();
      qsnprintf();
      v154 = (char *)&v155 + 8;
      v1 = strlen(s);
      v145 = v1;
      v2 = v1;
      if ( v1 > 0xF )
      {
        v72 = (_QWORD *)std::string::_M_create();
        v154 = v72;
        *((_QWORD *)&v155 + 1) = v145;
        goto LABEL_109;
      }
      if ( v1 == 1 )
      {
        BYTE8(v155) = s[0];
      }
      else if ( v1 )
      {
        v72 = (_QWORD *)&v155 + 1;
LABEL_109:
        if ( v2 >= 8 )
        {
          *v72 = *(_QWORD *)s;
          *(_QWORD *)((char *)v72 + v2 - 8) = *(_QWORD *)&s[v2 - 8];
          v81 = (unsigned __int64)(v72 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v82 = (char *)v72 - v81;
          v83 = (char *)(s - v82);
          v84 = ((_DWORD)v82 + v2) & 0xFFFFFFF8;
          if ( v84 >= 8 )
          {
            v85 = v84 & 0xFFFFFFF8;
            v86 = 0;
            do
            {
              v87 = v86;
              v86 += 8;
              *(_QWORD *)(v81 + v87) = *(_QWORD *)&v83[v87];
            }
            while ( v86 < v85 );
          }
        }
        else if ( (v2 & 4) != 0 )
        {
          *(_DWORD *)v72 = *(_DWORD *)s;
          *(_DWORD *)((char *)v72 + v2 - 4) = *(_DWORD *)&s[v2 - 4];
        }
        else if ( v2 )
        {
          *(_BYTE *)v72 = s[0];
          if ( (v2 & 2) != 0 )
            *(_WORD *)((char *)v72 + v2 - 2) = *(_WORD *)&s[v2 - 2];
        }
        v1 = v145;
        v3 = (char *)v154;
        goto LABEL_8;
      }
      v3 = (char *)&v155 + 8;
LABEL_8:
      *(_QWORD *)&v155 = v1;
      v3[v1] = 0;
      v128 = &v146;
      v146 = nullptr;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v4 = (_QWORD *)operator new(0x20u);
      v5 = v4 + 2;
      v6 = v4;
      v7 = v155;
      *v4 = v4 + 2;
      if ( v154 == (char *)&v155 + 8 )
      {
        v80 = v7 + 1;
        if ( (unsigned int)(v7 + 1) >= 8 )
        {
          v6[2] = *((_QWORD *)&v155 + 1);
          *(_QWORD *)((char *)v5 + v80 - 8) = *(_QWORD *)((char *)&v155 + v80);
          v111 = (unsigned __int64)(v6 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v112 = (char *)v5 - v111;
          v113 = (char *)((char *)&v155 + 8 - v112);
          v114 = ((_DWORD)v112 + v80) & 0xFFFFFFF8;
          if ( v114 >= 8 )
          {
            v115 = v114 & 0xFFFFFFF8;
            v116 = 0;
            do
            {
              v117 = v116;
              v116 += 8;
              *(_QWORD *)(v111 + v117) = *(_QWORD *)&v113[v117];
            }
            while ( v116 < v115 );
          }
        }
        else if ( (v80 & 4) != 0 )
        {
          *((_DWORD *)v6 + 4) = DWORD2(v155);
          *(_DWORD *)((char *)v5 + v80 - 4) = *(_DWORD *)((char *)&v155 + v80 + 4);
        }
        else if ( (_DWORD)v7 != -1 )
        {
          *((_BYTE *)v6 + 16) = BYTE8(v155);
          if ( (v80 & 2) != 0 )
            *(_WORD *)((char *)v5 + v80 - 2) = *(_WORD *)((char *)&v155 + v80 + 6);
        }
      }
      else
      {
        *v4 = v154;
        v4[2] = *((_QWORD *)&v155 + 1);
      }
      v6[1] = v7;
      strcpy((char *)s2, "address");
      v154 = (char *)&v155 + 8;
      *(_QWORD *)&v155 = 0;
      BYTE8(v155) = 0;
      v157.m128i_i64[0] = (__int64)s2;
      v157.m128i_i64[1] = 7;
      v8 = operator new(0x30u);
      v9 = (_QWORD *)(v8 + 8);
      v10 = (_QWORD *)v8;
      *(_DWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = v8 + 8;
      *(_QWORD *)(v8 + 32) = v8 + 8;
      *(_QWORD *)(v8 + 40) = 0;
      v11 = operator new(0x50u);
      v12 = (void *)(v11 + 48);
      v13 = (_QWORD *)v11;
      *(_QWORD *)(v11 + 32) = v11 + 48;
      v14 = s2[0];
      v13[5] = 7;
      v13[6] = v14;
      v13[8] = 0;
      v13[9] = 0;
      s1 = v12;
      v157.m128i_i64[0] = (__int64)s2;
      v157.m128i_i64[1] = 0;
      LOBYTE(s2[0]) = 0;
      insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                                 v10,
                                 v9,
                                 v12,
                                 7u);
      if ( v16 )
      {
        if ( !insert_hint_unique_pos && v9 != (_QWORD *)v16 )
        {
          v120 = *(_QWORD *)(v16 + 40);
          if ( v120 )
          {
            v121 = 7;
            if ( v120 <= 7 )
              v121 = *(_QWORD *)(v16 + 40);
            memcmp(s1, *(const void **)(v16 + 32), v121);
          }
        }
        std::_Rb_tree_insert_and_rebalance();
        ++v10[5];
        v17 = v13;
      }
      else
      {
        v141 = insert_hint_unique_pos;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v78 = (void *)v13[4];
        v79 = v141;
        if ( s1 != v78 )
        {
          operator delete(v78, v13[6] + 1LL);
          v79 = v141;
        }
        s1f = v79;
        operator delete(v13, 0x50u);
        v17 = s1f;
      }
      if ( (_QWORD *)v157.m128i_i64[0] != s2 )
      {
        s1c = v17;
        operator delete((void *)v157.m128i_i64[0], s2[0] + 1LL);
        v17 = s1c;
      }
      v18 = (_QWORD *)v17[9];
      *((_BYTE *)v17 + 64) = 3;
      v17[9] = v6;
      v146 = v18;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v154 != (char *)&v155 + 8 )
        operator delete(v154, *((_QWORD *)&v155 + 1) + 1LL);
      v19 = v10[2];
      v20 = v9;
      v157.m128i_i64[0] = (__int64)s2;
      strcpy((char *)s2, "type");
      v157.m128i_i64[1] = 4;
      if ( !v19 )
        goto LABEL_35;
      do
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(v19 + 40);
          if ( !v23 )
            break;
          v21 = 4;
          if ( v23 <= 4 )
            v21 = *(_QWORD *)(v19 + 40);
          v22 = memcmp(*(const void **)(v19 + 32), s2, v21);
          if ( v22 || (v22 = v23 - 4, (__int64)(v23 - 4) <= 0x7FFFFFFF) )
          {
            if ( v22 < 0 )
              break;
          }
          v20 = (_QWORD *)v19;
          v19 = *(_QWORD *)(v19 + 16);
          if ( !v19 )
            goto LABEL_28;
        }
        v19 = *(_QWORD *)(v19 + 24);
      }
      while ( v19 );
LABEL_28:
      if ( v9 == v20 )
        goto LABEL_35;
      v24 = v20[5];
      if ( v24 )
      {
        v25 = 4;
        if ( v24 <= 4 )
          v25 = v20[5];
        if ( (v26 = memcmp(s2, (const void *)v20[4], v25)) == 0
          && (v26 = 4 - v24, (__int64)(4 - v24) < (__int64)0xFFFFFFFF80000000LL)
          || v26 < 0 )
        {
LABEL_35:
          v27 = operator new(0x50u);
          v28 = (const void *)(v27 + 48);
          v29 = (_QWORD *)v27;
          *(_QWORD *)(v27 + 32) = v27 + 48;
          v157.m128i_i64[0] = (__int64)s2;
          *(_DWORD *)(v27 + 48) = s2[0];
          v157.m128i_i64[1] = 0;
          *(_BYTE *)(v27 + 52) = BYTE4(s2[0]);
          *(_QWORD *)(v27 + 40) = 4;
          *(_QWORD *)(v27 + 64) = 0;
          *(_QWORD *)(v27 + 72) = 0;
          LOBYTE(s2[0]) = 0;
          v30 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                  v10,
                  v20,
                  (const void *)(v27 + 48),
                  4u);
          v20 = v30;
          if ( v31 )
          {
            if ( !v30 && v9 != (_QWORD *)v31 )
            {
              v118 = *(_QWORD *)(v31 + 40);
              if ( v118 )
              {
                v119 = 4;
                if ( v118 <= 4 )
                  v119 = *(_QWORD *)(v31 + 40);
                memcmp(v28, *(const void **)(v31 + 32), v119);
              }
            }
            v20 = v29;
            std::_Rb_tree_insert_and_rebalance();
            ++v10[5];
          }
          else
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v77 = (void *)v29[4];
            if ( v28 != v77 )
              operator delete(v77, v29[6] + 1LL);
            operator delete(v29, 0x50u);
          }
          if ( (_QWORD *)v157.m128i_i64[0] != s2 )
            operator delete((void *)v157.m128i_i64[0], s2[0] + 1LL);
        }
      }
      *((_BYTE *)v20 + 64) = 5;
      v32 = (_QWORD *)v20[9];
      v20[9] = v140;
      v146 = v32;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      problem_name = (const char *)get_problem_name();
      v146 = nullptr;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v34 = (__int64 *)operator new(0x20u);
      v35 = v34 + 2;
      v36 = v34;
      *v34 = (__int64)(v34 + 2);
      if ( !problem_name )
        JUMPOUT(0xBC723);
      v37 = strlen(problem_name);
      v143 = v37;
      v38 = v37;
      if ( v37 > 0xF )
      {
        s1e = (void *)v37;
        v74 = std::string::_M_create();
        *v36 = v74;
        v35 = (void *)v74;
        v38 = (size_t)s1e;
        v36[2] = v143;
LABEL_118:
        memcpy(v35, problem_name, v38);
        v37 = v143;
        v35 = (void *)*v36;
        goto LABEL_45;
      }
      if ( v37 == 1 )
      {
        *((_BYTE *)v36 + 16) = *problem_name;
      }
      else if ( v37 )
      {
        goto LABEL_118;
      }
LABEL_45:
      v36[1] = v37;
      *((_BYTE *)v35 + v37) = 0;
      v39 = v10[2];
      v40 = v9;
      v157.m128i_i64[0] = (__int64)s2;
      strcpy((char *)s2, "type_name");
      v157.m128i_i64[1] = 9;
      if ( !v39 )
        goto LABEL_62;
      s1a = v10;
      do
      {
        while ( 1 )
        {
          v43 = *(_QWORD *)(v39 + 40);
          if ( !v43 )
            break;
          v41 = 9;
          if ( v43 <= 9 )
            v41 = *(_QWORD *)(v39 + 40);
          v42 = memcmp(*(const void **)(v39 + 32), s2, v41);
          if ( v42 || (v42 = v43 - 9, (__int64)(v43 - 9) <= 0x7FFFFFFF) )
          {
            if ( v42 < 0 )
              break;
          }
          v40 = (_QWORD *)v39;
          v39 = *(_QWORD *)(v39 + 16);
          if ( !v39 )
            goto LABEL_55;
        }
        v39 = *(_QWORD *)(v39 + 24);
      }
      while ( v39 );
LABEL_55:
      v10 = s1a;
      if ( v9 == v40 )
        goto LABEL_62;
      v44 = v40[5];
      if ( v44 )
      {
        v45 = 9;
        if ( v44 <= 9 )
          v45 = v40[5];
        if ( (v46 = memcmp(s2, (const void *)v40[4], v45)) == 0
          && (v46 = 9 - v44, (__int64)(9 - v44) < (__int64)0xFFFFFFFF80000000LL)
          || v46 < 0 )
        {
LABEL_62:
          v47 = operator new(0x50u);
          *(_QWORD *)(v47 + 32) = v47 + 48;
          v48 = s2[0];
          *(_QWORD *)(v47 + 40) = 9;
          *(_QWORD *)(v47 + 48) = v48;
          LOWORD(v48) = s2[1];
          *(_QWORD *)(v47 + 64) = 0;
          *(_WORD *)(v47 + 56) = v48;
          *(_QWORD *)(v47 + 72) = 0;
          v157.m128i_i64[0] = (__int64)s2;
          v157.m128i_i64[1] = 0;
          LOBYTE(s2[0]) = 0;
          v49 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                  v10,
                  v40,
                  (const void *)(v47 + 48),
                  9u);
          v40 = v49;
          if ( v50 )
          {
            if ( v9 != (_QWORD *)v50 && !v49 )
            {
              v124 = *(_QWORD *)(v50 + 40);
              if ( v124 )
              {
                v125 = 9;
                if ( v124 <= 9 )
                  v125 = *(_QWORD *)(v50 + 40);
                memcmp((const void *)(v47 + 48), *(const void **)(v50 + 32), v125);
              }
            }
            v40 = (_QWORD *)v47;
            std::_Rb_tree_insert_and_rebalance();
            ++v10[5];
          }
          else
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v76 = *(void **)(v47 + 32);
            if ( (void *)(v47 + 48) != v76 )
              operator delete(v76, *(_QWORD *)(v47 + 48) + 1LL);
            operator delete((void *)v47, 0x50u);
          }
          if ( (_QWORD *)v157.m128i_i64[0] != s2 )
            operator delete((void *)v157.m128i_i64[0], s2[0] + 1LL);
        }
      }
      v51 = (_QWORD *)v40[9];
      *((_BYTE *)v40 + 64) = 3;
      v40[9] = v36;
      v146 = v51;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( (_QWORD)v148 )
        v52 = v147;
      else
        v52 = _qstring<char>::c_str(void)const::nullstr;
      v146 = nullptr;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v53 = (__int64 *)operator new(0x20u);
      v54 = v53 + 2;
      v55 = v53;
      *v53 = (__int64)(v53 + 2);
      if ( !v52 )
        JUMPOUT(0xBC6CF);
      v56 = strlen(v52);
      v144 = v56;
      v57 = v56;
      if ( v56 > 0xF )
      {
        s1d = (void *)v56;
        v73 = std::string::_M_create();
        *v55 = v73;
        v54 = (void *)v73;
        v57 = (size_t)s1d;
        v55[2] = v144;
LABEL_116:
        memcpy(v54, v52, v57);
        v56 = v144;
        v54 = (void *)*v55;
        goto LABEL_74;
      }
      if ( v56 == 1 )
      {
        *((_BYTE *)v55 + 16) = *v52;
      }
      else if ( v56 )
      {
        goto LABEL_116;
      }
LABEL_74:
      v55[1] = v56;
      *((_BYTE *)v54 + v56) = 0;
      v58 = v10[2];
      v59 = v9;
      strcpy((char *)s2, "description");
      v157.m128i_i64[0] = (__int64)s2;
      v157.m128i_i64[1] = 11;
      if ( !v58 )
        goto LABEL_91;
      s1b = v10;
      do
      {
        while ( 1 )
        {
          v62 = *(_QWORD *)(v58 + 40);
          if ( !v62 )
            break;
          v60 = 11;
          if ( v62 <= 0xB )
            v60 = *(_QWORD *)(v58 + 40);
          v61 = memcmp(*(const void **)(v58 + 32), s2, v60);
          if ( v61 || (v61 = v62 - 11, (__int64)(v62 - 11) <= 0x7FFFFFFF) )
          {
            if ( v61 < 0 )
              break;
          }
          v59 = (_QWORD *)v58;
          v58 = *(_QWORD *)(v58 + 16);
          if ( !v58 )
            goto LABEL_84;
        }
        v58 = *(_QWORD *)(v58 + 24);
      }
      while ( v58 );
LABEL_84:
      v10 = s1b;
      if ( v9 == v59 )
        goto LABEL_91;
      v63 = v59[5];
      if ( v63 )
      {
        v64 = 11;
        if ( v63 <= 0xB )
          v64 = v59[5];
        if ( (v65 = memcmp(s2, (const void *)v59[4], v64)) == 0
          && (v65 = 11 - v63, (__int64)(11 - v63) < (__int64)0xFFFFFFFF80000000LL)
          || v65 < 0 )
        {
LABEL_91:
          v66 = operator new(0x50u);
          *(_QWORD *)(v66 + 32) = v66 + 48;
          v67 = s2[0];
          *(_QWORD *)(v66 + 40) = 11;
          *(_QWORD *)(v66 + 48) = v67;
          LODWORD(v67) = s2[1];
          *(_QWORD *)(v66 + 64) = 0;
          *(_DWORD *)(v66 + 56) = v67;
          *(_QWORD *)(v66 + 72) = 0;
          v157.m128i_i64[0] = (__int64)s2;
          v157.m128i_i64[1] = 0;
          LOBYTE(s2[0]) = 0;
          v68 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                  v10,
                  v59,
                  (const void *)(v66 + 48),
                  0xBu);
          v59 = v68;
          if ( v69 )
          {
            if ( !v68 && v9 != (_QWORD *)v69 )
            {
              v122 = *(_QWORD *)(v69 + 40);
              if ( v122 )
              {
                v123 = 11;
                if ( v122 <= 0xB )
                  v123 = *(_QWORD *)(v69 + 40);
                memcmp((const void *)(v66 + 48), *(const void **)(v69 + 32), v123);
              }
            }
            v59 = (_QWORD *)v66;
            std::_Rb_tree_insert_and_rebalance();
            ++v10[5];
          }
          else
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            v75 = *(void **)(v66 + 32);
            if ( (void *)(v66 + 48) != v75 )
              operator delete(v75, *(_QWORD *)(v66 + 48) + 1LL);
            operator delete((void *)v66, 0x50u);
          }
          if ( (_QWORD *)v157.m128i_i64[0] != s2 )
            operator delete((void *)v157.m128i_i64[0], s2[0] + 1LL);
        }
      }
      v70 = (_QWORD *)v59[9];
      *((_BYTE *)v59 + 64) = 3;
      v59[9] = v55;
      v146 = v70;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( !HIBYTE(v130) )
      {
        v71 = operator new(0x18u);
        *(_QWORD *)(v71 + 16) = 0;
        v132 = (_QWORD *)v71;
        *(_OWORD *)v71 = 0;
LABEL_99:
        v146 = v10;
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&>();
        goto LABEL_100;
      }
      v100 = (_QWORD *)v132[1];
      if ( (_QWORD *)v132[2] == v100 )
        goto LABEL_99;
      *v100 = 1;
      v100[1] = 0;
      v101 = operator new(0x30u);
      v102 = (int *)v10[2];
      *(_DWORD *)(v101 + 8) = 0;
      v103 = (_QWORD *)v101;
      *(_QWORD *)(v101 + 16) = 0;
      *(_QWORD *)(v101 + 24) = v101 + 8;
      *(_QWORD *)(v101 + 32) = v101 + 8;
      *(_QWORD *)(v101 + 40) = 0;
      if ( v102 )
      {
        v104 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                 v102,
                 v101 + 8);
        v105 = v104;
        do
        {
          v106 = v104;
          v104 = *(_QWORD *)(v104 + 16);
        }
        while ( v104 );
        v103[3] = v106;
        v107 = v105;
        do
        {
          v108 = v107;
          v107 = *(_QWORD *)(v107 + 24);
        }
        while ( v107 );
        v109 = v10[5];
        v103[4] = v108;
        v103[2] = v105;
        v103[5] = v109;
        v110 = (_QWORD *)v132[1];
      }
      else
      {
        v110 = v100;
      }
      v100[1] = v103;
      v132[1] = v110 + 2;
LABEL_100:
      next_addr();
      v146 = v10;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v147 )
      {
        *(_QWORD *)&v148 = 0;
        qfree();
      }
      HIBYTE(v130) = 2;
    }
    ++v140;
  }
  while ( v140 != 17 );
  v149 = 0;
  *(_QWORD *)&v150 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v149 = 3;
  v88 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v88, "problem_count", v89, v90, v91, v92, v126, (int)v128, v130);
  v150 = (unsigned __int64)v88;
  if ( HIBYTE(v131) == 1 )
  {
    v93 = v132[5];
  }
  else if ( HIBYTE(v131) == 2 )
  {
    v93 = (__int64)(v132[1] - *v132) >> 4;
  }
  else
  {
    v93 = HIBYTE(v131) != 0;
  }
  v152 = v93;
  v151 = 6;
  v153 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &v157,
    (const __m128i *)&v149);
  s2[0] = 0;
  LOBYTE(v154) = 0;
  *(_QWORD *)&v155 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  LOBYTE(v154) = 3;
  v94 = (__int64 *)operator new(0x20u);
  std::string::basic_string<std::allocator<char>>(v94, "problems", v95, v96, v97, v98, v127, v129, v131);
  v155 = (unsigned __int64)v94;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v156 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    &s2[1],
    (const __m128i *)&v154);
  v159 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
    a1,
    &v157);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

