void __fastcall sub_22FA0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax

  v1 = a1[38];
  if ( v1 )
  {
    v2 = a1[39];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = a1[38];
        }
      }
    }
    a1[39] = 0;
    qfree();
  }
  if ( a1[35] )
  {
    a1[36] = 0;
    qfree();
  }
  if ( a1[32] )
  {
    a1[33] = 0;
    qfree();
  }
  if ( a1[22] )
  {
    a1[23] = 0;
    qfree();
  }
  if ( a1[19] )
  {
    a1[20] = 0;
    qfree();
  }
  if ( a1[16] )
  {
    a1[17] = 0;
    qfree();
  }
}

