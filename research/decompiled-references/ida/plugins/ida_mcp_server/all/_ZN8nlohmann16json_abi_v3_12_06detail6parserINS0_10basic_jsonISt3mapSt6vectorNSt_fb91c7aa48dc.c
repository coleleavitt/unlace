__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::exception_message(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // r13
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  const char *v8; // r14
  const char *v10; // r15
  size_t v11; // r14
  const char *v12; // r13
  unsigned __int64 v13; // [rsp+8h] [rbp-90h]
  __int64 *v14; // [rsp+10h] [rbp-88h]
  unsigned __int64 v15; // [rsp+18h] [rbp-80h]
  __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  void *v17; // [rsp+30h] [rbp-68h]
  unsigned __int64 v18; // [rsp+38h] [rbp-60h]
  _QWORD v19[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = a3;
  v19[3] = __readfsqword(0x28u);
  *(_QWORD *)a1 = a1 + 16;
  strcpy((char *)(a1 + 16), "syntax error ");
  *(_QWORD *)(a1 + 8) = 13;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v18 = 0;
    v17 = v19;
    LOBYTE(v19[0]) = 0;
    std::string::reserve();
    std::string::_M_append();
    if ( *(_QWORD *)(a4 + 8) > 0x7FFFFFFFFFFFFFFEuLL )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append();
    v6 = v18;
    v7 = 15;
    if ( v17 != v19 )
      v7 = v19[0];
    if ( v7 < v18 + 1 )
    {
      v13 = v18 + 1;
      std::string::_M_mutate();
      *((_BYTE *)v17 + v18) = 32;
      v18 = v13;
    }
    else
    {
      *((_BYTE *)v17 + v18) = 32;
      v18 = v6 + 1;
    }
    *((_BYTE *)v17 + v6 + 1) = 0;
    if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8) < v18 )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append();
    if ( v17 != v19 )
      operator delete(v17, v19[0] + 1LL);
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 8) - 0x7FFFFFFFFFFFFFFDLL) <= 1 )
      std::__throw_length_error("basic_string::append");
  }
  std::string::_M_append();
  if ( *(_DWORD *)(a2 + 32) == 14 )
  {
    nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string();
    LOBYTE(v19[0]) = 0;
    v8 = *(const char **)(a2 + 152);
    v17 = v19;
    v18 = 0;
    strlen(v8);
    std::string::reserve();
    std::string::append();
    std::string::_M_append();
    if ( v15 > 0x7FFFFFFFFFFFFFFELL )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append();
    std::string::push_back();
    if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8) < v18 )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append();
    if ( v17 != v19 )
      operator delete(v17, v19[0] + 1LL);
    if ( v14 != &v16 )
      operator delete(v14, v16 + 1);
  }
  else
  {
    switch ( *(_DWORD *)(a2 + 32) )
    {
      case 0:
        v10 = "<uninitialized>";
        break;
      case 1:
        v10 = "true literal";
        break;
      case 2:
        v10 = "false literal";
        break;
      case 3:
        v10 = "null literal";
        break;
      case 4:
        v10 = "string literal";
        break;
      case 5:
      case 6:
      case 7:
        v10 = "number literal";
        break;
      case 8:
        v10 = "'['";
        break;
      case 9:
        v10 = "'{'";
        break;
      case 0xA:
        v10 = "']'";
        break;
      case 0xB:
        v10 = "'}'";
        break;
      case 0xC:
        v10 = "':'";
        break;
      case 0xD:
        v10 = "','";
        break;
      case 0xF:
        v10 = "end of input";
        break;
      case 0x10:
        v10 = "'[', '{', or a literal";
        break;
      default:
        v10 = "unknown token";
        break;
    }
    LOBYTE(v19[0]) = 0;
    v17 = v19;
    v18 = 0;
    v11 = strlen(v10);
    std::string::reserve();
    std::string::_M_append();
    if ( v11 > 0x7FFFFFFFFFFFFFFELL )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append();
    if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8) < v18 )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append();
    if ( v17 != v19 )
      operator delete(v17, v19[0] + 1LL);
  }
  if ( (_DWORD)v4 )
  {
    switch ( v4 )
    {
      case 1LL:
        v12 = "true literal";
        break;
      case 2LL:
        v12 = "false literal";
        break;
      case 3LL:
        v12 = "null literal";
        break;
      case 4LL:
        v12 = "string literal";
        break;
      case 5LL:
      case 6LL:
      case 7LL:
        v12 = "number literal";
        break;
      case 8LL:
        v12 = "'['";
        break;
      case 9LL:
        v12 = "'{'";
        break;
      case 10LL:
        v12 = "']'";
        break;
      case 11LL:
        v12 = "'}'";
        break;
      case 12LL:
        v12 = "':'";
        break;
      case 13LL:
        v12 = "','";
        break;
      case 14LL:
        v12 = "<parse error>";
        break;
      case 15LL:
        v12 = "end of input";
        break;
      case 16LL:
        v12 = "'[', '{', or a literal";
        break;
      default:
        v12 = "unknown token";
        break;
    }
    v17 = v19;
    v18 = 0;
    LOBYTE(v19[0]) = 0;
    strlen(v12);
    std::string::reserve();
    std::string::append();
    std::string::append();
    if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(a1 + 8) < v18 )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append();
    if ( v17 != v19 )
      operator delete(v17, v19[0] + 1LL);
  }
  return a1;
}

