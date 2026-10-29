__int64 __fastcall sub_137710(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  int v4; // r11d
  unsigned int v5; // ecx
  __int64 i; // r8
  __int64 v7; // rax

  if ( !a2 )
    return 0;
  v4 = a3 + 1;
  if ( a3 == -1 )
  {
    v4 = *(_DWORD *)(a1 + 64);
    a3 = 0;
  }
  if ( (int)a3 >= v4 )
    return 0;
  v5 = 0;
  for ( i = 8LL * a3; ; i += 8 )
  {
    if ( a3 >= *(_DWORD *)(a1 + 64) )
      sub_1346B0(a4);
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + i) + 48LL);
    if ( v7 )
      break;
LABEL_14:
    if ( v4 == ++a3 )
      return 0;
  }
  while ( a2 != v7 )
  {
    if ( *(_QWORD *)(v7 + 24) == *(_QWORD *)(a2 + 24) )
      v5 += *(_DWORD *)v7 == *(_DWORD *)a2;
    v7 = *(_QWORD *)(v7 + 8);
    if ( !v7 )
      goto LABEL_14;
  }
  return v5;
}

