bool __fastcall sub_35C70(__int64 a1)
{
  int v1; // edx
  bool result; // al

  v1 = getinf();
  result = 0;
  if ( v1 == 11
    && *(_DWORD *)(a1 + 28)
    && (*(_QWORD *)(a1 + 40) & 0xFF000000FF00LL) == 0x20000000100LL
    && *(_BYTE *)(a1 + 81) == 2
    && *(_BYTE *)(a1 + 32) == 33 )
  {
    return *(_QWORD *)(a1 + 96) == 0;
  }
  return result;
}

