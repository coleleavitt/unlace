__int64 __fastcall sub_53770(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi

  *a1 = &off_C8668;
  v2 = a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    qfree(v2);
  }
  cleanup_argloc(a1 + 8);
  result = clear_tinfo_t(a1 + 7);
  v4 = a1[3];
  if ( v4 )
  {
    v5 = a1[4];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 80 * i);
        clear_tinfo_t(v7 + 8);
        v8 = v7[5];
        if ( v8 )
        {
          v7[6] = 0;
          qfree(v8);
        }
        v9 = v7[2];
        if ( v9 )
        {
          v7[3] = 0;
          qfree(v9);
        }
        cleanup_argloc(v7);
        v4 = a1[3];
      }
    }
    a1[4] = 0;
    return qfree(v4);
  }
  return result;
}

