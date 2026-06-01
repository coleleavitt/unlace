unsigned __int64 __fastcall sub_2A0D0(__int64 a1, __int64 a2, __int64 a3)
{
  int flags; // eax
  unsigned __int64 v6; // [rsp+18h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  if ( (getinf(49) & 0x10) == 0
    || (flags = get_flags_ex(a3, 4), (flags & 0x600) != 0x400)
    || (flags & 0xF0000000) != 0x50000000 )
  {
    if ( get_cmt() <= 0 )
    {
      if ( get_func(a2) )
        get_func_chunknum();
      getinf(36);
      if ( get_ea_name() <= 0 )
        netnode_supset();
    }
  }
  return v6 - __readfsqword(0x28u);
}
