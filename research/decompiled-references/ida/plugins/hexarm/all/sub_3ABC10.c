__int64 __fastcall sub_3ABC10(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi

  v2 = a1[10];
  *a1 = off_4E1B10;
  if ( v2 )
  {
    v3 = a1[11];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 40 * i;
        if ( *(_QWORD *)(v5 + 16) )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree();
          v2 = a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree();
  }
  v6 = a1[5];
  *a1 = off_4D63B8;
  if ( v6 )
  {
    a1[6] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  return j__qfree();
}

