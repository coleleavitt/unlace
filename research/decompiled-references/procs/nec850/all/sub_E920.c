__int64 __fastcall sub_E920(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 next_word; // ax
  __int64 v5; // rdx
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // al
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
    return 0;
  next_word = insn_get_next_word(a2, a2, a3);
  v6 = next_word;
  if ( (~next_word & 0x600) == 0 )
    v6 = ((unsigned int)insn_get_next_word(a2, a2, v5) << 16) | next_word;
  if ( !sub_BC50(a1, v6, a2) )
    return 0;
  v11 = getinf_flag(11, 4, v7, v8, v9, v10, off_2A938, 0, a1, v13);
  construct_macro(&v12, a2, v11);
  return *(unsigned __int16 *)(a2 + 26);
}
