unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        _QWORD *a1,
        const __m128i *a2)
{
  const __m128i *v2; // rdx
  const __m128i *v3; // r13
  const __m128i *v4; // rbp
  const __m128i *v5; // rax
  __m128i *v6; // rax
  __m128i *v7; // r15
  __int64 v8; // rbx
  unsigned __int8 *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int8 *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 v22; // r10
  const void *v23; // rdi
  _QWORD *v24; // r14
  size_t v25; // rbx
  const void *v26; // r12
  size_t v27; // rbp
  _QWORD *i; // r13
  size_t v29; // rdx
  signed __int64 v30; // rax
  size_t v31; // r13
  size_t v32; // rbx
  size_t v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  _BYTE *v36; // r12
  unsigned __int64 v37; // r14
  _QWORD *v38; // rax
  _BYTE *v39; // rdi
  __int64 *v40; // rbx
  size_t v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rax
  unsigned __int64 v45; // r12
  __m128i *v46; // rbx
  char *v47; // rcx
  size_t v48; // r12
  __int64 v49; // rax
  __int64 *v50; // r14
  __int64 v51; // rax
  unsigned __int64 v52; // rbx
  __m128i *v53; // r12
  __int64 v54; // rdi
  __int64 v55; // rbx
  __int64 v56; // r14
  __int64 v57; // r12
  __int64 v58; // rax
  int *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  const void **v67; // r8
  __m128i *v68; // r14
  unsigned __int64 v69; // r15
  __int64 v70; // rax
  char *v71; // rdi
  __int64 v72; // r15
  char *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int64 v76; // r15
  _QWORD *v77; // rax
  _BYTE *v78; // rdi
  __int64 *v79; // r14
  size_t v80; // rsi
  __int64 v81; // rax
  __int64 *v82; // r15
  __int64 v83; // rax
  unsigned __int64 v84; // r14
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // r14
  __int64 v88; // r15
  __int64 v89; // rax
  __int64 v90; // r15
  __int64 v91; // rax
  int *v92; // rdi
  _QWORD *v93; // r14
  __int64 v94; // rax
  __int64 v95; // rsi
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  int v105[2]; // [rsp+0h] [rbp-C8h]
  char v106; // [rsp+0h] [rbp-C8h]
  const void **src; // [rsp+8h] [rbp-C0h]
  const void **srcc; // [rsp+8h] [rbp-C0h]
  _BYTE *srca; // [rsp+8h] [rbp-C0h]
  __m128i *srcb; // [rsp+8h] [rbp-C0h]
  _QWORD *v111; // [rsp+10h] [rbp-B8h]
  const __m128i *v112; // [rsp+18h] [rbp-B0h]
  __int64 v114; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v115; // [rsp+48h] [rbp-80h]
  __int64 v116; // [rsp+50h] [rbp-78h] BYREF
  __int64 v117; // [rsp+58h] [rbp-70h] BYREF
  int v118[4]; // [rsp+60h] [rbp-68h]
  __m128i j; // [rsp+70h] [rbp-58h]
  unsigned __int64 v120; // [rsp+88h] [rbp-40h]

  v2 = a2;
  v3 = a2;
  v120 = __readfsqword(0x28u);
  v4 = a2;
  *a1 = 0;
  v5 = (const __m128i *)a2[1].m128i_i64[0];
  a1[1] = 0;
  if ( !v5 )
    v5 = a2;
  if ( v5->m128i_i8[0] == 2 )
  {
    v11 = (_QWORD *)v5->m128i_i64[1];
    if ( v11[1] - *v11 == 32 && *(_BYTE *)*v11 == 3 )
    {
      v12 = (__int8 *)a2[2].m128i_i64[1];
      v2 = (const __m128i *)((char *)a2 + 24);
      if ( !v12 )
        v12 = &a2[1].m128i_i8[8];
      if ( *v12 == 2 )
      {
        v13 = *((_QWORD **)v12 + 1);
        if ( v13[1] - *v13 == 32 && *(_BYTE *)*v13 == 3 )
          goto LABEL_15;
      }
    }
  }
  if ( &a2[3] == v2 )
  {
LABEL_15:
    *(_BYTE *)a1 = 1;
    v14 = operator new(0x30u);
    *(_DWORD *)(v14 + 8) = 0;
    *(_QWORD *)(v14 + 16) = 0;
    *(_QWORD *)(v14 + 24) = v14 + 8;
    *(_QWORD *)(v14 + 32) = v14 + 8;
    *(_QWORD *)(v14 + 40) = 0;
    a1[1] = v14;
    while ( 1 )
    {
      v15 = v4[1].m128i_i64[0];
      if ( v15 )
        break;
      v18 = v4->m128i_u8[0];
      v19 = _mm_loadu_si128(v4);
      v4->m128i_i8[0] = 0;
      v4->m128i_i64[1] = 0;
      v106 = v18;
      *(__m128i *)v118 = v19;
LABEL_23:
      v20 = a1[1];
      v21 = *(_QWORD *)(v20 + 16);
      v22 = *(_QWORD *)(**(_QWORD **)&v118[2] + 8LL);
      if ( !v21 )
        goto LABEL_46;
      v23 = *(const void **)(v21 + 32);
      v112 = v4;
      v24 = (_QWORD *)(v20 + 8);
      v25 = *(_QWORD *)(v21 + 40);
      v26 = *(const void **)v22;
      v27 = *(_QWORD *)(v22 + 8);
      v111 = (_QWORD *)(v20 + 8);
      for ( i = *(_QWORD **)(v20 + 16); ; v25 = i[5] )
      {
        v29 = v27;
        if ( v25 <= v27 )
          v29 = v25;
        if ( !v29 || (LODWORD(v30) = memcmp(v23, v26, v29), !(_DWORD)v30) )
        {
          v30 = v25 - v27;
          if ( (__int64)(v25 - v27) > 0x7FFFFFFF )
            goto LABEL_25;
          if ( v30 < (__int64)0xFFFFFFFF80000000LL )
            break;
        }
        if ( (int)v30 < 0 )
          break;
LABEL_25:
        v24 = i;
        i = (_QWORD *)i[2];
        if ( !i )
          goto LABEL_35;
LABEL_26:
        v23 = (const void *)i[4];
      }
      i = (_QWORD *)i[3];
      if ( i )
        goto LABEL_26;
LABEL_35:
      v31 = v27;
      v4 = v112;
      if ( v111 == v24 )
        goto LABEL_46;
      v32 = v24[5];
      v33 = v32;
      if ( v31 <= v32 )
        v33 = v31;
      if ( v33 && (v34 = memcmp(v26, (const void *)v24[4], v33)) != 0 )
      {
LABEL_43:
        if ( v34 < 0 )
          goto LABEL_46;
      }
      else if ( (__int64)(v31 - v32) <= 0x7FFFFFFF )
      {
        if ( (__int64)(v31 - v32) >= (__int64)0xFFFFFFFF80000000LL )
        {
          v34 = v31 - v32;
          goto LABEL_43;
        }
LABEL_46:
        std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      }
      v4 = (const __m128i *)((char *)v4 + 24);
      LOBYTE(v118[0]) = v106;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v4 == &a2[3] )
        return v120 - __readfsqword(0x28u);
    }
    *(_QWORD *)&v118[2] = 0;
    v106 = *(_BYTE *)v15;
    switch ( *(_BYTE *)v15 )
    {
      case 1:
        v57 = *(_QWORD *)(v15 + 8);
        v58 = operator new(0x30u);
        *(_QWORD *)(v58 + 16) = 0;
        v59 = *(int **)(v57 + 16);
        v46 = (__m128i *)v58;
        *(_DWORD *)(v58 + 8) = 0;
        *(_QWORD *)(v58 + 24) = v58 + 8;
        *(_QWORD *)(v58 + 32) = v58 + 8;
        *(_QWORD *)(v58 + 40) = 0;
        if ( !v59 )
          goto LABEL_59;
        v60 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                v59,
                v58 + 8);
        v61 = v60;
        do
        {
          v62 = v60;
          v60 = *(_QWORD *)(v60 + 16);
        }
        while ( v60 );
        v46[1].m128i_i64[1] = v62;
        v63 = v61;
        do
        {
          v64 = v63;
          v63 = *(_QWORD *)(v63 + 24);
        }
        while ( v63 );
        v65 = *(_QWORD *)(v57 + 40);
        v46[2].m128i_i64[0] = v64;
        v46[1].m128i_i64[0] = v61;
        v46[2].m128i_i64[1] = v65;
        *(_QWORD *)&v118[2] = v46;
        goto LABEL_23;
      case 2:
        v50 = *(__int64 **)(v15 + 8);
        v51 = operator new(0x18u);
        v52 = v50[1] - *v50;
        v53 = (__m128i *)v51;
        *(_QWORD *)(v51 + 16) = 0;
        *(_OWORD *)v51 = 0;
        if ( v52 )
          v54 = operator new(v52);
        else
          v54 = 0;
        v53[1].m128i_i64[0] = v54 + v52;
        *v53 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v54, (__m128i)(unsigned __int64)v54);
        v55 = v50[1];
        v56 = *v50;
        v114 = v54;
        for ( j = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v54, (__m128i)(unsigned __int64)&v114);
              v55 != v56;
              v114 += 16 )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v56 += 16;
          v54 = v114 + 16;
        }
        v53->m128i_i64[1] = v54;
        *(_QWORD *)&v118[2] = v53;
        goto LABEL_23;
      case 3:
        v35 = *(_QWORD *)(v15 + 8);
        v36 = *(_BYTE **)v35;
        v37 = *(_QWORD *)(v35 + 8);
        v38 = (_QWORD *)operator new(0x20u);
        v39 = v38 + 2;
        v115 = v37;
        v40 = v38;
        *v38 = v38 + 2;
        if ( v37 > 0xF )
        {
          v103 = std::string::_M_create();
          *v40 = v103;
          v39 = (_BYTE *)v103;
          v104 = v115;
          v40[2] = v115;
          v41 = v104 + 1;
          if ( v104 )
          {
            v42 = -1;
            if ( !v41 )
              goto LABEL_53;
            goto LABEL_52;
          }
        }
        else
        {
          v41 = v37 + 1;
          if ( v37 )
          {
LABEL_52:
            memcpy(v39, v36, v41);
            v42 = v115;
LABEL_53:
            v40[1] = v42;
            *(_QWORD *)&v118[2] = v40;
            goto LABEL_23;
          }
        }
        *v39 = *v36;
        v42 = v115;
        goto LABEL_53;
      case 4:
        LOBYTE(v118[2]) = *(_BYTE *)(v15 + 8);
        goto LABEL_23;
      case 5:
      case 6:
        *(_QWORD *)&v118[2] = *(_QWORD *)(v15 + 8);
        goto LABEL_23;
      case 7:
        *(_QWORD *)&v118[2] = *(_QWORD *)(v15 + 8);
        goto LABEL_23;
      case 8:
        v43 = *(_QWORD *)(v15 + 8);
        v44 = operator new(0x28u);
        v45 = *(_QWORD *)(v43 + 8) - *(_QWORD *)v43;
        v46 = (__m128i *)v44;
        *(_QWORD *)(v44 + 16) = 0;
        *(_OWORD *)v44 = 0;
        if ( v45 )
          v47 = (char *)operator new(v45);
        else
          v47 = nullptr;
        v46[1].m128i_i64[0] = (__int64)&v47[v45];
        *v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v47, (__m128i)(unsigned __int64)v47);
        if ( (__int64)(*(_QWORD *)(v43 + 8) - *(_QWORD *)v43) > 0 )
        {
          v48 = *(_QWORD *)(v43 + 8) - *(_QWORD *)v43;
          v47 = (char *)memcpy(v47, *(const void **)v43, v48) + v48;
        }
        v49 = *(_QWORD *)(v43 + 24);
        v46->m128i_i64[1] = (__int64)v47;
        v46[1].m128i_i64[1] = v49;
        v46[2].m128i_i8[0] = *(_BYTE *)(v43 + 32);
