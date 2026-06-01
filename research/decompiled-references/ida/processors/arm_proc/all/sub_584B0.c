unsigned __int64 sub_584B0()
{
  unsigned int dword; // ebx
  char v1; // dl
  unsigned __int32 v2; // eax

  dword = get_dword();
  v1 = getinf_flag();
  v2 = _byteswap_ulong(dword);
  if ( v1 )
    dword = v2;
  return (unsigned __int64)((dword >> 10) & 0xFFF) << 12;
}

