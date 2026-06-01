__int64 __fastcall sub_7290(__int64 a1, __int64 a2)
{
  int v3; // ebp
  char byte; // al
  int v6; // ebp

  v3 = 0;
  while ( 1 )
  {
    if ( (get_flags_ex() & 0x10000) == 0 )
      goto LABEL_7;
    do
      a2 -= 2;
    while ( (get_flags_ex() & 0x400) == 0 );
    byte = get_byte();
    if ( byte == -41 )
    {
      v6 = (((unsigned __int8)get_byte() >> 4) & 3) + 1 - v3;
      get_word();
      if ( v6 <= 0 )
        goto LABEL_7;
      return use_mapping();
    }
    if ( byte == -36 )
      break;
    if ( ++v3 == 4 )
      goto LABEL_7;
  }
  if ( (((unsigned __int8)get_byte() >> 4) & 3) + 1 - v3 > 0 )
    return -1;
LABEL_7:
  if ( get_sreg() != -1 )
    return use_mapping();
  return -1;
}

