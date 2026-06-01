__int64 __fastcall sub_1C3500(_DWORD *a1, double a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *a1;
  if ( *a1 == 1 )
    return (unsigned int)a1[2];
  if ( v2 != 2 )
  {
    if ( (unsigned int)(v2 - 3) > 3 )
    {
      if ( !under_debugger )
        sub_383060(0xC7CBu, a2);
      BUG();
    }
    return 0xFFFFFFFFLL;
  }
  v4 = *((__int64 **)a1 + 1);
  v5 = *v4;
  v6 = *v4 + 24 * v4[1];
  if ( *v4 == v6 )
    return 0xFFFFFFFFLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  do
  {
    if ( *(_DWORD *)v5 == 1 && result > *(_QWORD *)(v5 + 8) )
      result = *(_QWORD *)(v5 + 8);
    v5 += 24;
  }
  while ( v6 != v5 );
  if ( result == 0x7FFFFFFFFFFFFFFFLL )
    return 0xFFFFFFFFLL;
  return result;
}

