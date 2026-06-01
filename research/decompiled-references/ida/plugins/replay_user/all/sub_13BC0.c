__int64 __fastcall sub_13BC0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx

  v2 = *a2;
  if ( !*a2 )
    return 0xFFFFFFFFLL;
  v3 = a2[1];
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = (_QWORD *)(v2 + (i << 6));
      if ( v5[5] )
      {
        v5[6] = 0;
        qfree();
      }
      if ( v5[1] )
      {
        v5[2] = 0;
        qfree();
      }
      v2 = *a2;
    }
  }
  a2[1] = 0;
  qfree();
  *a2 = 0;
  a2[2] = 0;
  return 0xFFFFFFFFLL;
}

