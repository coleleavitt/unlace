const char **__fastcall sub_F9C0(char *s2)
{
  const char **v1; // rbx
  const char **v2; // r12
  const char *v4; // rax

  v1 = (const char **)off_37AE0;
  while ( 1 )
  {
    v2 = v1;
    if ( !strcmp(*v1, s2) )
      break;
    if ( (unsigned __int8)qisabspath() )
    {
      v4 = (const char *)qbasename();
      if ( !strcmp(*v1, v4) )
        break;
    }
    v1 += 2;
    if ( v1 == (const char **)off_37B00 )
      return nullptr;
  }
  return v2;
}

