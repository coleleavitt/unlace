unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        _QWORD *a1,
        const __m128i *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  const __m128i *v4; // rax
  const __m128i *v5; // rbp
  const __m128i *v6; // r12
  const __m128i *v7; // rdx
  int v8; // eax
  const __m128i *v9; // rax
  _QWORD *v10; // rax
  const __m128i *v11; // rax
  _QWORD *v12; // rax
  const __m128i *v13; // rax
  _QWORD *v14; // rax
  const __m128i *v15; // rax
  unsigned __int64 v16; // rbp
  __int64 v17; // rbx
  unsigned __int8 *v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rcx
  _QWORD *v23; // rax
  const __m128i *v24; // rax
  _QWORD *v25; // rax
  __int64 *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v31; // r8
  __int64 v32; // r13
  __int64 v33; // r10
  const __m128i *v34; // rax
  const void *v35; // rdi
  const void *v36; // r12
  _QWORD *v37; // r15
  size_t v38; // rbp
  _QWORD *v39; // rbx
  const __m128i *v40; // r14
  size_t j; // r13
  size_t v42; // rdx
  signed __int64 v43; // rax
  const __m128i *v44; // rax
  size_t v45; // r14
  size_t v46; // rbx
  size_t v47; // rdx
  int v48; // eax
  __m128i v49; // xmm0
  __int8 v50; // al
  __int64 v51; // rax
  _QWORD *v52; // r8
  __m128i *v53; // r13
  unsigned __int64 v54; // r14
  __int64 v55; // rax
  char *v56; // rdi
  __int64 v57; // r14
  char *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  _BYTE *v61; // r15
  unsigned __int64 v62; // r14
  _QWORD *v63; // rax
  _BYTE *v64; // rdi
  __int64 *v65; // r13
  size_t v66; // rsi
  __int64 v67; // rax
  __int64 *v68; // r14
  __int64 v69; // rax
  unsigned __int64 v70; // r13
  __m128i *v71; // r15
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // r13
  __int64 v75; // r14
  __int64 v76; // rax
  __int64 v77; // r14
  __int64 v78; // rax
  int *v79; // rdi
  _QWORD *v80; // r13
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // r14
  __int64 v89; // rax
  unsigned __int64 v90; // r12
  __m128i *v91; // rbx
  char *v92; // rcx
  size_t v93; // r12
  __int64 v94; // rax
  __int64 v95; // r12
  __int64 v96; // rax
  int *v97; // rdi
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rax
  _BYTE *v105; // r12
  unsigned __int64 v106; // r14
  _QWORD *v107; // rax
  _BYTE *v108; // rdi
  __int64 *v109; // rbx
  size_t v110; // rdx
  __int64 v111; // rax
  __int64 *v112; // r14
  __int64 v113; // rax
  unsigned __int64 v114; // rbx
  __m128i *v115; // r12
  __int64 v116; // rdi
  __int64 v117; // rbx
  __int64 v118; // r14
  __m128i v119; // xmm0
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  unsigned __int64 v123; // rax
  int v124[2]; // [rsp+0h] [rbp-C8h]
  _QWORD *v125; // [rsp+8h] [rbp-C0h]
  __int8 v126; // [rsp+8h] [rbp-C0h]
  _QWORD *v127; // [rsp+10h] [rbp-B8h]
  _QWORD *v128; // [rsp+10h] [rbp-B8h]
  _QWORD *v129; // [rsp+20h] [rbp-A8h]
  __int64 v131; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v132; // [rsp+48h] [rbp-80h]
  __int64 v133; // [rsp+50h] [rbp-78h] BYREF
  __int64 v134; // [rsp+58h] [rbp-70h] BYREF
  int v135[4]; // [rsp+60h] [rbp-68h]
  __m128i i; // [rsp+70h] [rbp-58h]
  unsigned __int64 v137; // [rsp+88h] [rbp-40h]

  v3 = 24 * a3;
  v4 = (const __m128i *)((char *)a2 + 24 * a3);
  v137 = __readfsqword(0x28u);
  v5 = a2;
  *a1 = 0;
  a1[1] = 0;
  *(_QWORD *)v124 = v4;
  if ( a2 == v4 )
    goto LABEL_51;
  v6 = a2;
  v7 = a2;
  v8 = (-85 * (unsigned __int8)((unsigned __int64)((char *)v4 - (char *)a2 - 24) >> 3) + 1) & 3;
  if ( !v8 )
    goto LABEL_23;
  if ( v8 == 1 )
    goto LABEL_17;
  if ( v8 != 2 )
  {
    v9 = (const __m128i *)a2[1].m128i_i64[0];
    if ( !v9 )
      v9 = a2;
    if ( v9->m128i_i8[0] != 2 )
      goto LABEL_26;
    v10 = (_QWORD *)v9->m128i_i64[1];
    if ( v10[1] - *v10 != 32 || *(_BYTE *)*v10 != 3 )
      goto LABEL_26;
    v7 = (const __m128i *)((char *)a2 + 24);
  }
  v11 = (const __m128i *)v7[1].m128i_i64[0];
  if ( !v11 )
    v11 = v7;
  if ( v11->m128i_i8[0] == 2 )
  {
    v12 = (_QWORD *)v11->m128i_i64[1];
    if ( v12[1] - *v12 == 32 && *(_BYTE *)*v12 == 3 )
    {
      v7 = (const __m128i *)((char *)v7 + 24);
LABEL_17:
      v13 = (const __m128i *)v7[1].m128i_i64[0];
      if ( !v13 )
        v13 = v7;
      if ( v13->m128i_i8[0] == 2 )
      {
        v14 = (_QWORD *)v13->m128i_i64[1];
        if ( v14[1] - *v14 == 32 && *(_BYTE *)*v14 == 3 )
        {
          v7 = (const __m128i *)((char *)v7 + 24);
          if ( *(const __m128i **)v124 == v7 )
            goto LABEL_51;
          while ( 1 )
          {
LABEL_23:
            v15 = (const __m128i *)v7[1].m128i_i64[0];
            if ( !v15 )
              v15 = v7;
            if ( v15->m128i_i8[0] != 2 )
              break;
            v20 = (_QWORD *)v15->m128i_i64[1];
            if ( v20[1] - *v20 != 32 || *(_BYTE *)*v20 != 3 )
              break;
            v21 = v7[2].m128i_i64[1];
            v22 = &v7[1].m128i_i64[1];
            v7 = (const __m128i *)((char *)v7 + 24);
            if ( !v21 )
              v21 = (__int64)v22;
            if ( *(_BYTE *)v21 != 2 )
              break;
            v23 = *(_QWORD **)(v21 + 8);
            if ( v23[1] - *v23 != 32 || *(_BYTE *)*v23 != 3 )
              break;
            v24 = (const __m128i *)v7[2].m128i_i64[1];
            v7 = (const __m128i *)((char *)v7 + 24);
            if ( !v24 )
              v24 = v7;
            if ( v24->m128i_i8[0] != 2 )
              break;
            v25 = (_QWORD *)v24->m128i_i64[1];
            if ( v25[1] - *v25 != 32 || *(_BYTE *)*v25 != 3 )
              break;
            v26 = (__int64 *)v22[8];
            v7 = (const __m128i *)(v22 + 6);
            if ( !v26 )
              v26 = v22 + 6;
            if ( *(_BYTE *)v26 != 2 )
              break;
            v27 = (_QWORD *)v26[1];
            if ( v27[1] - *v27 != 32 || *(_BYTE *)*v27 != 3 )
              break;
            v7 = (const __m128i *)(v22 + 9);
            if ( *(__int64 **)v124 == v22 + 9 )
              goto LABEL_51;
          }
        }
      }
    }
  }
