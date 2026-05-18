void __fastcall sub_A0B60(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi

  v2 = (char *)a1[8];
  *a1 = &off_238FF8;
  if ( v2 )
  {
    v3 = a1[9];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[24 * i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          j__free(v6);
          v2 = (char *)a1[8];
        }
      }
    }
    a1[9] = 0;
    j__free(v2);
  }
  v7 = (void *)a1[5];
  if ( v7 )
  {
    a1[6] = 0;
    j__free(v7);
  }
  v8 = (void *)a1[2];
  if ( v8 )
  {
    a1[3] = 0;
    j__free(v8);
  }
  operator delete(a1, 0x88u);
}
