unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        __int64 a13)
{
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  const __m128i *v19; // rbx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  _OWORD *v22; // rdi
  const __m128i *v23; // r13
  __m128i v24; // xmm0
  _OWORD *v26; // [rsp+18h] [rbp-50h] BYREF
  __m128i v27; // [rsp+20h] [rbp-48h]
  unsigned __int64 v28; // [rsp+38h] [rbp-30h]

  v14 = 24 * a3;
  v28 = __readfsqword(0x28u);
  *a1 = 2;
  a1[1] = 0;
  v16 = operator new(0x18u);
  *(_QWORD *)(v16 + 16) = 0;
  *(_OWORD *)v16 = 0;
  if ( v14 < 0 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
      24,
      a2,
      0xAAAAAAAAAAAAAAABLL,
      v15,
      v17,
      v18,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13);
  v19 = (const __m128i *)a2;
  v20 = 0xAAAAAAAAAAAAAABLL * (v14 >> 3);
  if ( 0xAAAAAAAAAAAAAAABLL * (v14 >> 3) )
  {
    v21 = operator new(0xAAAAAAAAAAAAAAB0LL * (v14 >> 3));
    v20 = 0xAAAAAAAAAAAAAABLL * (v14 >> 3);
    v22 = (_OWORD *)v21;
  }
  else
  {
    v22 = nullptr;
  }
  v23 = (const __m128i *)(a2 + v14);
  *(_QWORD *)(v16 + 16) = &v22[v20];
  *(__m128i *)v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
  v26 = v22;
  v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)&v26);
  if ( (const __m128i *)a2 != v23 )
  {
    do
    {
      if ( v19[1].m128i_i64[0] )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v22 = v26;
      }
      else
      {
        v24 = _mm_loadu_si128(v19);
        v19->m128i_i8[0] = 0;
        v19->m128i_i64[1] = 0;
        *v22 = v24;
      }
      ++v22;
      v19 = (const __m128i *)((char *)v19 + 24);
      v26 = v22;
    }
    while ( v23 != v19 );
  }
  *(_QWORD *)(v16 + 8) = v22;
  a1[1] = v16;
  return v28 - __readfsqword(0x28u);
}

