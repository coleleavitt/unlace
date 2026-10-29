__int64 __fastcall sub_3B6D50(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r13
  __int64 i; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi

  *(a1 - 4) = &unk_4BE4D8;
  v2 = a1[24];
  *a1 = &unk_4BE510;
  a1[23] = &off_4BE5D0;
  if ( v2 )
  {
    v3 = a1[25];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 48 * i;
        if ( *(_QWORD *)(v5 + 16) )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree();
          v2 = a1[24];
        }
      }
    }
    a1[25] = 0;
    qfree();
  }
  v6 = a1 + 22;
  *a1 = &unk_4BDC88;
  do
  {
    v7 = *(v6 - 3);
    v6 -= 3;
    if ( v7 )
    {
      v6[1] = 0;
      qfree();
    }
  }
  while ( v6 != a1 + 10 );
  v8 = *(a1 - 3);
  *(a1 - 4) = &off_4B9FA8;
  if ( v8 )
  {
    *(a1 - 2) = 0;
    qfree();
  }
  return qfree();
}

