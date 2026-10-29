__int64 __fastcall sub_CC630(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx

  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  cleanup_argloc();
  result = clear_tinfo_t();
  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 80 * i);
        clear_tinfo_t();
        if ( v6[5] )
        {
          v6[6] = 0;
          qfree();
        }
        if ( v6[2] )
        {
          v6[3] = 0;
          qfree();
        }
        cleanup_argloc();
        v3 = *a1;
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

