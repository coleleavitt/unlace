__int64 __fastcall sub_1470(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax

  if ( !getseg() || (get_flags_ex() & 0x200) != 0 )
  {
    sub_13A0((__int64)"AUTOHIDE NONE\nIncorrect table address %a", a3);
    return 0;
  }
  else if ( ((a2 - 4) & 0xFFFFFFFFFFFFFFFBLL) != 0 && (unsigned __int64)(a2 - 1) > 1 )
  {
    sub_13A0((__int64)"AUTOHIDE NONE\nIncorrect table element size %llu", a2);
    return 0;
  }
  else
  {
    get_flags_by_size();
    result = can_define_item();
    if ( !(_BYTE)result )
    {
      sub_13A0((__int64)"AUTOHIDE NONE\nCannot create table at %a size %llu", a3, a1);
      return 0;
    }
  }
  return result;
}

