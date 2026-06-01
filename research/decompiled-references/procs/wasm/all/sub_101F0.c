__int64 __fastcall sub_101F0(__int64 a1, int *a2)
{
  __int64 v2; // rbx
  char next_byte; // al
  int v4; // edx
  char v6; // dl
  char v7; // al
  char v8; // dl

  v2 = 0;
  *a2 = 0;
  while ( 1 )
  {
    next_byte = insn_get_next_byte(a1);
    v4 = *a2 | ((next_byte & 0x7F) << (7 * v2));
    *a2 = v4;
    if ( next_byte >= 0 )
      break;
    if ( ++v2 == 5 )
      goto LABEL_4;
  }
  if ( v2 == 4 )
  {
    v6 = next_byte;
    v7 = next_byte & 0xF0;
    v8 = v6 & 8;
    if ( v7 == 112 )
    {
      if ( v8 )
        return 5;
    }
    else if ( v8 )
    {
      goto LABEL_4;
    }
    if ( !v7 )
      return 5;
LABEL_4:
    *a2 = 0;
    return 0;
  }
  *a2 = v4 << (25 - 7 * v2) >> (25 - 7 * v2);
  return v2 + 1;
}
