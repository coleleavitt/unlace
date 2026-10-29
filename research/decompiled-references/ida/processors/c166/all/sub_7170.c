bool __fastcall sub_7170(__int64 a1)
{
  int v1; // r12d
  __int64 v2; // rbx
  char byte; // al
  unsigned __int8 v4; // al

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 16);
  while ( 1 )
  {
    if ( (get_flags_ex() & 0x10000) == 0 )
      return 0;
    do
      v2 -= 2;
    while ( (get_flags_ex() & 0x400) == 0 );
    byte = get_byte();
    if ( byte != -41 && byte != -36 )
      break;
    v4 = get_byte();
    if ( (v4 & 0x80u) != 0 )
      return ((v4 >> 4) & 3) + 1 - v1 > 0;
LABEL_8:
    if ( ++v1 == 4 )
      return 0;
  }
  if ( byte != -47 )
    goto LABEL_8;
  v4 = get_byte();
  if ( v4 >> 6 != 2 )
    goto LABEL_8;
  return ((v4 >> 4) & 3) + 1 - v1 > 0;
}

