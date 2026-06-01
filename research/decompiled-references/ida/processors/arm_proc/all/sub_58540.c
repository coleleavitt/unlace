unsigned __int64 sub_58540()
{
  unsigned int dword; // ebx
  char v1; // dl
  unsigned __int32 v2; // eax
  int v3; // ebx
  unsigned __int64 result; // rax

  dword = get_dword();
  v1 = getinf_flag();
  v2 = _byteswap_ulong(dword);
  if ( v1 )
    dword = v2;
  v3 = 4 * (dword >> 5);
  result = v3 & 0x1FFFFC;
  if ( (v3 & 0x100000) != 0 )
    return v3 & 0x1FFFFC | 0xFFFFFFFFFFE00000LL;
  return result;
}

