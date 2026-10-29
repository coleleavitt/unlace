__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned char,0>(
        __int64 a1,
        unsigned __int8 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  char v7; // dl
  _QWORD *v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, unsigned __int64); // rcx
  _QWORD *(__fastcall ***v11)(__int64, char); // rdi
  _QWORD *(__fastcall *v12)(__int64, char); // rax

  if ( !a2 )
  {
    v11 = *(_QWORD *(__fastcall ****)(__int64, char))a1;
    v12 = **v11;
    if ( v12 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
      return std::string::push_back();
    else
      return (__int64)v12((__int64)v11, 48);
  }
  v2 = a1 + 16;
  v3 = a2;
  if ( a2 <= 9u )
  {
    LOBYTE(v5) = a2;
    v6 = 1;
    v4 = a1 + 17;
    goto LABEL_5;
  }
  if ( a2 > 0x63uLL )
  {
    v4 = a1 + 17;
    v5 = v3 / 0x64;
    *(_WORD *)(a1 + 17) = *(_WORD *)&nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned char,0>(unsigned char)::digits_to_99[2 * (v3 % 0x64)];
    v6 = 3;
LABEL_5:
    v7 = v5 + 48;
    goto LABEL_6;
  }
  v4 = a1 + 18;
  v7 = nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned char,0>(unsigned char)::digits_to_99[2 * v3 + 1];
  *(_BYTE *)(a1 + 16) = nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned char,0>(unsigned char)::digits_to_99[2 * v3];
  v6 = 2;
LABEL_6:
  *(_BYTE *)(v4 - 1) = v7;
  v8 = *(_QWORD **)a1;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*v8 + 8LL);
  if ( v9 != nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
    return v9((__int64)v8, v2, v6);
  if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(v8[1] + 8LL) < v6 )
    std::__throw_length_error("basic_string::append");
  return std::string::_M_append();
}

