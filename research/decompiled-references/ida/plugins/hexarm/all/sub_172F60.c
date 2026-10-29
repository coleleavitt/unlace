void __fastcall sub_172F60(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 i; // rbx

  *a1 = &unk_4E7D80;
  qfree();
  qfree();
  if ( a1[1] )
  {
    v1 = a1[2];
    if ( v1 )
    {
      for ( i = 0; i != v1; ++i )
        qfree();
    }
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x60u);
}

