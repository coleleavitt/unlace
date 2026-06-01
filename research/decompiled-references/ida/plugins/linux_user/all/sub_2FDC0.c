__int64 __fastcall sub_2FDC0(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rbp

  v1 = a1[12];
  result = a1[13];
  v3 = v1 + 8 * result;
  if ( v1 != v3 )
  {
    do
    {
      v1 += 8;
      result = qfree();
    }
    while ( v3 != v1 );
    v3 = a1[12];
  }
  if ( v3 )
  {
    a1[13] = 0;
    result = qfree();
    a1[12] = 0;
    a1[14] = 0;
  }
  if ( a1[9] )
  {
    a1[10] = 0;
    result = qfree();
    a1[9] = 0;
    a1[11] = 0;
  }
  return result;
}

