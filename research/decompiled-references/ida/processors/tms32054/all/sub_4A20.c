void __fastcall sub_4A20(__int64 a1, __int64 a2, char a3, int a4, char a5)
{
  char v5; // al
  int v6; // ecx

  *(_BYTE *)(a2 + 5) = a3;
  if ( (a4 & 0x80u) != 0 )
  {
    v5 = a4;
    *(_BYTE *)(a2 + 1) = 4;
    v6 = (a4 >> 3) & 0xF;
    *(_BYTE *)(a2 + 32) = v6;
    *(_WORD *)(a2 + 6) = (v5 & 7) + 31;
    if ( (char)v6 > 11 )
    {
      if ( a5 )
      {
        *(_WORD *)(a1 + 24) = 0;
      }
      else
      {
        *(_BYTE *)(a2 + 1) = 9 * ((_BYTE)v6 == 15) + 4;
        *(_QWORD *)(a2 + 16) = get_wide_byte();
        ++*(_WORD *)(a1 + 26);
      }
    }
  }
  else
  {
    *(_QWORD *)(a2 + 16) = a4 & 0x7F;
    if ( a5 )
      *(_BYTE *)(a2 + 1) = 12;
    else
      *(_BYTE *)(a2 + 1) = (unsigned __int64)(get_sreg() - 1) < 0xFFFFFFFFFFFFFFFELL ? 11 : 2;
  }
}

