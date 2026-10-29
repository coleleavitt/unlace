__int64 __fastcall sub_11C0A0(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v3; // edx
  bool v5; // al

  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(a1 + 48) )
  {
    v5 = sub_11A5E0(*(_QWORD *)(a1 + 40), nullptr, 0, v1);
    v3 = 1;
    if ( v5 )
      return v3;
    v1 = *(_QWORD *)(a1 + 32);
    v2 = *(_DWORD *)v1;
    if ( *(_DWORD *)v1 == 2 )
      return v3;
  }
  else
  {
    v2 = *(_DWORD *)v1;
  }
  v3 = 0;
  if ( (unsigned int)(v2 - 56) > 1 )
    return v3;
  v3 = 1;
  if ( *(_BYTE *)(v1 + 64) != 8 )
    return v3;
  return (*(_BYTE *)(*(_QWORD *)(v1 + 72) + 280LL) & 0x30) == 0;
}

