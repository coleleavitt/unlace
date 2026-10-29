__int64 __fastcall ida_mcp::tools::database::handle_get_auto_state(__int64 a1)
{
  __int64 auto_state; // rax
  int v2; // ebx
  const char *v3; // r14
  unsigned __int8 v4; // al
  __int64 *v5; // r12
  size_t v6; // rax
  _QWORD *v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v15; // rax
  char *v16; // rdx
  const char *v17; // r14
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int8 v23; // [rsp+7h] [rbp-71h]
  size_t v24; // [rsp+18h] [rbp-60h]

  auto_state = get_auto_state();
  v2 = auto_state;
  if ( (int)auto_state > 60 )
  {
    v3 = "unknown";
    if ( (_DWORD)auto_state == 200 )
      v3 = "final";
  }
  else if ( (int)auto_state < 0 )
  {
LABEL_4:
    v3 = "unknown";
  }
  else
  {
    switch ( auto_state )
    {
      case 0LL:
        v3 = "none";
        break;
      case 10LL:
        v3 = "analyzing";
        break;
      case 20LL:
        v3 = "analyzing_code";
        break;
      case 25LL:
        v3 = "weak_analysis";
        break;
      case 30LL:
        v3 = "processing";
        break;
      case 40LL:
        v3 = "used";
        break;
      case 50LL:
        v3 = "type_analysis";
        break;
      case 60LL:
        v3 = "library_function";
        break;
      default:
        goto LABEL_4;
    }
  }
  v4 = is_auto_enabled();
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v23 = v4;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v5 = (__int64 *)operator new(0x20u);
  *v5 = (__int64)(v5 + 2);
  v6 = strlen(v3);
  v7 = v5 + 2;
  v24 = v6;
  v8 = v6;
  if ( v6 == 16 )
  {
    v22 = std::string::_M_create();
    *v5 = v22;
    v7 = (_QWORD *)v22;
    v8 = 16;
    v5[2] = 16;
  }
  if ( v8 >= 8 )
  {
    *v7 = *(_QWORD *)v3;
    *(_QWORD *)((char *)v7 + v8 - 8) = *(_QWORD *)&v3[v8 - 8];
    v15 = (unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v16 = (char *)v7 - v15;
    v17 = (const char *)(v3 - v16);
    v18 = ((_DWORD)v16 + v8) & 0xFFFFFFF8;
    if ( v18 >= 8 )
    {
      v19 = v18 & 0xFFFFFFF8;
      v20 = 0;
      do
      {
        v21 = v20;
        v20 += 8;
        *(_QWORD *)(v15 + v21) = *(_QWORD *)&v17[v21];
      }
      while ( v20 < v19 );
    }
  }
  else if ( (v8 & 4) != 0 )
  {
    *(_DWORD *)v7 = *(_DWORD *)v3;
    *(_DWORD *)((char *)v7 + v8 - 4) = *(_DWORD *)&v3[v8 - 4];
  }
  else if ( v8 )
  {
    *(_BYTE *)v7 = *v3;
    if ( (v8 & 2) != 0 )
      *(_WORD *)((char *)v7 + v8 - 2) = *(_WORD *)&v3[v8 - 2];
  }
  v9 = *v5;
  v5[1] = v24;
  *(_BYTE *)(v9 + v24) = 0;
  v10 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v10 = 3;
  *(_QWORD *)(v10 + 8) = v5;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v11 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v11 = 5;
  *(_QWORD *)(v11 + 8) = v2;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v12 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v12 = 4;
  *(_QWORD *)(v12 + 8) = v23;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v13 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v13 = 4;
  *(_QWORD *)(v13 + 8) = (v2 == 200) | (unsigned __int8)(v2 == 0);
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  return a1;
}

