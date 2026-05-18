void __fastcall sub_FD850(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  const __m128i *v8; // rbx

  v7 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v7 + 20) >= 0 )
    v8 = (const __m128i *)sub_EF2D0((_QWORD *)(a1 + 8), v7, 0, a4, a5, a6);
  else
    v8 = *(const __m128i **)(v7 + 8);
  if ( v8 )
  {
    if ( v8[1].m128i_i16[2] )
    {
      v7 = (__int64)v8;
      sub_FD650(a1, v8, a3, a4, a5, a6);
      if ( a2 )
        return;
      if ( (v8[1].m128i_i16[2] & 0x9000) != 0 )
      {
LABEL_12:
        sub_C9690((__int64)v8, v7, a3, a4, a5, a6);
        return;
      }
    }
    else if ( a2 )
    {
      return;
    }
    if ( v8[2].m128i_i32[0] )
      goto LABEL_12;
  }
}
