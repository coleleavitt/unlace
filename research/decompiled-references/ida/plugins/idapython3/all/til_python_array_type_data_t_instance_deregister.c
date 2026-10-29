char *__fastcall til_python_array_type_data_t_instance_deregister(__int64 a1)
{
  char *v1; // rbx
  char *result; // rax

  v1 = (char *)qword_246F0;
  result = (char *)qword_246F0 + 8 * xmmword_246F8;
  if ( qword_246F0 != result )
  {
    while ( *(_QWORD *)v1 != a1 )
    {
      v1 += 8;
      if ( result == v1 )
        return result;
    }
    if ( result != v1 )
    {
      clear_tinfo_t();
      result = (char *)memmove(v1, v1 + 8, (_BYTE *)qword_246F0 + 8 * xmmword_246F8 - v1 - 8);
      *(_QWORD *)&xmmword_246F8 = xmmword_246F8 - 1;
    }
  }
  return result;
}

