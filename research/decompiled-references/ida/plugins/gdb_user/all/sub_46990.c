void __fastcall sub_46990(void *a1)
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
      sub_46990(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 10);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v2[11] = 0;
        qfree();
      }
      if ( v2[6] )
      {
        v2[7] = 0;
        qfree();
      }
      operator delete(v2, 0x1D8u);
    }
    while ( v1 );
  }
}

