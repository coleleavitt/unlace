unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::end_object(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // al
  __int64 v8; // rcx
  char *v9; // rax
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // r8
  char *v13; // rsi
  __int64 v14; // rdi
  char v15; // dl
  _BYTE *v16; // rbp
  __int64 v17; // rbp
  _BYTE *v18; // rax
  void *exception; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // [rsp+0h] [rbp-98h]
  int v25; // [rsp+8h] [rbp-90h]
  __int64 v26[4]; // [rsp+10h] [rbp-88h] BYREF
  int v27; // [rsp+30h] [rbp-68h] BYREF
  __int64 v28; // [rsp+38h] [rbp-60h]
  __int64 v29[5]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 16);
  v30 = __readfsqword(0x28u);
  if ( *(_QWORD *)(v1 - 8) )
  {
    v2 = v1 - *(_QWORD *)(a1 + 8);
    LOBYTE(v26[0]) = 1;
    v27 = (v2 >> 3) - 1;
    if ( !*(_QWORD *)(a1 + 144) )
      std::__throw_bad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, int *, __int64 *))(a1 + 152))(a1 + 128, &v27, v26) )
    {
      LOBYTE(v27) = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v8 = v28;
      v9 = *(char **)(*(_QWORD *)(a1 + 16) - 8LL);
      v10 = *v9;
      *v9 = v27;
      v11 = *((_QWORD *)v9 + 1);
      *((_QWORD *)v9 + 1) = v8;
      LOBYTE(v27) = v10;
      v28 = v11;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    }
    v1 = *(_QWORD *)(a1 + 16);
  }
  v3 = *(_DWORD *)(a1 + 56);
  v4 = v1 - 8;
  *(_QWORD *)(a1 + 16) = v1 - 8;
  if ( v3 )
  {
    *(_DWORD *)(a1 + 56) = v3 - 1;
  }
  else
  {
    *(_QWORD *)(a1 + 48) -= 8LL;
    *(_DWORD *)(a1 + 56) = 63;
  }
  if ( *(_QWORD *)(a1 + 8) == v4 )
    return v30 - __readfsqword(0x28u);
  v5 = *(_QWORD *)(v1 - 16);
  if ( !v5 )
    return v30 - __readfsqword(0x28u);
  v6 = *(_BYTE *)v5;
  if ( *(_BYTE *)v5 != 2 )
  {
    if ( v6 != 1 )
      return v30 - __readfsqword(0x28u);
    v12 = *(_QWORD *)(v5 + 8);
    v13 = *(char **)(v4 - 8);
    v14 = *(_QWORD *)(v12 + 24);
    v15 = *v13;
    if ( (char *)v5 == v13 )
    {
      v16 = nullptr;
      if ( v15 == 1 )
      {
        v17 = v12 + 8;
        while ( v14 != v17 )
        {
          if ( *(_BYTE *)(v14 + 64) == 9 )
          {
            v16 = nullptr;
            goto LABEL_22;
          }
          v14 = std::_Rb_tree_increment();
        }
        return v30 - __readfsqword(0x28u);
      }
      goto LABEL_16;
    }
LABEL_51:
    exception = __cxa_allocate_exception(0x20u);
    std::string::basic_string<std::allocator<char>>(
      v29,
      "cannot compare iterators of different containers",
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26[0]);
    nlohmann::json_abi_v3_12_0::detail::invalid_iterator::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
      (__int64)exception,
      212);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::invalid_iterator,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::invalid_iterator::~invalid_iterator);
  }
  v13 = *(char **)(v4 - 8);
  v16 = **(_BYTE ***)(v5 + 8);
  v15 = *v13;
  if ( (char *)v5 != v13 )
    goto LABEL_51;
  if ( v15 != 1 )
  {
    v14 = 0;
LABEL_16:
    if ( v15 == 2 )
    {
      if ( v6 == 2 )
      {
        v18 = *(_BYTE **)(*((_QWORD *)v13 + 1) + 8LL);
        if ( v18 != v16 )
        {
          while ( *v16 != 9 )
          {
            if ( v18 == v16 + 16 )
              return v30 - __readfsqword(0x28u);
            if ( v16[16] == 9 )
            {
              v16 += 16;
              break;
            }
            v16 += 32;
            if ( v18 == v16 )
              return v30 - __readfsqword(0x28u);
          }
LABEL_22:
          v26[1] = v14;
          v26[0] = v5;
          v26[2] = (__int64)v16;
          v26[3] = 0x8000000000000000LL;
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::erase<nlohmann::json_abi_v3_12_0::detail::iter_impl<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,0>();
        }
      }
      else
      {
        while ( v14 )
        {
          if ( *(_BYTE *)(v14 + 64) == 9 )
            goto LABEL_22;
          v14 = std::_Rb_tree_increment();
        }
      }
    }
    else if ( v6 == 2 )
    {
      while ( v16 )
      {
        if ( *v16 == 9 )
          goto LABEL_22;
        if ( v16[16] == 9 )
        {
          v16 += 16;
          goto LABEL_22;
        }
        v16 += 32;
      }
    }
    else
    {
      while ( v14 )
      {
        if ( *(_BYTE *)(v14 + 64) == 9 )
          goto LABEL_22;
        v14 = std::_Rb_tree_increment();
      }
    }
    return v30 - __readfsqword(0x28u);
  }
  while ( v16 )
  {
    if ( *v16 == 9 )
    {
      v14 = 0;
      goto LABEL_22;
    }
    v16 += 16;
  }
  return v30 - __readfsqword(0x28u);
}

