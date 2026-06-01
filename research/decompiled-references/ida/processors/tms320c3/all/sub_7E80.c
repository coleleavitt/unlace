bool __fastcall sub_7E80(__int64 a1)
{
  int flags; // eax
  bool result; // al

  flags = get_flags_ex();
  result = sub_7A70(a1, flags);
  if ( !result )
    return (get_flags_ex() & 0x10000) == 0;
  return result;
}

