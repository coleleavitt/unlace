void __fastcall sub_26090(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx

  *a1 = &off_44F68;
  v2 = a1[5];
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 96 * i);
        if ( v5[3] )
        {
          v5[4] = 0;
          qfree();
        }
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
        }
        v2 = a1[5];
      }
    }
    a1[6] = 0;
    qfree();
  }
  operator delete(a1, 0x50u);
}

