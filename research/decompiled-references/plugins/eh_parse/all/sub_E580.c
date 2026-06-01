__int64 __fastcall sub_E580(__int64 a1, __int64 a2)
{
  __int64 not_tail; // rbp
  unsigned int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  int flags; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx

  not_tail = a2;
  v3 = is_mapped(a2);
  if ( (_BYTE)v3 )
  {
    v4 = v3;
    if ( getseg(a2) )
    {
      if ( !(unsigned __int8)is_spec_ea(a2) )
      {
        flags = get_flags_ex(a2, 4, v6);
        v8 = flags & 0x600;
        if ( v8 == 512 )
        {
          if ( (get_flags_ex(a2, 4, 512) & 0x600) == 0x200 )
            not_tail = prev_not_tail(a2);
          if ( !(unsigned __int8)is_mapped(not_tail) || !getseg(not_tail) || (unsigned __int8)is_spec_ea(not_tail) )
            return 0;
          flags = get_flags_ex(not_tail, 4, v9);
          v8 = flags & 0x600;
        }
        switch ( v8 )
        {
          case 1536LL:
            if ( (flags & 0x11000) == 0 )
              return (flags & 0x10000000) == 0;
            break;
          case 0LL:
            return v4;
          case 1024LL:
            LOBYTE(v4) = (flags & 0xF0000000) != 1610612736;
            return v4;
        }
      }
    }
  }
  return 0;
}
