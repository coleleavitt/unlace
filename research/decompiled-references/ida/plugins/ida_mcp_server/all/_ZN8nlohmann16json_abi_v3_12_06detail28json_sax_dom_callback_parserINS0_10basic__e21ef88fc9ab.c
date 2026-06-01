unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::handle_value<bool &>(
        __int64 *a1,
        __int8 *a2,
        char a3)
{
  int v5; // ecx
  _QWORD *v7; // rdx
  __int8 v9; // al
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  _QWORD *v15; // rdx
  int v16; // ecx
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdx
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int8 v21; // dl
  __int8 v22; // si
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int8 v26; // dl
  __int8 v27; // si
  __int64 v28; // rdx
  __int64 *v29; // [rsp+8h] [rbp-50h]
  char v30; // [rsp+1Fh] [rbp-39h] BYREF
  __m128i v31; // [rsp+20h] [rbp-38h] BYREF
  __m128i v32; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-10h]

  v5 = *((_DWORD *)a1 + 14);
  v33 = __readfsqword(0x28u);
  v7 = (_QWORD *)a1[6];
  if ( v5 )
  {
    if ( (*v7 & (1LL << ((unsigned __int8)v5 - 1))) == 0 )
      return v33 - __readfsqword(0x28u);
  }
  else if ( (__int64)*(v7 - 1) >= 0 )
  {
    return v33 - __readfsqword(0x28u);
  }
  v9 = *a2;
  v31 = (__m128i)4uLL;
  v31.m128i_i8[8] = v9;
  if ( a3 )
    goto LABEL_8;
  v10 = a1[2] - a1[1];
  v30 = 5;
  v32.m128i_i32[0] = v10 >> 3;
  if ( !a1[18] )
    std::__throw_bad_function_call();
  v29 = a1;
  v11 = ((__int64 (__fastcall *)(__int64 *, __m128i *, char *, __m128i *))a1[19])(a1 + 16, &v32, &v30, &v31);
  a1 = v29;
  if ( v11 )
  {
LABEL_8:
    v12 = a1[2];
    if ( v12 == a1[1] )
    {
      v24 = _mm_load_si128(&v31);
      v25 = *a1;
      v31.m128i_i64[1] = 0;
      v26 = v31.m128i_i8[0];
      v31.m128i_i8[0] = 0;
      v32 = v24;
      v27 = *(_BYTE *)v25;
      *(_BYTE *)v25 = v26;
      v28 = *(_QWORD *)(v25 + 8);
      *(_QWORD *)(v25 + 8) = v24.m128i_i64[1];
      v32.m128i_i64[1] = v28;
      v32.m128i_i8[0] = v27;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    else
    {
      v13 = *(_QWORD *)(v12 - 8);
      if ( v13 )
      {
        if ( *(_BYTE *)v13 == 2 )
        {
          std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::emplace_back<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>(
            *(__m128i ***)(v13 + 8),
            &v31);
        }
        else
        {
          v14 = *((_DWORD *)a1 + 24);
          v15 = (_QWORD *)a1[11];
          if ( v14 )
          {
            v16 = v14 - 1;
            v17 = *v15 & (1LL << v16);
          }
          else
          {
            v18 = v15 - 1;
            v17 = *v18 & 0x8000000000000000LL;
            v16 = 63;
            a1[11] = (__int64)v18;
          }
          *((_DWORD *)a1 + 24) = v16;
          if ( v17 )
          {
            v19 = _mm_load_si128(&v31);
            v20 = a1[14];
            v31.m128i_i64[1] = 0;
            v21 = v31.m128i_i8[0];
            v31.m128i_i8[0] = 0;
            v32 = v19;
            v22 = *(_BYTE *)v20;
            *(_BYTE *)v20 = v21;
            v23 = *(_QWORD *)(v20 + 8);
            *(_QWORD *)(v20 + 8) = v19.m128i_i64[1];
            v32.m128i_i64[1] = v23;
            v32.m128i_i8[0] = v22;
            nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
          }
        }
      }
    }
  }
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v33 - __readfsqword(0x28u);
}

