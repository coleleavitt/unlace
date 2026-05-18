void __fastcall sub_185D30(_QWORD *a1)
{
  void *v2; // rdi
  char *v3; // rdi
  __int64 v4; // r13
  __int64 i; // r12
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  char *v10; // rdx
  __int64 v11; // r12
  __int64 j; // rbx
  char *v13; // rax
  void *v14; // rdi
  char *v15; // rdx
  __int64 v16; // r12
  __int64 k; // rbx
  char *v18; // rax
  void *v19; // rdi

  *a1 = &off_23CE30;
  v2 = (void *)a1[17];
  if ( v2 )
  {
    a1[18] = 0;
    j__free(v2);
  }
  v3 = (char *)a1[11];
  if ( v3 )
  {
    v4 = a1[12];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = &v3[48 * i];
        v7 = *((void **)v6 + 3);
        if ( v7 )
        {
          *((_QWORD *)v6 + 4) = 0;
          j__free(v7);
        }
        v8 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          j__free(v8);
        }
        v3 = (char *)a1[11];
      }
    }
    a1[12] = 0;
    j__free(v3);
  }
  v9 = (void *)a1[8];
  if ( v9 )
  {
    a1[9] = 0;
    j__free(v9);
  }
  v10 = (char *)a1[5];
  if ( v10 )
  {
    v11 = a1[6];
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = &v10[32 * j];
        v14 = *(void **)v13;
        if ( *(_QWORD *)v13 )
        {
          *((_QWORD *)v13 + 1) = 0;
          j__free(v14);
          v10 = (char *)a1[5];
        }
      }
    }
    a1[6] = 0;
    j__free(v10);
  }
  v15 = (char *)a1[2];
  if ( v15 )
  {
    v16 = a1[3];
    if ( v16 )
    {
      for ( k = 0; k != v16; ++k )
      {
        v18 = &v15[24 * k];
        v19 = *(void **)v18;
        if ( *(_QWORD *)v18 )
        {
          *((_QWORD *)v18 + 1) = 0;
          j__free(v19);
          v15 = (char *)a1[2];
        }
      }
    }
    a1[3] = 0;
    j__free(v15);
  }
  operator delete(a1, 0xC0u);
}
