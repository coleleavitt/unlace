void __fastcall sub_12C30(void **a1)
{
  char *v2; // rdi
  void *v3; // r13
  void *i; // rbp
  char *v5; // rbx

  sub_12BC0(a1[9]);
  v2 = (char *)a1[4];
  if ( v2 )
  {
    v3 = a1[5];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; i = (char *)i + 1 )
      {
        v5 = &v2[80 * (_QWORD)i];
        if ( *((_QWORD *)v5 + 5) )
        {
          *((_QWORD *)v5 + 6) = 0;
          qfree();
        }
        if ( *((_QWORD *)v5 + 2) )
        {
          *((_QWORD *)v5 + 3) = 0;
          qfree();
        }
        v2 = (char *)a1[4];
      }
    }
    a1[5] = nullptr;
    qfree();
  }
  if ( *a1 )
  {
    a1[1] = nullptr;
    qfree();
  }
}

