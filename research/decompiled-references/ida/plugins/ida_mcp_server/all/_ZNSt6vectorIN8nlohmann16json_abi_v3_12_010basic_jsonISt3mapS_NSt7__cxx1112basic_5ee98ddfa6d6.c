void __fastcall std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>(
        __int64 a1,
        const __m128i *a2)
{
  const __m128i *v2; // rbx
  __m128i *v3; // r12
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rcx
  const __m128i *v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // [rsp+8h] [rbp-40h]

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
  v10 = _mm_loadu_si128(a2);
  a2->m128i_i8[0] = 0;
  a2->m128i_i64[1] = 0;
  v11 = v9;
  *(__m128i *)(v9 + v4) = v10;
  if ( v2 == v3 )
  {
    v15 = v9;
  }
  else
  {
    v12 = v3;
    v13 = v11;
    do
    {
      v14 = _mm_loadu_si128(v12++);
      v13 += 16;
      *(__m128i *)(v13 - 16) = v14;
    }
    while ( v2 != v12 );
    v15 = v11 + (char *)v2 - (char *)v3;
  }
  v16 = v15 + 16;
  if ( v3 )
  {
    v17 = v11;
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
    v11 = v17;
  }
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = v16;
  *(_QWORD *)(a1 + 16) = v8 + v11;
}

