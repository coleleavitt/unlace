__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::serializer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::hex_bytes(
        __int64 a1,
        unsigned __int8 a2)
{
  *(_BYTE *)(a1 + 18) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 2;
  *(_BYTE *)(a1 + 16) = a0123456789abcd[a2 >> 4];
  *(_BYTE *)(a1 + 17) = a0123456789abcd[a2 & 0xF];
  return a1;
}

