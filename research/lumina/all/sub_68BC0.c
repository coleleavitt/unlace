void __fastcall sub_68BC0(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi

  *a1 = &off_2370C8;
  v2 = (char *)a1[2];
  if ( v2 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 192];
        if ( v7 )
        {
          *((_QWORD *)v6 + 25) = 0;
          j__free(v7);
        }
        v8 = *((void **)v6 + 20);
        if ( v8 )
        {
          *((_QWORD *)v6 + 21) = 0;
          j__free(v8);
        }
        v9 = *((void **)v6 + 13);
        if ( v9 )
        {
          *((_QWORD *)v6 + 14) = 0;
          j__free(v9);
        }
        v10 = *((void **)v6 + 10);
        if ( v10 )
        {
          *((_QWORD *)v6 + 11) = 0;
          j__free(v10);
        }
        v11 = *((void **)v6 + 7);
        if ( v11 )
        {
          *((_QWORD *)v6 + 8) = 0;
          j__free(v11);
        }
        v12 = *((void **)v6 + 4);
        if ( v12 )
        {
          *((_QWORD *)v6 + 5) = 0;
          j__free(v12);
        }
        v13 = *((void **)v6 + 1);
        if ( v13 )
        {
          *((_QWORD *)v6 + 2) = 0;
          j__free(v13);
        }
        v2 = (char *)a1[2];
        v4 += 216;
      }
    }
    a1[3] = 0;
    j__free(v2);
  }
  operator delete(a1, 0x28u);
}
