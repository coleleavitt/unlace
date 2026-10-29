void __fastcall sub_30780(char **a1)
{
  char *v2; // rdi
  char *v3; // r12
  char *i; // rbx
  char *v5; // rax
  char *v6; // rdi
  char *v7; // rdx
  char *v8; // r12
  char *j; // rbx
  char *v10; // rax
  void *v11; // rdi
  char *v12; // rdi
  char *v13; // r14
  __int64 v14; // r13
  char *k; // r12
  char *v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  char *v25; // rdi
  char *v26; // rdi
  char *v27; // r12
  char *m; // rbx
  char *v29; // rax
  char *v30; // rdi
  char *v31; // rdx
  char *v32; // r12
  char *n; // rbx
  char *v34; // rax
  void *v35; // rdi

  v2 = a1[21];
  if ( v2 )
  {
    v3 = a1[22];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = i;
        sub_176520(&v2[32 * (_QWORD)v5]);
        v2 = a1[21];
      }
    }
    a1[22] = nullptr;
    j__free(v2);
  }
  v6 = a1[18];
  if ( v6 )
  {
    a1[19] = nullptr;
    j__free(v6);
  }
  v7 = a1[15];
  if ( v7 )
  {
    v8 = a1[16];
    if ( v8 )
    {
      for ( j = nullptr; j != v8; ++j )
      {
        v10 = &v7[24 * (_QWORD)j];
        v11 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          j__free(v11);
          v7 = a1[15];
        }
      }
    }
    a1[16] = nullptr;
    j__free(v7);
  }
  v12 = a1[12];
  if ( v12 )
  {
    v13 = a1[13];
    if ( v13 )
    {
      v14 = 0;
      for ( k = nullptr; k != v13; ++k )
      {
        v16 = &v12[v14];
        v17 = *(void **)&v12[v14 + 168];
        if ( v17 )
        {
          *((_QWORD *)v16 + 22) = 0;
          j__free(v17);
        }
        v18 = *((void **)v16 + 18);
        if ( v18 )
        {
          *((_QWORD *)v16 + 19) = 0;
          j__free(v18);
        }
        v19 = *((void **)v16 + 15);
        if ( v19 )
        {
          *((_QWORD *)v16 + 16) = 0;
          j__free(v19);
        }
        v20 = *((void **)v16 + 12);
        if ( v20 )
        {
          *((_QWORD *)v16 + 13) = 0;
          j__free(v20);
        }
        v21 = *((void **)v16 + 9);
        if ( v21 )
        {
          *((_QWORD *)v16 + 10) = 0;
          j__free(v21);
        }
        v22 = *((void **)v16 + 6);
        if ( v22 )
        {
          *((_QWORD *)v16 + 7) = 0;
          j__free(v22);
        }
        v23 = *((void **)v16 + 3);
        if ( v23 )
        {
          *((_QWORD *)v16 + 4) = 0;
          j__free(v23);
        }
        v24 = *(void **)v16;
        if ( *(_QWORD *)v16 )
        {
          *((_QWORD *)v16 + 1) = 0;
          j__free(v24);
        }
        v12 = a1[12];
        v14 += 200;
      }
    }
    a1[13] = nullptr;
    j__free(v12);
  }
  v25 = a1[9];
  if ( v25 )
  {
    a1[10] = nullptr;
    j__free(v25);
  }
  v26 = a1[6];
  if ( v26 )
  {
    v27 = a1[7];
    if ( v27 )
    {
      for ( m = nullptr; m != v27; ++m )
      {
        v29 = m;
        sub_176520(&v26[32 * (_QWORD)v29]);
        v26 = a1[6];
      }
    }
    a1[7] = nullptr;
    j__free(v26);
  }
  v30 = a1[3];
  if ( v30 )
  {
    a1[4] = nullptr;
    j__free(v30);
  }
  v31 = *a1;
  if ( *a1 )
  {
    v32 = a1[1];
    if ( v32 )
    {
      for ( n = nullptr; n != v32; ++n )
      {
        v34 = &v31[24 * (_QWORD)n];
        v35 = *(void **)v34;
        if ( *(_QWORD *)v34 )
        {
          *((_QWORD *)v34 + 1) = 0;
          j__free(v35);
          v31 = *a1;
        }
      }
    }
    a1[1] = nullptr;
    j__free(v31);
  }
}
