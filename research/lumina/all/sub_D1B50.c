__int64 __fastcall sub_D1B50(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = *(_DWORD *)(a1 + 40);
  if ( v1 <= 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = v2 + 8;
  v4 = v2 + 32LL * (unsigned int)(v1 - 1) + 40;
  while ( !*(_QWORD *)v3 || !*(_DWORD *)(*(_QWORD *)v3 + 24LL) )
  {
    v3 += 32;
    if ( v3 == v4 )
      return 0;
  }
  return 1;
}
