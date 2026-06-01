__int64 __fastcall sub_9DC0(unsigned __int64 not_tail, unsigned int a2)
{
  int dword; // eax
  int v4; // eax
  unsigned __int64 v6; // rbp
  int v7; // eax

  if ( (_BYTE)a2 )
  {
    not_tail = prev_not_tail();
    if ( not_tail == -1 || (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
      return a2;
  }
  dword = get_dword();
  if ( not_tail == (not_tail & 0xFFFFFFFFFFFFFFE0LL) + 28
    && (dword & 0xF0000000) == 0xE0000000
    && (v6 = prev_not_tail(), v6 != -1)
    && (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0
    && not_tail == (v6 & 0xFFFFFFFFFFFFFFE0LL) + 28 )
  {
    LOBYTE(v7) = sub_9D40(v6);
    return v7 ^ 1u;
  }
  else
  {
    LOBYTE(v4) = sub_9D40(not_tail);
    return v4 ^ 1u;
  }
}

