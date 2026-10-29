void __fastcall sub_2CC00(_QWORD *a1)
{
  _QWORD *i; // rbx
  _QWORD *v3; // rdi

  *a1 = &unk_46C50;
  a1[1] = 0;
  a1[2] = 0;
  a1[5] = 0;
  if ( a1[526] )
  {
    a1[527] = 0;
    qfree();
  }
  if ( a1[523] )
  {
    a1[524] = 0;
    qfree();
  }
  for ( i = (_QWORD *)a1[519]; a1 + 519 != i; --a1[521] )
  {
    v3 = i;
    i = (_QWORD *)*i;
    *(_QWORD *)v3[1] = i;
    i[1] = v3[1];
    qfree();
  }
  operator delete(a1, 0x1098u);
}

