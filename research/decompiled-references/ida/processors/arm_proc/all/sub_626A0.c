__int64 __fastcall sub_626A0(__int64 a1, __int16 a2, __int16 a3, int a4)
{
  __int16 v4; // si
  char v5; // dl
  __int16 v6; // si

  if ( !a4 )
    return 0;
  if ( (unsigned int)(a4 - 1) > 2 )
  {
    sub_62640();
    return sub_62710();
  }
  else if ( a4 == 3 )
  {
    *(_BYTE *)(a1 + 1) = 1;
    *(_BYTE *)(a1 + 5) = 4;
    *(_WORD *)(a1 + 6) = (a2 | (16 * a3)) + 61;
    return 1;
  }
  else
  {
    *(_BYTE *)(a1 + 1) = 1;
    v4 = a3 | (2 * a2);
    v5 = 18;
    v6 = v4 + 93;
    if ( a4 != 1 )
      v5 = 3;
    *(_WORD *)(a1 + 6) = v6;
    *(_BYTE *)(a1 + 5) = v5;
    return 1;
  }
}

