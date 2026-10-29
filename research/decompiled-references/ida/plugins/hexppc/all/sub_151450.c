__int64 __fastcall sub_151450(__int64 a1)
{
  int v1; // ebx
  unsigned int v2; // ebx
  __int64 v4; // r13
  int v5; // r12d
  __int64 v6; // rax

  v1 = sub_151330(a1 + 32, *(_DWORD *)a1, 0);
  v2 = sub_151330(a1 + 48, *(_DWORD *)a1, 0) | v1;
  if ( *(_BYTE *)(a1 + 64) != 8 )
    return v2;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !*(_QWORD *)(v4 + 32) )
    return v2;
  v5 = 0;
  v6 = 0;
  do
  {
    ++v5;
    v2 |= sub_151330(*(_QWORD *)(v4 + 24) + 80 * v6, *(_DWORD *)a1, 0);
    v6 = v5;
  }
  while ( (unsigned __int64)v5 < *(_QWORD *)(v4 + 32) );
  return v2;
}

