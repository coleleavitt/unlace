void *__fastcall sub_70140(__int64 *a1, __int64 *a2)
{
  const char *v3; // rsi
  size_t v4; // r12
  const void *v5; // rbx
  void *result; // rax

  sub_6A9B0(a2, *a1);
  sub_6A9B0(a2, a1[1] + 1);
  v3 = s1;
  if ( a1[3] )
    v3 = (const char *)a1[2];
  sub_6AA10(a2, v3);
  v4 = a1[6];
  v5 = (const void *)a1[5];
  if ( HIDWORD(v4) )
    sub_662B0(a2, v3);
  result = (void *)sub_69D50(a2);
  if ( v4 )
    return sub_67AC0(a2, v5, v4);
  return result;
}
