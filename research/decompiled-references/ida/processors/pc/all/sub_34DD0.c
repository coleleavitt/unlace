__int64 __fastcall sub_34DD0(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rsi
  int flags; // eax
  __int64 func; // rax
  char v8; // [rsp+11h] [rbp-27h]

  if ( (int)sub_718F0(a2) > 0 )
    return 0;
  v5 = 4;
  flags = get_flags_ex();
  if ( ((~(_WORD)flags & 0x600) != 0
     || (flags & 0x10000000) == 0
     || a3 && ((func = get_func()) == 0 || *(char *)(func + 16) >= 0))
    && (unsigned __int8)segtype() != 1 )
  {
    v5 = a1;
    if ( !(unsigned __int8)xrefblk_t_first_to() )
      return 0xFFFFFFFFLL;
    while ( (unsigned __int8)(v8 - 16) > 1u )
    {
      if ( !(unsigned __int8)xrefblk_t_next_to() )
        return 0xFFFFFFFFLL;
    }
  }
  if ( (unsigned int)sub_34CD0(a1, v5) > 1 )
    return 0;
  return 100;
}
