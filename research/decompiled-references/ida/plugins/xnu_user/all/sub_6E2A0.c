__int64 __fastcall sub_6E2A0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // eax

  v4 = *(_DWORD *)(a3 + 20) & 0xFFFFFFF;
  if ( v4 != 5 )
  {
    a2 = 0;
    if ( v4 != 7 )
      return a2;
    a2 = 1;
    if ( *(_QWORD *)(a3 + 32) == a4 )
      return a2;
  }
  LOBYTE(a2) = *(_QWORD *)(a3 + 8) == a4;
  return a2;
}

