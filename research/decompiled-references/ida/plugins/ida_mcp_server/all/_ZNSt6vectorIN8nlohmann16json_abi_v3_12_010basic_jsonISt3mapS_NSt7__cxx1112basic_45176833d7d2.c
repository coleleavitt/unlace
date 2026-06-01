void __fastcall std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::emplace_back<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>(
        __m128i **a1,
        const __m128i *a2)
{
  __m128i *v2; // rdx
  __m128i v3; // xmm0
  __m128i *v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __m128i *v11; // r9
  __int64 v12; // r11
  __m128i v13; // xmm0
  __int64 *v14; // r8
  const __m128i *v15; // rax
  __int64 v16; // rcx
  __m128i v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rdx
  const __m128i *v20; // [rsp+0h] [rbp-40h]
  __int64 v21; // [rsp+0h] [rbp-40h]
  __m128i *v22; // [rsp+8h] [rbp-38h]
  __int64 v23; // [rsp+8h] [rbp-38h]
  __m128i *v24; // [rsp+10h] [rbp-30h]

  v2 = a1[1];
  if ( v2 == a1[2] )
  {
    v5 = (char *)v2 - (char *)*a1;
    v6 = v5 >> 4;
    if ( v5 >> 4 == 0x7FFFFFFFFFFFFFFLL )
      std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::emplace_back<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    v7 = 1;
    if ( v6 )
      v7 = v5 >> 4;
    v24 = *a1;
    v8 = v6 + v7;
    v22 = a1[2];
    v20 = a1[1];
    if ( v8 > 0x7FFFFFFFFFFFFFFLL )
      v8 = 0x7FFFFFFFFFFFFFFLL;
    v9 = 16 * v8;
    v10 = operator new(16 * v8);
    v11 = v22;
    v12 = v10;
    v13 = _mm_loadu_si128(a2);
    v14 = (__int64 *)a1;
    a2->m128i_i8[0] = 0;
    a2->m128i_i64[1] = 0;
    *(__m128i *)(v10 + v5) = v13;
    if ( v20 == v24 )
    {
      v18 = v10;
    }
    else
    {
      v15 = v24;
      v16 = v12;
      do
      {
        v17 = _mm_loadu_si128(v15++);
        v16 += 16;
        *(__m128i *)(v16 - 16) = v17;
      }
      while ( v20 != v15 );
      v18 = v12 + (char *)v20 - (char *)v24;
    }
    v19 = v18 + 16;
    if ( v24 )
    {
      v23 = v12;
      v21 = v19;
      operator delete(v24, (char *)v11 - (char *)v24);
      v14 = (__int64 *)a1;
      v12 = v23;
      v19 = v21;
    }
    *v14 = v12;
    v14[1] = v19;
    v14[2] = v9 + v12;
  }
  else
  {
    v3 = _mm_loadu_si128(a2);
    v4 = v2 + 1;
    a2->m128i_i8[0] = 0;
    a2->m128i_i64[1] = 0;
    v4[-1] = v3;
    a1[1] = v4;
  }
}

