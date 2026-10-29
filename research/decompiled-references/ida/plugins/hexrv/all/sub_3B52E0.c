__int64 __fastcall sub_3B52E0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rsi
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 result; // rax

  sub_386210(a10, 0);
  v11 = sub_3884A0(a10 + 80);
  result = 0;
  if ( v11 )
    return (unsigned __int8)sub_394690(a10, v11, a1, a2, a3, a4, v12, v13, a7, a8);
  return result;
}

