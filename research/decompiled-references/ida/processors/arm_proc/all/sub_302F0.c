__int64 __fastcall sub_302F0(__int64 not_tail)
{
  bool v2; // zf
  __int64 result; // rax

  if ( (get_flags_ex() & 0x600) == 0x200 )
    not_tail = prev_not_tail();
  v2 = (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0;
  result = -1;
  if ( v2 )
    return not_tail;
  return result;
}

