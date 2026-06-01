unsigned __int64 __fastcall sub_F8B40(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned __int64 result; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx

  if ( a2 >= *(_QWORD *)(a1 + 32) )
  {
    if ( !under_debugger )
      sub_383060(0xC3C3u, a3);
    goto LABEL_16;
  }
  v4 = *(_QWORD *)(a1 + 24) + 80 * a2;
  v5 = *(_DWORD *)(v4 + 56);
  if ( (unsigned int)(v5 - 3) > 1 && v5 )
  {
    if ( v5 == 1 )
    {
      sub_82440((__int64 *)(a1 + 24), a2);
      result = *(int *)(a1 + 8);
      if ( a2 < result )
        *(_DWORD *)(a1 + 8) = a2;
      return result;
    }
    if ( !under_debugger )
      sub_383060(0xC747u, a3);
LABEL_16:
    BUG();
  }
  cleanup_argloc();
  v7 = *(_QWORD *)(v4 + 32);
  if ( v7 )
  {
    *(_QWORD *)(v4 + 40) = 0;
    qfree(v7);
  }
  clear_tinfo_t();
  sub_11CDA0(v4);
  memmove((void *)v4, (const void *)(v4 + 80), *(_QWORD *)(a1 + 24) + 80LL * *(_QWORD *)(a1 + 32) - v4 - 80);
  v8 = *(int *)(a1 + 8);
  --*(_QWORD *)(a1 + 32);
  result = v8;
  if ( a2 < v8 )
  {
    result = (unsigned int)(v8 - 1);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}

