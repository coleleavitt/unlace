void __fastcall sub_FEB0(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rsi
  int v5; // eax

  if ( (a2 & 1) != 0 )
  {
    v4 = (_BYTE *)(a4 + 41);
    v5 = 0;
    while ( *v4 )
    {
      ++v5;
      v4 += 40;
      if ( v5 == 6 )
        JUMPOUT(0xFED7);
    }
    sub_FF00();
  }
}

