unsigned __int64 __fastcall nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json(
        _QWORD *a1,
        const __m128i *a2)
{
  const __m128i *v2; // rdx
  const __m128i *v3; // rbx
  const __m128i *v4; // rbp
  const __m128i *v5; // rax
  __m128i *v6; // rax
  __m128i *v7; // rbp
  _OWORD *v8; // rdi
  __m128i v9; // xmm0
  _QWORD *v10; // rax
  __int8 *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r13
  __int64 v16; // r10
  const __m128i *v17; // rax
  const void *v18; // rdi
  const void *v19; // r12
  _QWORD *v20; // r14
  size_t v21; // rbp
  _QWORD *v22; // rbx
  const __m128i *v23; // r15
  size_t i; // r13
  size_t v25; // rdx
  signed __int64 v26; // rax
  const __m128i *v27; // rax
  size_t v28; // r15
  size_t v29; // rbx
  size_t v30; // rdx
  int v31; // eax
  __int8 v33; // al
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // [rsp+8h] [rbp-B0h]
  __int8 v37; // [rsp+17h] [rbp-A1h]
  _QWORD *v38; // [rsp+28h] [rbp-90h]
  _OWORD *v40; // [rsp+58h] [rbp-60h] BYREF
  __m128i v41; // [rsp+60h] [rbp-58h]
  unsigned __int64 v42; // [rsp+78h] [rbp-40h]

  v2 = a2;
  v3 = a2;
  v42 = __readfsqword(0x28u);
  v4 = a2;
  *a1 = 0;
  v5 = (const __m128i *)a2[1].m128i_i64[0];
  a1[1] = 0;
  if ( !v5 )
    v5 = a2;
  if ( v5->m128i_i8[0] != 2 )
    goto LABEL_4;
  v10 = (_QWORD *)v5->m128i_i64[1];
  if ( v10[1] - *v10 != 32 || *(_BYTE *)*v10 != 3 )
    goto LABEL_4;
  v11 = (__int8 *)a2[2].m128i_i64[1];
  v2 = (const __m128i *)((char *)a2 + 24);
  if ( !v11 )
    v11 = &a2[1].m128i_i8[8];
  if ( *v11 != 2 || (v12 = *((_QWORD **)v11 + 1), v12[1] - *v12 != 32) || *(_BYTE *)*v12 != 3 )
  {
LABEL_4:
    if ( &a2[3] != v2 )
    {
      *(_BYTE *)a1 = 2;
      v6 = (__m128i *)operator new(0x18u);
      v6->m128i_i64[0] = 0;
      v7 = v6;
      v6[1].m128i_i64[0] = 0;
      v8 = (_OWORD *)operator new(0x20u);
      v7[1].m128i_i64[0] = (__int64)(v8 + 2);
      *v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v8);
      v40 = v8;
      v41 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)&v40);
      do
      {
        if ( v3[1].m128i_i64[0] )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v8 = v40;
        }
        else
        {
          v9 = _mm_loadu_si128(v3);
          v3->m128i_i8[0] = 0;
          v3->m128i_i64[1] = 0;
          *v8 = v9;
        }
        ++v8;
        v3 = (const __m128i *)((char *)v3 + 24);
        v40 = v8;
      }
      while ( &a2[3] != v3 );
      v7->m128i_i64[1] = (__int64)v8;
      a1[1] = v7;
      return v42 - __readfsqword(0x28u);
    }
  }
  *(_BYTE *)a1 = 1;
  v13 = operator new(0x30u);
  *(_DWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = v13 + 8;
  *(_QWORD *)(v13 + 32) = v13 + 8;
  *(_QWORD *)(v13 + 40) = 0;
  a1[1] = v13;
  do
  {
    if ( v4[1].m128i_i64[0] )
    {
      v41.m128i_i8[0] = 0;
      v41.m128i_i64[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v37 = 0;
      v36 = 0;
    }
    else
    {
      v33 = v4->m128i_i8[0];
      v34 = _mm_loadu_si128(v4);
      v4->m128i_i8[0] = 0;
      v37 = v33;
      v35 = v4->m128i_i64[1];
      v41 = v34;
      v36 = v35;
      v4->m128i_i64[1] = 0;
    }
    v14 = a1[1];
    v15 = *(_QWORD *)(v14 + 16);
    v16 = *(_QWORD *)(*(_QWORD *)v36 + 8LL);
    if ( !v15 )
      goto LABEL_43;
    v17 = v4;
    v18 = *(const void **)(v15 + 32);
    v19 = *(const void **)v16;
    v20 = (_QWORD *)(v14 + 8);
    v21 = *(_QWORD *)(v16 + 8);
    v22 = *(_QWORD **)(v14 + 16);
    v38 = (_QWORD *)(v14 + 8);
    v23 = v17;
    for ( i = *(_QWORD *)(v15 + 40); ; i = v22[5] )
    {
      v25 = i;
      if ( v21 <= i )
        v25 = v21;
      if ( !v25 || (LODWORD(v26) = memcmp(v18, v19, v25), !(_DWORD)v26) )
      {
        v26 = i - v21;
        if ( (__int64)(i - v21) > 0x7FFFFFFF )
          goto LABEL_22;
        if ( v26 < (__int64)0xFFFFFFFF80000000LL )
          break;
      }
      if ( (int)v26 < 0 )
        break;
LABEL_22:
      v20 = v22;
      v22 = (_QWORD *)v22[2];
      if ( !v22 )
        goto LABEL_32;
LABEL_23:
      v18 = (const void *)v22[4];
    }
    v22 = (_QWORD *)v22[3];
    if ( v22 )
      goto LABEL_23;
LABEL_32:
    v27 = v23;
    v28 = v21;
    v4 = v27;
    if ( v38 == v20 )
      goto LABEL_43;
    v29 = v20[5];
    v30 = v29;
    if ( v28 <= v29 )
      v30 = v28;
    if ( v30 && (v31 = memcmp(v19, (const void *)v20[4], v30)) != 0 )
    {
LABEL_40:
      if ( v31 < 0 )
        goto LABEL_43;
    }
    else if ( (__int64)(v28 - v29) <= 0x7FFFFFFF )
    {
      if ( (__int64)(v28 - v29) >= (__int64)0xFFFFFFFF80000000LL )
      {
        v31 = v28 - v29;
        goto LABEL_40;
      }
LABEL_43:
      std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    }
    v4 = (const __m128i *)((char *)v4 + 24);
    v41.m128i_i8[0] = v37;
    v41.m128i_i64[1] = v36;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( &a2[3] != v4 );
  return v42 - __readfsqword(0x28u);
}

