void __fastcall sub_3E1250(
        double a1,
        double a2,
        __m128i a3,
        __m128 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  char v11; // al

  if ( (a6 & 8) != 0 && (a6 & 0xFFFFFF73) == 0 )
  {
    sub_3D6A50(a7, ((a6 & 0x84) == 0) + 1, a7, a8, a9, a10);
    if ( !v11 )
      sub_3E11B0(a7, ((a6 & 0x84) == 0) + 1, a1, a2, a3, a4);
  }
}

