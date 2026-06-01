__int64 __fastcall ida_mcp::tools::debugger::`anonymous namespace'::get_debug_status(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebp
  __int64 v8; // rax
  unsigned __int8 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  const char *v16; // r14
  _QWORD *v17; // rax
  _QWORD *v18; // rbp
  _QWORD *v19; // r13
  size_t v20; // rax
  unsigned __int64 v21; // rcx
  char *v22; // rbp
  const char *v23; // rdx
  unsigned int v24; // ebp
  unsigned int v25; // ebp
  unsigned int v26; // esi
  __int64 v27; // rdi
  unsigned __int8 *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbp
  unsigned __int8 *v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rbp
  __int64 v42; // rax
  __int64 v44; // [rsp+0h] [rbp-58h]
  __int64 v45; // [rsp+0h] [rbp-58h]
  __int64 v46; // [rsp+0h] [rbp-58h]
  __int64 v47; // [rsp+8h] [rbp-50h]
  __int64 v48; // [rsp+8h] [rbp-50h]
  __int64 v49; // [rsp+8h] [rbp-50h]
  __int64 v50; // [rsp+8h] [rbp-50h]
  __int64 v51; // [rsp+10h] [rbp-48h]
  __int64 v52; // [rsp+10h] [rbp-48h]
  __int64 v53; // [rsp+10h] [rbp-48h]
  __int64 v54; // [rsp+18h] [rbp-40h]
  __int64 v55; // [rsp+18h] [rbp-40h]
  __int64 v56; // [rsp+18h] [rbp-40h]

  v3 = is_debugger_on();
  v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(1004, a2, v4, &callui, v5, v6);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v8 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v8 = 4;
  *(_QWORD *)(v8 + 8) = v3;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v9 = (unsigned __int8 *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v10 = *((_QWORD *)v9 + 1);
  v11 = *v9;
  *((_QWORD *)v9 + 1) = v7;
  *v9 = 5;
  v47 = v10;
  LOBYTE(v44) = v11;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v48 = (unsigned __int8)callui(1087, v11, &callui, v12, v13, v14, v44, v47, v51, v54);
  v15 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  *(_BYTE *)v15 = 4;
  *(_QWORD *)(v15 + 8) = v48;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v7 )
  {
    v16 = "Running";
    if ( v7 != 1 )
    {
      v16 = "Suspended";
      if ( v7 != -1 )
        v16 = "Unknown";
    }
  }
  else
  {
    v16 = "No Process";
  }
  v45 = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  v17 = (_QWORD *)operator new(0x20u);
  v18 = v17 + 2;
  v19 = v17;
  *v17 = v17 + 2;
  v20 = strlen(v16);
  if ( (unsigned int)v20 < 8 )
  {
    if ( (v20 & 4) != 0 )
    {
      *((_DWORD *)v19 + 4) = *(_DWORD *)v16;
      *(_DWORD *)((char *)v18 + (unsigned int)v20 - 4) = *(_DWORD *)&v16[(unsigned int)v20 - 4];
    }
    else if ( (_DWORD)v20 )
    {
      *((_BYTE *)v19 + 16) = *v16;
      if ( (v20 & 2) != 0 )
        *(_WORD *)((char *)v18 + (unsigned int)v20 - 2) = *(_WORD *)&v16[(unsigned int)v20 - 2];
    }
  }
  else
  {
    v19[2] = *(_QWORD *)v16;
    *(_QWORD *)((char *)v18 + (unsigned int)v20 - 8) = *(_QWORD *)&v16[(unsigned int)v20 - 8];
    v21 = (unsigned __int64)(v19 + 3) & 0xFFFFFFFFFFFFFFF8LL;
    v22 = (char *)v18 - v21;
    v23 = (const char *)(v16 - v22);
    v24 = (v20 + (_DWORD)v22) & 0xFFFFFFF8;
    if ( v24 >= 8 )
    {
      v25 = v24 & 0xFFFFFFF8;
      v26 = 0;
      do
      {
        v27 = v26;
        v26 += 8;
        *(_QWORD *)(v21 + v27) = *(_QWORD *)&v23[v27];
      }
      while ( v26 < v25 );
    }
  }
  v19[1] = v20;
  *((_BYTE *)v19 + v20 + 16) = 0;
  v28 = (unsigned __int8 *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
  v29 = *v28;
  v30 = *((_QWORD *)v28 + 1);
  *v28 = 3;
  *((_QWORD *)v28 + 1) = v19;
  LOBYTE(v45) = v29;
  v49 = v30;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v3 )
  {
    v34 = (int)callui(1013, v29, v31, &callui, v32, v33, v45, v49, v52, v55);
    v35 = (unsigned __int8 *)nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    v36 = *v35;
    v37 = *((_QWORD *)v35 + 1);
    *v35 = 5;
    *((_QWORD *)v35 + 1) = v34;
    LOBYTE(v46) = v36;
    v50 = v37;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v41 = (int)callui(1067, v36, v38, &callui, v39, v40, v46, v50, v53, v56);
    v42 = nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>();
    *(_BYTE *)v42 = 5;
    *(_QWORD *)(v42 + 8) = v41;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  return a1;
}

