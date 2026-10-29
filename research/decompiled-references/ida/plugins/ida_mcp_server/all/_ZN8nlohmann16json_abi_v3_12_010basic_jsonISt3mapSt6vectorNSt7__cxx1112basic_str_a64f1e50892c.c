unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        _QWORD *a1,
        const __m128i *a2,
        __int64 a3,
        char a4)
{
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  const __m128i *v10; // rax
  const __m128i *v11; // rbx
  const __m128i *v12; // rbp
  const __m128i *v13; // rdx
  int v14; // eax
  const __m128i *v15; // rax
  _QWORD *v16; // rax
  const __m128i *v17; // rax
  _QWORD *v18; // rax
  const __m128i *v19; // rax
  _QWORD *v20; // rax
  const __m128i *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r14
  __int64 v25; // r10
  _QWORD *v26; // r15
  const void *v27; // rdi
  _QWORD *v28; // rbp
  size_t v29; // rbx
  const void *v30; // r12
  size_t i; // r13
  size_t v32; // rdx
  signed __int64 v33; // rax
  size_t v34; // r13
  size_t v35; // rbx
  size_t v36; // rdx
  int v37; // eax
  __int8 v38; // al
  __m128i v39; // xmm0
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 *v43; // rsi
  _QWORD *v44; // rax
  const __m128i *v45; // rax
  _QWORD *v46; // rax
  __int64 *v47; // rax
  _QWORD *v48; // rax
  __m128i *v49; // r12
  unsigned __int64 v50; // rax
  __int64 v51; // r14
  _OWORD *v52; // rdi
  __m128i v53; // xmm0
  __int64 v55; // rax
  int v56; // [rsp+0h] [rbp-D8h]
  const __m128i *v57; // [rsp+8h] [rbp-D0h]
  __int64 v58; // [rsp+10h] [rbp-C8h]
  __int64 v59; // [rsp+10h] [rbp-C8h]
  __int8 v60; // [rsp+1Fh] [rbp-B9h]
  _QWORD *v61; // [rsp+28h] [rbp-B0h]
  const __m128i *v62; // [rsp+30h] [rbp-A8h]
  _OWORD *v64; // [rsp+58h] [rbp-80h] BYREF
  __m128i v65; // [rsp+60h] [rbp-78h]
  __int64 v66[5]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v67; // [rsp+98h] [rbp-40h]

  v9 = 24 * a3;
  v10 = (const __m128i *)((char *)a2 + 24 * a3);
  v11 = a2;
  v67 = __readfsqword(0x28u);
  v12 = a2;
  *a1 = 0;
  a1[1] = 0;
  v57 = v10;
  if ( a2 == v10 )
  {
    if ( a4 != 2 )
      goto LABEL_29;
    *(_BYTE *)a1 = 2;
    v55 = operator new(0x18u);
    *(_QWORD *)(v55 + 16) = 0;
    v49 = (__m128i *)v55;
    *(_OWORD *)v55 = 0;
    v50 = 0;
LABEL_76:
    v51 = v50;
    if ( v50 )
      v52 = (_OWORD *)operator new(16 * v50);
    else
      v52 = nullptr;
    v64 = v52;
    v49[1].m128i_i64[0] = (__int64)&v52[v51];
    *v49 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v52, (__m128i)(unsigned __int64)v52);
    v65 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v52, (__m128i)(unsigned __int64)&v64);
    if ( v12 != v57 )
    {
      do
      {
        if ( v11[1].m128i_i64[0] )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v52 = v64;
        }
        else
        {
          v53 = _mm_loadu_si128(v11);
          v11->m128i_i8[0] = 0;
          v11->m128i_i64[1] = 0;
          *v52 = v53;
        }
        ++v52;
        v11 = (const __m128i *)((char *)v11 + 24);
        v64 = v52;
      }
      while ( v57 != v11 );
    }
    v49->m128i_i64[1] = (__int64)v52;
    a1[1] = v49;
    return v67 - __readfsqword(0x28u);
  }
  v13 = a2;
  v14 = (-85 * (unsigned __int8)((unsigned __int64)((char *)v10 - (char *)a2 - 24) >> 3) + 1) & 3;
  if ( !v14 )
    goto LABEL_23;
  if ( v14 == 1 )
  {
LABEL_17:
    v19 = (const __m128i *)v13[1].m128i_i64[0];
    if ( !v19 )
      v19 = v13;
    if ( v19->m128i_i8[0] == 2 )
    {
      v20 = (_QWORD *)v19->m128i_i64[1];
      if ( v20[1] - *v20 == 32 && *(_BYTE *)*v20 == 3 )
      {
        v13 = (const __m128i *)((char *)v13 + 24);
        if ( v57 == v13 )
        {
LABEL_74:
          if ( a4 != 2 )
            goto LABEL_29;
          goto LABEL_75;
        }
        while ( 1 )
        {
LABEL_23:
          v21 = (const __m128i *)v13[1].m128i_i64[0];
          if ( !v21 )
            v21 = v13;
          if ( v21->m128i_i8[0] != 2 )
            break;
          v41 = (_QWORD *)v21->m128i_i64[1];
          if ( v41[1] - *v41 != 32 || *(_BYTE *)*v41 != 3 )
            break;
          v42 = v13[2].m128i_i64[1];
          v43 = &v13[1].m128i_i64[1];
          v13 = (const __m128i *)((char *)v13 + 24);
          if ( !v42 )
            v42 = (__int64)v43;
          if ( *(_BYTE *)v42 != 2 )
            break;
          v44 = *(_QWORD **)(v42 + 8);
          if ( v44[1] - *v44 != 32 || *(_BYTE *)*v44 != 3 )
            break;
          v45 = (const __m128i *)v13[2].m128i_i64[1];
          v13 = (const __m128i *)((char *)v13 + 24);
          if ( !v45 )
            v45 = v13;
          if ( v45->m128i_i8[0] != 2 )
            break;
          v46 = (_QWORD *)v45->m128i_i64[1];
          if ( v46[1] - *v46 != 32 || *(_BYTE *)*v46 != 3 )
            break;
          v47 = (__int64 *)v43[8];
          v13 = (const __m128i *)(v43 + 6);
          if ( !v47 )
            v47 = v43 + 6;
          if ( *(_BYTE *)v47 != 2 )
            break;
          v48 = (_QWORD *)v47[1];
          if ( v48[1] - *v48 != 32 || *(_BYTE *)*v48 != 3 )
            break;
          v13 = (const __m128i *)(v43 + 9);
          if ( v57 == (const __m128i *)(v43 + 9) )
            goto LABEL_74;
        }
      }
    }
    goto LABEL_26;
  }
  if ( v14 != 2 )
  {
    v15 = (const __m128i *)a2[1].m128i_i64[0];
    if ( !v15 )
      v15 = a2;
    if ( v15->m128i_i8[0] != 2 )
      goto LABEL_26;
    v16 = (_QWORD *)v15->m128i_i64[1];
    if ( v16[1] - *v16 != 32 || *(_BYTE *)*v16 != 3 )
      goto LABEL_26;
    v13 = (const __m128i *)((char *)a2 + 24);
  }
  v17 = (const __m128i *)v13[1].m128i_i64[0];
  if ( !v17 )
    v17 = v13;
  if ( v17->m128i_i8[0] == 2 )
  {
    v18 = (_QWORD *)v17->m128i_i64[1];
    if ( v18[1] - *v18 == 32 && *(_BYTE *)*v18 == 3 )
    {
      v13 = (const __m128i *)((char *)v13 + 24);
      goto LABEL_17;
    }
  }
