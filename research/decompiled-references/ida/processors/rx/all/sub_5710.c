__int64 __fastcall sub_5710(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int16 next_word; // r12
  int next_byte; // r13d
  int v5; // eax

  v2 = *(_QWORD *)(a2 + 16);
  *(_BYTE *)(a2 + 33) = 5;
  *(_BYTE *)(a2 + 41) = 7;
  *(_BYTE *)(a2 + 45) = 2;
  next_word = insn_get_next_word();
  next_byte = (unsigned __int8)insn_get_next_byte();
  if ( (unsigned __int8)getinf_flag() )
    v5 = next_byte | ((__int16)next_word << 8);
  else
    v5 = next_word | ((char)next_byte << 16);
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v2 + v5);
  return *(unsigned __int16 *)(a2 + 26);
}

