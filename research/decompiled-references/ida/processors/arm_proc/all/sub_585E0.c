unsigned __int64 sub_585E0()
{
  unsigned int dword; // ebx
  char v1; // dl
  unsigned __int32 v2; // eax
  unsigned int v3; // eax
  __int64 v4; // rdx

  dword = get_dword();
  v1 = getinf_flag();
  v2 = _byteswap_ulong(dword);
  if ( v1 )
    dword = v2;
  v3 = (dword >> 29) & 3 | (dword >> 3) & 0x1FFFFC;
  v4 = v3;
  if ( ((dword >> 3) & 0x100000) != 0 )
    return v3 | 0xFFFFFFFFFFE00000LL;
  return v4;
}

