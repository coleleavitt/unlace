__int64 __fastcall sub_3802D0(__int64 *a1, char a2)
{
  __int64 not_tail; // rbp

  not_tail = *a1;
  if ( (unsigned __int8)segtype() == 1 )
    return 0;
  if ( (get_flags_ex() & 0x600) == 0x200 )
    not_tail = prev_not_tail();
  if ( a2 && (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 || !get_func() )
    return 0;
  *a1 = not_tail;
  return 1;
}

