bool __fastcall sub_6BB0(__int64 a1, int a2)
{
  int v2; // eax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  int v6; // eax
  int wide_byte; // eax
  __int64 v8; // rdx

  if ( (a2 & 0x10000) == 0 )
    return 0;
  v2 = *(unsigned __int16 *)(a1 + 26);
  if ( (unsigned __int16)(v2 - 1) > 1u )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 < (unsigned int)(3 - v2) )
    return 0;
  v4 = 2 - v2;
  if ( v4 >= v3 )
    return 0;
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
  {
    wide_byte = get_wide_byte();
    if ( wide_byte > 63211 )
    {
      if ( (wide_byte & 0xFFFFFFFB) == 0xF7E2 || wide_byte == 65024 )
        return 1;
    }
    else if ( wide_byte > 63201 )
    {
      v8 = 541;
      if ( _bittest64(&v8, (unsigned int)(wide_byte - 63202)) )
        return 1;
    }
    else if ( wide_byte == 63131 )
    {
      return 1;
    }
  }
  if ( !__CFADD__(-2LL - v4, *(_QWORD *)(a1 + 16)) || (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
    return 0;
  v6 = get_wide_byte();
  if ( v6 != 62067 )
    return (v6 & 0xFF80) == 64128;
  return 1;
}

