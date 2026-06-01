char *__fastcall til_python_ptr_type_data_t_instance_deregister(__int64 a1)
{
  char *v1; // rbx
  char *result; // rax

  v1 = (char *)qword_24710;
  result = (char *)qword_24710 + 8 * xmmword_24718;
  if ( qword_24710 != result )
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
      clear_tinfo_t();
      result = (char *)memmove(v1, v1 + 8, (_BYTE *)qword_24710 + 8 * xmmword_24718 - v1 - 8);
      *(_QWORD *)&xmmword_24718 = xmmword_24718 - 1;
    }
  }
  return result;
}

