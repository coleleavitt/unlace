__m128i *__fastcall sub_3D7880(
        __m128i *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        double a4,
        double a5,
        double a6,
        __m128 a7)
{
  __int64 *v7; // rax
  __int64 *v8; // rdx
  int v9; // r11d

  v7 = (__int64 *)sub_3CCB40((__int64)a2, a3);
  if ( v7 == v8 )
  {
LABEL_6:
    *a1 = 0;
  }
  else
  {
    while ( *(_DWORD *)(*v7 + 56) != v9 )
    {
      if ( v8 == ++v7 )
        goto LABEL_6;
    }
    sub_3D7530(a1, *v7, *a2, a4, a5, a6, a7);
  }
  return a1;
}

