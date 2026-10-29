__int64 __fastcall sub_40F60(__int64 a1)
{
  char v2; // al
  unsigned int v3; // edx
  unsigned int v4; // eax
  __int64 v5; // rdx

  if ( (unsigned __int8)getinf_flag() )
    return 0;
  v2 = *(_BYTE *)(a1 + 88);
  v3 = v2 & 0xF0;
  if ( (v2 & 0xF0) == 0xC0 )
    v3 = *(_DWORD *)(a1 + 28);
  if ( v3 <= 0x10 )
  {
    v3 = getinf();
    if ( !v3 )
      return 0xFFFFFFFFLL;
  }
  v4 = v3 & 0xFFFFFFF0;
  if ( (v3 & 0xFFFFFFF0) <= 0x70 )
  {
    if ( v4 > 0x4F )
    {
      v5 = 0x100010001LL;
      if ( _bittest64(&v5, v4 - 80) )
        return *(unsigned int *)(a1 + 56);
    }
    return 0;
  }
  if ( v4 == 224 )
    return *(unsigned int *)(a1 + 56);
  if ( (v3 & 0xFFFFFFE0) != 0x80 )
    return 0;
  return *(unsigned int *)(a1 + 56);
}

