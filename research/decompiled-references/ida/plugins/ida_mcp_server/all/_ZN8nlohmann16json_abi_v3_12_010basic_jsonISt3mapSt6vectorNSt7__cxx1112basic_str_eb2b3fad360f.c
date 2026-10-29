// Alternative name is '_ZN8nlohmann16json_abi_v3_12_010basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES3_IhSaIhEEvEC1ESt16initializer_listINS0_6detail8json_refISD_EEEbNSF_7value_tE'
unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        _QWORD *a1,
        const __m128i *a2,
        __int64 a3,
        char a4,
        char a5)
{
  __int64 v5; // r13
  const __m128i *v6; // rax
  const __m128i *v7; // rbx
  const __m128i *v8; // rbp
  const __m128i *v9; // rdx
  int v10; // eax
  const __m128i *v11; // rax
  _QWORD *v12; // rax
  const __m128i *v13; // rax
  _QWORD *v14; // rax
  const __m128i *v15; // rax
  _QWORD *v16; // rax
  const __m128i *v17; // rax
  bool v18; // al
  __m128i *v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // r13
  _OWORD *v22; // rdi
  __m128i v23; // xmm0
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rsi
  _QWORD *v27; // rax
  const __m128i *v28; // rax
  _QWORD *v29; // rax
  __int64 *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  const __m128i **v33; // rcx
  const __m128i *v34; // r8
  _QWORD *v35; // rax
  _QWORD *v36; // r9
  __int64 v37; // r13
  _QWORD *v38; // r14
  size_t v39; // r15
  const void *v40; // rdi
  const void *v41; // r12
  size_t v42; // rbp
  size_t v43; // rbx
  _QWORD *v44; // r15
  _QWORD *v45; // r13
  size_t v46; // rdx
  signed __int64 v47; // rax
  size_t v48; // rbx
  size_t v49; // rdx
  signed __int64 v50; // rax
  __int64 v52; // rax
  __int64 v53; // rsi
  __m128i *v54; // r12
  _QWORD *v55; // rax
  __m128i v56; // xmm0
  const void *v57; // rbx
  size_t v58; // r13
  _QWORD *insert_hint_unique_pos; // rax
  __int64 v60; // rdx
  __int8 v61; // al
  __m128i v62; // xmm0
  __int64 v63; // rax
  unsigned int v64; // ecx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rsi
  char *v67; // rdi
  unsigned int v68; // ecx
  unsigned int v69; // ebx
  unsigned int v70; // ecx
  __int64 v71; // rsi
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  int v78; // [rsp+0h] [rbp-D8h]
  const __m128i *v79; // [rsp+8h] [rbp-D0h]
  __int64 v80; // [rsp+10h] [rbp-C8h]
  __int64 v81; // [rsp+10h] [rbp-C8h]
  _QWORD *v82; // [rsp+18h] [rbp-C0h]
  __int8 v83; // [rsp+27h] [rbp-B1h]
  const __m128i *v84; // [rsp+28h] [rbp-B0h]
  _QWORD *v85; // [rsp+28h] [rbp-B0h]
  const __m128i *v86; // [rsp+30h] [rbp-A8h]
  const __m128i *v87; // [rsp+30h] [rbp-A8h]
  _QWORD *v88; // [rsp+38h] [rbp-A0h]
  _OWORD *v90; // [rsp+58h] [rbp-80h] BYREF
  __m128i v91; // [rsp+60h] [rbp-78h]
  __int64 v92[5]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v93; // [rsp+98h] [rbp-40h]

  v5 = 24 * a3;
  v6 = (const __m128i *)((char *)a2 + 24 * a3);
  v7 = a2;
  v93 = __readfsqword(0x28u);
  v8 = a2;
  *a1 = 0;
  a1[1] = 0;
  v79 = v6;
  if ( v6 == a2 )
  {
    if ( !a4 && a5 == 2 )
    {
      *(_BYTE *)a1 = 2;
      v77 = operator new(0x18u);
      *(_QWORD *)(v77 + 16) = 0;
      v19 = (__m128i *)v77;
      *(_OWORD *)v77 = 0;
      v20 = 0;
LABEL_31:
      v21 = v20;
      if ( v20 )
        v22 = (_OWORD *)operator new(16 * v20);
      else
        v22 = nullptr;
      v90 = v22;
      v19[1].m128i_i64[0] = (__int64)&v22[v21];
      *v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
      v91 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)&v90);
      if ( v79 != v8 )
      {
        do
        {
          if ( v7[1].m128i_i64[0] )
          {
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
            v22 = v90;
          }
          else
          {
            v23 = _mm_loadu_si128(v7);
            v7->m128i_i8[0] = 0;
            v7->m128i_i64[1] = 0;
            *v22 = v23;
          }
          ++v22;
          v7 = (const __m128i *)((char *)v7 + 24);
          v90 = v22;
        }
        while ( v79 != v7 );
      }
      v19->m128i_i64[1] = (__int64)v22;
      a1[1] = v19;
      return v93 - __readfsqword(0x28u);
    }
    goto LABEL_58;
  }
  v9 = a2;
  v10 = (-85 * (unsigned __int8)((unsigned __int64)((char *)v6 - (char *)a2 - 24) >> 3) + 1) & 3;
  if ( !v10 )
    goto LABEL_23;
  if ( v10 != 1 )
  {
    if ( v10 != 2 )
    {
      v11 = (const __m128i *)a2[1].m128i_i64[0];
      if ( !v11 )
        v11 = a2;
      if ( v11->m128i_i8[0] != 2 )
        goto LABEL_26;
      v12 = (_QWORD *)v11->m128i_i64[1];
      if ( v12[1] - *v12 != 32 || *(_BYTE *)*v12 != 3 )
        goto LABEL_26;
      v9 = (const __m128i *)((char *)a2 + 24);
    }
    v13 = (const __m128i *)v9[1].m128i_i64[0];
    if ( !v13 )
      v13 = v9;
    if ( v13->m128i_i8[0] != 2 )
      goto LABEL_26;
    v14 = (_QWORD *)v13->m128i_i64[1];
    if ( v14[1] - *v14 != 32 || *(_BYTE *)*v14 != 3 )
      goto LABEL_26;
    v9 = (const __m128i *)((char *)v9 + 24);
  }
  v15 = (const __m128i *)v9[1].m128i_i64[0];
  if ( !v15 )
    v15 = v9;
  if ( v15->m128i_i8[0] == 2 )
  {
    v16 = (_QWORD *)v15->m128i_i64[1];
    if ( v16[1] - *v16 == 32 && *(_BYTE *)*v16 == 3 )
    {
      v9 = (const __m128i *)((char *)v9 + 24);
      if ( v79 == v9 )
      {
LABEL_57:
        v18 = 1;
        if ( a4 )
          goto LABEL_58;
        goto LABEL_27;
      }
      while ( 1 )
      {
LABEL_23:
        v17 = (const __m128i *)v9[1].m128i_i64[0];
        if ( !v17 )
          v17 = v9;
        if ( v17->m128i_i8[0] != 2 )
          break;
        v24 = (_QWORD *)v17->m128i_i64[1];
        if ( v24[1] - *v24 != 32 || *(_BYTE *)*v24 != 3 )
          break;
        v25 = v9[2].m128i_i64[1];
        v26 = &v9[1].m128i_i64[1];
        v9 = (const __m128i *)((char *)v9 + 24);
        if ( !v25 )
          v25 = (__int64)v26;
        if ( *(_BYTE *)v25 != 2 )
          break;
        v27 = *(_QWORD **)(v25 + 8);
        if ( v27[1] - *v27 != 32 || *(_BYTE *)*v27 != 3 )
          break;
        v28 = (const __m128i *)v9[2].m128i_i64[1];
        v9 = (const __m128i *)((char *)v9 + 24);
        if ( !v28 )
          v28 = v9;
        if ( v28->m128i_i8[0] != 2 )
          break;
        v29 = (_QWORD *)v28->m128i_i64[1];
        if ( v29[1] - *v29 != 32 || *(_BYTE *)*v29 != 3 )
          break;
        v30 = (__int64 *)v26[8];
        v9 = (const __m128i *)(v26 + 6);
        if ( !v30 )
          v30 = v26 + 6;
        if ( *(_BYTE *)v30 != 2 )
          break;
        v31 = (_QWORD *)v30[1];
        if ( v31[1] - *v31 != 32 || *(_BYTE *)*v31 != 3 )
          break;
        v9 = (const __m128i *)(v26 + 9);
        if ( v79 == (const __m128i *)(v26 + 9) )
          goto LABEL_57;
      }
    }
  }
