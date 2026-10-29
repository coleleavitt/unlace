__int64 __fastcall sub_8DA0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = a1[15];
  if ( v2 )
  {
    a1[16] = 0;
    result = qfree(v2);
  }
  v4 = a1[12];
  if ( v4 )
  {
    a1[13] = 0;
    result = qfree(v4);
  }
  v5 = a1[9];
  if ( v5 )
  {
    a1[10] = 0;
    result = qfree(v5);
  }
  v6 = a1[5];
  if ( v6 )
  {
    a1[6] = 0;
    return qfree(v6);
  }
  return result;
}

