__int64 __fastcall sub_32E860(char *a1)
{
  char *v1; // rbx
  unsigned int v2; // edi

  v1 = a1;
  v2 = *a1;
  if ( !(_BYTE)v2 )
    return 1;
  while ( (_BYTE)v2 == 95 || v2 <= 0x7F && isalnum(v2) )
  {
    v2 = *++v1;
    if ( !(_BYTE)v2 )
      return 1;
  }
  return 0;
}

