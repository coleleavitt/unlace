__int64 __fastcall sub_F7AC0(__int64 *a1, __m128i *a2, double a3, __m128 a4)
{
  unsigned int v4; // ebx

  v4 = sub_316BB0(a1 + 23, a2, a3, a4);
  if ( (_BYTE)v4 )
  {
    sub_139B20((__int64)a1);
    sub_316BB0(a1 + 26, a2, a3, a4);
    if ( (unsigned __int8)sub_317BD0(a1 + 29, a2) )
      sub_18D960((__int64)a1);
  }
  return v4;
}

