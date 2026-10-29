void *__fastcall sub_6A70(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *result; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  __int64 v7; // rdi

  *a1 = off_1E690;
  v2 = a1[27];
  if ( v2 )
  {
    a1[28] = 0;
    qfree(v2);
  }
  v3 = a1[24];
  if ( v3 )
  {
    a1[25] = 0;
    qfree(v3);
  }
  result = &unk_1EB20;
  v5 = a1 + 19;
  v6 = a1 + 7;
  *(v6 - 7) = (__int64)&unk_1EB20;
  do
  {
    v7 = *v5;
    if ( *v5 )
    {
      v5[1] = 0;
      result = (void *)qfree(v7);
    }
    v5 -= 3;
  }
  while ( v5 != v6 );
  return result;
}

