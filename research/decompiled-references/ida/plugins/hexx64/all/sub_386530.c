void *__fastcall sub_386530(_QWORD *a1)
{
  __int64 v2; // rdi
  void *result; // rax
  __int64 *v4; // rbx
  __int64 *v5; // rbp
  __int64 v6; // rdi

  *a1 = off_4E6680;
  v2 = a1[24];
  if ( v2 )
  {
    a1[25] = 0;
    qfree(v2);
  }
  result = &unk_4EBE48;
  v4 = a1 + 19;
  v5 = a1 + 7;
  *(v5 - 7) = (__int64)&unk_4EBE48;
  do
  {
    v6 = *v4;
    if ( *v4 )
    {
      v4[1] = 0;
      result = (void *)qfree(v6);
    }
    v4 -= 3;
  }
  while ( v4 != v5 );
  return result;
}

