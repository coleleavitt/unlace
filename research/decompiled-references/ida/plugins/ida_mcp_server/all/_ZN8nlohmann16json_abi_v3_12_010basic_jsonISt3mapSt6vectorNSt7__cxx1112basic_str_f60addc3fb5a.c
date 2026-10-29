unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        _QWORD *a1,
        const __m128i *a2,
        __int64 a3)
{
  __int64 v3; // r12
  const __m128i *v4; // rax
  const __m128i *v5; // rbp
  const __m128i *v6; // rbx
  const __m128i *v7; // rdx
  int v8; // eax
  const __m128i *v9; // rax
  _QWORD *v10; // rax
  const __m128i *v11; // rax
  _QWORD *v12; // rax
  const __m128i *v13; // rax
  _QWORD *v14; // rax
  const __m128i *v15; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  _OWORD *v19; // rdi
  __m128i v20; // xmm0
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rcx
  _QWORD *v24; // rax
  const __m128i *v25; // rax
  _QWORD *v26; // rax
  __int64 *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v32; // r8
  _QWORD *v33; // r13
  __int64 v34; // r10
  const __m128i *v35; // rax
  _QWORD *v36; // r15
  const void *v37; // r12
  const void *v38; // rdi
  size_t v39; // rbp
  size_t v40; // rbx
  const __m128i *v41; // r14
  size_t v42; // rdx
  signed __int64 v43; // rax
  const __m128i *v44; // rax
  size_t v45; // r14
  size_t v46; // rbx
  size_t v47; // rdx
  int v48; // eax
  __m128i v49; // xmm0
  __int8 v50; // al
  __int64 v51; // r14
  __int64 v52; // rax
  unsigned __int64 v53; // r12
  __m128i *v54; // rbx
  char *v55; // rcx
  size_t v56; // r12
  __int64 v57; // rax
  __int64 v58; // r12
  __int64 v59; // rax
  int *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  _BYTE *v68; // r12
  unsigned __int64 v69; // r14
  _QWORD *v70; // rax
  _BYTE *v71; // rdi
  __int64 *v72; // rbx
  size_t v73; // rdx
  __int64 v74; // rax
  __int64 *v75; // r14
  __int64 v76; // rax
  unsigned __int64 v77; // rbx
  __m128i *v78; // r12
  __int64 v79; // rdi
  __int64 v80; // rbx
  __int64 v81; // r14
  __int64 v82; // rax
  __int64 v83; // rax
  int v84[2]; // [rsp+0h] [rbp-B8h]
  __int8 v85; // [rsp+Fh] [rbp-A9h]
  _QWORD *v86; // [rsp+20h] [rbp-98h]
  __int64 v88; // [rsp+48h] [rbp-70h] BYREF
  int v89[4]; // [rsp+50h] [rbp-68h] BYREF
  __m128i i; // [rsp+60h] [rbp-58h]
  unsigned __int64 v91; // [rsp+78h] [rbp-40h]

  v3 = 24 * a3;
  v4 = (const __m128i *)((char *)a2 + 24 * a3);
  v91 = __readfsqword(0x28u);
  v5 = a2;
  *a1 = 0;
  a1[1] = 0;
  *(_QWORD *)v84 = v4;
  if ( a2 == v4 )
    goto LABEL_53;
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
          if ( *(const __m128i **)v84 == v7 )
            goto LABEL_53;
          while ( 1 )
          {
LABEL_23:
            v15 = (const __m128i *)v7[1].m128i_i64[0];
            if ( !v15 )
              v15 = v7;
            if ( v15->m128i_i8[0] != 2 )
              break;
            v21 = (_QWORD *)v15->m128i_i64[1];
            if ( v21[1] - *v21 != 32 || *(_BYTE *)*v21 != 3 )
              break;
            v22 = v7[2].m128i_i64[1];
            v23 = &v7[1].m128i_i64[1];
            v7 = (const __m128i *)((char *)v7 + 24);
            if ( !v22 )
              v22 = (__int64)v23;
            if ( *(_BYTE *)v22 != 2 )
              break;
            v24 = *(_QWORD **)(v22 + 8);
            if ( v24[1] - *v24 != 32 || *(_BYTE *)*v24 != 3 )
              break;
            v25 = (const __m128i *)v7[2].m128i_i64[1];
            v7 = (const __m128i *)((char *)v7 + 24);
            if ( !v25 )
              v25 = v7;
            if ( v25->m128i_i8[0] != 2 )
              break;
            v26 = (_QWORD *)v25->m128i_i64[1];
            if ( v26[1] - *v26 != 32 || *(_BYTE *)*v26 != 3 )
              break;
            v27 = (__int64 *)v23[8];
            v7 = (const __m128i *)(v23 + 6);
            if ( !v27 )
              v27 = v23 + 6;
            if ( *(_BYTE *)v27 != 2 )
              break;
            v28 = (_QWORD *)v27[1];
            if ( v28[1] - *v28 != 32 || *(_BYTE *)*v28 != 3 )
              break;
            v7 = (const __m128i *)(v23 + 9);
            if ( *(__int64 **)v84 == v23 + 9 )
              goto LABEL_53;
          }
        }
      }
    }
  }
