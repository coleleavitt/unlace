unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::detail::json_sax_dom_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::handle_value<bool &>(
        __int64 *a1,
        unsigned __int8 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  const __m128i **v7; // rcx
  const __m128i *v8; // rax
  __int8 v9; // dl
  const __m128i *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  const __m128i *v19; // r8
  __m128i *v20; // r9
  __m128i *v21; // r10
  __m128i *v22; // rax
  char v23; // dl
  const __m128i **v24; // rcx
  const __m128i *v25; // rdi
  __m128i *v26; // rdx
  __m128i v27; // xmm0
  __m128i *v28; // rax
  const __m128i **v29; // [rsp+8h] [rbp-50h]
  const __m128i *v30; // [rsp+10h] [rbp-48h]
  __m128i *v31; // [rsp+10h] [rbp-48h]
  const __m128i *v32; // [rsp+18h] [rbp-40h]
  __m128i *v33; // [rsp+18h] [rbp-40h]
  __int64 v34; // [rsp+20h] [rbp-38h]
  unsigned __int64 v35; // [rsp+48h] [rbp-10h]

  v35 = __readfsqword(0x28u);
  v2 = a1[2];
  if ( v2 == a1[1] )
  {
    v11 = *a1;
    v12 = *a2;
    *(_BYTE *)v11 = 4;
    *(_QWORD *)(v11 + 8) = v12;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  else
  {
    v3 = *(_QWORD *)(v2 - 8);
    if ( *(_BYTE *)v3 == 2 )
    {
      v7 = *(const __m128i ***)(v3 + 8);
      v8 = v7[1];
      if ( v8 == v7[2] )
      {
        v13 = (char *)v8 - (char *)*v7;
        v14 = v13 >> 4;
        if ( v13 >> 4 == 0x7FFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v15 = 1;
        if ( v14 )
          v15 = v13 >> 4;
        v34 = v13;
        v32 = *v7;
        v16 = v14 + v15;
        v30 = v7[2];
        v29 = v7;
        if ( v16 > 0x7FFFFFFFFFFFFFFLL )
          v16 = 0x7FFFFFFFFFFFFFFLL;
        v17 = v16;
        v18 = operator new(16 * v16);
        v19 = v30;
        v20 = (__m128i *)v32;
        v21 = (__m128i *)v18;
        v22 = (__m128i *)(v18 + v34);
        v23 = *a2;
        v24 = v29;
        v22->m128i_i64[1] = 0;
        v22->m128i_i64[0] = 4;
        v22->m128i_i8[8] = v23;
        if ( v30 == v32 )
        {
          v22 = v21;
        }
        else
        {
          v25 = v32;
          v26 = v21;
          do
          {
            v27 = _mm_loadu_si128(v25);
            ++v26;
            ++v25;
            v26[-1] = v27;
          }
          while ( v22 != v26 );
        }
        v28 = v22 + 1;
        if ( v32 )
        {
          v33 = v21;
          v31 = v28;
          operator delete(v20, (char *)v19 - (char *)v20);
          v21 = v33;
          v28 = v31;
          v24 = v29;
        }
        *v24 = v21;
        v24[1] = v28;
        v24[2] = &v21[v17];
      }
      else
      {
        v9 = *a2;
        v8->m128i_i64[1] = 0;
        v10 = v8 + 1;
        v10[-1].m128i_i64[0] = 4;
        v10[-1].m128i_i8[8] = v9;
        v7[1] = v10;
      }
    }
    else
    {
      v4 = a1[4];
      v5 = *a2;
      *(_BYTE *)v4 = 4;
      *(_QWORD *)(v4 + 8) = v5;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
  }
  return v35 - __readfsqword(0x28u);
}

