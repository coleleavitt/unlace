__int64 __fastcall sub_212390(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax

  *a1 = off_4CC840;
  if ( a1[12] )
  {
    a1[13] = 0;
    qfree();
  }
  v1 = a1[9];
  if ( v1 )
  {
    v2 = a1[10];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree();
  }
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  return j__qfree();
}

