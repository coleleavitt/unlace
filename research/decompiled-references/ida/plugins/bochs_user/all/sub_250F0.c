__int64 __fastcall sub_250F0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v5; // r14d
  int v6; // eax
  _WORD *v7; // r12
  unsigned __int64 v8; // rbp
  int v10; // eax

  if ( (a4 & 1) != 0 )
    v5 = qgmtime();
  else
    v5 = qlocaltime();
  if ( (_BYTE)v5 )
  {
    v6 = qsnprintf();
    v7 = (_WORD *)(v6 + a1);
    v8 = a2 - v6;
    if ( (a4 & 4) != 0 )
    {
      v10 = qsnprintf();
      v7 = (_WORD *)((char *)v7 + v10);
      v8 -= v10;
      if ( (~a4 & 3) != 0 )
        return v5;
    }
    else if ( (~a4 & 3) != 0 )
    {
      return v5;
    }
    if ( v8 > 1 )
      *v7 = 90;
  }
  return v5;
}

