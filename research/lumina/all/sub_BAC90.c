__int64 __fastcall sub_BAC90(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rbp
  int v4; // eax

  v3 = *a1;
  v4 = sub_142D90(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 16LL), "COMMIT", 0, 0, 0);
  LOBYTE(v2) = v4 == 0;
  if ( a2 && v4 )
  {
    sub_BAA10(a2, *(_QWORD *)(v3 + 16));
    *(_DWORD *)(v3 + 24) = 1;
    return v2;
  }
  else
  {
    *(_DWORD *)(v3 + 24) = 1;
    return v2;
  }
}
