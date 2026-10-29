_QWORD *__fastcall sub_2BF5C0(_QWORD *a1)
{
  _QWORD *v1; // r12
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rbx
  _QWORD *v5; // r15
  _QWORD *result; // rax

  if ( a1[11] )
  {
    a1[12] = 0;
    qfree();
  }
  v1 = a1 + 8;
  do
  {
    if ( *v1 )
    {
      v2 = v1[1];
      if ( v2 )
      {
        v3 = 0;
        v4 = 0;
        do
        {
          v5 = (_QWORD *)(v3 + *v1);
          *v5 = &off_4B3F68;
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
          v3 += 200;
          cleanup_argloc();
          cleanup_argloc();
        }
        while ( v2 != v4 );
      }
      v1[1] = 0;
      qfree();
    }
    result = a1 - 1;
    v1 -= 3;
  }
  while ( v1 != a1 - 1 );
  return result;
}

