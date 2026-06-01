__int64 __fastcall sub_30E60(_QWORD *a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rsi
  int v3; // edx
  __int64 v4; // rax

  v1 = a1[108];
  if ( !*(_BYTE *)(v1 + 1) )
  {
    *((_BYTE *)a1 + 792) = 1;
    return 0;
  }
  v2 = a1[109];
  v3 = 1;
  v4 = 1;
  if ( v2 <= 1 )
    return 0;
  while ( !*(_BYTE *)(v1 + 40 * v4 + 1) )
  {
    v3 += 2;
    v4 = v3;
    if ( v3 >= v2 )
      return 0;
  }
  return sub_30DC0(a1);
}

