void __fastcall sub_3BD1A0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  __int64 v4; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = a1[1];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = v1 + 40 * i;
        if ( *(_QWORD *)(v4 + 16) )
        {
          *(_QWORD *)(v4 + 24) = 0;
          qfree();
          v1 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree();
  }
}

