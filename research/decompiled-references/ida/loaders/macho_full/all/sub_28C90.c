__int64 __fastcall sub_28C90(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx
  unsigned __int64 v4; // rax

  if ( !*(_BYTE *)(a1 + 440) )
    sub_28840(a1);
  v2 = *(_QWORD **)(a1 + 224);
  v3 = &v2[9 * *(_QWORD *)(a1 + 232)];
  if ( v3 == v2 )
    return -1;
  while ( 1 )
  {
    v4 = v2[3];
    if ( a2 >= v4 && a2 - v4 < v2[4] )
      break;
    v2 += 9;
    if ( v2 == v3 )
      return -1;
  }
  return a2 - v4 + v2[5] + *(_QWORD *)(a1 + 120);
}

