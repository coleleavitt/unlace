_QWORD *__fastcall nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_token_string(
        _QWORD *a1,
        __int64 a2)
{
  char *v2; // r13
  char *v3; // rbp
  char v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v11; // [rsp+8h] [rbp-70h]
  char v12; // [rsp+17h] [rbp-61h]
  __int64 v13; // [rsp+18h] [rbp-60h]
  char s[8]; // [rsp+2Fh] [rbp-49h] BYREF
  char v15; // [rsp+37h] [rbp-41h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  *a1 = a1 + 2;
  *((_BYTE *)a1 + 16) = 0;
  v2 = *(char **)(a2 + 64);
  v3 = *(char **)(a2 + 56);
  for ( a1[1] = 0; v2 != v3; ++v3 )
  {
    while ( 1 )
    {
      v4 = *v3;
      if ( (unsigned __int8)*v3 <= 0x1Fu )
        break;
      v5 = *a1;
      v6 = a1[1];
      if ( a1 + 2 == (_QWORD *)*a1 )
        v7 = 15;
      else
        v7 = a1[2];
      v8 = v6 + 1;
      if ( v7 < v6 + 1 )
      {
        v13 = v6 + 1;
        v12 = *v3;
        v11 = a1[1];
        std::string::_M_mutate();
        v5 = *a1;
        v8 = v13;
        v4 = v12;
        v6 = v11;
      }
      *(_BYTE *)(v5 + v6) = v4;
      v9 = *a1;
      ++v3;
      a1[1] = v8;
      *(_BYTE *)(v9 + v6 + 1) = 0;
      if ( v2 == v3 )
        return a1;
    }
    v15 = 0;
    *(_QWORD *)s = 0;
    __snprintf_chk();
    if ( 0x7FFFFFFFFFFFFFFELL - a1[1] < strlen(s) )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append();
  }
  return a1;
}

