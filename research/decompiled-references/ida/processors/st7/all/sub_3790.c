void __fastcall sub_3790(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  int v5; // eax
  int v6; // eax

  if ( a3 == 1 )
  {
    *(_BYTE *)(a2 + 1) = 2;
    *(_BYTE *)(a2 + 5) = 1;
    *(_BYTE *)(a2 + 2) = *(_WORD *)(a1 + 26);
    *(_QWORD *)(a2 + 16) = (unsigned __int8)insn_get_next_byte();
    v6 = *(_DWORD *)(a1 + 28);
    if ( (v6 & 2) != 0 )
    {
      v5 = v6 | 1;
      *(_DWORD *)(a1 + 28) = v5;
      if ( a4 )
        goto LABEL_7;
    }
    else
    {
      *(_DWORD *)(a1 + 28) = v6 | 8;
      *(_BYTE *)(a2 + 5) = 0;
      *(_QWORD *)(a2 + 16) <<= 8;
      *(_QWORD *)(a2 + 16) |= (unsigned __int8)insn_get_next_byte();
      if ( a4 )
      {
LABEL_4:
        v5 = *(_DWORD *)(a1 + 28);
        if ( (v5 & 2) != 0 )
        {
LABEL_7:
          *(_DWORD *)(a1 + 28) = v5 | 4;
          *(_WORD *)(a2 + 6) = a4;
          return;
        }
        *(_BYTE *)(a2 + 1) = 4;
LABEL_6:
        v5 = *(_DWORD *)(a1 + 28);
        goto LABEL_7;
      }
    }
  }
  else
  {
    if ( a3 != 2 )
    {
      *(_BYTE *)(a2 + 1) = 2;
      *(_BYTE *)(a2 + 5) = 0;
      *(_BYTE *)(a2 + 2) = *(_WORD *)(a1 + 26);
      *(_QWORD *)(a2 + 16) = (unsigned __int8)insn_get_next_byte();
      if ( !a4 )
        return;
      goto LABEL_4;
    }
    *(_BYTE *)(a2 + 1) = 3;
    *(_BYTE *)(a2 + 5) = 0;
    if ( a4 )
      goto LABEL_6;
  }
}

