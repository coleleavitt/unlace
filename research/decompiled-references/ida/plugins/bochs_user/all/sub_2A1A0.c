__int64 __fastcall sub_2A1A0(const char **a1, char *a2, _QWORD *a3, unsigned int a4)
{
  const char *v4; // rax
  char v8; // di
  const char *v9; // r9
  char v10; // r9
  char v12; // dl
  const char *v13; // rax

  v4 = *a1;
  v8 = **a1;
  if ( v8 == 32 )
  {
    v9 = v4 + 1;
    do
    {
      *a1 = v9;
      v4 = v9;
      v8 = *v9++;
    }
    while ( v8 == 32 );
  }
  v10 = *a2;
  if ( *a2 )
  {
    while ( 1 )
    {
      ++v4;
      if ( v8 != v10 )
        return 0;
      ++a2;
      *a1 = v4;
      v10 = *a2;
      if ( !*a2 )
        break;
      v8 = *v4;
    }
    v12 = *v4;
    if ( *v4 != 58 )
      goto LABEL_11;
    goto LABEL_15;
  }
  if ( v8 == 58 )
  {
LABEL_15:
    *a1 = v4 + 1;
    v12 = *++v4;
LABEL_11:
    v13 = v4 + 1;
    if ( v12 == 32 )
    {
      do
        *a1 = v13++;
      while ( *(v13 - 1) == 32 );
    }
  }
  return sub_29CC0(a1, a3, a4);
}

