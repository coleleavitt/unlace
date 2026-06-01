void __fastcall __noreturn nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // r12

  std::_UninitDestroyGuard<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,void>::~_UninitDestroyGuard();
  if ( *(_QWORD *)v1 )
    operator delete(*(void **)v1, *(_QWORD *)(v1 + 16) - *(_QWORD *)v1);
  operator delete((void *)v1, 0x18u);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  _Unwind_Resume(v0);
}

