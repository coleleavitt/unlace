__int64 __fastcall sub_D8EA0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  int v4; // eax
  int v5; // r14d
  int v6; // eax

  if ( !a1 )
    return 0;
  v2 = a1;
  v3 = 0;
  while ( 1 )
  {
    v4 = sub_D8E30(v2, a2);
    v5 = v4;
    if ( (a2 & 1) == 0 )
      break;
    v6 = sub_D8EA0(*(_QWORD *)(v2 + 16), a2);
    v2 = *(_QWORD *)(v2 + 24);
    v3 += v5 + v6;
    if ( !v2 )
      return v3;
  }
  return v4 + v3;
}
