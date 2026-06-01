unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        int a15,
        int a16,
        int a17,
        char a18,
        __int64 a19,
        int a20,
        __int64 a21)
{
  __int64 v21; // r12
  __int64 v22; // rax
  const __m128i *v23; // rbp
  const __m128i *v24; // rbx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rbp
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r12
  _OWORD *v40; // rdi
  __m128i v41; // xmm0
  __int64 *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 *v45; // rax
  __int64 v46; // rax
  __int64 *v47; // rax
  __int64 v48; // rax
  __int64 *v49; // rax
  __int64 v50; // rax
  const __m128i **v51; // rcx
  const __m128i *v52; // r9
  _QWORD *v53; // rax
  char **v54; // r10
  __int64 v55; // r13
  _QWORD *v56; // r14
  size_t v57; // r15
  const void *v58; // rdi
  char *v59; // r12
  size_t v60; // rbp
  size_t v61; // rbx
  _QWORD *v62; // r15
  const __m128i *v63; // r13
  size_t v64; // rdx
  signed __int64 v65; // rax
  size_t v66; // rbx
  size_t v67; // rdx
  signed __int64 v68; // rax
  __int64 v70; // rax
  char *v71; // rbx
  __m128i *v72; // r12
  char *v73; // rax
  __m128i v74; // xmm0
  const void *v75; // r13
  size_t v76; // r15
  _QWORD *insert_hint_unique_pos; // rax
  _QWORD *v78; // rdx
  _QWORD *v79; // r8
  __int8 v80; // al
  __m128i v81; // xmm0
  __int64 v82; // rax
  char *v83; // rdi
  int v84; // ecx
  size_t v85; // rdx
  unsigned __int64 v86; // rsi
  unsigned int v87; // edx
  unsigned int v88; // ecx
  __int64 v89; // rdi
  const __m128i *v90; // [rsp+8h] [rbp-B0h]
  __int64 v91; // [rsp+10h] [rbp-A8h]
  _QWORD *v92; // [rsp+18h] [rbp-A0h]
  __int8 v93; // [rsp+27h] [rbp-91h]
  char **v94; // [rsp+28h] [rbp-90h]
  const __m128i *v95; // [rsp+28h] [rbp-90h]
  const __m128i *v96; // [rsp+30h] [rbp-88h]
  char **v97; // [rsp+30h] [rbp-88h]
  _QWORD *v98; // [rsp+38h] [rbp-80h]
  _OWORD *v100; // [rsp+58h] [rbp-60h] BYREF
  __m128i v101; // [rsp+60h] [rbp-58h]
  unsigned __int64 v102; // [rsp+78h] [rbp-40h]

  v21 = 24 * a3;
  v22 = a2 + 24 * a3;
  v102 = __readfsqword(0x28u);
  v23 = (const __m128i *)a2;
  *a1 = 0;
  a1[1] = 0;
  v90 = (const __m128i *)v22;
  if ( a2 == v22 )
    goto LABEL_53;
  v24 = (const __m128i *)a2;
  v25 = a2;
  v26 = (-85 * (unsigned __int8)((unsigned __int64)(v22 - a2 - 24) >> 3) + 1) & 3;
  if ( !v26 )
    goto LABEL_23;
  if ( v26 != 1 )
  {
    if ( v26 != 2 )
    {
      v27 = *(_QWORD *)(a2 + 16);
      if ( !v27 )
        v27 = a2;
      if ( *(_BYTE *)v27 != 2 )
        goto LABEL_26;
      v28 = *(_QWORD **)(v27 + 8);
      if ( v28[1] - *v28 != 32 || *(_BYTE *)*v28 != 3 )
        goto LABEL_26;
      v25 = a2 + 24;
    }
    v29 = *(_QWORD *)(v25 + 16);
    if ( !v29 )
      v29 = v25;
    if ( *(_BYTE *)v29 == 2 )
    {
      v30 = *(_QWORD **)(v29 + 8);
      if ( v30[1] - *v30 == 32 && *(_BYTE *)*v30 == 3 )
      {
        v25 += 24;
        goto LABEL_17;
      }
    }
LABEL_26:
    if ( v90 != (const __m128i *)v25 )
    {
      *(_BYTE *)a1 = 2;
      v35 = operator new(0x18u);
      *(_QWORD *)(v35 + 16) = 0;
      *(_OWORD *)v35 = 0;
      v38 = 0xAAAAAAAAAAAAAAABLL * (v21 >> 3);
      if ( v21 < 0 )
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
          24,
          a2,
          0xAAAAAAAAAAAAAAABLL,
          v34,
          v36,
          v37,
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
          a21);
      v39 = 0xAAAAAAAAAAAAAABLL * (v21 >> 3);
      if ( v38 )
        v40 = (_OWORD *)operator new(16 * v38);
      else
        v40 = nullptr;
      v100 = v40;
      *(_QWORD *)(v35 + 16) = &v40[v39];
      *(__m128i *)v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v40, (__m128i)(unsigned __int64)v40);
      v101 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v40, (__m128i)(unsigned __int64)&v100);
      do
      {
        if ( v24[1].m128i_i64[0] )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v40 = v100;
        }
        else
        {
          v41 = _mm_loadu_si128(v24);
          v24->m128i_i8[0] = 0;
          v24->m128i_i64[1] = 0;
          *v40 = v41;
        }
        ++v40;
        v24 = (const __m128i *)((char *)v24 + 24);
        v100 = v40;
      }
      while ( v90 != v24 );
      *(_QWORD *)(v35 + 8) = v40;
      a1[1] = v35;
      return v102 - __readfsqword(0x28u);
    }
    goto LABEL_53;
  }
