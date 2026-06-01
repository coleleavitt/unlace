__int64 __fastcall sub_8370(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int16 v5; // ax
  __int64 result; // rax

  *(_BYTE *)(a3 + 5) = a4;
  *(_BYTE *)(a3 + 1) = 4;
  *(_WORD *)(a3 + 6) = ((*(_BYTE *)(a1 + 227) >> 4) & 7) + 32 * (*(_WORD *)(a1 + 224) > 0xFFFu);
  v5 = *(_WORD *)(a2 + 26);
  *(_BYTE *)(a3 + 33) |= 0x10u;
  *(_BYTE *)(a3 + 2) = v5;
  *(_QWORD *)(a3 + 16) = (__int16)insn_get_next_word();
  get_flags_ex();
  result = is_off();
  if ( (_BYTE)result )
    *(_QWORD *)(a3 + 16) = (unsigned __int16)*(_QWORD *)(a3 + 16);
  return result;
}

