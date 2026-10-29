const char **__fastcall sub_25CD0(char *s2)
{
  const char **v1; // rbx
  const char **v2; // r12
  const char *v4; // rax

  v1 = (const char **)off_44EE0;
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
    if ( v1 == (const char **)&unk_44F00 )
      return nullptr;
  }
  return v2;
}

