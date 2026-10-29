__int64 sub_21FE0()
{
  int aflags; // edx
  __int64 result; // rax
  int flags; // eax
  __int64 func; // rax

  aflags = get_aflags();
  result = 1;
  if ( (aflags & 0x400000) == 0 )
  {
    flags = get_flags_ex();
    if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 && (func = get_func()) != 0 )
      return *(_QWORD *)(func + 16) & 1LL;
    else
      return 0;
  }
  return result;
}

