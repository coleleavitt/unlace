__int64 __fastcall sub_201770(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdi

  *a1 = off_4DEEA8;
  v2 = a1[20];
  if ( v2 )
  {
    a1[21] = 0;
    qfree(v2);
  }
  qfree(a1[18]);
  v3 = a1[15];
  if ( v3 )
  {
    a1[16] = 0;
    qfree(v3);
  }
  result = qfree(a1[13]);
  v5 = a1[10];
  if ( v5 )
  {
    a1[11] = 0;
    return qfree(v5);
  }
  return result;
}

