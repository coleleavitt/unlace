__int64 __fastcall sub_A630(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi

  v2 = a1[9];
  if ( v2 )
  {
    v3 = a1[10];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = (__int64 *)(v2 + v4);
        v7 = *(_QWORD *)(v2 + v4 + 24);
        if ( v7 )
        {
          v6[4] = 0;
          qfree(v7);
        }
        v8 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v8);
        }
        v2 = a1[9];
        v4 += 56;
      }
    }
    a1[10] = 0;
    result = qfree(v2);
  }
  v10 = a1[5];
  if ( v10 )
  {
    a1[6] = 0;
    result = qfree(v10);
  }
  v11 = a1[1];
  if ( v11 )
  {
    a1[2] = 0;
    return qfree(v11);
  }
  return result;
}
