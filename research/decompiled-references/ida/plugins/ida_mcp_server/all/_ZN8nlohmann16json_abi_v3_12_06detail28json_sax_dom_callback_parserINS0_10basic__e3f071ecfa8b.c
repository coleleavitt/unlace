__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::handle_value<nlohmann::json_abi_v3_12_0::detail::value_t>(
        __int64 *a1,
        __int8 *a2,
        char a3)
{
  int v3; // ecx
  _QWORD *v5; // rdx
  unsigned int v6; // esi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  _QWORD *v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int8 v18; // dl
  __int8 v19; // si
  __int64 v20; // rdx
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int8 v23; // dl
  __int8 v24; // si
  __int64 v25; // rdx
  char v26; // [rsp+0h] [rbp-68h]
  char v27; // [rsp+1Fh] [rbp-49h] BYREF
  __m128i v28; // [rsp+20h] [rbp-48h] BYREF
  __m128i v29; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-20h]

  v3 = *((_DWORD *)a1 + 14);
  v30 = __readfsqword(0x28u);
  v5 = (_QWORD *)a1[6];
  if ( !v3 )
  {
    if ( (__int64)*(v5 - 1) >= 0 )
      return 0;
    goto LABEL_6;
  }
  if ( (*v5 & (1LL << ((unsigned __int8)v3 - 1))) != 0 )
  {
LABEL_6:
    v26 = a3;
    v28.m128i_i8[0] = *a2;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::json_value();
    if ( !v26 )
    {
      v8 = a1[2] - a1[1];
      v27 = 5;
      v29.m128i_i32[0] = v8 >> 3;
      if ( !a1[18] )
        std::__throw_bad_function_call();
      if ( !((unsigned __int8 (__fastcall *)(__int64 *, __m128i *, char *, __m128i *))a1[19])(a1 + 16, &v29, &v27, &v28) )
        goto LABEL_15;
    }
    v9 = a1[2];
    if ( v9 == a1[1] )
    {
      v21 = _mm_load_si128(&v28);
      v22 = *a1;
      v28.m128i_i64[1] = 0;
      v23 = v28.m128i_i8[0];
      v28.m128i_i8[0] = 0;
      v29 = v21;
      v24 = *(_BYTE *)v22;
      *(_BYTE *)v22 = v23;
      v25 = *(_QWORD *)(v22 + 8);
      *(_QWORD *)(v22 + 8) = v21.m128i_i64[1];
      v29.m128i_i8[0] = v24;
      v29.m128i_i64[1] = v25;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v6 = 1;
      goto LABEL_16;
    }
    v10 = *(_QWORD *)(v9 - 8);
    if ( !v10 )
      goto LABEL_15;
    if ( *(_BYTE *)v10 == 2 )
    {
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::emplace_back<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>(
        *(__m128i ***)(v10 + 8),
        &v28);
      v6 = 1;
      goto LABEL_16;
    }
    v11 = *((_DWORD *)a1 + 24);
    v12 = (_QWORD *)a1[11];
    if ( v11 )
    {
      v13 = v11 - 1;
      v14 = *v12 & (1LL << v13);
    }
    else
    {
      v15 = v12 - 1;
      v14 = *v15 & 0x8000000000000000LL;
      v13 = 63;
      a1[11] = (__int64)v15;
    }
    *((_DWORD *)a1 + 24) = v13;
    if ( v14 )
    {
      v16 = _mm_load_si128(&v28);
      v17 = a1[14];
      v28.m128i_i64[1] = 0;
      v18 = v28.m128i_i8[0];
      v28.m128i_i8[0] = 0;
      v29 = v16;
      v19 = *(_BYTE *)v17;
      *(_BYTE *)v17 = v18;
      v20 = *(_QWORD *)(v17 + 8);
      *(_QWORD *)(v17 + 8) = v16.m128i_i64[1];
      v29.m128i_i8[0] = v19;
      v29.m128i_i64[1] = v20;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v6 = 1;
    }
    else
    {
LABEL_15:
      v6 = 0;
    }
LABEL_16:
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    return v6;
  }
  return 0;
}

