__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
        int *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  _BYTE *v5; // r13
  _BYTE *v6; // rdi
  __int64 v7; // r12
  size_t v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdi
  int *v12; // rbp
  __int64 v13; // r13
  __int64 i; // rax
  unsigned __int64 v15; // rdx
  _BYTE *v16; // rdi
  __int64 v17; // rbx
  _BYTE *v18; // r14
  size_t v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+10h] [rbp-48h]
  unsigned __int64 v27; // [rsp+10h] [rbp-48h]

  v3 = operator new(0x50u);
  v4 = *((_QWORD *)a1 + 5);
  v5 = *((_BYTE **)a1 + 4);
  v6 = (_BYTE *)(v3 + 48);
  v7 = v3;
  *(_QWORD *)(v3 + 32) = v3 + 48;
  v26 = v4;
  if ( v4 <= 0xF )
  {
    v8 = v4 + 1;
    if ( v4 )
    {
LABEL_3:
      memcpy(v6, v5, v8);
      v9 = v26;
      goto LABEL_4;
    }
    goto LABEL_15;
  }
  v25 = std::string::_M_create();
  *(_QWORD *)(v7 + 32) = v25;
  v6 = (_BYTE *)v25;
  *(_QWORD *)(v7 + 48) = v26;
  v8 = v26 + 1;
  if ( !v26 )
  {
LABEL_15:
    *v6 = *v5;
    v9 = v26;
    goto LABEL_4;
  }
  v9 = -1;
  if ( v26 != -1 )
    goto LABEL_3;
LABEL_4:
  *(_QWORD *)(v7 + 40) = v9;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  v10 = *a1;
  v11 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v7 + 24) = 0;
  *(_OWORD *)(v7 + 8) = a2;
  *(_DWORD *)v7 = v10;
  if ( v11 )
    *(_QWORD *)(v7 + 24) = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                             v11,
                             v7);
  v12 = *((int **)a1 + 2);
  v13 = v7;
  if ( v12 )
  {
    for ( i = operator new(0x50u); ; i = operator new(0x50u) )
    {
      v15 = *((_QWORD *)v12 + 5);
      v16 = (_BYTE *)(i + 48);
      v17 = i;
      *(_QWORD *)(i + 32) = i + 48;
      v18 = *((_BYTE **)v12 + 4);
      v27 = v15;
      if ( v15 <= 0xF )
        break;
      v23 = std::string::_M_create();
      *(_QWORD *)(v17 + 32) = v23;
      v16 = (_BYTE *)v23;
      *(_QWORD *)(v17 + 48) = v27;
      v19 = v27 + 1;
      if ( !v27 )
        goto LABEL_16;
      v20 = -1;
      if ( v27 != -1 )
      {
LABEL_10:
        memcpy(v16, v18, v19);
        v20 = v27;
      }
LABEL_11:
      *(_QWORD *)(v17 + 40) = v20;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v21 = *v12;
      *(_QWORD *)(v17 + 24) = 0;
      *(_QWORD *)(v17 + 16) = 0;
      *(_DWORD *)v17 = v21;
      *(_QWORD *)(v13 + 16) = v17;
      *(_QWORD *)(v17 + 8) = v13;
      v22 = *((_QWORD *)v12 + 3);
      if ( v22 )
        *(_QWORD *)(v17 + 24) = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_copy<false,std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_Alloc_node>(
                                  v22,
                                  v17);
      v12 = *((int **)v12 + 2);
      if ( !v12 )
        return v7;
      v13 = v17;
    }
    v19 = v15 + 1;
    if ( v15 )
      goto LABEL_10;
LABEL_16:
    *v16 = *v18;
    v20 = v27;
    goto LABEL_11;
  }
  return v7;
}

