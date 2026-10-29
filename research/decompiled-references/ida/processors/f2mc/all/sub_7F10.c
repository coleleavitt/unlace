__int64 __fastcall sub_7F10(__int64 a1, __int64 a2, __int64 a3)
{
  int next_byte; // eax
  __int64 result; // rax

  *(_BYTE *)(a3 + 1) = 6;
  *(_QWORD *)(a3 + 16) = (unsigned __int16)insn_get_next_word();
  next_byte = insn_get_next_byte();
  *(_BYTE *)(a3 + 5) = 9;
  result = (next_byte << 16) & 0xFF0000;
  *(_QWORD *)(a3 + 16) |= result;
  return result;
}

