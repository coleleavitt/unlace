__m128i *__fastcall ida_mcp::mcp::McpRequest::from_json(__m128i *a1, __int64 a2)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbx
  const char *v3; // r14
  size_t v4; // r15
  __int64 v6; // r13
  __int64 v7; // r14
  _BYTE *v8; // rax
  __int64 v9; // r13
  _BYTE *v10; // r15
  size_t v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  size_t v15; // rdx
  int v16; // eax
  _BYTE *v17; // r15
  size_t v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rcx
  size_t v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  char v25; // cl
  __int64 *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r13
  void *v30; // rcx
  _QWORD *v31; // rbx
  size_t v32; // rdx
  int v33; // eax
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rcx
  size_t v36; // rax
  int v37; // eax
  void *v38; // rcx
  _QWORD *v39; // rbx
  size_t v40; // rdx
  int v41; // eax
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rcx
  size_t v44; // rax
  int v45; // eax
  _QWORD *v46; // rbx
  void *v47; // rcx
  size_t v48; // rdx
  int v49; // eax
  unsigned __int64 v50; // r14
  void *v51; // rcx
  _QWORD *v52; // rbx
  size_t v53; // rdx
  int v54; // eax
  unsigned __int64 v55; // r14
  unsigned __int64 v56; // rcx
  size_t v57; // rax
  int v58; // eax
  bool v59; // sf
  _QWORD *v60; // rax
  void *v61; // rcx
  _QWORD *v62; // rbx
  size_t v63; // rdx
  int v64; // eax
  unsigned __int64 v65; // r14
  unsigned __int64 v66; // rcx
  size_t v67; // rax
  int v68; // eax
  _QWORD *v69; // rax
  _QWORD *v70; // rbx
  size_t v71; // rax
  int v72; // eax
  unsigned __int64 v73; // r14
  _QWORD *v74; // rbx
  size_t v75; // rdx
  int v76; // eax
  unsigned __int64 v77; // r14
  unsigned __int64 v78; // r13
  size_t v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  unsigned __int64 v82; // rcx
  size_t v83; // rax
  int v84; // eax
  _QWORD *v85; // rax
  void *v86; // rcx
  _QWORD *v87; // rbx
  size_t v88; // rax
  int v89; // eax
  unsigned __int64 v90; // r14
  unsigned __int64 v91; // rcx
  size_t v92; // rax
  int v93; // eax
  _QWORD *v94; // rax
  __int64 v95; // rax
  unsigned __int64 v96; // r13
  size_t v97; // rax
  int v98; // eax
  _QWORD *v99; // rax
  _QWORD *v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // r8
  _QWORD *v104; // rdx
  __m128i v105; // xmm0
  __int64 v106; // rax
  __m128i *v107; // rax
  __m128i v108; // xmm0
  __int64 v109; // r13
  void *v110; // rcx
  _QWORD *v111; // r13
  _QWORD *v112; // r8
  size_t v113; // rax
  int v114; // eax
  unsigned __int64 v115; // r14
  unsigned __int64 v116; // r13
  size_t v117; // rax
  int v118; // eax
  _BYTE *v119; // [rsp+8h] [rbp-120h]
  _QWORD *v120; // [rsp+8h] [rbp-120h]
  void *v121; // [rsp+8h] [rbp-120h]
  _QWORD *v122; // [rsp+8h] [rbp-120h]
  void *v123; // [rsp+8h] [rbp-120h]
  _QWORD *v124; // [rsp+8h] [rbp-120h]
  _QWORD *v125; // [rsp+8h] [rbp-120h]
  void *v126; // [rsp+8h] [rbp-120h]
  _QWORD *v127; // [rsp+8h] [rbp-120h]
  void *v128; // [rsp+8h] [rbp-120h]
  void *v129; // [rsp+8h] [rbp-120h]
  _QWORD *v130; // [rsp+8h] [rbp-120h]
  void *v131; // [rsp+8h] [rbp-120h]
  _QWORD *v132; // [rsp+8h] [rbp-120h]
  __int64 v133; // [rsp+18h] [rbp-110h]
  __int64 v134; // [rsp+18h] [rbp-110h]
  _QWORD *v135; // [rsp+18h] [rbp-110h]
  _QWORD *v136; // [rsp+18h] [rbp-110h]
  _QWORD *v137; // [rsp+28h] [rbp-100h]
  _QWORD *v138; // [rsp+28h] [rbp-100h]
  __int64 v139; // [rsp+38h] [rbp-F0h]
  __int64 v140; // [rsp+50h] [rbp-D8h]
  _DWORD *v141; // [rsp+60h] [rbp-C8h]
  _DWORD s2[4]; // [rsp+70h] [rbp-B8h] BYREF
  void *v143; // [rsp+80h] [rbp-A8h]
  __int64 v144; // [rsp+88h] [rbp-A0h]
  _QWORD v145[2]; // [rsp+90h] [rbp-98h] BYREF
  __m128i v146; // [rsp+A0h] [rbp-88h] BYREF
  char v147; // [rsp+B0h] [rbp-78h]
  void *v148; // [rsp+B8h] [rbp-70h]
  __int64 v149; // [rsp+C0h] [rbp-68h]
  _QWORD v150[2]; // [rsp+C8h] [rbp-60h] BYREF
  __m128i v151; // [rsp+D8h] [rbp-50h] BYREF
  unsigned __int64 v152; // [rsp+E8h] [rbp-40h]

  v152 = __readfsqword(0x28u);
  LOBYTE(v145[0]) = 0;
  v144 = 0;
  v147 = 0;
  v148 = v150;
  v149 = 0;
  LOBYTE(v150[0]) = 0;
  v143 = v145;
  v151 = 0u;
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_2;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(v6 + 16);
  if ( !v7 )
    goto LABEL_2;
  v8 = (_BYTE *)(v6 + 8);
  v9 = *(_QWORD *)(v6 + 16);
  v119 = v8;
  v10 = v8;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v9 + 40);
      if ( !v13 )
        break;
      v11 = 7;
      if ( v13 <= 7 )
        v11 = *(_QWORD *)(v9 + 40);
      v12 = memcmp(*(const void **)(v9 + 32), "jsonrpc", v11);
      if ( v12 || (v12 = v13 - 7, (__int64)(v13 - 7) <= 0x7FFFFFFF) )
      {
        if ( v12 < 0 )
          break;
      }
      v10 = (_BYTE *)v9;
      v9 = *(_QWORD *)(v9 + 16);
      if ( !v9 )
        goto LABEL_20;
    }
    v9 = *(_QWORD *)(v9 + 24);
  }
  while ( v9 );
