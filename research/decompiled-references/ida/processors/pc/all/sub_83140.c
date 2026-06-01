__int64 __fastcall sub_83140(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v2 = v1 & 1;
  if ( (v1 & 1) == 0 )
    return (~(_BYTE)v1 & 0x46) == 0;
  return v2;
}