LABEL_59:
        *(_QWORD *)&v118[2] = v46;
        goto LABEL_23;
      default:
        goto LABEL_23;
    }
  }
  *(_BYTE *)a1 = 2;
  v6 = (__m128i *)operator new(0x18u);
  v6->m128i_i64[0] = 0;
  v7 = v6;
  v6[1].m128i_i64[0] = 0;
  *(_QWORD *)v105 = v6;
  v8 = operator new(0x20u);
  v7[1].m128i_i64[0] = v8 + 32;
  *v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v8);
  v116 = v8;
  *(__m128i *)v118 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)&v116);
  while ( 2 )
  {
    v9 = (unsigned __int8 *)v3[1].m128i_i64[0];
    if ( !v9 )
    {
      v16 = _mm_loadu_si128(v3);
      v3->m128i_i8[0] = 0;
      v3->m128i_i64[1] = 0;
      *(__m128i *)v8 = v16;
      goto LABEL_19;
    }
    v10 = *v9;
    *(_QWORD *)(v8 + 8) = 0;
    *(_BYTE *)v8 = v10;
    switch ( v10 )
    {
      case 1LL:
        v90 = *((_QWORD *)v9 + 1);
        v91 = operator new(0x30u);
        *(_QWORD *)(v91 + 16) = 0;
        v92 = *(int **)(v90 + 16);
        v93 = (_QWORD *)v91;
        *(_DWORD *)(v91 + 8) = 0;
        *(_QWORD *)(v91 + 24) = v91 + 8;
        *(_QWORD *)(v91 + 32) = v91 + 8;
        *(_QWORD *)(v91 + 40) = 0;
        if ( v92 )
        {
          v94 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                  v92,
                  v91 + 8);
          v95 = v94;
          do
          {
            v96 = v94;
            v94 = *(_QWORD *)(v94 + 16);
          }
          while ( v94 );
          v93[3] = v96;
          v97 = v95;
          do
          {
            v98 = v97;
            v97 = *(_QWORD *)(v97 + 24);
          }
          while ( v97 );
          v99 = *(_QWORD *)(v90 + 40);
          v93[4] = v98;
          v93[2] = v95;
          v93[5] = v99;
          v100 = v116;
        }
        else
        {
          v100 = v8;
        }
        *(_QWORD *)(v8 + 8) = v93;
        v8 = v100;
        goto LABEL_19;
      case 2LL:
        v82 = *((__int64 **)v9 + 1);
        v83 = operator new(0x18u);
        v84 = v82[1] - *v82;
        srcb = (__m128i *)v83;
        *(_QWORD *)(v83 + 16) = 0;
        *(_OWORD *)v83 = 0;
        if ( v84 )
          v85 = operator new(v84);
        else
          v85 = 0;
        *srcb = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v85, (__m128i)(unsigned __int64)v85);
        srcb[1].m128i_i64[0] = v85 + v84;
        v86 = *v82;
        v87 = v82[1];
        v117 = v85;
        j = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v85, (__m128i)(unsigned __int64)&v117);
        if ( v87 == v86 )
        {
          v89 = v8;
        }
        else
        {
          v88 = v86;
          do
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
            v88 += 16;
            v85 = v117 + 16;
            v117 += 16;
          }
          while ( v87 != v88 );
          v89 = v116;
        }
        srcb->m128i_i64[1] = v85;
        *(_QWORD *)(v8 + 8) = srcb;
        v8 = v89;
        goto LABEL_19;
      case 3LL:
        v75 = *((_QWORD *)v9 + 1);
        v76 = *(_QWORD *)(v75 + 8);
        srca = *(_BYTE **)v75;
        v77 = (_QWORD *)operator new(0x20u);
        v78 = v77 + 2;
        j.m128i_i64[0] = v76;
        v79 = v77;
        *v77 = v77 + 2;
        if ( v76 <= 0xF )
        {
          v80 = v76 + 1;
          if ( v76 )
            goto LABEL_79;
LABEL_108:
          *v78 = *srca;
          v81 = j.m128i_i64[0];
          goto LABEL_80;
        }
        v101 = std::string::_M_create();
        *v79 = v101;
        v78 = (_BYTE *)v101;
        v102 = j.m128i_i64[0];
        v79[2] = j.m128i_i64[0];
        v80 = v102 + 1;
        if ( !v102 )
          goto LABEL_108;
        v81 = -1;
        if ( v80 )
        {
LABEL_79:
          memcpy(v78, srca, v80);
          v81 = j.m128i_i64[0];
        }
