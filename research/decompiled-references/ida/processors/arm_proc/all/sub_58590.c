unsigned __int64 sub_58590()
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
  result = (unsigned __int16)v3 & 0xFFFC;
  if ( (v3 & 0x8000) != 0 )
    return (unsigned __int16)v3 & 0xFFFC | 0xFFFFFFFFFFFF0000LL;
  return result;
}

