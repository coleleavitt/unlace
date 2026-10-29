__int64 __fastcall sub_845A0(char *s1, _WORD *a2)
{
  int v3; // edi
  int v4; // r13d
  char v5; // al
  __int64 i; // r15
  __int64 v7; // rbx
  __int16 v8; // ax
  __int16 v9; // dx
  const char **v11; // r15
  int v12; // r13d
  __int64 j; // r13
  int v14; // eax
  bool v15; // zf
  char *v16; // r13
  int v17; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int16 v20; // dx
  int v21; // edx
  char v22; // [rsp+Ch] [rbp-4Ch]
  int v23; // [rsp+Ch] [rbp-4Ch]
  char *endptr[9]; // [rsp+10h] [rbp-48h] BYREF

  endptr[1] = (char *)__readfsqword(0x28u);
  if ( !s1 || (v3 = (unsigned __int8)*s1, !(_BYTE)v3) )
  {
    LODWORD(v7) = -1;
    return (unsigned int)v7;
  }
  v4 = toupper(v3);
  v5 = getinf_flag();
  v22 = v5;
  if ( v4 != 69 && (v4 != 82 || !v5) )
  {
    v7 = 0;
    goto LABEL_15;
  }
  for ( i = 0; i != 8; ++i )
  {
    if ( !strcasecmp(s1 + 1, (const char *)*(&off_175520 + i)) )
    {
      if ( !strcasecmp(s1 + 1, "ip") )
        LODWORD(v7) = 28;
      else
        LODWORD(v7) = i;
      goto LABEL_10;
    }
  }
  LODWORD(v7) = 28;
  if ( !strcasecmp(s1 + 1, "ip") )
  {
LABEL_10:
    v8 = 0;
    v9 = 32 * (v4 == 69);
    goto LABEL_11;
  }
  v7 = 0;
  if ( strcasecmp(s1, "ax") )
  {
    while ( ++v7 != 8 )
    {
LABEL_15:
      if ( !strcasecmp(s1, (const char *)*(&off_175520 + v7)) )
        goto LABEL_49;
    }
    if ( !strcasecmp(s1, "ip") )
    {
      v9 = 16;
      v8 = 0;
LABEL_19:
      LODWORD(v7) = 28;
      goto LABEL_11;
    }
    if ( v22 )
    {
      if ( v4 == 82 )
      {
        LODWORD(v7) = strtol(s1 + 1, endptr, 10);
        if ( (unsigned int)(v7 - 8) <= 7 )
        {
          v16 = endptr[0];
          v17 = toupper((unsigned __int8)*endptr[0]);
          if ( !v17 )
          {
            v9 = 0;
            v8 = 0;
            goto LABEL_11;
          }
          v18 = (unsigned int)(v17 - 66);
          if ( (unsigned int)v18 <= 0x15 )
          {
            v19 = 2097157;
            if ( _bittest64(&v19, v18) )
            {
              if ( !v16[1] )
              {
                v9 = 32;
                if ( v17 == 68 )
                {
LABEL_46:
                  v8 = 0;
                }
                else
                {
                  v20 = v17 == 87;
                  v8 = 0;
                  v9 = 8 * v20 + 8;
                }
                goto LABEL_11;
              }
            }
          }
        }
      }
      v23 = 27;
    }
    else
    {
      v23 = 23;
    }
    v11 = (const char **)&off_1755A0;
    v12 = 16;
    LODWORD(v7) = v23 + 1;
    while ( strcasecmp(s1, *v11) )
    {
      ++v12;
      ++v11;
      if ( v12 == (_DWORD)v7 )
        goto LABEL_26;
    }
    LODWORD(v7) = v12;
LABEL_26:
    if ( v23 < (int)v7 )
    {
      for ( j = 29; j != 35; ++j )
      {
        if ( !strcasecmp(s1, (const char *)*(&off_175520 + j)) )
        {
          LODWORD(v7) = j;
          v21 = -((unsigned __int8)getinf_flag() == 0);
          v8 = 0;
          v9 = (v21 & 0xFFF0) + 32;
          goto LABEL_11;
        }
      }
      while ( strcasecmp(s1, (const char *)*(&off_175520 + j)) )
      {
        if ( ++j == 173 )
        {
          v9 = 0;
          v8 = 0;
          LODWORD(v7) = -1;
          goto LABEL_11;
        }
      }
      LODWORD(v7) = j;
      if ( (int)j <= 43 )
      {
        v9 = 1;
        v8 = 0;
      }
      else if ( (unsigned int)(j - 53) <= 2 )
      {
        v9 = 16;
        v8 = 0;
      }
      else if ( (_DWORD)j == 44 )
      {
        v9 = 32;
        v8 = 0;
      }
      else if ( (int)j <= 52 )
      {
        v9 = 80;
        v8 = 0;
      }
      else if ( (int)j <= 63 )
      {
        v9 = 64;
        v8 = 0;
      }
      else if ( (unsigned int)(j - 101) <= 0xF || (int)j <= 79 )
      {
        v9 = 128;
        v8 = 0;
      }
      else
      {
        if ( (unsigned int)(j - 81) > 0xF && (unsigned int)(j - 117) > 0xF )
        {
          v9 = ((unsigned int)(j - 133) <= 0x1F) << 9;
          goto LABEL_46;
        }
        v9 = 256;
        v8 = 0;
      }
    }
    else
    {
      v9 = 8;
      v8 = 8 * ((unsigned int)(v7 - 20) <= 3);
    }
    goto LABEL_11;
  }
LABEL_49:
  v14 = strcasecmp(s1, "ip");
  v9 = 16;
  v15 = v14 == 0;
  v8 = 0;
  if ( v15 )
    goto LABEL_19;
LABEL_11:
  if ( a2 )
  {
    *a2 = v8;
    a2[1] = v9;
  }
  return (unsigned int)v7;
}
