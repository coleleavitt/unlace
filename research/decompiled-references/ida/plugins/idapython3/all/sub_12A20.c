__int64 sub_12A20()
{
  char **v0; // r15
  const char *v1; // r13
  unsigned int v2; // ebx

  v0 = off_23960;
  while ( 1 )
  {
    v1 = *v0;
    qmakepath();
    v2 = qfileexist();
    if ( !(_BYTE)v2 )
      break;
    if ( ++v0 == (char **)&unk_23980 )
      return v2;
  }
  sub_7D60((__int64)"IDAPython: Missing required file: '%s'", v1);
  return v2;
}

