__int64 __fastcall sub_1642A0(__int64 a1, int a2)
{
  char *v3; // rdi
  char *v4; // rdx

  v3 = *(char **)a1;
  v4 = &v3[4 * *(_QWORD *)(a1 + 8)];
  if ( v3 == v4 )
    return 0;
  while ( *(_DWORD *)v3 != a2 )
  {
    v3 += 4;
    if ( v4 == v3 )
      return 0;
  }
  if ( v4 == v3 )
    return 0;
  memmove(v3, v3 + 4, v4 - v3 - 4);
  --*(_QWORD *)(a1 + 8);
  return 1;
}

