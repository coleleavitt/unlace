void *__fastcall sub_67050(_QWORD *a1, double a2)
{
  _QWORD *v2; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  void *result; // rax

  v2 = a1 + 3;
  v4 = a1 + 27;
  *a1 = off_4EC750;
  do
  {
    v5 = (__int64)v4;
    v4 -= 4;
    sub_66C80(v5, a2);
  }
  while ( v4 != v2 );
  v6 = a1[1];
  result = &unk_4EC808;
  *a1 = &unk_4EC808;
  if ( v6 )
  {
    a1[2] = 0;
    return (void *)qfree(v6);
  }
  return result;
}

