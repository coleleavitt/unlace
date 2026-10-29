unsigned __int64 __fastcall sub_9E80(unsigned __int64 a1)
{
  unsigned __int64 not_tail; // rbx
  int v3; // eax
  __int64 v4; // rbp
  unsigned __int64 v5; // r12
  int dword; // eax

  not_tail = a1;
  if ( !(unsigned __int8)is_spec_ea() )
  {
    if ( (v3 = get_dword(), a1 == (a1 & 0xFFFFFFFFFFFFFFE0LL) + 28) && (v3 & 0xF0000000) == 0xE0000000
      || !(unsigned __int8)sub_9DC0(a1, 1u) )
    {
      v4 = 8;
      while ( 1 )
      {
        v5 = not_tail;
        not_tail = prev_not_tail();
        if ( not_tail == -1 || (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
          break;
        dword = get_dword();
        if ( not_tail != (not_tail & 0xFFFFFFFFFFFFFFE0LL) + 28 || (dword & 0xF0000000) != 0xE0000000 )
        {
          if ( (unsigned __int8)sub_9DC0(not_tail, 0) )
            break;
        }
        if ( !--v4 )
          return not_tail;
      }
      return v5;
    }
  }
  return not_tail;
}

