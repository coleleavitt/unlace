unsigned __int64 sub_58790()
{
  unsigned int dword; // ebx
  char v1; // dl
  unsigned __int32 v2; // eax
  unsigned __int64 result; // rax
  char v4; // cl
  unsigned int v5; // edx

  dword = get_dword();
  v1 = getinf_flag();
  v2 = _byteswap_ulong(dword);
  if ( v1 )
    dword = v2;
  if ( (dword & 0x3F000000) == 0x39000000 )
  {
    v5 = dword >> 30;
    if ( (dword & 0x800000) != 0 )
    {
      v4 = 4;
      if ( !v5 )
        return (unsigned __int64)((dword >> 10) & 0xFFF) << v4;
    }
    if ( (~dword & 0xC00000) != 0 || (result = 0, v5 <= 1) )
    {
      v4 = dword >> 30;
      return (unsigned __int64)((dword >> 10) & 0xFFF) << v4;
    }
  }
  else
  {
    result = 0;
    if ( (dword & 0x1FC00000) == 0x11000000 && (dword & 0xC00000) == 0 )
    {
      v4 = 0;
      return (unsigned __int64)((dword >> 10) & 0xFFF) << v4;
    }
  }
  return result;
}

