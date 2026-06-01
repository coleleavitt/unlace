_QWORD *__fastcall std::map<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::operator[](
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r15
  _BYTE *v4; // r12
  size_t v6; // r14
  const void *v7; // rdi
  size_t v8; // rbx
  _QWORD *v9; // rbp
  size_t v10; // rdx
  int v11; // eax
  __int64 v12; // rbx
  size_t v13; // rbx
  size_t v14; // rdx
  signed __int64 v15; // rax
  _QWORD *v17; // rbx
  _BYTE *v18; // r15
  size_t v19; // rdx
  _QWORD *insert_hint_unique_pos; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // [rsp+0h] [rbp-58h]
  size_t v24; // [rsp+10h] [rbp-48h]

  v2 = a1 + 1;
  v3 = (_QWORD *)a1[2];
  v4 = *(_BYTE **)a2;
  v6 = *(_QWORD *)(a2 + 8);
  v23 = a1 + 1;
  if ( !v3 )
  {
    v9 = a1 + 1;
    goto LABEL_24;
  }
  v7 = (const void *)v3[4];
  v8 = v3[5];
  v9 = v2;
  while ( 1 )
  {
    v10 = v8;
    if ( v6 <= v8 )
      v10 = v6;
    if ( !v10 || (v11 = memcmp(v7, v4, v10)) == 0 )
    {
      v12 = v8 - v6;
      if ( v12 > 0x7FFFFFFF )
        goto LABEL_3;
      if ( v12 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v11 = v12;
    }
    if ( v11 < 0 )
      break;
LABEL_3:
    v9 = v3;
    v3 = (_QWORD *)v3[2];
    if ( !v3 )
      goto LABEL_14;
LABEL_4:
    v7 = (const void *)v3[4];
    v8 = v3[5];
  }
  v3 = (_QWORD *)v3[3];
  if ( v3 )
    goto LABEL_4;
LABEL_14:
  if ( v23 == v9 )
    goto LABEL_24;
  v13 = v9[5];
  v14 = v6;
  if ( v13 <= v6 )
    v14 = v9[5];
  if ( v14 && (LODWORD(v15) = memcmp(v4, (const void *)v9[4], v14), (_DWORD)v15) )
  {
LABEL_21:
    if ( (int)v15 < 0 )
      goto LABEL_24;
  }
  else
  {
    v15 = v6 - v13;
    if ( (__int64)(v6 - v13) <= 0x7FFFFFFF )
    {
      if ( v15 >= (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_21;
LABEL_24:
      v17 = (_QWORD *)operator new(0x50u);
      v18 = v17 + 6;
      v17[4] = v17 + 6;
      v24 = v6;
      if ( v6 > 0xF )
      {
        v22 = std::string::_M_create();
        v17[4] = v22;
        v18 = (_BYTE *)v22;
        v17[6] = v6;
        v19 = v6 + 1;
        v6 = -1;
        if ( v24 != -1 )
        {
LABEL_26:
          memcpy(v18, v4, v19);
          v18 = (_BYTE *)v17[4];
          v6 = v24;
        }
      }
      else
      {
        v19 = v6 + 1;
        if ( v6 )
          goto LABEL_26;
        *v18 = *v4;
        v18 = (_BYTE *)v17[4];
      }
      v17[5] = v6;
      v17[8] = 0;
      v17[9] = 0;
      insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                                 a1,
                                 v9,
                                 v18,
                                 v6);
      v9 = insert_hint_unique_pos;
      if ( v21 )
      {
        if ( !insert_hint_unique_pos && v23 != (_QWORD *)v21 )
          std::string::compare(v18, v6, *(const void **)(v21 + 32), *(_QWORD *)(v21 + 40));
        v9 = v17;
        std::_Rb_tree_insert_and_rebalance();
        ++a1[5];
      }
      else
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        std::string::_M_dispose();
        operator delete(v17, 0x50u);
      }
    }
  }
  return v9 + 8;
}