LABEL_80:
        v79[1] = v81;
        *(_QWORD *)(v8 + 8) = v79;
        v8 = v116;
LABEL_19:
        v8 += 16;
        v3 = (const __m128i *)((char *)v3 + 24);
        v116 = v8;
        if ( &v4[3] != v3 )
          continue;
        *(_QWORD *)(*(_QWORD *)v105 + 8LL) = v8;
        a1[1] = *(_QWORD *)v105;
        return v120 - __readfsqword(0x28u);
      case 4LL:
        *(_BYTE *)(v8 + 8) = v9[8];
        goto LABEL_19;
      case 5LL:
      case 6LL:
        *(_QWORD *)(v8 + 8) = *((_QWORD *)v9 + 1);
        goto LABEL_19;
      case 7LL:
        *(_QWORD *)(v8 + 8) = *((_QWORD *)v9 + 1);
        goto LABEL_19;
      case 8LL:
        src = *((const void ***)v9 + 1);
        v66 = operator new(0x28u);
        v67 = src;
        v68 = (__m128i *)v66;
        v69 = (_BYTE *)src[1] - (_BYTE *)*src;
        *(_QWORD *)(v66 + 16) = 0;
        *(_OWORD *)v66 = 0;
        if ( v69 )
        {
          v70 = operator new(v69);
          v67 = src;
          v71 = (char *)v70;
        }
        else
        {
          v71 = nullptr;
        }
        v68[1].m128i_i64[0] = (__int64)&v71[v69];
        *v68 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v71, (__m128i)(unsigned __int64)v71);
        v72 = (_BYTE *)v67[1] - (_BYTE *)*v67;
        if ( v72 > 0 )
        {
          srcc = v67;
          v73 = (char *)memcpy(v71, *v67, (_BYTE *)v67[1] - (_BYTE *)*v67);
          v67 = srcc;
          v71 = &v73[v72];
        }
        v74 = (__int64)v67[3];
        v68->m128i_i64[1] = (__int64)v71;
        v68[1].m128i_i64[1] = v74;
        v68[2].m128i_i8[0] = *((_BYTE *)v67 + 32);
        *(_QWORD *)(v8 + 8) = v68;
        goto LABEL_19;
      default:
        goto LABEL_19;
    }
  }
}

