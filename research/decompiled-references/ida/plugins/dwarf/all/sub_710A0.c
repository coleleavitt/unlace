char *__fastcall sub_710A0(char *src, char *a2, char *a3)
{
  char *v3; // rbp
  int *v4; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r8
  int *v11; // rcx
  __int64 i; // rdx
  int v13; // esi
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  int *v16; // rdx
  int *v17; // rcx
  __int64 v18; // rsi
  int v19; // r9d
  int v20; // r10d
  char *v22; // rdx
  int *v23; // rax
  int v24; // esi
  int v25; // edi
  __int64 v26; // r12
  int v27; // r13d
  signed __int64 v28; // rdx
  int v29; // r12d

  v3 = a3;
  if ( src == a2 )
    return v3;
  v4 = (int *)src;
  if ( a2 == a3 )
    return src;
  v7 = a2 - src;
  v3 = &src[v3 - a2];
  v8 = (a3 - src) >> 2;
  v9 = (a2 - src) >> 2;
  if ( v9 == v8 - v9 )
  {
    v22 = &a2[v7];
    v23 = (int *)a2;
    do
    {
      v24 = *v4;
      v25 = *v23++;
      *v4++ = v25;
      *(v23 - 1) = v24;
    }
    while ( v23 != (int *)v22 );
    return a2;
  }
  else
  {
    while ( 1 )
    {
      v10 = v8 - v9;
      if ( v9 < (__int64)(v8 - v9) )
        break;
LABEL_12:
      v15 = v8;
      v16 = &v4[v8];
      if ( v10 == 1 )
      {
        v29 = v4[v15 - 1];
        if ( v15 * 4 - 4 <= 4 )
        {
          if ( v15 == 2 )
            *(v16 - 1) = *v4;
        }
        else
        {
          memmove(v4 + 1, v4, v15 * 4 - 4);
        }
        *v4 = v29;
        return v3;
      }
      v4 += v9;
      if ( v9 > 0 )
      {
        v17 = v4;
        v18 = 0;
        do
        {
          v19 = *(v17 - 1);
          v20 = *(v16 - 1);
          ++v18;
          --v17;
          --v16;
          *v17 = v20;
          *v16 = v19;
        }
        while ( v9 != v18 );
        v4 -= v9;
      }
      v9 = v8 % v10;
      if ( !(v8 % v10) )
        return v3;
      v8 = v10;
    }
    while ( v9 != 1 )
    {
      v11 = &v4[v9];
      if ( v10 > 0 )
      {
        for ( i = 0; i != v10; ++i )
        {
          v13 = v4[i];
          v4[i] = v11[i];
          v11[i] = v13;
        }
        v4 += v10;
      }
      v14 = v8 % v9;
      if ( !(v8 % v9) )
        return v3;
      v8 = v9;
      v9 -= v14;
      v10 = v8 - v9;
      if ( v9 >= (__int64)(v8 - v9) )
        goto LABEL_12;
    }
    v26 = v8;
    v27 = *v4;
    v28 = 4 * v8 - 4;
    if ( v28 <= 4 )
    {
      if ( 4 * v8 == 8 )
        *v4 = v4[1];
    }
    else
    {
      memmove(v4, v4 + 1, v28);
    }
    v4[v26 - 1] = v27;
    return v3;
  }
}

