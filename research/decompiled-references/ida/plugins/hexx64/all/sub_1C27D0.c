__int64 __fastcall sub_1C27D0(__int64 a1, __int64 a2, int a3, double a4)
{
  int v5; // eax
  __int64 *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx

  v5 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 2 )
  {
    if ( v5 <= 2 )
    {
      if ( v5 == 1 )
        return sub_1EF9B0(a2, *(_QWORD *)(a1 + 8), a3);
LABEL_15:
      if ( !under_debugger )
        sub_383060(0xC754u, a4);
      BUG();
    }
    if ( (unsigned int)(v5 - 3) > 1 )
      goto LABEL_15;
    return 0;
  }
  v7 = *(__int64 **)(a1 + 8);
  v8 = v7[1];
  v9 = *v7;
  v10 = *v7;
  if ( !(24 * v8) )
    return 0;
  while ( (unsigned int)(*(_DWORD *)v10 - 3) <= 1 )
  {
LABEL_12:
    v10 += 24;
    if ( v10 == v9 + 24 * v8 )
      return 0;
  }
  if ( *(_DWORD *)v10 == 1 && !(unsigned __int8)sub_1EF9B0(a2, *(_QWORD *)(v10 + 8), *(unsigned __int16 *)(v10 + 18)) )
  {
    v9 = *v7;
    v8 = v7[1];
    goto LABEL_12;
  }
  return 1;
}

