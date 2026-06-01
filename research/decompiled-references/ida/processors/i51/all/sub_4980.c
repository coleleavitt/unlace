void __fastcall sub_4980(__int64 a1, unsigned __int16 a2)
{
  if ( a2 == 6 )
  {
    *(_BYTE *)(a1 + 81) = 3;
    *(_WORD *)(a1 + 86) = 0;
  }
  else
  {
    if ( a2 > 6u )
    {
      if ( a2 == 7 )
      {
        *(_BYTE *)(a1 + 81) = 3;
        *(_WORD *)(a1 + 86) = 1;
        return;
      }
      goto LABEL_8;
    }
    if ( a2 != 4 )
    {
      if ( a2 == 5 )
      {
        *(_BYTE *)(a1 + 81) = 2;
        *(_QWORD *)(a1 + 96) = (unsigned __int8)insn_get_next_byte();
        return;
      }
LABEL_8:
      *(_BYTE *)(a1 + 81) = 1;
      *(_WORD *)(a1 + 86) = a2 - 5;
      return;
    }
    *(_BYTE *)(a1 + 81) = 5;
    *(_QWORD *)(a1 + 88) = (unsigned __int8)insn_get_next_byte();
  }
}

