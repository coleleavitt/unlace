__int64 __fastcall sub_3CA8F0(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ecx

  v2 = *(_QWORD *)(a2 + 64);
  if ( !v2 )
    return 0;
  v3 = 0;
  if ( (unsigned int)(*(_DWORD *)(v2 + 60) - 1) <= 1 && a1[4] == *(_DWORD *)(v2 + 72) && !a1[5] )
    LOBYTE(v3) = a1[6] == 0;
  return v3;
}

