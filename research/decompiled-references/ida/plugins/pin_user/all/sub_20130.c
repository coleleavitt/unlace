bool __fastcall sub_20130(__int64 a1, int a2)
{
  bool result; // al
  __int64 v3; // rbp
  int v4; // r12d

  result = 1;
  if ( a2 )
  {
    v3 = open_linput();
    result = 0;
    if ( v3 )
    {
      v4 = calc_file_crc32();
      close_linput();
      return a2 == v4;
    }
  }
  return result;
}

