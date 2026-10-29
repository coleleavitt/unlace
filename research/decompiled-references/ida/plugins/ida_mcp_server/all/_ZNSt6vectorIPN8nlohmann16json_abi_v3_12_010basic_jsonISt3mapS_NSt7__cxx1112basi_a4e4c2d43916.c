void __fastcall std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,std::allocator<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> * const&>(
        __int64 a1,
        _QWORD *a2)
{
  void *v2; // r14
  signed __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // rbp
  __int64 v9; // r12

  v2 = *(void **)a1;
  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v4 = v3 >> 3;
  if ( v3 >> 3 == 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  if ( v4 )
    v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v6 = v4 + v5;
  if ( v6 > 0xFFFFFFFFFFFFFFFLL )
    v6 = 0xFFFFFFFFFFFFFFFLL;
  v7 = 8 * v6;
  v8 = (char *)operator new(8 * v6);
  *(_QWORD *)&v8[v3] = *a2;
  if ( v3 )
    memcpy(v8, v2, v3);
  v9 = (__int64)&v8[v3 + 8];
  if ( v2 )
    operator delete(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = &v8[v7];
}

