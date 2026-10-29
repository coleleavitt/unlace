void __fastcall sub_196F10(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 i; // rbx
  __int64 v6; // rdi

  v2 = a1[8];
  *a1 = &off_4D8948;
  if ( v2 )
  {
    v3 = a1[9];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        if ( *(_QWORD *)(v2 + v4) )
        {
          *(_QWORD *)(v2 + v4 + 8) = 0;
          qfree();
          v2 = a1[8];
        }
        v4 += 56;
      }
    }
    a1[9] = 0;
    qfree();
  }
  v6 = a1[4];
  *a1 = &unk_4E7DC0;
  if ( v6 )
  {
    a1[5] = 0;
    qfree();
  }
  qfree();
  operator delete(a1, 0x68u);
}

