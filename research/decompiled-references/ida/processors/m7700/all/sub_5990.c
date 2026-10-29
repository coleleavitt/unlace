char *__fastcall sub_5990(__int64 a1, unsigned __int16 a2)
{
  __int64 i; // rax
  char *result; // rax
  __int64 v4; // rax

  while ( 1 )
  {
    for ( i = 0; i != 301; ++i )
    {
      if ( word_B342[4 * i] == a2 )
        return &byte_B340[8 * (int)i];
    }
    if ( *(_DWORD *)(a1 + 256) == 1 )
      break;
LABEL_5:
    result = nullptr;
    if ( HIBYTE(a2) != 66 )
      return result;
    *(_BYTE *)(a1 + 260) = 1;
    a2 = (unsigned __int8)a2;
  }
  v4 = 0;
  while ( word_B202[4 * v4] != a2 )
  {
    if ( ++v4 == 40 )
      goto LABEL_5;
  }
  return &byte_B200[8 * (int)v4];
}

