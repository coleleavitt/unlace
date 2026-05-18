__int64 __fastcall sub_BC630(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  const char *v4; // rax
  const char *v5; // rbp
  size_t v6; // rax
  size_t v7; // r12
  __int64 result; // rax
  void *v9; // rdi
  size_t v10; // r14
  __int64 v11; // rax

  v2 = *(_QWORD *)(a2 + 16);
  v4 = (const char *)mysql_error(v2);
  if ( v4 && (v5 = v4, v6 = strlen(v4), (v7 = v6) != 0) )
  {
    v9 = *(void **)a1;
    v10 = v6 + 1;
    if ( *(_QWORD *)(a1 + 16) < v6 + 1 )
    {
      v11 = sub_1987B0(a1, *(_QWORD *)a1, v6 + 1, 1);
      *(_QWORD *)a1 = v11;
      v9 = (void *)v11;
    }
    *(_QWORD *)(a1 + 8) = v10;
    memmove(v9, v5, v7);
    *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  result = mysql_errno(v2);
  *(_DWORD *)(a1 + 24) = result;
  return result;
}
