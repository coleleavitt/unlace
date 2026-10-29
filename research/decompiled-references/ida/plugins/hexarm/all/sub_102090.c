__int64 __fastcall sub_102090(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // r12
  __int64 i; // rbx

  *a1 = &unk_4E7D80;
  qfree();
  result = qfree();
  if ( a1[1] )
  {
    v2 = a1[2];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
        qfree();
    }
    a1[2] = 0;
    return qfree();
  }
  return result;
}

