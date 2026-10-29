__int64 __fastcall sub_326F0(const __m128i *a1)
{
  __int64 v1; // r12
  unsigned int v2; // ebp
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // al
  bool v6; // r14
  int v7; // eax
  int v8; // ecx
  __m128i v9; // xmm0
  __int32 v10; // edx
  __m128i *v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  unsigned __int8 v13; // al
  bool v14; // dl

  v1 = a1[54].m128i_i64[0];
  if ( !*(_BYTE *)(v1 + 1) )
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
  v4 = *(_BYTE *)(v1 + 5);
  v5 = a1[3].m128i_u8[13];
  v6 = v4 <= 0xF9u;
  if ( v5 <= 0xF9u )
  {
    if ( v4 > 0xF9u || v5 >= v4 || a1->m128i_i8[8] && v5 == 2 )
      goto LABEL_11;
LABEL_18:
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
    if ( v12 == sub_313C0 )
      return 0;
    v13 = v12((__int64)a1, (__int64)&a1[3].m128i_i64[1]);
    v14 = v6 || v13 < v4;
    if ( v13 <= 0xF9u )
      v14 = v6 && v13 < v4;
    if ( v14 )
      return 0;
    goto LABEL_11;
  }
  if ( v4 <= 0xF9u || v5 < v4 )
    goto LABEL_18;
LABEL_11:
  if ( a1[2].m128i_i16[4] == 167 && a1[10].m128i_i8[9] == 29 )
  {
    v7 = a1[10].m128i_i8[8];
    if ( a1[10].m128i_i8[8] > 1 )
    {
      v8 = a1[8].m128i_u16[7];
      if ( v8 >= 32 - v7 )
      {
        v9 = _mm_loadu_si128(a1 + 6);
        v10 = 30 - v7;
        a1[60].m128i_i32[1] = v8 + v7 - 32;
        v11 = (__m128i *)a1[54].m128i_i64[0];
        a1[60].m128i_i32[0] = v10;
        *v11 = v9;
        v11[1] = _mm_loadu_si128(a1 + 7);
        v11[2].m128i_i32[0] = a1[8].m128i_i32[0];
        return v2;
      }
    }
  }
  return 0;
}
