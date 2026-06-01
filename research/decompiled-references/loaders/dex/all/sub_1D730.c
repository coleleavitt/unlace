__int64 __fastcall sub_1D730(_QWORD *a1)
{
  const char *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi

  *a1 = off_27D28;
  close_linput(a1[3]);
  v2 = s1;
  if ( a1[5] )
    v2 = (const char *)a1[4];
  result = qunlink(v2);
  v4 = a1[7];
  a1[3] = 0;
  if ( v4 )
  {
    a1[8] = 0;
    result = qfree(v4);
  }
  v5 = a1[4];
  if ( v5 )
  {
    a1[5] = 0;
    return qfree(v5);
  }
  return result;
}
