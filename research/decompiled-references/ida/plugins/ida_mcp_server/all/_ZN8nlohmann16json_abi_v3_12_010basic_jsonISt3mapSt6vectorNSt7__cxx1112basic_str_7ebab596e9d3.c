__int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        _QWORD *a1)
{
  __int64 result; // rax

  *a1 = 2;
  a1[1] = 0;
  result = operator new(0x18u);
  *(_QWORD *)(result + 16) = 0;
  a1[1] = result;
  *(_OWORD *)result = 0;
  return result;
}

