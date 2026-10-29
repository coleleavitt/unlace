__int64 __fastcall sub_7840(__int64 a1)
{
  __int64 result; // rax
  __int64 not_tail; // rbp
  int flags; // r12d
  unsigned __int16 wide_byte; // ax
  int v5; // edx
  unsigned __int16 v6; // ax

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 616) + 120LL) == 1 )
    return 0;
  if ( (*(_BYTE *)(a1 + 722) & 1) == 0 )
    return 0;
  not_tail = prev_not_tail();
  if ( not_tail == -1 )
    return 0;
  flags = get_flags_ex();
  if ( (~BYTE1(flags) & 6) != 0 )
    return 0;
  wide_byte = get_wide_byte();
  v5 = sub_68A0(wide_byte);
  result = 1;
  if ( !v5 )
  {
    if ( *(_WORD *)(a1 + 250) == 2
      || *(_QWORD *)(a1 + 240) - not_tail != 2
      && (flags & 0x10000) != 0
      && prev_not_tail() != -1
      && (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
    {
      v6 = get_wide_byte();
      return sub_68A0(v6) & 1;
    }
    return 0;
  }
  return result;
}

