__int64 __fastcall sub_3DD0D0(
        double a1,
        double a2,
        double a3,
        __m128 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // rax

  if ( (a6 & 8) == 0 || (a6 & 0xFFFFFF73) != 0 )
    return 0;
  result = sub_3D28D0(a7, (unsigned int)((a6 & 0x84) == 0) + 1, a7, a8, a9, a10);
  if ( !(_BYTE)result )
    return sub_3DD030(a7, (unsigned int)((a6 & 0x84) == 0) + 1, a1, a2, a3, a4);
  return result;
}

