__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::json_sax_dom_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::handle_value<nlohmann::json_abi_v3_12_0::detail::value_t>(
        _QWORD *a1,
        char *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  char v5; // bp
  __int64 v6; // rax
  __int64 v8; // rbp
  char *v9; // rdi
  char v10; // bp
  __int64 v11; // rax
  __int64 v12; // [rsp+18h] [rbp-30h]

  v2 = a1[2];
  if ( a1[1] == v2 )
  {
    v10 = *a2;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::json_value();
    v11 = *a1;
    *(_BYTE *)v11 = v10;
    *(_QWORD *)(v11 + 8) = v12;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    return *a1;
  }
  else
  {
    v4 = *(_QWORD *)(v2 - 8);
    if ( *(_BYTE *)v4 == 2 )
    {
      v8 = *(_QWORD *)(v4 + 8);
      v9 = *(char **)(v8 + 8);
      if ( v9 == *(char **)(v8 + 16) )
      {
        std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<nlohmann::json_abi_v3_12_0::detail::value_t>();
      }
      else
      {
        *v9 = *a2;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::json_value();
        *(_QWORD *)(v8 + 8) += 16LL;
      }
      return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[2] - 8LL) + 8LL) + 8LL) - 16LL;
    }
    else
    {
      v5 = *a2;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::json_value();
      v6 = a1[4];
      *(_BYTE *)v6 = v5;
      *(_QWORD *)(v6 + 8) = v12;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      return a1[4];
    }
  }
}

