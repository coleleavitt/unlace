__int64 __fastcall sub_4930(__int64 a1, __int64 a2, int a3, int a4)
{
  char v4; // al
  unsigned int v5; // ecx
  unsigned int v6; // edx

  v4 = a3;
  if ( a4 )
  {
    v5 = a3 - 4;
    v6 = 0;
    if ( v5 > 1 )
    {
      *(_WORD *)(a2 + 24) = (v4 & 7) + 2;
      return 1;
    }
    return v6;
  }
  else
  {
    *(_WORD *)(a2 + 24) = (a3 & 0xF) + 2;
    return 1;
  }
}

