unsigned __int64 __fastcall sub_7A10(__int64 a1)
{
  unsigned __int64 result; // rax

  result = get_flags_ex();
  if ( (~(_WORD)result & 0x600) == 0 && (result & 0x10000000) != 0 )
  {
    result = sub_6600(a1);
    if ( result != -1 )
    {
      result = get_flags_ex() & 0xC000;
      if ( result != 0x4000 )
        return sub_64A0();
    }
  }
  return result;
}

