__int64 sub_E2A0()
{
  __int64 module_data; // rbx
  int dword; // eax
  int v2; // edx
  int v3; // ecx
  unsigned int v5; // eax
  __int16 v6; // dx
  __int16 v7; // ax
  char v8; // dl

  module_data = get_module_data();
  dword = get_dword();
  v2 = dword & 1;
  v3 = (dword >> 1) & 0x1FFF;
  if ( (*(_BYTE *)(module_data + 152) & 2) == 0 )
    return (__int16)(v3 | -(__int16)v2 & 0xE000);
  v5 = (unsigned int)dword >> 14;
  if ( v2 )
  {
    v8 = ~(_BYTE)v5;
    v7 = 0x8000;
    v6 = v8 & 3;
  }
  else
  {
    v6 = v5 & 3;
    v7 = 0;
  }
  return (__int16)((v6 << 13) | v3 | v7);
}

