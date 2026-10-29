__int64 *__fastcall nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::exception_message(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r12
  const char *v9; // r14
  const char *v10; // r12
  int v11; // [rsp+0h] [rbp-88h]
  int v12; // [rsp+8h] [rbp-80h]
  __int64 v13; // [rsp+10h] [rbp-78h]

  v6 = (unsigned int)a3;
  std::string::basic_string<std::allocator<char>>(a1, "syntax error ", a3, a4, a5, a6, v11, v12, v13);
  if ( *(_QWORD *)(a4 + 8) )
  {
    std::string::reserve();
    std::string::append();
    std::string::append();
    std::string::push_back();
    std::string::append();
    std::string::_M_dispose();
  }
  std::string::append();
  if ( *(_DWORD *)(a2 + 32) == 14 )
  {
    nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_token_string();
    strlen(*(const char **)(a2 + 152));
    std::string::reserve();
    std::string::append();
    std::string::append();
    std::string::append();
    std::string::push_back();
    std::string::append();
    std::string::_M_dispose();
    std::string::_M_dispose();
  }
  else
  {
    switch ( *(_DWORD *)(a2 + 32) )
    {
      case 0:
        v9 = "<uninitialized>";
        break;
      case 1:
        v9 = "true literal";
        break;
      case 2:
        v9 = "false literal";
        break;
      case 3:
        v9 = "null literal";
        break;
      case 4:
        v9 = "string literal";
        break;
      case 5:
      case 6:
      case 7:
        v9 = "number literal";
        break;
      case 8:
        v9 = "'['";
        break;
      case 9:
        v9 = "'{'";
        break;
      case 0xA:
        v9 = "']'";
        break;
      case 0xB:
        v9 = "'}'";
        break;
      case 0xC:
        v9 = "':'";
        break;
      case 0xD:
        v9 = "','";
        break;
      case 0xF:
        v9 = "end of input";
        break;
      case 0x10:
        v9 = "'[', '{', or a literal";
        break;
      default:
        v9 = "unknown token";
        break;
    }
    strlen(v9);
    std::string::reserve();
    std::string::append();
    std::string::append();
    std::string::_M_append();
    std::string::_M_dispose();
  }
  if ( (_DWORD)v6 )
  {
    switch ( v6 )
    {
      case 1LL:
        v10 = "true literal";
        break;
      case 2LL:
        v10 = "false literal";
        break;
      case 3LL:
        v10 = "null literal";
        break;
      case 4LL:
        v10 = "string literal";
        break;
      case 5LL:
      case 6LL:
      case 7LL:
        v10 = "number literal";
        break;
      case 8LL:
        v10 = "'['";
        break;
      case 9LL:
        v10 = "'{'";
        break;
      case 10LL:
        v10 = "']'";
        break;
      case 11LL:
        v10 = "'}'";
        break;
      case 12LL:
        v10 = "':'";
        break;
      case 13LL:
        v10 = "','";
        break;
      case 14LL:
        v10 = "<parse error>";
        break;
      case 15LL:
        v10 = "end of input";
        break;
      case 16LL:
        v10 = "'[', '{', or a literal";
        break;
      default:
        v10 = "unknown token";
        break;
    }
    strlen(v10);
    std::string::reserve();
    std::string::append();
    std::string::append();
    std::string::append();
    std::string::_M_dispose();
  }
  return a1;
}

