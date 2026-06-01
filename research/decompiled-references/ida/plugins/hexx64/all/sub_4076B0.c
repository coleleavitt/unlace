__int64 __fastcall sub_4076B0(
        __int64 a1,
        __int16 a2,
        unsigned int a3,
        unsigned int a4,
        __m128i a5,
        __m128 a6,
        __m128 a7)
{
  char v7; // al
  char v9; // al

  if ( (a2 & 4) != 0 )
  {
    if ( (a2 & 0x100) != 0 )
      return a3;
    v7 = *(_BYTE *)(a1 + 65);
    if ( v7 != 1 && (unsigned __int8)(v7 - 11) > 3u )
      return a3;
    else
      return sub_3F9DC0(a1, 0, a3, a5, a6, a7);
  }
  else if ( (a2 & 8) != 0 )
  {
    if ( (a2 & 0x200) != 0 )
      return a4;
    v9 = *(_BYTE *)(a1 + 105);
    if ( v9 != 1 && (unsigned __int8)(v9 - 11) > 3u )
      return a4;
    else
      return sub_3F9DC0(a1, 1, a4, a5, a6, a7);
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}

