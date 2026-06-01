unsigned __int64 __fastcall sub_F8580(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rdx

  if ( a2 >= *(_QWORD *)(a1 + 32) )
  {
    if ( !under_debugger )
      sub_3835A0(50115);
    goto LABEL_16;
  }
  v2 = *(_QWORD *)(a1 + 24) + 80 * a2;
  v3 = *(_DWORD *)(v2 + 56);
  if ( (unsigned int)(v3 - 3) > 1 && v3 )
  {
    if ( v3 == 1 )
    {
      sub_81E80((__int64 *)(a1 + 24), a2);
      result = *(int *)(a1 + 8);
      if ( a2 < result )
        *(_DWORD *)(a1 + 8) = a2;
      return result;
    }
    if ( !under_debugger )
      sub_3835A0(51015);
LABEL_16:
    BUG();
  }
  cleanup_argloc();
  if ( *(_QWORD *)(v2 + 32) )
  {
    *(_QWORD *)(v2 + 40) = 0;
    qfree();
  }
  clear_tinfo_t();
  sub_11C7E0(v2);
  memmove((void *)v2, (const void *)(v2 + 80), *(_QWORD *)(a1 + 24) + 80LL * *(_QWORD *)(a1 + 32) - v2 - 80);
  v5 = *(int *)(a1 + 8);
  --*(_QWORD *)(a1 + 32);
  result = v5;
  if ( a2 < v5 )
  {
    result = (unsigned int)(v5 - 1);
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}