LABEL_26:
  if ( *(const __m128i **)v84 != v7 )
  {
    *(_BYTE *)a1 = 2;
    v16 = operator new(0x18u);
    *(_QWORD *)(v16 + 16) = 0;
    *(_OWORD *)v16 = 0;
    v17 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 3);
    if ( v3 < 0 )
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    v18 = 0xAAAAAAAAAAAAAABLL * (v3 >> 3);
    if ( v17 )
      v19 = (_OWORD *)operator new(16 * v17);
    else
      v19 = nullptr;
    *(_QWORD *)v89 = v19;
    *(_QWORD *)(v16 + 16) = &v19[v18];
    *(__m128i *)v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
    i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v89);
    do
    {
      if ( v6[1].m128i_i64[0] )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v19 = *(_OWORD **)v89;
      }
      else
      {
        v20 = _mm_loadu_si128(v6);
        v6->m128i_i8[0] = 0;
        v6->m128i_i64[1] = 0;
        *v19 = v20;
      }
      ++v19;
      v6 = (const __m128i *)((char *)v6 + 24);
      *(_QWORD *)v89 = v19;
    }
    while ( *(const __m128i **)v84 != v6 );
    *(_QWORD *)(v16 + 8) = v19;
    a1[1] = v16;
    return v91 - __readfsqword(0x28u);
  }
LABEL_53:
  *(_BYTE *)a1 = 1;
  v29 = operator new(0x30u);
  *(_DWORD *)(v29 + 8) = 0;
  *(_QWORD *)(v29 + 16) = 0;
  *(_QWORD *)(v29 + 24) = v29 + 8;
  *(_QWORD *)(v29 + 32) = v29 + 8;
  *(_QWORD *)(v29 + 40) = 0;
  a1[1] = v29;
  if ( a2 == *(const __m128i **)v84 )
    return v91 - __readfsqword(0x28u);
  v30 = a2[1].m128i_i64[0];
  if ( v30 )
  {
LABEL_55:
    *(_QWORD *)&v89[2] = 0;
    v85 = *(_BYTE *)v30;
    switch ( *(_BYTE *)v30 )
    {
      case 1:
        v58 = *(_QWORD *)(v30 + 8);
        v59 = operator new(0x30u);
        *(_QWORD *)(v59 + 16) = 0;
        v60 = *(int **)(v58 + 16);
        v54 = (__m128i *)v59;
        *(_DWORD *)(v59 + 8) = 0;
        *(_QWORD *)(v59 + 24) = v59 + 8;
        *(_QWORD *)(v59 + 32) = v59 + 8;
        *(_QWORD *)(v59 + 40) = 0;
        if ( !v60 )
          goto LABEL_88;
        v61 = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                v60,
                v59 + 8);
        v62 = v61;
        do
        {
          v63 = v61;
          v61 = *(_QWORD *)(v61 + 16);
        }
        while ( v61 );
        v54[1].m128i_i64[1] = v63;
        v64 = v62;
        do
        {
          v65 = v64;
          v64 = *(_QWORD *)(v64 + 24);
        }
        while ( v64 );
        v66 = *(_QWORD *)(v58 + 40);
        v54[2].m128i_i64[0] = v65;
        v54[1].m128i_i64[0] = v62;
        v54[2].m128i_i64[1] = v66;
        *(_QWORD *)&v89[2] = v54;
        break;
      case 2:
        v75 = *(__int64 **)(v30 + 8);
        v76 = operator new(0x18u);
        v77 = v75[1] - *v75;
        v78 = (__m128i *)v76;
        *(_QWORD *)(v76 + 16) = 0;
        *(_OWORD *)v76 = 0;
        if ( v77 )
          v79 = operator new(v77);
        else
          v79 = 0;
        v78[1].m128i_i64[0] = v79 + v77;
        *v78 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v79, (__m128i)(unsigned __int64)v79);
        v80 = v75[1];
        v81 = *v75;
        v88 = v79;
        for ( i = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v79, (__m128i)(unsigned __int64)&v88); v80 != v81; v88 += 16 )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v81 += 16;
          v79 = v88 + 16;
        }
        v78->m128i_i64[1] = v79;
        *(_QWORD *)&v89[2] = v78;
        break;
      case 3:
        v67 = *(_QWORD *)(v30 + 8);
        v68 = *(_BYTE **)v67;
        v69 = *(_QWORD *)(v67 + 8);
        v70 = (_QWORD *)operator new(0x20u);
        v71 = v70 + 2;
        i.m128i_i64[0] = v69;
        v72 = v70;
        *v70 = v70 + 2;
        if ( v69 <= 0xF )
        {
          v73 = v69 + 1;
          if ( v69 )
          {
LABEL_98:
            memcpy(v71, v68, v73);
            v74 = i.m128i_i64[0];
            goto LABEL_99;
          }
          goto LABEL_113;
        }
        v82 = std::string::_M_create();
        *v72 = v82;
        v71 = (_BYTE *)v82;
        v83 = i.m128i_i64[0];
        v72[2] = i.m128i_i64[0];
        v73 = v83 + 1;
        if ( !v83 )
        {
LABEL_113:
          *v71 = *v68;
          v74 = i.m128i_i64[0];
          goto LABEL_99;
        }
        v74 = -1;
        if ( v73 )
          goto LABEL_98;
