__int64 __fastcall sub_37FC40(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rcx
  int v3; // edx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rbp
  _QWORD *v10; // rbx

  v2 = a2[1];
  if ( !v2 )
    return 0;
  v3 = 0;
  v5 = 0;
  v6 = *a2;
  while ( 1 )
  {
    v7 = 96 * v5;
    v8 = v6 + 96 * v5;
    if ( *(_DWORD *)v8 == 1 && *(_QWORD *)(a1 + 8) + a2[5] == *(_QWORD *)(v8 + 8) )
      break;
    v5 = ++v3;
    if ( v3 >= v2 )
      return 0;
  }
  if ( *(_QWORD *)(v8 + 24) )
  {
    *(_QWORD *)(v8 + 32) = 0;
    qfree();
    *(_QWORD *)(v8 + 24) = 0;
    *(_QWORD *)(v8 + 40) = 0;
  }
  if ( *(_QWORD *)(v8 + 32) <= 1u
    && !*(_BYTE *)(v8 + 48)
    && *(_QWORD *)(v8 + 64) <= 1u
    && (*(_BYTE *)(v8 + 88) & 0x2E) == 0 )
  {
    v10 = (_QWORD *)(*a2 + v7);
    if ( v10[7] )
    {
      v10[8] = 0;
      qfree();
    }
    clear_tinfo_t();
    if ( v10[3] )
    {
      v10[4] = 0;
      qfree();
    }
    cleanup_argloc();
    memmove(v10, v10 + 12, *a2 + 96 * a2[1]-- - (_QWORD)v10 - 96);
  }
  return 1;
}