LABEL_17:
  v31 = *(_QWORD *)(v25 + 16);
  if ( !v31 )
    v31 = v25;
  if ( *(_BYTE *)v31 != 2 )
    goto LABEL_26;
  v32 = *(_QWORD **)(v31 + 8);
  if ( v32[1] - *v32 != 32 || *(_BYTE *)*v32 != 3 )
    goto LABEL_26;
  v25 += 24;
  if ( v90 != (const __m128i *)v25 )
  {
    do
    {
LABEL_23:
      v33 = *(_QWORD *)(v25 + 16);
      if ( !v33 )
        v33 = v25;
      if ( *(_BYTE *)v33 != 2 )
        goto LABEL_26;
      v42 = *(__int64 **)(v33 + 8);
      a2 = *v42;
      if ( v42[1] - *v42 != 32 || *(_BYTE *)a2 != 3 )
        goto LABEL_26;
      v43 = *(_QWORD *)(v25 + 40);
      v44 = v25 + 24;
      v25 += 24;
      if ( !v43 )
        v43 = v44;
      if ( *(_BYTE *)v43 != 2 )
        goto LABEL_26;
      v45 = *(__int64 **)(v43 + 8);
      a2 = *v45;
      if ( v45[1] - *v45 != 32 || *(_BYTE *)a2 != 3 )
        goto LABEL_26;
      v46 = *(_QWORD *)(v25 + 40);
      v25 += 24;
      if ( !v46 )
        v46 = v25;
      if ( *(_BYTE *)v46 != 2 )
        goto LABEL_26;
      v47 = *(__int64 **)(v46 + 8);
      a2 = *v47;
      if ( v47[1] - *v47 != 32 || *(_BYTE *)a2 != 3 )
        goto LABEL_26;
      v48 = *(_QWORD *)(v44 + 64);
      v25 = v44 + 48;
      if ( !v48 )
        v48 = v44 + 48;
      if ( *(_BYTE *)v48 != 2 )
        goto LABEL_26;
      v49 = *(__int64 **)(v48 + 8);
      a2 = *v49;
      if ( v49[1] - *v49 != 32 || *(_BYTE *)a2 != 3 )
        goto LABEL_26;
      v25 = v44 + 72;
    }
    while ( v90 != (const __m128i *)(v44 + 72) );
  }
