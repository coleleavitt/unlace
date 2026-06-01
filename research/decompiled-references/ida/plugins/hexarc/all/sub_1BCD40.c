signed __int64 __fastcall sub_1BCD40(_DWORD *a1, int a2)
{
  int v2; // eax
  signed __int64 result; // rax
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rsi

  v2 = *a1;
  if ( *a1 == 1 )
    return (unsigned int)(a2 + a1[2]);
  if ( v2 != 2 )
  {
    if ( (unsigned int)(v2 - 3) > 3 )
    {
      if ( !under_debugger )
        sub_37B760(51147);
      BUG();
    }
    return 0xFFFFFFFFLL;
  }
  v4 = *((__int64 **)a1 + 1);
  v5 = *v4;
  v6 = *v4 + 24 * v4[1];
  if ( *v4 == v6 )
    return 0xFFFFFFFFLL;
  result = 0x8000000000000000LL;
  v7 = 0x7FFFFFFFFFFFFFFFLL;
  do
  {
    if ( *(_DWORD *)v5 == 1 )
    {
      v8 = *(_QWORD *)(v5 + 8);
      if ( v7 > v8 )
        v7 = *(_QWORD *)(v5 + 8);
      if ( result < v8 + *(unsigned __int16 *)(v5 + 18) )
        result = v8 + *(unsigned __int16 *)(v5 + 18);
    }
    v5 += 24;
  }
  while ( v6 != v5 );
  if ( v7 == 0x7FFFFFFFFFFFFFFFLL )
    return 0xFFFFFFFFLL;
  return result;
}

