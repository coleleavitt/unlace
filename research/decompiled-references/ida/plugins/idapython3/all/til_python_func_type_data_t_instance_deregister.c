char *__fastcall til_python_func_type_data_t_instance_deregister(__int64 *a1)
{
  char *v1; // rbx
  char *result; // rax
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 i; // r13
  _QWORD *v7; // rbp

  v1 = (char *)qword_246D0;
  result = (char *)qword_246D0 + 8 * xmmword_246D8;
  if ( qword_246D0 != result )
  {
    while ( *(__int64 **)v1 != a1 )
    {
      v1 += 8;
      if ( result == v1 )
        return result;
    }
    if ( result != v1 )
    {
      v4 = *a1;
      if ( *a1 )
      {
        v5 = a1[1];
        if ( v5 )
        {
          for ( i = 0; i != v5; ++i )
          {
            v7 = (_QWORD *)(v4 + 80 * i);
            clear_tinfo_t();
            if ( v7[5] )
            {
              v7[6] = 0;
              qfree();
            }
            if ( v7[2] )
            {
              v7[3] = 0;
              qfree();
            }
            cleanup_argloc();
            v4 = *a1;
          }
        }
        a1[1] = 0;
        qfree();
        *a1 = 0;
        a1[2] = 0;
      }
      clear_tinfo_t();
      result = (char *)memmove(v1, v1 + 8, (_BYTE *)qword_246D0 + 8 * xmmword_246D8 - v1 - 8);
      *(_QWORD *)&xmmword_246D8 = xmmword_246D8 - 1;
    }
  }
  return result;
}

