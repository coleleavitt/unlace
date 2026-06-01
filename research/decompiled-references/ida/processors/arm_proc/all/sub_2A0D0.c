unsigned __int64 sub_2A0D0()
{
  int flags; // eax
  unsigned __int64 v2; // [rsp+18h] [rbp-30h]

  v2 = __readfsqword(0x28u);
  if ( (getinf() & 0x10) == 0
    || (flags = get_flags_ex(), (flags & 0x600) != 0x400)
    || (flags & 0xF0000000) != 0x50000000 )
  {
    if ( get_cmt() <= 0 )
    {
      if ( get_func() )
        get_func_chunknum();
      getinf();
      if ( get_ea_name() <= 0 )
        netnode_supset();
    }
  }
  return v2 - __readfsqword(0x28u);
}

