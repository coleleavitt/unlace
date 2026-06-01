__int64 __fastcall sub_65E0(__int64 a1, __int64 a2)
{
  __int64 not_tail; // rax
  __int64 flags; // rax
  unsigned __int16 wide_byte; // ax
  __int16 v6; // dx
  _BOOL4 v7; // eax

  if ( *(_DWORD *)(a1 + 120) == 1 )
    return 1;
  if ( (get_flags_ex() & 0x10000) == 0 )
    return 1;
  not_tail = prev_not_tail();
  if ( not_tail == -1 )
    return 0;
  if ( *(_WORD *)(a2 + 26) != 2 )
  {
    if ( *(_QWORD *)(a2 + 16) - not_tail == 2 )
      return 1;
    flags = get_flags_ex();
    if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000) == 0 )
      return 1;
    if ( prev_not_tail() == -1 )
      return 0;
  }
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
  {
    wide_byte = get_wide_byte();
    v6 = wide_byte >> 12;
    if ( wide_byte >> 12 == 11 )
    {
      v7 = wide_byte == 0xBE21;
      return !v7;
    }
    if ( v6 == 15 )
    {
      HIBYTE(wide_byte) &= ~0x10u;
      v7 = wide_byte == 0xEF00;
      return !v7;
    }
    if ( v6 == 7 )
    {
      LOBYTE(wide_byte) = 0;
      v7 = wide_byte == 32000;
      return !v7;
    }
  }
  return 1;
}

