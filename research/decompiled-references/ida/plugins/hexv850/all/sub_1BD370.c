void __fastcall sub_1BD370(_QWORD *a1)
{
  _QWORD *v1; // r12
  __int64 v2; // r13
  __int64 i; // rbx

  v1 = (_QWORD *)a1[1];
  *a1 = off_4B21F8;
  if ( v1 )
  {
    if ( *v1 )
    {
      v2 = v1[1];
      if ( v2 )
      {
        for ( i = 0; i != v2; ++i )
          cleanup_argloc();
      }
      v1[1] = 0;
      qfree();
    }
    qfree();
  }
  operator delete(a1, 0x20u);
}

