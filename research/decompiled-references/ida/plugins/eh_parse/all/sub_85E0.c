__int64 __fastcall sub_85E0(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 124);
  if ( (v1 & 1) != 0 )
    return 1;
  *(_DWORD *)(a1 + 124) = v1 | 1;
  sub_8290(a1);
  return 0;
}

