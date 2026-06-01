bool sub_21F70()
{
  unsigned int dword; // ebx
  char v1; // dl
  unsigned __int32 v2; // eax

  dword = get_dword();
  v1 = getinf_flag();
  v2 = _byteswap_ulong(dword);
  if ( v1 )
    dword = v2;
  return dword == 1179403647;
}

