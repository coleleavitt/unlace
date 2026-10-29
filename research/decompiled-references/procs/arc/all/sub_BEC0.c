void __fastcall sub_BEC0(void **a1)
{
  void **v1; // r12
  void **v2; // r13
  char *v3; // rbp
  char *v4; // rbx
  __int64 v5; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      v3 = (char *)(v1 + 5);
      v4 = (char *)(v1 + 371);
      sub_BEC0(v1[3]);
      v1 = (void **)v1[2];
      while ( v4 != v3 )
      {
        while ( 1 )
        {
          v5 = *((_QWORD *)v4 - 4);
          v4 -= 48;
          if ( !v5 )
            break;
          *((_QWORD *)v4 + 3) = 0;
          qfree(v5);
          if ( v4 == v3 )
            goto LABEL_7;
        }
      }
LABEL_7:
      operator delete(v2, 0xB98u);
    }
    while ( v1 );
  }
}
