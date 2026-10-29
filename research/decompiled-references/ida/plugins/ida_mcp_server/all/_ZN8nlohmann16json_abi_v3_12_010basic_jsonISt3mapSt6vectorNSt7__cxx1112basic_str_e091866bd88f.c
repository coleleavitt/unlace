_QWORD *__fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rax
  const void *v4; // rbp
  size_t v5; // r14
  __int64 v6; // r15
  _QWORD *v7; // rbx
  size_t v8; // r12
  size_t v9; // rdx
  signed __int64 v10; // rax
  size_t v11; // r15
  size_t v12; // rdx
  signed __int64 v13; // rax
  _QWORD *v15; // r15
  _QWORD *v16; // r12
  char *v17; // rax
  _QWORD *insert_hint_unique_pos; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  size_t v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  unsigned int v24; // edx
  _QWORD *v25; // rdi
  unsigned __int64 v26; // rsi
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // edi
  __int64 v30; // r10
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // rbp
  __int64 v32; // [rsp+0h] [rbp-88h]
  _QWORD *v33; // [rsp+8h] [rbp-80h]

  if ( !*(_BYTE *)a1 )
  {
    *(_BYTE *)a1 = 1;
    v22 = operator new(0x30u);
    v4 = *(const void **)a2;
    *(_DWORD *)(v22 + 8) = 0;
    v23 = (_QWORD *)v22;
    *(_QWORD *)(v22 + 16) = 0;
    v33 = (_QWORD *)v22;
    v22 += 8;
    v23[3] = v22;
    v23[4] = v22;
    v23[5] = 0;
    v32 = v22;
    *(_QWORD *)(a1 + 8) = v23;
    v5 = *(_QWORD *)(a2 + 8);
    goto LABEL_34;
  }
  if ( *(_BYTE *)a1 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    nlohmann::json_abi_v3_12_0::detail::type_error::create<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void> *,0>(
      exception,
      305);
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v3 = *(_QWORD **)(a1 + 8);
  v4 = *(const void **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  v6 = v3[2];
  v7 = v3 + 1;
  v33 = v3;
  v32 = (__int64)(v3 + 1);
  if ( !v6 )
  {
LABEL_34:
    v7 = (_QWORD *)v32;
    v15 = (_QWORD *)operator new(0x50u);
    v16 = v15 + 6;
    v17 = (char *)(a2 + 16);
    if ( (const void *)(a2 + 16) != v4 )
      goto LABEL_24;
    goto LABEL_35;
  }
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 40);
      v9 = v8;
      if ( v5 <= v8 )
        v9 = v5;
      if ( v9 )
      {
        LODWORD(v10) = memcmp(*(const void **)(v6 + 32), v4, v9);
        if ( (_DWORD)v10 )
          goto LABEL_12;
      }
      v10 = v8 - v5;
      if ( (__int64)(v8 - v5) <= 0x7FFFFFFF )
        break;
LABEL_5:
      v7 = (_QWORD *)v6;
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v6 )
        goto LABEL_14;
    }
    if ( v10 < (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_13;
LABEL_12:
    if ( (int)v10 >= 0 )
      goto LABEL_5;
LABEL_13:
    v6 = *(_QWORD *)(v6 + 24);
  }
  while ( v6 );
LABEL_14:
  if ( (_QWORD *)v32 == v7 )
    goto LABEL_34;
  v11 = v7[5];
  v12 = v11;
  if ( v5 <= v11 )
    v12 = v5;
  if ( v12 && (LODWORD(v13) = memcmp(v4, (const void *)v7[4], v12), (_DWORD)v13) )
  {
LABEL_21:
    if ( (int)v13 < 0 )
      goto LABEL_23;
  }
  else
  {
    v13 = v5 - v11;
    if ( (__int64)(v5 - v11) <= 0x7FFFFFFF )
    {
      if ( v13 >= (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_21;
LABEL_23:
      v15 = (_QWORD *)operator new(0x50u);
      v16 = v15 + 6;
      v17 = (char *)(a2 + 16);
      if ( v4 != (const void *)(a2 + 16) )
      {
LABEL_24:
        v15[4] = v4;
        v15[6] = *(_QWORD *)(a2 + 16);
        goto LABEL_25;
      }
LABEL_35:
      v24 = v5 + 1;
      v15[4] = v16;
      if ( (unsigned int)(v5 + 1) >= 8 )
      {
        *v16 = *(_QWORD *)v17;
        *(_QWORD *)((char *)v16 + v24 - 8) = *(_QWORD *)&v17[v24 - 8];
        v26 = (unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v27 = ((_DWORD)v16 - v26 + v24) & 0xFFFFFFF8;
        if ( v27 >= 8 )
        {
          v28 = v27 & 0xFFFFFFF8;
          v29 = 0;
          do
          {
            v30 = v29;
            v29 += 8;
            *(_QWORD *)(v26 + v30) = *(_QWORD *)(v17 - ((char *)v16 - v26) + v30);
          }
          while ( v29 < v28 );
        }
      }
      else if ( (v24 & 4) != 0 )
      {
        *(_DWORD *)v16 = *(_DWORD *)v17;
        *(_DWORD *)((char *)v16 + v24 - 4) = *(_DWORD *)&v17[v24 - 4];
      }
      else if ( (_DWORD)v5 != -1 )
      {
        *(_BYTE *)v16 = *v17;
        if ( (v24 & 2) != 0 )
          *(_WORD *)((char *)v16 + v24 - 2) = *(_WORD *)&v17[v24 - 2];
      }
      v4 = (const void *)v15[4];
LABEL_25:
      *(_QWORD *)a2 = v17;
      *(_QWORD *)(a2 + 8) = 0;
      *(_BYTE *)(a2 + 16) = 0;
      v15[5] = v5;
      v15[8] = 0;
      v15[9] = 0;
      insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                                 v33,
                                 v7,
                                 v4,
                                 v5);
      v20 = v19;
      v7 = insert_hint_unique_pos;
      if ( v19 )
      {
        if ( v32 != v19 && !insert_hint_unique_pos )
        {
          v21 = *(_QWORD *)(v19 + 40);
          if ( v5 <= v21 )
            v21 = v5;
          if ( v21 )
            memcmp(v4, *(const void **)(v20 + 32), v21);
        }
        v7 = v15;
        std::_Rb_tree_insert_and_rebalance();
        ++v33[5];
      }
      else
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
        v25 = (_QWORD *)v15[4];
        if ( v25 != v16 )
          operator delete(v25, v15[6] + 1LL);
        operator delete(v15, 0x50u);
      }
    }
  }
  return v7 + 8;
}