LABEL_26:
  if ( *(const __m128i **)v124 != v7 )
  {
    *(_BYTE *)a1 = 2;
    v125 = (_QWORD *)operator new(0x18u);
    v125[2] = 0;
    *(_OWORD *)v125 = 0;
    if ( v3 < 0 )
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    v16 = 0xAAAAAAAAAAAAAAB0LL * (v3 >> 3);
    if ( 0xAAAAAAAAAAAAAAABLL * (v3 >> 3) )
      v17 = operator new(0xAAAAAAAAAAAAAAB0LL * (v3 >> 3));
    else
      v17 = 0;
    v133 = v17;
    v125[2] = v17 + v16;
    *(__m128i *)v125 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
    *(__m128i *)v135 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)&v133);
    while ( 1 )
    {
      v18 = (unsigned __int8 *)v6[1].m128i_i64[0];
      if ( !v18 )
      {
        v119 = _mm_loadu_si128(v6);
        v6->m128i_i8[0] = 0;
        v6->m128i_i64[1] = 0;
        *(__m128i *)v17 = v119;
        goto LABEL_55;
      }
      v19 = *v18;
      *(_QWORD *)(v17 + 8) = 0;
      *(_BYTE *)v17 = v19;
      switch ( v19 )
      {
        case 1LL:
          v77 = *((_QWORD *)v18 + 1);
          v78 = operator new(0x30u);
          *(_QWORD *)(v78 + 16) = 0;
          v79 = *(int **)(v77 + 16);
          v80 = (_QWORD *)v78;
          *(_DWORD *)(v78 + 8) = 0;
          *(_QWORD *)(v78 + 24) = v78 + 8;
          *(_QWORD *)(v78 + 32) = v78 + 8;
          *(_QWORD *)(v78 + 40) = 0;
          if ( v79 )
          {
            v81 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                    v79,
                    v78 + 8);
            v82 = v81;
            do
            {
              v83 = v81;
              v81 = *(_QWORD *)(v81 + 16);
            }
            while ( v81 );
            v80[3] = v83;
            v84 = v82;
            do
            {
              v85 = v84;
              v84 = *(_QWORD *)(v84 + 24);
            }
            while ( v84 );
            v86 = *(_QWORD *)(v77 + 40);
            v80[4] = v85;
            v80[2] = v82;
            v80[5] = v86;
            v87 = v133;
          }
          else
          {
            v87 = v17;
          }
          *(_QWORD *)(v17 + 8) = v80;
          v17 = v87;
          goto LABEL_55;
        case 2LL:
          v68 = *((__int64 **)v18 + 1);
          v69 = operator new(0x18u);
          v70 = v68[1] - *v68;
          v71 = (__m128i *)v69;
          *(_QWORD *)(v69 + 16) = 0;
          *(_OWORD *)v69 = 0;
          if ( v70 )
            v72 = operator new(v70);
          else
            v72 = 0;
          v71[1].m128i_i64[0] = v72 + v70;
          *v71 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v72, (__m128i)(unsigned __int64)v72);
          v73 = *v68;
          v74 = v68[1];
          v134 = v72;
          i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v72, (__m128i)(unsigned __int64)&v134);
          if ( v74 == v73 )
          {
            v76 = v17;
          }
          else
          {
            v75 = v73;
            do
            {
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
              v75 += 16;
              v72 = v134 + 16;
              v134 += 16;
            }
            while ( v74 != v75 );
            v76 = v133;
          }
          v71->m128i_i64[1] = v72;
          *(_QWORD *)(v17 + 8) = v71;
          v17 = v76;
          goto LABEL_55;
        case 3LL:
          v60 = *((_QWORD *)v18 + 1);
          v61 = *(_BYTE **)v60;
          v62 = *(_QWORD *)(v60 + 8);
          v63 = (_QWORD *)operator new(0x20u);
          v64 = v63 + 2;
          i.m128i_i64[0] = v62;
          v65 = v63;
          *v63 = v63 + 2;
          if ( v62 <= 0xF )
          {
            v66 = v62 + 1;
            if ( !v62 )
              goto LABEL_145;
LABEL_91:
            memcpy(v64, v61, v66);
            v67 = i.m128i_i64[0];
            goto LABEL_92;
          }
          v120 = std::string::_M_create();
          *v65 = v120;
          v64 = (_BYTE *)v120;
          v121 = i.m128i_i64[0];
          v65[2] = i.m128i_i64[0];
          v66 = v121 + 1;
          if ( !v121 )
          {
LABEL_145:
            *v64 = *v61;
            v67 = i.m128i_i64[0];
            goto LABEL_92;
          }
          v67 = -1;
          if ( v66 )
            goto LABEL_91;
