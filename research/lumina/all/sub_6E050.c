void *__fastcall sub_6E050(__int64 a1, __int64 *a2)
{
  const char *v3; // rsi
  __int64 v4; // rsi
  size_t v5; // r12
  const void *v6; // rbx
  void *result; // rax

  v3 = s1;
  if ( *(_QWORD *)(a1 + 8) )
    v3 = *(const char **)a1;
  sub_6AA10(a2, v3);
  v4 = *(unsigned int *)(a1 + 24);
  sub_69D50(a2);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(const void **)(a1 + 32);
  if ( HIDWORD(v5) )
    sub_662B0(a2, v4);
  result = (void *)sub_69D50(a2);
  if ( v5 )
    return sub_67AC0(a2, v6, v5);
  return result;
}
