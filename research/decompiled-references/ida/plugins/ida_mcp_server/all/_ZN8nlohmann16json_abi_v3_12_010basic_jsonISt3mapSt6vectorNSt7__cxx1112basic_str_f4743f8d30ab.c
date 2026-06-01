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
        __int64 a13,
        int a14,
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
  __int64 v51; // r8
  __int64 v52; // r14
  __int64 v53; // r10
  const __m128i *v54; // rax
  const void *v55; // rdi
  _QWORD *v56; // rbp
  _QWORD *v57; // r13
  size_t v58; // r14
  size_t v59; // rbx
  const void *v60; // r12
  const __m128i *v61; // r15
  size_t v62; // rdx
  signed __int64 v63; // rax
  size_t v64; // r15
  size_t v65; // rbx
  size_t v66; // rdx
  int v67; // eax
  __int8 v69; // al
  __m128i v70; // xmm0
  __int64 v71; // rax
  const __m128i *v72; // [rsp+8h] [rbp-B0h]
  __int64 v73; // [rsp+10h] [rbp-A8h]
  __int8 v74; // [rsp+1Fh] [rbp-99h]
  _QWORD *v75; // [rsp+30h] [rbp-88h]
  _OWORD *v77; // [rsp+58h] [rbp-60h] BYREF
  __m128i v78; // [rsp+60h] [rbp-58h]
  unsigned __int64 v79; // [rsp+78h] [rbp-40h]

  v21 = 24 * a3;
  v22 = a2 + 24 * a3;
  v79 = __readfsqword(0x28u);
  v23 = (const __m128i *)a2;
  *a1 = 0;
  a1[1] = 0;
  v72 = (const __m128i *)v22;
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
    if ( v72 != (const __m128i *)v25 )
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
      v77 = v40;
      *(_QWORD *)(v35 + 16) = &v40[v39];
      *(__m128i *)v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v40, (__m128i)(unsigned __int64)v40);
      v78 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v40, (__m128i)(unsigned __int64)&v77);
      do
      {
        if ( v24[1].m128i_i64[0] )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v40 = v77;
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
        v77 = v40;
      }
      while ( v72 != v24 );
      *(_QWORD *)(v35 + 8) = v40;
      a1[1] = v35;
      return v79 - __readfsqword(0x28u);
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
  if ( v72 != (const __m128i *)v25 )
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
    while ( v72 != (const __m128i *)(v44 + 72) );
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
  if ( v23 == v72 )
    return v79 - __readfsqword(0x28u);
  do
  {
    if ( v23[1].m128i_i64[0] )
    {
      v78.m128i_i8[0] = 0;
      v78.m128i_i64[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v74 = 0;
      v73 = 0;
    }
    else
    {
      v69 = v23->m128i_i8[0];
      v70 = _mm_loadu_si128(v23);
      v23->m128i_i8[0] = 0;
      v74 = v69;
      v71 = v23->m128i_i64[1];
      v78 = v70;
      v73 = v71;
      v23->m128i_i64[1] = 0;
    }
    v51 = a1[1];
    v52 = *(_QWORD *)(v51 + 16);
    v53 = *(_QWORD *)(*(_QWORD *)v73 + 8LL);
    if ( !v52 )
      goto LABEL_80;
    v54 = v23;
    v55 = *(const void **)(v52 + 32);
    v56 = *(_QWORD **)(v51 + 16);
    v57 = (_QWORD *)(v51 + 8);
    v58 = *(_QWORD *)(v52 + 40);
    v75 = (_QWORD *)(v51 + 8);
    v59 = *(_QWORD *)(v53 + 8);
    v60 = *(const void **)v53;
    v61 = v54;
    while ( 1 )
    {
      v62 = v58;
      if ( v59 <= v58 )
        v62 = v59;
      if ( !v62 || (LODWORD(v63) = memcmp(v55, v60, v62), !(_DWORD)v63) )
      {
        v63 = v58 - v59;
        if ( (__int64)(v58 - v59) > 0x7FFFFFFF )
          goto LABEL_58;
        if ( v63 < (__int64)0xFFFFFFFF80000000LL )
          break;
      }
      if ( (int)v63 < 0 )
        break;
LABEL_58:
      v57 = v56;
      v56 = (_QWORD *)v56[2];
      if ( !v56 )
        goto LABEL_68;
LABEL_59:
      v55 = (const void *)v56[4];
      v58 = v56[5];
    }
    v56 = (_QWORD *)v56[3];
    if ( v56 )
      goto LABEL_59;
LABEL_68:
    v23 = v61;
    v64 = v59;
    if ( v75 == v57 )
      goto LABEL_80;
    v65 = v57[5];
    v66 = v65;
    if ( v64 <= v65 )
      v66 = v64;
    if ( v66 && (v67 = memcmp(v60, (const void *)v57[4], v66)) != 0 )
    {
LABEL_76:
      if ( v67 < 0 )
        goto LABEL_80;
    }
    else if ( (__int64)(v64 - v65) <= 0x7FFFFFFF )
    {
      if ( (__int64)(v64 - v65) >= (__int64)0xFFFFFFFF80000000LL )
      {
        v67 = v64 - v65;
        goto LABEL_76;
      }
LABEL_80:
      std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    }
    v23 = (const __m128i *)((char *)v23 + 24);
    v78.m128i_i8[0] = v74;
    v78.m128i_i64[1] = v73;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v72 != v23 );
  return v79 - __readfsqword(0x28u);
}