LABEL_53:
  *(_BYTE *)a1 = 1;
  v50 = operator new(0x30u);
  *(_DWORD *)(v50 + 8) = 0;
  *(_QWORD *)(v50 + 16) = 0;
  *(_QWORD *)(v50 + 24) = v50 + 8;
  *(_QWORD *)(v50 + 32) = v50 + 8;
  *(_QWORD *)(v50 + 40) = 0;
  a1[1] = v50;
  if ( v23 == v90 )
    return v102 - __readfsqword(0x28u);
  do
  {
    if ( v23[1].m128i_i64[0] )
    {
      v101.m128i_i8[0] = 0;
      v101.m128i_i64[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v93 = 0;
      v91 = 0;
      v51 = nullptr;
    }
    else
    {
      v80 = v23->m128i_i8[0];
      v81 = _mm_loadu_si128(v23);
      v23->m128i_i8[0] = 0;
      v93 = v80;
      v82 = v23->m128i_i64[1];
      v101 = v81;
      v91 = v82;
      v51 = (const __m128i **)v82;
      v23->m128i_i64[1] = 0;
    }
    v52 = *v51;
    v53 = (_QWORD *)a1[1];
    v54 = (char **)(*v51)->m128i_i64[1];
    v55 = v53[2];
    v56 = v53 + 1;
    v98 = v53;
    v92 = v53 + 1;
    v57 = (size_t)v54[1];
    if ( !v55 )
      goto LABEL_79;
    v58 = *(const void **)(v55 + 32);
    v96 = v23;
    v94 = (char **)(*v51)->m128i_i64[1];
    v59 = *v54;
    v60 = *(_QWORD *)(v55 + 40);
    v61 = (size_t)v54[1];
    v62 = (_QWORD *)v53[2];
    v63 = *v51;
    while ( 1 )
    {
      v64 = v60;
      if ( v61 <= v60 )
        v64 = v61;
      if ( !v64 || (LODWORD(v65) = memcmp(v58, v59, v64), !(_DWORD)v65) )
      {
        v65 = v60 - v61;
        if ( (__int64)(v60 - v61) > 0x7FFFFFFF )
          goto LABEL_58;
        if ( v65 < (__int64)0xFFFFFFFF80000000LL )
          break;
      }
      if ( (int)v65 < 0 )
        break;
LABEL_58:
      v56 = v62;
      v62 = (_QWORD *)v62[2];
      if ( !v62 )
        goto LABEL_68;
LABEL_59:
      v58 = (const void *)v62[4];
      v60 = v62[5];
    }
    v62 = (_QWORD *)v62[3];
    if ( v62 )
      goto LABEL_59;
LABEL_68:
    v54 = v94;
    v23 = v96;
    v52 = v63;
    v57 = v61;
    if ( v92 == v56 )
      goto LABEL_79;
    v66 = v56[5];
    v67 = v66;
    if ( v57 <= v66 )
      v67 = v57;
    if ( v67 && (LODWORD(v68) = memcmp(v59, (const void *)v56[4], v67), v54 = v94, v52 = v63, (_DWORD)v68) )
    {
LABEL_75:
      if ( (int)v68 < 0 )
        goto LABEL_79;
    }
    else
    {
      v68 = v57 - v66;
      if ( (__int64)(v57 - v66) <= 0x7FFFFFFF )
      {
        if ( v68 >= (__int64)0xFFFFFFFF80000000LL )
          goto LABEL_75;
LABEL_79:
        v97 = v54;
        v95 = v52;
        v70 = operator new(0x50u);
        v71 = (char *)(v70 + 48);
        v72 = (__m128i *)v70;
        *(_QWORD *)(v70 + 32) = v70 + 48;
        v73 = (char *)(v97 + 2);
        if ( *v97 == (char *)(v97 + 2) )
        {
          v84 = v57 + 1;
          if ( (unsigned int)(v57 + 1) >= 8 )
          {
            v72[3].m128i_i64[0] = (__int64)v97[2];
            *(_QWORD *)&v71[v84 - 8] = *(_QWORD *)&v73[v84 - 8];
            v86 = (unsigned __int64)&v72[3].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
            if ( ((v84 + (_DWORD)v71 - (_DWORD)v86) & 0xFFFFFFF8) >= 8 )
            {
              v87 = (v84 + (_DWORD)v71 - v86) & 0xFFFFFFF8;
              v88 = 0;
              do
              {
                v89 = v88;
                v88 += 8;
                *(_QWORD *)(v86 + v89) = *(_QWORD *)(v73 - &v71[-v86] + v89);
              }
              while ( v88 < v87 );
            }
          }
          else if ( (v84 & 4) != 0 )
          {
            v72[3].m128i_i32[0] = *((_DWORD *)v97 + 4);
            *(_DWORD *)&v71[v84 - 4] = *(_DWORD *)&v73[v84 - 4];
          }
          else if ( (_DWORD)v57 != -1 )
          {
            v72[3].m128i_i8[0] = *((_BYTE *)v97 + 16);
            if ( (v84 & 2) != 0 )
              *(_WORD *)&v71[v84 - 2] = *(_WORD *)&v73[v84 - 2];
          }
          v57 = (size_t)v97[1];
        }
        else
        {
          v72[2].m128i_i64[0] = (__int64)*v97;
          v72[3].m128i_i64[0] = (__int64)v97[2];
        }
        v72[2].m128i_i64[1] = v57;
        *((_BYTE *)v97 + 16) = 0;
        v97[1] = nullptr;
        v74 = _mm_loadu_si128(v95 + 1);
        *v97 = v73;
        v75 = (const void *)v72[2].m128i_i64[0];
        v95[1].m128i_i64[1] = 0;
        v76 = v72[2].m128i_u64[1];
        v95[1].m128i_i8[0] = 0;
        v72[4] = v74;
        insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                                   v98,
                                   v56,
                                   v75,
                                   v76);
        v79 = v78;
        if ( v78 )
        {
          if ( !insert_hint_unique_pos && v92 != v78 )
          {
            v85 = v78[5];
            if ( v76 <= v85 )
              v85 = v76;
            if ( v85 )
              memcmp(v75, (const void *)v79[4], v85);
          }
          std::_Rb_tree_insert_and_rebalance();
          ++v98[5];
        }
        else
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          v83 = (char *)v72[2].m128i_i64[0];
          if ( v71 != v83 )
            operator delete(v83, v72[3].m128i_i64[0] + 1);
          operator delete(v72, 0x50u);
        }
      }
    }
    v23 = (const __m128i *)((char *)v23 + 24);
    v101.m128i_i8[0] = v93;
    v101.m128i_i64[1] = v91;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v90 != v23 );
  return v102 - __readfsqword(0x28u);
}

