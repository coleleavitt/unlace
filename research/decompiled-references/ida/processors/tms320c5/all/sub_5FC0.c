__int64 __fastcall sub_5FC0(__int64 a1, __int64 a2, __int64 *a3)
{
  int i; // r14d
  unsigned __int16 wide_byte; // bp
  __int16 v6; // ax
  __int64 v8; // rbp
  unsigned __int16 v9; // bx

  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( i >= (int)get_lookback() || prev_not_tail() == -1 || (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
        return 0;
      wide_byte = get_wide_byte();
      v6 = wide_byte >> 11;
      if ( *(_DWORD *)(a1 + 120) == 1 )
        break;
      switch ( v6 )
      {
        case 22:
          goto LABEL_16;
        case 23:
          if ( (wide_byte & 0xFFF8) == 0xBF08 )
            goto LABEL_19;
          break;
        case 0:
          return 0;
      }
LABEL_11:
      ++i;
    }
    if ( v6 == 24 )
    {
LABEL_16:
      v8 = 16 * calc_dataseg() + (unsigned __int8)wide_byte;
      goto LABEL_17;
    }
    if ( v6 == 26 )
      break;
    if ( v6 == 6 )
      return 0;
  }
  if ( (wide_byte & 0xF8FF) != 0xD000 )
    goto LABEL_11;
LABEL_19:
  v9 = get_wide_byte();
  v8 = 16 * calc_dataseg() + v9;
LABEL_17:
  *a3 = v8;
  return 1;
}

