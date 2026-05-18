void __fastcall sub_BCB40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  const char *v5; // rax
  const char *v6; // rbp
  size_t v7; // rax
  size_t v8; // r12
  void *v9; // rdi
  size_t v10; // r14
  __int64 v11; // rax

  if ( a1 )
  {
    if ( a3 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)a3 + 24LL);
      v5 = (const char *)mysql_stmt_error(v4);
      v6 = v5;
      if ( v5 && (v7 = strlen(v5), (v8 = v7) != 0) )
      {
        v9 = *(void **)a1;
        v10 = v7 + 1;
        if ( *(_QWORD *)(a1 + 16) < v7 + 1 )
        {
          v11 = sub_1987B0(a1, *(_QWORD *)a1, v7 + 1, 1);
          *(_QWORD *)a1 = v11;
          v9 = (void *)v11;
        }
        *(_QWORD *)(a1 + 8) = v10;
        memmove(v9, v6, v8);
        *(_BYTE *)(*(_QWORD *)a1 + v8) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
      }
      *(_DWORD *)(a1 + 24) = mysql_stmt_errno(v4);
    }
    else
    {
      sub_BC630(a1, a2);
    }
  }
}
