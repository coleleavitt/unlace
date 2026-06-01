unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        _QWORD *a1,
        const __m128i *a2,
        __int64 a3,
        char a4)
{
  const __m128i *v4; // rbx
  const __m128i *v5; // rbp
  const __m128i *v6; // rax
  __m128i *v7; // rax
  __m128i *v8; // r12
  _OWORD *v9; // rdi
  __m128i v10; // xmm0
  _QWORD *v12; // rax
  __int8 *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r13
  __int64 v19; // r10
  const __m128i *v20; // rax
  const void *v21; // rdi
  _QWORD *v22; // rbp
  _QWORD *v23; // r14
  size_t v24; // r13
  size_t v25; // rbx
  const void *v26; // r12
  const __m128i *v27; // r15
  size_t v28; // rdx
  signed __int64 v29; // rax
  size_t v30; // r15
  size_t v31; // rbx
  size_t v32; // rdx
  int v33; // eax
  __int8 v34; // al
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-B0h]
  __int8 v38; // [rsp+17h] [rbp-A1h]
  _QWORD *v39; // [rsp+28h] [rbp-90h]
  const __m128i *v41; // [rsp+40h] [rbp-78h]
  _OWORD *v42; // [rsp+58h] [rbp-60h] BYREF
  __m128i v43; // [rsp+60h] [rbp-58h]
  unsigned __int64 v44; // [rsp+78h] [rbp-40h]

  v4 = a2;
  v44 = __readfsqword(0x28u);
  v5 = a2;
  *a1 = 0;
  v6 = (const __m128i *)a2[1].m128i_i64[0];
  a1[1] = 0;
  if ( !v6 )
    v6 = a2;
  if ( v6->m128i_i8[0] != 2 )
    goto LABEL_4;
  v12 = (_QWORD *)v6->m128i_i64[1];
  if ( v12[1] - *v12 != 32 || *(_BYTE *)*v12 != 3 )
    goto LABEL_4;
  v13 = (__int8 *)a2[2].m128i_i64[1];
  if ( !v13 )
    v13 = &a2[1].m128i_i8[8];
  if ( *v13 != 2 || (v14 = *((_QWORD **)v13 + 1), v14[1] - *v14 != 32) || *(_BYTE *)*v14 != 3 || !a4 )
  {
LABEL_4:
    *(_BYTE *)a1 = 2;
    v7 = (__m128i *)operator new(0x18u);
    v7->m128i_i64[0] = 0;
    v8 = v7;
    v7[1].m128i_i64[0] = 0;
    v9 = (_OWORD *)operator new(0x20u);
    v8[1].m128i_i64[0] = (__int64)(v9 + 2);
    *v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v9);
    v42 = v9;
    v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)&v42);
    do
    {
      if ( v4[1].m128i_i64[0] )
      {
        nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
        v9 = v42;
      }
      else
      {
        v10 = _mm_loadu_si128(v4);
        v4->m128i_i8[0] = 0;
        v4->m128i_i64[1] = 0;
        *v9 = v10;
      }
      ++v9;
      v4 = (const __m128i *)((char *)v4 + 24);
      v42 = v9;
    }
    while ( v4 != &a2[3] );
    v8->m128i_i64[1] = (__int64)v9;
    a1[1] = v8;
    return v44 - __readfsqword(0x28u);
  }
  *(_BYTE *)a1 = 1;
  v15 = operator new(0x30u);
  a1[1] = v15;
  v16 = a2[1].m128i_i64[0];
  *(_DWORD *)(v15 + 8) = 0;
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = v15 + 8;
  *(_QWORD *)(v15 + 32) = v15 + 8;
  *(_QWORD *)(v15 + 40) = 0;
  v41 = v5 + 3;
  if ( v16 )
  {
LABEL_20:
    v43.m128i_i8[0] = 0;
    v43.m128i_i64[1] = 0;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    v38 = 0;
    v37 = 0;
  }
  else
  {
LABEL_44:
    v34 = v5->m128i_i8[0];
    v35 = _mm_loadu_si128(v5);
    v5->m128i_i8[0] = 0;
    v38 = v34;
    v36 = v5->m128i_i64[1];
    v43 = v35;
    v37 = v36;
    v5->m128i_i64[1] = 0;
  }
  v17 = a1[1];
  v18 = *(_QWORD *)(v17 + 16);
  v19 = *(_QWORD *)(*(_QWORD *)v37 + 8LL);
  if ( !v18 )
    goto LABEL_45;
  v20 = v5;
  v21 = *(const void **)(v18 + 32);
  v22 = *(_QWORD **)(v17 + 16);
  v23 = (_QWORD *)(v17 + 8);
  v24 = *(_QWORD *)(v18 + 40);
  v39 = (_QWORD *)(v17 + 8);
  v25 = *(_QWORD *)(v19 + 8);
  v26 = *(const void **)v19;
  v27 = v20;
  while ( 1 )
  {
    v28 = v24;
    if ( v25 <= v24 )
      v28 = v25;
    if ( !v28 || (LODWORD(v29) = memcmp(v21, v26, v28), !(_DWORD)v29) )
    {
      v29 = v24 - v25;
      if ( (__int64)(v24 - v25) > 0x7FFFFFFF )
        goto LABEL_23;
      if ( v29 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v29 < 0 )
      break;
LABEL_23:
    v23 = v22;
    v22 = (_QWORD *)v22[2];
    if ( !v22 )
      goto LABEL_33;
LABEL_24:
    v21 = (const void *)v22[4];
    v24 = v22[5];
  }
  v22 = (_QWORD *)v22[3];
  if ( v22 )
    goto LABEL_24;
LABEL_33:
  v5 = v27;
  v30 = v25;
  if ( v39 == v23 )
    goto LABEL_45;
  v31 = v23[5];
  v32 = v31;
  if ( v30 <= v31 )
    v32 = v30;
  if ( v32 && (v33 = memcmp(v26, (const void *)v23[4], v32)) != 0 )
  {
LABEL_41:
    if ( v33 < 0 )
      goto LABEL_45;
  }
  else if ( (__int64)(v30 - v31) <= 0x7FFFFFFF )
  {
    if ( (__int64)(v30 - v31) >= (__int64)0xFFFFFFFF80000000LL )
    {
      v33 = v30 - v31;
      goto LABEL_41;
    }
LABEL_45:
    std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
  }
  v5 = (const __m128i *)((char *)v5 + 24);
  v43.m128i_i8[0] = v38;
  v43.m128i_i64[1] = v37;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  if ( v41 != v5 )
  {
    if ( v5[1].m128i_i64[0] )
      goto LABEL_20;
    goto LABEL_44;
  }
  return v44 - __readfsqword(0x28u);
}

