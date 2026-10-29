__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get(
        __m128i *a1)
{
  __int32 v1; // r8d
  _BYTE *v2; // rax
  _BYTE *v3; // r9
  unsigned __int32 v4; // r8d
  unsigned __int8 *v6; // rax
  _BYTE *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r10
  unsigned __int64 v10; // r10
  _BYTE *v11; // rax
  size_t v12; // rdx
  unsigned int v13; // r8d
  unsigned __int64 v14; // r10
  size_t v15; // r9
  _BYTE *v16; // r11
  __int64 *v17; // rcx
  _BYTE *v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+0h] [rbp-30h]
  size_t v21; // [rsp+0h] [rbp-30h]
  unsigned __int64 v22; // [rsp+0h] [rbp-30h]
  size_t n; // [rsp+8h] [rbp-28h]
  size_t na; // [rsp+8h] [rbp-28h]
  size_t nb; // [rsp+8h] [rbp-28h]
  _BYTE *v26; // [rsp+10h] [rbp-20h]
  unsigned __int64 v27; // [rsp+10h] [rbp-20h]
  _BYTE *v28; // [rsp+10h] [rbp-20h]
  __int32 v29; // [rsp+18h] [rbp-18h]
  __int64 *v30; // [rsp+18h] [rbp-18h]

  a1[2] = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL), _mm_loadu_si128(a1 + 2));
  if ( !a1[1].m128i_i8[8] )
  {
    v6 = (unsigned __int8 *)a1->m128i_i64[0];
    if ( a1->m128i_i64[0] != a1->m128i_i64[1] )
    {
      v1 = *v6;
      v3 = (_BYTE *)a1[4].m128i_i64[1];
      a1->m128i_i64[0] = (__int64)(v6 + 1);
      v2 = (_BYTE *)a1[4].m128i_i64[0];
      a1[1].m128i_i32[1] = v1;
      if ( v2 != v3 )
        goto LABEL_4;
LABEL_8:
      v7 = (_BYTE *)a1[3].m128i_i64[1];
      v8 = v2 - v7;
      if ( v2 - v7 == 0x7FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("vector::_M_realloc_append");
      v9 = 1;
      if ( v8 )
        v9 = (__int64)&v2[-a1[3].m128i_i64[1]];
      v29 = v1;
      v26 = v3;
      v10 = v8 + v9;
      n = (size_t)&v2[-a1[3].m128i_i64[1]];
      if ( v10 > 0x7FFFFFFFFFFFFFFFLL )
        v10 = 0x7FFFFFFFFFFFFFFFLL;
      v20 = v10;
      v11 = (_BYTE *)operator new(v10);
      v12 = n;
      v13 = v29;
      v14 = v20;
      v15 = (size_t)v26;
      v16 = v11;
      v11[n] = v29;
      v17 = (__int64 *)a1;
      if ( n )
      {
        v27 = v20;
        na = v15;
        v21 = v12;
        v18 = memcpy(v11, v7, v12);
        v17 = (__int64 *)a1;
        v13 = v29;
        v14 = v27;
        v15 = na;
        v16 = v18;
        v12 = v21;
      }
      v19 = (__int64)&v16[v12 + 1];
      if ( v7 )
      {
        v30 = v17;
        v28 = v16;
        nb = (size_t)&v16[v12 + 1];
        v22 = v14;
        operator delete(v7, v15 - (_QWORD)v7);
        v17 = v30;
        v16 = v28;
        v19 = nb;
        v14 = v22;
        v13 = *((_DWORD *)v30 + 5);
      }
      v17[7] = (__int64)v16;
      v17[8] = v19;
      v17[9] = (__int64)&v16[v14];
      if ( v13 == 10 )
      {
        ++v17[6];
        v17[5] = 0;
      }
      return v13;
    }
    a1[1].m128i_i32[1] = -1;
    return (unsigned __int32)-1;
  }
  v1 = a1[1].m128i_i32[1];
  a1[1].m128i_i8[8] = 0;
  if ( v1 == -1 )
    return (unsigned __int32)-1;
  v2 = (_BYTE *)a1[4].m128i_i64[0];
  v3 = (_BYTE *)a1[4].m128i_i64[1];
  if ( v2 == v3 )
    goto LABEL_8;
LABEL_4:
  *v2 = v1;
  v4 = a1[1].m128i_u32[1];
  ++a1[4].m128i_i64[0];
  if ( v4 != 10 )
    return v4;
  ++a1[3].m128i_i64[0];
  a1[2].m128i_i64[1] = 0;
  return 10;
}

