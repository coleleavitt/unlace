__int64 (__fastcall **__fastcall sub_2AFD50(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  _QWORD *v6; // rbx

  result = &off_4C2B98;
  *a1 = &off_4C2B98;
  v3 = a1[5];
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v3 + 192 * v5);
        *v6 = &off_4C1C68;
        cleanup_argloc();
        if ( v6[13] )
        {
          v6[14] = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( v6[9] )
        {
          v6[10] = 0;
          qfree();
        }
        ++v5;
        cleanup_argloc();
        cleanup_argloc();
        v3 = a1[5];
      }
      while ( v4 != v5 );
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

