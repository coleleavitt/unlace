__int64 __fastcall sub_4A30(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = a1 + 27;
  do
  {
    if ( *v1 )
    {
      v1[1] = 0;
      result = qfree();
    }
    v1 -= 3;
  }
  while ( v1 != a1 + 3 );
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}
