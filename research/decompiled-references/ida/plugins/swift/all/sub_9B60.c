__int64 __fastcall sub_9B60(__int64 a1)
{
  _QWORD *std_dirtree; // rax
  const char *v3; // rsi
  _QWORD *v4; // rbp
  __int64 result; // rax
  const char *v6; // rsi
  __int64 v7; // rdi
  const char *v8; // rdi

  std_dirtree = (_QWORD *)get_std_dirtree(*(unsigned int *)(a1 + 48));
  v3 = s1;
  v4 = std_dirtree;
  if ( *(_QWORD *)(a1 + 8) )
    v3 = *(const char **)a1;
  result = dirtree_chdir(*std_dirtree, v3);
  if ( *(_BYTE *)(a1 + 52) )
  {
    v6 = s1;
    if ( *(_QWORD *)(a1 + 32) )
      v6 = *(const char **)(a1 + 24);
    result = dirtree_rmdir(*v4, v6);
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    result = qfree(v7);
  }
  v8 = *(const char **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    return qfree(v8);
  }
  return result;
}

