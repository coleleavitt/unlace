unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::end_array(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  char v4; // dl
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rax
  __int64 v9; // rdi
  char *v10; // rax
  char v11; // si
  __int64 v12; // rcx
  int v13; // eax
  char v14; // [rsp+1Fh] [rbp-39h] BYREF
  int v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 16);
  v17 = __readfsqword(0x28u);
  if ( *(_QWORD *)(v1 - 8) )
  {
    v3 = v1 - *(_QWORD *)(a1 + 8);
    v14 = 3;
    v15 = (v3 >> 3) - 1;
    if ( !*(_QWORD *)(a1 + 144) )
      std::__throw_bad_function_call();
    v4 = (*(__int64 (__fastcall **)(__int64, int *, char *))(a1 + 152))(a1 + 128, &v15, &v14);
    if ( !v4 )
    {
      LOBYTE(v15) = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v9 = v16;
      v10 = *(char **)(*(_QWORD *)(a1 + 16) - 8LL);
      v11 = *v10;
      *v10 = v15;
      v12 = *((_QWORD *)v10 + 1);
      *((_QWORD *)v10 + 1) = v9;
      LOBYTE(v15) = v11;
      v16 = v12;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v4 = 0;
    }
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *(_DWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 16) = v5 - 8;
    if ( v6 )
    {
      *(_DWORD *)(a1 + 56) = v6 - 1;
    }
    else
    {
      *(_QWORD *)(a1 + 48) -= 8LL;
      *(_DWORD *)(a1 + 56) = 63;
    }
    if ( !v4 && v5 - 8 != *(_QWORD *)(a1 + 8) )
    {
      v7 = *(_QWORD *)(v5 - 16);
      if ( *(_BYTE *)v7 == 2 )
      {
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8LL) -= 16LL;
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v1 - 8;
    v13 = *(_DWORD *)(a1 + 56);
    if ( v13 )
    {
      *(_DWORD *)(a1 + 56) = v13 - 1;
    }
    else
    {
      *(_QWORD *)(a1 + 48) -= 8LL;
      *(_DWORD *)(a1 + 56) = 63;
    }
  }
  return v17 - __readfsqword(0x28u);
}

