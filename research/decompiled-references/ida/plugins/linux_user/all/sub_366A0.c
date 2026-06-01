__int64 __fastcall sub_366A0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  int v5; // edx
  __int64 v6; // rax
  __int64 (*v7)(); // rax

  v3 = 0;
  while ( a1[v3 + 108] != a2 || *((_DWORD *)a1 + v3 + 224) != a3 )
  {
    if ( ++v3 == 4 )
      return 0;
  }
  a1[(int)v3 + 108] = -1;
  v5 = ~(15 << (4 * v3 + 16)) & *((_DWORD *)a1 + 229) & ~(3 << (2 * v3));
  v6 = *a1;
  *((_DWORD *)a1 + 229) = v5;
  v7 = *(__int64 (**)())(v6 + 616);
  if ( v7 == sub_EA70 )
    return 0;
  return v7();
}

