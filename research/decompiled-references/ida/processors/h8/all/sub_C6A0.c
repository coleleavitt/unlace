__int64 __fastcall sub_C6A0(__int64 a1, __int64 a2)
{
  char next_byte; // al

  next_byte = insn_get_next_byte();
  switch ( next_byte )
  {
    case 4:
      *(_WORD *)(a2 + 24) = 63;
      goto LABEL_7;
    case 5:
      *(_WORD *)(a2 + 24) = 86;
      goto LABEL_7;
    case 6:
      *(_WORD *)(a2 + 24) = 5;
      goto LABEL_7;
    case 7:
      *(_DWORD *)(a2 + 28) = 1;
      *(_WORD *)(a2 + 24) = 50;
LABEL_7:
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 1;
      *(_WORD *)(a2 + 86) = 44;
      return sub_84D0(a1, a2, a2 + 40, 2);
  }
  *(_BYTE *)(a1 + 227) = 64;
  return sub_C550(a1, a2, next_byte, 44);
}