LABEL_20:
  if ( v119 == v10 )
    goto LABEL_2;
  v14 = *((_QWORD *)v10 + 5);
  if ( v14 )
  {
    v15 = 7;
    v133 = *((_QWORD *)v10 + 5);
    if ( v14 <= 7 )
      v15 = *((_QWORD *)v10 + 5);
    v16 = memcmp(*((const void **)v10 + 4), "jsonrpc", v15);
    if ( !v16 )
    {
      v16 = v133 - 7;
      if ( v133 - 7 > 0x7FFFFFFF )
        goto LABEL_2;
    }
    if ( v16 > 0 )
      goto LABEL_2;
  }
  strcpy((char *)s2, "jsonrpc");
  v17 = v119;
  do
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(v7 + 40);
      if ( !v20 )
        break;
      v18 = 7;
      if ( v20 <= 7 )
        v18 = *(_QWORD *)(v7 + 40);
      v19 = memcmp(*(const void **)(v7 + 32), s2, v18);
      if ( v19 || (v19 = v20 - 7, (__int64)(v20 - 7) <= 0x7FFFFFFF) )
      {
        if ( v19 < 0 )
          break;
      }
      v17 = (_BYTE *)v7;
      v7 = *(_QWORD *)(v7 + 16);
      if ( !v7 )
        goto LABEL_36;
    }
    v7 = *(_QWORD *)(v7 + 24);
  }
  while ( v7 );
