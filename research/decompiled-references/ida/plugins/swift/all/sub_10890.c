__int64 __fastcall sub_10890(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
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
        v2 = *a1;
        v4 += 56;
      }
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}

