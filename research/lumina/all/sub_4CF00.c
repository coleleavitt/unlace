void __fastcall sub_4CF00(char **a1)
{
  char *v2; // rdi
  __int64 v3; // r15
  char *v4; // rbx
  char *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 i; // rbp
  char *v9; // r14
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  char *v14; // rdx
  __int64 v15; // r12
  __int64 j; // rbp
  char *v17; // rax
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  char *v21; // [rsp+8h] [rbp-50h]
  char *v23; // [rsp+18h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v23 = a1[1];
    if ( v23 )
    {
      v21 = nullptr;
      v3 = 0;
      do
      {
        v4 = &v2[v3];
        v5 = *(char **)&v2[v3 + 152];
        if ( v5 )
        {
          v6 = *((_QWORD *)v4 + 20);
          if ( v6 )
          {
            v7 = 0;
            for ( i = 0; i != v6; ++i )
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
            for ( j = 0; j != v15; ++j )
            {
              v17 = &v14[24 * j];
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
        ++v21;
        v3 += 176;
        v2 = *a1;
      }
      while ( v23 != v21 );
    }
    a1[1] = nullptr;
    j__free(v2);
  }
}
