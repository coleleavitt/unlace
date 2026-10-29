__int64 *__fastcall sub_4230(_QWORD *a1)
{
  __int64 *result; // rax
  _QWORD *v2; // rbx

  *a1 = off_A648;
  if ( a1[23] )
  {
    a1[24] = 0;
    qfree();
  }
  result = qword_AC30;
  v2 = a1 + 19;
  *a1 = qword_AC30;
  do
  {
    if ( *v2 )
    {
      v2[1] = 0;
      result = (__int64 *)qfree();
    }
    v2 -= 3;
  }
  while ( v2 != a1 + 7 );
  return result;
}

