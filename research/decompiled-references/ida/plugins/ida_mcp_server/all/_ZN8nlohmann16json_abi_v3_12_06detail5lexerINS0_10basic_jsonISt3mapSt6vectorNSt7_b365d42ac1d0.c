__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::scan_number(
        __m128i *a1)
{
  unsigned __int8 *v1; // rax
  unsigned __int8 *v3; // rax
  int v4; // esi
  unsigned int v5; // r12d
  int v6; // eax
  int v7; // eax
  const char *v8; // rdx
  int v10; // eax
  unsigned __int8 *v11; // rax
  int v12; // r9d
  int *v13; // rax
  const char *v14; // rdi
  int *v15; // rbp
  int v16; // eax
  int v17; // r9d
  unsigned __int8 *v18; // rax
  unsigned __int8 *v19; // r12
  unsigned __int8 **v20; // rdx
  unsigned __int8 *v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int8 *v23; // r12
  unsigned __int8 *v24; // rdx
  unsigned __int8 *v25; // rax
  unsigned __int8 *v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // r8
  unsigned __int8 *v29; // rax
  size_t v30; // rdx
  void *v31; // r8
  unsigned __int8 *v32; // rcx
  unsigned __int8 *v33; // r10
  unsigned __int8 *v34; // rax
  __int64 v35; // rax
  unsigned __int8 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  unsigned __int8 *v40; // rax
  __m128i v41; // [rsp+0h] [rbp-68h]
  void *v42; // [rsp+10h] [rbp-58h]
  unsigned __int8 *v43; // [rsp+10h] [rbp-58h]
  void *v44; // [rsp+10h] [rbp-58h]
  unsigned __int8 *v45; // [rsp+10h] [rbp-58h]
  size_t n; // [rsp+18h] [rbp-50h]
  size_t nb; // [rsp+18h] [rbp-50h]
  char na; // [rsp+18h] [rbp-50h]
  int v49; // [rsp+20h] [rbp-48h]
  unsigned __int8 *v50; // [rsp+20h] [rbp-48h]
  unsigned __int8 *src; // [rsp+28h] [rbp-40h]
  void *srca; // [rsp+28h] [rbp-40h]
  char *endptr[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (unsigned __int8 *)a1[5].m128i_i64[0];
  endptr[1] = (char *)__readfsqword(0x28u);
  a1[5].m128i_i64[1] = 0;
  *v1 = 0;
  v3 = (unsigned __int8 *)a1[3].m128i_i64[1];
  if ( v3 != (unsigned __int8 *)a1[4].m128i_i64[0] )
    a1[4].m128i_i64[0] = (__int64)v3;
  a1[9].m128i_i64[1] = -1;
  std::vector<char>::emplace_back<char>(&a1[3].m128i_i64[1], a1[1].m128i_i8[4]);
  v4 = a1[1].m128i_i32[1];
  if ( v4 == 48 )
  {
    v5 = 5;
    std::string::push_back();
  }
  else
  {
    if ( v4 <= 48 )
    {
      if ( v4 == 45 )
        std::string::push_back();
    }
    else if ( (unsigned int)(v4 - 49) <= 8 )
    {
      v5 = 5;
      std::string::push_back();
      while ( 1 )
      {
        v6 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get();
        if ( v6 > 57 )
          break;
LABEL_8:
        if ( v6 <= 47 )
          goto LABEL_9;
        std::string::push_back();
      }
LABEL_18:
      if ( (v6 & 0xFFFFFFDF) != 0x45 )
        goto LABEL_19;
      goto LABEL_29;
    }
    v10 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get();
    if ( v10 != 48 )
    {
      if ( (unsigned int)(v10 - 49) > 8 )
      {
        v8 = "invalid number; expected digit after '-'";
        goto LABEL_11;
      }
      v5 = 6;
      std::string::push_back();
      v6 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get();
      if ( v6 <= 57 )
        goto LABEL_8;
      goto LABEL_18;
    }
    v5 = 6;
    std::string::push_back();
  }
  v6 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get();
  if ( (v6 & 0xFFFFFFDF) != 0x45 )
  {
LABEL_9:
    if ( v6 != 46 )
    {
LABEL_19:
      v11 = (unsigned __int8 *)a1[2].m128i_i64[1];
      v12 = a1[1].m128i_i32[1];
      goto LABEL_20;
    }
    std::string::push_back();
    a1[9].m128i_i64[1] = a1[5].m128i_i64[1] - 1;
    v7 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get();
    v8 = "invalid number; expected digit after '.'";
    if ( (unsigned int)(v7 - 48) > 9 )
      goto LABEL_11;
    while ( 1 )
    {
      std::string::push_back();
      v39 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get();
      v12 = a1[1].m128i_i32[1];
      if ( v39 == 69 )
        goto LABEL_29;
      if ( v39 > 69 )
        break;
      if ( (unsigned int)(v39 - 48) > 9 )
        goto LABEL_76;
    }
    if ( v39 != 101 )
    {
LABEL_76:
      v11 = (unsigned __int8 *)a1[2].m128i_i64[1];
      v5 = 7;
LABEL_20:
      --a1[2].m128i_i64[0];
      a1[1].m128i_i8[8] = 1;
      if ( v11 )
      {
        a1[2].m128i_i64[1] = (__int64)(v11 - 1);
      }
      else
      {
        v40 = (unsigned __int8 *)a1[3].m128i_i64[0];
        if ( v40 )
          a1[3].m128i_i64[0] = (__int64)(v40 - 1);
      }
      if ( v12 != -1 )
        goto LABEL_23;
      goto LABEL_24;
    }
  }
LABEL_29:
  std::string::push_back();
  v16 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get();
  if ( v16 == 45 )
  {
LABEL_63:
    std::string::push_back();
    if ( (unsigned int)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get()
       - 48 <= 9 )
      goto LABEL_32;
    v8 = "invalid number; expected digit after exponent sign";
LABEL_11:
    a1[7].m128i_i64[0] = (__int64)v8;
    return 14;
  }
  if ( v16 <= 45 )
  {
    if ( v16 != 43 )
      goto LABEL_59;
    goto LABEL_63;
  }
  if ( (unsigned int)(v16 - 48) > 9 )
  {
LABEL_59:
    v8 = "invalid number; expected '+', '-', or digit after exponent";
    goto LABEL_11;
  }
LABEL_32:
  std::string::push_back();
  v41 = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
  while ( 1 )
  {
    a1[2] = _mm_add_epi64(_mm_loadu_si128(a1 + 2), v41);
    if ( !a1[1].m128i_i8[8] )
      break;
    v17 = a1[1].m128i_i32[1];
    a1[1].m128i_i8[8] = 0;
    if ( v17 == -1 )
      goto LABEL_75;
    v18 = (unsigned __int8 *)a1[4].m128i_i64[0];
    v19 = (unsigned __int8 *)a1[4].m128i_i64[1];
    if ( v18 == v19 )
      goto LABEL_45;
LABEL_35:
    *v18 = v17;
    v12 = a1[1].m128i_i32[1];
    ++a1[4].m128i_i64[0];
    if ( v12 == 10 )
      goto LABEL_55;
LABEL_36:
    if ( (unsigned int)(v12 - 48) > 9 )
      goto LABEL_76;
    v20 = (unsigned __int8 **)a1[5].m128i_i64[0];
    v21 = (unsigned __int8 *)a1[5].m128i_i64[1];
    if ( v20 == (unsigned __int8 **)&a1[6] )
      v22 = 15;
    else
      v22 = a1[6].m128i_u64[0];
    v23 = v21 + 1;
    if ( v22 < (unsigned __int64)(v21 + 1) )
    {
      na = v12;
      v45 = (unsigned __int8 *)a1[5].m128i_i64[1];
      std::string::_M_mutate();
      v20 = (unsigned __int8 **)a1[5].m128i_i64[0];
      LOBYTE(v12) = na;
      v21 = v45;
    }
    v21[(_QWORD)v20] = v12;
    v24 = (unsigned __int8 *)a1[5].m128i_i64[0];
    a1[5].m128i_i64[1] = (__int64)v23;
    v21[(_QWORD)v24 + 1] = 0;
  }
  v25 = (unsigned __int8 *)a1->m128i_i64[0];
  if ( a1->m128i_i64[0] == a1->m128i_i64[1] )
  {
    a1[1].m128i_i32[1] = -1;
LABEL_75:
    v12 = -1;
    goto LABEL_76;
  }
  v17 = *v25;
  v19 = (unsigned __int8 *)a1[4].m128i_i64[1];
  a1->m128i_i64[0] = (__int64)(v25 + 1);
  v18 = (unsigned __int8 *)a1[4].m128i_i64[0];
  a1[1].m128i_i32[1] = v17;
  if ( v18 != v19 )
    goto LABEL_35;
LABEL_45:
  v26 = &v18[-a1[3].m128i_i64[1]];
  if ( v26 == (unsigned __int8 *)0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v27 = 1;
  src = (unsigned __int8 *)a1[3].m128i_i64[1];
  if ( v26 )
    v27 = (__int64)&v18[-a1[3].m128i_i64[1]];
  v49 = v17;
  n = (size_t)&v18[-a1[3].m128i_i64[1]];
  v28 = (unsigned __int64)&v26[v27];
  if ( v28 > 0x7FFFFFFFFFFFFFFFLL )
    v28 = 0x7FFFFFFFFFFFFFFFLL;
  v42 = (void *)v28;
  v29 = (unsigned __int8 *)operator new(v28);
  v30 = n;
  v12 = v49;
  v31 = v42;
  v32 = src;
  v33 = v29;
  v29[n] = v49;
  if ( n )
  {
    srca = v42;
    v43 = v32;
    v34 = (unsigned __int8 *)memcpy(v29, v32, n);
    v31 = srca;
    v12 = v49;
    v30 = n;
    v32 = v43;
    v33 = v34;
  }
  v35 = (__int64)&v33[v30 + 1];
  if ( v32 )
  {
    v50 = v33;
    nb = (size_t)&v33[v30 + 1];
    v44 = v31;
    operator delete(v32, v19 - v32);
    v12 = a1[1].m128i_i32[1];
    v33 = v50;
    v35 = nb;
    v31 = v44;
  }
  a1[3].m128i_i64[1] = (__int64)v33;
  a1[4].m128i_i64[0] = v35;
  a1[4].m128i_i64[1] = (__int64)&v33[(_QWORD)v31];
  if ( v12 != 10 )
    goto LABEL_36;
LABEL_55:
  v36 = (unsigned __int8 *)++a1[3].m128i_i64[0];
  --a1[2].m128i_i64[0];
  a1[2].m128i_i64[1] = 0;
  a1[1].m128i_i8[8] = 1;
  if ( v36 )
    a1[3].m128i_i64[0] = (__int64)(v36 - 1);
  v5 = 7;
LABEL_23:
  --a1[4].m128i_i64[0];
LABEL_24:
  endptr[0] = nullptr;
  v13 = __errno_location();
  v14 = (const char *)a1[5].m128i_i64[0];
  *v13 = 0;
  v15 = v13;
  if ( v5 == 5 )
  {
    v37 = __isoc23_strtoull();
    if ( *v15 == 34 )
      goto LABEL_68;
    a1[8].m128i_i64[0] = v37;
  }
  else
  {
    if ( v5 != 6 )
      goto LABEL_26;
    v38 = __isoc23_strtoll();
    if ( *v15 == 34 )
    {
LABEL_68:
      v14 = (const char *)a1[5].m128i_i64[0];
LABEL_26:
      v5 = 7;
      *(double *)&a1[8].m128i_i64[1] = strtod(v14, endptr);
    }
    else
    {
      a1[7].m128i_i64[1] = v38;
    }
  }
  return v5;
}

