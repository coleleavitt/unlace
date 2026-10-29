_QWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
        _QWORD *a1,
        _QWORD *a2,
        const void *a3,
        size_t a4)
{
  size_t v6; // r8
  const void *v7; // r9
  size_t v8; // rdx
  signed __int64 v9; // rax
  bool v10; // sf
  _QWORD *result; // rax
  const void *v12; // [rsp+0h] [rbp-38h]
  __int64 v13; // [rsp+0h] [rbp-38h]
  __int64 v14; // [rsp+0h] [rbp-38h]
  size_t v15; // [rsp+8h] [rbp-30h]

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] && std::string::compare(*(const void **)(a1[4] + 32LL), *(_QWORD *)(a1[4] + 40LL), a3, a4) < 0 )
      return nullptr;
    return std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_unique_pos(
             (__int64)a1,
             a3,
             a4);
  }
  v6 = a2[5];
  v7 = (const void *)a2[4];
  v8 = v6;
  if ( a4 <= v6 )
    v8 = a4;
  if ( !v8
    || (v15 = a2[5], v12 = (const void *)a2[4], LODWORD(v9) = memcmp(a3, v12, v8), v7 = v12, v6 = v15, !(_DWORD)v9) )
  {
    v9 = a4 - v6;
    if ( (__int64)(a4 - v6) > 0x7FFFFFFF )
      goto LABEL_9;
    if ( v9 < (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_14;
  }
  if ( (int)v9 < 0 )
  {
LABEL_14:
    result = a2;
    if ( (_QWORD *)a1[3] == a2 )
      return result;
    v13 = std::_Rb_tree_decrement();
    if ( std::string::compare(*(const void **)(v13 + 32), *(_QWORD *)(v13 + 40), a3, a4) < 0 )
    {
      result = a2;
      if ( !*(_QWORD *)(v13 + 24) )
        return nullptr;
      return result;
    }
    return std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_unique_pos(
             (__int64)a1,
             a3,
             a4);
  }
LABEL_9:
  v10 = std::string::compare(v7, v6, a3, a4) < 0;
  result = a2;
  if ( !v10 )
    return result;
  if ( (_QWORD *)a1[4] == a2 )
    return nullptr;
  v14 = std::_Rb_tree_increment();
  if ( std::string::compare(a3, a4, *(const void **)(v14 + 32), *(_QWORD *)(v14 + 40)) >= 0 )
    return std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_unique_pos(
             (__int64)a1,
             a3,
             a4);
  result = (_QWORD *)v14;
  if ( !a2[3] )
    return nullptr;
  return result;
}

