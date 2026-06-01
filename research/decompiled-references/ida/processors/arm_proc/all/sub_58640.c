unsigned __int64 sub_58640()
{
  unsigned int dword; // ebx
  char v1; // dl
  unsigned __int32 v2; // eax
  unsigned __int64 v3; // rax
  __int64 v4; // rdx

  dword = get_dword();
  v1 = getinf_flag();
  v2 = _byteswap_ulong(dword);
  if ( v1 )
    dword = v2;
  v3 = (dword >> 29) & 3 | (dword >> 3) & 0x1FFFFC;
  v4 = v3 << 12;
  if ( v3 >> 20 )
    return v4 | 0xFFFFFFFE00000000LL;
  return v4;
}

