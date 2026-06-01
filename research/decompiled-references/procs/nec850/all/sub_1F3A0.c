__int64 __fastcall sub_1F3A0(__int64 *a1, int *a2, _BYTE *a3)
{
  bool v4; // zf
  _BYTE *v5; // rbx
  unsigned int v6; // r14d
  char *v7; // rax
  const char *v8; // r13
  char *v9; // rbx
  int v10; // eax
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int i; // edx
  __int64 v15; // rsi
  bool v16; // cf
  _BYTE *v17; // rax
  char v18; // al
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned int k; // edx
  __int64 v26; // rsi
  char v27; // al
  unsigned int v28; // ecx
  unsigned int j; // edx
  __int64 v30; // r8
  unsigned int v31; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned int v32; // [rsp+10h] [rbp-38h] BYREF
  int v33; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v34; // [rsp+18h] [rbp-30h]

  v4 = *a3 == 95;
  v34 = __readfsqword(0x28u);
  v5 = a3;
  if ( v4 )
  {
    do
      ++v5;
    while ( *v5 == 95 );
  }
  if ( !strncmp(v5, "save_", 5u) )
  {
    v6 = 5;
    goto LABEL_7;
  }
  if ( strncmp(v5, "return_", 7u) )
  {
    if ( !strncmp(v5, "ghssave", 7u) )
    {
      v6 = 5;
LABEL_19:
      *a2 = 1;
      if ( v5[7] == 108 && v5[8] == 112 )
      {
        v22 = 5;
        if ( a1 )
        {
          *a1 |= 0x80000000uLL;
          v22 = *a2 | 4;
        }
        *a2 = v22;
        v17 = v5 + 9;
      }
      else
      {
        if ( (unsigned int)qsscanf(v5 + 7, "%u%n", &v32, &v33) != 1 )
          return 0;
        v12 = v32;
        if ( v32 - 20 > 9 )
          return 0;
        if ( a1 )
        {
          v13 = *a1;
          for ( i = v32 + 1; ; ++i )
          {
            v15 = v13;
            v13 |= 1LL << v12;
            v16 = v12 < 0x20;
            v12 = i;
            if ( !v16 )
              v13 = v15;
            if ( i == 30 )
              break;
          }
          *a1 = v13 | 0x80000000LL;
        }
        v17 = &v5[v33 + 7];
      }
      if ( *v17 )
      {
        if ( *v17 == 97 && !v17[1] )
          return v6;
        return 0;
      }
      goto LABEL_72;
    }
    if ( !strncmp(v5, "ghsload", 7u) )
    {
      v6 = 6;
      goto LABEL_19;
    }
    if ( !strncmp(v5, "ghssv", 5u) )
    {
      *a2 = 9;
      v27 = v5[5];
      if ( v27 != 53 )
      {
        if ( v27 != 52 )
          return 0;
        v6 = 5;
        goto LABEL_35;
      }
      v6 = 5;
    }
    else
    {
      if ( strncmp(v5, "ghsld", 5u) )
        return 0;
      *a2 = 9;
      v18 = v5[5];
      v6 = 6;
      if ( v18 != 52 )
      {
        v6 = 6;
        if ( v18 != 50 )
          return 0;
        goto LABEL_35;
      }
    }
    *a2 = 11;
LABEL_35:
    if ( v5[6] != 108 || v5[7] != 112 || v5[8] )
    {
      if ( (unsigned int)qsscanf(v5 + 6, "r%u%n", &v32, &v33) == 1 && !v5[v33 + 6] )
      {
        v28 = v32;
        if ( v32 - 20 <= 9 )
        {
          if ( !a1 )
            return v6;
          v20 = *a1;
          for ( j = v32 + 1; ; ++j )
          {
            v30 = v20;
            v20 |= 1LL << v28;
            v16 = v28 < 0x20;
            v28 = j;
            if ( !v16 )
              v20 = v30;
            if ( j == 30 )
              break;
          }
          goto LABEL_51;
        }
      }
      return 0;
    }
    if ( a1 )
      *a1 |= 0x80000000uLL;
    *a2 |= 4u;
    return v6;
  }
  v6 = 6;
LABEL_7:
  *a2 = 0;
  v7 = strchr(v5, 95);
  v8 = v7 + 1;
  v9 = v7;
  if ( !strcmp(v7 + 1, "r2_r29") )
  {
    v10 = 2;
    if ( a1 )
    {
      *a1 |= 0x3FF00004uLL;
      v10 = *a2 | 2;
    }
    goto LABEL_15;
  }
  if ( strcmp(v8, "r2_r31") )
  {
    if ( strcmp(v8, "r29") )
    {
      if ( !strcmp(v8, "r31") )
      {
        if ( a1 )
          *a1 |= 0x80000000uLL;
        return v6;
      }
      if ( (unsigned int)qsscanf(v8, "r%u_r%u%n", &v31, &v32, &v33) != 2 || v9[v33 + 1] )
        return 0;
      if ( v32 != 29 )
      {
        if ( v32 == 31 )
        {
          v19 = v31;
          if ( v31 - 20 <= 9 )
          {
            if ( !a1 )
              return v6;
            v20 = *a1;
            do
            {
              v21 = v20;
              v20 |= 1LL << v19;
              if ( v19 >= 0x20 )
                v20 = v21;
              ++v19;
            }
            while ( v19 != 30 );
LABEL_51:
            *a1 = v20 | 0x80000000LL;
            return v6;
          }
        }
        return 0;
      }
      v23 = v31;
      if ( v31 - 20 > 8 )
        return 0;
      if ( a1 )
      {
        v24 = *a1;
        for ( k = v31 + 1; ; ++k )
        {
          v26 = v24;
          v24 |= 1LL << v23;
          v16 = v23 < 0x20;
          v23 = k;
          if ( !v16 )
            v24 = v26;
          if ( k == 30 )
            break;
        }
        *a1 = v24;
      }
LABEL_72:
      *a2 |= 2u;
      return v6;
    }
    v10 = 2;
    if ( a1 )
    {
      *a1 |= 0x20000000uLL;
      v10 = *a2 | 2;
    }
LABEL_15:
    *a2 = v10;
    return v6;
  }
  if ( a1 )
    *a1 |= 0xBFF00004uLL;
  return v6;
}
