__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::next_byte_in_range(
        __m128i *a1,
        int *a2,
        __int64 a3)
{
  __m128i *v4; // rdx
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // r9
  __int32 v8; // r10d
  int *v9; // r12
  __int64 v10; // rdx
  int *v11; // r14
  int v12; // ebp
  _BYTE *v13; // rax
  _BYTE *v14; // rcx
  __m128i *v15; // rdx
  __int64 v16; // r15
  unsigned __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int8 *v21; // rax
  _BYTE *v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // r15
  _BYTE *v25; // rax
  size_t v26; // rdx
  _BYTE *v27; // rcx
  void *v28; // r9
  _BYTE *v29; // r10
  __int64 v30; // rax
  _BYTE *v31; // rax
  __m128i v32; // [rsp+0h] [rbp-68h]
  size_t n; // [rsp+18h] [rbp-50h]
  size_t nb; // [rsp+18h] [rbp-50h]
  size_t nc; // [rsp+18h] [rbp-50h]
  char na; // [rsp+18h] [rbp-50h]
  _BYTE *v37; // [rsp+20h] [rbp-48h]
  _BYTE *v38; // [rsp+20h] [rbp-48h]
  size_t v39; // [rsp+20h] [rbp-48h]
  __int64 v40; // [rsp+20h] [rbp-48h]
  void *src; // [rsp+28h] [rbp-40h]
  _BYTE *srca; // [rsp+28h] [rbp-40h]

  v4 = (__m128i *)a1[5].m128i_i64[0];
  v5 = a1[5].m128i_i64[1];
  if ( v4 == &a1[6] )
    v6 = 15;
  else
    v6 = a1[6].m128i_u64[0];
  v7 = v5 + 1;
  v8 = a1[1].m128i_i32[1];
  v9 = a2;
  if ( v6 < v5 + 1 )
  {
    v40 = a3;
    na = a1[1].m128i_i32[1];
    std::string::_M_mutate();
    v4 = (__m128i *)a1[5].m128i_i64[0];
    a3 = v40;
    LOBYTE(v8) = na;
    v7 = v5 + 1;
  }
  v4->m128i_i8[v5] = v8;
  v10 = a1[5].m128i_i64[0];
  v11 = &a2[a3];
  a1[5].m128i_i64[1] = v7;
  *(_BYTE *)(v10 + v5 + 1) = 0;
  v32 = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
  if ( !(4 * a3) )
    return 1;
  while ( 1 )
  {
    a1[2] = _mm_add_epi64(_mm_loadu_si128(a1 + 2), v32);
    if ( a1[1].m128i_i8[8] )
    {
      v12 = a1[1].m128i_i32[1];
      a1[1].m128i_i8[8] = 0;
      if ( v12 == -1 )
        goto LABEL_37;
      v13 = (_BYTE *)a1[4].m128i_i64[0];
      v14 = (_BYTE *)a1[4].m128i_i64[1];
      if ( v13 != v14 )
        goto LABEL_9;
    }
    else
    {
      v21 = (unsigned __int8 *)a1->m128i_i64[0];
      if ( a1->m128i_i64[0] == a1->m128i_i64[1] )
      {
        a1[1].m128i_i32[1] = -1;
LABEL_37:
        v12 = -1;
        goto LABEL_12;
      }
      v12 = *v21;
      v14 = (_BYTE *)a1[4].m128i_i64[1];
      a1->m128i_i64[0] = (__int64)(v21 + 1);
      v13 = (_BYTE *)a1[4].m128i_i64[0];
      a1[1].m128i_i32[1] = v12;
      if ( v13 != v14 )
      {
LABEL_9:
        *v13 = v12;
        v12 = a1[1].m128i_i32[1];
        ++a1[4].m128i_i64[0];
        goto LABEL_10;
      }
    }
    v22 = &v13[-a1[3].m128i_i64[1]];
    if ( v22 == (_BYTE *)0x7FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("vector::_M_realloc_append");
    v23 = 1;
    src = (void *)a1[3].m128i_i64[1];
    if ( v22 )
      v23 = (__int64)&v13[-a1[3].m128i_i64[1]];
    v37 = v14;
    n = (size_t)&v13[-a1[3].m128i_i64[1]];
    v24 = (unsigned __int64)&v22[v23];
    if ( (unsigned __int64)&v22[v23] > 0x7FFFFFFFFFFFFFFFLL )
      v24 = 0x7FFFFFFFFFFFFFFFLL;
    v25 = (_BYTE *)operator new(v24);
    v26 = n;
    v27 = v37;
    v28 = src;
    v29 = v25;
    v25[n] = v12;
    if ( n )
    {
      srca = v37;
      v39 = n;
      nc = (size_t)v28;
      v31 = memcpy(v25, v28, v26);
      v28 = (void *)nc;
      v29 = v31;
      v27 = srca;
      v30 = (__int64)&v31[v39 + 1];
      if ( !nc )
        goto LABEL_30;
LABEL_29:
      v38 = v29;
      nb = v30;
      operator delete(v28, v27 - (_BYTE *)v28);
      v12 = a1[1].m128i_i32[1];
      v29 = v38;
      v30 = nb;
      goto LABEL_30;
    }
    v30 = (__int64)(v25 + 1);
    if ( src )
      goto LABEL_29;
LABEL_30:
    a1[3].m128i_i64[1] = (__int64)v29;
    a1[4].m128i_i64[0] = v30;
    a1[4].m128i_i64[1] = (__int64)&v29[v24];
LABEL_10:
    if ( v12 == 10 )
    {
      ++a1[3].m128i_i64[0];
      a1[2].m128i_i64[1] = 0;
    }
LABEL_12:
    if ( *v9 > v12 || v9[1] < v12 )
      break;
    v15 = (__m128i *)a1[5].m128i_i64[0];
    v16 = a1[5].m128i_i64[1];
    if ( &a1[6] == v15 )
      v17 = 15;
    else
      v17 = a1[6].m128i_u64[0];
    v18 = v16 + 1;
    if ( v17 < v16 + 1 )
    {
      std::string::_M_mutate();
      v18 = v16 + 1;
      *(_BYTE *)(a1[5].m128i_i64[0] + v16) = v12;
    }
    else
    {
      v15->m128i_i8[v16] = v12;
    }
    v19 = a1[5].m128i_i64[0];
    v9 += 2;
    a1[5].m128i_i64[1] = v18;
    *(_BYTE *)(v19 + v16 + 1) = 0;
    if ( v9 == v11 )
      return 1;
  }
  a1[7].m128i_i64[0] = (__int64)"invalid string: ill-formed UTF-8 byte";
  return 0;
}