LABEL_26:
  v18 = v79 == v9;
  if ( a4 )
  {
LABEL_29:
    if ( !v18 )
    {
LABEL_30:
      *(_BYTE *)a1 = 2;
      v19 = (__m128i *)operator new(0x18u);
      v19[1].m128i_i64[0] = 0;
      *v19 = 0;
      v20 = 0xAAAAAAAAAAAAAAABLL * (v5 >> 3);
      if ( v5 < 0 )
        std::__throw_length_error("cannot create std::vector larger than max_size()");
      goto LABEL_31;
    }
    goto LABEL_58;
  }
LABEL_27:
  if ( a5 == 2 )
    goto LABEL_30;
  if ( a5 != 1 )
    goto LABEL_29;
  if ( !v18 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v92,
      "cannot create object from initializer list",
      v73,
      v74,
      v75,
      v76,
      v78,
      (int)v79,
      v80);
    nlohmann::json_abi_v3_12_0::detail::type_error::create<decltype(nullptr),0>(exception, 301);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
LABEL_58:
  *(_BYTE *)a1 = 1;
  v32 = operator new(0x30u);
  *(_DWORD *)(v32 + 8) = 0;
  *(_QWORD *)(v32 + 16) = 0;
  *(_QWORD *)(v32 + 24) = v32 + 8;
  *(_QWORD *)(v32 + 32) = v32 + 8;
  *(_QWORD *)(v32 + 40) = 0;
  a1[1] = v32;
  if ( v79 == v8 )
    return v93 - __readfsqword(0x28u);
  do
  {
    if ( v8[1].m128i_i64[0] )
    {
      v91.m128i_i8[0] = 0;
      v91.m128i_i64[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v83 = 0;
      v81 = 0;
      v33 = nullptr;
    }
    else
    {
      v61 = v8->m128i_i8[0];
      v62 = _mm_loadu_si128(v8);
      v8->m128i_i8[0] = 0;
      v83 = v61;
      v63 = v8->m128i_i64[1];
      v91 = v62;
      v81 = v63;
      v33 = (const __m128i **)v63;
      v8->m128i_i64[1] = 0;
    }
    v34 = *v33;
    v35 = (_QWORD *)a1[1];
    v36 = (_QWORD *)(*v33)->m128i_i64[1];
    v37 = v35[2];
    v38 = v35 + 1;
    v88 = v35;
    v82 = v35 + 1;
    v39 = v36[1];
    if ( !v37 )
      goto LABEL_83;
    v40 = *(const void **)(v37 + 32);
    v86 = v8;
    v84 = *v33;
    v41 = (const void *)*v36;
    v42 = *(_QWORD *)(v37 + 40);
    v43 = v36[1];
    v44 = (_QWORD *)v35[2];
    v45 = (_QWORD *)(*v33)->m128i_i64[1];
    while ( 1 )
    {
      v46 = v42;
      if ( v43 <= v42 )
        v46 = v43;
      if ( !v46 || (LODWORD(v47) = memcmp(v40, v41, v46), !(_DWORD)v47) )
      {
        v47 = v42 - v43;
        if ( (__int64)(v42 - v43) > 0x7FFFFFFF )
          goto LABEL_63;
        if ( v47 < (__int64)0xFFFFFFFF80000000LL )
          break;
      }
      if ( (int)v47 < 0 )
        break;
LABEL_63:
      v38 = v44;
      v44 = (_QWORD *)v44[2];
      if ( !v44 )
        goto LABEL_73;
LABEL_64:
      v40 = (const void *)v44[4];
      v42 = v44[5];
    }
    v44 = (_QWORD *)v44[3];
    if ( v44 )
      goto LABEL_64;
LABEL_73:
    v34 = v84;
    v8 = v86;
    v36 = v45;
    v39 = v43;
    if ( v38 == v82 )
      goto LABEL_83;
    v48 = v38[5];
    v49 = v48;
    if ( v39 <= v48 )
      v49 = v39;
    if ( v49 && (LODWORD(v50) = memcmp(v41, (const void *)v38[4], v49), v34 = v84, v36 = v45, (_DWORD)v50) )
    {
LABEL_80:
      if ( (int)v50 < 0 )
        goto LABEL_83;
    }
    else
    {
      v50 = v39 - v48;
      if ( (__int64)(v39 - v48) <= 0x7FFFFFFF )
      {
        if ( v50 >= (__int64)0xFFFFFFFF80000000LL )
          goto LABEL_80;
LABEL_83:
        v87 = v34;
        v85 = v36;
        v52 = operator new(0x50u);
        v53 = v52 + 48;
        v54 = (__m128i *)v52;
        *(_QWORD *)(v52 + 32) = v52 + 48;
        v55 = v85 + 2;
        if ( (_QWORD *)*v85 == v85 + 2 )
        {
          v64 = v39 + 1;
          if ( (unsigned int)(v39 + 1) >= 8 )
          {
            v54[3].m128i_i64[0] = v85[2];
            *(_QWORD *)(v53 + v64 - 8) = *(_QWORD *)((char *)v55 + v64 - 8);
            v65 = (unsigned __int64)&v54[3].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
            v66 = v53 - v65;
            v67 = (char *)v55 - v66;
            v68 = (v66 + v64) & 0xFFFFFFF8;
            if ( v68 >= 8 )
            {
              v69 = v68 & 0xFFFFFFF8;
              v70 = 0;
              do
              {
                v71 = v70;
                v70 += 8;
                *(_QWORD *)(v65 + v71) = *(_QWORD *)&v67[v71];
              }
              while ( v70 < v69 );
            }
          }
          else if ( (v64 & 4) != 0 )
          {
            v54[3].m128i_i32[0] = *((_DWORD *)v85 + 4);
            *(_DWORD *)(v53 + v64 - 4) = *(_DWORD *)((char *)v55 + v64 - 4);
          }
          else if ( (_DWORD)v39 != -1 )
          {
            v54[3].m128i_i8[0] = *((_BYTE *)v85 + 16);
            if ( (v64 & 2) != 0 )
              *(_WORD *)(v53 + v64 - 2) = *(_WORD *)((char *)v55 + v64 - 2);
          }
          v39 = v85[1];
        }
        else
        {
          v54[2].m128i_i64[0] = *v85;
          v54[3].m128i_i64[0] = v85[2];
        }
        v54[2].m128i_i64[1] = v39;
        *((_BYTE *)v85 + 16) = 0;
        v85[1] = 0;
        v56 = _mm_loadu_si128(v87 + 1);
        *v85 = v55;
        v57 = (const void *)v54[2].m128i_i64[0];
        v87[1].m128i_i64[1] = 0;
        v58 = v54[2].m128i_u64[1];
        v87[1].m128i_i8[0] = 0;
        v54[4] = v56;
        insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                                   v88,
                                   v38,
                                   v57,
                                   v58);
        if ( v60 )
        {
          if ( !insert_hint_unique_pos && v82 != (_QWORD *)v60 )
            std::string::compare(v57, v58, *(const void **)(v60 + 32), *(_QWORD *)(v60 + 40));
          std::_Rb_tree_insert_and_rebalance();
          ++v88[5];
        }
        else
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          std::string::_M_dispose();
          operator delete(v54, 0x50u);
        }
      }
    }
    v8 = (const __m128i *)((char *)v8 + 24);
    v91.m128i_i8[0] = v83;
    v91.m128i_i64[1] = v81;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v79 != v8 );
  return v93 - __readfsqword(0x28u);
}

