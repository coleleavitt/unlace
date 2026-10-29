_BOOL8 __fastcall sub_13400(__int64 a1, int a2)
{
  char v2; // dl
  _BOOL8 result; // rax
  __int64 v4; // rbp
  int v5; // r12d

  v2 = qfileexist(a1 + 8);
  result = 0;
  if ( v2 )
  {
    result = 1;
    if ( a2 == 1 )
    {
      v4 = open_linput(a1 + 8, 0);
      v5 = calc_file_crc32(v4);
      close_linput(v4);
      return *(_DWORD *)(a1 + 1128) == v5;
    }
  }
  return result;
}

