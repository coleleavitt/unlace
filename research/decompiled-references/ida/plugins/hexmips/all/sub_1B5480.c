void __fastcall sub_1B5480(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax

  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  v1 = *a1;
  if ( *a1 )
  {
    v2 = a1[1];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree();
  }
}

