__int64 __fastcall sub_6F60(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  bool v3; // zf
  unsigned __int16 next_byte; // ax
  char v5; // dl
  __int64 result; // rax

  v2 = *(_WORD *)(a2 + 26);
  v3 = *(_BYTE *)(a2 + 32) == 0;
  *(_BYTE *)(a2 + 41) = 2;
  *(_BYTE *)(a2 + 42) = v2;
  if ( v3 )
    next_byte = (unsigned __int8)insn_get_next_byte(a2);
  else
    next_byte = insn_get_next_word(a2);
  *(_QWORD *)(a2 + 56) = next_byte;
  v5 = *(_BYTE *)(a2 + 45);
  if ( v5 != 7 && v5 != 4 || (++next_byte, next_byte) )
  {
    if ( next_byte < *(_WORD *)(a1 + 33173) )
      return 1;
    result = 0;
    if ( !*(_BYTE *)(a1 + 33344) )
      return result;
LABEL_7:
    ++*(_BYTE *)(a2 + 72);
    return 1;
  }
  result = 0;
  if ( *(_BYTE *)(a1 + 33344) )
    goto LABEL_7;
  return result;
}

