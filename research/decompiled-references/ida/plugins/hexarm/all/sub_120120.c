__int64 __fastcall sub_120120(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned int)(*(_DWORD *)a1 - 56) > 1 )
    return v1;
  v1 = 1;
  if ( *(_BYTE *)(a1 + 64) != 8 )
    return v1;
  LOBYTE(v1) = (*(_BYTE *)(*(_QWORD *)(a1 + 72) + 280LL) & 0x30) == 0;
  return v1;
}

