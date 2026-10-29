char *__fastcall til_python_udt_type_data_t_instance_deregister(__int64 *a1)
{
  _BYTE *v1; // rdx
  __int64 v2; // rcx
  char *result; // rax
  char *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 i; // r13
  _QWORD *v9; // rbp

  v1 = qword_246B0;
  v2 = xmmword_246B8;
  result = (char *)qword_246B0 + 8 * xmmword_246B8;
  if ( qword_246B0 != result )
  {
    v5 = (char *)qword_246B0;
    while ( *(__int64 **)v5 != a1 )
    {
      v5 += 8;
      if ( result == v5 )
        return result;
    }
    if ( result != v5 )
    {
      v6 = *a1;
      if ( *a1 )
      {
        v7 = a1[1];
        if ( v7 )
        {
          for ( i = 0; i != v7; ++i )
          {
            v9 = (_QWORD *)(v6 + 144 * i);
            clear_tinfo_t();
            if ( v9[5] )
            {
              v9[6] = 0;
              qfree();
            }
            if ( v9[2] )
            {
              v9[3] = 0;
              qfree();
            }
            v6 = *a1;
          }
        }
        a1[1] = 0;
        qfree();
        *a1 = 0;
        v1 = qword_246B0;
        a1[2] = 0;
        v2 = xmmword_246B8;
      }
      result = (char *)memmove(v5, v5 + 8, &v1[8 * v2] - v5 - 8);
      *(_QWORD *)&xmmword_246B8 = xmmword_246B8 - 1;
    }
  }
  return result;
}

