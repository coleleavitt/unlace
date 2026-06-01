__int64 __fastcall sub_4B220(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  sub_70460(a1, (unsigned int)"GDB: dbg_thread_suspend %d\n", a2, a4, a5);
  v5 = *(_QWORD *)(a1 + 1384);
  if ( a2 == -3 )
  {
    result = 0xFFFFFFFFLL;
    if ( !v5 )
      return result;
    v8 = *(_QWORD *)(a1 + 1376);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 1376);
    v7 = v6 + 112 * v5;
    if ( v6 == v7 )
      return 0xFFFFFFFFLL;
    while ( 1 )
    {
      v8 = v6;
      if ( a2 == *(_DWORD *)(v6 + 24) )
        break;
      v6 += 112;
      if ( v7 == v6 )
        return 0xFFFFFFFFLL;
    }
  }
  if ( !v8 )
    return 0xFFFFFFFFLL;
  ++*(_DWORD *)(v8 + 36);
  return 1;
}

