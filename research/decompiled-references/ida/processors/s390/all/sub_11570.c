__int64 __fastcall sub_11570(const __m128i *a1)
{
  __int64 v2; // rbp
  char v3; // al
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rcx
  bool v5; // al
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al
  bool v8; // r12
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl
  bool v12; // cc
  bool v13; // al
  __m128i *v14; // rax

  if ( a1[2].m128i_i16[4] != 746 )
    return 0;
  v2 = a1[54].m128i_i64[0];
  v3 = *(_BYTE *)(v2 + 1);
  if ( !v3 )
  {
    a1[49].m128i_i8[8] = 1;
    return 0;
  }
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1->m128i_i64[0] + 8);
  if ( v4 == sub_110E0 )
  {
    if ( v3 != a1[3].m128i_i8[9] )
      return 0;
    if ( v3 != 99 )
    {
      if ( v3 == 100 )
      {
        v5 = a1[4].m128i_i64[0] == *(_QWORD *)(v2 + 8);
      }
      else
      {
        if ( v3 != 1 )
          return 0;
        v5 = a1[3].m128i_i16[7] == *(_WORD *)(v2 + 6);
      }
      if ( !v5 )
        return 0;
    }
  }
  else if ( !(unsigned __int8)v4((__int64)a1, (__int64)&a1[3].m128i_i64[1], v2) )
  {
    return 0;
  }
  v6 = *(_BYTE *)(v2 + 5);
  v7 = a1[3].m128i_u8[13];
  v8 = v6 <= 0xF9u;
  if ( v7 > 0xF9u )
  {
    if ( v6 > 0xF9u && v7 >= v6 )
      goto LABEL_22;
  }
  else if ( v6 > 0xF9u || v7 >= v6 || a1->m128i_i8[8] && v7 == 2 )
  {
    goto LABEL_22;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
  if ( v9 == sub_11140 )
    return 0;
  v10 = v9((__int64)a1, (__int64)&a1[3].m128i_i64[1]);
  v11 = v8 || v10 < v6;
  v12 = v10 <= 0xF9u;
  v13 = v10 < v6 && v8;
  if ( !v12 )
    v13 = v11;
  if ( v13 )
    return 0;
LABEL_22:
  v14 = (__m128i *)a1[54].m128i_i64[0];
  *v14 = _mm_loadu_si128(a1 + 6);
  v14[1] = _mm_loadu_si128(a1 + 7);
  v14[2].m128i_i32[0] = a1[8].m128i_i32[0];
  return 1;
}

