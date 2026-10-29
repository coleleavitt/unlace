unsigned __int64 __fastcall std::vector<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>>::_M_realloc_append<std::string&>(
        __int64 a1,
        __int64 a2)
{
  __m128i *v2; // r15
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // r12
  _QWORD *v12; // rax
  _BYTE *v13; // rdi
  const __m128i *v14; // rcx
  __int64 *v15; // r13
  size_t v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  const __m128i *v19; // rax
  __int64 v20; // rbp
  __m128i v21; // xmm0
  __int64 v22; // rbp
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+0h] [rbp-68h]
  const __m128i *v26; // [rsp+0h] [rbp-68h]
  const __m128i *v27; // [rsp+8h] [rbp-60h]
  _BYTE *src; // [rsp+10h] [rbp-58h]
  unsigned __int64 v29; // [rsp+20h] [rbp-48h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v2 = *(__m128i **)a1;
  v30 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v4 = v3 >> 4;
  if ( v3 >> 4 == 0x7FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  if ( v4 )
    v5 = (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v2) >> 4;
  v27 = *(const __m128i **)(a1 + 8);
  v7 = v4 + v5;
  if ( v7 > 0x7FFFFFFFFFFFFFFLL )
    v7 = 0x7FFFFFFFFFFFFFFLL;
  v8 = 16 * v7;
  v9 = operator new(v8);
  v10 = (_QWORD *)(v9 + v3);
  v11 = v9;
  *v10 = 0;
  v10[1] = 0;
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
  *(_BYTE *)v10 = 3;
  src = *(_BYTE **)a2;
  v25 = *(_QWORD *)(a2 + 8);
  v12 = (_QWORD *)operator new(0x20u);
  v13 = v12 + 2;
  v14 = v27;
  v15 = v12;
  *v12 = v12 + 2;
  v29 = v25;
  if ( v25 > 0xF )
  {
    v24 = std::string::_M_create();
    *v15 = v24;
    v13 = (_BYTE *)v24;
    v14 = v27;
    v15[2] = v25;
    v16 = v25 + 1;
    v17 = -1;
    if ( v25 != -1 )
      goto LABEL_8;
  }
  else
  {
    v16 = v25 + 1;
    if ( v25 )
    {
LABEL_8:
      v26 = v14;
      memcpy(v13, src, v16);
      v17 = v29;
      v14 = v26;
      goto LABEL_9;
    }
    *v13 = *src;
    v17 = v25;
  }
LABEL_9:
  v15[1] = v17;
  v18 = v11;
  v19 = v2;
  v10[1] = v15;
  v20 = v11;
  if ( v14 != v2 )
  {
    do
    {
      v21 = _mm_loadu_si128(v19++);
      v18 += 16;
      *(__m128i *)(v18 - 16) = v21;
    }
    while ( v14 != v19 );
    v20 = v11 + (char *)v14 - (char *)v2;
  }
  v22 = v20 + 16;
  if ( v2 )
    operator delete(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = v22;
  *(_QWORD *)(a1 + 16) = v8 + v11;
  return v30 - __readfsqword(0x28u);
}

