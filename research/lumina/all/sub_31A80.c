void __fastcall sub_31A80(char **a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  char *i; // r12
  char *v5; // rbp
  void *v6; // rdi
  char *v7; // rdx
  __int64 v8; // r15
  __int64 j; // rbx
  char *v10; // rax
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  char *v14; // [rsp+8h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v14 = a1[1];
    if ( v14 )
    {
      v3 = 0;
      for ( i = nullptr; i != v14; ++i )
      {
        v5 = &v2[v3];
        v6 = *(void **)&v2[v3 + 128];
        if ( v6 )
        {
          *((_QWORD *)v5 + 17) = 0;
          j__free(v6);
        }
        v7 = *((char **)v5 + 10);
        if ( v7 )
        {
          v8 = *((_QWORD *)v5 + 11);
          if ( v8 )
          {
            for ( j = 0; j != v8; ++j )
            {
              v10 = &v7[24 * j];
              v11 = *(void **)v10;
              if ( *(_QWORD *)v10 )
              {
                *((_QWORD *)v10 + 1) = 0;
                j__free(v11);
                v7 = *((char **)v5 + 10);
              }
            }
          }
          *((_QWORD *)v5 + 11) = 0;
          j__free(v7);
        }
        v12 = *((void **)v5 + 7);
        if ( v12 )
        {
          *((_QWORD *)v5 + 8) = 0;
          j__free(v12);
        }
        v13 = *((void **)v5 + 4);
        if ( v13 )
        {
          *((_QWORD *)v5 + 5) = 0;
          j__free(v13);
        }
        v2 = *a1;
        v3 += 152;
      }
    }
    a1[1] = nullptr;
    j__free(v2);
  }
}
