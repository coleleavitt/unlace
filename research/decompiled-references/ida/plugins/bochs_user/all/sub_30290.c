__int64 sub_30290()
{
  unsigned int v0; // r15d
  _BYTE *v2; // rax

  v0 = qgetenv();
  if ( (_BYTE)v0 )
  {
    while ( 1 )
    {
      v2 = (_BYTE *)qstrtok();
      if ( !v2 )
        break;
      if ( *v2 )
      {
        qmakepath();
        v0 = qfileexist();
        if ( (_BYTE)v0 )
          return v0;
      }
    }
    return 0;
  }
  return v0;
}

