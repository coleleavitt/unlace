void __fastcall sub_7C770(char **a1)
{
  char *v2; // rdi
  char *v3; // r14
  __int64 v4; // r12
  char *i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      for ( i = nullptr; i != v3; ++i )
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 32];
        if ( v7 )
        {
          *((_QWORD *)v6 + 5) = 0;
          j__free(v7);
        }
        v8 = *((void **)v6 + 1);
        if ( v8 )
        {
          *((_QWORD *)v6 + 2) = 0;
          j__free(v8);
        }
        v2 = *a1;
        v4 += 56;
      }
    }
    a1[1] = nullptr;
    j__free(v2);
  }
}
