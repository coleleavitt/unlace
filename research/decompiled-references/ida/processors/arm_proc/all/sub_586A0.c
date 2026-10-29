__int64 sub_586A0()
{
  unsigned int dword; // ebx
  char v1; // dl
  unsigned __int32 v2; // eax
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  char v5; // dl
  unsigned __int32 v6; // eax

  dword = get_dword();
  v1 = getinf_flag();
  v2 = _byteswap_ulong(dword);
  if ( v1 )
    dword = v2;
  v3 = get_dword();
  v4 = dword >> 5;
  v5 = getinf_flag();
  v6 = _byteswap_ulong(v3);
  if ( v5 )
    v3 = v6;
  return (unsigned __int16)v4 << ((v3 >> 17) & 0x30);
}

