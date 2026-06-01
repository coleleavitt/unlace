void __fastcall sub_4A00(__int64 a1, int a2)
{
  if ( a2 == 6 )
  {
    *(_BYTE *)(a1 + 41) = 3;
    *(_WORD *)(a1 + 46) = 0;
  }
  else
  {
    if ( a2 > 6 )
    {
      if ( a2 == 7 )
      {
        *(_BYTE *)(a1 + 41) = 3;
        *(_WORD *)(a1 + 46) = 1;
        return;
      }
      goto LABEL_8;
    }
    if ( a2 != 4 )
    {
      if ( a2 == 5 )
      {
        *(_BYTE *)(a1 + 41) = 2;
        *(_QWORD *)(a1 + 56) = (unsigned __int8)insn_get_next_byte();
        return;
      }
LABEL_8:
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = a2 - 5;
      return;
    }
    *(_BYTE *)(a1 + 41) = 1;
    *(_WORD *)(a1 + 46) = 0;
  }
}