LABEL_26:
  if ( a4 == 2 )
    goto LABEL_75;
  if ( a4 == 1 )
  {
    if ( v57 != v13 )
    {
      exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      std::string::basic_string<std::allocator<char>>(
        v66,
        "cannot create object from initializer list",
        v5,
        v6,
        v7,
        v8,
        v56,
        (int)v57,
        v58);
      nlohmann::json_abi_v3_12_0::detail::type_error::create<decltype(nullptr),0>(exception, 301);
      std::string::_M_dispose();
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    goto LABEL_29;
  }
  if ( v57 != v13 )
  {
LABEL_75:
    *(_BYTE *)a1 = 2;
    v49 = (__m128i *)operator new(0x18u);
    v49[1].m128i_i64[0] = 0;
    *v49 = 0;
    v50 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 3);
    if ( v9 < 0 )
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    goto LABEL_76;
  }
LABEL_29:
  *(_BYTE *)a1 = 1;
  v22 = operator new(0x30u);
  *(_DWORD *)(v22 + 8) = 0;
  *(_QWORD *)(v22 + 16) = 0;
  *(_QWORD *)(v22 + 24) = v22 + 8;
  *(_QWORD *)(v22 + 32) = v22 + 8;
  *(_QWORD *)(v22 + 40) = 0;
  a1[1] = v22;
  if ( v12 == v57 )
    return v67 - __readfsqword(0x28u);
  if ( v12[1].m128i_i64[0] )
  {
LABEL_31:
    v65.m128i_i8[0] = 0;
    v65.m128i_i64[1] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v60 = 0;
    v59 = 0;
  }
  else
  {
LABEL_55:
    v38 = v12->m128i_i8[0];
    v39 = _mm_loadu_si128(v12);
    v12->m128i_i8[0] = 0;
    v60 = v38;
    v40 = v12->m128i_i64[1];
    v65 = v39;
    v59 = v40;
    v12->m128i_i64[1] = 0;
  }
  v23 = a1[1];
  v24 = *(_QWORD *)(v23 + 16);
  v25 = *(_QWORD *)(*(_QWORD *)v59 + 8LL);
  if ( !v24 )
    goto LABEL_89;
  v62 = v12;
  v26 = (_QWORD *)(v23 + 8);
  v27 = *(const void **)(v24 + 32);
  v28 = *(_QWORD **)(v23 + 16);
  v61 = (_QWORD *)(v23 + 8);
  v29 = *(_QWORD *)(v25 + 8);
  v30 = *(const void **)v25;
  for ( i = *(_QWORD *)(v24 + 40); ; i = v28[5] )
  {
    v32 = i;
    if ( v29 <= i )
      v32 = v29;
    if ( !v32 || (LODWORD(v33) = memcmp(v27, v30, v32), !(_DWORD)v33) )
    {
      v33 = i - v29;
      if ( (__int64)(i - v29) > 0x7FFFFFFF )
        goto LABEL_34;
      if ( v33 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v33 < 0 )
      break;
LABEL_34:
    v26 = v28;
    v28 = (_QWORD *)v28[2];
    if ( !v28 )
      goto LABEL_44;
LABEL_35:
    v27 = (const void *)v28[4];
  }
  v28 = (_QWORD *)v28[3];
  if ( v28 )
    goto LABEL_35;
LABEL_44:
  v12 = v62;
  v34 = v29;
  if ( v61 == v26 )
    goto LABEL_89;
  v35 = v26[5];
  v36 = v35;
  if ( v34 <= v35 )
    v36 = v34;
  if ( v36 && (v37 = memcmp(v30, (const void *)v26[4], v36)) != 0 )
  {
LABEL_52:
    if ( v37 < 0 )
      goto LABEL_89;
  }
  else if ( (__int64)(v34 - v35) <= 0x7FFFFFFF )
  {
    if ( (__int64)(v34 - v35) >= (__int64)0xFFFFFFFF80000000LL )
    {
      v37 = v34 - v35;
      goto LABEL_52;
    }
LABEL_89:
    std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
  }
  v12 = (const __m128i *)((char *)v12 + 24);
  v65.m128i_i8[0] = v60;
  v65.m128i_i64[1] = v59;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v57 != v12 )
  {
    if ( v12[1].m128i_i64[0] )
      goto LABEL_31;
    goto LABEL_55;
  }
  return v67 - __readfsqword(0x28u);
}

