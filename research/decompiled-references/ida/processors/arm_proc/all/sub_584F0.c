unsigned __int64 sub_584F0()
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
  v3 = 4 * dword;
  result = v3 & 0xFFFFFFC;
  if ( (v3 & 0x8000000) != 0 )
    return v3 & 0xFFFFFFC | 0xFFFFFFFFF0000000LL;
  return result;
}

