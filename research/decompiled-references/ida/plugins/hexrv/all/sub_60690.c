__int64 __fastcall sub_60690(_QWORD *a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // esi
  int v5; // edx
  __int64 v6; // rax

  v3 = a2;
  v4 = a2 + a3 - 1;
  while ( v4 - v3 >= 0 )
  {
    if ( v3 >= 0 && (unsigned __int64)(unsigned int)v3 < a1[1] )
    {
      v5 = v3 >> 6;
      v6 = 1LL << v3++;
      if ( (*(_QWORD *)(*a1 + 8LL * v5) & v6) != 0 )
        continue;
    }
    return 0;
  }
  return 1;
}

