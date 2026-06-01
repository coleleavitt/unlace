bool __fastcall sub_9BA0(const __m128i *a1)
{
  __int64 v1; // rbx
  char v2; // al
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rcx
  bool v5; // al
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // al
  bool v8; // bp
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int8 v10; // al
  bool v11; // dl

  v1 = a1[54].m128i_i64[0];
  v2 = *(_BYTE *)(v1 + 81);
  if ( !v2 )
  {
    a1[49].m128i_i8[8] = 1;
    return 0;
  }
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1->m128i_i64[0] + 8);
  if ( v4 == sub_9290 )
  {
    if ( v2 != a1[3].m128i_i8[9] )
      return 0;
    if ( v2 != 99 )
    {
      if ( v2 == 100 )
      {
        v5 = a1[4].m128i_i64[0] == *(_QWORD *)(v1 + 88);
      }
      else
      {
        if ( v2 != 1 )
          return 0;
        v5 = a1[3].m128i_i16[7] == *(_WORD *)(v1 + 86);
      }
      if ( !v5 )
        return 0;
    }
  }
  else if ( !(unsigned __int8)v4((__int64)a1, (__int64)&a1[3].m128i_i64[1], v1 + 80) )
  {
    return 0;
  }
  v6 = *(_BYTE *)(v1 + 85);
  v7 = a1[3].m128i_u8[13];
  v8 = v6 <= 0xF9u;
  if ( v7 > 0xF9u )
  {
    if ( v6 > 0xF9u && v7 >= v6 )
      return sub_9880(a1);
  }
  else if ( v6 > 0xF9u || v7 >= v6 || a1->m128i_i8[8] && v7 == 2 )
  {
    return sub_9880(a1);
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 32);
  if ( v9 == sub_92F0 )
    return 0;
  v10 = v9((__int64)a1, (__int64)&a1[3].m128i_i64[1]);
  v11 = v8 || v10 < v6;
  if ( v10 <= 0xF9u )
    v11 = v8 && v10 < v6;
  if ( v11 )
    return 0;
  return sub_9880(a1);
}

