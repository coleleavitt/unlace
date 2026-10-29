__int64 __fastcall sub_58BF0(const char *a1, const char *a2, size_t a3, _BYTE *a4, __int64 a5, char a6)
{
  int v8; // eax
  unsigned int v9; // edx
  const char *v10; // r12
  char v11; // al
  _BYTE *i; // rax
  char *v14; // rax
  char *v15; // rax
  _BYTE *j; // rcx

  if ( a6 )
  {
    v8 = strncmp(a1, a2, a3);
    v9 = 0;
    if ( !v8 )
    {
      v10 = &a1[a3];
      v11 = a1[a3];
      if ( v11 == 32 || v11 == 61 )
      {
        for ( i = v10 + 1; *i; ++i )
          ;
LABEL_7:
        qstrncpy();
        LOBYTE(v9) = *a4 != 0;
      }
    }
  }
  else
  {
    v14 = strstr(a1, a2);
    if ( !v14 )
      return 0;
    v15 = &v14[a3];
    if ( *v15 == 32 || (v9 = 0, *v15 == 61) )
    {
      for ( j = v15 + 1; (*j & 0xDF) != 0; ++j )
        ;
      goto LABEL_7;
    }
  }
  return v9;
}

