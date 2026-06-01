void **__fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[]<char const>(
        __int64 a1,
        const char *a2)
{
  size_t v3; // rax
  size_t v4; // rbp
  _QWORD *v5; // rdx
  _QWORD *v6; // r13
  size_t v7; // r15
  _QWORD *v8; // r12
  __int64 v9; // r14
  void **v10; // rbp
  size_t v11; // rbx
  size_t v12; // rdx
  signed __int64 v13; // rax
  size_t v14; // rcx
  size_t v15; // rdx
  const void *v16; // rsi
  signed __int64 v17; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // r14
  _QWORD *v23; // rbx
  void **insert_hint_unique_pos; // rax
  void **v25; // rdx
  void **v26; // r10
  size_t v27; // rbp
  size_t v28; // rdx
  const void *v29; // rsi
  _QWORD *v30; // rdi
  unsigned int v31; // eax
  unsigned __int64 v32; // rdx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // ecx
  __int64 v36; // rsi
  char *v37; // rax
  nlohmann::json_abi_v3_12_0::detail::type_error *exception; // [rsp+0h] [rbp-138h]
  void **v39; // [rsp+8h] [rbp-130h]
  void **p_s2; // [rsp+10h] [rbp-128h]
  size_t v41; // [rsp+18h] [rbp-120h]
  size_t v42; // [rsp+28h] [rbp-110h]
  void *s2; // [rsp+30h] [rbp-108h] BYREF
  size_t n; // [rsp+38h] [rbp-100h]
  _QWORD v45[10]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v46[4]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v47[13]; // [rsp+D0h] [rbp-68h] BYREF

  v47[5] = __readfsqword(0x28u);
  p_s2 = &s2;
  s2 = v45;
  if ( !a2 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v3 = strlen(a2);
  v42 = v3;
  v4 = v3;
  if ( v3 > 0xF )
  {
    s2 = (void *)std::string::_M_create();
    v19 = s2;
    v45[0] = v42;
  }
  else
  {
    if ( v3 == 1 )
    {
      LOBYTE(v45[0]) = *a2;
LABEL_5:
      v5 = v45;
      goto LABEL_6;
    }
    if ( !v3 )
      goto LABEL_5;
    v19 = v45;
  }
  memcpy(v19, a2, v4);
  v3 = v42;
  v5 = s2;
LABEL_6:
  n = v3;
  *((_BYTE *)v5 + v3) = 0;
  if ( !*(_BYTE *)a1 )
  {
    *(_BYTE *)a1 = 1;
    v20 = operator new(0x30u);
    v10 = (void **)(v20 + 8);
    *(_QWORD *)(a1 + 8) = v20;
    v6 = (_QWORD *)v20;
    v8 = s2;
    *(_DWORD *)(v20 + 8) = 0;
    v7 = n;
    *(_QWORD *)(v20 + 16) = 0;
    *(_QWORD *)(v20 + 24) = v20 + 8;
    *(_QWORD *)(v20 + 32) = v20 + 8;
    *(_QWORD *)(v20 + 40) = 0;
    v39 = (void **)(v20 + 8);
    goto LABEL_33;
  }
  if ( *(_BYTE *)a1 != 1 )
  {
    exception = (nlohmann::json_abi_v3_12_0::detail::type_error *)__cxa_allocate_exception(0x20u);
    switch ( *(_BYTE *)a1 )
    {
      case 0:
        v37 = "null";
        break;
      case 1:
        v37 = "object";
        break;
      case 2:
        v37 = (char *)"array";
        break;
      case 3:
        v37 = "string";
        break;
      case 4:
        v37 = "boolean";
        break;
      case 8:
        v37 = "binary";
        break;
      case 9:
        v37 = "discarded";
        break;
      default:
        v37 = "number";
        break;
    }
    v42 = (size_t)v37;
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,char const(&)[51],char const*>();
    std::string::basic_string<std::allocator<char>>(v46, "");
    std::string::basic_string<std::allocator<char>>(v47, "type_error");
    nlohmann::json_abi_v3_12_0::detail::exception::name();
    nlohmann::json_abi_v3_12_0::detail::concat<std::string,std::string,std::string,std::string const&>();
    std::string::_M_dispose();
    std::string::_M_dispose();
    std::string::_M_dispose();
    nlohmann::json_abi_v3_12_0::detail::type_error::type_error(exception, 305, (const char *)v45[6]);
    std::string::_M_dispose();
    std::string::_M_dispose();
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::json_abi_v3_12_0::detail::type_error,
      (void (*)(void *))nlohmann::json_abi_v3_12_0::detail::type_error::~type_error);
  }
  v6 = *(_QWORD **)(a1 + 8);
  v7 = n;
  v8 = s2;
  v9 = v6[2];
  v10 = (void **)(v6 + 1);
  v39 = (void **)(v6 + 1);
  if ( !v9 )
  {
LABEL_33:
    v21 = operator new(0x50u);
    v22 = (_QWORD *)(v21 + 48);
    v23 = (_QWORD *)v21;
    *(_QWORD *)(v21 + 32) = v21 + 48;
    if ( v8 == v45 )
    {
      v31 = v7 + 1;
      if ( (unsigned int)(v7 + 1) >= 8 )
      {
        v23[6] = v45[0];
        *(_QWORD *)((char *)v22 + v31 - 8) = *(_QWORD *)((char *)&v45[-1] + v31);
        v32 = (unsigned __int64)(v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v33 = ((_DWORD)v22 - v32 + v31) & 0xFFFFFFF8;
        if ( v33 >= 8 )
        {
          v34 = v33 & 0xFFFFFFF8;
          v35 = 0;
          do
          {
            v36 = v35;
            v35 += 8;
            *(_QWORD *)(v32 + v36) = *(_QWORD *)((char *)v45 - ((char *)v22 - v32) + v36);
          }
          while ( v35 < v34 );
        }
      }
      else if ( (v31 & 4) != 0 )
      {
        *((_DWORD *)v23 + 12) = v45[0];
        *(_DWORD *)((char *)v22 + v31 - 4) = *(_DWORD *)((char *)&n + v31 + 4);
      }
      else if ( (_DWORD)v7 != -1 )
      {
        *((_BYTE *)v23 + 48) = v45[0];
        if ( (v31 & 2) != 0 )
          *(_WORD *)((char *)v22 + v31 - 2) = *(_WORD *)((char *)&n + v31 + 6);
      }
      v8 = v22;
    }
    else
    {
      *(_QWORD *)(v21 + 32) = v8;
      *(_QWORD *)(v21 + 48) = v45[0];
    }
    v23[5] = v7;
    v23[8] = 0;
    v23[9] = 0;
    s2 = v45;
    n = 0;
    LOBYTE(v45[0]) = 0;
    insert_hint_unique_pos = (void **)std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                                        v6,
                                        v10,
                                        v8,
                                        v7);
    v26 = v25;
    v10 = insert_hint_unique_pos;
    if ( v25 )
    {
      if ( v39 != v25 && !insert_hint_unique_pos )
      {
        v27 = (size_t)v25[5];
        v28 = v7;
        if ( v27 <= v7 )
          v28 = v27;
        if ( v28 )
        {
          v29 = v26[4];
          p_s2 = v26;
          memcmp(v8, v29, v28);
        }
      }
      v10 = (void **)v23;
      std::_Rb_tree_insert_and_rebalance();
      ++v6[5];
    }
    else
    {
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v30 = (_QWORD *)v23[4];
      if ( v22 != v30 )
        operator delete(v30, v23[6] + 1LL);
      operator delete(v23, 0x50u);
    }
    v8 = s2;
    goto LABEL_27;
  }
  do
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 + 40);
      v12 = v11;
      if ( v7 <= v11 )
        v12 = v7;
      if ( v12 )
      {
        LODWORD(v13) = memcmp(*(const void **)(v9 + 32), v8, v12);
        if ( (_DWORD)v13 )
          goto LABEL_17;
      }
      v13 = v11 - v7;
      if ( (__int64)(v11 - v7) <= 0x7FFFFFFF )
        break;
LABEL_10:
      v10 = (void **)v9;
      v9 = *(_QWORD *)(v9 + 16);
      if ( !v9 )
        goto LABEL_19;
    }
    if ( v13 < (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_18;
LABEL_17:
    if ( (int)v13 >= 0 )
      goto LABEL_10;
LABEL_18:
    v9 = *(_QWORD *)(v9 + 24);
  }
  while ( v9 );
LABEL_19:
  if ( v39 == v10 )
    goto LABEL_33;
  v14 = (size_t)v10[5];
  v15 = v14;
  if ( v7 <= v14 )
    v15 = v7;
  if ( v15 && (v16 = v10[4], v41 = (size_t)v10[5], LODWORD(v17) = memcmp(v8, v16, v15), v14 = v41, (_DWORD)v17) )
  {
LABEL_26:
    if ( (int)v17 < 0 )
      goto LABEL_33;
  }
  else
  {
    v17 = v7 - v14;
    if ( (__int64)(v7 - v14) <= 0x7FFFFFFF )
    {
      if ( v17 >= (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_26;
      goto LABEL_33;
    }
  }
LABEL_27:
  if ( v8 != v45 )
    operator delete(v8, v45[0] + 1LL);
  return v10 + 8;
}

