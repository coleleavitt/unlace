__int64 __fastcall sub_3EA900(char *s1, int *a2, char a3)
{
  unsigned int v4; // r13d
  int v5; // eax
  char v6; // dl
  char v7; // al
  char v9; // al
  char *v10; // r14
  int v11; // eax
  int v12; // edx
  char v13; // al

  if ( !strncmp(s1, "_m_ps", 5u) )
  {
    v7 = s1[5];
    v6 = 0;
    if ( v7 != 108 )
    {
LABEL_4:
      v4 = 0;
      if ( v7 != 114 )
        return v4;
      v9 = s1[6];
      if ( v9 == 97 )
      {
        v4 = 24;
      }
      else
      {
        if ( v9 != 108 )
          return v4;
        v4 = 23;
      }
      goto LABEL_12;
    }
  }
  else
  {
    v4 = 0;
    v5 = strncmp(s1, "_mm_s", 5u);
    v6 = 1;
    if ( v5 )
      return v4;
    v7 = s1[5];
    if ( v7 != 108 )
      goto LABEL_4;
  }
  if ( s1[6] != 108 )
    return 0;
  v4 = 22;
LABEL_12:
  v10 = s1 + 7;
  if ( a3 && s1[7] == 105 )
    v10 = s1 + 8;
  if ( !v6 )
  {
    v13 = *v10;
    if ( *v10 == 113 )
    {
      if ( v10[1] )
        return 0;
      goto LABEL_29;
    }
    if ( v13 == 119 )
    {
      if ( !v10[1] )
      {
LABEL_20:
        v11 = 2;
        goto LABEL_36;
      }
      return 0;
    }
    if ( v13 != 100 || v10[1] )
      return 0;
LABEL_35:
    v11 = 4;
    goto LABEL_36;
  }
  if ( strncmp(v10, "_epi", 4u) )
    return 0;
  if ( v10[4] == 49 && v10[5] == 54 && !v10[6] )
    goto LABEL_20;
  v12 = (unsigned __int8)v10[4];
  if ( v12 == 51 && v10[5] == 50 && !v10[6] )
    goto LABEL_35;
  if ( v12 != 54 || v10[5] != 52 || v10[6] )
    return 0;
LABEL_29:
  v11 = 8;
  if ( v4 != 24 )
  {
LABEL_36:
    if ( a2 )
      *a2 = v11;
    return v4;
  }
  return 0;
}

