__int64 __fastcall sub_2C67C0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v2 + 192 * v4);
        *v5 = &off_4ADD28;
        cleanup_argloc();
        if ( v5[13] )
        {
          v5[14] = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( v5[9] )
        {
          v5[10] = 0;
          qfree();
        }
        ++v4;
        cleanup_argloc();
        cleanup_argloc();
        v2 = *a1;
      }
      while ( v3 != v4 );
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

