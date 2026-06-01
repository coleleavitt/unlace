__int64 *__fastcall sub_2413C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  __int64 *result; // rax

  if ( *(_DWORD *)(a1 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_383060(0xC4C4u, a5);
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( !*(_QWORD *)(v5 + 16) && *(_QWORD *)a1 == -1 )
    *(_QWORD *)a1 = a2;
  v6 = (_QWORD *)qalloc_or_throw(48, a2, a3, a4);
  v6[3] = -4294967226LL;
  v6[2] = -1;
  v6[4] = 0xFFFFFFFFLL;
  v6[5] = 0;
  *v6 = v5;
  v7 = *(_QWORD **)(v5 + 8);
  v6[1] = v7;
  *v7 = v6;
  *(_QWORD *)(v5 + 8) = v6;
  result = v6 + 2;
  ++*(_QWORD *)(v5 + 16);
  *result = a2;
  return result;
}

