_QWORD *__fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
        __int64 a1,
        const void *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        int a9,
        int a10,
        int a11,
        int a12,
        __int64 a13)
{
  __int64 v13; // rax
  _QWORD *v14; // rbp
  _QWORD *v15; // r14
  const void *v16; // rdi
  size_t v17; // rbx
  _QWORD *v19; // r12
  size_t v20; // rdx
  int v21; // eax
  __int64 v22; // rbx
  size_t v23; // rbx
  size_t v24; // rdx
  int v25; // eax
  __int64 v26; // r15

  if ( *(_BYTE *)a1 != 1 )
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::operator[](
      a1,
      (__int64)a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = *(_QWORD **)(v13 + 16);
  v15 = (_QWORD *)(v13 + 8);
  if ( !v14 )
    goto LABEL_26;
  v16 = (const void *)v14[4];
  v17 = v14[5];
  v19 = (_QWORD *)(v13 + 8);
  while ( 1 )
  {
    v20 = v17;
    if ( a3 <= v17 )
      v20 = a3;
    if ( !v20 || (v21 = memcmp(v16, a2, v20)) == 0 )
    {
      v22 = v17 - a3;
      if ( v22 > 0x7FFFFFFF )
        goto LABEL_4;
      if ( v22 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v21 = v22;
    }
    if ( v21 < 0 )
      break;
LABEL_4:
    v19 = v14;
    v14 = (_QWORD *)v14[2];
    if ( !v14 )
      goto LABEL_15;
LABEL_5:
    v16 = (const void *)v14[4];
    v17 = v14[5];
  }
  v14 = (_QWORD *)v14[3];
  if ( v14 )
    goto LABEL_5;
LABEL_15:
  if ( v15 != v19 )
  {
    v23 = v19[5];
    v24 = v23;
    if ( a3 <= v23 )
      v24 = a3;
    if ( v24 && (v25 = memcmp(a2, (const void *)v19[4], v24)) != 0 )
    {
LABEL_23:
      if ( v25 < 0 )
        v19 = v15;
    }
    else
    {
      v26 = a3 - v23;
      if ( v26 <= 0x7FFFFFFF )
      {
        if ( v26 >= (__int64)0xFFFFFFFF80000000LL )
        {
          v25 = v26;
          goto LABEL_23;
        }
LABEL_26:
        v19 = v15;
      }
    }
  }
  return v19 + 8;
}

