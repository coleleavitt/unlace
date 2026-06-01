__int64 __fastcall sub_13FC80(__int64 a1, double a2)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_13F7B0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), a2);
  v3 = 1;
  if ( v2 != -1 )
  {
    *(_DWORD *)(a1 + 40) += v2;
    return 0;
  }
  return v3;
}

