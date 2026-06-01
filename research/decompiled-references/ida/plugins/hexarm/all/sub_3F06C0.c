__int64 __fastcall sub_3F06C0(__int64 a1, __int64 a2, int *a3, double a4)
{
  char *v5; // rax
  int v6; // ebx
  int v7; // r15d
  unsigned int v8; // r12d
  char v10; // al
  const char *v11; // r13
  int v12; // ebx

  v5 = strchr((const char *)a2, 94);
  if ( v5 )
  {
    v6 = (_DWORD)v5 - a2;
    v7 = strtol(v5 + 1, nullptr, 10);
    if ( *(_DWORD *)(a1 + 80) != 8 )
      goto LABEL_3;
LABEL_6:
    v8 = sub_3F0370(a1, a2, v6, v7, a3, a4);
    if ( v8 != -1 )
      return v8;
    goto LABEL_3;
  }
  v7 = 0;
  v6 = strlen((const char *)a2);
  if ( *(_DWORD *)(a1 + 80) == 8 )
    goto LABEL_6;
LABEL_3:
  v8 = sub_3F04D0(a1, (const char *)a2, v6, v7, a3, a4);
  if ( v8 == -1 )
  {
    v8 = sub_3F0200(a1, a2, v6, *(_BYTE *)a2, a3);
    if ( v8 == -1 )
    {
      if ( *(_BYTE *)a2 )
      {
        v10 = *(_BYTE *)(a2 + 1);
        if ( v10 == 102 || v10 == 99 )
        {
          v11 = "cf";
          v12 = 0;
          while ( strcmp(v11, (const char *)a2) )
          {
            ++v12;
            v11 += 24;
            if ( v12 == 5 )
              return v8;
          }
          if ( a3 )
            *a3 = 1;
          return *((unsigned int *)&unk_42F960 + 6 * v12 + 4);
        }
      }
    }
    else
    {
      v8 += v7;
    }
  }
  return v8;
}

