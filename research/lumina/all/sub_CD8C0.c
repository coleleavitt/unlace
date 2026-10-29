__int64 __fastcall sub_CD8C0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx

  if ( *(_WORD *)(a1 + 32) != a2[2].m128i_i16[0] )
    return 1;
  v7 = a2[17].m128i_u32[3];
  if ( (_DWORD)v7 )
    a2[12].m128i_i8[6] = a2[12].m128i_i8[6] & 0xFC | 1;
  if ( *(_DWORD *)(a1 + 284) )
    *(_BYTE *)(a1 + 198) = *(_BYTE *)(a1 + 198) & 0xFC | 1;
  return sub_C9790(a1, a2, v7, a4, a5, a6);
}
