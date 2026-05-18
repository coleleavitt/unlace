void __fastcall sub_A14A0(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r14
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

  *a1 = &off_2383C8;
  v2 = (char *)a1[5];
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 64];
        if ( v7 )
        {
          *((_QWORD *)v6 + 9) = 0;
          j__free(v7);
        }
        v8 = *((void **)v6 + 5);
        if ( v8 )
        {
          *((_QWORD *)v6 + 6) = 0;
          j__free(v8);
        }
        v9 = *((void **)v6 + 2);
        if ( v9 )
        {
          *((_QWORD *)v6 + 3) = 0;
          j__free(v9);
        }
        v2 = (char *)a1[5];
        v4 += 88;
      }
    }
    a1[6] = 0;
    j__free(v2);
  }
  v10 = (char *)a1[2];
  if ( v10 )
  {
    v11 = a1[3];
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = &v10[32 * j];
        v14 = *((void **)v13 + 1);
        if ( v14 )
        {
          *((_QWORD *)v13 + 2) = 0;
          j__free(v14);
          v10 = (char *)a1[2];
        }
      }
    }
    a1[3] = 0;
    j__free(v10);
  }
  operator delete(a1, 0x40u);
}
