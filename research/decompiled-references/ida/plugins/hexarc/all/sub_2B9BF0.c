__int64 (__fastcall **__fastcall sub_2B9BF0(_QWORD *a1, __int64 a2))()
{
  __int64 v3; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r13
  __int64 v6; // rbp
  _QWORD *v7; // rbx

  *a1 = &off_4AF200;
  a1[8] = 0;
  switch_dbctx();
  sub_139A80(a1 + 9, a2);
  v3 = a1[5];
  result = &off_4AF148;
  *a1 = &off_4AF148;
  if ( v3 )
  {
    v5 = a1[6];
    if ( v5 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v3 + 192 * v6);
        *v7 = &off_4ADD28;
        cleanup_argloc();
        if ( v7[13] )
        {
          v7[14] = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( v7[9] )
        {
          v7[10] = 0;
          qfree();
        }
        ++v6;
        cleanup_argloc();
        cleanup_argloc();
        v3 = a1[5];
      }
      while ( v5 != v6 );
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

