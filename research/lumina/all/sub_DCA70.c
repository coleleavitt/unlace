__int64 __fastcall sub_DCA70(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rbp
  int v5; // edx
  char v6; // cl
  __int64 v7; // rsi
  int v8; // eax

  if ( a2->m128i_i8[0] != -89 )
    return 0;
  v3 = *(_QWORD *)(a1 + 40);
  if ( a2[2].m128i_i32[3] == *(_DWORD *)(v3 + 8) && a2[3].m128i_i16[0] == *(_DWORD *)(v3 + 20) )
  {
    sub_DCA00(v3 + 24, *(_QWORD *)(v3 + 32), a2);
    v5 = a2[3].m128i_i16[0];
    v6 = 68;
    if ( v5 >= 0 )
    {
      v7 = a2[4].m128i_i64[0];
      if ( v5 < *(__int16 *)(v7 + 54) )
        v6 = *(_BYTE *)(*(_QWORD *)(v7 + 8) + 16LL * a2[3].m128i_i16[0] + 9);
    }
    a2->m128i_i8[1] = v6;
    a2[2].m128i_i32[3] = *(_DWORD *)(v3 + 12);
    v8 = *(_DWORD *)(v3 + 16);
    a2[4].m128i_i64[0] = 0;
    a2[3].m128i_i16[0] = v8;
  }
  return 0;
}
