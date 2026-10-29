void *__fastcall sub_103C70(__int64 a1, double a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // rbp
  void *result; // rax
  __int64 v8; // rdi

  v3 = a1 + 216;
  v4 = (__int64 *)(a1 + 152);
  *(_QWORD *)(v3 - 216) = off_4DD2C0;
  sub_66C80(v3, a2);
  v5 = a1 + 184;
  v6 = (__int64 *)(a1 + 56);
  sub_66C80(v5, a2);
  result = &unk_4EBE48;
  *(v6 - 7) = (__int64)&unk_4EBE48;
  do
  {
    v8 = *v4;
    if ( *v4 )
    {
      v4[1] = 0;
      result = (void *)qfree(v8);
    }
    v4 -= 3;
  }
  while ( v4 != v6 );
  return result;
}

