void __fastcall sub_422B0(void *a1)
{
  void *v1; // rbp
  _QWORD *v2; // rbx
  __int64 v3; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_422B0(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 12);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v2[13] = 0;
        qfree();
      }
      if ( v2[4] )
      {
        v2[5] = 0;
        qfree();
      }
      operator delete(v2, 0x78u);
    }
    while ( v1 );
  }
}

