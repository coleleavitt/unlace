__int64 __fastcall sub_1CD00(char *a1, char **a2)
{
  char *v3; // rdi
  char v4; // dl
  char *v5; // rax
  char *v6; // rdi
  const char *v8; // rax
  char v9; // cl
  char *v10; // rdi
  unsigned __int8 v11; // cl
  char *v12; // rax

  v3 = *a2;
  v4 = **a2;
  if ( (unsigned __int8)(v4 - 66) > 0x19u )
    return 0;
  if ( ((1LL << (v4 - 66)) & 0x1120197) != 0 )
  {
    v6 = v3 + 1;
    goto LABEL_6;
  }
  if ( v4 == 91 )
  {
    v8 = v3 + 1;
    *a2 = v3 + 1;
    v9 = v3[1];
    if ( v9 == 91 )
    {
      v10 = v3 + 2;
      do
      {
        *a2 = v10;
        v8 = v10;
        v9 = *v10++;
      }
      while ( v9 == 91 );
    }
    v11 = v9 - 66;
    if ( v11 > 0x18u )
      return 0;
    if ( ((1LL << v11) & 0x1120197) != 0 )
    {
      v6 = (char *)(v8 + 1);
    }
    else
    {
      if ( v11 != 10 )
        return 0;
      v12 = strchr(v8, 59);
      if ( !v12 )
        return 0;
      v6 = v12 + 1;
    }
    v4 = 76;
LABEL_6:
    *a2 = v6;
    *a1 = v4;
    return 1;
  }
  if ( v4 == 76 )
  {
    v5 = strchr(v3, 59);
    v4 = 76;
    v6 = v5 + 1;
    if ( v5 )
      goto LABEL_6;
  }
  return 0;
}

