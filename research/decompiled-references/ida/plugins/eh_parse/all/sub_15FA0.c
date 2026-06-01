__int64 __fastcall sub_15FA0(__int64 a1)
{
  __int64 result; // rax

  result = get_byte(a1 - 1);
  if ( (_BYTE)result == 0xCC )
  {
    if ( (unsigned __int8)get_byte(a1) == 0xCC )
      return create_data(a1 - 1, 0, 1, -1);
    result = get_byte(a1);
    if ( !(_BYTE)result )
      return create_data(a1 - 1, 0, 1, -1);
  }
  return result;
}

