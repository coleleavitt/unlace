__int64 __fastcall sub_375D0(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi

  v5 = a1[14];
  if ( v5 )
  {
    a1[15] = 0;
    result = qfree(v5, a2, a3, a4);
  }
  v7 = a1[11];
  if ( v7 )
  {
    a1[12] = 0;
    result = qfree(v7, a2, a3, a4);
  }
  v8 = a1[8];
  if ( v8 )
  {
    a1[9] = 0;
    result = qfree(v8, a2, a3, a4);
  }
  v9 = a1[5];
  if ( v9 )
  {
    a1[6] = 0;
    result = qfree(v9, a2, a3, a4);
  }
  v10 = a1[2];
  if ( v10 )
  {
    a1[3] = 0;
    return qfree(v10, a2, a3, a4);
  }
  return result;
}

