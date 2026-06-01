char sub_58BE0()
{
  unsigned int dword; // ebx
  char v1; // dl
  unsigned __int32 v2; // eax
  char result; // al

  dword = get_dword();
  v1 = getinf_flag();
  v2 = _byteswap_ulong(dword);
  if ( v1 )
    dword = v2;
  if ( (dword & 0x3F000000) == 0x39000000 )
  {
    result = (dword >> 23) & (dword >> 30 == 0);
    if ( result || (~dword & 0xC00000) != 0 || dword >> 30 <= 1 )
      goto LABEL_6;
  }
  else
  {
    result = 0;
    if ( (dword & 0x1FC00000) == 0x11000000 && (dword & 0xC00000) == 0 )
    {
LABEL_6:
      getinf_flag();
      put_dword();
      return 1;
    }
  }
  return result;
}

