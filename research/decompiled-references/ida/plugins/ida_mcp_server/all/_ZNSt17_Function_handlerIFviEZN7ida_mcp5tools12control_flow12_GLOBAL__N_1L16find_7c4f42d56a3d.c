__int64 __fastcall std::_Function_handler<void ()(int),ida_mcp::tools::control_flow::`anonymous namespace'::find_block_paths(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(int)#1}>::_M_manager(
        __m128i **a1,
        const __m128i **a2,
        int a3)
{
  __m128i *v4; // rdi
  __m128i *v5; // rax
  __int64 v6; // rdx
  const __m128i *v7; // [rsp+0h] [rbp-18h]

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      *a1 = (__m128i *)*a2;
      return 0;
    }
    else
    {
      if ( a3 == 2 )
      {
        v7 = *a2;
        v5 = (__m128i *)operator new(0x38u);
        *v5 = _mm_loadu_si128(v7);
        v5[1] = _mm_loadu_si128(v7 + 1);
        v5[2] = _mm_loadu_si128(v7 + 2);
        v6 = v7[3].m128i_i64[0];
        *a1 = v5;
        v5[3].m128i_i64[0] = v6;
      }
      else if ( a3 == 3 )
      {
        v4 = *a1;
        if ( v4 )
          operator delete(v4, 0x38u);
      }
      return 0;
    }
  }
  else
  {
    *a1 = (__m128i *)&`typeinfo for'ida_mcp::tools::control_flow::`anonymous namespace'::find_block_paths(nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> const&)::{lambda(int)#1};
    return 0;
  }
}

