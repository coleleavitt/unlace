void __fastcall sub_1C1A0(int **a1, __int64 **a2)
{
  int *v4; // r12
  int *v5; // rdi
  __int64 *v6; // r9
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  char *v11; // rax
  char *v12; // rcx
  int *v13; // rax
  char *v14; // r14
  char *v15; // r12
  char *v16; // rax
  int *v17; // rcx
  int *v18; // rax
  __int64 v19; // r14
  int *v20; // rdx
  int *v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rdx

  v4 = a1[1];
  v5 = a1[2];
  v6 = *a2;
  v7 = 8LL * (_QWORD)v5;
  v8 = (8 * (__int64)v5) >> 5;
  v9 = (8 * (__int64)v5) >> 3;
  if ( v8 > 0 )
  {
    v10 = *v6;
    v11 = (char *)v4;
    v12 = (char *)&v4[8 * v8];
    while ( *(_QWORD *)v11 != v10 )
    {
      if ( v10 == *((_QWORD *)v11 + 1) )
      {
        v7 = v11 + 8 - (char *)v4;
        v9 = v7 >> 3;
        goto LABEL_9;
      }
      if ( v10 == *((_QWORD *)v11 + 2) )
      {
        v7 = v11 + 16 - (char *)v4;
        v9 = v7 >> 3;
        goto LABEL_9;
      }
      if ( v10 == *((_QWORD *)v11 + 3) )
      {
        v7 = v11 + 24 - (char *)v4;
        v9 = v7 >> 3;
        goto LABEL_9;
      }
      v11 += 32;
      if ( v11 == v12 )
      {
        v22 = ((char *)&v4[2 * (_QWORD)v5] - v11) >> 3;
        goto LABEL_37;
      }
    }
    goto LABEL_8;
  }
  v22 = (8 * (__int64)v5) >> 3;
  v11 = (char *)v4;
LABEL_37:
  if ( v22 == 2 )
  {
    v23 = *v6;
    goto LABEL_48;
  }
  if ( v22 == 3 )
  {
    v23 = *v6;
    if ( *(_QWORD *)v11 == *v6 )
      goto LABEL_8;
    v11 += 8;
LABEL_48:
    if ( *(_QWORD *)v11 != v23 )
    {
      v11 += 8;
      goto LABEL_41;
    }
LABEL_8:
    v7 = v11 - (char *)v4;
    v9 = (v11 - (char *)v4) >> 3;
    goto LABEL_9;
  }
  if ( v22 != 1 )
    goto LABEL_9;
  v23 = *v6;
LABEL_41:
  if ( *(_QWORD *)v11 == v23 )
    goto LABEL_8;
LABEL_9:
  if ( v5 != (int *)v9 )
  {
    v13 = *a1;
    if ( !*a1 || *v13 > 1 )
    {
      sub_1B8E0((__int64)a1, 0, 0, 0, v9, (__int64)v6);
      v4 = a1[1];
      v5 = a1[2];
      v13 = *a1;
    }
    v14 = (char *)&v4[2 * (_QWORD)v5];
    if ( !v13 || *v13 > 1 )
    {
      sub_1B8E0((__int64)a1, 0, 0, 0, v9, (__int64)v6);
      v4 = a1[1];
    }
    v15 = (char *)v4 + v7;
    v16 = v15 + 8;
    if ( v14 != v15 + 8 )
    {
      do
      {
        if ( *(_QWORD *)v16 != **a2 )
        {
          *(_QWORD *)v15 = *(_QWORD *)v16;
          v15 += 8;
        }
        v16 += 8;
      }
      while ( v16 != v14 );
      v7 = v15 - (char *)a1[1];
    }
    if ( v15 != v14 )
    {
      if ( !*a1 || **a1 > 1 )
        sub_1B8E0((__int64)a1, 0, 0, 0, v9, (__int64)v6);
      v17 = a1[1];
      v18 = a1[2];
      v19 = v14 - v15;
      v20 = &v17[2 * (_QWORD)v18];
      v21 = (int *)((char *)v17 + v7 + v19);
      if ( v17 == (int *)((char *)v17 + v7) )
      {
        if ( v21 != v20 )
          a1[1] = v21;
      }
      else if ( v21 != v20 )
      {
        memmove((char *)v17 + v7, v21, (char *)v20 - (char *)v21);
        v18 = a1[2];
      }
      a1[2] = (int *)((char *)v18 - (v19 >> 3));
    }
    if ( !*a1 || **a1 > 1 )
      sub_1B8E0((__int64)a1, 0, 0, 0, v9, (__int64)v6);
  }
}

