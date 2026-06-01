__int64 __fastcall sub_3A0050(__int64 a1, int a2, __m128 a3, __m128 a4, __m128i a5, double a6)
{
  unsigned int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax

  sub_38B490(a1, 0);
  v6 = 0;
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v7 = sub_384AF0(*(_QWORD *)(a1 + 88));
    if ( v7 )
    {
      if ( a2 == 10 )
      {
LABEL_12:
        v8 = 0x22222202200000LL;
        goto LABEL_7;
      }
      if ( a2 > 10 )
      {
        if ( a2 == 16 )
          goto LABEL_10;
      }
      else
      {
        v8 = 0x33333303300000LL;
        if ( !a2 )
          goto LABEL_7;
        v8 = 0x77777707700000LL;
        if ( a2 == 8 )
          goto LABEL_7;
      }
      if ( (unsigned int)get_radix() != 10 )
        goto LABEL_12;
LABEL_10:
      v8 = 0x11111101100000LL;
LABEL_7:
      v9 = *(_QWORD *)(v7 + 40) & 0xFF000000F00FFFFFLL;
      *(_BYTE *)(v7 + 13) |= 1u;
      *(_QWORD *)(v7 + 40) = v8 | v9;
      sub_39FD80(a1, v7, 1u, a3, a4, a5, a6);
      return 1;
    }
  }
  return v6;
}

