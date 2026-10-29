__int64 __fastcall sub_CBA00(const char *a1)
{
  unsigned int v1; // ebx
  char *i; // rax
  char v3; // dl
  unsigned int v4; // ecx
  char *v5; // rax
  char *v6; // rsi
  char v7; // cl
  unsigned int v8; // edx

  v1 = 0;
LABEL_2:
  for ( i = strchr(a1, 37); i; i = strchr(v5 + 1, 37) )
  {
    v3 = i[1];
    if ( !v3 )
      break;
    a1 = i + 2;
    if ( v3 == 37 )
      goto LABEL_2;
    v4 = v3;
    v5 = i + 1;
    if ( (unsigned int)v3 <= 0x7F )
    {
      while ( v4 - 48 <= 9 )
      {
        v4 = *++v5;
        v3 = v4;
        if ( v4 > 0x7F )
          goto LABEL_8;
      }
      if ( v3 != 42 )
      {
LABEL_8:
        v6 = v5;
        goto LABEL_9;
      }
      ++v1;
      v6 = v5 + 1;
LABEL_9:
      v7 = *v6;
      v5 = v6;
      v8 = *v6;
      if ( *v6 == 46 )
      {
        v8 = v6[1];
        v5 = v6 + 1;
        v7 = v6[1];
      }
      if ( v8 <= 0x7F )
      {
        while ( v8 - 48 <= 9 )
        {
          v8 = *++v5;
          v7 = v8;
          if ( v8 > 0x7F )
            goto LABEL_15;
        }
        if ( v7 == 42 )
        {
          ++v1;
          ++v5;
        }
LABEL_15:
        if ( !*v5 )
          break;
      }
    }
    ++v1;
  }
  return v1;
}

