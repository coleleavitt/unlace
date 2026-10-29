_BOOL8 __fastcall sub_AF80(__int64 a1)
{
  _BOOL8 result; // rax

  result = sub_9760(a1, 1);
  if ( !result )
    return (get_flags_ex() & 0x10000) == 0;
  return result;
}

