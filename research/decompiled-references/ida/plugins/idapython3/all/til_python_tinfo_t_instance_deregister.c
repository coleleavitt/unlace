char *__fastcall til_python_tinfo_t_instance_deregister(__int64 a1)
{
  char *v1; // rbx
  char *result; // rax

  v1 = (char *)dest;
  result = (char *)dest + 8 * xmmword_24738;
  if ( dest != result )
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
      result = (char *)memmove(v1, v1 + 8, (_BYTE *)dest + 8 * xmmword_24738 - v1 - 8);
      *(_QWORD *)&xmmword_24738 = xmmword_24738 - 1;
    }
  }
  return result;
}

