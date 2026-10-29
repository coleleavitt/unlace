void *__fastcall sub_4D00(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  void *result; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // r12
  __int64 v9; // rdi

  *a1 = off_1BAC8;
  v2 = a1[23];
  if ( v2 )
  {
    v3 = a1[24];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 80 * i);
        if ( v5[6] )
        {
          v5[7] = 0;
          qfree();
        }
        if ( v5[3] )
        {
          v5[4] = 0;
          qfree();
        }
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
        }
        v2 = a1[23];
      }
    }
    a1[24] = 0;
    qfree();
  }
  result = &unk_1BC90;
  v7 = a1 + 22;
  v8 = a1 + 10;
  *(v8 - 10) = &unk_1BC90;
  do
  {
    v9 = *(v7 - 3);
    v7 -= 3;
    if ( v9 )
    {
      v7[1] = 0;
      result = (void *)qfree();
    }
  }
  while ( v8 != v7 );
  return result;
}

