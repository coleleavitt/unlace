__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned long,0>(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  _WORD *v9; // rcx
  unsigned __int64 v10; // r8
  __int16 v11; // ax
  char v12; // al
  __int64 (__fastcall *v13)(__int64, __int64, unsigned __int64); // rcx
  _QWORD *(__fastcall ***v15)(__int64, char); // rdi
  _QWORD *(__fastcall *v16)(__int64, char); // rax

  if ( !a2 )
  {
    v15 = (_QWORD *(__fastcall ***)(__int64, char))*a1;
    v16 = **v15;
    if ( v16 == nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_character )
      return std::string::push_back();
    else
      return ((__int64 (__fastcall *)(_QWORD *(__fastcall ***)(__int64, char), __int64, __int64, __int64, __int64, __int64 *))v16)(
               v15,
               48,
               a3,
               a4,
               a5,
               a1);
  }
  v6 = a1 + 2;
  if ( a2 <= 9 )
  {
    v9 = (_WORD *)((char *)a1 + 17);
    v8 = 1;
LABEL_13:
    v12 = a2 + 48;
    goto LABEL_14;
  }
  v7 = a2;
  LODWORD(v8) = 1;
  while ( 1 )
  {
    if ( v7 <= 0x63 )
    {
      v8 = (unsigned int)(v8 + 1);
      goto LABEL_10;
    }
    if ( v7 <= 0x3E7 )
    {
      v8 = (unsigned int)(v8 + 2);
      goto LABEL_10;
    }
    if ( v7 <= 0x270F )
      break;
    v8 = (unsigned int)(v8 + 4);
    if ( v7 <= 0x1869F )
      goto LABEL_10;
    v7 /= 0x2710u;
  }
  v8 = (unsigned int)(v8 + 3);
LABEL_10:
  v9 = (_WORD *)((char *)v6 + v8);
  if ( a2 > 0x63 )
  {
    do
    {
      --v9;
      v10 = a2;
      v11 = *(_WORD *)&nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned long,0>(unsigned long)::digits_to_99[2 * (a2 % 0x64)];
      a2 /= 0x64u;
      *v9 = v11;
    }
    while ( v10 > 0x270F );
    if ( v10 <= 0x3E7 )
      goto LABEL_13;
  }
  v12 = nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned long,0>(unsigned long)::digits_to_99[2 * a2 + 1];
  *((_BYTE *)v9 - 2) = nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::dump_integer<unsigned long,0>(unsigned long)::digits_to_99[2 * a2];
LABEL_14:
  *((_BYTE *)v9 - 1) = v12;
  v13 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)*a1 + 8LL);
  if ( v13 != nlohmann::json_abi_v3_12_0::detail::output_string_adapter<char,std::string>::write_characters )
    return v13(*a1, (__int64)v6, v8);
  if ( 0x7FFFFFFFFFFFFFFELL - *(_QWORD *)(*(_QWORD *)(*a1 + 8) + 8LL) < v8 )
    std::__throw_length_error("basic_string::append");
  return std::string::_M_append();
}

