char __fastcall sub_49DB0(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  const char *v6; // r13
  _QWORD *v8; // r14
  const char **v9; // rsi
  const char **v10; // rdx

  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
    return 0;
  v6 = *(const char **)(a2 + 32);
  if ( v6 == (const char *)-1LL )
  {
    v6 = *(const char **)(a2 + 24);
    if ( v6 == (const char *)-1LL )
      v6 = *(const char **)(a2 + 8);
  }
  v8 = sub_49440(a1, *(_DWORD *)(a2 + 4), v6);
  if ( !v8 )
    return 0;
  sub_48620(a1, (__int64)"%a: bptcnd yielded false\n", a4);
  *(_BYTE *)(a2 + 16) = 1;
  v9 = *(const char ***)(a1 + 432);
  v10 = &v9[*(_QWORD *)(a1 + 440)];
  if ( v9 == v10 )
    return sub_49920((unsigned __int64 **)a1, v8, a2, a3, a4);
  while ( v6 != *v9 )
  {
    if ( v10 == ++v9 )
      return sub_49920((unsigned __int64 **)a1, v8, a2, a3, a4);
  }
  if ( v10 == v9 )
    return sub_49920((unsigned __int64 **)a1, v8, a2, a3, a4);
  if ( under_debugger )
    BUG();
  interr();
  return sub_49EB0(617, v9);
}

