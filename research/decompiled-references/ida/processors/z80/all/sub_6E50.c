__int64 __fastcall sub_6E50(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = (*(int *)(a1 + 228) >> 3) & 7;
  if ( v2 == 6 )
  {
    *(_BYTE *)(a2 + 1) = 3;
    *(_WORD *)(a2 + 6) = 10;
    return 1;
  }
  else
  {
    *(_BYTE *)(a2 + 1) = 1;
    if ( v2 != 4 )
    {
      if ( v2 == 5 )
      {
        LOWORD(v2) = 21;
        if ( *(_BYTE *)(a1 + 234) )
          LOWORD(v2) = 19;
      }
      goto LABEL_4;
    }
    LOWORD(v2) = 22;
    if ( !*(_BYTE *)(a1 + 234) )
    {
LABEL_4:
      *(_WORD *)(a2 + 6) = v2;
      return 0;
    }
    *(_WORD *)(a2 + 6) = 20;
    return 0;
  }
}

