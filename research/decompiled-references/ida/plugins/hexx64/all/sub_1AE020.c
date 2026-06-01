void __fastcall sub_1AE020(__int64 *a1, char *a2)
{
  char v3; // bl
  const char *v4; // rbp
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rsi
  char v9; // r14
  size_t v10; // rax
  __int64 v11; // rbx
  size_t v12; // rbp
  size_t v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r13
  unsigned __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  v3 = *a2;
  if ( !*a2 )
  {
LABEL_16:
    v9 = 0;
    if ( !a2 )
      return;
    goto LABEL_7;
  }
  v4 = a2;
  while ( (unsigned int)v3 <= 0x7F )
  {
    v16 = isalnum(v3);
    if ( v3 != 95 && !v16 )
      break;
    v3 = *++v4;
    if ( !v3 )
      goto LABEL_16;
  }
  v5 = a1[1];
  if ( v5 )
  {
    v6 = v5 + 1;
    v7 = a1[1];
    v8 = *a1;
    --v5;
    if ( a1[2] >= v6 )
      goto LABEL_6;
  }
  else
  {
    v8 = *a1;
    v7 = 1;
    v6 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_6;
  }
  v23 = qvector_reserve((__int64)a1, v8, v6, 1);
  *a1 = v23;
  v8 = v23;
LABEL_6:
  a1[1] = v6;
  *(_BYTE *)(v8 + v5) = 34;
  *(_BYTE *)(*a1 + v7) = 0;
  v9 = 1;
  if ( !a2 )
    goto LABEL_18;
LABEL_7:
  v10 = strlen(a2);
  v11 = a1[1];
  v12 = v10;
  v13 = v10;
  if ( v11 )
  {
    --v11;
    v13 = v10 + v11;
  }
  v14 = *a1;
  v15 = v13 + 1;
  if ( a1[2] < v13 + 1 )
  {
    v21 = qvector_reserve((__int64)a1, v14, v15, 1);
    v15 = v13 + 1;
    *a1 = v21;
    v14 = v21;
  }
  a1[1] = v15;
  *(_BYTE *)(v14 + v13) = 0;
  memmove((void *)(v11 + *a1), a2, v12);
  if ( v9 )
  {
LABEL_18:
    v17 = a1[1];
    if ( v17 )
    {
      v20 = v17 + 1;
      v19 = a1[1];
      v18 = *a1;
      --v17;
      if ( a1[2] >= v20 )
        goto LABEL_20;
    }
    else
    {
      v18 = *a1;
      v19 = 1;
      v20 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
      {
LABEL_20:
        a1[1] = v20;
        *(_BYTE *)(v18 + v17) = 34;
        *(_BYTE *)(*a1 + v19) = 0;
        return;
      }
    }
    v22 = qvector_reserve((__int64)a1, v18, v20, 1);
    *a1 = v22;
    v18 = v22;
    goto LABEL_20;
  }
}

