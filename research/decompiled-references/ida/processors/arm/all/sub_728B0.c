__int64 __fastcall sub_728B0(const __m128i *a1, int a2)
{
  unsigned int v2; // ebp
  __int64 v4; // r13
  unsigned __int8 v5; // r13
  unsigned __int8 v6; // al
  bool v7; // r15
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  bool v11; // cc
  bool v12; // al
  __int16 v13; // ax
  __m128i *v14; // rax
  __int8 v15; // dl
  __int16 v16; // cx

  if ( (a1[3].m128i_i8[0] & 0xF) != 0xE )
    return 0;
  v4 = a1[54].m128i_i64[0];
  if ( !*(_BYTE *)(v4 + 1) )
  {
    a1[49].m128i_i8[8] = 1;
    return 0;
  }
  v2 = (*(__int64 (__fastcall **)(const __m128i *, __int64 *, __int64))(a1->m128i_i64[0] + 8))(
         a1,
         &a1[3].m128i_i64[1],
         a1[54].m128i_i64[0]);
  if ( !(_BYTE)v2 )
    return 0;
  v5 = *(_BYTE *)(v4 + 5);
  v6 = a1[3].m128i_u8[13];
  v7 = v5 <= 0xF9u;
  if ( v6 > 0xF9u )
  {
    if ( v5 > 0xF9u && v6 >= v5 )
      goto LABEL_16;
  }
  else if ( v5 > 0xF9u || v6 >= v5 || a1->m128i_i8[8] && v6 == 2 )
  {
    goto LABEL_16;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
  if ( v8 == sub_6ACC0 )
    return 0;
  v9 = v8((__int64)a1, (__int64)&a1[3].m128i_i64[1]);
  v10 = v7 || v9 < v5;
  v11 = v9 <= 0xF9u;
  v12 = v7 && v9 < v5;
  if ( !v11 )
    v12 = v10;
  if ( v12 )
    return 0;
LABEL_16:
  v13 = a1[2].m128i_i16[4];
  if ( v13 == 6 )
  {
    if ( a1[6].m128i_i8[1] != 1 || a1[8].m128i_i8[9] != 5 || a1[9].m128i_i64[0] != a2 )
      return 0;
LABEL_23:
    v14 = (__m128i *)a1[54].m128i_i64[0];
    *v14 = _mm_loadu_si128(a1 + 6);
    v14[1] = _mm_loadu_si128(a1 + 7);
    v14[2].m128i_i32[0] = a1[8].m128i_i32[0];
    return v2;
  }
  if ( v13 == 23 )
  {
    if ( a1[6].m128i_i8[1] == 8 && !a1[8].m128i_i8[1] && a1[6].m128i_i64[1] == a2 )
    {
      v15 = a1[6].m128i_i8[5];
      v16 = a1[6].m128i_i16[3];
      *(_BYTE *)(a1[54].m128i_i64[0] + 1) = 1;
      *(_WORD *)(a1[54].m128i_i64[0] + 6) = v16;
      *(_BYTE *)(a1[54].m128i_i64[0] + 5) = v15;
      return v2;
    }
    return 0;
  }
  if ( v13 == 14
    && a2 == 1
    && a1[6].m128i_i8[1] == 1
    && a1[8].m128i_i8[9] == 1
    && a1[6].m128i_i16[3] == a1[8].m128i_i16[7] )
  {
    goto LABEL_23;
  }
  return 0;
}
