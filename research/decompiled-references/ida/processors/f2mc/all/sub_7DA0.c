__int64 __fastcall sub_7DA0(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 next_byte; // al

  *(_BYTE *)(a3 + 1) = 2;
  *(_BYTE *)(a3 + 5) = 0;
  next_byte = insn_get_next_byte();
  *(_BYTE *)(a3 + 35) = a2;
  *(_QWORD *)(a3 + 16) = next_byte;
  *(_WORD *)(a3 + 33) = 26881;
  return 26881;
}

