void __fastcall sub_12CE0(void *a1)
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
      sub_12CE0(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 14);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v2[15] = 0;
        qfree();
      }
      if ( v2[10] )
      {
        v2[11] = 0;
        qfree();
      }
      if ( v2[7] )
      {
        v2[8] = 0;
        qfree();
      }
      operator delete(v2, 0x90u);
    }
    while ( v1 );
  }
}

