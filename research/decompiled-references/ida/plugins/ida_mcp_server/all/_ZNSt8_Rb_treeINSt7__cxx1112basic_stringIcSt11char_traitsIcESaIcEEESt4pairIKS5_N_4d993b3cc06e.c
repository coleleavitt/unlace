_QWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
        _QWORD *a1,
        _QWORD *a2,
        const void *a3,
        size_t a4)
{
  size_t v6; // r12
  size_t v7; // rdx
  int v8; // eax
  int v9; // eax
  __int64 v10; // r12
  _QWORD *result; // rax
  signed __int64 v12; // rax
  __int64 v13; // r12
  signed __int64 v14; // rax
  __int64 v15; // r12
  void *s1; // [rsp+0h] [rbp-38h]
  size_t n; // [rsp+8h] [rbp-30h]

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
  v7 = v6;
  if ( a4 <= v6 )
    v7 = a4;
  if ( !v7 )
  {
    v12 = a4 - v6;
    if ( (__int64)(a4 - v6) > 0x7FFFFFFF || v12 >= (__int64)0xFFFFFFFF80000000LL && (int)v12 >= 0 )
      goto LABEL_8;
    goto LABEL_17;
  }
  n = v7;
  s1 = (void *)a2[4];
  v8 = memcmp(a3, s1, v7);
  if ( v8 )
  {
    if ( v8 >= 0 )
      goto LABEL_7;
LABEL_17:
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
  v14 = a4 - v6;
  if ( (__int64)(a4 - v6) <= 0x7FFFFFFF && ((int)v14 < 0 || v14 < (__int64)0xFFFFFFFF80000000LL) )
    goto LABEL_17;
LABEL_7:
  v9 = memcmp(s1, a3, n);
  if ( v9 )
    goto LABEL_11;
LABEL_8:
  v10 = v6 - a4;
  if ( v10 > 0x7FFFFFFF )
    return a2;
  if ( v10 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v9 = v10;
LABEL_11:
    if ( v9 >= 0 )
      return a2;
  }
  if ( (_QWORD *)a1[4] == a2 )
    return nullptr;
  v15 = std::_Rb_tree_increment();
  if ( std::string::compare(a3, a4, *(const void **)(v15 + 32), *(_QWORD *)(v15 + 40)) >= 0 )
    return std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_unique_pos(
             (__int64)a1,
             a3,
             a4);
  result = (_QWORD *)v15;
  if ( !a2[3] )
    return nullptr;
  return result;
}

