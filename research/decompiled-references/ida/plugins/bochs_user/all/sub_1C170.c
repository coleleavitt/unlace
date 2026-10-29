void *__fastcall sub_1C170(_QWORD *a1)
{
  void *result; // rax
  _QWORD *i; // rbx
  _QWORD *v4; // rdi

  result = &unk_725B0;
  *a1 = &unk_725B0;
  a1[1] = 0;
  a1[2] = 0;
  a1[5] = 0;
  if ( a1[526] )
  {
    a1[527] = 0;
    result = (void *)qfree();
  }
  if ( a1[523] )
  {
    a1[524] = 0;
    result = (void *)qfree();
  }
  for ( i = (_QWORD *)a1[519]; a1 + 519 != i; --a1[521] )
  {
    v4 = i;
    i = (_QWORD *)*i;
    *(_QWORD *)v4[1] = i;
    i[1] = v4[1];
    result = (void *)qfree();
  }
  return result;
}

