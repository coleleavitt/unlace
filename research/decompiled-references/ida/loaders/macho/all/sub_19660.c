unsigned __int64 __fastcall sub_19660(__int64 a1, int a2)
{
  if ( a2 == 2 )
    return put_dword();
  if ( a2 > 2 )
  {
    if ( a2 == 3 )
      return put_qword();
    return sub_19510((__int64)"Bad length value in write_bytes()");
  }
  if ( a2 )
  {
    if ( a2 == 1 )
      return put_word();
    return sub_19510((__int64)"Bad length value in write_bytes()");
  }
  return put_byte();
}

