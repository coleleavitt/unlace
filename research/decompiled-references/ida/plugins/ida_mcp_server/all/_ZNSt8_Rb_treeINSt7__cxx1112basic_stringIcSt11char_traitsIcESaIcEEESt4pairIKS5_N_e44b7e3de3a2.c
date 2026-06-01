_QWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
        _QWORD *a1,
        _QWORD *a2,
        const void *a3,
        size_t a4)
{
  size_t v6; // r12
  size_t v7; // rdx
  int v8; // eax
  int v9; // eax
  __int64 v10; // r12
  _QWORD *result; // rax
  signed __int64 v12; // rax
  __int64 v13; // rax
  size_t v14; // r12
  _QWORD *v15; // rcx
  size_t v16; // rdx
  int v17; // eax
  __int64 v18; // r12
  __int64 v19; // r12
  size_t v20; // rbp
  size_t v21; // rdx
  int v22; // eax
  __int64 v23; // rbp
  __int64 v24; // rax
  size_t v25; // rcx
  _QWORD *v26; // r12
  size_t v27; // rdx
  signed __int64 v28; // rax
  signed __int64 v29; // rax
  void *s1; // [rsp+0h] [rbp-38h]
  _QWORD *s1a; // [rsp+0h] [rbp-38h]
  void *s1b; // [rsp+0h] [rbp-38h]
  size_t n; // [rsp+8h] [rbp-30h]

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_unique_pos(
               (__int64)a1,
               a3,
               a4);
    v19 = a1[4];
    v20 = *(_QWORD *)(v19 + 40);
    v21 = v20;
    if ( a4 <= v20 )
      v21 = a4;
    if ( !v21 || (v22 = memcmp(*(const void **)(v19 + 32), a3, v21)) == 0 )
    {
      v23 = v20 - a4;
      if ( v23 > 0x7FFFFFFF )
        return std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_unique_pos(
                 (__int64)a1,
                 a3,
                 a4);
      if ( v23 < (__int64)0xFFFFFFFF80000000LL )
        return nullptr;
      v22 = v23;
    }
    if ( v22 >= 0 )
      return std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_unique_pos(
               (__int64)a1,
               a3,
               a4);
    return nullptr;
  }
  v6 = a2[5];
  v7 = v6;
  if ( a4 <= v6 )
    v7 = a4;
  if ( !v7 )
  {
    v12 = a4 - v6;
    if ( (__int64)(a4 - v6) > 0x7FFFFFFF || v12 >= (__int64)0xFFFFFFFF80000000LL && (int)v12 >= 0 )
      goto LABEL_8;
    goto LABEL_17;
  }
  n = v7;
  s1 = (void *)a2[4];
  v8 = memcmp(a3, s1, v7);
  if ( v8 )
  {
    if ( v8 >= 0 )
      goto LABEL_7;
    goto LABEL_17;
  }
  v29 = a4 - v6;
  if ( (__int64)(a4 - v6) > 0x7FFFFFFF )
  {
LABEL_7:
    v9 = memcmp(s1, a3, n);
    if ( v9 )
      goto LABEL_11;
    goto LABEL_8;
  }
  if ( (int)v29 < 0 || v29 < (__int64)0xFFFFFFFF80000000LL )
  {
LABEL_17:
    result = a2;
    if ( (_QWORD *)a1[3] == a2 )
      return result;
    v13 = std::_Rb_tree_decrement();
    v14 = *(_QWORD *)(v13 + 40);
    v15 = (_QWORD *)v13;
    v16 = v14;
    if ( a4 <= v14 )
      v16 = a4;
    if ( !v16 || (s1a = (_QWORD *)v13, v17 = memcmp(*(const void **)(v13 + 32), a3, v16), v15 = s1a, !v17) )
    {
      v18 = v14 - a4;
      if ( v18 > 0x7FFFFFFF )
        return std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_unique_pos(
                 (__int64)a1,
                 a3,
                 a4);
      if ( v18 < (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_26:
        result = a2;
        if ( !v15[3] )
          return nullptr;
        return result;
      }
      v17 = v18;
    }
    if ( v17 >= 0 )
      return std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_unique_pos(
               (__int64)a1,
               a3,
               a4);
    goto LABEL_26;
  }
  v9 = memcmp(s1, a3, n);
  if ( v9 )
  {
LABEL_11:
    if ( v9 >= 0 )
      return a2;
    goto LABEL_38;
  }
LABEL_8:
  v10 = v6 - a4;
  if ( v10 > 0x7FFFFFFF )
    return a2;
  if ( v10 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v9 = v10;
    goto LABEL_11;
  }
LABEL_38:
  if ( (_QWORD *)a1[4] == a2 )
    return nullptr;
  v24 = std::_Rb_tree_increment();
  v25 = *(_QWORD *)(v24 + 40);
  v26 = (_QWORD *)v24;
  v27 = v25;
  if ( a4 <= v25 )
    v27 = a4;
  if ( !v27
    || (s1b = *(void **)(v24 + 40),
        LODWORD(v28) = memcmp(a3, *(const void **)(v24 + 32), v27),
        v25 = (size_t)s1b,
        !(_DWORD)v28) )
  {
    v28 = a4 - v25;
    if ( (__int64)(a4 - v25) <= 0x7FFFFFFF )
    {
      if ( v28 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_52;
      goto LABEL_45;
    }
    return std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_unique_pos(
             (__int64)a1,
             a3,
             a4);
  }
LABEL_45:
  if ( (int)v28 >= 0 )
    return std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_unique_pos(
             (__int64)a1,
             a3,
             a4);
LABEL_52:
  result = v26;
  if ( !a2[3] )
    return nullptr;
  return result;
}

