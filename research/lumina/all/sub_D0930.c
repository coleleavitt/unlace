__int64 __fastcall sub_D0930(__int64 a1, int *a2)
{
  __int64 v2; // r13
  int v3; // ebx

  if ( *a2 <= 0 )
    return 0;
  v2 = 0;
  v3 = 0;
  do
  {
    if ( *(_QWORD *)&a2[6 * v3 + 2] )
      v2 |= sub_D0AB0(a1);
    ++v3;
  }
  while ( v3 < *a2 );
  return v2;
}
