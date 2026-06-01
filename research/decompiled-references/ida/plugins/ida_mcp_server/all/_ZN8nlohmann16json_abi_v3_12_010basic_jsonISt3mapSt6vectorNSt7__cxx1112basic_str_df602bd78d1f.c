__int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::erase<nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,0>(
        __int64 a1,
        char *a2,
        char **a3)
{
  char v4; // al
  const __m128i *v6; // r12
  __int64 v7; // r14
  const __m128i *v8; // rbx
  char *v9; // r13
  __int64 v10; // xmm0_8^8
  __int8 v11; // al
  __int64 v12; // r12
  __int64 v13; // r14
  void *v14; // rbx
  __int64 v15; // rdi
  const char *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  void *exception; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  nlohmann::json_abi_v3_12_0::detail::type_error *v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // [rsp+0h] [rbp-108h]
  int v36; // [rsp+0h] [rbp-108h]
  int v37; // [rsp+8h] [rbp-100h]
  int v38; // [rsp+8h] [rbp-100h]
  __int64 v39; // [rsp+10h] [rbp-F8h]
  __int64 v40; // [rsp+10h] [rbp-F8h]
  char *v41; // [rsp+40h] [rbp-C8h]
  __int64 v42[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v43[13]; // [rsp+A0h] [rbp-68h] BYREF

  v43[5] = __readfsqword(0x28u);
  if ( *a3 != a2 )
  {
    exception = __cxa_allocate_exception(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v43,
      "iterator does not fit current value",
      v26,
      v27,
      v28,
      v29,
      v35,
      v37,
      v39);
    nlohmann::json_abi_v3_12_0::detail::invalid_iterator::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
      (__int64)exception,
      202);
    goto LABEL_22;
  }
  *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  v4 = *a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = (unsigned __int64)a2;
  if ( v4 == 1 )
  {
    v12 = *((_QWORD *)a2 + 1);
    *(_QWORD *)(a1 + 8) = v12 + 8;
    v13 = std::_Rb_tree_increment();
    v14 = (void *)std::_Rb_tree_rebalance_for_erase();
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    std::string::_M_dispose();
    operator delete(v14, 0x50u);
    --*(_QWORD *)(v12 + 40);
    *(_QWORD *)(a1 + 8) = v13;
    return a1;
  }
  if ( v4 != 2 )
  {
    *(_QWORD *)(a1 + 24) = 1;
    if ( (unsigned __int8)(v4 - 3) > 5u )
    {
      v30 = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
      switch ( *a2 )
      {
        case 0:
          v16 = "null";
          break;
        case 1:
          v16 = "object";
          break;
        case 2:
          v16 = "array";
          break;
        case 3:
          v16 = "string";
          break;
        case 4:
          v16 = "boolean";
          break;
        case 8:
          v16 = "binary";
          break;
        case 9:
          v16 = "discarded";
          break;
        default:
          v16 = "number";
          break;
      }
      strlen(v16);
      std::string::reserve();
      std::string::append();
      std::string::append();
      std::string::basic_string<std::allocator<char>>(v42, "", v17, v18, v19, v20, v35, v37, v39);
      std::string::basic_string<std::allocator<char>>(v43, "type_error", v21, v22, v23, v24, v36, v38, v40);
      nlohmann::json_abi_v3_12_0::detail::exception::name();
      nlohmann::json_abi_v3_12_0::detail::concat<std::string,std::string,std::string,std::string const&>();
      std::string::_M_dispose();
      std::string::_M_dispose();
      std::string::_M_dispose();
      nlohmann::json_abi_v3_12_0::detail::type_error::type_error(v30, 307, v41);
      std::string::_M_dispose();
      std::string::_M_dispose();
      __cxa_throw(
        v30,
        (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
        (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
    }
    if ( !a3[3] )
    {
      if ( v4 == 3 )
      {
        std::string::_M_dispose();
        operator delete(*((void **)a2 + 1), 0x20u);
        *((_QWORD *)a2 + 1) = 0;
      }
      else if ( v4 == 8 )
      {
        v15 = *((_QWORD *)a2 + 1);
        if ( *(_QWORD *)v15 )
        {
          operator delete(*(void **)v15, *(_QWORD *)(v15 + 16) - *(_QWORD *)v15);
          v15 = *((_QWORD *)a2 + 1);
        }
        operator delete((void *)v15, 0x28u);
        *((_QWORD *)a2 + 1) = 0;
      }
      *a2 = 0;
      return a1;
    }
    exception = __cxa_allocate_exception(0x20u);
    std::string::basic_string<std::allocator<char>>(v43, "iterator out of range", v31, v32, v33, v34, v35, v37, v39);
    nlohmann::json_abi_v3_12_0::detail::invalid_iterator::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
      (__int64)exception,
      205);
LABEL_22:
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::invalid_iterator,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::invalid_iterator::~invalid_iterator);
  }
  v6 = *(const __m128i **)(*((_QWORD *)a2 + 1) + 8LL);
  v7 = *((_QWORD *)a2 + 1);
  *(_QWORD *)(a1 + 16) = v6;
  v8 = (const __m128i *)(a3[2] + 16);
  v9 = a3[2];
  if ( v6 != v8 )
  {
    do
    {
      v10 = _mm_loadu_si128(v8).m128i_i64[1];
      v11 = v8->m128i_i8[0];
      v8->m128i_i8[0] = 0;
      v8->m128i_i64[1] = 0;
      ++v8;
      v8[-2].m128i_i8[0] = v11;
      v8[-2].m128i_i64[1] = v10;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    while ( v6 != v8 );
    v8 = *(const __m128i **)(v7 + 8);
  }
  *(_QWORD *)(v7 + 8) = v8 - 1;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *(_QWORD *)(a1 + 16) = v9;
  return a1;
}

