bool __fastcall sub_7230(__int64 a1)
{
  int flags; // eax
  bool result; // al

  flags = get_flags_ex();
  result = sub_6BB0(a1, flags);
  if ( !result )
    return (get_flags_ex() & 0x10000) == 0;
  return result;
}

