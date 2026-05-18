void __fastcall sub_31BA0(char **a1)
{
  char *v2; // rdi
  char *v3; // r12
  char *i; // rbx
  char *v5; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = i;
        sub_176520(&v2[32 * (_QWORD)v5]);
        v2 = *a1;
      }
    }
    a1[1] = nullptr;
    j__free(v2);
  }
}