LABEL_92:
          v65[1] = v67;
          *(_QWORD *)(v17 + 8) = v65;
          v17 = v133;
LABEL_55:
          v17 += 16;
          v6 = (const __m128i *)((char *)v6 + 24);
          v133 = v17;
          if ( *(const __m128i **)v124 == v6 )
          {
            v125[1] = v17;
            a1[1] = v125;
            return v137 - __readfsqword(0x28u);
          }
          break;
        case 4LL:
          *(_BYTE *)(v17 + 8) = v18[8];
          goto LABEL_55;
        case 5LL:
        case 6LL:
          *(_QWORD *)(v17 + 8) = *((_QWORD *)v18 + 1);
          goto LABEL_55;
        case 7LL:
          *(_QWORD *)(v17 + 8) = *((_QWORD *)v18 + 1);
          goto LABEL_55;
        case 8LL:
          v127 = *((_QWORD **)v18 + 1);
          v51 = operator new(0x28u);
          v52 = v127;
          v53 = (__m128i *)v51;
          v54 = v127[1] - *v127;
          *(_QWORD *)(v51 + 16) = 0;
          *(_OWORD *)v51 = 0;
          if ( v54 )
          {
            v55 = operator new(v54);
            v52 = v127;
            v56 = (char *)v55;
          }
          else
          {
            v56 = nullptr;
          }
          v53[1].m128i_i64[0] = (__int64)&v56[v54];
          *v53 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v56, (__m128i)(unsigned __int64)v56);
          v57 = v52[1] - *v52;
          if ( v57 > 0 )
          {
            v128 = v52;
            v58 = (char *)memcpy(v56, (const void *)*v52, v52[1] - *v52);
            v52 = v128;
            v56 = &v58[v57];
          }
          v59 = v52[3];
          v53->m128i_i64[1] = (__int64)v56;
          v53[1].m128i_i64[1] = v59;
          v53[2].m128i_i8[0] = *((_BYTE *)v52 + 32);
          *(_QWORD *)(v17 + 8) = v53;
          goto LABEL_55;
        default:
          goto LABEL_55;
      }
    }
  }
