__int64 __fastcall sub_6F60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  unsigned __int8 next_byte; // cl

  next_byte = insn_get_next_byte();
  *(_DWORD *)(a1 + 228) = next_byte;
  if ( next_byte == 203 )
  {
    a3 = a4;
    *(_BYTE *)(a1 + 232) = insn_get_next_byte();
    next_byte = insn_get_next_byte();
    *(_DWORD *)(a1 + 228) = next_byte;
  }
  return sub_6ED0(a1, a2, a3, next_byte, a5);
}

