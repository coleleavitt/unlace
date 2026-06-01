__int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json<char const(&)[12],char [12],0>(
        _QWORD *a1)
{
  __int64 result; // rax

  *a1 = 0;
  a1[1] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *(_BYTE *)a1 = 3;
  result = operator new(0x20u);
  *(_QWORD *)(result + 8) = 11;
  strcpy((char *)(result + 16), "description");
  *(_QWORD *)result = result + 16;
  a1[1] = result;
  return result;
}

