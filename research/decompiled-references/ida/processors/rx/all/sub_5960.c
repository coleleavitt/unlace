void __fastcall sub_5960(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // ecx
  char v6; // dl
  int v7; // eax

  v4 = a4 & 3;
  if ( v4 != 2 )
  {
    if ( v4 == 3 )
    {
      *(_BYTE *)(a3 + 1) = 1;
      *(_BYTE *)(a3 + 5) = 1;
      return;
    }
    if ( v4 != 1 )
    {
      *(_BYTE *)(a3 + 1) = 3;
      *(_BYTE *)(a3 + 5) = 1;
      return;
    }
    *(_BYTE *)(a3 + 1) = 4;
    *(_BYTE *)(a3 + 5) = 1;
    LOBYTE(v7) = insn_get_next_byte();
    v6 = *(_BYTE *)(a2 + 33);
    v7 = (unsigned __int8)v7;
    if ( v6 == 3 )
      goto LABEL_11;
LABEL_7:
    if ( ((v6 - 2) & 0xFD) == 0 )
      v7 *= 2;
    goto LABEL_9;
  }
  *(_BYTE *)(a3 + 1) = 4;
  *(_BYTE *)(a3 + 5) = 2;
  LOWORD(v7) = insn_get_next_word();
  v6 = *(_BYTE *)(a2 + 33);
  v7 = (unsigned __int16)v7;
  if ( v6 != 3 )
    goto LABEL_7;
LABEL_11:
  v7 *= 4;
LABEL_9:
  *(_QWORD *)(a3 + 8) = v7;
}

