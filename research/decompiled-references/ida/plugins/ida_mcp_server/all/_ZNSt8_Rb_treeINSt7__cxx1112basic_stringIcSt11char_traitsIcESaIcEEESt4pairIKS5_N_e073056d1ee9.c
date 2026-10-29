__int64 *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        const __m128i *a4)
{
  __int64 v7; // rax
  const void *v8; // r12
  size_t v9; // r8
  char *v10; // r13
  __m128i *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 *insert_hint_unique_pos; // rax
  __int64 v16; // rdx
  __int64 *v17; // rbp
  char *v19; // rdi
  unsigned int v20; // edx
  unsigned __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edi
  __int64 v25; // r10
  size_t v26; // [rsp+8h] [rbp-40h]

  v7 = operator new(0x50u);
  v8 = *(const void **)a3;
  v9 = *(_QWORD *)(a3 + 8);
  v10 = (char *)(v7 + 48);
  v11 = (__m128i *)v7;
  *(_QWORD *)(v7 + 32) = v7 + 48;
  v12 = a3 + 16;
  if ( v8 == (const void *)(a3 + 16) )
  {
    v20 = v9 + 1;
    if ( (unsigned int)(v9 + 1) >= 8 )
    {
      v11[3].m128i_i64[0] = *(_QWORD *)(a3 + 16);
      *(_QWORD *)&v10[v20 - 8] = *(_QWORD *)(v12 + v20 - 8);
      v21 = (unsigned __int64)&v11[3].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
      v22 = ((_DWORD)v10 - v21 + v20) & 0xFFFFFFF8;
      if ( v22 >= 8 )
      {
        v23 = v22 & 0xFFFFFFF8;
        v24 = 0;
        do
        {
          v25 = v24;
          v24 += 8;
          *(_QWORD *)(v21 + v25) = *(_QWORD *)(v12 - (_QWORD)&v10[-v21] + v25);
        }
        while ( v24 < v23 );
      }
    }
    else if ( (v20 & 4) != 0 )
    {
      v11[3].m128i_i32[0] = *(_DWORD *)(a3 + 16);
      *(_DWORD *)&v10[v20 - 4] = *(_DWORD *)(v12 + v20 - 4);
    }
    else if ( (_DWORD)v9 != -1 )
    {
      v11[3].m128i_i8[0] = *(_BYTE *)(a3 + 16);
      if ( (v20 & 2) != 0 )
        *(_WORD *)&v10[v20 - 2] = *(_WORD *)(v12 + v20 - 2);
    }
    v8 = v10;
  }
  else
  {
    v13 = *(_QWORD *)(a3 + 16);
    v11[2].m128i_i64[0] = (__int64)v8;
    v11[3].m128i_i64[0] = v13;
  }
  *(_BYTE *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 8) = 0;
  v14 = _mm_loadu_si128(a4);
  *(_QWORD *)a3 = v12;
  v11[2].m128i_i64[1] = v9;
  a4->m128i_i8[0] = 0;
  a4->m128i_i64[1] = 0;
  v11[4] = v14;
  v26 = v9;
  insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_get_insert_hint_unique_pos(
                             a1,
                             a2,
                             v8,
                             v9);
  if ( v16 )
  {
    if ( !insert_hint_unique_pos && (_QWORD *)v16 != a1 + 1 )
      std::string::compare(v8, v26, *(const void **)(v16 + 32), *(_QWORD *)(v16 + 40));
    v17 = (__int64 *)v11;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
  }
  else
  {
    v17 = insert_hint_unique_pos;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
    v19 = (char *)v11[2].m128i_i64[0];
    if ( v10 != v19 )
      operator delete(v19, v11[3].m128i_i64[0] + 1);
    operator delete(v11, 0x50u);
  }
  return v17;
}

