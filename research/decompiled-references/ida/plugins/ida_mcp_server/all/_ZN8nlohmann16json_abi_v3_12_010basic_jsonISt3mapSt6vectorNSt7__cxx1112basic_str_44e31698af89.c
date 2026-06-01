void __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy(
        void **a1,
        char a2)
{
  const __m128i **v3; // rbp
  const __m128i *v4; // r14
  const __m128i *v5; // r15
  unsigned __int64 v6; // rbx
  const __m128i *v7; // r13
  char *m128i_i8; // rbx
  __m128i *v9; // rbp
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __m128i *v12; // r15
  __int64 v13; // rax
  const __m128i *v14; // rcx
  __int64 v15; // r14
  __m128i v16; // xmm0
  unsigned __int64 v17; // rsi
  void **v18; // rax
  _QWORD *v19; // rbx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rsi
  __m128i *v22; // rax
  const __m128i *v23; // r15
  const __m128i *v24; // r14
  __m128i v25; // xmm0
  __m128i *v26; // rax
  void **v27; // rdi
  const __m128i *v28; // r12
  __m128i *v29; // rbx
  const __m128i *v30; // r13
  const __m128i *v31; // r14
  __m128i v32; // xmm0
  __int64 v33; // r14
  __int64 v34; // r13
  void **v35; // rax
  _QWORD *v37; // [rsp+20h] [rbp-78h]
  __int64 v38; // [rsp+28h] [rbp-70h]
  __int64 *v39; // [rsp+38h] [rbp-60h]

  if ( a2 != 1 )
  {
    if ( a2 != 2 )
    {
      if ( a2 == 3 )
      {
        v35 = (void **)*a1;
        if ( *a1 )
        {
          if ( *v35 != v35 + 2 )
            operator delete(*v35, (unsigned __int64)v35[2] + 1);
          operator delete(*a1, 0x20u);
        }
      }
      else if ( a2 == 8 )
      {
        v27 = (void **)*a1;
        if ( v27 )
        {
          if ( *v27 )
          {
            operator delete(*v27, (_BYTE *)v27[2] - (_BYTE *)*v27);
            v27 = (void **)*a1;
          }
          operator delete(v27, 0x28u);
        }
      }
      return;
    }
    v3 = (const __m128i **)*a1;
    if ( !*a1 )
      return;
    v4 = v3[1];
    v5 = *v3;
    v6 = (char *)v4 - (char *)*v3;
    if ( v6 )
    {
      v26 = (__m128i *)operator new(v6);
      v7 = v26;
      if ( v4 == v5 )
      {
        operator delete(v26, v6);
        v3 = (const __m128i **)*a1;
        goto LABEL_50;
      }
      m128i_i8 = &v26->m128i_i8[v6];
    }
    else
    {
      v7 = nullptr;
      m128i_i8 = nullptr;
      if ( v4 == v5 )
        goto LABEL_50;
    }
    v9 = (__m128i *)v7;
    do
    {
      while ( m128i_i8 != (char *)v7 )
      {
        v10 = _mm_loadu_si128(v5);
        v5->m128i_i8[0] = 0;
        ++v5;
        ++v7;
        v5[-1].m128i_i64[1] = 0;
        v7[-1] = v10;
        if ( v5 == v4 )
          goto LABEL_13;
      }
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
      ++v5;
      v7 = (const __m128i *)m128i_i8;
    }
    while ( v5 != v4 );
LABEL_13:
    if ( v9 != v7 )
      goto LABEL_16;
    v17 = m128i_i8 - (char *)v9;
    if ( !v9 )
      goto LABEL_48;
    goto LABEL_27;
  }
  v19 = *a1;
  if ( !*a1 )
    return;
  v20 = v19[5];
  if ( v20 >> 59 )
    std::__throw_length_error("vector::reserve");
  if ( v20 )
  {
    v21 = 16 * v20;
    v22 = (__m128i *)operator new(v21);
    v23 = (const __m128i *)v19[3];
    v24 = (const __m128i *)(v19 + 1);
    v7 = v22;
    m128i_i8 = v22[v21 / 0x10].m128i_i8;
    if ( v24 == v23 )
    {
      operator delete(v22, v21);
      v19 = *a1;
      goto LABEL_29;
    }
  }
  else
  {
    v23 = (const __m128i *)v19[3];
    v24 = (const __m128i *)(v19 + 1);
    if ( v19 + 1 == (_QWORD *)v23 )
      goto LABEL_29;
    v7 = nullptr;
    m128i_i8 = nullptr;
  }
  v9 = (__m128i *)v7;
  do
  {
    while ( m128i_i8 != (char *)v7 )
    {
      v25 = _mm_loadu_si128(v23 + 4);
      v23[4].m128i_i8[0] = 0;
      ++v7;
      v23[4].m128i_i64[1] = 0;
      v7[-1] = v25;
      v23 = (const __m128i *)std::_Rb_tree_increment();
      if ( v23 == v24 )
        goto LABEL_38;
    }
    std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    v7 = (const __m128i *)m128i_i8;
    v23 = (const __m128i *)std::_Rb_tree_increment();
  }
  while ( v23 != v24 );
LABEL_38:
  if ( v9 == v7 )
  {
    if ( v9 )
    {
LABEL_26:
      v17 = m128i_i8 - (char *)v9;
LABEL_27:
      operator delete(v9, v17);
      v18 = a1;
      if ( a2 == 2 )
        goto LABEL_49;
      v19 = *a1;
      goto LABEL_29;
    }
    goto LABEL_40;
  }
  do
  {
    while ( 1 )
    {
LABEL_16:
      v11 = _mm_loadu_si128(v7 - 1);
      v12 = (__m128i *)&v7[-1];
      v7[-1].m128i_i8[0] = 0;
      v7[-1].m128i_i64[1] = 0;
      v39 = (__int64 *)v11.m128i_i64[1];
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v11.m128i_i8[0] == 2 )
      {
        v30 = *(const __m128i **)(v11.m128i_i64[1] + 8);
        v31 = *(const __m128i **)v11.m128i_i64[1];
        if ( *(const __m128i **)v11.m128i_i64[1] != v30 )
        {
          do
          {
            while ( m128i_i8 != (char *)v12 )
            {
              v32 = _mm_loadu_si128(v31);
              v31->m128i_i8[0] = 0;
              ++v31;
              ++v12;
              v31[-1].m128i_i64[1] = 0;
              v12[-1] = v32;
              if ( v31 == v30 )
                goto LABEL_61;
            }
            std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
            ++v31;
            v12 = (__m128i *)m128i_i8;
          }
          while ( v31 != v30 );
LABEL_61:
          v33 = v39[1];
          v38 = *v39;
          v34 = *v39;
          if ( v33 != *v39 )
          {
            do
            {
              v34 += 16;
              nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
            }
            while ( v33 != v34 );
            v39[1] = v38;
          }
        }
        v7 = v12;
        goto LABEL_15;
      }
      --v7;
      if ( v11.m128i_i8[0] == 1 )
        break;
LABEL_15:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      if ( v9 == v12 )
        goto LABEL_25;
    }
    v13 = v11.m128i_i64[1];
    v14 = *(const __m128i **)(v11.m128i_i64[1] + 24);
    v15 = v11.m128i_i64[1] + 8;
    if ( (const __m128i *)(v11.m128i_i64[1] + 8) != v14 )
    {
      do
      {
        while ( m128i_i8 != (char *)v12 )
        {
          v16 = _mm_loadu_si128(v14 + 4);
          v14[4].m128i_i8[0] = 0;
          ++v12;
          v14[4].m128i_i64[1] = 0;
          v12[-1] = v16;
          v14 = (const __m128i *)std::_Rb_tree_increment();
          if ( (const __m128i *)v15 == v14 )
            goto LABEL_23;
        }
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
        v12 = (__m128i *)m128i_i8;
        v14 = (const __m128i *)std::_Rb_tree_increment();
      }
      while ( (const __m128i *)v15 != v14 );
LABEL_23:
      v13 = (__int64)v39;
      v7 = v12;
      v15 = (__int64)(v39 + 1);
    }
    v37 = (_QWORD *)v13;
    std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_erase(*(_QWORD *)(v13 + 16));
    v37[2] = 0;
    v37[3] = v15;
    v37[4] = v15;
    v37[5] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( v9 != v12 );
LABEL_25:
  if ( v9 )
    goto LABEL_26;
  if ( a2 != 2 )
  {
LABEL_40:
    v19 = *a1;
LABEL_29:
    std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_erase(v19[2]);
    operator delete(*a1, 0x30u);
    return;
  }
LABEL_48:
  v18 = a1;
LABEL_49:
  v3 = (const __m128i **)*v18;
LABEL_50:
  v28 = v3[1];
  v29 = (__m128i *)*v3;
  if ( v28 != *v3 )
  {
    do
    {
      ++v29;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v28 != v29 );
    v29 = (__m128i *)*v3;
  }
  if ( v29 )
    operator delete(v29, (char *)v3[2] - (char *)v29);
  operator delete(*a1, 0x18u);
}

