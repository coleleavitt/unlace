unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::end_object(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rcx
  char *v5; // rdx
  char v6; // al
  __int64 v8; // rcx
  __int64 v9; // rax
  __int8 v10; // si
  __int64 v11; // rdx
  __int64 v12; // rsi
  char *v13; // rbp
  __int64 v14; // rdi
  char v15; // cl
  const __m128i *v16; // rbx
  __int64 v17; // rax
  void *exception; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbp
  _QWORD *v24; // rbx
  _QWORD *v25; // rdi
  __int64 v26; // r14
  const __m128i *v27; // rax
  const __m128i *v28; // rbp
  const __m128i *v29; // rbx
  __m128i v30; // xmm0
  __int8 v31; // al
  __int8 v32; // si
  __int64 v33; // rax
  char *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  nlohmann::json_abi_v3_12_0::detail::type_error *v39; // r14
  int v40; // [rsp+0h] [rbp-78h]
  int v41; // [rsp+8h] [rbp-70h]
  __int64 v42; // [rsp+10h] [rbp-68h]
  char v43; // [rsp+1Fh] [rbp-59h] BYREF
  __m128i v44; // [rsp+20h] [rbp-58h] BYREF
  __int64 v45[5]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 16);
  v46 = __readfsqword(0x28u);
  if ( *(_QWORD *)(v1 - 8) )
  {
    v2 = v1 - *(_QWORD *)(a1 + 8);
    v43 = 1;
    v44.m128i_i32[0] = (v2 >> 3) - 1;
    if ( !*(_QWORD *)(a1 + 144) )
      std::__throw_bad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __m128i *, char *))(a1 + 152))(a1 + 128, &v44, &v43) )
    {
      v44.m128i_i8[0] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v8 = v44.m128i_i64[1];
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) - 8LL);
      v10 = *(_BYTE *)v9;
      *(_BYTE *)v9 = v44.m128i_i8[0];
      v11 = *(_QWORD *)(v9 + 8);
      *(_QWORD *)(v9 + 8) = v8;
      v44.m128i_i8[0] = v10;
      v44.m128i_i64[1] = v11;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    v1 = *(_QWORD *)(a1 + 16);
  }
  v3 = *(_DWORD *)(a1 + 56);
  v4 = v1 - 8;
  *(_QWORD *)(a1 + 16) = v1 - 8;
  if ( v3 )
  {
    *(_DWORD *)(a1 + 56) = v3 - 1;
  }
  else
  {
    *(_QWORD *)(a1 + 48) -= 8LL;
    *(_DWORD *)(a1 + 56) = 63;
  }
  if ( *(_QWORD *)(a1 + 8) == v4 )
    return v46 - __readfsqword(0x28u);
  v5 = *(char **)(v1 - 16);
  if ( !v5 )
    return v46 - __readfsqword(0x28u);
  v6 = *v5;
  if ( *v5 != 2 )
  {
    if ( v6 != 1 )
      return v46 - __readfsqword(0x28u);
    v12 = *((_QWORD *)v5 + 1);
    v13 = *(char **)(v4 - 8);
    v14 = *(_QWORD *)(v12 + 24);
    v15 = *v13;
    if ( v5 == v13 )
    {
      if ( v15 == 1 )
      {
        while ( v12 + 8 != v14 )
        {
          if ( *(_BYTE *)(v14 + 64) == 9 )
            goto LABEL_34;
          v14 = std::_Rb_tree_increment();
        }
        return v46 - __readfsqword(0x28u);
      }
      v16 = nullptr;
      goto LABEL_17;
    }
LABEL_58:
    exception = __cxa_allocate_exception(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v45,
      "cannot compare iterators of different containers",
      v35,
      v36,
      v37,
      v38,
      v40,
      v41,
      v42);
    nlohmann::json_abi_v3_12_0::detail::invalid_iterator::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
      (__int64)exception,
      212);
    goto LABEL_25;
  }
  v13 = *(char **)(v4 - 8);
  v16 = **((const __m128i ***)v5 + 1);
  v15 = *v13;
  if ( v5 != v13 )
    goto LABEL_58;
  v14 = 0;
  if ( v15 == 1 )
  {
    while ( v16 )
    {
      ++v16;
      if ( v16[-1].m128i_i8[0] == 9 )
      {
LABEL_34:
        v23 = *((_QWORD *)v13 + 1);
        v24 = (_QWORD *)std::_Rb_tree_rebalance_for_erase();
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v25 = (_QWORD *)v24[4];
        if ( v25 != v24 + 6 )
          operator delete(v25, v24[6] + 1LL);
        operator delete(v24, 0x50u);
        --*(_QWORD *)(v23 + 40);
        return v46 - __readfsqword(0x28u);
      }
    }
    return v46 - __readfsqword(0x28u);
  }
