_UNKNOWN **__fastcall sub_4470(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  _UNKNOWN **result; // rax

  *a1 = off_12958;
  v2 = a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  v3 = a1[1];
  result = &off_12D18;
  *a1 = &off_12D18;
  if ( v3 )
  {
    a1[2] = 0;
    return (_UNKNOWN **)qfree(v3);
  }
  return result;
}
