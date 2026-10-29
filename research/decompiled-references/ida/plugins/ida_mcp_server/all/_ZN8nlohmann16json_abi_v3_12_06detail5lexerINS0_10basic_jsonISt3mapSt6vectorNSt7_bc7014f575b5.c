__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::scan_number(
        __int64 a1)
{
  _BYTE *v1; // rax
  _BYTE *v3; // rdx
  int v4; // esi
  unsigned int v5; // r12d
  int v6; // eax
  int v7; // eax
  const char *v8; // rdx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  int *v13; // rax
  const char *v14; // rdi
  int *v15; // rbp
  int v16; // eax
  _BYTE *v17; // rbp
  _BYTE *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  void *v22; // [rsp+0h] [rbp-38h]
  char *endptr[5]; // [rsp+10h] [rbp-28h] BYREF

  v1 = *(_BYTE **)(a1 + 80);
  endptr[1] = (char *)__readfsqword(0x28u);
  *(_QWORD *)(a1 + 88) = 0;
  *v1 = 0;
  v3 = *(_BYTE **)(a1 + 56);
  if ( v3 != *(_BYTE **)(a1 + 64) )
    *(_QWORD *)(a1 + 64) = v3;
  *(_QWORD *)(a1 + 152) = -1;
  if ( v3 == *(_BYTE **)(a1 + 72) )
  {
    v22 = v3;
    v4 = *(_DWORD *)(a1 + 20);
    v17 = (_BYTE *)operator new(1u);
    v18 = v17 + 1;
    *v17 = v4;
    if ( v22 )
    {
      operator delete(v22, 0);
      v4 = *(_DWORD *)(a1 + 20);
    }
    *(_QWORD *)(a1 + 56) = v17;
    *(_QWORD *)(a1 + 64) = v18;
    *(_QWORD *)(a1 + 72) = v18;
  }
  else
  {
    *v3 = *(_DWORD *)(a1 + 20);
    v4 = *(_DWORD *)(a1 + 20);
    ++*(_QWORD *)(a1 + 64);
  }
  if ( v4 == 48 )
  {
    v5 = 5;
    std::string::push_back();
  }
  else
  {
    if ( v4 <= 48 )
    {
      if ( v4 == 45 )
        std::string::push_back();
    }
    else if ( (unsigned int)(v4 - 49) <= 8 )
    {
      v5 = 5;
      std::string::push_back();
      while ( 1 )
      {
        v6 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get();
        if ( v6 > 57 )
          break;
LABEL_10:
        if ( v6 <= 47 )
          goto LABEL_11;
        std::string::push_back();
      }
LABEL_20:
      if ( (v6 & 0xFFFFFFDF) != 0x45 )
        goto LABEL_21;
      goto LABEL_31;
    }
    v10 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get();
    if ( v10 != 48 )
    {
      if ( (unsigned int)(v10 - 49) > 8 )
      {
        v8 = "invalid number; expected digit after '-'";
        goto LABEL_13;
      }
      v5 = 6;
      std::string::push_back();
      v6 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get();
      if ( v6 <= 57 )
        goto LABEL_10;
      goto LABEL_20;
    }
    v5 = 6;
    std::string::push_back();
  }
  v6 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get();
  if ( (v6 & 0xFFFFFFDF) != 0x45 )
  {
LABEL_11:
    if ( v6 != 46 )
      goto LABEL_21;
    std::string::push_back();
    *(_QWORD *)(a1 + 152) = *(_QWORD *)(a1 + 88) - 1LL;
    v7 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get();
    v8 = "invalid number; expected digit after '.'";
    if ( (unsigned int)(v7 - 48) > 9 )
      goto LABEL_13;
    while ( 1 )
    {
      std::string::push_back();
      v21 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get();
      if ( v21 == 69 )
        break;
      if ( v21 > 69 )
      {
        if ( v21 != 101 )
          goto LABEL_35;
        break;
      }
      if ( (unsigned int)(v21 - 48) > 9 )
        goto LABEL_35;
    }
  }
LABEL_31:
  std::string::push_back();
  v16 = nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get();
  if ( v16 != 45 )
  {
    if ( v16 > 45 )
    {
      if ( (unsigned int)(v16 - 48) <= 9 )
      {
        do
LABEL_34:
          std::string::push_back();
        while ( (unsigned int)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get()
              - 48 <= 9 );
LABEL_35:
        v5 = 7;
LABEL_21:
        v11 = *(_QWORD *)(a1 + 40);
        --*(_QWORD *)(a1 + 32);
        *(_BYTE *)(a1 + 24) = 1;
        if ( v11 )
        {
          *(_QWORD *)(a1 + 40) = v11 - 1;
        }
        else
        {
          v12 = *(_QWORD *)(a1 + 48);
          if ( v12 )
            *(_QWORD *)(a1 + 48) = v12 - 1;
        }
        if ( *(_DWORD *)(a1 + 20) != -1 )
          --*(_QWORD *)(a1 + 64);
        endptr[0] = nullptr;
        v13 = __errno_location();
        v14 = *(const char **)(a1 + 80);
        *v13 = 0;
        v15 = v13;
        if ( v5 == 5 )
        {
          v19 = __isoc23_strtoull();
          if ( *v15 != 34 )
          {
            *(_QWORD *)(a1 + 128) = v19;
            return v5;
          }
        }
        else
        {
          if ( v5 != 6 )
          {
LABEL_28:
            v5 = 7;
            *(double *)(a1 + 136) = strtod(v14, endptr);
            return v5;
          }
          v20 = __isoc23_strtoll();
          if ( *v15 != 34 )
          {
            *(_QWORD *)(a1 + 120) = v20;
            return v5;
          }
        }
        v14 = *(const char **)(a1 + 80);
        goto LABEL_28;
      }
      goto LABEL_38;
    }
    if ( v16 != 43 )
    {
LABEL_38:
      v8 = "invalid number; expected '+', '-', or digit after exponent";
      goto LABEL_13;
    }
  }
  std::string::push_back();
  if ( (unsigned int)nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::get()
     - 48 <= 9 )
    goto LABEL_34;
  v8 = "invalid number; expected digit after exponent sign";
LABEL_13:
  *(_QWORD *)(a1 + 112) = v8;
  return 14;
}

