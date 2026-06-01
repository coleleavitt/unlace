void __fastcall sub_128D0(void *a1)
{
  void *v1; // rbx
  _QWORD *v2; // rbp
  void **v3; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_128D0(*((void **)v1 + 3));
      v3 = *((void ***)v1 + 9);
      v1 = *((void **)v1 + 2);
      sub_12790(v3);
      if ( v2[4] )
      {
        v2[5] = 0;
        qfree();
      }
      operator delete(v2, 0x68u);
    }
    while ( v1 );
  }
}

