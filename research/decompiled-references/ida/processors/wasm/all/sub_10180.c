__int64 __fastcall sub_10180(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  char next_byte; // al

  v2 = 0;
  *a2 = 0;
  while ( 1 )
  {
    next_byte = insn_get_next_byte(a1);
    *a2 |= (next_byte & 0x7F) << (7 * v2);
    if ( next_byte >= 0 )
      break;
    if ( ++v2 == 5 )
      goto LABEL_4;
  }
  if ( v2 == 4 && (unsigned __int8)next_byte > 0xFu )
  {
LABEL_4:
    *a2 = 0;
    return 0;
  }
  return v2 + 1;
}

