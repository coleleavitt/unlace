unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::detail::json_sax_dom_callback_parser<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<__gnu_cxx::__normal_iterator<char const*,std::string>>>::key(
        __int64 a1,
        __int64 a2)
{
  _BYTE *v3; // r15
  unsigned __int64 v4; // r14
  _QWORD *v5; // rax
  _BYTE *v6; // rdi
  __int64 *v7; // r13
  size_t v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // al
  __int64 *v12; // rsi
  int v13; // ecx
  char v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rax
  char v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  char v20; // si
  __int64 v21; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v26; // [rsp+8h] [rbp-70h]
  char v27[8]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v28; // [rsp+18h] [rbp-60h]
  _QWORD *v29; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+28h] [rbp-50h]
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v25 = 0;
  v26 = nullptr;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v3 = *(_BYTE **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  LOBYTE(v25) = 3;
  v5 = (_QWORD *)operator new(0x20u);
  v6 = v5 + 2;
  v29 = (_QWORD *)v4;
  v7 = v5;
  *v5 = v5 + 2;
  if ( v4 <= 0xF )
  {
    v8 = v4 + 1;
    if ( v4 )
    {
LABEL_3:
      memcpy(v6, v3, v8);
      v9 = (__int64)v29;
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  v23 = std::string::_M_create();
  *v7 = v23;
  v6 = (_BYTE *)v23;
  v24 = v29;
  v7[2] = (__int64)v29;
  v8 = (size_t)v24 + 1;
  if ( !v24 )
  {
LABEL_13:
    *v6 = *v3;
    v9 = (__int64)v29;
    goto LABEL_4;
  }
  v9 = -1;
  if ( v8 )
    goto LABEL_3;
LABEL_4:
  v7[1] = v9;
  v10 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8);
  v26 = v7;
  v27[0] = 4;
  LODWORD(v29) = v10 >> 3;
  if ( !*(_QWORD *)(a1 + 144) )
    std::__throw_bad_function_call();
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD **, char *, __int64 *))(a1 + 152))(a1 + 128, &v29, v27, &v25);
  v12 = *(__int64 **)(a1 + 88);
  v13 = *(_DWORD *)(a1 + 96);
  v14 = v11;
  if ( v12 == *(__int64 **)(a1 + 104) )
  {
    LODWORD(v30) = *(_DWORD *)(a1 + 96);
    v29 = v12;
    std::vector<bool>::_M_insert_aux();
    if ( !v14 )
      goto LABEL_12;
  }
  else
  {
    if ( v13 == 63 )
    {
      *(_DWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 88) = v12 + 1;
    }
    else
    {
      *(_DWORD *)(a1 + 96) = v13 + 1;
    }
    v15 = *v12;
    v16 = 1LL << v13;
    if ( !v14 )
    {
      *v12 = v15 & ~v16;
      goto LABEL_12;
    }
    *v12 = v15 | v16;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) - 8LL) )
  {
    v27[0] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v17 = v27[0];
    v18 = std::map<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::operator[]();
    v19 = v28;
    v20 = *(_BYTE *)v18;
    *(_BYTE *)v18 = v17;
    v21 = *(_QWORD *)(v18 + 8);
    *(_QWORD *)(v18 + 8) = v19;
    *(_QWORD *)(a1 + 112) = v18;
    v28 = v21;
    v27[0] = v20;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
LABEL_12:
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return v31 - __readfsqword(0x28u);
}

