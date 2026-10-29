void __fastcall std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::detail::value_t>(
        __int64 a1,
        _BYTE *a2)
{
  const __m128i *v2; // rbx
  __m128i *v3; // r13
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // r12
  const __m128i *v10; // rax
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __int64 v13; // rbx
  __int64 v14; // rbx

  v2 = *(const __m128i **)(a1 + 8);
  v3 = *(__m128i **)a1;
  v4 = (__int64)v2->m128i_i64 - *(_QWORD *)a1;
  v5 = v4 >> 4;
  if ( v4 >> 4 == 0x7FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v7 = v5 + v6;
  if ( v7 > 0x7FFFFFFFFFFFFFFLL )
    v7 = 0x7FFFFFFFFFFFFFFLL;
  v8 = 16 * v7;
  v9 = operator new(v8);
  *(_BYTE *)(v9 + v4) = *a2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::json_value();
  if ( v2 == v3 )
  {
    v13 = v9;
  }
  else
  {
    v10 = v3;
    v11 = v9;
    do
    {
      v12 = _mm_loadu_si128(v10++);
      v11 += 16;
      *(__m128i *)(v11 - 16) = v12;
    }
    while ( v2 != v10 );
    v13 = v9 + (char *)v2 - (char *)v3;
  }
  v14 = v13 + 16;
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)(a1 + 16) = v8 + v9;
}

