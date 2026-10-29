__int64 __fastcall sub_1939E0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 i; // rbx
  __int64 v6; // rdi

  v2 = a1[8];
  *a1 = &off_4CB3E8;
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
  *a1 = &unk_4D8DC0;
  if ( v6 )
  {
    a1[5] = 0;
    qfree();
  }
  return qfree();
}