LABEL_17:
  if ( v15 != 2 )
  {
    if ( v6 == 2 )
    {
      while ( v16 )
      {
        if ( v16->m128i_i8[0] == 9 || v16[1].m128i_i8[0] == 9 )
          goto LABEL_23;
        v16 += 2;
      }
      return v46 - __readfsqword(0x28u);
    }
    while ( 1 )
    {
      if ( !v14 )
        return v46 - __readfsqword(0x28u);
      if ( *(_BYTE *)(v14 + 64) == 9 )
        break;
      LOBYTE(v41) = v15;
      v17 = std::_Rb_tree_increment();
      v15 = v41;
      v14 = v17;
    }
LABEL_23:
    if ( (unsigned __int8)(v15 - 3) > 5u )
    {
      v39 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      switch ( *v13 )
      {
        case 0:
          v34 = "null";
          break;
        case 1:
          v34 = "object";
          break;
        case 2:
          v34 = (char *)"array";
          break;
        case 3:
          v34 = "string";
          break;
        case 4:
          v34 = "boolean";
          break;
        case 8:
          v34 = "binary";
          break;
        case 9:
          v34 = "discarded";
          break;
        default:
          v34 = "number";
          break;
      }
      v44.m128i_i64[0] = (__int64)v34;
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[25],char const*>();
      nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
        v39,
        307);
      std::string::_M_dispose();
      __cxa_throw(
        v39,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    exception = __cxa_allocate_exception(0x20u);
    std::string::basic_string<std::allocator<char>>(v45, "iterator out of range", v19, v20, v21, v22, v40, v41, v42);
    nlohmann::json_abi_v3_12_0::detail::invalid_iterator::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
      (__int64)exception,
      205);
LABEL_25:
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::invalid_iterator,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::invalid_iterator::~invalid_iterator);
  }
  if ( v6 == 2 )
  {
    v26 = *((_QWORD *)v13 + 1);
    v27 = *(const __m128i **)(v26 + 8);
    if ( v27 != v16 )
    {
      while ( v16->m128i_i8[0] != 9 )
      {
        if ( &v16[1] == v27 )
          return v46 - __readfsqword(0x28u);
        if ( v16[1].m128i_i8[0] == 9 )
        {
          ++v16;
          break;
        }
        v16 += 2;
        if ( v27 == v16 )
          return v46 - __readfsqword(0x28u);
      }
LABEL_51:
      v28 = *(const __m128i **)(v26 + 8);
      v29 = v16 + 1;
      if ( v28 != v29 )
      {
        do
        {
          v30 = _mm_loadu_si128(v29);
          v29->m128i_i64[1] = 0;
          ++v29;
          v44 = v30;
          v31 = v29[-1].m128i_i8[0];
          v32 = v29[-2].m128i_i8[0];
          v29[-1].m128i_i8[0] = 0;
          v29[-2].m128i_i8[0] = v31;
          v33 = v29[-2].m128i_i64[1];
          v29[-2].m128i_i64[1] = v30.m128i_i64[1];
          v44.m128i_i64[1] = v33;
          v44.m128i_i8[0] = v32;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        }
        while ( v28 != v29 );
        v29 = *(const __m128i **)(v26 + 8);
      }
      *(_QWORD *)(v26 + 8) = v29 - 1;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
  }
  else
  {
    while ( v14 )
    {
      if ( *(_BYTE *)(v14 + 64) == 9 )
      {
        v26 = *((_QWORD *)v13 + 1);
        goto LABEL_51;
      }
      v14 = std::_Rb_tree_increment();
    }
  }
  return v46 - __readfsqword(0x28u);
}

