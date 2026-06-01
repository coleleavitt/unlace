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
  __int64 *v11; // rax
  _QWORD *v12; // rax
  const __m128i *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r13
  __int64 v18; // r10
  const __m128i *v19; // rax
  const void *v20; // rdi
  const void *v21; // r12
  _QWORD *v22; // r14
  size_t v23; // rbp
  _QWORD *v24; // rbx
  const __m128i *v25; // r15
  size_t i; // r13
  size_t v27; // rdx
  signed __int64 v28; // rax
  const __m128i *v29; // rax
  size_t v30; // r15
  size_t v31; // rbx
  size_t v32; // rdx
  int v33; // eax
  __int8 v35; // al
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // [rsp+8h] [rbp-B0h]
  __int8 v39; // [rsp+17h] [rbp-A1h]
  _QWORD *v40; // [rsp+28h] [rbp-90h]
  _OWORD *v42; // [rsp+58h] [rbp-60h] BYREF
  __m128i v43; // [rsp+60h] [rbp-58h]
  unsigned __int64 v44; // [rsp+78h] [rbp-40h]

  v2 = a2;
  v3 = a2;
  v44 = __readfsqword(0x28u);
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
  v11 = (__int64 *)a2[2].m128i_i64[1];
  v2 = (const __m128i *)((char *)a2 + 24);
  if ( !v11 )
    v11 = &a2[1].m128i_i64[1];
  if ( *(_BYTE *)v11 != 2 )
    goto LABEL_4;
  v12 = (_QWORD *)v11[1];
  if ( v12[1] - *v12 != 32 || *(_BYTE *)*v12 != 3 )
    goto LABEL_4;
  v13 = (const __m128i *)a2[4].m128i_i64[0];
  v2 = a2 + 3;
  if ( !v13 )
    v13 = a2 + 3;
  if ( v13->m128i_i8[0] != 2 || (v14 = (_QWORD *)v13->m128i_i64[1], v14[1] - *v14 != 32) || *(_BYTE *)*v14 != 3 )
  {
LABEL_4:
    if ( &a2[4].m128i_u64[1] != (unsigned __int64 *)v2 )
    {
      *(_BYTE *)a1 = 2;
      v6 = (__m128i *)operator new(0x18u);
      v6->m128i_i64[0] = 0;
      v7 = v6;
      v6[1].m128i_i64[0] = 0;
      v8 = (_OWORD *)operator new(0x30u);
      v7[1].m128i_i64[0] = (__int64)(v8 + 3);
      *v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v8);
      v42 = v8;
      v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)&v42);
      do
      {
        if ( v3[1].m128i_i64[0] )
        {
          nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
          v8 = v42;
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
        v42 = v8;
      }
      while ( &a2[4].m128i_u64[1] != (unsigned __int64 *)v3 );
      v7->m128i_i64[1] = (__int64)v8;
      a1[1] = v7;
      return v44 - __readfsqword(0x28u);
    }
  }
  *(_BYTE *)a1 = 1;
  v15 = operator new(0x30u);
  *(_DWORD *)(v15 + 8) = 0;
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = v15 + 8;
  *(_QWORD *)(v15 + 32) = v15 + 8;
  *(_QWORD *)(v15 + 40) = 0;
  a1[1] = v15;
  do
  {
    if ( v4[1].m128i_i64[0] )
    {
      v43.m128i_i8[0] = 0;
      v43.m128i_i64[1] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
      v39 = 0;
      v38 = 0;
    }
    else
    {
      v35 = v4->m128i_i8[0];
      v36 = _mm_loadu_si128(v4);
      v4->m128i_i8[0] = 0;
      v39 = v35;
      v37 = v4->m128i_i64[1];
      v43 = v36;
      v38 = v37;
      v4->m128i_i64[1] = 0;
    }
    v16 = a1[1];
    v17 = *(_QWORD *)(v16 + 16);
    v18 = *(_QWORD *)(*(_QWORD *)v38 + 8LL);
    if ( !v17 )
      goto LABEL_48;
    v19 = v4;
    v20 = *(const void **)(v17 + 32);
    v21 = *(const void **)v18;
    v22 = (_QWORD *)(v16 + 8);
    v23 = *(_QWORD *)(v18 + 8);
    v24 = *(_QWORD **)(v16 + 16);
    v40 = (_QWORD *)(v16 + 8);
    v25 = v19;
    for ( i = *(_QWORD *)(v17 + 40); ; i = v24[5] )
    {
      v27 = i;
      if ( v23 <= i )
        v27 = v23;
      if ( !v27 || (LODWORD(v28) = memcmp(v20, v21, v27), !(_DWORD)v28) )
      {
        v28 = i - v23;
        if ( (__int64)(i - v23) > 0x7FFFFFFF )
          goto LABEL_27;
        if ( v28 < (__int64)0xFFFFFFFF80000000LL )
          break;
      }
      if ( (int)v28 < 0 )
        break;
LABEL_27:
      v22 = v24;
      v24 = (_QWORD *)v24[2];
      if ( !v24 )
        goto LABEL_37;
LABEL_28:
      v20 = (const void *)v24[4];
    }
    v24 = (_QWORD *)v24[3];
    if ( v24 )
      goto LABEL_28;
LABEL_37:
    v29 = v25;
    v30 = v23;
    v4 = v29;
    if ( v40 == v22 )
      goto LABEL_48;
    v31 = v22[5];
    v32 = v31;
    if ( v30 <= v31 )
      v32 = v30;
    if ( v32 && (v33 = memcmp(v21, (const void *)v22[4], v32)) != 0 )
    {
LABEL_45:
      if ( v33 < 0 )
        goto LABEL_48;
    }
    else if ( (__int64)(v30 - v31) <= 0x7FFFFFFF )
    {
      if ( (__int64)(v30 - v31) >= (__int64)0xFFFFFFFF80000000LL )
      {
        v33 = v30 - v31;
        goto LABEL_45;
      }
LABEL_48:
      std::_Rb_tree<std::string,std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>,std::_Select1st<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>,std::less<void>,std::allocator<std::pair<std::string const,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>>>::_M_emplace_hint_unique<std::string,nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>();
    }
    v4 = (const __m128i *)((char *)v4 + 24);
    v43.m128i_i8[0] = v39;
    v43.m128i_i64[1] = v38;
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  }
  while ( &a2[4].m128i_u64[1] != (unsigned __int64 *)v4 );
  return v44 - __readfsqword(0x28u);
}

