__int64 __fastcall sub_40A20(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax

  sub_65BB0(a1, (unsigned int)"GDB: dbg_thread_suspend %d\n", a2, a4, a5, a6);
  v6 = *(_QWORD *)(a1 + 1384);
  if ( a2 == -3 )
  {
    result = 0xFFFFFFFFLL;
    if ( !v6 )
      return result;
    v9 = *(_QWORD *)(a1 + 1376);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 1376);
    v8 = v7 + 112 * v6;
    if ( v7 == v8 )
      return 0xFFFFFFFFLL;
    while ( 1 )
    {
      v9 = v7;
      if ( a2 == *(_DWORD *)(v7 + 24) )
        break;
      v7 += 112;
      if ( v8 == v7 )
        return 0xFFFFFFFFLL;
    }
  }
  if ( !v9 )
    return 0xFFFFFFFFLL;
  ++*(_DWORD *)(v9 + 36);
  return 1;
}

