__int64 __fastcall sub_9A00(__int64 a1, __int64 a2)
{
  unsigned __int8 next_byte; // al
  char v3; // dl
  __int64 result; // rax

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a1 + 227) = next_byte;
  if ( next_byte >> 4 )
  {
    *(_WORD *)(a2 + 24) = 38;
    return sub_7BA0(a2, *(_BYTE *)(a1 + 227));
  }
  else
  {
    *(_WORD *)(a2 + 24) = 40;
    v3 = sub_7A80(a2, a2 + 40, *(_BYTE *)(a1 + 227), 0x25u, 1u);
    result = 0;
    if ( v3 )
      return *(unsigned __int16 *)(a2 + 26);
  }
  return result;
}

