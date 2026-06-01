signed __int64 __fastcall sub_1C35C0(_DWORD *a1, int a2, double a3)
{
  int v3; // eax
  signed __int64 result; // rax
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rsi

  v3 = *a1;
  if ( *a1 == 1 )
    return (unsigned int)(a2 + a1[2]);
  if ( v3 != 2 )
  {
    if ( (unsigned int)(v3 - 3) > 3 )
    {
      if ( !under_debugger )
        sub_383060(0xC7CBu, a3);
      BUG();
    }
    return 0xFFFFFFFFLL;
  }
  v5 = *((__int64 **)a1 + 1);
  v6 = *v5;
  v7 = *v5 + 24 * v5[1];
  if ( *v5 == v7 )
    return 0xFFFFFFFFLL;
  result = 0x8000000000000000LL;
  v8 = 0x7FFFFFFFFFFFFFFFLL;
  do
  {
    if ( *(_DWORD *)v6 == 1 )
    {
      v9 = *(_QWORD *)(v6 + 8);
      if ( v8 > v9 )
        v8 = *(_QWORD *)(v6 + 8);
      if ( result < v9 + *(unsigned __int16 *)(v6 + 18) )
        result = v9 + *(unsigned __int16 *)(v6 + 18);
    }
    v6 += 24;
  }
  while ( v7 != v6 );
  if ( v8 == 0x7FFFFFFFFFFFFFFFLL )
    return 0xFFFFFFFFLL;
  return result;
}

