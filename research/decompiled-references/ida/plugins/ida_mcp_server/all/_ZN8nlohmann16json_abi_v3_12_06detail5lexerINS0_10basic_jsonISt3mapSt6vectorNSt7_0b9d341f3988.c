__int64 __fastcall nlohmann::json_abi_v3_12_0::detail::lexer<nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>,nlohmann::json_abi_v3_12_0::detail::iterator_input_adapter<char const*>>::get_codepoint(
        __m128i *a1)
{
  __m128i si128; // xmm1
  unsigned int v2; // r13d
  int *v3; // r12
  int v4; // ecx
  int v5; // ebp
  _BYTE *v6; // rax
  _BYTE *v7; // r8
  int v8; // edx
  unsigned __int8 *v10; // rax
  size_t v11; // r15
  __int64 v12; // r9
  unsigned __int64 v13; // r9
  _BYTE *v14; // rax
  void *v15; // r9
  _BYTE *v16; // r8
  _BYTE *v17; // r11
  void *v18; // r10
  __int64 v19; // r15
  const void *v20; // rsi
  _BYTE *v21; // rax
  void *v22; // [rsp+0h] [rbp-58h]
  char v23; // [rsp+0h] [rbp-58h]
  void *v24; // [rsp+0h] [rbp-58h]
  char v25; // [rsp+8h] [rbp-50h]
  void *v26; // [rsp+8h] [rbp-50h]
  _BYTE *v27; // [rsp+10h] [rbp-48h]
  _BYTE *v28; // [rsp+10h] [rbp-48h]
  void *src; // [rsp+18h] [rbp-40h]
  void *srca; // [rsp+18h] [rbp-40h]

  si128 = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
  v2 = 0;
  v3 = (int *)&C_948_7;
  while ( 1 )
  {
    v4 = *v3;
    a1[2] = _mm_add_epi64(_mm_loadu_si128(a1 + 2), si128);
    if ( a1[1].m128i_i8[8] )
    {
      v5 = a1[1].m128i_i32[1];
      a1[1].m128i_i8[8] = 0;
      if ( v5 == -1 )
        return (unsigned int)-1;
      v6 = (_BYTE *)a1[4].m128i_i64[0];
      v7 = (_BYTE *)a1[4].m128i_i64[1];
      if ( v6 != v7 )
        goto LABEL_5;
    }
    else
    {
      v10 = (unsigned __int8 *)a1->m128i_i64[0];
      if ( a1->m128i_i64[0] == a1->m128i_i64[1] )
      {
        a1[1].m128i_i32[1] = -1;
        v8 = -1;
        goto LABEL_28;
      }
      v5 = *v10;
      v7 = (_BYTE *)a1[4].m128i_i64[1];
      a1->m128i_i64[0] = (__int64)(v10 + 1);
      v6 = (_BYTE *)a1[4].m128i_i64[0];
      a1[1].m128i_i32[1] = v5;
      if ( v6 != v7 )
      {
LABEL_5:
        *v6 = v5;
        v5 = a1[1].m128i_i32[1];
        ++a1[4].m128i_i64[0];
        if ( v5 == 10 )
          break;
        goto LABEL_6;
      }
    }
    v11 = (size_t)&v6[-a1[3].m128i_i64[1]];
    if ( v11 == 0x7FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("vector::_M_realloc_append");
    v12 = 1;
    src = (void *)a1[3].m128i_i64[1];
    if ( v11 )
      v12 = (__int64)&v6[-a1[3].m128i_i64[1]];
    v27 = v7;
    v25 = v4;
    v13 = v11 + v12;
    if ( v13 > 0x7FFFFFFFFFFFFFFFLL )
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    v22 = (void *)v13;
    v14 = (_BYTE *)operator new(v13);
    v15 = v22;
    LOBYTE(v4) = v25;
    v14[v11] = v5;
    v16 = v27;
    v17 = v14;
    v18 = src;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3E2050);
    if ( !v11 )
    {
      v19 = (__int64)(v14 + 1);
      if ( !src )
        goto LABEL_20;
LABEL_19:
      v28 = v17;
      v26 = v15;
      v23 = v4;
      operator delete(v18, v16 - (_BYTE *)v18);
      v5 = a1[1].m128i_i32[1];
      v17 = v28;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3E2050);
      v15 = v26;
      LOBYTE(v4) = v23;
      goto LABEL_20;
    }
    v20 = src;
    srca = v22;
    v24 = v18;
    v21 = memcpy(v14, v20, v11);
    v18 = v24;
    v15 = srca;
    v17 = v21;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3E2050);
    v16 = v27;
    LOBYTE(v4) = v25;
    v19 = (__int64)&v21[v11 + 1];
    if ( v24 )
      goto LABEL_19;
LABEL_20:
    a1[3].m128i_i64[1] = (__int64)v17;
    a1[4].m128i_i64[0] = v19;
    a1[4].m128i_i64[1] = (__int64)&v17[(_QWORD)v15];
    if ( v5 == 10 )
      break;
LABEL_6:
    v8 = v5;
    if ( (unsigned int)(v5 - 48) <= 9 )
    {
      v2 += (v5 - 48) << v4;
      goto LABEL_8;
    }
    if ( (unsigned int)(v5 - 65) <= 5 )
    {
      v2 += (v5 - 55) << v4;
      goto LABEL_8;
    }
LABEL_28:
    if ( (unsigned int)(v8 - 97) > 5 )
      return (unsigned int)-1;
    v2 += (v8 - 87) << v4;
LABEL_8:
    if ( &C_941_3 == (_UNKNOWN *)++v3 )
      return v2;
  }
  ++a1[3].m128i_i64[0];
  a1[2].m128i_i64[1] = 0;
  return (unsigned int)-1;
}

