_QWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE ***a3)
{
  __int64 v4; // rax
  _BYTE *v5; // r13
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rax
  _BYTE *v8; // r15
  size_t v9; // rdx
  _BYTE *v10; // rbp
  size_t v11; // rcx
  _QWORD *insert_hint_unique_pos; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r14
  _QWORD *v15; // rbp
  _BYTE *v17; // rdi
  __int64 v18; // rax
  size_t v19; // r15
  size_t v20; // rdx
  size_t v21; // [rsp+8h] [rbp-50h]
  size_t v22; // [rsp+10h] [rbp-48h]

  v4 = operator new(0x50u);
  v5 = (_BYTE *)(v4 + 48);
  v6 = (_QWORD *)v4;
  *(_QWORD *)(v4 + 32) = v4 + 48;
  v7 = (unsigned __int64)(*a3)[1];
  v8 = **a3;
  v22 = v7;
  if ( v7 <= 0xF )
  {
    v9 = v7 + 1;
    v10 = v5;
    if ( v7 )
    {
LABEL_3:
      memcpy(v10, v8, v9);
      v10 = (_BYTE *)v6[4];
      v11 = v22;
      goto LABEL_4;
    }
    goto LABEL_8;
  }
  v18 = std::string::_M_create();
  v6[4] = v18;
  v10 = (_BYTE *)v18;
  v6[6] = v22;
  v9 = v22 + 1;
  if ( !v22 )
  {
LABEL_8:
    *v10 = *v8;
    v10 = (_BYTE *)v6[4];
    v11 = v22;
    goto LABEL_4;
  }
  v11 = -1;
  if ( v22 != -1 )
    goto LABEL_3;
LABEL_4:
  v6[5] = v11;
  v6[8] = 0;
  v6[9] = 0;
  v21 = v11;
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                             a1,
                             a2,
                             v10,
                             v11);
  v14 = v13;
  if ( v13 )
  {
    if ( !insert_hint_unique_pos && v13 != a1 + 1 )
    {
      v19 = v13[5];
      v20 = v21;
      if ( v19 <= v21 )
        v20 = v19;
      if ( v20 )
        memcmp(v10, (const void *)v14[4], v20);
    }
    v15 = v6;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
  }
  else
  {
    v15 = insert_hint_unique_pos;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v17 = (_BYTE *)v6[4];
    if ( v5 != v17 )
      operator delete(v17, v6[6] + 1LL);
    operator delete(v6, 0x50u);
  }
  return v15;
}

