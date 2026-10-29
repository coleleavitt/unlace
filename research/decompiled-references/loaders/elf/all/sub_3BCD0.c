__int64 __fastcall sub_3BCD0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ecx
  __int64 v5; // rdx
  unsigned __int64 *v6; // rdx
  unsigned __int64 v7; // rdi

  v2 = *(_QWORD *)(a1 + 584);
  if ( !v2 )
    return -1;
  v3 = *(_QWORD *)(a1 + 576);
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = (unsigned __int64 *)(v3 + 24 * v5);
    v7 = *v6;
    if ( a2 >= *v6 && a2 < v7 + v6[1] )
      break;
    v5 = ++v4;
    if ( v4 >= v2 )
      return -1;
  }
  return (unsigned int)(a2 - v7) + v6[2];
}
