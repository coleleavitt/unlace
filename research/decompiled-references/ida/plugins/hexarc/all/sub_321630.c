__int64 __fastcall sub_321630(char **a1, _BYTE *a2)
{
  char *v2; // rdx
  char v4; // r8
  char *v5; // rdi
  unsigned int v6; // r9d
  char v8; // cl
  char v9; // cl

  v2 = *a1;
  v4 = **a1;
  v5 = *a1 + 1;
  if ( v4 == 34 )
    goto LABEL_18;
  if ( (unsigned __int8)(v4 - 92) <= 0x1Cu )
  {
    v6 = 1;
    if ( ((1LL << (v4 - 92)) & 0x5440461) != 0 )
      goto LABEL_10;
    if ( v4 == 120 )
      goto LABEL_8;
    *a2 = 1;
    if ( v4 == 117 )
    {
      v6 = 0;
      v5 = v2 + 2;
      if ( !v2[1] )
        goto LABEL_10;
      v5 = v2 + 3;
      if ( !v2[2] )
      {
        v6 = 0;
        goto LABEL_10;
      }
LABEL_8:
      *a2 = 1;
      if ( *v5 )
      {
        LOBYTE(v6) = v5[1] != 0;
        v5 += 2;
      }
      else
      {
        ++v5;
        v6 = 0;
      }
      goto LABEL_10;
    }
LABEL_18:
    v6 = 1;
    goto LABEL_10;
  }
  v6 = 1;
  if ( !v4 )
    goto LABEL_10;
  *a2 = 1;
  if ( (unsigned __int8)(v4 - 48) > 7u )
    goto LABEL_18;
  v8 = v2[1];
  v5 = v2 + 2;
  v6 = 0;
  if ( v8 )
  {
    v6 = 1;
    if ( (unsigned __int8)(v8 - 48) <= 7u )
    {
      v9 = v2[2];
      v5 = v2 + 3;
      v6 = 0;
      if ( v9 )
      {
        v6 = 1;
        if ( (unsigned __int8)(v9 - 48) <= 7u )
        {
          v5 = v2 + 4;
          LOBYTE(v6) = v2[3] != 0;
        }
      }
    }
  }
LABEL_10:
  *a1 = v5;
  return v6;
}

