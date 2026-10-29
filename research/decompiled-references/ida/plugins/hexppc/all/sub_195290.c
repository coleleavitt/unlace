__int64 __fastcall sub_195290(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbx
  __int64 v6; // r12

  *a1 = &unk_4D8DE8;
  if ( a1[11] )
  {
    a1[12] = 0;
    qfree();
  }
  qfree();
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  result = qfree();
  v3 = a1[1];
  if ( v3 )
  {
    v4 = a1[2];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 40 * i;
        if ( *(_QWORD *)(v6 + 16) )
        {
          *(_QWORD *)(v6 + 24) = 0;
          qfree();
        }
        qfree();
        v3 = a1[1];
      }
    }
    a1[2] = 0;
    return qfree();
  }
  return result;
}