LABEL_36:
  if ( v119 != v17 )
  {
    v21 = *((_QWORD *)v17 + 5);
    if ( v21 )
    {
      v22 = 7;
      v134 = *((_QWORD *)v17 + 5);
      if ( v21 <= 7 )
        v22 = *((_QWORD *)v17 + 5);
      v23 = memcmp(s2, *((const void **)v17 + 4), v22);
      if ( v23 || (v23 = 7 - v134, 7 - v134 >= (__int64)0xFFFFFFFF80000000LL) )
      {
        if ( v23 < 0 )
          v17 = v119;
        v119 = v17;
      }
    }
    else
    {
      v119 = v17;
    }
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v24 = operator new(0x20u);
  v139 = v24;
  *(_WORD *)(v24 + 16) = 11826;
  *(_QWORD *)v24 = v24 + 16;
  *(_BYTE *)(v24 + 18) = 48;
  *(_BYTE *)(v24 + 19) = 0;
  v25 = v119[64];
  *(_QWORD *)(v24 + 8) = 3;
  if ( v25 == 7
    || v25 != 9
    && (v25 != 3
     || (v26 = *((__int64 **)v119 + 9), v26[1] != 3)
     || (v27 = *v26, *(_WORD *)v27 != *(_WORD *)(v24 + 16))
     || *(_BYTE *)(v27 + 2) != *(_BYTE *)(v24 + 18)) )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    goto LABEL_2;
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  std::string::_M_replace();
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_2;
  v28 = *(_QWORD *)(a2 + 8);
  v29 = *(_QWORD *)(v28 + 16);
  if ( !v29 )
    goto LABEL_2;
  v30 = *(void **)(v28 + 16);
  v135 = (_QWORD *)(v28 + 8);
  v31 = (_QWORD *)(v28 + 8);
  v137 = (_QWORD *)(v28 + 8);
  do
  {
    v34 = *((_QWORD *)v30 + 5);
    if ( !v34 )
      goto LABEL_66;
    v32 = 2;
    v120 = v30;
    if ( v34 <= 2 )
      v32 = *((_QWORD *)v30 + 5);
    if ( ((v33 = memcmp(*((const void **)v30 + 4), "id", v32), v30 = v120, v33)
       || (v33 = v34 - 2, (__int64)(v34 - 2) <= 0x7FFFFFFF))
      && v33 < 0 )
    {
LABEL_66:
      v30 = *((void **)v30 + 3);
    }
    else
    {
      v31 = v120;
      v30 = (void *)v120[2];
    }
  }
  while ( v30 );
  if ( v135 != v31 )
  {
    v35 = v31[5];
    if ( !v35 )
      goto LABEL_101;
    v36 = 2;
    v121 = (void *)v31[5];
    if ( v35 <= 2 )
      v36 = v31[5];
    v37 = memcmp((const void *)v31[4], "id", v36);
    if ( v37 || (v37 = (_DWORD)v121 - 2, (__int64)v121 - 2 <= 0x7FFFFFFF) )
    {
      if ( v37 <= 0 )
      {
LABEL_101:
        v51 = (void *)v29;
        strcpy((char *)s2, "id");
        v52 = v135;
        do
        {
          v55 = *((_QWORD *)v51 + 5);
          if ( !v55 )
            goto LABEL_110;
          v53 = 2;
          v125 = v51;
          if ( v55 <= 2 )
            v53 = *((_QWORD *)v51 + 5);
          if ( ((v54 = memcmp(*((const void **)v51 + 4), s2, v53), v51 = v125, v54)
             || (v54 = v55 - 2, (__int64)(v55 - 2) <= 0x7FFFFFFF))
            && v54 < 0 )
          {
LABEL_110:
            v51 = *((void **)v51 + 3);
          }
          else
          {
            v52 = v125;
            v51 = (void *)v125[2];
          }
        }
        while ( v51 );
        if ( v135 != v52 )
        {
          v56 = v52[5];
          if ( v56 )
          {
            v57 = 2;
            v126 = (void *)v52[5];
            if ( v56 <= 2 )
              v57 = v52[5];
            v58 = memcmp(s2, (const void *)v52[4], v57);
            if ( v58 || (v58 = 2 - (_DWORD)v126, 2 - (__int64)v126 >= (__int64)0xFFFFFFFF80000000LL) )
            {
              v59 = v58 < 0;
              v60 = v52;
              if ( v59 )
                v60 = v135;
              v52 = v60;
            }
            else
            {
              v52 = v135;
            }
          }
        }
        if ( (unsigned __int8)(*((_BYTE *)v52 + 64) - 5) <= 1u )
          goto LABEL_151;
        v61 = (void *)v29;
        strcpy((char *)s2, "id");
        v62 = v135;
        do
        {
          v65 = *((_QWORD *)v61 + 5);
          if ( !v65 )
            goto LABEL_130;
          v63 = 2;
          v127 = v61;
          if ( v65 <= 2 )
            v63 = *((_QWORD *)v61 + 5);
          if ( ((v64 = memcmp(*((const void **)v61 + 4), s2, v63), v61 = v127, v64)
             || (v64 = v65 - 2, (__int64)(v65 - 2) <= 0x7FFFFFFF))
            && v64 < 0 )
          {
LABEL_130:
            v61 = *((void **)v61 + 3);
          }
          else
          {
            v62 = v127;
            v61 = (void *)v127[2];
          }
        }
        while ( v61 );
        if ( v135 != v62 )
        {
          v82 = v62[5];
          if ( v82 )
          {
            v83 = 2;
            v129 = (void *)v62[5];
            if ( v82 <= 2 )
              v83 = v62[5];
            v84 = memcmp(s2, (const void *)v62[4], v83);
            if ( v84 || (v84 = 2 - (_DWORD)v129, 2 - (__int64)v129 >= (__int64)0xFFFFFFFF80000000LL) )
            {
              v59 = v84 < 0;
              v85 = v62;
              if ( v59 )
                v85 = v135;
              v62 = v85;
            }
            else
            {
              v62 = v135;
            }
          }
        }
        if ( *((_BYTE *)v62 + 64) == 3 )
        {
LABEL_151:
          v74 = v135;
          strcpy((char *)s2, "id");
          do
          {
            v77 = *(_QWORD *)(v29 + 40);
            if ( !v77 )
              goto LABEL_160;
            v75 = 2;
            if ( v77 <= 2 )
              v75 = *(_QWORD *)(v29 + 40);
            if ( ((v76 = memcmp(*(const void **)(v29 + 32), s2, v75)) != 0
               || (v76 = v77 - 2, (__int64)(v77 - 2) <= 0x7FFFFFFF))
              && v76 < 0 )
            {
LABEL_160:
              v29 = *(_QWORD *)(v29 + 24);
            }
            else
            {
              v74 = (_QWORD *)v29;
              v29 = *(_QWORD *)(v29 + 16);
            }
          }
          while ( v29 );
          if ( v135 != v74 )
          {
            v78 = v74[5];
            if ( v78 )
            {
              v79 = 2;
              if ( v78 <= 2 )
                v79 = v74[5];
              memcmp(s2, (const void *)v74[4], v79);
            }
          }
          if ( v147 )
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
            v146.m128i_i8[0] = 0;
            v80 = v146.m128i_i64[1];
            v146.m128i_i64[1] = v139;
            v139 = v80;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
          else
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
            v147 = 1;
          }
        }
        else
        {
          v86 = (void *)v29;
          strcpy((char *)s2, "id");
          v87 = v135;
          do
          {
            v90 = *((_QWORD *)v86 + 5);
            if ( !v90 )
              goto LABEL_190;
            v88 = 2;
            v130 = v86;
            if ( v90 <= 2 )
              v88 = *((_QWORD *)v86 + 5);
            if ( ((v89 = memcmp(*((const void **)v86 + 4), s2, v88), v86 = v130, v89)
               || (v89 = v90 - 2, (__int64)(v90 - 2) <= 0x7FFFFFFF))
              && v89 < 0 )
            {
LABEL_190:
              v86 = *((void **)v86 + 3);
            }
            else
            {
              v87 = v130;
              v86 = (void *)v130[2];
            }
          }
          while ( v86 );
          if ( v135 != v87 )
          {
            v91 = v87[5];
            if ( v91 )
            {
              v92 = 2;
              v131 = (void *)v87[5];
              if ( v91 <= 2 )
                v92 = v87[5];
              v93 = memcmp(s2, (const void *)v87[4], v92);
              if ( v93 || (v93 = 2 - (_DWORD)v131, 2 - (__int64)v131 >= (__int64)0xFFFFFFFF80000000LL) )
              {
                v59 = v93 < 0;
                v94 = v87;
                if ( v59 )
                  v94 = v135;
                v137 = v94;
              }
            }
            else
            {
              v137 = v87;
            }
          }
          if ( *((_BYTE *)v137 + 64) )
            goto LABEL_74;
          if ( !v147 )
          {
            v146.m128i_i8[0] = 0;
            v146.m128i_i64[1] = 0;
            v147 = 1;
            goto LABEL_74;
          }
          v95 = v146.m128i_i64[1];
          v146.m128i_i8[0] = 0;
          v146.m128i_i64[1] = 0;
          v139 = v95;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        if ( *(_BYTE *)a2 == 1 )
        {
          v81 = *(_QWORD *)(a2 + 8);
          v29 = *(_QWORD *)(v81 + 16);
          if ( v29 )
          {
            v135 = (_QWORD *)(v81 + 8);
            goto LABEL_74;
          }
        }
LABEL_2:
        memset(a1, 0, 0x70u);
        goto LABEL_3;
      }
    }
  }
LABEL_74:
  v38 = (void *)v29;
  v138 = v135;
  v39 = v135;
  do
  {
    v42 = *((_QWORD *)v38 + 5);
    if ( !v42 )
      goto LABEL_83;
    v40 = 6;
    v122 = v38;
    if ( v42 <= 6 )
      v40 = *((_QWORD *)v38 + 5);
    if ( ((v41 = memcmp(*((const void **)v38 + 4), "method", v40), v38 = v122, v41)
       || (v41 = v42 - 6, (__int64)(v42 - 6) <= 0x7FFFFFFF))
      && v41 < 0 )
    {
LABEL_83:
      v38 = *((void **)v38 + 3);
    }
    else
    {
      v39 = v122;
      v38 = (void *)v122[2];
    }
  }
  while ( v38 );
  if ( v135 == v39 )
    goto LABEL_2;
  v43 = v39[5];
  if ( v43 )
  {
    v44 = 6;
    v123 = (void *)v39[5];
    if ( v43 <= 6 )
      v44 = v39[5];
    v45 = memcmp((const void *)v39[4], "method", v44);
    if ( !v45 )
    {
      v45 = (_DWORD)v123 - 6;
      if ( (__int64)v123 - 6 > 0x7FFFFFFF )
        goto LABEL_2;
    }
    if ( v45 > 0 )
      goto LABEL_2;
  }
  v46 = v135;
  v47 = (void *)v29;
  strcpy((char *)s2, "method");
  do
  {
    v50 = *((_QWORD *)v47 + 5);
    if ( !v50 )
      goto LABEL_100;
    v48 = 6;
    v124 = v47;
    if ( v50 <= 6 )
      v48 = *((_QWORD *)v47 + 5);
    if ( ((v49 = memcmp(*((const void **)v47 + 4), s2, v48), v47 = v124, v49)
       || (v49 = v50 - 6, (__int64)(v50 - 6) <= 0x7FFFFFFF))
      && v49 < 0 )
    {
LABEL_100:
      v47 = *((void **)v47 + 3);
    }
    else
    {
      v46 = v124;
      v47 = (void *)v124[2];
    }
  }
  while ( v47 );
  if ( v135 != v46 )
  {
    v66 = v46[5];
    if ( v66 )
    {
      v67 = 6;
      v128 = (void *)v46[5];
      if ( v66 <= 6 )
        v67 = v46[5];
      v68 = memcmp(s2, (const void *)v46[4], v67);
      if ( v68 || (v68 = 6 - (_DWORD)v128, 6 - (__int64)v128 >= (__int64)0xFFFFFFFF80000000LL) )
      {
        v59 = v68 < 0;
        v69 = v46;
        if ( v59 )
          v69 = v135;
        v46 = v69;
      }
      else
      {
        v46 = v135;
      }
    }
  }
  if ( *((_BYTE *)v46 + 64) != 3 )
    goto LABEL_2;
  v70 = v135;
  strcpy((char *)s2, "method");
  do
  {
    v73 = *(_QWORD *)(v29 + 40);
    if ( !v73 )
      goto LABEL_150;
    v71 = 6;
    if ( v73 <= 6 )
      v71 = *(_QWORD *)(v29 + 40);
    if ( ((v72 = memcmp(*(const void **)(v29 + 32), s2, v71)) != 0 || (v72 = v73 - 6, (__int64)(v73 - 6) <= 0x7FFFFFFF))
      && v72 < 0 )
    {
LABEL_150:
      v29 = *(_QWORD *)(v29 + 24);
    }
    else
    {
      v70 = (_QWORD *)v29;
      v29 = *(_QWORD *)(v29 + 16);
    }
  }
  while ( v29 );
  if ( v135 != v70 )
  {
    v96 = v70[5];
    if ( v96 )
    {
      v97 = 6;
      if ( v96 <= 6 )
        v97 = v70[5];
      v98 = memcmp(s2, (const void *)v70[4], v97);
      if ( v98 || (v98 = 6 - v96, (__int64)(6 - v96) >= (__int64)0xFFFFFFFF80000000LL) )
      {
        v59 = v98 < 0;
        v99 = v70;
        if ( v59 )
          v99 = v135;
        v138 = v99;
      }
    }
    else
    {
      v138 = v70;
    }
  }
  LOBYTE(v140) = 0;
  if ( *((_BYTE *)v138 + 64) != 3 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *((_BYTE *)v138 + 64) )
    {
      case 0:
        v3 = "null";
        break;
      case 1:
        v3 = "object";
        break;
      case 2:
        v3 = "array";
        break;
      case 3:
        v3 = "string";
        break;
      case 4:
        v3 = "boolean";
        break;
      case 8:
        v3 = "binary";
        break;
      case 9:
        v3 = "discarded";
        break;
      default:
        v3 = "number";
        break;
    }
    LOBYTE(s2[0]) = 0;
    v141 = s2;
    v4 = strlen(v3);
    std::string::reserve();
    std::string::_M_append();
    if ( v4 <= 0x7FFFFFFFFFFFFFFELL )
    {
      std::string::_M_append();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
        exception,
        302);
      std::string::_M_dispose();
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    std::__throw_length_error("basic_string::append");
  }
  std::string::_M_assign();
  v149 = 0;
  *(_BYTE *)v148 = 0;
  LOBYTE(v140) = 0;
  if ( *(_BYTE *)a2 != 1 )
    goto LABEL_216;
  v109 = *(_QWORD *)(a2 + 8);
  v110 = *(void **)(v109 + 16);
  if ( !v110 )
    goto LABEL_216;
  v111 = (_QWORD *)(v109 + 8);
  v112 = v111;
  do
  {
    v115 = *((_QWORD *)v110 + 5);
    if ( !v115 )
      goto LABEL_234;
    v113 = 6;
    v136 = v112;
    v132 = v110;
    if ( v115 <= 6 )
      v113 = *((_QWORD *)v110 + 5);
    if ( ((v114 = memcmp(*((const void **)v110 + 4), "params", v113), v110 = v132, v112 = v136, v114)
       || (v114 = v115 - 6, (__int64)(v115 - 6) <= 0x7FFFFFFF))
      && v114 < 0 )
    {
LABEL_234:
      v110 = *((void **)v110 + 3);
    }
    else
    {
      v112 = v132;
      v110 = (void *)v132[2];
    }
  }
  while ( v110 );
  if ( v111 == v112 )
    goto LABEL_216;
  v116 = v112[5];
  if ( !v116 )
    goto LABEL_243;
  v117 = 6;
  if ( v116 <= 6 )
    v117 = v112[5];
  if ( ((v118 = memcmp((const void *)v112[4], "params", v117)) != 0
     || (v118 = v116 - 6, (__int64)(v116 - 6) <= 0x7FFFFFFF))
    && v118 <= 0 )
  {
LABEL_243:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v151.m128i_i8[0] = 0;
    v151.m128i_i64[1] = v139;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  else
  {
LABEL_216:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v151.m128i_i8[0] = 0;
    v151.m128i_i64[1] = v139;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  v100 = v143;
  v101 = v144;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( v100 == v145 )
  {
    qmemcpy(&a1[1], v145, (unsigned int)(v101 + 1));
  }
  else
  {
    v102 = v145[0];
    a1->m128i_i64[0] = (__int64)v100;
    a1[1].m128i_i64[0] = v102;
  }
  a1->m128i_i64[1] = v101;
  v103 = v149;
  v143 = v145;
  v104 = v148;
  v144 = 0;
  LOBYTE(v145[0]) = 0;
  a1[3].m128i_i8[0] = 0;
  if ( v147 )
  {
    v105 = _mm_load_si128(&v146);
    a1[3].m128i_i8[0] = 1;
    v146.m128i_i8[0] = 0;
    v146.m128i_i64[1] = 0;
    a1[2] = v105;
  }
  a1[3].m128i_i64[1] = (__int64)&a1[4].m128i_i64[1];
  if ( v104 == v150 )
  {
    v107 = a1;
    qmemcpy(&a1[4].m128i_u64[1], v150, (unsigned int)(v103 + 1));
  }
  else
  {
    v106 = v150[0];
    a1[3].m128i_i64[1] = (__int64)v104;
    a1[4].m128i_i64[1] = v106;
    v107 = a1;
  }
  v108 = _mm_loadu_si128(&v151);
  v107[4].m128i_i64[0] = v103;
  v148 = v150;
  v149 = 0;
  LOBYTE(v150[0]) = 0;
  v151.m128i_i8[0] = 0;
  v151.m128i_i64[1] = 0;
  v107[6].m128i_i8[8] = 1;
  *(__m128i *)((char *)v107 + 88) = v108;
LABEL_3:
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v148 != v150 )
    operator delete(v148, v150[0] + 1LL);
  if ( v147 )
  {
    v147 = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  if ( v143 != v145 )
    operator delete(v143, v145[0] + 1LL);
  return a1;
}