LABEL_51:
  *(_BYTE *)a1 = 1;
  v28 = operator new(0x30u);
  *(_DWORD *)(v28 + 8) = 0;
  *(_QWORD *)(v28 + 16) = 0;
  *(_QWORD *)(v28 + 24) = v28 + 8;
  *(_QWORD *)(v28 + 32) = v28 + 8;
  *(_QWORD *)(v28 + 40) = 0;
  a1[1] = v28;
  if ( a2 == *(const __m128i **)v124 )
    return v137 - __readfsqword(0x28u);
  v29 = a2[1].m128i_i64[0];
  if ( v29 )
  {
LABEL_53:
    *(_QWORD *)&v135[2] = 0;
    v126 = *(_BYTE *)v29;
    switch ( *(_BYTE *)v29 )
    {
      case 1:
        v95 = *(_QWORD *)(v29 + 8);
        v96 = operator new(0x30u);
        *(_QWORD *)(v96 + 16) = 0;
        v97 = *(int **)(v95 + 16);
        v91 = (__m128i *)v96;
        *(_DWORD *)(v96 + 8) = 0;
        *(_QWORD *)(v96 + 24) = v96 + 8;
        *(_QWORD *)(v96 + 32) = v96 + 8;
        *(_QWORD *)(v96 + 40) = 0;
        if ( !v97 )
          goto LABEL_113;
        v98 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                v97,
                v96 + 8);
        v99 = v98;
        do
        {
          v100 = v98;
          v98 = *(_QWORD *)(v98 + 16);
        }
        while ( v98 );
        v91[1].m128i_i64[1] = v100;
        v101 = v99;
        do
        {
          v102 = v101;
          v101 = *(_QWORD *)(v101 + 24);
        }
        while ( v101 );
        v103 = *(_QWORD *)(v95 + 40);
        v91[2].m128i_i64[0] = v102;
        v91[1].m128i_i64[0] = v99;
        v91[2].m128i_i64[1] = v103;
        *(_QWORD *)&v135[2] = v91;
        break;
      case 2:
        v112 = *(__int64 **)(v29 + 8);
        v113 = operator new(0x18u);
        v114 = v112[1] - *v112;
        v115 = (__m128i *)v113;
        *(_QWORD *)(v113 + 16) = 0;
        *(_OWORD *)v113 = 0;
        if ( v114 )
          v116 = operator new(v114);
        else
          v116 = 0;
        v115[1].m128i_i64[0] = v116 + v114;
        *v115 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v116, (__m128i)(unsigned __int64)v116);
        v117 = v112[1];
        v118 = *v112;
        v131 = v116;
        for ( i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v116, (__m128i)(unsigned __int64)&v131);
              v117 != v118;
              v131 += 16 )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v118 += 16;
          v116 = v131 + 16;
        }
        v115->m128i_i64[1] = v116;
        *(_QWORD *)&v135[2] = v115;
        break;
      case 3:
        v104 = *(_QWORD *)(v29 + 8);
        v105 = *(_BYTE **)v104;
        v106 = *(_QWORD *)(v104 + 8);
        v107 = (_QWORD *)operator new(0x20u);
        v108 = v107 + 2;
        v132 = v106;
        v109 = v107;
        *v107 = v107 + 2;
        if ( v106 <= 0xF )
        {
          v110 = v106 + 1;
          if ( v106 )
          {
LABEL_123:
            memcpy(v108, v105, v110);
            v111 = v132;
            goto LABEL_124;
          }
          goto LABEL_146;
        }
        v122 = std::string::_M_create();
        *v109 = v122;
        v108 = (_BYTE *)v122;
        v123 = v132;
        v109[2] = v132;
        v110 = v123 + 1;
        if ( !v123 )
        {
LABEL_146:
          *v108 = *v105;
          v111 = v132;
          goto LABEL_124;
        }
        v111 = -1;
        if ( v110 )
          goto LABEL_123;
