void *__fastcall sub_6AAA0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v5; // rsi
  size_t v6; // r12
  const void *v7; // r14
  void *result; // rax
  const char *v9; // rsi

  v5 = *(unsigned int *)(a1 + 12);
  sub_69D50(a2);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(const void **)(a1 + 16);
  if ( HIDWORD(v6) )
    sub_662B0(a2, v5);
  sub_69D50(a2);
  if ( v6 )
    sub_67AC0(a2, v7, v6);
  sub_67AC0(a2, (const void *)(a1 + 40), 6u);
  result = (void *)sub_69D50(a2);
  if ( a3 > 2 )
  {
    v9 = s1;
    if ( *(_QWORD *)(a1 + 56) )
      v9 = *(const char **)(a1 + 48);
    sub_6AA10(a2, v9);
    if ( *(_QWORD *)(a1 + 80) )
      return sub_6AA10(a2, *(const char **)(a1 + 72));
    else
      return sub_6AA10(a2, s1);
  }
  return result;
}
