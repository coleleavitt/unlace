__int64 __fastcall sub_B160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned __int16 next_word; // ax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edx
  int v11; // r13d
  void *v12; // r8

  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
    return 0;
  next_word = insn_get_next_word(a2, a2, a3, a4, a5);
  *(_BYTE *)(a1 + 5296) = 0;
  v10 = next_word;
  v11 = next_word >> 11;
  if ( next_word <= 0x3FFFu )
    v10 = (next_word << 16) | (unsigned __int16)insn_get_next_word(a2, a2, next_word << 16, v8, v9);
  else
    *(_DWORD *)(a2 + 28) |= 0x800u;
  v12 = &unk_235C0;
  if ( *(_DWORD *)(a1 + 5272) == 2 )
    v12 = &unk_231C0;
  return sub_ACE0(a1, a2, v10, v11, (__int64)v12, a6);
}

