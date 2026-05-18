__int64 __fastcall sub_F10A0(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5, int a6, double a7)
{
  unsigned __int16 v7; // ax
  __int16 v9; // ax
  int v11; // r12d
  __int16 v12; // ax
  __int16 v13; // ax

  v7 = *(_WORD *)(a1 + 20);
  if ( (v7 & 1) != 0 )
    return 0;
  if ( a2 == 67 )
  {
    sub_CB5F0(a1);
    return 0;
  }
  else
  {
    if ( a2 <= 0x43u )
    {
      if ( a2 == 65 )
      {
        if ( (v7 & 0x10) != 0 )
        {
          *(_WORD *)(a1 + 20) = v7 & 0xF250;
        }
        else
        {
          sub_EF100(a1, 66, a3, a4, a5, a6, a7);
          v13 = *(_WORD *)(a1 + 20);
          if ( (v13 & 2) != 0 )
            *(_WORD *)(a1 + 20) = v13 & 0xF240 | 0x10;
        }
        return 0;
      }
    }
    else
    {
      if ( a2 == 68 )
      {
        *(_QWORD *)a1 = sub_CD0F0((char **)a1);
        *(_WORD *)(a1 + 20) = *(_WORD *)(a1 + 20) & 0xF240 | 4;
        return 0;
      }
      if ( a2 == 69 )
      {
        sub_CD1F0(a1);
        v9 = *(_WORD *)(a1 + 20);
        *(double *)a1 = a7;
        *(_WORD *)(a1 + 20) = v9 & 0xF240 | 8;
        return 0;
      }
    }
    v11 = a3;
    *(_WORD *)(a1 + 20) = (v7 >> 3) & 2 | v7;
    sub_EF100(a1, 66, a3, a4, a5, a6, a7);
    v12 = *(_WORD *)(a1 + 20);
    *(_WORD *)(a1 + 20) = v12 & 0xFBC3;
    if ( (v12 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 22) = a3;
      return 0;
    }
    if ( v11 == *(unsigned __int8 *)(a1 + 22) )
      return 0;
    return sub_E03B0(a1, v11);
  }
}
