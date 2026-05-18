void __fastcall sub_6C5C0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  char *v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  char *v7; // rax
  void *v8; // rdi

  v2 = (void *)a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    j__free(v3);
  }
  v4 = (char *)a1[1];
  if ( v4 )
  {
    v5 = a1[2];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = &v4[24 * i];
        v8 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          j__free(v8);
          v4 = (char *)a1[1];
        }
      }
    }
    a1[2] = 0;
    j__free(v4);
  }
}
