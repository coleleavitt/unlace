char __fastcall ZNK8nlohmann16json_abi_v3_12_06detail9iter_implIKNS0_10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS0_14adl_serializerES5_IhSaIhEEvEEEeqISH_LDnEEEbRKT_(
        __int64 a1,
        _QWORD *a2)
{
  char *v2; // rax
  char v3; // al
  void *exception; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+0h] [rbp-58h]
  int v11; // [rsp+8h] [rbp-50h]
  __int64 v12[9]; // [rsp+10h] [rbp-48h] BYREF

  v12[5] = __readfsqword(0x28u);
  v2 = *(char **)a1;
  if ( *(_QWORD *)a1 != *a2 )
  {
    exception = __cxa_allocate_exception(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v12,
      "cannot compare iterators of different containers",
      v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12[0]);
    nlohmann::json_abi_v3_12_0::detail::invalid_iterator::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const*,0>(
      (__int64)exception,
      212);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::invalid_iterator,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::invalid_iterator::~invalid_iterator);
  }
  if ( !v2 )
    return 1;
  v3 = *v2;
  if ( v3 == 1 )
    return *(_QWORD *)(a1 + 8) == a2[1];
  if ( v3 == 2 )
    return a2[2] == *(_QWORD *)(a1 + 16);
  return a2[3] == *(_QWORD *)(a1 + 24);
}

