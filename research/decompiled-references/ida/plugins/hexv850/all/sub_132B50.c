__int64 __fastcall sub_132B50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r10d
  __int64 v5; // r9
  int v6; // r11d
  __int64 v7; // rcx
  __int64 i; // r8

  if ( !a2 )
    return 0;
  v4 = *(_DWORD *)(a1 + 64);
  v5 = a1;
  v6 = a3 + 1;
  if ( (_DWORD)a3 == -1 )
  {
    v6 = *(_DWORD *)(a1 + 64);
    a3 = 0;
  }
  if ( (int)a3 >= v6 )
    return 0;
  v7 = 0;
  for ( i = 8LL * (unsigned int)a3; ; i += 8 )
  {
    if ( (unsigned int)a3 >= v4 )
      sub_12FAF0(a1, a2, a3, v7, i, v5, v3);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 528) + i) + 48LL);
    if ( v3 )
      break;
LABEL_14:
    a3 = (unsigned int)(a3 + 1);
    if ( v6 == (_DWORD)a3 )
      return 0;
  }
  while ( a2 != v3 )
  {
    a1 = *(_QWORD *)(a2 + 24);
    if ( *(_QWORD *)(v3 + 24) == a1 )
    {
      a1 = *(_DWORD *)v3 == *(_DWORD *)a2;
      v7 = (unsigned int)(a1 + v7);
    }
    v3 = *(_QWORD *)(v3 + 8);
    if ( !v3 )
      goto LABEL_14;
  }
  return (unsigned int)v7;
}

