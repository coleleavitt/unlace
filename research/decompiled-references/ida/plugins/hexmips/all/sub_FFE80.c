__int64 __fastcall sub_FFE80(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 i; // rbp
  __int64 v3; // r12
  __int64 j; // rbp

  sub_62A80(a1 + 72);
  sub_62A80(a1 + 68);
  a1[56] = &unk_4CBD20;
  qfree();
  qfree();
  if ( a1[57] )
  {
    v1 = a1[58];
    if ( v1 )
    {
      for ( i = 0; i != v1; ++i )
        qfree();
    }
    a1[58] = 0;
    qfree();
  }
  a1[44] = &unk_4CBD20;
  qfree();
  qfree();
  if ( a1[45] )
  {
    v3 = a1[46];
    if ( v3 )
    {
      for ( j = 0; j != v3; ++j )
        qfree();
    }
    a1[46] = 0;
    qfree();
  }
  return sub_FEFF0(a1);
}

