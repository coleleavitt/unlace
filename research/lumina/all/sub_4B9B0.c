void __fastcall sub_4B9B0(_QWORD *a1)
{
  void *v2; // rdi
  char *v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  char *v6; // rax
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi

  v2 = (void *)a1[16];
  if ( v2 )
  {
    a1[17] = 0;
    j__free(v2);
  }
  v3 = (char *)a1[10];
  if ( v3 )
  {
    v4 = a1[11];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = &v3[24 * i];
        v7 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          j__free(v7);
          v3 = (char *)a1[10];
        }
      }
    }
    a1[11] = 0;
    j__free(v3);
  }
  v8 = (void *)a1[7];
  if ( v8 )
  {
    a1[8] = 0;
    j__free(v8);
  }
  v9 = (void *)a1[4];
  if ( v9 )
  {
    a1[5] = 0;
    j__free(v9);
  }
}
