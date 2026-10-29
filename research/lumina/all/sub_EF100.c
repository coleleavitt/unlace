void __fastcall sub_EF100(__int64 a1, char a2, unsigned __int8 a3, int a4, int a5, int a6, double a7)
{
  __int16 v7; // ax
  __int16 v8; // ax

  if ( a2 <= 66 )
  {
    if ( a2 == 66 )
    {
      v8 = *(_WORD *)(a1 + 20);
      if ( (v8 & 2) == 0 && (v8 & 0x2C) != 0 )
      {
        sub_D9920(a1, a3, 1, a4, a5, a6, a7);
        v8 = *(_WORD *)(a1 + 20);
      }
      *(_WORD *)(a1 + 20) = v8 & 0xFFD3;
    }
  }
  else
  {
    v7 = *(_WORD *)(a1 + 20);
    if ( (v7 & 4) == 0 )
    {
      if ( (v7 & 8) != 0 )
      {
        sub_CD250((double *)a1, (_WORD *)(a1 + 20));
      }
      else if ( (v7 & 2) != 0 )
      {
        sub_CD2A0(a1, 1);
      }
    }
  }
}
