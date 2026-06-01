__int64 __fastcall sub_1280(_BYTE *a1, __int64 a2)
{
  _BYTE *v2; // rbp
  __int16 *v3; // rbx
  char byte; // al
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v9; // [rsp+0h] [rbp-28h]

  v2 = a1;
  v3 = &word_2146 - 35;
  getinf();
  while ( 1 )
  {
    while ( 1 )
    {
      byte = get_byte();
      if ( *(_BYTE *)v3 != 0xFE )
        break;
      if ( v2 - a1 > 15 )
        sub_11D0((__int64)"internal error in 'unpack' plugin", a2, v2 - a1, v5, v6, v7, v9);
      v3 = (__int16 *)((char *)v3 + 1);
      *v2++ = byte;
      if ( v3 == &word_2146 )
        return 1;
    }
    if ( byte != *(_BYTE *)v3 )
      break;
    v3 = (__int16 *)((char *)v3 + 1);
    if ( v3 == &word_2146 )
      return 1;
  }
  return 0;
}