LABEL_99:
        v72[1] = v74;
        *(_QWORD *)&v89[2] = v72;
        break;
      case 4:
        LOBYTE(v89[2]) = *(_BYTE *)(v30 + 8);
        break;
      case 5:
      case 6:
        *(_QWORD *)&v89[2] = *(_QWORD *)(v30 + 8);
        break;
      case 7:
        *(_QWORD *)&v89[2] = *(_QWORD *)(v30 + 8);
        break;
      case 8:
        v51 = *(_QWORD *)(v30 + 8);
        v52 = operator new(0x28u);
        v53 = *(_QWORD *)(v51 + 8) - *(_QWORD *)v51;
        v54 = (__m128i *)v52;
        *(_QWORD *)(v52 + 16) = 0;
        *(_OWORD *)v52 = 0;
        if ( v53 )
          v55 = (char *)operator new(v53);
        else
          v55 = nullptr;
        v54[1].m128i_i64[0] = (__int64)&v55[v53];
        *v54 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v55, (__m128i)(unsigned __int64)v55);
        if ( (__int64)(*(_QWORD *)(v51 + 8) - *(_QWORD *)v51) > 0 )
        {
          v56 = *(_QWORD *)(v51 + 8) - *(_QWORD *)v51;
          v55 = (char *)memcpy(v55, *(const void **)v51, v56) + v56;
        }
        v57 = *(_QWORD *)(v51 + 24);
        v54->m128i_i64[1] = (__int64)v55;
        v54[1].m128i_i64[1] = v57;
        v54[2].m128i_i8[0] = *(_BYTE *)(v51 + 32);
LABEL_88:
        *(_QWORD *)&v89[2] = v54;
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
    v85 = v50;
    *(__m128i *)v89 = v49;
  }
  v32 = a1[1];
  v33 = *(_QWORD **)(v32 + 16);
  v34 = *(_QWORD *)(**(_QWORD **)&v89[2] + 8LL);
  if ( !v33 )
    goto LABEL_107;
  v35 = v5;
  v36 = (_QWORD *)(v32 + 8);
  v37 = *(const void **)v34;
  v38 = (const void *)v33[4];
  v39 = *(_QWORD *)(v34 + 8);
  v86 = (_QWORD *)(v32 + 8);
  v40 = v33[5];
  v41 = v35;
  while ( 1 )
  {
    v42 = v39;
    if ( v40 <= v39 )
      v42 = v40;
    if ( !v42 || (LODWORD(v43) = memcmp(v38, v37, v42), !(_DWORD)v43) )
    {
      v43 = v40 - v39;
      if ( (__int64)(v40 - v39) > 0x7FFFFFFF )
        goto LABEL_61;
      if ( v43 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v43 < 0 )
      break;
LABEL_61:
    v36 = v33;
    v33 = (_QWORD *)v33[2];
    if ( !v33 )
      goto LABEL_71;
LABEL_62:
    v38 = (const void *)v33[4];
    v40 = v33[5];
  }
  v33 = (_QWORD *)v33[3];
  if ( v33 )
    goto LABEL_62;
LABEL_71:
  v44 = v41;
  v45 = v39;
  v5 = v44;
  if ( v86 == v36 )
    goto LABEL_107;
  v46 = v36[5];
  v47 = v46;
  if ( v45 <= v46 )
    v47 = v45;
  if ( v47 && (v48 = memcmp(v37, (const void *)v36[4], v47)) != 0 )
  {
LABEL_79:
    if ( v48 < 0 )
      goto LABEL_107;
  }
  else if ( (__int64)(v45 - v46) <= 0x7FFFFFFF )
  {
    if ( (__int64)(v45 - v46) >= (__int64)0xFFFFFFFF80000000LL )
    {
      v48 = v45 - v46;
      goto LABEL_79;
    }
LABEL_107:
    std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
  }
  v5 = (const __m128i *)((char *)v5 + 24);
  LOBYTE(v89[0]) = v85;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( *(const __m128i **)v84 != v5 )
  {
    v30 = v5[1].m128i_i64[0];
    if ( v30 )
      goto LABEL_55;
    goto LABEL_82;
  }
  return v91 - __readfsqword(0x28u);
}

