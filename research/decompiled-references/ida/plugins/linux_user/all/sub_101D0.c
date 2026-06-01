_BOOL8 __fastcall sub_101D0(__int64 a1, int a2)
{
  char v2; // dl
  _BOOL8 result; // rax
  int v4; // r12d

  v2 = qfileexist();
  result = 0;
  if ( v2 )
  {
    result = 1;
    if ( a2 == 1 )
    {
      open_linput();
      v4 = calc_file_crc32();
      close_linput();
      return *(_DWORD *)(a1 + 1128) == v4;
    }
  }
  return result;
}

