__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan_string(
        __int64 a1)
{
  _BYTE *v1; // rax
  _BYTE *v2; // rdx
  int v3; // ebp
  _BYTE *v4; // rax
  void *v5; // rdx
  _BYTE *v6; // rbp
  int v8; // eax
  int codepoint; // eax
  int v10; // eax
  void *v11; // [rsp+0h] [rbp-38h]
  _BYTE *v12; // [rsp+0h] [rbp-38h]

  v1 = *(_BYTE **)(a1 + 80);
  *(_QWORD *)(a1 + 88) = 0;
  *v1 = 0;
  v2 = *(_BYTE **)(a1 + 56);
  if ( v2 != *(_BYTE **)(a1 + 64) )
    *(_QWORD *)(a1 + 64) = v2;
  *(_QWORD *)(a1 + 152) = -1;
  v3 = *(_DWORD *)(a1 + 20);
  if ( *(_BYTE **)(a1 + 72) == v2 )
  {
    v11 = v2;
    v4 = (_BYTE *)operator new(1u);
    v5 = v11;
    *v4 = v3;
    v6 = v4 + 1;
    if ( v11 )
    {
      v12 = v4;
      operator delete(v5, 0);
      v4 = v12;
    }
    *(_QWORD *)(a1 + 56) = v4;
    *(_QWORD *)(a1 + 64) = v6;
    *(_QWORD *)(a1 + 72) = v6;
  }
  else
  {
    *v2 = v3;
    ++*(_QWORD *)(a1 + 64);
  }
  while ( 2 )
  {
    switch ( (unsigned int)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get() )
    {
      case 0xFFFFFFFF:
        *(_QWORD *)(a1 + 112) = "invalid string: missing closing quote";
        return 14;
      case 0u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
        return 14;
      case 1u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
        return 14;
      case 2u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
        return 14;
      case 3u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
        return 14;
      case 4u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
        return 14;
      case 5u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
        return 14;
      case 6u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
        return 14;
      case 7u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
        return 14;
      case 8u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
        return 14;
      case 9u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
        return 14;
      case 0xAu:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
        return 14;
      case 0xBu:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
        return 14;
      case 0xCu:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
        return 14;
      case 0xDu:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
        return 14;
      case 0xEu:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
        return 14;
      case 0xFu:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
        return 14;
      case 0x10u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
        return 14;
      case 0x11u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
        return 14;
      case 0x12u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
        return 14;
      case 0x13u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
        return 14;
      case 0x14u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
        return 14;
      case 0x15u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
        return 14;
      case 0x16u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
        return 14;
      case 0x17u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
        return 14;
      case 0x18u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
        return 14;
      case 0x19u:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
        return 14;
      case 0x1Au:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
        return 14;
      case 0x1Bu:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
        return 14;
      case 0x1Cu:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
        return 14;
      case 0x1Du:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
        return 14;
      case 0x1Eu:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
        return 14;
      case 0x1Fu:
        *(_QWORD *)(a1 + 112) = "invalid string: control character U+001F (US) must be escaped to \\u001F";
        return 14;
      case 0x20u:
      case 0x21u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
      case 0x40u:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x46u:
      case 0x47u:
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
      case 0x4Cu:
      case 0x4Du:
      case 0x4Eu:
      case 0x4Fu:
      case 0x50u:
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Du:
      case 0x5Eu:
      case 0x5Fu:
      case 0x60u:
      case 0x61u:
      case 0x62u:
      case 0x63u:
      case 0x64u:
      case 0x65u:
      case 0x66u:
      case 0x67u:
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
      case 0x70u:
      case 0x71u:
      case 0x72u:
      case 0x73u:
      case 0x74u:
      case 0x75u:
      case 0x76u:
      case 0x77u:
      case 0x78u:
      case 0x79u:
      case 0x7Au:
      case 0x7Bu:
      case 0x7Cu:
      case 0x7Du:
      case 0x7Eu:
      case 0x7Fu:
        goto LABEL_64;
      case 0x22u:
        return 4;
      case 0x5Cu:
        v8 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get();
        if ( v8 > 117 )
          goto LABEL_21;
        if ( v8 > 91 )
        {
          switch ( v8 )
          {
            case '\\':
            case 'b':
            case 'f':
            case 'n':
            case 'r':
            case 't':
              goto LABEL_64;
            case 'u':
              codepoint = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_codepoint();
              if ( codepoint == -1 )
                goto LABEL_74;
              if ( (unsigned int)(codepoint - 55296) <= 0x3FF )
              {
                if ( (unsigned int)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get() != 92
                  || (unsigned int)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get() != 117 )
                {
LABEL_75:
                  *(_QWORD *)(a1 + 112) = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
                  return 14;
                }
                v10 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get_codepoint();
                if ( v10 == -1 )
                {
LABEL_74:
                  *(_QWORD *)(a1 + 112) = "invalid string: '\\u' must be followed by 4 hex digits";
                  return 14;
                }
                if ( (unsigned int)(v10 - 56320) > 0x3FF )
                  goto LABEL_75;
LABEL_70:
                std::string::push_back();
                std::string::push_back();
                std::string::push_back();
                std::string::push_back();
                continue;
              }
              if ( (unsigned int)(codepoint - 56320) <= 0x3FF )
              {
                *(_QWORD *)(a1 + 112) = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
                return 14;
              }
              if ( codepoint <= 127 )
                goto LABEL_64;
              if ( codepoint <= 2047 )
              {
                std::string::push_back();
                std::string::push_back();
                continue;
              }
              if ( codepoint > 0xFFFF )
                goto LABEL_70;
              std::string::push_back();
              std::string::push_back();
              std::string::push_back();
              break;
            default:
              goto LABEL_21;
          }
          continue;
        }
        if ( v8 == 34 || v8 == 47 )
        {
LABEL_64:
          std::string::push_back();
          continue;
        }
LABEL_21:
        *(_QWORD *)(a1 + 112) = "invalid string: forbidden character after backslash";
        return 14;
      case 0xC2u:
      case 0xC3u:
      case 0xC4u:
      case 0xC5u:
      case 0xC6u:
      case 0xC7u:
      case 0xC8u:
      case 0xC9u:
      case 0xCAu:
      case 0xCBu:
      case 0xCCu:
      case 0xCDu:
      case 0xCEu:
      case 0xCFu:
      case 0xD0u:
      case 0xD1u:
      case 0xD2u:
      case 0xD3u:
      case 0xD4u:
      case 0xD5u:
      case 0xD6u:
      case 0xD7u:
      case 0xD8u:
      case 0xD9u:
      case 0xDAu:
      case 0xDBu:
      case 0xDCu:
      case 0xDDu:
      case 0xDEu:
      case 0xDFu:
        if ( !(unsigned __int8)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::next_byte_in_range() )
          return 14;
        continue;
      case 0xE0u:
      case 0xE1u:
      case 0xE2u:
      case 0xE3u:
      case 0xE4u:
      case 0xE5u:
      case 0xE6u:
      case 0xE7u:
      case 0xE8u:
      case 0xE9u:
      case 0xEAu:
      case 0xEBu:
      case 0xECu:
      case 0xEDu:
      case 0xEEu:
      case 0xEFu:
        if ( !(unsigned __int8)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::next_byte_in_range() )
          return 14;
        continue;
      case 0xF0u:
      case 0xF1u:
      case 0xF2u:
      case 0xF3u:
      case 0xF4u:
        if ( !(unsigned __int8)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::next_byte_in_range() )
          return 14;
        continue;
      default:
        *(_QWORD *)(a1 + 112) = "invalid string: ill-formed UTF-8 byte";
        return 14;
    }
  }
}

