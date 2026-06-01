char __fastcall sub_6A030(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+8h] [rbp-30h]
  char v5; // [rsp+11h] [rbp-27h]

  if ( a2 == a1 )
    return 1;
  v2 = a2;
  while ( 1 )
  {
    if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
      create_insn();
    if ( !(unsigned __int8)xrefblk_t_first_from() )
      break;
    if ( v5 != 21 )
    {
      if ( v5 == 19 )
        return a1 == v2 || v4 == a1;
      return a1 == v2;
    }
    v2 = v4;
    if ( a1 == v4 )
      return 1;
  }
  return a1 == v2;
}

