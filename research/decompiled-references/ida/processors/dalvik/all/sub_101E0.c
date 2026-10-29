void *__fastcall sub_101E0(_QWORD *a1, const char *a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  void *result; // rax
  __int64 v5; // rdi

  v2 = a1 + 19;
  v3 = a1 + 7;
  *a1 = off_197D0;
  qfree(a1[26], a2);
  result = &unk_19C30;
  *a1 = &unk_19C30;
  do
  {
    v5 = *v2;
    if ( *v2 )
    {
      v2[1] = 0;
      result = (void *)qfree(v5, a2);
    }
    v2 -= 3;
  }
  while ( v2 != v3 );
  return result;
}

