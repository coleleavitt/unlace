__int64 (__fastcall **__fastcall sub_2BAEB0(_QWORD *a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rbx

  *a1 = &off_4C2A90;
  a1[8] = 0;
  switch_dbctx();
  sub_13BF40(a1 + 9, a2);
  v3 = a1[5];
  result = &off_4C29D8;
  *a1 = &off_4C29D8;
  if ( v3 )
  {
    v5 = a1[6];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v3 + (i << 6));
        *v7 = off_4C1BF0;
        clear_tinfo_t();
        if ( v7[2] )
        {
          v7[3] = 0;
          qfree();
        }
        v3 = a1[5];
      }
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