LABEL_124:
        v109[1] = v111;
        *(_QWORD *)&v135[2] = v109;
        break;
      case 4:
        LOBYTE(v135[2]) = *(_BYTE *)(v29 + 8);
        break;
      case 5:
      case 6:
        *(_QWORD *)&v135[2] = *(_QWORD *)(v29 + 8);
        break;
      case 7:
        *(_QWORD *)&v135[2] = *(_QWORD *)(v29 + 8);
        break;
      case 8:
        v88 = *(_QWORD *)(v29 + 8);
        v89 = operator new(0x28u);
        v90 = *(_QWORD *)(v88 + 8) - *(_QWORD *)v88;
        v91 = (__m128i *)v89;
        *(_QWORD *)(v89 + 16) = 0;
        *(_OWORD *)v89 = 0;
        if ( v90 )
          v92 = (char *)operator new(v90);
        else
          v92 = nullptr;
        v91[1].m128i_i64[0] = (__int64)&v92[v90];
        *v91 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v92, (__m128i)(unsigned __int64)v92);
        if ( (__int64)(*(_QWORD *)(v88 + 8) - *(_QWORD *)v88) > 0 )
        {
          v93 = *(_QWORD *)(v88 + 8) - *(_QWORD *)v88;
          v92 = (char *)memcpy(v92, *(const void **)v88, v93) + v93;
        }
        v94 = *(_QWORD *)(v88 + 24);
        v91->m128i_i64[1] = (__int64)v92;
        v91[1].m128i_i64[1] = v94;
        v91[2].m128i_i8[0] = *(_BYTE *)(v88 + 32);
LABEL_113:
        *(_QWORD *)&v135[2] = v91;
        break;
      default:
        break;
    }
  }
  else
  {
LABEL_82:
    v49 = _mm_loadu_si128(v5);
    v50 = v5->m128i_i8[0];
    v5->m128i_i64[1] = 0;
    v5->m128i_i8[0] = 0;
    v126 = v50;
    *(__m128i *)v135 = v49;
  }
  v31 = a1[1];
  v32 = *(_QWORD *)(v31 + 16);
  v33 = *(_QWORD *)(**(_QWORD **)&v135[2] + 8LL);
  if ( !v32 )
    goto LABEL_132;
  v34 = v5;
  v35 = *(const void **)(v32 + 32);
  v36 = *(const void **)v33;
  v37 = (_QWORD *)(v31 + 8);
  v38 = *(_QWORD *)(v33 + 8);
  v39 = *(_QWORD **)(v31 + 16);
  v129 = (_QWORD *)(v31 + 8);
  v40 = v34;
  for ( j = *(_QWORD *)(v32 + 40); ; j = v39[5] )
  {
    v42 = j;
    if ( v38 <= j )
      v42 = v38;
    if ( !v42 || (LODWORD(v43) = memcmp(v35, v36, v42), !(_DWORD)v43) )
    {
      v43 = j - v38;
      if ( (__int64)(j - v38) > 0x7FFFFFFF )
        goto LABEL_61;
      if ( v43 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v43 < 0 )
      break;
LABEL_61:
    v37 = v39;
    v39 = (_QWORD *)v39[2];
    if ( !v39 )
      goto LABEL_71;
LABEL_62:
    v35 = (const void *)v39[4];
  }
  v39 = (_QWORD *)v39[3];
  if ( v39 )
    goto LABEL_62;
LABEL_71:
  v44 = v40;
  v45 = v38;
  v5 = v44;
  if ( v129 == v37 )
    goto LABEL_132;
  v46 = v37[5];
  v47 = v46;
  if ( v45 <= v46 )
    v47 = v45;
  if ( v47 && (v48 = memcmp(v36, (const void *)v37[4], v47)) != 0 )
  {
LABEL_79:
    if ( v48 < 0 )
      goto LABEL_132;
  }
  else if ( (__int64)(v45 - v46) <= 0x7FFFFFFF )
  {
    if ( (__int64)(v45 - v46) >= (__int64)0xFFFFFFFF80000000LL )
    {
      v48 = v45 - v46;
      goto LABEL_79;
    }
LABEL_132:
    std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
  }
  v5 = (const __m128i *)((char *)v5 + 24);
  LOBYTE(v135[0]) = v126;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( *(const __m128i **)v124 != v5 )
  {
    v29 = v5[1].m128i_i64[0];
    if ( v29 )
      goto LABEL_53;
    goto LABEL_82;
  }
  return v137 - __readfsqword(0x28u);
}

