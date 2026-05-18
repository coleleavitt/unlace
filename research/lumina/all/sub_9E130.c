void __fastcall sub_9E130(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbx
  char *v5; // rbp
  void *v6; // rdi
  void *v7; // rdi

  *a1 = &off_238FC8;
  v2 = (char *)a1[2];
  if ( v2 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[72 * i];
        v6 = *((void **)v5 + 6);
        if ( v6 )
        {
          *((_QWORD *)v5 + 7) = 0;
          j__free(v6);
        }
        v7 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          j__free(v7);
        }
        v2 = (char *)a1[2];
      }
    }
    a1[3] = 0;
    j__free(v2);
  }
  operator delete(a1, 0x30u);
}
