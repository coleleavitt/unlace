unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::dump(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        int a6)
{
  __m128i *v8; // rbx
  _WORD v10[253]; // [rsp+70h] [rbp-268h] BYREF
  char v11; // [rsp+26Ah] [rbp-6Eh]
  void *v12; // [rsp+270h] [rbp-68h]
  _QWORD v13[2]; // [rsp+280h] [rbp-58h] BYREF
  int v14; // [rsp+290h] [rbp-48h]
  unsigned __int64 v15; // [rsp+298h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v8 = (__m128i *)operator new(0x20u);
  v8->m128i_i64[1] = 0x100000001LL;
  v8->m128i_i64[0] = (__int64)off_444E78;
  v8[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_444DD8, (__m128i)a1);
  if ( _libc_single_threaded )
    v8->m128i_i32[2] = 2;
  else
    _InterlockedAdd(&v8->m128i_i32[2], 1u);
  localeconv();
  memset(v10, 0, sizeof(v10));
  v11 = a4;
  v12 = v13;
  std::string::_M_construct();
  v14 = a6;
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
  nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump();
  if ( v12 != v13 )
    operator delete(v12, v13[0] + 1LL);
  if ( v8 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
  return a1;
}

