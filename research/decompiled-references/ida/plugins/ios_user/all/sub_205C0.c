__int64 __fastcall sub_205C0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  _QWORD *v6; // rbx
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
        v6 = (_QWORD *)(v2 + v4);
        if ( *(_QWORD *)(v2 + v4 + 112) )
        {
          v6[15] = 0;
          qfree();
        }
        if ( v6[11] )
        {
          v6[12] = 0;
          qfree();
        }
        if ( v6[8] )
        {
          v6[9] = 0;
          qfree();
        }
        if ( v6[5] )
        {
          v6[6] = 0;
          qfree();
        }
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
        }
        v2 = *a1;
        v4 += 136;
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

