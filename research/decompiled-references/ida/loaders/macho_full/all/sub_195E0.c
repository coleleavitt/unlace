__int64 __fastcall sub_195E0(__int64 a1, int a2)
{
  if ( a2 == 2 )
    return (int)get_dword();
  if ( a2 > 2 )
  {
    if ( a2 == 3 )
      return get_qword();
    goto LABEL_8;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
      return (__int16)get_word();
LABEL_8:
    sub_19510((__int64)"Bad length value in get_bytes()");
    return 0;
  }
  return (char)get_byte();
}

