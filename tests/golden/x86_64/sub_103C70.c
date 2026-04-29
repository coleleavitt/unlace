void *__fastcall sub_103C70(__int64 *a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 *v5; // rbp
  void *result; // rax
  __int64 v7; // rdi

  v2 = a1 + 27;
  v3 = a1 + 19;
  *(v2 - 27) = (__int64)off_4DD2C0;
  sub_66C80(v2);
  v4 = a1 + 23;
  v5 = a1 + 7;
  sub_66C80(v4);
  result = &unk_4EBE48;
  *(v5 - 7) = (__int64)&unk_4EBE48;
  do
  {
    v7 = *v3;
    if ( *v3 )
    {
      v3[1] = 0;
      result = (void *)qfree(v7);
    }
    v3 -= 3;
  }
  while ( v3 != v5 );
  return result;
}
