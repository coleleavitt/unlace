void __fastcall sub_60270(_QWORD *a1)
{
  void *v2; // rdi
  char *v3; // rdi
  char *v4; // rbx
  char *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 j; // rbp
  char *v9; // r15
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  char *v14; // rdx
  __int64 v15; // r12
  __int64 k; // rbp
  char *v17; // rax
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  __int64 i; // [rsp+8h] [rbp-50h]
  __int64 v24; // [rsp+10h] [rbp-48h]
  __int64 v25; // [rsp+18h] [rbp-40h]

  *a1 = &off_236A70;
  v2 = (void *)a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    j__free(v2);
  }
  v3 = (char *)a1[8];
  if ( v3 )
  {
    v25 = a1[9];
    if ( v25 )
    {
      v24 = 0;
      for ( i = 0; i != v25; ++i )
      {
        v4 = &v3[v24];
        v5 = *(char **)&v3[v24 + 152];
        if ( v5 )
        {
          v6 = *((_QWORD *)v4 + 20);
          if ( v6 )
          {
            v7 = 0;
            for ( j = 0; j != v6; ++j )
            {
              v9 = &v5[v7];
              v10 = *(void **)&v5[v7 + 48];
              if ( v10 )
              {
                *((_QWORD *)v9 + 7) = 0;
                j__free(v10);
              }
              v11 = *((void **)v9 + 3);
              if ( v11 )
              {
                *((_QWORD *)v9 + 4) = 0;
                j__free(v11);
              }
              v12 = *(void **)v9;
              if ( *(_QWORD *)v9 )
              {
                *((_QWORD *)v9 + 1) = 0;
                j__free(v12);
              }
              v5 = *((char **)v4 + 19);
              v7 += 88;
            }
          }
          *((_QWORD *)v4 + 20) = 0;
          j__free(v5);
        }
        v13 = *((void **)v4 + 16);
        if ( v13 )
        {
          *((_QWORD *)v4 + 17) = 0;
          j__free(v13);
        }
        v14 = *((char **)v4 + 10);
        if ( v14 )
        {
          v15 = *((_QWORD *)v4 + 11);
          if ( v15 )
          {
            for ( k = 0; k != v15; ++k )
            {
              v17 = &v14[24 * k];
              v18 = *(void **)v17;
              if ( *(_QWORD *)v17 )
              {
                *((_QWORD *)v17 + 1) = 0;
                j__free(v18);
                v14 = *((char **)v4 + 10);
              }
            }
          }
          *((_QWORD *)v4 + 11) = 0;
          j__free(v14);
        }
        v19 = *((void **)v4 + 7);
        if ( v19 )
        {
          *((_QWORD *)v4 + 8) = 0;
          j__free(v19);
        }
        v20 = *((void **)v4 + 4);
        if ( v20 )
        {
          *((_QWORD *)v4 + 5) = 0;
          j__free(v20);
        }
        v3 = (char *)a1[8];
        v24 += 176;
      }
    }
    a1[9] = 0;
    j__free(v3);
  }
  v21 = (void *)a1[5];
  if ( v21 )
  {
    a1[6] = 0;
    j__free(v21);
  }
  v22 = (void *)a1[2];
  if ( v22 )
  {
    a1[3] = 0;
    j__free(v22);
  }
}
