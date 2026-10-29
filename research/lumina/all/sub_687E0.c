void __fastcall sub_687E0(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  char *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  *a1 = &off_2373F8;
  v2 = (char *)a1[2];
  if ( v2 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[160 * i];
        v6 = *((void **)v5 + 14);
        if ( v6 )
        {
          *((_QWORD *)v5 + 15) = 0;
          j__free(v6);
        }
        v7 = *((void **)v5 + 11);
        if ( v7 )
        {
          *((_QWORD *)v5 + 12) = 0;
          j__free(v7);
        }
        v8 = *((void **)v5 + 8);
        if ( v8 )
        {
          *((_QWORD *)v5 + 9) = 0;
          j__free(v8);
        }
        v9 = *((void **)v5 + 5);
        if ( v9 )
        {
          *((_QWORD *)v5 + 6) = 0;
          j__free(v9);
        }
        v10 = *((void **)v5 + 2);
        if ( v10 )
        {
          *((_QWORD *)v5 + 3) = 0;
          j__free(v10);
        }
        v2 = (char *)a1[2];
      }
    }
    a1[3] = 0;
    j__free(v2);
  }
}
