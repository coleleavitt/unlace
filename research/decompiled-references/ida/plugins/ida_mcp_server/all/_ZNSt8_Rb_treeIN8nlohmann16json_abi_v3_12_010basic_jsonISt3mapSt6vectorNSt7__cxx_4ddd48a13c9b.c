__int64 __fastcall std::_Rb_tree<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,std::_Identity<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::less<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::allocator<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>::equal_range(
        __int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // rbp
  __int64 i; // r14
  char v7; // al
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rcx

  v1 = a1 + 8;
  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return v1;
  while ( 1 )
  {
    while ( (unsigned __int8)nlohmann::json_abi_v3_12_0::operator<() )
    {
      v2 = *(_QWORD *)(v2 + 24);
      if ( !v2 )
        return v1;
    }
    v3 = nlohmann::json_abi_v3_12_0::operator<();
    v4 = *(_QWORD *)(v2 + 16);
    if ( !v3 )
      break;
    v1 = v2;
    v2 = *(_QWORD *)(v2 + 16);
    if ( !v4 )
      return v1;
  }
  for ( i = *(_QWORD *)(v2 + 24); i; i = *(_QWORD *)(i + 24) )
  {
    while ( 1 )
    {
      v7 = nlohmann::json_abi_v3_12_0::operator<();
      v8 = *(_QWORD *)(i + 16);
      if ( !v7 )
        break;
      i = *(_QWORD *)(i + 16);
      if ( !v8 )
        goto LABEL_13;
    }
  }
LABEL_13:
  while ( v4 )
  {
    while ( 1 )
    {
      v9 = nlohmann::json_abi_v3_12_0::operator<();
      v10 = *(_QWORD *)(v4 + 16);
      if ( v9 )
        break;
      v2 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v10 )
        return v2;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  return v2;
}

